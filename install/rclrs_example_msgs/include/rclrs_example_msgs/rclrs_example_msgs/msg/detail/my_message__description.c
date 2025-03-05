// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

#include "rclrs_example_msgs/msg/detail/my_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
const rosidl_type_hash_t *
rclrs_example_msgs__msg__MyMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x04, 0xa0, 0x2c, 0xdf, 0xd3, 0x5e, 0x68,
      0xbe, 0x63, 0x67, 0x26, 0x0a, 0xc9, 0xd0, 0x22,
      0xce, 0xd4, 0x30, 0x72, 0x7d, 0xb0, 0x54, 0xa9,
      0x29, 0x6b, 0xb2, 0x61, 0xc6, 0x62, 0x85, 0x2d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rclrs_example_msgs__msg__MyMessage__TYPE_NAME[] = "rclrs_example_msgs/msg/MyMessage";

// Define type names, field names, and default values
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__short_value[] = "short_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__short_value2[] = "short_value2";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unsigned_short_value[] = "unsigned_short_value";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__unsigned_short_value[] = "123";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__long_value[] = "long_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unsigned_long_value[] = "unsigned_long_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__long_long_value[] = "long_long_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unsigned_long_long_value[] = "unsigned_long_long_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__float_value[] = "float_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__double_value[] = "double_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__char_value[] = "char_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__wchar_value[] = "wchar_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__boolean_value[] = "boolean_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__octet_value[] = "octet_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int8_value[] = "int8_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__uint8_value[] = "uint8_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int16_value[] = "int16_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__uint16_value[] = "uint16_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int32_value[] = "int32_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__uint32_value[] = "uint32_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int64_value[] = "int64_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__uint64_value[] = "uint64_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__string_value[] = "string_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__bounded_string_value[] = "bounded_string_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__wstring_value[] = "wstring_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__bounded_wstring_value[] = "bounded_wstring_value";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unbounded_short_values[] = "unbounded_short_values";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__bounded_short_values[] = "bounded_short_values";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unbounded_values_of_bounded_strings[] = "unbounded_values_of_bounded_strings";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__bounded_values_of_bounded_strings[] = "bounded_values_of_bounded_strings";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__array_short_values[] = "array_short_values";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_and_frac_with_positive_scientific[] = "int_and_frac_with_positive_scientific";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_and_frac_with_positive_scientific[] = "19000000000.0";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_and_frac_with_explicit_positive_scientific[] = "int_and_frac_with_explicit_positive_scientific";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_and_frac_with_explicit_positive_scientific[] = "19000000000.0";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_and_frac_with_negative_scientific[] = "int_and_frac_with_negative_scientific";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_and_frac_with_negative_scientific[] = "1.1e-10";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_and_frac[] = "int_and_frac";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_and_frac[] = "9e-05";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_with_empty_frac[] = "int_with_empty_frac";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_with_empty_frac[] = "1.0";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__frac_only[] = "frac_only";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__frac_only[] = "0.1";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_with_positive_scientific[] = "int_with_positive_scientific";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_with_positive_scientific[] = "900000.0";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_with_explicit_positive_scientific[] = "int_with_explicit_positive_scientific";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_with_explicit_positive_scientific[] = "900000.0";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_with_negative_scientific[] = "int_with_negative_scientific";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_with_negative_scientific[] = "9e-05";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__fixed_int_and_frac[] = "fixed_int_and_frac";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__fixed_int_and_frac[] = "8.7";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__fixed_int_with_dot_only[] = "fixed_int_with_dot_only";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__fixed_int_with_dot_only[] = "4.0";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__fixed_frac_only[] = "fixed_frac_only";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__fixed_frac_only[] = "0.3";
static char rclrs_example_msgs__msg__MyMessage__FIELD_NAME__fixed_int_only[] = "fixed_int_only";
static char rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__fixed_int_only[] = "7.0";

static rosidl_runtime_c__type_description__Field rclrs_example_msgs__msg__MyMessage__FIELDS[] = {
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__short_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__short_value2, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unsigned_short_value, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__unsigned_short_value, 3, 3},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__long_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unsigned_long_value, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__long_long_value, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unsigned_long_long_value, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__float_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__double_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__char_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_CHAR,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__wchar_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_WCHAR,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__boolean_value, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__octet_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BYTE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int8_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__uint8_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int16_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__uint16_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int32_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__uint32_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int64_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__uint64_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__string_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__bounded_string_value, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING,
      0,
      5,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__wstring_value, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_WSTRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__bounded_wstring_value, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_WSTRING,
      0,
      23,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unbounded_short_values, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__bounded_short_values, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_BOUNDED_SEQUENCE,
      5,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__unbounded_values_of_bounded_strings, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING_UNBOUNDED_SEQUENCE,
      0,
      3,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__bounded_values_of_bounded_strings, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING_BOUNDED_SEQUENCE,
      4,
      3,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__array_short_values, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      23,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_and_frac_with_positive_scientific, 37, 37},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_and_frac_with_positive_scientific, 13, 13},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_and_frac_with_explicit_positive_scientific, 46, 46},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_and_frac_with_explicit_positive_scientific, 13, 13},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_and_frac_with_negative_scientific, 37, 37},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_and_frac_with_negative_scientific, 7, 7},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_and_frac, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_and_frac, 5, 5},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_with_empty_frac, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_with_empty_frac, 3, 3},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__frac_only, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__frac_only, 3, 3},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_with_positive_scientific, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_with_positive_scientific, 8, 8},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_with_explicit_positive_scientific, 37, 37},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_with_explicit_positive_scientific, 8, 8},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__int_with_negative_scientific, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__int_with_negative_scientific, 5, 5},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__fixed_int_and_frac, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__fixed_int_and_frac, 3, 3},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__fixed_int_with_dot_only, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__fixed_int_with_dot_only, 3, 3},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__fixed_frac_only, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__fixed_frac_only, 3, 3},
  },
  {
    {rclrs_example_msgs__msg__MyMessage__FIELD_NAME__fixed_int_only, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__MyMessage__DEFAULT_VALUE__fixed_int_only, 3, 3},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rclrs_example_msgs__msg__MyMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rclrs_example_msgs__msg__MyMessage__TYPE_NAME, 32, 32},
      {rclrs_example_msgs__msg__MyMessage__FIELDS, 43, 43},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "// Taken and slightly adapted from\n"
  "// https://github.com/ros2/rosidl/blob/iron/rosidl_parser/test/msg/MyMessage.idl\n"
  "\n"
  "module rclrs_example_msgs {\n"
  "  module msg {\n"
  "    module MyMessage_Constants {\n"
  "      const short SHORT_CONSTANT = -23;\n"
  "      const unsigned long UNSIGNED_LONG_CONSTANT = 42;\n"
  "      const float FLOAT_CONSTANT = 1.25;\n"
  "      const boolean BOOLEAN_CONSTANT = TRUE;\n"
  "      const string STRING_CONSTANT = \"string_value\";\n"
  "      const wstring WSTRING_CONSTANT = \"wstring_value_\\\\u2122\";\n"
  "      const string EMPTY_STRING_CONSTANT = \"\";\n"
  "    };\n"
  "\n"
  "    @verbatim ( language=\"comment\", text=\"Documentation of MyMessage.\" \"Adjacent string literal.\" )\n"
  "    @transfer_mode(SHMEM_REF)\n"
  "    struct MyMessage {\n"
  "      short short_value, short_value2;\n"
  "      @default ( value=123 )\n"
  "      unsigned short unsigned_short_value;\n"
  "      @key\n"
  "      @range ( min=-10, max=10 )\n"
  "      long long_value;\n"
  "      @verbatim (language=\"comment\", text=\"\")\n"
  "      unsigned long unsigned_long_value;\n"
  "      long long long_long_value;\n"
  "      unsigned long long unsigned_long_long_value;\n"
  "      float float_value;\n"
  "      double double_value;\n"
  "//      long double long_double_value;\n"
  "      char char_value;\n"
  "      wchar wchar_value;\n"
  "      boolean boolean_value;\n"
  "      octet octet_value;\n"
  "      int8 int8_value;\n"
  "      uint8 uint8_value;\n"
  "      int16 int16_value;\n"
  "      uint16 uint16_value;\n"
  "      int32 int32_value;\n"
  "      uint32 uint32_value;\n"
  "      int64 int64_value;\n"
  "      uint64 uint64_value;\n"
  "      string string_value;\n"
  "      string<5> bounded_string_value;\n"
  "      wstring wstring_value;\n"
  "      wstring<23> bounded_wstring_value;\n"
  "//      wstring<UNSIGNED_LONG_CONSTANT> constant_bounded_wstring_value;\n"
  "      sequence<short> unbounded_short_values;\n"
  "      sequence<short, 5> bounded_short_values;\n"
  "      sequence<string<3>> unbounded_values_of_bounded_strings;\n"
  "      sequence<string<3>, 4> bounded_values_of_bounded_strings;\n"
  "      short array_short_values[23];\n"
  "\n"
  "      // Tests of the floating point parser (7.2.6.4)\n"
  "      @default ( value=1.9e10 )\n"
  "      float int_and_frac_with_positive_scientific;\n"
  "      @default ( value=1.9e+10 )\n"
  "      float int_and_frac_with_explicit_positive_scientific;\n"
  "      @default ( value=1.1e-10)\n"
  "      float int_and_frac_with_negative_scientific;\n"
  "      @default ( value=0.00009 )\n"
  "      float int_and_frac;\n"
  "      @default ( value = 1. )\n"
  "      float int_with_empty_frac;\n"
  "      @default ( value = .1 )\n"
  "      float frac_only;\n"
  "      @default ( value=9e05 )\n"
  "      float int_with_positive_scientific;\n"
  "      @default ( value=9e+05 )\n"
  "      float int_with_explicit_positive_scientific;\n"
  "      @default ( value=9e-05 )\n"
  "      float int_with_negative_scientific;\n"
  "\n"
  "      // Tests of the fixed point parser (7.2.6.5)\n"
  "      @default ( value=8.7d )\n"
  "      float fixed_int_and_frac;\n"
  "      @default ( value=4.d )\n"
  "      float fixed_int_with_dot_only;\n"
  "      @default ( value=.3d )\n"
  "      float fixed_frac_only;\n"
  "      @default ( value=7d )\n"
  "      float fixed_int_only;\n"
  "    };\n"
  "  };\n"
  "};";

static char idl_encoding[] = "idl";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rclrs_example_msgs__msg__MyMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rclrs_example_msgs__msg__MyMessage__TYPE_NAME, 32, 32},
    {idl_encoding, 3, 3},
    {toplevel_type_raw_source, 2932, 2932},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rclrs_example_msgs__msg__MyMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rclrs_example_msgs__msg__MyMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
