// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from actionlib_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice
#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "actionlib_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "actionlib_msgs/msg/detail/goal_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
bool cdr_serialize_actionlib_msgs__msg__GoalStatus(
  const actionlib_msgs__msg__GoalStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
bool cdr_deserialize_actionlib_msgs__msg__GoalStatus(
  eprosima::fastcdr::Cdr &,
  actionlib_msgs__msg__GoalStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
size_t get_serialized_size_actionlib_msgs__msg__GoalStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
size_t max_serialized_size_actionlib_msgs__msg__GoalStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
bool cdr_serialize_key_actionlib_msgs__msg__GoalStatus(
  const actionlib_msgs__msg__GoalStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
size_t get_serialized_size_key_actionlib_msgs__msg__GoalStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
size_t max_serialized_size_key_actionlib_msgs__msg__GoalStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actionlib_msgs, msg, GoalStatus)();

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
