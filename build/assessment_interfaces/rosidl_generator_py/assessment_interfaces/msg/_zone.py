# generated from rosidl_generator_py/resource/_idl.py.em
# with input from assessment_interfaces:msg/Zone.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Zone(type):
    """Metaclass of message 'Zone'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ZONE_CYAN': 1,
        'ZONE_PURPLE': 2,
        'ZONE_GREEN': 3,
        'ZONE_PINK': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('assessment_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assessment_interfaces.msg.Zone')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__zone
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__zone
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__zone
            cls._TYPE_SUPPORT = module.type_support_msg__msg__zone
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__zone

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ZONE_CYAN': cls.__constants['ZONE_CYAN'],
            'ZONE_PURPLE': cls.__constants['ZONE_PURPLE'],
            'ZONE_GREEN': cls.__constants['ZONE_GREEN'],
            'ZONE_PINK': cls.__constants['ZONE_PINK'],
        }

    @property
    def ZONE_CYAN(self):
        """Message constant 'ZONE_CYAN'."""
        return Metaclass_Zone.__constants['ZONE_CYAN']

    @property
    def ZONE_PURPLE(self):
        """Message constant 'ZONE_PURPLE'."""
        return Metaclass_Zone.__constants['ZONE_PURPLE']

    @property
    def ZONE_GREEN(self):
        """Message constant 'ZONE_GREEN'."""
        return Metaclass_Zone.__constants['ZONE_GREEN']

    @property
    def ZONE_PINK(self):
        """Message constant 'ZONE_PINK'."""
        return Metaclass_Zone.__constants['ZONE_PINK']


class Zone(metaclass=Metaclass_Zone):
    """
    Message class 'Zone'.

    Constants:
      ZONE_CYAN
      ZONE_PURPLE
      ZONE_GREEN
      ZONE_PINK
    """

    __slots__ = [
        '_zone',
        '_x',
        '_y',
        '_size',
    ]

    _fields_and_field_types = {
        'zone': 'uint8',
        'x': 'int16',
        'y': 'int16',
        'size': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.zone = kwargs.get('zone', int())
        self.x = kwargs.get('x', int())
        self.y = kwargs.get('y', int())
        self.size = kwargs.get('size', float())

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
        if self.zone != other.zone:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.size != other.size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def zone(self):
        """Message field 'zone'."""
        return self._zone

    @zone.setter
    def zone(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'zone' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'zone' field must be an unsigned integer in [0, 255]"
        self._zone = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'x' field must be an integer in [-32768, 32767]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'y' field must be an integer in [-32768, 32767]"
        self._y = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._size = value
