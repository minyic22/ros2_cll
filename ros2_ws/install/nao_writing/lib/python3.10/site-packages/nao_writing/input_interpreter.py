import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from interface.msg import *

from flask import Flask, request, jsonify, current_app
from typing import List
import threading
from flask_cors import CORS


class InputInterpreter(Node):
    def __init__(self):
        super().__init__('input_interpreter')
        self.publisher_ = self.create_publisher(Strokes, 'strokesMessage', 10)

    def publish_message(self, msg):
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.shape_type)


class CustomFlask(Flask):
    def __init__(self, interpreter, *args, **kwargs):
        super().__init__(__name__, *args, **kwargs)
        self.input_interpreter = interpreter


app = CustomFlask(None)
cors_config = {
    "origins": ["*"],
    "methods": ["GET", "POST", "PUT", "DELETE"],
    "allow_headers": ["Content-Type", "Authorization"],
}

CORS(app, resources={r"*": cors_config})


@app.route("/send_strokes", methods=["POST"])
def send_strokes():
    user_input = request.json

    strokes = process_user_input(user_input)
    current_app.input_interpreter.publish_message(strokes)
    return jsonify({"message": "User input received successfully"})


# @app.teardown_appcontext
def shutdown_ros2(exception=None):
    if rclpy.ok():
        current_app.input_interpreter.destroy_node()
        rclpy.shutdown()


def ros2_spin_thread(input_interpreter):
    rclpy.spin(input_interpreter)


def process_user_input(user_input):
    print(user_input, type(user_input))
    strokes = Strokes()
    strokes_value = []
    for s in user_input["strokes"]:
        stroke = Stroke()
        stroke_value = []
        for coordinates in s:
            x, y = coordinates.values()
            stroke_value.extend([float(x), float(y)])
        stroke.stroke = stroke_value
    strokes_value.append(stroke)
    strokes.strokes = strokes_value

    if user_input["shape_id"] is not None:
        strokes.shape_id = user_input["shape_id"]
    if user_input["shape_type"] is not None:
        strokes.shape_type = user_input["shape_type"]
    if user_input["shapetype_code"] is not None:
        strokes.shapetype_code = user_input["shapetype_code"]
    if user_input["params_to_vary"] is not None:
        strokes.params_to_vary = user_input["params_to_vary"]
    if user_input["param_value"] is not None:
        strokes.param_value = user_input["param_value"]
    return strokes


def main():
    rclpy.init()

    input_interpreter = InputInterpreter()
    app.input_interpreter = input_interpreter

    t = threading.Thread(target=ros2_spin_thread, args=(input_interpreter,))
    t.start()

    app.run(host="0.0.0.0", port=5000)

    t.join()

    shutdown_ros2()


if __name__ == '__main__':
    main()
