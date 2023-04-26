# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
import os

import numpy as np
import sys
print(sys.path)

from .shape_learner import SettingsStruct
from .shape_learner_manager import ShapeLearnerManager
from .shape_modeler import ShapeModeler

import rclpy
from rclpy.node import Node
from scipy import interpolate

from interface.msg import *

import matplotlib
import matplotlib.pyplot as plt



# matplotlib.use('TkAgg')  # Use the TkAgg backend instead of the PyCharm backend


def processShape_mergeStrokes(strokes):
    x_pts = []
    y_pts = []
    for s in strokes.strokes:
        stroke = np.array(s.stroke)
        x_pts.extend(stroke[0::2])
        y_pts.extend(stroke[1::2])

    return np.array(x_pts + y_pts)


def processShape_firstStroke(strokes):
    return strokes[0]


def processShape_longestStroke(strokes):
    length_longestStroke = 0
    for stroke in strokes:
        strokeLength = len(stroke.stroke)
        if strokeLength > length_longestStroke:
            longestStroke = stroke
            length_longestStroke = strokeLength
    return longestStroke

def downsampleShape(shape,numDesiredPoints=70,xyxyFormat=False, numPoints_shapeModeler=70):
    numPointsInShape = int(len(shape)/2)
    if(xyxyFormat):
        #make xyxy format
        x_shape = shape[::2]
        y_shape = shape[1::2]
    else:
        x_shape = shape[0:numPointsInShape]
        y_shape = shape[numPointsInShape:]

    # if isinstance(x_shape,np.ndarray): #convert arrays to lists for interp1d
    #     x_shape = (x_shape.T).tolist()[0]
    #     y_shape = (y_shape.T).tolist()[0]


    #make shape have the same number of points as the shape_modeler
    t_current = np.linspace(0, 1, numPointsInShape)
    t_desired = np.linspace(0, 1, numDesiredPoints)
    f = interpolate.interp1d(t_current, x_shape, kind='cubic')
    x_shape = f(t_desired)
    f = interpolate.interp1d(t_current, y_shape, kind='cubic')
    y_shape = f(t_desired)



    shape = []
    shape[0:numPoints_shapeModeler] = x_shape
    shape[numPoints_shapeModeler:] = y_shape

    return shape

def generateSettings(
        shapeType,
        init_datasetDirectory='./src/nao_writing/nao_writing/letter_model_datasets/alexis_set_for_children',
        update_datasetDirectory='./src/nao_writing/nao_writing/letter_model_datasets/alexis_set_for_children',
        demo_datasetDirectory='./src/nao_writing/nao_writing/letter_model_datasets/alexis_set_for_children',
):
    paramsToVary = [3]
    initialBounds_stdDevMultiples = np.array([[-6, 6]])
    doGroupwiseComparison = True
    initialParamValue = np.NaN
    initialBounds = np.array([[np.NaN, np.NaN]])
    init_datasetFile = init_datasetDirectory + '/' + shapeType + '.dat'
    update_datasetFile = update_datasetDirectory + '/' + shapeType + '.dat'
    demo_datasetFile = demo_datasetDirectory + '/' + shapeType + '.dat'

    # cwd = os.getcwd()
    # print(cwd)

    if not os.path.exists(init_datasetFile):
        raise RuntimeError("Dataset not found for shape " + shapeType)

    if not os.path.exists(update_datasetFile):
        try:
            with open(update_datasetFile, 'w') as f:
                pass
        except IOError:
            raise RuntimeError("no writing permission for file " + update_datasetFile)

    if not os.path.exists(demo_datasetFile):
        try:
            with open(demo_datasetFile, 'w') as f:
                pass
        except IOError:
            raise RuntimeError("no writing permission for file " + demo_datasetFile)

    try:
        datasetParam = init_datasetDirectory + '/params.dat'
        with open(datasetParam, 'r') as f:
            line = f.readline()
            test = line.replace('[', '').replace(']\n', '') == shapeType
            while test == False:
                line = f.readline()
                if line:
                    test = line.replace('[', '').replace(']\n', '') == shapeType
                else:
                    break
            if test:
                u = f.readline().replace('\n', '')
                initialParamValue = [(float)(s) for s in u.split(',')]
            else:
                initialParamValue = [0.0, 0.0, 0.0, 0.0, 0.0]
                print("parameters not found for shape " + shapeType + '\n' + 'Default : 0.0')

    except IOError:
        raise RuntimeError("no reading permission for file" + datasetParam)

    settings = SettingsStruct(shape_learning=shapeType,
                              paramsToVary=paramsToVary,
                              doGroupwiseComparison=True,
                              initDatasetFile=init_datasetFile,
                              updateDatasetFiles=[update_datasetFile, demo_datasetFile],
                              paramFile=datasetParam,
                              initialBounds=initialBounds,
                              initialBounds_stdDevMultiples=initialBounds_stdDevMultiples,
                              initialParamValue=initialParamValue,
                              minParamDiff=0.4)
    return settings

def plot_path(path, word):
    user_input = downsampleShape(path, xyxyFormat=True)
    user_input = np.reshape(user_input, (-1, 1))
    word_to_learn = word
    wordManager = ShapeLearnerManager(generateSettings)
    wordSeenBefore = wordManager.newCollection(word_to_learn)


    for i in range(len(word_to_learn)):
        shape = wordManager.startNextShapeLearner()

    shape = wordManager.respondToDemonstration(0, user_input)

    shape = ShapeModeler.normaliseShape(shape.path)
    numPointsInShape = int(len(shape) / 2)
    x_shape = shape[0:numPointsInShape]
    y_shape = shape[numPointsInShape:]
    plt.plot(x_shape, -y_shape, c=np.random.rand(3))
    plt.axis([-1, 1, -1, 1])

    plt.show()

class LearningWord(Node):

    def __init__(self):
        super().__init__('learning_word')
        self.strokes = None
        self.subscription = self.create_subscription(
            Strokes,
            'strokesMessage',
            self.strokes_message_callback, 10)
        self.subscription  # prevent unused variable warning

    def strokes_message_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.shape_type)
        self.strokes = msg
        self.create_shape_message()


    def create_shape_message(self, method='merge'):
        # preprocess to turn multiple strokes into one path
        if method == 'merge':
            path = processShape_mergeStrokes(self.strokes)
        elif method == 'longestStroke':
            path = processShape_longestStroke(self.strokes)
        else:
            path = processShape_firstStroke(self.strokes)

        # print(path)

        print(path)
        user_input = downsampleShape(path, xyxyFormat=False)
        user_input = np.reshape(user_input, (-1, 1))
        word_to_learn = self.strokes.shape_type
        print()
        wordManager = ShapeLearnerManager(generateSettings)
        wordSeenBefore = wordManager.newCollection(word_to_learn) # add word to shapeleanermanager

        print(generateSettings(word_to_learn))

        for i in range(len(word_to_learn)):
            shape = wordManager.startNextShapeLearner()
        # user_input = np.array([[466.],
        #                        [454.25433802],
        #                        [441.25271647],
        #                        [421.36911743],
        #                        [411.54339729],
        #                        [394.95526649],
        #                        [374.84761533],
        #                        [357.09148236],
        #                        [338.88664694],
        #                        [320.08446158],
        #                        [299.90720144],
        #                        [275.99171656],
        #                        [264.39988714],
        #                        [253.68349396],
        #                        [242.38014011],
        #                        [232.46533914],
        #                        [226.92132872],
        #                        [223.71466511],
        #                        [221.85408745],
        #                        [221.87563138],
        #                        [223.92829805],
        #                        [228.7688539],
        #                        [232.93118678],
        #                        [236.68269516],
        #                        [244.21173067],
        #                        [253.19185481],
        #                        [262.32775092],
        #                        [268.67099717],
        #                        [279.62408421],
        #                        [291.37723998],
        #                        [305.01603822],
        #                        [332.87144466],
        #                        [358.97327],
        #                        [412.25960821],
        #                        [428.65361097],
        #                        [440.35292235],
        #                        [448.33952148],
        #                        [449.74935359],
        #                        [457.99002299],
        #                        [466.50098172],
        #                        [471.16892902],
        #                        [476.30418786],
        #                        [482.30170709],
        #                        [484.07078544],
        #                        [486.22374433],
        #                        [487.94027283],
        #                        [490.52315284],
        #                        [490.92869916],
        #                        [492.04882903],
        #                        [491.97115159],
        #                        [492.00224994],
        #                        [491.99893695],
        #                        [492.01334783],
        #                        [491.99183062],
        #                        [491.42609404],
        #                        [489.14356792],
        #                        [487.72859385],
        #                        [484.71569229],
        #                        [485.02178532],
        #                        [485.00509085],
        #                        [484.99796636],
        #                        [485.00027038],
        #                        [485.03168858],
        #                        [484.85037836],
        #                        [487.27760847],
        #                        [489.64013332],
        #                        [495.52606372],
        #                        [497.56384122],
        #                        [500.87268922],
        #                        [502.],
        #                        [-440.],
        #                        [-444.192157],
        #                        [-447.62838941],
        #                        [-449.14115502],
        #                        [-450.07756904],
        #                        [-450.00629859],
        #                        [-450.14824868],
        #                        [-448.149649],
        #                        [-444.96217092],
        #                        [-438.99713083],
        #                        [-432.46842538],
        #                        [-422.20376969],
        #                        [-416.07671158],
        #                        [-408.41067589],
        #                        [-400.46847425],
        #                        [-388.34740383],
        #                        [-377.81594455],
        #                        [-365.12649524],
        #                        [-349.49492893],
        #                        [-337.60519769],
        #                        [-317.17609299],
        #                        [-298.59937859],
        #                        [-286.98435646],
        #                        [-275.78874427],
        #                        [-259.55003389],
        #                        [-246.99000304],
        #                        [-235.60854465],
        #                        [-231.58924323],
        #                        [-225.58311784],
        #                        [-221.09806357],
        #                        [-218.50519896],
        #                        [-218.13153842],
        #                        [-221.78687754],
        #                        [-245.11810761],
        #                        [-255.56622345],
        #                        [-264.27047665],
        #                        [-272.78346454],
        #                        [-276.60623741],
        #                        [-287.03031716],
        #                        [-305.26533777],
        #                        [-318.61684392],
        #                        [-336.71215232],
        #                        [-357.00377704],
        #                        [-363.61407177],
        #                        [-372.44042018],
        #                        [-379.55059114],
        #                        [-395.92585402],
        #                        [-401.16448877],
        #                        [-406.1868903],
        #                        [-411.28380211],
        #                        [-422.07021774],
        #                        [-425.52589394],
        #                        [-428.83023882],
        #                        [-429.93740616],
        #                        [-429.17043259],
        #                        [-419.92327244],
        #                        [-414.09359373],
        #                        [-400.58644588],
        #                        [-386.20057416],
        #                        [-367.68817342],
        #                        [-357.72982207],
        #                        [-346.2006924],
        #                        [-326.55989474],
        #                        [-317.51207081],
        #                        [-301.38269268],
        #                        [-289.12255718],
        #                        [-277.21816308],
        #                        [-270.67032057],
        #                        [-264.88764106],
        #                        [-263.]])
        shape = wordManager.respondToDemonstration(0, user_input)

        shape = ShapeModeler.normaliseShape(shape.path)
        numPointsInShape = int(len(shape) / 2)
        x_shape = shape[0:numPointsInShape]
        y_shape = shape[numPointsInShape:]
        plt.plot(x_shape, -y_shape, c=np.random.rand(3))
        plt.axis([-1, 1, -1, 1])

        plt.show()

        # further logic to be done
        # here I only plot it with plt for visualization
        # plot_path(path, self.strokes.shape_type)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = LearningWord()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
