// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rclrs_example_msgs:msg/NestedType.idl
// generated code does not contain a copyright notice

#include "rclrs_example_msgs/msg/detail/nested_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
const rosidl_type_hash_t *
rclrs_example_msgs__msg__NestedType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0xa4, 0x4f, 0xc6, 0x35, 0xb8, 0x59, 0xef,
      0xd6, 0xde, 0xcd, 0xaa, 0x94, 0x01, 0xa2, 0xb5,
      0xa5, 0x9a, 0xb2, 0x4a, 0x92, 0x50, 0x89, 0x6e,
      0xda, 0x91, 0x03, 0xbb, 0x0d, 0xc9, 0xd8, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rclrs_example_msgs__msg__NestedType__TYPE_NAME[] = "rclrs_example_msgs/msg/NestedType";

// Define type names, field names, and default values
static char rclrs_example_msgs__msg__NestedType__FIELD_NAME__effect[] = "effect";
static char rclrs_example_msgs__msg__NestedType__DEFAULT_VALUE__effect[] = "discombobulate";

static rosidl_runtime_c__type_description__Field rclrs_example_msgs__msg__NestedType__FIELDS[] = {
  {
    {rclrs_example_msgs__msg__NestedType__FIELD_NAME__effect, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {rclrs_example_msgs__msg__NestedType__DEFAULT_VALUE__effect, 14, 14},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rclrs_example_msgs__msg__NestedType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rclrs_example_msgs__msg__NestedType__TYPE_NAME, 33, 33},
      {rclrs_example_msgs__msg__NestedType__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string effect \"discombobulate\"";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rclrs_example_msgs__msg__NestedType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rclrs_example_msgs__msg__NestedType__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rclrs_example_msgs__msg__NestedType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rclrs_example_msgs__msg__NestedType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
