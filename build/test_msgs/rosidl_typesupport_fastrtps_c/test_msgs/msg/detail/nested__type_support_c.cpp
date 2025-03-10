// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:msg/Nested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/nested__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/msg/detail/nested__struct.h"
#include "test_msgs/msg/detail/nested__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "test_msgs/msg/detail/basic_types__functions.h"  // basic_types_value

// forward declare type support functions

bool cdr_serialize_test_msgs__msg__BasicTypes(
  const test_msgs__msg__BasicTypes * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__BasicTypes(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__BasicTypes * ros_message);

size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__BasicTypes(
  const test_msgs__msg__BasicTypes * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes)();


using _Nested__ros_msg_type = test_msgs__msg__Nested;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_test_msgs__msg__Nested(
  const test_msgs__msg__Nested * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: basic_types_value
  {
    cdr_serialize_test_msgs__msg__BasicTypes(
      &ros_message->basic_types_value, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_deserialize_test_msgs__msg__Nested(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__Nested * ros_message)
{
  // Field name: basic_types_value
  {
    cdr_deserialize_test_msgs__msg__BasicTypes(cdr, &ros_message->basic_types_value);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__Nested(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Nested__ros_msg_type * ros_message = static_cast<const _Nested__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: basic_types_value
  current_alignment += get_serialized_size_test_msgs__msg__BasicTypes(
    &(ros_message->basic_types_value), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__Nested(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: basic_types_value
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__msg__Nested;
    is_plain =
      (
      offsetof(DataType, basic_types_value) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_key_test_msgs__msg__Nested(
  const test_msgs__msg__Nested * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: basic_types_value
  {
    cdr_serialize_key_test_msgs__msg__BasicTypes(
      &ros_message->basic_types_value, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_key_test_msgs__msg__Nested(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Nested__ros_msg_type * ros_message = static_cast<const _Nested__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: basic_types_value
  current_alignment += get_serialized_size_key_test_msgs__msg__BasicTypes(
    &(ros_message->basic_types_value), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_key_test_msgs__msg__Nested(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: basic_types_value
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__msg__Nested;
    is_plain =
      (
      offsetof(DataType, basic_types_value) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Nested__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const test_msgs__msg__Nested * ros_message = static_cast<const test_msgs__msg__Nested *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_test_msgs__msg__Nested(ros_message, cdr);
}

static bool _Nested__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  test_msgs__msg__Nested * ros_message = static_cast<test_msgs__msg__Nested *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_test_msgs__msg__Nested(cdr, ros_message);
}

static uint32_t _Nested__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__msg__Nested(
      untyped_ros_message, 0));
}

static size_t _Nested__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__msg__Nested(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Nested = {
  "test_msgs::msg",
  "Nested",
  _Nested__cdr_serialize,
  _Nested__cdr_deserialize,
  _Nested__get_serialized_size,
  _Nested__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Nested__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Nested,
  get_message_typesupport_handle_function,
  &test_msgs__msg__Nested__get_type_hash,
  &test_msgs__msg__Nested__get_type_description,
  &test_msgs__msg__Nested__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Nested)() {
  return &_Nested__type_support;
}

#if defined(__cplusplus)
}
#endif
