# generated from rosidl_generator_py/resource/_idl.py.em
# with input from assessment_interfaces:msg/ItemHolder.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ItemHolder(type):
    """Metaclass of message 'ItemHolder'."""

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
                'assessment_interfaces.msg.ItemHolder')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__item_holder
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__item_holder
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__item_holder
            cls._TYPE_SUPPORT = module.type_support_msg__msg__item_holder
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__item_holder

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ItemHolder(metaclass=Metaclass_ItemHolder):
    """Message class 'ItemHolder'."""

    __slots__ = [
        '_robot_id',
        '_holding_item',
        '_item_colour',
        '_item_value',
    ]

    _fields_and_field_types = {
        'robot_id': 'string',
        'holding_item': 'boolean',
        'item_colour': 'string',
        'item_value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_id = kwargs.get('robot_id', str())
        self.holding_item = kwargs.get('holding_item', bool())
        self.item_colour = kwargs.get('item_colour', str())
        self.item_value = kwargs.get('item_value', int())

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
        if self.robot_id != other.robot_id:
            return False
        if self.holding_item != other.holding_item:
            return False
        if self.item_colour != other.item_colour:
            return False
        if self.item_value != other.item_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_id' field must be of type 'str'"
        self._robot_id = value

    @builtins.property
    def holding_item(self):
        """Message field 'holding_item'."""
        return self._holding_item

    @holding_item.setter
    def holding_item(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'holding_item' field must be of type 'bool'"
        self._holding_item = value

    @builtins.property
    def item_colour(self):
        """Message field 'item_colour'."""
        return self._item_colour

    @item_colour.setter
    def item_colour(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'item_colour' field must be of type 'str'"
        self._item_colour = value

    @builtins.property
    def item_value(self):
        """Message field 'item_value'."""
        return self._item_value

    @item_value.setter
    def item_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'item_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'item_value' field must be an unsigned integer in [0, 255]"
        self._item_value = value
