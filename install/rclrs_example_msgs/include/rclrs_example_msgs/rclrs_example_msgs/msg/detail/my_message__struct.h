// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rclrs_example_msgs/msg/my_message.h"


#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_H_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SHORT_CONSTANT'.
enum
{
  rclrs_example_msgs__msg__MyMessage__SHORT_CONSTANT = -23
};

/// Constant 'UNSIGNED_LONG_CONSTANT'.
enum
{
  rclrs_example_msgs__msg__MyMessage__UNSIGNED_LONG_CONSTANT = 42ul
};

/// Constant 'FLOAT_CONSTANT'.
static const float rclrs_example_msgs__msg__MyMessage__FLOAT_CONSTANT = 1.25f;

/// Constant 'BOOLEAN_CONSTANT'.
static const bool rclrs_example_msgs__msg__MyMessage__BOOLEAN_CONSTANT = true;

/// Constant 'STRING_CONSTANT'.
static const char * const rclrs_example_msgs__msg__MyMessage__STRING_CONSTANT = "string_value";

/// Constant 'WSTRING_CONSTANT'.

/// Constant 'EMPTY_STRING_CONSTANT'.
static const char * const rclrs_example_msgs__msg__MyMessage__EMPTY_STRING_CONSTANT = "";

// Include directives for member types
// Member 'string_value'
// Member 'bounded_string_value'
// Member 'unbounded_values_of_bounded_strings'
// Member 'bounded_values_of_bounded_strings'
#include "rosidl_runtime_c/string.h"
// Member 'wstring_value'
// Member 'bounded_wstring_value'
#include "rosidl_runtime_c/u16string.h"
// Member 'unbounded_short_values'
// Member 'bounded_short_values'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// bounded_string_value
enum
{
  rclrs_example_msgs__msg__MyMessage__bounded_string_value__MAX_STRING_SIZE = 5
};
// bounded_wstring_value
enum
{
  rclrs_example_msgs__msg__MyMessage__bounded_wstring_value__MAX_STRING_SIZE = 23
};
// bounded_short_values
enum
{
  rclrs_example_msgs__msg__MyMessage__bounded_short_values__MAX_SIZE = 5
};
// unbounded_values_of_bounded_strings
enum
{
  rclrs_example_msgs__msg__MyMessage__unbounded_values_of_bounded_strings__MAX_STRING_SIZE = 3
};
// bounded_values_of_bounded_strings
enum
{
  rclrs_example_msgs__msg__MyMessage__bounded_values_of_bounded_strings__MAX_SIZE = 4
};
// bounded_values_of_bounded_strings
enum
{
  rclrs_example_msgs__msg__MyMessage__bounded_values_of_bounded_strings__MAX_STRING_SIZE = 3
};

/// Struct defined in msg/MyMessage in the package rclrs_example_msgs.
/**
  * Documentation of MyMessage.Adjacent string literal.
 */
typedef struct rclrs_example_msgs__msg__MyMessage
{
  int16_t short_value;
  int16_t short_value2;
  uint16_t unsigned_short_value;
  int32_t long_value;
  uint32_t unsigned_long_value;
  int64_t long_long_value;
  uint64_t unsigned_long_long_value;
  float float_value;
  double double_value;
  signed char char_value;
  uint16_t wchar_value;
  bool boolean_value;
  uint8_t octet_value;
  int8_t int8_value;
  uint8_t uint8_value;
  int16_t int16_value;
  uint16_t uint16_value;
  int32_t int32_value;
  uint32_t uint32_value;
  int64_t int64_value;
  uint64_t uint64_value;
  rosidl_runtime_c__String string_value;
  rosidl_runtime_c__String bounded_string_value;
  rosidl_runtime_c__U16String wstring_value;
  rosidl_runtime_c__U16String bounded_wstring_value;
  rosidl_runtime_c__int16__Sequence unbounded_short_values;
  rosidl_runtime_c__int16__Sequence bounded_short_values;
  rosidl_runtime_c__String__Sequence unbounded_values_of_bounded_strings;
  rosidl_runtime_c__String__Sequence bounded_values_of_bounded_strings;
  int16_t array_short_values[23];
  float int_and_frac_with_positive_scientific;
  float int_and_frac_with_explicit_positive_scientific;
  float int_and_frac_with_negative_scientific;
  float int_and_frac;
  float int_with_empty_frac;
  float frac_only;
  float int_with_positive_scientific;
  float int_with_explicit_positive_scientific;
  float int_with_negative_scientific;
  float fixed_int_and_frac;
  float fixed_int_with_dot_only;
  float fixed_frac_only;
  float fixed_int_only;
} rclrs_example_msgs__msg__MyMessage;

// Struct for a sequence of rclrs_example_msgs__msg__MyMessage.
typedef struct rclrs_example_msgs__msg__MyMessage__Sequence
{
  rclrs_example_msgs__msg__MyMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rclrs_example_msgs__msg__MyMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_H_
