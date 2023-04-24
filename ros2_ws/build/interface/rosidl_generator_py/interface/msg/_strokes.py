# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface:msg/Strokes.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'params_to_vary'
# Member 'param_values'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Strokes(type):
    """Metaclass of message 'Strokes'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface.msg.Strokes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__strokes
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__strokes
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__strokes
            cls._TYPE_SUPPORT = module.type_support_msg__msg__strokes
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__strokes

            from interface.msg import Stroke
            if Stroke.__class__._TYPE_SUPPORT is None:
                Stroke.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Strokes(metaclass=Metaclass_Strokes):
    """Message class 'Strokes'."""

    __slots__ = [
        '_strokes',
        '_shape_id',
        '_shape_type',
        '_shapetype_code',
        '_params_to_vary',
        '_param_values',
    ]

    _fields_and_field_types = {
        'strokes': 'sequence<interface/Stroke>',
        'shape_id': 'uint32',
        'shape_type': 'string',
        'shapetype_code': 'uint32',
        'params_to_vary': 'sequence<uint8>',
        'param_values': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['interface', 'msg'], 'Stroke')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.strokes = kwargs.get('strokes', [])
        self.shape_id = kwargs.get('shape_id', int())
        self.shape_type = kwargs.get('shape_type', str())
        self.shapetype_code = kwargs.get('shapetype_code', int())
        self.params_to_vary = array.array('B', kwargs.get('params_to_vary', []))
        self.param_values = array.array('f', kwargs.get('param_values', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.strokes != other.strokes:
            return False
        if self.shape_id != other.shape_id:
            return False
        if self.shape_type != other.shape_type:
            return False
        if self.shapetype_code != other.shapetype_code:
            return False
        if self.params_to_vary != other.params_to_vary:
            return False
        if self.param_values != other.param_values:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def strokes(self):
        """Message field 'strokes'."""
        return self._strokes

    @strokes.setter
    def strokes(self, value):
        if __debug__:
            from interface.msg import Stroke
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Stroke) for v in value) and
                 True), \
                "The 'strokes' field must be a set or sequence and each value of type 'Stroke'"
        self._strokes = value

    @builtins.property
    def shape_id(self):
        """Message field 'shape_id'."""
        return self._shape_id

    @shape_id.setter
    def shape_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shape_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'shape_id' field must be an unsigned integer in [0, 4294967295]"
        self._shape_id = value

    @builtins.property
    def shape_type(self):
        """Message field 'shape_type'."""
        return self._shape_type

    @shape_type.setter
    def shape_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'shape_type' field must be of type 'str'"
        self._shape_type = value

    @builtins.property
    def shapetype_code(self):
        """Message field 'shapetype_code'."""
        return self._shapetype_code

    @shapetype_code.setter
    def shapetype_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shapetype_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'shapetype_code' field must be an unsigned integer in [0, 4294967295]"
        self._shapetype_code = value

    @builtins.property
    def params_to_vary(self):
        """Message field 'params_to_vary'."""
        return self._params_to_vary

    @params_to_vary.setter
    def params_to_vary(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'params_to_vary' array.array() must have the type code of 'B'"
            self._params_to_vary = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'params_to_vary' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._params_to_vary = array.array('B', value)

    @builtins.property
    def param_values(self):
        """Message field 'param_values'."""
        return self._param_values

    @param_values.setter
    def param_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'param_values' array.array() must have the type code of 'f'"
            self._param_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'param_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._param_values = array.array('f', value)
