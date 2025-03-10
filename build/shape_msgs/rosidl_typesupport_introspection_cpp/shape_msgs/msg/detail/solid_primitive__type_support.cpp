// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "shape_msgs/msg/detail/solid_primitive__functions.h"
#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace shape_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SolidPrimitive_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) shape_msgs::msg::SolidPrimitive(_init);
}

void SolidPrimitive_fini_function(void * message_memory)
{
  auto typed_message = static_cast<shape_msgs::msg::SolidPrimitive *>(message_memory);
  typed_message->~SolidPrimitive();
}

size_t size_function__SolidPrimitive__dimensions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SolidPrimitive__dimensions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SolidPrimitive__dimensions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolidPrimitive__dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SolidPrimitive__dimensions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SolidPrimitive__dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SolidPrimitive__dimensions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SolidPrimitive__dimensions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SolidPrimitive_message_member_array[3] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_msgs::msg::SolidPrimitive, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dimensions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(shape_msgs::msg::SolidPrimitive, dimensions),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolidPrimitive__dimensions,  // size() function pointer
    get_const_function__SolidPrimitive__dimensions,  // get_const(index) function pointer
    get_function__SolidPrimitive__dimensions,  // get(index) function pointer
    fetch_function__SolidPrimitive__dimensions,  // fetch(index, &value) function pointer
    assign_function__SolidPrimitive__dimensions,  // assign(index, value) function pointer
    resize_function__SolidPrimitive__dimensions  // resize(index) function pointer
  },
  {
    "polygon",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Polygon>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_msgs::msg::SolidPrimitive, polygon),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SolidPrimitive_message_members = {
  "shape_msgs::msg",  // message namespace
  "SolidPrimitive",  // message name
  3,  // number of fields
  sizeof(shape_msgs::msg::SolidPrimitive),
  false,  // has_any_key_member_
  SolidPrimitive_message_member_array,  // message members
  SolidPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  SolidPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SolidPrimitive_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolidPrimitive_message_members,
  get_message_typesupport_handle_function,
  &shape_msgs__msg__SolidPrimitive__get_type_hash,
  &shape_msgs__msg__SolidPrimitive__get_type_description,
  &shape_msgs__msg__SolidPrimitive__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace shape_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shape_msgs::msg::SolidPrimitive>()
{
  return &::shape_msgs::msg::rosidl_typesupport_introspection_cpp::SolidPrimitive_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shape_msgs, msg, SolidPrimitive)() {
  return &::shape_msgs::msg::rosidl_typesupport_introspection_cpp::SolidPrimitive_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
