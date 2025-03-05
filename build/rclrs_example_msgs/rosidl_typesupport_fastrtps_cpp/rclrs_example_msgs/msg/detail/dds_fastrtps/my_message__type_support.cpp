// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice
#include "rclrs_example_msgs/msg/detail/my_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rclrs_example_msgs/msg/detail/my_message__functions.h"
#include "rclrs_example_msgs/msg/detail/my_message__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rclrs_example_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_serialize(
  const rclrs_example_msgs::msg::MyMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: short_value
  cdr << ros_message.short_value;

  // Member: short_value2
  cdr << ros_message.short_value2;

  // Member: unsigned_short_value
  cdr << ros_message.unsigned_short_value;

  // Member: long_value
  cdr << ros_message.long_value;

  // Member: unsigned_long_value
  cdr << ros_message.unsigned_long_value;

  // Member: long_long_value
  cdr << ros_message.long_long_value;

  // Member: unsigned_long_long_value
  cdr << ros_message.unsigned_long_long_value;

  // Member: float_value
  cdr << ros_message.float_value;

  // Member: double_value
  cdr << ros_message.double_value;

  // Member: char_value
  cdr << ros_message.char_value;

  // Member: wchar_value
  cdr << static_cast<wchar_t>(ros_message.wchar_value);

  // Member: boolean_value
  cdr << (ros_message.boolean_value ? true : false);

  // Member: octet_value
  cdr << ros_message.octet_value;

  // Member: int8_value
  cdr << ros_message.int8_value;

  // Member: uint8_value
  cdr << ros_message.uint8_value;

  // Member: int16_value
  cdr << ros_message.int16_value;

  // Member: uint16_value
  cdr << ros_message.uint16_value;

  // Member: int32_value
  cdr << ros_message.int32_value;

  // Member: uint32_value
  cdr << ros_message.uint32_value;

  // Member: int64_value
  cdr << ros_message.int64_value;

  // Member: uint64_value
  cdr << ros_message.uint64_value;

  // Member: string_value
  cdr << ros_message.string_value;

  // Member: bounded_string_value
  cdr << ros_message.bounded_string_value;

  // Member: wstring_value
  {
    rosidl_typesupport_fastrtps_cpp::cdr_serialize(cdr, ros_message.wstring_value);
  }

  // Member: bounded_wstring_value
  {
    rosidl_typesupport_fastrtps_cpp::cdr_serialize(cdr, ros_message.bounded_wstring_value);
  }

  // Member: unbounded_short_values
  {
    cdr << ros_message.unbounded_short_values;
  }

  // Member: bounded_short_values
  {
    size_t size = ros_message.bounded_short_values.size();
    if (size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serialize_array(&(ros_message.bounded_short_values[0]), size);
    }
  }

  // Member: unbounded_values_of_bounded_strings
  {
    cdr << ros_message.unbounded_values_of_bounded_strings;
  }

  // Member: bounded_values_of_bounded_strings
  {
    size_t size = ros_message.bounded_values_of_bounded_strings.size();
    if (size > 4) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.bounded_values_of_bounded_strings[i];
    }
  }

  // Member: array_short_values
  {
    cdr << ros_message.array_short_values;
  }

  // Member: int_and_frac_with_positive_scientific
  cdr << ros_message.int_and_frac_with_positive_scientific;

  // Member: int_and_frac_with_explicit_positive_scientific
  cdr << ros_message.int_and_frac_with_explicit_positive_scientific;

  // Member: int_and_frac_with_negative_scientific
  cdr << ros_message.int_and_frac_with_negative_scientific;

  // Member: int_and_frac
  cdr << ros_message.int_and_frac;

  // Member: int_with_empty_frac
  cdr << ros_message.int_with_empty_frac;

  // Member: frac_only
  cdr << ros_message.frac_only;

  // Member: int_with_positive_scientific
  cdr << ros_message.int_with_positive_scientific;

  // Member: int_with_explicit_positive_scientific
  cdr << ros_message.int_with_explicit_positive_scientific;

  // Member: int_with_negative_scientific
  cdr << ros_message.int_with_negative_scientific;

  // Member: fixed_int_and_frac
  cdr << ros_message.fixed_int_and_frac;

  // Member: fixed_int_with_dot_only
  cdr << ros_message.fixed_int_with_dot_only;

  // Member: fixed_frac_only
  cdr << ros_message.fixed_frac_only;

  // Member: fixed_int_only
  cdr << ros_message.fixed_int_only;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rclrs_example_msgs::msg::MyMessage & ros_message)
{
  // Member: short_value
  cdr >> ros_message.short_value;

  // Member: short_value2
  cdr >> ros_message.short_value2;

  // Member: unsigned_short_value
  cdr >> ros_message.unsigned_short_value;

  // Member: long_value
  cdr >> ros_message.long_value;

  // Member: unsigned_long_value
  cdr >> ros_message.unsigned_long_value;

  // Member: long_long_value
  cdr >> ros_message.long_long_value;

  // Member: unsigned_long_long_value
  cdr >> ros_message.unsigned_long_long_value;

  // Member: float_value
  cdr >> ros_message.float_value;

  // Member: double_value
  cdr >> ros_message.double_value;

  // Member: char_value
  cdr >> ros_message.char_value;

  // Member: wchar_value
  {
    wchar_t tmp;
    cdr >> tmp;
    ros_message.wchar_value = static_cast<char16_t>(tmp);
  }

  // Member: boolean_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.boolean_value = tmp ? true : false;
  }

  // Member: octet_value
  cdr >> ros_message.octet_value;

  // Member: int8_value
  cdr >> ros_message.int8_value;

  // Member: uint8_value
  cdr >> ros_message.uint8_value;

  // Member: int16_value
  cdr >> ros_message.int16_value;

  // Member: uint16_value
  cdr >> ros_message.uint16_value;

  // Member: int32_value
  cdr >> ros_message.int32_value;

  // Member: uint32_value
  cdr >> ros_message.uint32_value;

  // Member: int64_value
  cdr >> ros_message.int64_value;

  // Member: uint64_value
  cdr >> ros_message.uint64_value;

  // Member: string_value
  cdr >> ros_message.string_value;

  // Member: bounded_string_value
  cdr >> ros_message.bounded_string_value;

  // Member: wstring_value
  {
    bool succeeded = rosidl_typesupport_fastrtps_cpp::cdr_deserialize(cdr, ros_message.wstring_value);
    if (!succeeded) {
      fprintf(stderr, "failed to deserialize u16string\n");
      return false;
    }
  }

  // Member: bounded_wstring_value
  {
    bool succeeded = rosidl_typesupport_fastrtps_cpp::cdr_deserialize(cdr, ros_message.bounded_wstring_value);
    if (!succeeded) {
      fprintf(stderr, "failed to deserialize u16string\n");
      return false;
    }
  }

  // Member: unbounded_short_values
  {
    cdr >> ros_message.unbounded_short_values;
  }

  // Member: bounded_short_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_short_values.resize(size);
    if (size > 0) {
      cdr.deserialize_array(&(ros_message.bounded_short_values[0]), size);
    }
  }

  // Member: unbounded_values_of_bounded_strings
  {
    cdr >> ros_message.unbounded_values_of_bounded_strings;
  }

  // Member: bounded_values_of_bounded_strings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_values_of_bounded_strings.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.bounded_values_of_bounded_strings[i];
    }
  }

  // Member: array_short_values
  {
    cdr >> ros_message.array_short_values;
  }

  // Member: int_and_frac_with_positive_scientific
  cdr >> ros_message.int_and_frac_with_positive_scientific;

  // Member: int_and_frac_with_explicit_positive_scientific
  cdr >> ros_message.int_and_frac_with_explicit_positive_scientific;

  // Member: int_and_frac_with_negative_scientific
  cdr >> ros_message.int_and_frac_with_negative_scientific;

  // Member: int_and_frac
  cdr >> ros_message.int_and_frac;

  // Member: int_with_empty_frac
  cdr >> ros_message.int_with_empty_frac;

  // Member: frac_only
  cdr >> ros_message.frac_only;

  // Member: int_with_positive_scientific
  cdr >> ros_message.int_with_positive_scientific;

  // Member: int_with_explicit_positive_scientific
  cdr >> ros_message.int_with_explicit_positive_scientific;

  // Member: int_with_negative_scientific
  cdr >> ros_message.int_with_negative_scientific;

  // Member: fixed_int_and_frac
  cdr >> ros_message.fixed_int_and_frac;

  // Member: fixed_int_with_dot_only
  cdr >> ros_message.fixed_int_with_dot_only;

  // Member: fixed_frac_only
  cdr >> ros_message.fixed_frac_only;

  // Member: fixed_int_only
  cdr >> ros_message.fixed_int_only;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
get_serialized_size(
  const rclrs_example_msgs::msg::MyMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: short_value
  {
    size_t item_size = sizeof(ros_message.short_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: short_value2
  {
    size_t item_size = sizeof(ros_message.short_value2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: unsigned_short_value
  {
    size_t item_size = sizeof(ros_message.unsigned_short_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: long_value
  {
    size_t item_size = sizeof(ros_message.long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: unsigned_long_value
  {
    size_t item_size = sizeof(ros_message.unsigned_long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: long_long_value
  {
    size_t item_size = sizeof(ros_message.long_long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: unsigned_long_long_value
  {
    size_t item_size = sizeof(ros_message.unsigned_long_long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: float_value
  {
    size_t item_size = sizeof(ros_message.float_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: double_value
  {
    size_t item_size = sizeof(ros_message.double_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: char_value
  {
    size_t item_size = sizeof(ros_message.char_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wchar_value
  {
    size_t item_size = sizeof(ros_message.wchar_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: boolean_value
  {
    size_t item_size = sizeof(ros_message.boolean_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: octet_value
  {
    size_t item_size = sizeof(ros_message.octet_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int8_value
  {
    size_t item_size = sizeof(ros_message.int8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: uint8_value
  {
    size_t item_size = sizeof(ros_message.uint8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int16_value
  {
    size_t item_size = sizeof(ros_message.int16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: uint16_value
  {
    size_t item_size = sizeof(ros_message.uint16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int32_value
  {
    size_t item_size = sizeof(ros_message.int32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: uint32_value
  {
    size_t item_size = sizeof(ros_message.uint32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int64_value
  {
    size_t item_size = sizeof(ros_message.int64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: uint64_value
  {
    size_t item_size = sizeof(ros_message.uint64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_value.size() + 1);

  // Member: bounded_string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_string_value.size() + 1);

  // Member: wstring_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message.wstring_value.size() + 1);

  // Member: bounded_wstring_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message.bounded_wstring_value.size() + 1);

  // Member: unbounded_short_values
  {
    size_t array_size = ros_message.unbounded_short_values.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.unbounded_short_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bounded_short_values
  {
    size_t array_size = ros_message.bounded_short_values.size();
    if (array_size > 5) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.bounded_short_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: unbounded_values_of_bounded_strings
  {
    size_t array_size = ros_message.unbounded_values_of_bounded_strings.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.unbounded_values_of_bounded_strings[index].size() + 1);
    }
  }

  // Member: bounded_values_of_bounded_strings
  {
    size_t array_size = ros_message.bounded_values_of_bounded_strings.size();
    if (array_size > 4) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_values_of_bounded_strings[index].size() + 1);
    }
  }

  // Member: array_short_values
  {
    size_t array_size = 23;
    size_t item_size = sizeof(ros_message.array_short_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int_and_frac_with_positive_scientific
  {
    size_t item_size = sizeof(ros_message.int_and_frac_with_positive_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int_and_frac_with_explicit_positive_scientific
  {
    size_t item_size = sizeof(ros_message.int_and_frac_with_explicit_positive_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int_and_frac_with_negative_scientific
  {
    size_t item_size = sizeof(ros_message.int_and_frac_with_negative_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int_and_frac
  {
    size_t item_size = sizeof(ros_message.int_and_frac);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int_with_empty_frac
  {
    size_t item_size = sizeof(ros_message.int_with_empty_frac);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: frac_only
  {
    size_t item_size = sizeof(ros_message.frac_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int_with_positive_scientific
  {
    size_t item_size = sizeof(ros_message.int_with_positive_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int_with_explicit_positive_scientific
  {
    size_t item_size = sizeof(ros_message.int_with_explicit_positive_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: int_with_negative_scientific
  {
    size_t item_size = sizeof(ros_message.int_with_negative_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fixed_int_and_frac
  {
    size_t item_size = sizeof(ros_message.fixed_int_and_frac);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fixed_int_with_dot_only
  {
    size_t item_size = sizeof(ros_message.fixed_int_with_dot_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fixed_frac_only
  {
    size_t item_size = sizeof(ros_message.fixed_frac_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fixed_int_only
  {
    size_t item_size = sizeof(ros_message.fixed_int_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
max_serialized_size_MyMessage(
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

  // Member: short_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: short_value2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: unsigned_short_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: unsigned_long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: long_long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: unsigned_long_long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: float_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: double_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: char_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: wchar_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: boolean_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: octet_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: int8_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: uint8_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: int16_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: uint16_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: int32_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: uint32_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: int64_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: uint64_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: string_value
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: bounded_string_value
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        5 +
        1;
    }
  }
  // Member: wstring_value
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }
  // Member: bounded_wstring_value
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        23 +
        wchar_size *
        1;
    }
  }
  // Member: unbounded_short_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: bounded_short_values
  {
    size_t array_size = 5;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: unbounded_values_of_bounded_strings
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        3 +
        1;
    }
  }
  // Member: bounded_values_of_bounded_strings
  {
    size_t array_size = 4;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        3 +
        1;
    }
  }
  // Member: array_short_values
  {
    size_t array_size = 23;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: int_and_frac_with_positive_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: int_and_frac_with_explicit_positive_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: int_and_frac_with_negative_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: int_and_frac
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: int_with_empty_frac
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: frac_only
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: int_with_positive_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: int_with_explicit_positive_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: int_with_negative_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fixed_int_and_frac
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fixed_int_with_dot_only
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fixed_frac_only
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: fixed_int_only
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rclrs_example_msgs::msg::MyMessage;
    is_plain =
      (
      offsetof(DataType, fixed_int_only) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_serialize_key(
  const rclrs_example_msgs::msg::MyMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: long_value
  cdr << ros_message.long_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
get_serialized_size_key(
  const rclrs_example_msgs::msg::MyMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: long_value
  {
    size_t item_size = sizeof(ros_message.long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
max_serialized_size_key_MyMessage(
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

  // Member: long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rclrs_example_msgs::msg::MyMessage;
    is_plain =
      (
      offsetof(DataType, fixed_int_only) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MyMessage__cdr_serialize_key(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rclrs_example_msgs::msg::MyMessage *>(
    untyped_ros_message);

  return cdr_serialize_key(*typed_message, cdr);
}

static
size_t
_MyMessage__get_serialized_size_key(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rclrs_example_msgs::msg::MyMessage *>(
    untyped_ros_message);

  return get_serialized_size_key(*typed_message, 0);
}

static size_t _MyMessage__max_serialized_size_key(
  bool & is_unbounded)
{
  bool full_bounded = true;
  bool is_plain = true;

  size_t ret_val = max_serialized_size_key_MyMessage(
    full_bounded,
    is_plain,
    0);

  is_unbounded = !full_bounded;
  return ret_val;
}

static message_type_support_key_callbacks_t _MyMessage__key_callbacks = {
  _MyMessage__max_serialized_size_key,
  _MyMessage__get_serialized_size_key,
  _MyMessage__cdr_serialize_key
};

static bool _MyMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rclrs_example_msgs::msg::MyMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MyMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rclrs_example_msgs::msg::MyMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MyMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rclrs_example_msgs::msg::MyMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MyMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MyMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MyMessage__callbacks = {
  "rclrs_example_msgs::msg",
  "MyMessage",
  _MyMessage__cdr_serialize,
  _MyMessage__cdr_deserialize,
  _MyMessage__get_serialized_size,
  _MyMessage__max_serialized_size,
  &_MyMessage__key_callbacks
};

static rosidl_message_type_support_t _MyMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MyMessage__callbacks,
  get_message_typesupport_handle_function,
  &rclrs_example_msgs__msg__MyMessage__get_type_hash,
  &rclrs_example_msgs__msg__MyMessage__get_type_description,
  &rclrs_example_msgs__msg__MyMessage__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rclrs_example_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rclrs_example_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rclrs_example_msgs::msg::MyMessage>()
{
  return &rclrs_example_msgs::msg::typesupport_fastrtps_cpp::_MyMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rclrs_example_msgs, msg, MyMessage)() {
  return &rclrs_example_msgs::msg::typesupport_fastrtps_cpp::_MyMessage__handle;
}

#ifdef __cplusplus
}
#endif
