// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rclrs_example_msgs/msg/my_message.hpp"


#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__BUILDER_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rclrs_example_msgs/msg/detail/my_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rclrs_example_msgs
{

namespace msg
{

namespace builder
{

class Init_MyMessage_fixed_int_only
{
public:
  explicit Init_MyMessage_fixed_int_only(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  ::rclrs_example_msgs::msg::MyMessage fixed_int_only(::rclrs_example_msgs::msg::MyMessage::_fixed_int_only_type arg)
  {
    msg_.fixed_int_only = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_fixed_frac_only
{
public:
  explicit Init_MyMessage_fixed_frac_only(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_fixed_int_only fixed_frac_only(::rclrs_example_msgs::msg::MyMessage::_fixed_frac_only_type arg)
  {
    msg_.fixed_frac_only = std::move(arg);
    return Init_MyMessage_fixed_int_only(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_fixed_int_with_dot_only
{
public:
  explicit Init_MyMessage_fixed_int_with_dot_only(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_fixed_frac_only fixed_int_with_dot_only(::rclrs_example_msgs::msg::MyMessage::_fixed_int_with_dot_only_type arg)
  {
    msg_.fixed_int_with_dot_only = std::move(arg);
    return Init_MyMessage_fixed_frac_only(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_fixed_int_and_frac
{
public:
  explicit Init_MyMessage_fixed_int_and_frac(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_fixed_int_with_dot_only fixed_int_and_frac(::rclrs_example_msgs::msg::MyMessage::_fixed_int_and_frac_type arg)
  {
    msg_.fixed_int_and_frac = std::move(arg);
    return Init_MyMessage_fixed_int_with_dot_only(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int_with_negative_scientific
{
public:
  explicit Init_MyMessage_int_with_negative_scientific(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_fixed_int_and_frac int_with_negative_scientific(::rclrs_example_msgs::msg::MyMessage::_int_with_negative_scientific_type arg)
  {
    msg_.int_with_negative_scientific = std::move(arg);
    return Init_MyMessage_fixed_int_and_frac(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int_with_explicit_positive_scientific
{
public:
  explicit Init_MyMessage_int_with_explicit_positive_scientific(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int_with_negative_scientific int_with_explicit_positive_scientific(::rclrs_example_msgs::msg::MyMessage::_int_with_explicit_positive_scientific_type arg)
  {
    msg_.int_with_explicit_positive_scientific = std::move(arg);
    return Init_MyMessage_int_with_negative_scientific(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int_with_positive_scientific
{
public:
  explicit Init_MyMessage_int_with_positive_scientific(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int_with_explicit_positive_scientific int_with_positive_scientific(::rclrs_example_msgs::msg::MyMessage::_int_with_positive_scientific_type arg)
  {
    msg_.int_with_positive_scientific = std::move(arg);
    return Init_MyMessage_int_with_explicit_positive_scientific(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_frac_only
{
public:
  explicit Init_MyMessage_frac_only(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int_with_positive_scientific frac_only(::rclrs_example_msgs::msg::MyMessage::_frac_only_type arg)
  {
    msg_.frac_only = std::move(arg);
    return Init_MyMessage_int_with_positive_scientific(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int_with_empty_frac
{
public:
  explicit Init_MyMessage_int_with_empty_frac(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_frac_only int_with_empty_frac(::rclrs_example_msgs::msg::MyMessage::_int_with_empty_frac_type arg)
  {
    msg_.int_with_empty_frac = std::move(arg);
    return Init_MyMessage_frac_only(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int_and_frac
{
public:
  explicit Init_MyMessage_int_and_frac(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int_with_empty_frac int_and_frac(::rclrs_example_msgs::msg::MyMessage::_int_and_frac_type arg)
  {
    msg_.int_and_frac = std::move(arg);
    return Init_MyMessage_int_with_empty_frac(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int_and_frac_with_negative_scientific
{
public:
  explicit Init_MyMessage_int_and_frac_with_negative_scientific(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int_and_frac int_and_frac_with_negative_scientific(::rclrs_example_msgs::msg::MyMessage::_int_and_frac_with_negative_scientific_type arg)
  {
    msg_.int_and_frac_with_negative_scientific = std::move(arg);
    return Init_MyMessage_int_and_frac(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int_and_frac_with_explicit_positive_scientific
{
public:
  explicit Init_MyMessage_int_and_frac_with_explicit_positive_scientific(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int_and_frac_with_negative_scientific int_and_frac_with_explicit_positive_scientific(::rclrs_example_msgs::msg::MyMessage::_int_and_frac_with_explicit_positive_scientific_type arg)
  {
    msg_.int_and_frac_with_explicit_positive_scientific = std::move(arg);
    return Init_MyMessage_int_and_frac_with_negative_scientific(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int_and_frac_with_positive_scientific
{
public:
  explicit Init_MyMessage_int_and_frac_with_positive_scientific(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int_and_frac_with_explicit_positive_scientific int_and_frac_with_positive_scientific(::rclrs_example_msgs::msg::MyMessage::_int_and_frac_with_positive_scientific_type arg)
  {
    msg_.int_and_frac_with_positive_scientific = std::move(arg);
    return Init_MyMessage_int_and_frac_with_explicit_positive_scientific(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_array_short_values
{
public:
  explicit Init_MyMessage_array_short_values(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int_and_frac_with_positive_scientific array_short_values(::rclrs_example_msgs::msg::MyMessage::_array_short_values_type arg)
  {
    msg_.array_short_values = std::move(arg);
    return Init_MyMessage_int_and_frac_with_positive_scientific(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_bounded_values_of_bounded_strings
{
public:
  explicit Init_MyMessage_bounded_values_of_bounded_strings(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_array_short_values bounded_values_of_bounded_strings(::rclrs_example_msgs::msg::MyMessage::_bounded_values_of_bounded_strings_type arg)
  {
    msg_.bounded_values_of_bounded_strings = std::move(arg);
    return Init_MyMessage_array_short_values(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_unbounded_values_of_bounded_strings
{
public:
  explicit Init_MyMessage_unbounded_values_of_bounded_strings(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_bounded_values_of_bounded_strings unbounded_values_of_bounded_strings(::rclrs_example_msgs::msg::MyMessage::_unbounded_values_of_bounded_strings_type arg)
  {
    msg_.unbounded_values_of_bounded_strings = std::move(arg);
    return Init_MyMessage_bounded_values_of_bounded_strings(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_bounded_short_values
{
public:
  explicit Init_MyMessage_bounded_short_values(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_unbounded_values_of_bounded_strings bounded_short_values(::rclrs_example_msgs::msg::MyMessage::_bounded_short_values_type arg)
  {
    msg_.bounded_short_values = std::move(arg);
    return Init_MyMessage_unbounded_values_of_bounded_strings(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_unbounded_short_values
{
public:
  explicit Init_MyMessage_unbounded_short_values(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_bounded_short_values unbounded_short_values(::rclrs_example_msgs::msg::MyMessage::_unbounded_short_values_type arg)
  {
    msg_.unbounded_short_values = std::move(arg);
    return Init_MyMessage_bounded_short_values(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_bounded_wstring_value
{
public:
  explicit Init_MyMessage_bounded_wstring_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_unbounded_short_values bounded_wstring_value(::rclrs_example_msgs::msg::MyMessage::_bounded_wstring_value_type arg)
  {
    msg_.bounded_wstring_value = std::move(arg);
    return Init_MyMessage_unbounded_short_values(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_wstring_value
{
public:
  explicit Init_MyMessage_wstring_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_bounded_wstring_value wstring_value(::rclrs_example_msgs::msg::MyMessage::_wstring_value_type arg)
  {
    msg_.wstring_value = std::move(arg);
    return Init_MyMessage_bounded_wstring_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_bounded_string_value
{
public:
  explicit Init_MyMessage_bounded_string_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_wstring_value bounded_string_value(::rclrs_example_msgs::msg::MyMessage::_bounded_string_value_type arg)
  {
    msg_.bounded_string_value = std::move(arg);
    return Init_MyMessage_wstring_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_string_value
{
public:
  explicit Init_MyMessage_string_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_bounded_string_value string_value(::rclrs_example_msgs::msg::MyMessage::_string_value_type arg)
  {
    msg_.string_value = std::move(arg);
    return Init_MyMessage_bounded_string_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_uint64_value
{
public:
  explicit Init_MyMessage_uint64_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_string_value uint64_value(::rclrs_example_msgs::msg::MyMessage::_uint64_value_type arg)
  {
    msg_.uint64_value = std::move(arg);
    return Init_MyMessage_string_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int64_value
{
public:
  explicit Init_MyMessage_int64_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_uint64_value int64_value(::rclrs_example_msgs::msg::MyMessage::_int64_value_type arg)
  {
    msg_.int64_value = std::move(arg);
    return Init_MyMessage_uint64_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_uint32_value
{
public:
  explicit Init_MyMessage_uint32_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int64_value uint32_value(::rclrs_example_msgs::msg::MyMessage::_uint32_value_type arg)
  {
    msg_.uint32_value = std::move(arg);
    return Init_MyMessage_int64_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int32_value
{
public:
  explicit Init_MyMessage_int32_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_uint32_value int32_value(::rclrs_example_msgs::msg::MyMessage::_int32_value_type arg)
  {
    msg_.int32_value = std::move(arg);
    return Init_MyMessage_uint32_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_uint16_value
{
public:
  explicit Init_MyMessage_uint16_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int32_value uint16_value(::rclrs_example_msgs::msg::MyMessage::_uint16_value_type arg)
  {
    msg_.uint16_value = std::move(arg);
    return Init_MyMessage_int32_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int16_value
{
public:
  explicit Init_MyMessage_int16_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_uint16_value int16_value(::rclrs_example_msgs::msg::MyMessage::_int16_value_type arg)
  {
    msg_.int16_value = std::move(arg);
    return Init_MyMessage_uint16_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_uint8_value
{
public:
  explicit Init_MyMessage_uint8_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int16_value uint8_value(::rclrs_example_msgs::msg::MyMessage::_uint8_value_type arg)
  {
    msg_.uint8_value = std::move(arg);
    return Init_MyMessage_int16_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_int8_value
{
public:
  explicit Init_MyMessage_int8_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_uint8_value int8_value(::rclrs_example_msgs::msg::MyMessage::_int8_value_type arg)
  {
    msg_.int8_value = std::move(arg);
    return Init_MyMessage_uint8_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_octet_value
{
public:
  explicit Init_MyMessage_octet_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_int8_value octet_value(::rclrs_example_msgs::msg::MyMessage::_octet_value_type arg)
  {
    msg_.octet_value = std::move(arg);
    return Init_MyMessage_int8_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_boolean_value
{
public:
  explicit Init_MyMessage_boolean_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_octet_value boolean_value(::rclrs_example_msgs::msg::MyMessage::_boolean_value_type arg)
  {
    msg_.boolean_value = std::move(arg);
    return Init_MyMessage_octet_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_wchar_value
{
public:
  explicit Init_MyMessage_wchar_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_boolean_value wchar_value(::rclrs_example_msgs::msg::MyMessage::_wchar_value_type arg)
  {
    msg_.wchar_value = std::move(arg);
    return Init_MyMessage_boolean_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_char_value
{
public:
  explicit Init_MyMessage_char_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_wchar_value char_value(::rclrs_example_msgs::msg::MyMessage::_char_value_type arg)
  {
    msg_.char_value = std::move(arg);
    return Init_MyMessage_wchar_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_double_value
{
public:
  explicit Init_MyMessage_double_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_char_value double_value(::rclrs_example_msgs::msg::MyMessage::_double_value_type arg)
  {
    msg_.double_value = std::move(arg);
    return Init_MyMessage_char_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_float_value
{
public:
  explicit Init_MyMessage_float_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_double_value float_value(::rclrs_example_msgs::msg::MyMessage::_float_value_type arg)
  {
    msg_.float_value = std::move(arg);
    return Init_MyMessage_double_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_unsigned_long_long_value
{
public:
  explicit Init_MyMessage_unsigned_long_long_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_float_value unsigned_long_long_value(::rclrs_example_msgs::msg::MyMessage::_unsigned_long_long_value_type arg)
  {
    msg_.unsigned_long_long_value = std::move(arg);
    return Init_MyMessage_float_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_long_long_value
{
public:
  explicit Init_MyMessage_long_long_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_unsigned_long_long_value long_long_value(::rclrs_example_msgs::msg::MyMessage::_long_long_value_type arg)
  {
    msg_.long_long_value = std::move(arg);
    return Init_MyMessage_unsigned_long_long_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_unsigned_long_value
{
public:
  explicit Init_MyMessage_unsigned_long_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_long_long_value unsigned_long_value(::rclrs_example_msgs::msg::MyMessage::_unsigned_long_value_type arg)
  {
    msg_.unsigned_long_value = std::move(arg);
    return Init_MyMessage_long_long_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_long_value
{
public:
  explicit Init_MyMessage_long_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_unsigned_long_value long_value(::rclrs_example_msgs::msg::MyMessage::_long_value_type arg)
  {
    msg_.long_value = std::move(arg);
    return Init_MyMessage_unsigned_long_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_unsigned_short_value
{
public:
  explicit Init_MyMessage_unsigned_short_value(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_long_value unsigned_short_value(::rclrs_example_msgs::msg::MyMessage::_unsigned_short_value_type arg)
  {
    msg_.unsigned_short_value = std::move(arg);
    return Init_MyMessage_long_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_short_value2
{
public:
  explicit Init_MyMessage_short_value2(::rclrs_example_msgs::msg::MyMessage & msg)
  : msg_(msg)
  {}
  Init_MyMessage_unsigned_short_value short_value2(::rclrs_example_msgs::msg::MyMessage::_short_value2_type arg)
  {
    msg_.short_value2 = std::move(arg);
    return Init_MyMessage_unsigned_short_value(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

class Init_MyMessage_short_value
{
public:
  Init_MyMessage_short_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyMessage_short_value2 short_value(::rclrs_example_msgs::msg::MyMessage::_short_value_type arg)
  {
    msg_.short_value = std::move(arg);
    return Init_MyMessage_short_value2(msg_);
  }

private:
  ::rclrs_example_msgs::msg::MyMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rclrs_example_msgs::msg::MyMessage>()
{
  return rclrs_example_msgs::msg::builder::Init_MyMessage_short_value();
}

}  // namespace rclrs_example_msgs

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__BUILDER_HPP_
