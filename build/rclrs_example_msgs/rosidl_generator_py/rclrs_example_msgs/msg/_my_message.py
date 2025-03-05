# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rclrs_example_msgs:msg/MyMessage.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'unbounded_short_values'
# Member 'bounded_short_values'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'array_short_values'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MyMessage(type):
    """Metaclass of message 'MyMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SHORT_CONSTANT': -23,
        'UNSIGNED_LONG_CONSTANT': 42,
        'FLOAT_CONSTANT': 1.25,
        'BOOLEAN_CONSTANT': True,
        'STRING_CONSTANT': 'string_value',
        'WSTRING_CONSTANT': 'wstring_value_\\u2122',
        'EMPTY_STRING_CONSTANT': '',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rclrs_example_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rclrs_example_msgs.msg.MyMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__my_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__my_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__my_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__my_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__my_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SHORT_CONSTANT': cls.__constants['SHORT_CONSTANT'],
            'UNSIGNED_LONG_CONSTANT': cls.__constants['UNSIGNED_LONG_CONSTANT'],
            'FLOAT_CONSTANT': cls.__constants['FLOAT_CONSTANT'],
            'BOOLEAN_CONSTANT': cls.__constants['BOOLEAN_CONSTANT'],
            'STRING_CONSTANT': cls.__constants['STRING_CONSTANT'],
            'WSTRING_CONSTANT': cls.__constants['WSTRING_CONSTANT'],
            'EMPTY_STRING_CONSTANT': cls.__constants['EMPTY_STRING_CONSTANT'],
            'UNSIGNED_SHORT_VALUE__DEFAULT': 123,
            'INT_AND_FRAC_WITH_POSITIVE_SCIENTIFIC__DEFAULT': 19000000000.0,
            'INT_AND_FRAC_WITH_EXPLICIT_POSITIVE_SCIENTIFIC__DEFAULT': 19000000000.0,
            'INT_AND_FRAC_WITH_NEGATIVE_SCIENTIFIC__DEFAULT': 1.1e-10,
            'INT_AND_FRAC__DEFAULT': 9e-05,
            'INT_WITH_EMPTY_FRAC__DEFAULT': 1.0,
            'FRAC_ONLY__DEFAULT': 0.1,
            'INT_WITH_POSITIVE_SCIENTIFIC__DEFAULT': 900000.0,
            'INT_WITH_EXPLICIT_POSITIVE_SCIENTIFIC__DEFAULT': 900000.0,
            'INT_WITH_NEGATIVE_SCIENTIFIC__DEFAULT': 9e-05,
            'FIXED_INT_AND_FRAC__DEFAULT': 8.7,
            'FIXED_INT_WITH_DOT_ONLY__DEFAULT': 4.0,
            'FIXED_FRAC_ONLY__DEFAULT': 0.3,
            'FIXED_INT_ONLY__DEFAULT': 7.0,
        }

    @property
    def SHORT_CONSTANT(self):
        """Message constant 'SHORT_CONSTANT'."""
        return Metaclass_MyMessage.__constants['SHORT_CONSTANT']

    @property
    def UNSIGNED_LONG_CONSTANT(self):
        """Message constant 'UNSIGNED_LONG_CONSTANT'."""
        return Metaclass_MyMessage.__constants['UNSIGNED_LONG_CONSTANT']

    @property
    def FLOAT_CONSTANT(self):
        """Message constant 'FLOAT_CONSTANT'."""
        return Metaclass_MyMessage.__constants['FLOAT_CONSTANT']

    @property
    def BOOLEAN_CONSTANT(self):
        """Message constant 'BOOLEAN_CONSTANT'."""
        return Metaclass_MyMessage.__constants['BOOLEAN_CONSTANT']

    @property
    def STRING_CONSTANT(self):
        """Message constant 'STRING_CONSTANT'."""
        return Metaclass_MyMessage.__constants['STRING_CONSTANT']

    @property
    def WSTRING_CONSTANT(self):
        """Message constant 'WSTRING_CONSTANT'."""
        return Metaclass_MyMessage.__constants['WSTRING_CONSTANT']

    @property
    def EMPTY_STRING_CONSTANT(self):
        """Message constant 'EMPTY_STRING_CONSTANT'."""
        return Metaclass_MyMessage.__constants['EMPTY_STRING_CONSTANT']

    @property
    def UNSIGNED_SHORT_VALUE__DEFAULT(cls):
        """Return default value for message field 'unsigned_short_value'."""
        return 123

    @property
    def INT_AND_FRAC_WITH_POSITIVE_SCIENTIFIC__DEFAULT(cls):
        """Return default value for message field 'int_and_frac_with_positive_scientific'."""
        return 19000000000.0

    @property
    def INT_AND_FRAC_WITH_EXPLICIT_POSITIVE_SCIENTIFIC__DEFAULT(cls):
        """Return default value for message field 'int_and_frac_with_explicit_positive_scientific'."""
        return 19000000000.0

    @property
    def INT_AND_FRAC_WITH_NEGATIVE_SCIENTIFIC__DEFAULT(cls):
        """Return default value for message field 'int_and_frac_with_negative_scientific'."""
        return 1.1e-10

    @property
    def INT_AND_FRAC__DEFAULT(cls):
        """Return default value for message field 'int_and_frac'."""
        return 9e-05

    @property
    def INT_WITH_EMPTY_FRAC__DEFAULT(cls):
        """Return default value for message field 'int_with_empty_frac'."""
        return 1.0

    @property
    def FRAC_ONLY__DEFAULT(cls):
        """Return default value for message field 'frac_only'."""
        return 0.1

    @property
    def INT_WITH_POSITIVE_SCIENTIFIC__DEFAULT(cls):
        """Return default value for message field 'int_with_positive_scientific'."""
        return 900000.0

    @property
    def INT_WITH_EXPLICIT_POSITIVE_SCIENTIFIC__DEFAULT(cls):
        """Return default value for message field 'int_with_explicit_positive_scientific'."""
        return 900000.0

    @property
    def INT_WITH_NEGATIVE_SCIENTIFIC__DEFAULT(cls):
        """Return default value for message field 'int_with_negative_scientific'."""
        return 9e-05

    @property
    def FIXED_INT_AND_FRAC__DEFAULT(cls):
        """Return default value for message field 'fixed_int_and_frac'."""
        return 8.7

    @property
    def FIXED_INT_WITH_DOT_ONLY__DEFAULT(cls):
        """Return default value for message field 'fixed_int_with_dot_only'."""
        return 4.0

    @property
    def FIXED_FRAC_ONLY__DEFAULT(cls):
        """Return default value for message field 'fixed_frac_only'."""
        return 0.3

    @property
    def FIXED_INT_ONLY__DEFAULT(cls):
        """Return default value for message field 'fixed_int_only'."""
        return 7.0


class MyMessage(metaclass=Metaclass_MyMessage):
    """
    Message class 'MyMessage'.

    Constants:
      SHORT_CONSTANT
      UNSIGNED_LONG_CONSTANT
      FLOAT_CONSTANT
      BOOLEAN_CONSTANT
      STRING_CONSTANT
      WSTRING_CONSTANT
      EMPTY_STRING_CONSTANT
    """

    __slots__ = [
        '_short_value',
        '_short_value2',
        '_unsigned_short_value',
        '_long_value',
        '_unsigned_long_value',
        '_long_long_value',
        '_unsigned_long_long_value',
        '_float_value',
        '_double_value',
        '_char_value',
        '_wchar_value',
        '_boolean_value',
        '_octet_value',
        '_int8_value',
        '_uint8_value',
        '_int16_value',
        '_uint16_value',
        '_int32_value',
        '_uint32_value',
        '_int64_value',
        '_uint64_value',
        '_string_value',
        '_bounded_string_value',
        '_wstring_value',
        '_bounded_wstring_value',
        '_unbounded_short_values',
        '_bounded_short_values',
        '_unbounded_values_of_bounded_strings',
        '_bounded_values_of_bounded_strings',
        '_array_short_values',
        '_int_and_frac_with_positive_scientific',
        '_int_and_frac_with_explicit_positive_scientific',
        '_int_and_frac_with_negative_scientific',
        '_int_and_frac',
        '_int_with_empty_frac',
        '_frac_only',
        '_int_with_positive_scientific',
        '_int_with_explicit_positive_scientific',
        '_int_with_negative_scientific',
        '_fixed_int_and_frac',
        '_fixed_int_with_dot_only',
        '_fixed_frac_only',
        '_fixed_int_only',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'short_value': 'int16',
        'short_value2': 'int16',
        'unsigned_short_value': 'uint16',
        'long_value': 'int32',
        'unsigned_long_value': 'uint32',
        'long_long_value': 'int64',
        'unsigned_long_long_value': 'uint64',
        'float_value': 'float',
        'double_value': 'double',
        'char_value': 'char',
        'wchar_value': 'wchar',
        'boolean_value': 'boolean',
        'octet_value': 'octet',
        'int8_value': 'int8',
        'uint8_value': 'uint8',
        'int16_value': 'int16',
        'uint16_value': 'uint16',
        'int32_value': 'int32',
        'uint32_value': 'uint32',
        'int64_value': 'int64',
        'uint64_value': 'uint64',
        'string_value': 'string',
        'bounded_string_value': 'string<5>',
        'wstring_value': 'wstring',
        'bounded_wstring_value': 'wstring<23>',
        'unbounded_short_values': 'sequence<int16>',
        'bounded_short_values': 'sequence<int16, 5>',
        'unbounded_values_of_bounded_strings': 'sequence<string<3>>',
        'bounded_values_of_bounded_strings': 'sequence<string<3>, 4>',
        'array_short_values': 'int16[23]',
        'int_and_frac_with_positive_scientific': 'float',
        'int_and_frac_with_explicit_positive_scientific': 'float',
        'int_and_frac_with_negative_scientific': 'float',
        'int_and_frac': 'float',
        'int_with_empty_frac': 'float',
        'frac_only': 'float',
        'int_with_positive_scientific': 'float',
        'int_with_explicit_positive_scientific': 'float',
        'int_with_negative_scientific': 'float',
        'fixed_int_and_frac': 'float',
        'fixed_int_with_dot_only': 'float',
        'fixed_frac_only': 'float',
        'fixed_int_only': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('char'),  # noqa: E501
        rosidl_parser.definition.BasicType('wchar'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BoundedString(5),  # noqa: E501
        rosidl_parser.definition.UnboundedWString(),  # noqa: E501
        rosidl_parser.definition.BoundedWString(23),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('int16'), 5),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BoundedString(3)),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(3), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 23),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.short_value = kwargs.get('short_value', int())
        self.short_value2 = kwargs.get('short_value2', int())
        self.unsigned_short_value = kwargs.get(
            'unsigned_short_value', MyMessage.UNSIGNED_SHORT_VALUE__DEFAULT)
        self.long_value = kwargs.get('long_value', int())
        self.unsigned_long_value = kwargs.get('unsigned_long_value', int())
        self.long_long_value = kwargs.get('long_long_value', int())
        self.unsigned_long_long_value = kwargs.get('unsigned_long_long_value', int())
        self.float_value = kwargs.get('float_value', float())
        self.double_value = kwargs.get('double_value', float())
        self.char_value = kwargs.get('char_value', chr(0))
        self.wchar_value = kwargs.get('wchar_value', chr(0))
        self.boolean_value = kwargs.get('boolean_value', bool())
        self.octet_value = kwargs.get('octet_value', bytes([0]))
        self.int8_value = kwargs.get('int8_value', int())
        self.uint8_value = kwargs.get('uint8_value', int())
        self.int16_value = kwargs.get('int16_value', int())
        self.uint16_value = kwargs.get('uint16_value', int())
        self.int32_value = kwargs.get('int32_value', int())
        self.uint32_value = kwargs.get('uint32_value', int())
        self.int64_value = kwargs.get('int64_value', int())
        self.uint64_value = kwargs.get('uint64_value', int())
        self.string_value = kwargs.get('string_value', str())
        self.bounded_string_value = kwargs.get('bounded_string_value', str())
        self.wstring_value = kwargs.get('wstring_value', str())
        self.bounded_wstring_value = kwargs.get('bounded_wstring_value', str())
        self.unbounded_short_values = array.array('h', kwargs.get('unbounded_short_values', []))
        self.bounded_short_values = array.array('h', kwargs.get('bounded_short_values', []))
        self.unbounded_values_of_bounded_strings = kwargs.get('unbounded_values_of_bounded_strings', [])
        self.bounded_values_of_bounded_strings = kwargs.get('bounded_values_of_bounded_strings', [])
        if 'array_short_values' not in kwargs:
            self.array_short_values = numpy.zeros(23, dtype=numpy.int16)
        else:
            self.array_short_values = numpy.array(kwargs.get('array_short_values'), dtype=numpy.int16)
            assert self.array_short_values.shape == (23, )
        self.int_and_frac_with_positive_scientific = kwargs.get(
            'int_and_frac_with_positive_scientific', MyMessage.INT_AND_FRAC_WITH_POSITIVE_SCIENTIFIC__DEFAULT)
        self.int_and_frac_with_explicit_positive_scientific = kwargs.get(
            'int_and_frac_with_explicit_positive_scientific', MyMessage.INT_AND_FRAC_WITH_EXPLICIT_POSITIVE_SCIENTIFIC__DEFAULT)
        self.int_and_frac_with_negative_scientific = kwargs.get(
            'int_and_frac_with_negative_scientific', MyMessage.INT_AND_FRAC_WITH_NEGATIVE_SCIENTIFIC__DEFAULT)
        self.int_and_frac = kwargs.get(
            'int_and_frac', MyMessage.INT_AND_FRAC__DEFAULT)
        self.int_with_empty_frac = kwargs.get(
            'int_with_empty_frac', MyMessage.INT_WITH_EMPTY_FRAC__DEFAULT)
        self.frac_only = kwargs.get(
            'frac_only', MyMessage.FRAC_ONLY__DEFAULT)
        self.int_with_positive_scientific = kwargs.get(
            'int_with_positive_scientific', MyMessage.INT_WITH_POSITIVE_SCIENTIFIC__DEFAULT)
        self.int_with_explicit_positive_scientific = kwargs.get(
            'int_with_explicit_positive_scientific', MyMessage.INT_WITH_EXPLICIT_POSITIVE_SCIENTIFIC__DEFAULT)
        self.int_with_negative_scientific = kwargs.get(
            'int_with_negative_scientific', MyMessage.INT_WITH_NEGATIVE_SCIENTIFIC__DEFAULT)
        self.fixed_int_and_frac = kwargs.get(
            'fixed_int_and_frac', MyMessage.FIXED_INT_AND_FRAC__DEFAULT)
        self.fixed_int_with_dot_only = kwargs.get(
            'fixed_int_with_dot_only', MyMessage.FIXED_INT_WITH_DOT_ONLY__DEFAULT)
        self.fixed_frac_only = kwargs.get(
            'fixed_frac_only', MyMessage.FIXED_FRAC_ONLY__DEFAULT)
        self.fixed_int_only = kwargs.get(
            'fixed_int_only', MyMessage.FIXED_INT_ONLY__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.short_value != other.short_value:
            return False
        if self.short_value2 != other.short_value2:
            return False
        if self.unsigned_short_value != other.unsigned_short_value:
            return False
        if self.long_value != other.long_value:
            return False
        if self.unsigned_long_value != other.unsigned_long_value:
            return False
        if self.long_long_value != other.long_long_value:
            return False
        if self.unsigned_long_long_value != other.unsigned_long_long_value:
            return False
        if self.float_value != other.float_value:
            return False
        if self.double_value != other.double_value:
            return False
        if self.char_value != other.char_value:
            return False
        if self.wchar_value != other.wchar_value:
            return False
        if self.boolean_value != other.boolean_value:
            return False
        if self.octet_value != other.octet_value:
            return False
        if self.int8_value != other.int8_value:
            return False
        if self.uint8_value != other.uint8_value:
            return False
        if self.int16_value != other.int16_value:
            return False
        if self.uint16_value != other.uint16_value:
            return False
        if self.int32_value != other.int32_value:
            return False
        if self.uint32_value != other.uint32_value:
            return False
        if self.int64_value != other.int64_value:
            return False
        if self.uint64_value != other.uint64_value:
            return False
        if self.string_value != other.string_value:
            return False
        if self.bounded_string_value != other.bounded_string_value:
            return False
        if self.wstring_value != other.wstring_value:
            return False
        if self.bounded_wstring_value != other.bounded_wstring_value:
            return False
        if self.unbounded_short_values != other.unbounded_short_values:
            return False
        if self.bounded_short_values != other.bounded_short_values:
            return False
        if self.unbounded_values_of_bounded_strings != other.unbounded_values_of_bounded_strings:
            return False
        if self.bounded_values_of_bounded_strings != other.bounded_values_of_bounded_strings:
            return False
        if all(self.array_short_values != other.array_short_values):
            return False
        if self.int_and_frac_with_positive_scientific != other.int_and_frac_with_positive_scientific:
            return False
        if self.int_and_frac_with_explicit_positive_scientific != other.int_and_frac_with_explicit_positive_scientific:
            return False
        if self.int_and_frac_with_negative_scientific != other.int_and_frac_with_negative_scientific:
            return False
        if self.int_and_frac != other.int_and_frac:
            return False
        if self.int_with_empty_frac != other.int_with_empty_frac:
            return False
        if self.frac_only != other.frac_only:
            return False
        if self.int_with_positive_scientific != other.int_with_positive_scientific:
            return False
        if self.int_with_explicit_positive_scientific != other.int_with_explicit_positive_scientific:
            return False
        if self.int_with_negative_scientific != other.int_with_negative_scientific:
            return False
        if self.fixed_int_and_frac != other.fixed_int_and_frac:
            return False
        if self.fixed_int_with_dot_only != other.fixed_int_with_dot_only:
            return False
        if self.fixed_frac_only != other.fixed_frac_only:
            return False
        if self.fixed_int_only != other.fixed_int_only:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def short_value(self):
        """Message field 'short_value'."""
        return self._short_value

    @short_value.setter
    def short_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'short_value' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'short_value' field must be an integer in [-32768, 32767]"
        self._short_value = value

    @builtins.property
    def short_value2(self):
        """Message field 'short_value2'."""
        return self._short_value2

    @short_value2.setter
    def short_value2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'short_value2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'short_value2' field must be an integer in [-32768, 32767]"
        self._short_value2 = value

    @builtins.property
    def unsigned_short_value(self):
        """Message field 'unsigned_short_value'."""
        return self._unsigned_short_value

    @unsigned_short_value.setter
    def unsigned_short_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unsigned_short_value' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'unsigned_short_value' field must be an unsigned integer in [0, 65535]"
        self._unsigned_short_value = value

    @builtins.property
    def long_value(self):
        """Message field 'long_value'."""
        return self._long_value

    @long_value.setter
    def long_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'long_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'long_value' field must be an integer in [-2147483648, 2147483647]"
        self._long_value = value

    @builtins.property
    def unsigned_long_value(self):
        """Message field 'unsigned_long_value'."""
        return self._unsigned_long_value

    @unsigned_long_value.setter
    def unsigned_long_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unsigned_long_value' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'unsigned_long_value' field must be an unsigned integer in [0, 4294967295]"
        self._unsigned_long_value = value

    @builtins.property
    def long_long_value(self):
        """Message field 'long_long_value'."""
        return self._long_long_value

    @long_long_value.setter
    def long_long_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'long_long_value' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'long_long_value' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._long_long_value = value

    @builtins.property
    def unsigned_long_long_value(self):
        """Message field 'unsigned_long_long_value'."""
        return self._unsigned_long_long_value

    @unsigned_long_long_value.setter
    def unsigned_long_long_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unsigned_long_long_value' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'unsigned_long_long_value' field must be an unsigned integer in [0, 18446744073709551615]"
        self._unsigned_long_long_value = value

    @builtins.property
    def float_value(self):
        """Message field 'float_value'."""
        return self._float_value

    @float_value.setter
    def float_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'float_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'float_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._float_value = value

    @builtins.property
    def double_value(self):
        """Message field 'double_value'."""
        return self._double_value

    @double_value.setter
    def double_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'double_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'double_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._double_value = value

    @builtins.property
    def char_value(self):
        """Message field 'char_value'."""
        return self._char_value

    @char_value.setter
    def char_value(self, value):
        if self._check_fields:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) == 1 and ord(value) >= -128 and ord(value) < 128), \
                "The 'char_value' field must be of type 'str' or 'UserString' " \
                'with length 1 and the character ord() in [-128, 127]'
        self._char_value = value

    @builtins.property
    def wchar_value(self):
        """Message field 'wchar_value'."""
        return self._wchar_value

    @wchar_value.setter
    def wchar_value(self, value):
        if self._check_fields:
            from collections import UserString
            assert \
                False
        self._wchar_value = value

    @builtins.property
    def boolean_value(self):
        """Message field 'boolean_value'."""
        return self._boolean_value

    @boolean_value.setter
    def boolean_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'boolean_value' field must be of type 'bool'"
        self._boolean_value = value

    @builtins.property
    def octet_value(self):
        """Message field 'octet_value'."""
        return self._octet_value

    @octet_value.setter
    def octet_value(self, value):
        if self._check_fields:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'octet_value' field must be of type 'bytes' or 'ByteString' with length 1"
        self._octet_value = value

    @builtins.property
    def int8_value(self):
        """Message field 'int8_value'."""
        return self._int8_value

    @int8_value.setter
    def int8_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int8_value' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'int8_value' field must be an integer in [-128, 127]"
        self._int8_value = value

    @builtins.property
    def uint8_value(self):
        """Message field 'uint8_value'."""
        return self._uint8_value

    @uint8_value.setter
    def uint8_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uint8_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'uint8_value' field must be an unsigned integer in [0, 255]"
        self._uint8_value = value

    @builtins.property
    def int16_value(self):
        """Message field 'int16_value'."""
        return self._int16_value

    @int16_value.setter
    def int16_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int16_value' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'int16_value' field must be an integer in [-32768, 32767]"
        self._int16_value = value

    @builtins.property
    def uint16_value(self):
        """Message field 'uint16_value'."""
        return self._uint16_value

    @uint16_value.setter
    def uint16_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uint16_value' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'uint16_value' field must be an unsigned integer in [0, 65535]"
        self._uint16_value = value

    @builtins.property
    def int32_value(self):
        """Message field 'int32_value'."""
        return self._int32_value

    @int32_value.setter
    def int32_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int32_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'int32_value' field must be an integer in [-2147483648, 2147483647]"
        self._int32_value = value

    @builtins.property
    def uint32_value(self):
        """Message field 'uint32_value'."""
        return self._uint32_value

    @uint32_value.setter
    def uint32_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uint32_value' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uint32_value' field must be an unsigned integer in [0, 4294967295]"
        self._uint32_value = value

    @builtins.property
    def int64_value(self):
        """Message field 'int64_value'."""
        return self._int64_value

    @int64_value.setter
    def int64_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int64_value' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'int64_value' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._int64_value = value

    @builtins.property
    def uint64_value(self):
        """Message field 'uint64_value'."""
        return self._uint64_value

    @uint64_value.setter
    def uint64_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uint64_value' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'uint64_value' field must be an unsigned integer in [0, 18446744073709551615]"
        self._uint64_value = value

    @builtins.property
    def string_value(self):
        """Message field 'string_value'."""
        return self._string_value

    @string_value.setter
    def string_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'string_value' field must be of type 'str'"
        self._string_value = value

    @builtins.property
    def bounded_string_value(self):
        """Message field 'bounded_string_value'."""
        return self._bounded_string_value

    @bounded_string_value.setter
    def bounded_string_value(self, value):
        if self._check_fields:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 5), \
                "The 'bounded_string_value' field must be string value " \
                'not longer than 5'
        self._bounded_string_value = value

    @builtins.property
    def wstring_value(self):
        """Message field 'wstring_value'."""
        return self._wstring_value

    @wstring_value.setter
    def wstring_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'wstring_value' field must be of type 'str'"
        self._wstring_value = value

    @builtins.property
    def bounded_wstring_value(self):
        """Message field 'bounded_wstring_value'."""
        return self._bounded_wstring_value

    @bounded_wstring_value.setter
    def bounded_wstring_value(self, value):
        if self._check_fields:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 23), \
                "The 'bounded_wstring_value' field must be string value " \
                'not longer than 23'
        self._bounded_wstring_value = value

    @builtins.property
    def unbounded_short_values(self):
        """Message field 'unbounded_short_values'."""
        return self._unbounded_short_values

    @unbounded_short_values.setter
    def unbounded_short_values(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'h', \
                    "The 'unbounded_short_values' array.array() must have the type code of 'h'"
                self._unbounded_short_values = value
                return
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
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'unbounded_short_values' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._unbounded_short_values = array.array('h', value)

    @builtins.property
    def bounded_short_values(self):
        """Message field 'bounded_short_values'."""
        return self._bounded_short_values

    @bounded_short_values.setter
    def bounded_short_values(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'h', \
                    "The 'bounded_short_values' array.array() must have the type code of 'h'"
                assert len(value) <= 5, \
                    "The 'bounded_short_values' array.array() must have a size <= 5"
                self._bounded_short_values = value
                return
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
                 len(value) <= 5 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'bounded_short_values' field must be a set or sequence with length <= 5 and each value of type 'int' and each integer in [-32768, 32767]"
        self._bounded_short_values = array.array('h', value)

    @builtins.property
    def unbounded_values_of_bounded_strings(self):
        """Message field 'unbounded_values_of_bounded_strings'."""
        return self._unbounded_values_of_bounded_strings

    @unbounded_values_of_bounded_strings.setter
    def unbounded_values_of_bounded_strings(self, value):
        if self._check_fields:
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
                 all(len(val) <= 3 for val in value) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'unbounded_values_of_bounded_strings' field must be a set or sequence and each string value not longer than 3 and each value of type 'str'"
        self._unbounded_values_of_bounded_strings = value

    @builtins.property
    def bounded_values_of_bounded_strings(self):
        """Message field 'bounded_values_of_bounded_strings'."""
        return self._bounded_values_of_bounded_strings

    @bounded_values_of_bounded_strings.setter
    def bounded_values_of_bounded_strings(self, value):
        if self._check_fields:
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
                 all(len(val) <= 3 for val in value) and
                 len(value) <= 4 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'bounded_values_of_bounded_strings' field must be a set or sequence with length <= 4 and each string value not longer than 3 and each value of type 'str'"
        self._bounded_values_of_bounded_strings = value

    @builtins.property
    def array_short_values(self):
        """Message field 'array_short_values'."""
        return self._array_short_values

    @array_short_values.setter
    def array_short_values(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int16, \
                    "The 'array_short_values' numpy.ndarray() must have the dtype of 'numpy.int16'"
                assert value.size == 23, \
                    "The 'array_short_values' numpy.ndarray() must have a size of 23"
                self._array_short_values = value
                return
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
                 len(value) == 23 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'array_short_values' field must be a set or sequence with length 23 and each value of type 'int' and each integer in [-32768, 32767]"
        self._array_short_values = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def int_and_frac_with_positive_scientific(self):
        """Message field 'int_and_frac_with_positive_scientific'."""
        return self._int_and_frac_with_positive_scientific

    @int_and_frac_with_positive_scientific.setter
    def int_and_frac_with_positive_scientific(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'int_and_frac_with_positive_scientific' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'int_and_frac_with_positive_scientific' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._int_and_frac_with_positive_scientific = value

    @builtins.property
    def int_and_frac_with_explicit_positive_scientific(self):
        """Message field 'int_and_frac_with_explicit_positive_scientific'."""
        return self._int_and_frac_with_explicit_positive_scientific

    @int_and_frac_with_explicit_positive_scientific.setter
    def int_and_frac_with_explicit_positive_scientific(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'int_and_frac_with_explicit_positive_scientific' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'int_and_frac_with_explicit_positive_scientific' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._int_and_frac_with_explicit_positive_scientific = value

    @builtins.property
    def int_and_frac_with_negative_scientific(self):
        """Message field 'int_and_frac_with_negative_scientific'."""
        return self._int_and_frac_with_negative_scientific

    @int_and_frac_with_negative_scientific.setter
    def int_and_frac_with_negative_scientific(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'int_and_frac_with_negative_scientific' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'int_and_frac_with_negative_scientific' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._int_and_frac_with_negative_scientific = value

    @builtins.property
    def int_and_frac(self):
        """Message field 'int_and_frac'."""
        return self._int_and_frac

    @int_and_frac.setter
    def int_and_frac(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'int_and_frac' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'int_and_frac' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._int_and_frac = value

    @builtins.property
    def int_with_empty_frac(self):
        """Message field 'int_with_empty_frac'."""
        return self._int_with_empty_frac

    @int_with_empty_frac.setter
    def int_with_empty_frac(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'int_with_empty_frac' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'int_with_empty_frac' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._int_with_empty_frac = value

    @builtins.property
    def frac_only(self):
        """Message field 'frac_only'."""
        return self._frac_only

    @frac_only.setter
    def frac_only(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'frac_only' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'frac_only' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._frac_only = value

    @builtins.property
    def int_with_positive_scientific(self):
        """Message field 'int_with_positive_scientific'."""
        return self._int_with_positive_scientific

    @int_with_positive_scientific.setter
    def int_with_positive_scientific(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'int_with_positive_scientific' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'int_with_positive_scientific' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._int_with_positive_scientific = value

    @builtins.property
    def int_with_explicit_positive_scientific(self):
        """Message field 'int_with_explicit_positive_scientific'."""
        return self._int_with_explicit_positive_scientific

    @int_with_explicit_positive_scientific.setter
    def int_with_explicit_positive_scientific(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'int_with_explicit_positive_scientific' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'int_with_explicit_positive_scientific' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._int_with_explicit_positive_scientific = value

    @builtins.property
    def int_with_negative_scientific(self):
        """Message field 'int_with_negative_scientific'."""
        return self._int_with_negative_scientific

    @int_with_negative_scientific.setter
    def int_with_negative_scientific(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'int_with_negative_scientific' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'int_with_negative_scientific' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._int_with_negative_scientific = value

    @builtins.property
    def fixed_int_and_frac(self):
        """Message field 'fixed_int_and_frac'."""
        return self._fixed_int_and_frac

    @fixed_int_and_frac.setter
    def fixed_int_and_frac(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_int_and_frac' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fixed_int_and_frac' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fixed_int_and_frac = value

    @builtins.property
    def fixed_int_with_dot_only(self):
        """Message field 'fixed_int_with_dot_only'."""
        return self._fixed_int_with_dot_only

    @fixed_int_with_dot_only.setter
    def fixed_int_with_dot_only(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_int_with_dot_only' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fixed_int_with_dot_only' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fixed_int_with_dot_only = value

    @builtins.property
    def fixed_frac_only(self):
        """Message field 'fixed_frac_only'."""
        return self._fixed_frac_only

    @fixed_frac_only.setter
    def fixed_frac_only(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_frac_only' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fixed_frac_only' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fixed_frac_only = value

    @builtins.property
    def fixed_int_only(self):
        """Message field 'fixed_int_only'."""
        return self._fixed_int_only

    @fixed_int_only.setter
    def fixed_int_only(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_int_only' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fixed_int_only' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fixed_int_only = value
