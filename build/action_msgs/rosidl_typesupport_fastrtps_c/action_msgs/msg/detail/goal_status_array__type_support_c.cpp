// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from action_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice
#include "action_msgs/msg/detail/goal_status_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "action_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "action_msgs/msg/detail/goal_status_array__struct.h"
#include "action_msgs/msg/detail/goal_status_array__functions.h"
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

#include "action_msgs/msg/detail/goal_status__functions.h"  // status_list

// forward declare type support functions

bool cdr_serialize_action_msgs__msg__GoalStatus(
  const action_msgs__msg__GoalStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_action_msgs__msg__GoalStatus(
  eprosima::fastcdr::Cdr & cdr,
  action_msgs__msg__GoalStatus * ros_message);

size_t get_serialized_size_action_msgs__msg__GoalStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_action_msgs__msg__GoalStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_action_msgs__msg__GoalStatus(
  const action_msgs__msg__GoalStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_action_msgs__msg__GoalStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_action_msgs__msg__GoalStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_msgs, msg, GoalStatus)();


using _GoalStatusArray__ros_msg_type = action_msgs__msg__GoalStatusArray;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_msgs
bool cdr_serialize_action_msgs__msg__GoalStatusArray(
  const action_msgs__msg__GoalStatusArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: status_list
  {
    size_t size = ros_message->status_list.size;
    auto array_ptr = ros_message->status_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_action_msgs__msg__GoalStatus(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_msgs
bool cdr_deserialize_action_msgs__msg__GoalStatusArray(
  eprosima::fastcdr::Cdr & cdr,
  action_msgs__msg__GoalStatusArray * ros_message)
{
  // Field name: status_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->status_list.data) {
      action_msgs__msg__GoalStatus__Sequence__fini(&ros_message->status_list);
    }
    if (!action_msgs__msg__GoalStatus__Sequence__init(&ros_message->status_list, size)) {
      fprintf(stderr, "failed to create array for field 'status_list'");
      return false;
    }
    auto array_ptr = ros_message->status_list.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_action_msgs__msg__GoalStatus(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_msgs
size_t get_serialized_size_action_msgs__msg__GoalStatusArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalStatusArray__ros_msg_type * ros_message = static_cast<const _GoalStatusArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: status_list
  {
    size_t array_size = ros_message->status_list.size;
    auto array_ptr = ros_message->status_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_action_msgs__msg__GoalStatus(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_msgs
size_t max_serialized_size_action_msgs__msg__GoalStatusArray(
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

  // Field name: status_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_action_msgs__msg__GoalStatus(
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
    using DataType = action_msgs__msg__GoalStatusArray;
    is_plain =
      (
      offsetof(DataType, status_list) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_msgs
bool cdr_serialize_key_action_msgs__msg__GoalStatusArray(
  const action_msgs__msg__GoalStatusArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: status_list
  {
    size_t size = ros_message->status_list.size;
    auto array_ptr = ros_message->status_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_action_msgs__msg__GoalStatus(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_msgs
size_t get_serialized_size_key_action_msgs__msg__GoalStatusArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalStatusArray__ros_msg_type * ros_message = static_cast<const _GoalStatusArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: status_list
  {
    size_t array_size = ros_message->status_list.size;
    auto array_ptr = ros_message->status_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_action_msgs__msg__GoalStatus(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_msgs
size_t max_serialized_size_key_action_msgs__msg__GoalStatusArray(
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
  // Field name: status_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_action_msgs__msg__GoalStatus(
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
    using DataType = action_msgs__msg__GoalStatusArray;
    is_plain =
      (
      offsetof(DataType, status_list) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GoalStatusArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const action_msgs__msg__GoalStatusArray * ros_message = static_cast<const action_msgs__msg__GoalStatusArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_action_msgs__msg__GoalStatusArray(ros_message, cdr);
}

static bool _GoalStatusArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  action_msgs__msg__GoalStatusArray * ros_message = static_cast<action_msgs__msg__GoalStatusArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_action_msgs__msg__GoalStatusArray(cdr, ros_message);
}

static uint32_t _GoalStatusArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_action_msgs__msg__GoalStatusArray(
      untyped_ros_message, 0));
}

static size_t _GoalStatusArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_action_msgs__msg__GoalStatusArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GoalStatusArray = {
  "action_msgs::msg",
  "GoalStatusArray",
  _GoalStatusArray__cdr_serialize,
  _GoalStatusArray__cdr_deserialize,
  _GoalStatusArray__get_serialized_size,
  _GoalStatusArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GoalStatusArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalStatusArray,
  get_message_typesupport_handle_function,
  &action_msgs__msg__GoalStatusArray__get_type_hash,
  &action_msgs__msg__GoalStatusArray__get_type_description,
  &action_msgs__msg__GoalStatusArray__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_msgs, msg, GoalStatusArray)() {
  return &_GoalStatusArray__type_support;
}

#if defined(__cplusplus)
}
#endif
