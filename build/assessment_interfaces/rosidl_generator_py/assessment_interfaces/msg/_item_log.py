# generated from rosidl_generator_py/resource/_idl.py.em
# with input from assessment_interfaces:msg/ItemLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ItemLog(type):
    """Metaclass of message 'ItemLog'."""

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
            module = import_type_support('assessment_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assessment_interfaces.msg.ItemLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__item_log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__item_log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__item_log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__item_log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__item_log

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ItemLog(metaclass=Metaclass_ItemLog):
    """Message class 'ItemLog'."""

    __slots__ = [
        '_red_count',
        '_green_count',
        '_blue_count',
        '_total_count',
        '_red_value',
        '_green_value',
        '_blue_value',
        '_total_value',
    ]

    _fields_and_field_types = {
        'red_count': 'uint16',
        'green_count': 'uint16',
        'blue_count': 'uint16',
        'total_count': 'uint16',
        'red_value': 'uint16',
        'green_value': 'uint16',
        'blue_value': 'uint16',
        'total_value': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.red_count = kwargs.get('red_count', int())
        self.green_count = kwargs.get('green_count', int())
        self.blue_count = kwargs.get('blue_count', int())
        self.total_count = kwargs.get('total_count', int())
        self.red_value = kwargs.get('red_value', int())
        self.green_value = kwargs.get('green_value', int())
        self.blue_value = kwargs.get('blue_value', int())
        self.total_value = kwargs.get('total_value', int())

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
        if self.red_count != other.red_count:
            return False
        if self.green_count != other.green_count:
            return False
        if self.blue_count != other.blue_count:
            return False
        if self.total_count != other.total_count:
            return False
        if self.red_value != other.red_value:
            return False
        if self.green_value != other.green_value:
            return False
        if self.blue_value != other.blue_value:
            return False
        if self.total_value != other.total_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def red_count(self):
        """Message field 'red_count'."""
        return self._red_count

    @red_count.setter
    def red_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_count' field must be an unsigned integer in [0, 65535]"
        self._red_count = value

    @builtins.property
    def green_count(self):
        """Message field 'green_count'."""
        return self._green_count

    @green_count.setter
    def green_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'green_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'green_count' field must be an unsigned integer in [0, 65535]"
        self._green_count = value

    @builtins.property
    def blue_count(self):
        """Message field 'blue_count'."""
        return self._blue_count

    @blue_count.setter
    def blue_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_count' field must be an unsigned integer in [0, 65535]"
        self._blue_count = value

    @builtins.property
    def total_count(self):
        """Message field 'total_count'."""
        return self._total_count

    @total_count.setter
    def total_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'total_count' field must be an unsigned integer in [0, 65535]"
        self._total_count = value

    @builtins.property
    def red_value(self):
        """Message field 'red_value'."""
        return self._red_value

    @red_value.setter
    def red_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_value' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_value' field must be an unsigned integer in [0, 65535]"
        self._red_value = value

    @builtins.property
    def green_value(self):
        """Message field 'green_value'."""
        return self._green_value

    @green_value.setter
    def green_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'green_value' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'green_value' field must be an unsigned integer in [0, 65535]"
        self._green_value = value

    @builtins.property
    def blue_value(self):
        """Message field 'blue_value'."""
        return self._blue_value

    @blue_value.setter
    def blue_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_value' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_value' field must be an unsigned integer in [0, 65535]"
        self._blue_value = value

    @builtins.property
    def total_value(self):
        """Message field 'total_value'."""
        return self._total_value

    @total_value.setter
    def total_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_value' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'total_value' field must be an unsigned integer in [0, 65535]"
        self._total_value = value
