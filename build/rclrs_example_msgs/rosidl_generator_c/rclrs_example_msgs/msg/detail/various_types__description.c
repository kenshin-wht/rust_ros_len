// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#include "rclrs_example_msgs/msg/detail/various_types__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
const rosidl_type_hash_t *
rclrs_example_msgs__msg__VariousTypes__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0xde, 0x75, 0x6b, 0x02, 0xef, 0xa5, 0x1a,
      0xbd, 0x22, 0x25, 0xba, 0x66, 0xca, 0xb2, 0x4f,
      0xc4, 0x17, 0x10, 0xf4, 0xaa, 0x16, 0x44, 0x0a,
      0x42, 0x23, 0xa0, 0x44, 0x9f, 0xef, 0xae, 0xfe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rclrs_example_msgs/msg/detail/nested_type__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rclrs_example_msgs__msg__NestedType__EXPECTED_HASH = {1, {
    0x4e, 0xa4, 0x4f, 0xc6, 0x35, 0xb8, 0x59, 0xef,
    0xd6, 0xde, 0xcd, 0xaa, 0x94, 0x01, 0xa2, 0xb5,
    0xa5, 0x9a, 0xb2, 0x4a, 0x92, 0x50, 0x89, 0x6e,
    0xda, 0x91, 0x03, 0xbb, 0x0d, 0xc9, 0xd8, 0xc7,
  }};
#endif

static char rclrs_example_msgs__msg__VariousTypes__TYPE_NAME[] = "rclrs_example_msgs/msg/VariousTypes";
static char rclrs_example_msgs__msg__NestedType__TYPE_NAME[] = "rclrs_example_msgs/msg/NestedType";

// Define type names, field names, and default values
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bool_member[] = "bool_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bool_member[] = "True";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__int8_member[] = "int8_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__int8_member[] = "1";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__uint8_member[] = "uint8_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__uint8_member[] = "2";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__byte_member[] = "byte_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__byte_member[] = "3";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__float32_member[] = "float32_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__float32_member[] = "0.01";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__float_array[] = "float_array";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__float_array[] = "(1.0, 2.0, 3.0)";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__float_seq_bounded[] = "float_seq_bounded";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__float_seq_bounded[] = "(4.0, 5.0)";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__float_seq_unbounded[] = "float_seq_unbounded";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__float_seq_unbounded[] = "(6.0,)";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__string_member[] = "string_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__string_member[] = "\\xce\\xa7\\xce\\xb1\\xce\\xaf\\xcf\\x81\\xce\\xb5\\xcf\\x84\\xce\\xb5 \\xe4\\xbd\\xa0\\xe5\\xa5\\xbd";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__wstring_member[] = "wstring_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__wstring_member[] = "\\xce\\xb1\\xce\\xbd\\xcf\\x84\\xce\\xaf\\xce\\xbf \\xcf\\x83\\xce\\xbf\\xcf\\x85 \\xe5\\x86\\x8d\\xe8\\xa7\\x81";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_string_member[] = "bounded_string_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_string_member[] = "aou";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_wstring_member[] = "bounded_wstring_member";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_wstring_member[] = "\\xc3\\xa4\\xc3\\xb6\\xc3\\xbc";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__string_array[] = "string_array";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__string_array[] = "('R', 'O', 'S', '2')";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__string_seq_bounded[] = "string_seq_bounded";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__string_seq_bounded[] = "('R', 'O', 'S', '2')";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__string_seq_unbounded[] = "string_seq_unbounded";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__string_seq_unbounded[] = "('R', 'O', 'S', '2')";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_string_array[] = "bounded_string_array";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_string_array[] = "('R', 'O', 'S', '2')";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_string_seq_bounded[] = "bounded_string_seq_bounded";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_string_seq_bounded[] = "('R', 'O', 'S', '2')";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_string_seq_unbounded[] = "bounded_string_seq_unbounded";
static char rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_string_seq_unbounded[] = "('R', 'O', 'S', '2')";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__nested_member[] = "nested_member";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__nested_array[] = "nested_array";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__nested_seq_unbounded[] = "nested_seq_unbounded";
static char rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__nested_seq_bounded[] = "nested_seq_bounded";

static rosidl_runtime_c__type_description__Field rclrs_example_msgs__msg__VariousTypes__FIELDS[] = {
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bool_member, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bool_member, 4, 4},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__int8_member, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__int8_member, 1, 1},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__uint8_member, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__uint8_member, 1, 1},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__byte_member, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BYTE,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__byte_member, 1, 1},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__float32_member, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__float32_member, 4, 4},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__float_array, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__float_array, 15, 15},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__float_seq_bounded, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_BOUNDED_SEQUENCE,
      3,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__float_seq_bounded, 10, 10},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__float_seq_unbounded, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__float_seq_unbounded, 6, 6},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__string_member, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__string_member, 10, 10},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__wstring_member, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_WSTRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__wstring_member, 12, 12},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_string_member, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING,
      0,
      3,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_string_member, 3, 3},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_wstring_member, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_WSTRING,
      0,
      3,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_wstring_member, 3, 3},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__string_array, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__string_array, 20, 20},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__string_seq_bounded, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_BOUNDED_SEQUENCE,
      4,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__string_seq_bounded, 20, 20},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__string_seq_unbounded, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__string_seq_unbounded, 20, 20},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_string_array, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING_ARRAY,
      4,
      1,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_string_array, 20, 20},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_string_seq_bounded, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING_BOUNDED_SEQUENCE,
      4,
      1,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_string_seq_bounded, 20, 20},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__bounded_string_seq_unbounded, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING_UNBOUNDED_SEQUENCE,
      0,
      1,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__VariousTypes__DEFAULT_VALUE__bounded_string_seq_unbounded, 20, 20},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__nested_member, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rclrs_example_msgs__msg__NestedType__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__nested_array, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      2,
      0,
      {rclrs_example_msgs__msg__NestedType__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__nested_seq_unbounded, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rclrs_example_msgs__msg__NestedType__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rclrs_example_msgs__msg__VariousTypes__FIELD_NAME__nested_seq_bounded, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      3,
      0,
      {rclrs_example_msgs__msg__NestedType__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rclrs_example_msgs__msg__VariousTypes__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rclrs_example_msgs__msg__NestedType__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rclrs_example_msgs__msg__VariousTypes__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rclrs_example_msgs__msg__VariousTypes__TYPE_NAME, 35, 35},
      {rclrs_example_msgs__msg__VariousTypes__FIELDS, 22, 22},
    },
    {rclrs_example_msgs__msg__VariousTypes__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rclrs_example_msgs__msg__NestedType__EXPECTED_HASH, rclrs_example_msgs__msg__NestedType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rclrs_example_msgs__msg__NestedType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Primitive types\n"
  "bool bool_member true\n"
  "int8 int8_member 1\n"
  "uint8 uint8_member 2\n"
  "byte byte_member 3\n"
  "float32 float32_member 1e-2\n"
  "\n"
  "# Array/sequence of primitive type\n"
  "float32[3] float_array [1.0, 2.0, 3.0]\n"
  "float32[<=3] float_seq_bounded [4.0, 5.0]\n"
  "float32[] float_seq_unbounded [6.0]\n"
  "\n"
  "# String types\n"
  "string string_member \"\\xce\\xa7\\xce\\xb1\\xce\\xaf\\xcf\\x81\\xce\\xb5\\xcf\\x84\\xce\\xb5 \\xe4\\xbd\\xa0\\xe5\\xa5\\xbd\"\n"
  "wstring wstring_member \"\\xce\\xb1\\xce\\xbd\\xcf\\x84\\xce\\xaf\\xce\\xbf \\xcf\\x83\\xce\\xbf\\xcf\\x85 \\xe5\\x86\\x8d\\xe8\\xa7\\x81\"\n"
  "string<=3 bounded_string_member \"aou\"\n"
  "wstring<=3 bounded_wstring_member \"\\xc3\\xa4\\xc3\\xb6\\xc3\\xbc\"\n"
  "\n"
  "# Array/sequence of string type\n"
  "string[4] string_array [\"R\", \"O\", \"S\", \"2\"]\n"
  "string[<=4] string_seq_bounded [\"R\", \"O\", \"S\", \"2\"]\n"
  "string[] string_seq_unbounded [\"R\", \"O\", \"S\", \"2\"]\n"
  "string<=1[4] bounded_string_array [\"R\", \"O\", \"S\", \"2\"]\n"
  "string<=1[<=4] bounded_string_seq_bounded [\"R\", \"O\", \"S\", \"2\"]\n"
  "string<=1[] bounded_string_seq_unbounded [\"R\", \"O\", \"S\", \"2\"]\n"
  "\n"
  "# Nested type\n"
  "NestedType nested_member\n"
  "\n"
  "# Array/sequence of nested type\n"
  "NestedType[2] nested_array\n"
  "NestedType[] nested_seq_unbounded\n"
  "NestedType[<=3] nested_seq_bounded\n"
  "\n"
  "\n"
  "# binary, hexadecimal and octal constants are also possible\n"
  "int8 TWO_PLUS_TWO = 5\n"
  "# Only unbounded strings are possible\n"
  "string PASSWORD = \"hunter2\"\n"
  "# As determined by Edward J. Goodwin\n"
  "float32 PI = 3.0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rclrs_example_msgs__msg__VariousTypes__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rclrs_example_msgs__msg__VariousTypes__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1179, 1179},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rclrs_example_msgs__msg__VariousTypes__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rclrs_example_msgs__msg__VariousTypes__get_individual_type_description_source(NULL),
    sources[1] = *rclrs_example_msgs__msg__NestedType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
