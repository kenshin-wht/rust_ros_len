// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rclrs_example_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rclrs_example_msgs/msg/detail/various_types__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace rclrs_example_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_serialize(
  const rclrs_example_msgs::msg::VariousTypes & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rclrs_example_msgs::msg::VariousTypes & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
get_serialized_size(
  const rclrs_example_msgs::msg::VariousTypes & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
max_serialized_size_VariousTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_serialize_key(
  const rclrs_example_msgs::msg::VariousTypes & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
get_serialized_size_key(
  const rclrs_example_msgs::msg::VariousTypes & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
max_serialized_size_key_VariousTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rclrs_example_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rclrs_example_msgs, msg, VariousTypes)();

#ifdef __cplusplus
}
#endif

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
