// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/Int32.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "example_interfaces/msg/detail/int32__functions.h"
#include "example_interfaces/msg/detail/int32__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace example_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Int32_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) example_interfaces::msg::Int32(_init);
}

void Int32_fini_function(void * message_memory)
{
  auto typed_message = static_cast<example_interfaces::msg::Int32 *>(message_memory);
  typed_message->~Int32();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Int32_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces::msg::Int32, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Int32_message_members = {
  "example_interfaces::msg",  // message namespace
  "Int32",  // message name
  1,  // number of fields
  sizeof(example_interfaces::msg::Int32),
  false,  // has_any_key_member_
  Int32_message_member_array,  // message members
  Int32_init_function,  // function to initialize message memory (memory has to be allocated)
  Int32_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Int32_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Int32_message_members,
  get_message_typesupport_handle_function,
  &example_interfaces__msg__Int32__get_type_hash,
  &example_interfaces__msg__Int32__get_type_description,
  &example_interfaces__msg__Int32__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace example_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::msg::Int32>()
{
  return &::example_interfaces::msg::rosidl_typesupport_introspection_cpp::Int32_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, msg, Int32)() {
  return &::example_interfaces::msg::rosidl_typesupport_introspection_cpp::Int32_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
