// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/UInt16MultiArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_msgs/msg/u_int16_multi_array.hpp"


#ifndef STD_MSGS__MSG__DETAIL__U_INT16_MULTI_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__U_INT16_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_msgs/msg/detail/u_int16_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_UInt16MultiArray_data
{
public:
  explicit Init_UInt16MultiArray_data(::std_msgs::msg::UInt16MultiArray & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::UInt16MultiArray data(::std_msgs::msg::UInt16MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::UInt16MultiArray msg_;
};

class Init_UInt16MultiArray_layout
{
public:
  Init_UInt16MultiArray_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UInt16MultiArray_data layout(::std_msgs::msg::UInt16MultiArray::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_UInt16MultiArray_data(msg_);
  }

private:
  ::std_msgs::msg::UInt16MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::UInt16MultiArray>()
{
  return std_msgs::msg::builder::Init_UInt16MultiArray_layout();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__U_INT16_MULTI_ARRAY__BUILDER_HPP_
