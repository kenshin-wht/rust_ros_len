// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rclrs_example_msgs/msg/detail/my_message__rosidl_typesupport_introspection_c.h"
#include "rclrs_example_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rclrs_example_msgs/msg/detail/my_message__functions.h"
#include "rclrs_example_msgs/msg/detail/my_message__struct.h"


// Include directives for member types
// Member `string_value`
// Member `bounded_string_value`
// Member `unbounded_values_of_bounded_strings`
// Member `bounded_values_of_bounded_strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `wstring_value`
// Member `bounded_wstring_value`
#include "rosidl_runtime_c/u16string_functions.h"
// Member `unbounded_short_values`
// Member `bounded_short_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rclrs_example_msgs__msg__MyMessage__init(message_memory);
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_fini_function(void * message_memory)
{
  rclrs_example_msgs__msg__MyMessage__fini(message_memory);
}

size_t rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__unbounded_short_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__unbounded_short_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__unbounded_short_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__unbounded_short_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__unbounded_short_values(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__unbounded_short_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__unbounded_short_values(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__resize_function__MyMessage__unbounded_short_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__bounded_short_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__bounded_short_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__bounded_short_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__bounded_short_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__bounded_short_values(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__bounded_short_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__bounded_short_values(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__resize_function__MyMessage__bounded_short_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__unbounded_values_of_bounded_strings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__unbounded_values_of_bounded_strings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__unbounded_values_of_bounded_strings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__unbounded_values_of_bounded_strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__unbounded_values_of_bounded_strings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__unbounded_values_of_bounded_strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__unbounded_values_of_bounded_strings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__resize_function__MyMessage__unbounded_values_of_bounded_strings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__bounded_values_of_bounded_strings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__bounded_values_of_bounded_strings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__bounded_values_of_bounded_strings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__bounded_values_of_bounded_strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__bounded_values_of_bounded_strings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__bounded_values_of_bounded_strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__bounded_values_of_bounded_strings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__resize_function__MyMessage__bounded_values_of_bounded_strings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__array_short_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 23;
}

const void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__array_short_values(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__array_short_values(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__array_short_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__array_short_values(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__array_short_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__array_short_values(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_message_member_array[43] = {
  {
    "short_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, short_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "short_value2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, short_value2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unsigned_short_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, unsigned_short_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, long_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unsigned_long_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, unsigned_long_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "long_long_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, long_long_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unsigned_long_long_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, unsigned_long_long_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, float_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "double_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, double_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_CHAR,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, char_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wchar_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WCHAR,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, wchar_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "boolean_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, boolean_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octet_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, octet_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int8_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int8_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint8_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, uint8_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int16_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int16_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint16_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, uint16_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int32_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int32_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint32_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, uint32_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int64_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int64_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint64_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, uint64_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, string_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_string_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    5,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, bounded_string_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wstring_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, wstring_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_wstring_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    23,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, bounded_wstring_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unbounded_short_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, unbounded_short_values),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__unbounded_short_values,  // size() function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__unbounded_short_values,  // get_const(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__unbounded_short_values,  // get(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__unbounded_short_values,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__unbounded_short_values,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__resize_function__MyMessage__unbounded_short_values  // resize(index) function pointer
  },
  {
    "bounded_short_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, bounded_short_values),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__bounded_short_values,  // size() function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__bounded_short_values,  // get_const(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__bounded_short_values,  // get(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__bounded_short_values,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__bounded_short_values,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__resize_function__MyMessage__bounded_short_values  // resize(index) function pointer
  },
  {
    "unbounded_values_of_bounded_strings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    3,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, unbounded_values_of_bounded_strings),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__unbounded_values_of_bounded_strings,  // size() function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__unbounded_values_of_bounded_strings,  // get_const(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__unbounded_values_of_bounded_strings,  // get(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__unbounded_values_of_bounded_strings,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__unbounded_values_of_bounded_strings,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__resize_function__MyMessage__unbounded_values_of_bounded_strings  // resize(index) function pointer
  },
  {
    "bounded_values_of_bounded_strings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    3,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, bounded_values_of_bounded_strings),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__bounded_values_of_bounded_strings,  // size() function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__bounded_values_of_bounded_strings,  // get_const(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__bounded_values_of_bounded_strings,  // get(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__bounded_values_of_bounded_strings,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__bounded_values_of_bounded_strings,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__resize_function__MyMessage__bounded_values_of_bounded_strings  // resize(index) function pointer
  },
  {
    "array_short_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    23,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, array_short_values),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__size_function__MyMessage__array_short_values,  // size() function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_const_function__MyMessage__array_short_values,  // get_const(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__get_function__MyMessage__array_short_values,  // get(index) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__fetch_function__MyMessage__array_short_values,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__assign_function__MyMessage__array_short_values,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_and_frac_with_positive_scientific",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int_and_frac_with_positive_scientific),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_and_frac_with_explicit_positive_scientific",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int_and_frac_with_explicit_positive_scientific),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_and_frac_with_negative_scientific",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int_and_frac_with_negative_scientific),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_and_frac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int_and_frac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_with_empty_frac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int_with_empty_frac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frac_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, frac_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_with_positive_scientific",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int_with_positive_scientific),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_with_explicit_positive_scientific",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int_with_explicit_positive_scientific),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_with_negative_scientific",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, int_with_negative_scientific),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_int_and_frac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, fixed_int_and_frac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_int_with_dot_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, fixed_int_with_dot_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_frac_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, fixed_frac_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_int_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__MyMessage, fixed_int_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_message_members = {
  "rclrs_example_msgs__msg",  // message namespace
  "MyMessage",  // message name
  43,  // number of fields
  sizeof(rclrs_example_msgs__msg__MyMessage),
  true,  // has_any_key_member_
  rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_message_member_array,  // message members
  rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_message_type_support_handle = {
  0,
  &rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_message_members,
  get_message_typesupport_handle_function,
  &rclrs_example_msgs__msg__MyMessage__get_type_hash,
  &rclrs_example_msgs__msg__MyMessage__get_type_description,
  &rclrs_example_msgs__msg__MyMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rclrs_example_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclrs_example_msgs, msg, MyMessage)() {
  if (!rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_message_type_support_handle.typesupport_identifier) {
    rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rclrs_example_msgs__msg__MyMessage__rosidl_typesupport_introspection_c__MyMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
