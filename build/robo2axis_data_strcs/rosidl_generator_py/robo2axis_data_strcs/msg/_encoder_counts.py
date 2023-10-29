# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo2axis_data_strcs:msg/EncoderCounts.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EncoderCounts(type):
    """Metaclass of message 'EncoderCounts'."""

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
            module = import_type_support('robo2axis_data_strcs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo2axis_data_strcs.msg.EncoderCounts')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__encoder_counts
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__encoder_counts
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__encoder_counts
            cls._TYPE_SUPPORT = module.type_support_msg__msg__encoder_counts
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__encoder_counts

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EncoderCounts(metaclass=Metaclass_EncoderCounts):
    """Message class 'EncoderCounts'."""

    __slots__ = [
        '_axis1',
        '_axis2',
    ]

    _fields_and_field_types = {
        'axis1': 'int32',
        'axis2': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.axis1 = kwargs.get('axis1', int())
        self.axis2 = kwargs.get('axis2', int())

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
        if self.axis1 != other.axis1:
            return False
        if self.axis2 != other.axis2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def axis1(self):
        """Message field 'axis1'."""
        return self._axis1

    @axis1.setter
    def axis1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis1' field must be an integer in [-2147483648, 2147483647]"
        self._axis1 = value

    @builtins.property
    def axis2(self):
        """Message field 'axis2'."""
        return self._axis2

    @axis2.setter
    def axis2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis2' field must be an integer in [-2147483648, 2147483647]"
        self._axis2 = value
