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
        self.publisher_ = self.create_publisher(Shape, 'shapeMessage', 10)

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
    stroke_data = request.json
    print(stroke_data)
    msg = Shape()
    print(stroke_data, type(stroke_data))
    msg.shape_type = str(stroke_data)
    current_app.input_interpreter.publish_message(msg)

    return jsonify({"message": "Stroke data received successfully"})

# @app.teardown_appcontext
def shutdown_ros2(exception=None):
    if rclpy.ok():
        current_app.input_interpreter.destroy_node()
        rclpy.shutdown()

def ros2_spin_thread(input_interpreter):
    rclpy.spin(input_interpreter)

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
