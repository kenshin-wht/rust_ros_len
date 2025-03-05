// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rclrs_example_msgs/msg/my_message.hpp"


#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__TRAITS_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rclrs_example_msgs/msg/detail/my_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rclrs_example_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: short_value
  {
    out << "short_value: ";
    rosidl_generator_traits::value_to_yaml(msg.short_value, out);
    out << ", ";
  }

  // member: short_value2
  {
    out << "short_value2: ";
    rosidl_generator_traits::value_to_yaml(msg.short_value2, out);
    out << ", ";
  }

  // member: unsigned_short_value
  {
    out << "unsigned_short_value: ";
    rosidl_generator_traits::value_to_yaml(msg.unsigned_short_value, out);
    out << ", ";
  }

  // member: long_value
  {
    out << "long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.long_value, out);
    out << ", ";
  }

  // member: unsigned_long_value
  {
    out << "unsigned_long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.unsigned_long_value, out);
    out << ", ";
  }

  // member: long_long_value
  {
    out << "long_long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.long_long_value, out);
    out << ", ";
  }

  // member: unsigned_long_long_value
  {
    out << "unsigned_long_long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.unsigned_long_long_value, out);
    out << ", ";
  }

  // member: float_value
  {
    out << "float_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float_value, out);
    out << ", ";
  }

  // member: double_value
  {
    out << "double_value: ";
    rosidl_generator_traits::value_to_yaml(msg.double_value, out);
    out << ", ";
  }

  // member: char_value
  {
    out << "char_value: ";
    rosidl_generator_traits::character_value_to_yaml(msg.char_value, out);
    out << ", ";
  }

  // member: wchar_value
  {
    out << "wchar_value: ";
    rosidl_generator_traits::character_value_to_yaml(msg.wchar_value, out);
    out << ", ";
  }

  // member: boolean_value
  {
    out << "boolean_value: ";
    rosidl_generator_traits::value_to_yaml(msg.boolean_value, out);
    out << ", ";
  }

  // member: octet_value
  {
    out << "octet_value: ";
    rosidl_generator_traits::character_value_to_yaml(msg.octet_value, out);
    out << ", ";
  }

  // member: int8_value
  {
    out << "int8_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int8_value, out);
    out << ", ";
  }

  // member: uint8_value
  {
    out << "uint8_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint8_value, out);
    out << ", ";
  }

  // member: int16_value
  {
    out << "int16_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int16_value, out);
    out << ", ";
  }

  // member: uint16_value
  {
    out << "uint16_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint16_value, out);
    out << ", ";
  }

  // member: int32_value
  {
    out << "int32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int32_value, out);
    out << ", ";
  }

  // member: uint32_value
  {
    out << "uint32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint32_value, out);
    out << ", ";
  }

  // member: int64_value
  {
    out << "int64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int64_value, out);
    out << ", ";
  }

  // member: uint64_value
  {
    out << "uint64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint64_value, out);
    out << ", ";
  }

  // member: string_value
  {
    out << "string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value, out);
    out << ", ";
  }

  // member: bounded_string_value
  {
    out << "bounded_string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value, out);
    out << ", ";
  }

  // member: wstring_value
  {
    out << "wstring_value: ";
    rosidl_generator_traits::value_to_yaml(msg.wstring_value, out);
    out << ", ";
  }

  // member: bounded_wstring_value
  {
    out << "bounded_wstring_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_wstring_value, out);
    out << ", ";
  }

  // member: unbounded_short_values
  {
    if (msg.unbounded_short_values.size() == 0) {
      out << "unbounded_short_values: []";
    } else {
      out << "unbounded_short_values: [";
      size_t pending_items = msg.unbounded_short_values.size();
      for (auto item : msg.unbounded_short_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bounded_short_values
  {
    if (msg.bounded_short_values.size() == 0) {
      out << "bounded_short_values: []";
    } else {
      out << "bounded_short_values: [";
      size_t pending_items = msg.bounded_short_values.size();
      for (auto item : msg.bounded_short_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unbounded_values_of_bounded_strings
  {
    if (msg.unbounded_values_of_bounded_strings.size() == 0) {
      out << "unbounded_values_of_bounded_strings: []";
    } else {
      out << "unbounded_values_of_bounded_strings: [";
      size_t pending_items = msg.unbounded_values_of_bounded_strings.size();
      for (auto item : msg.unbounded_values_of_bounded_strings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bounded_values_of_bounded_strings
  {
    if (msg.bounded_values_of_bounded_strings.size() == 0) {
      out << "bounded_values_of_bounded_strings: []";
    } else {
      out << "bounded_values_of_bounded_strings: [";
      size_t pending_items = msg.bounded_values_of_bounded_strings.size();
      for (auto item : msg.bounded_values_of_bounded_strings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: array_short_values
  {
    if (msg.array_short_values.size() == 0) {
      out << "array_short_values: []";
    } else {
      out << "array_short_values: [";
      size_t pending_items = msg.array_short_values.size();
      for (auto item : msg.array_short_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int_and_frac_with_positive_scientific
  {
    out << "int_and_frac_with_positive_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_and_frac_with_positive_scientific, out);
    out << ", ";
  }

  // member: int_and_frac_with_explicit_positive_scientific
  {
    out << "int_and_frac_with_explicit_positive_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_and_frac_with_explicit_positive_scientific, out);
    out << ", ";
  }

  // member: int_and_frac_with_negative_scientific
  {
    out << "int_and_frac_with_negative_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_and_frac_with_negative_scientific, out);
    out << ", ";
  }

  // member: int_and_frac
  {
    out << "int_and_frac: ";
    rosidl_generator_traits::value_to_yaml(msg.int_and_frac, out);
    out << ", ";
  }

  // member: int_with_empty_frac
  {
    out << "int_with_empty_frac: ";
    rosidl_generator_traits::value_to_yaml(msg.int_with_empty_frac, out);
    out << ", ";
  }

  // member: frac_only
  {
    out << "frac_only: ";
    rosidl_generator_traits::value_to_yaml(msg.frac_only, out);
    out << ", ";
  }

  // member: int_with_positive_scientific
  {
    out << "int_with_positive_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_with_positive_scientific, out);
    out << ", ";
  }

  // member: int_with_explicit_positive_scientific
  {
    out << "int_with_explicit_positive_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_with_explicit_positive_scientific, out);
    out << ", ";
  }

  // member: int_with_negative_scientific
  {
    out << "int_with_negative_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_with_negative_scientific, out);
    out << ", ";
  }

  // member: fixed_int_and_frac
  {
    out << "fixed_int_and_frac: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_int_and_frac, out);
    out << ", ";
  }

  // member: fixed_int_with_dot_only
  {
    out << "fixed_int_with_dot_only: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_int_with_dot_only, out);
    out << ", ";
  }

  // member: fixed_frac_only
  {
    out << "fixed_frac_only: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_frac_only, out);
    out << ", ";
  }

  // member: fixed_int_only
  {
    out << "fixed_int_only: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_int_only, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: short_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "short_value: ";
    rosidl_generator_traits::value_to_yaml(msg.short_value, out);
    out << "\n";
  }

  // member: short_value2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "short_value2: ";
    rosidl_generator_traits::value_to_yaml(msg.short_value2, out);
    out << "\n";
  }

  // member: unsigned_short_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unsigned_short_value: ";
    rosidl_generator_traits::value_to_yaml(msg.unsigned_short_value, out);
    out << "\n";
  }

  // member: long_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.long_value, out);
    out << "\n";
  }

  // member: unsigned_long_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unsigned_long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.unsigned_long_value, out);
    out << "\n";
  }

  // member: long_long_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "long_long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.long_long_value, out);
    out << "\n";
  }

  // member: unsigned_long_long_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unsigned_long_long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.unsigned_long_long_value, out);
    out << "\n";
  }

  // member: float_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float_value, out);
    out << "\n";
  }

  // member: double_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "double_value: ";
    rosidl_generator_traits::value_to_yaml(msg.double_value, out);
    out << "\n";
  }

  // member: char_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "char_value: ";
    rosidl_generator_traits::character_value_to_yaml(msg.char_value, out);
    out << "\n";
  }

  // member: wchar_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wchar_value: ";
    rosidl_generator_traits::character_value_to_yaml(msg.wchar_value, out);
    out << "\n";
  }

  // member: boolean_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boolean_value: ";
    rosidl_generator_traits::value_to_yaml(msg.boolean_value, out);
    out << "\n";
  }

  // member: octet_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "octet_value: ";
    rosidl_generator_traits::character_value_to_yaml(msg.octet_value, out);
    out << "\n";
  }

  // member: int8_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int8_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int8_value, out);
    out << "\n";
  }

  // member: uint8_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint8_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint8_value, out);
    out << "\n";
  }

  // member: int16_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int16_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int16_value, out);
    out << "\n";
  }

  // member: uint16_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint16_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint16_value, out);
    out << "\n";
  }

  // member: int32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int32_value, out);
    out << "\n";
  }

  // member: uint32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint32_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint32_value, out);
    out << "\n";
  }

  // member: int64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.int64_value, out);
    out << "\n";
  }

  // member: uint64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint64_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint64_value, out);
    out << "\n";
  }

  // member: string_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.string_value, out);
    out << "\n";
  }

  // member: bounded_string_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_string_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_value, out);
    out << "\n";
  }

  // member: wstring_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wstring_value: ";
    rosidl_generator_traits::value_to_yaml(msg.wstring_value, out);
    out << "\n";
  }

  // member: bounded_wstring_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_wstring_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_wstring_value, out);
    out << "\n";
  }

  // member: unbounded_short_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unbounded_short_values.size() == 0) {
      out << "unbounded_short_values: []\n";
    } else {
      out << "unbounded_short_values:\n";
      for (auto item : msg.unbounded_short_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bounded_short_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_short_values.size() == 0) {
      out << "bounded_short_values: []\n";
    } else {
      out << "bounded_short_values:\n";
      for (auto item : msg.bounded_short_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unbounded_values_of_bounded_strings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unbounded_values_of_bounded_strings.size() == 0) {
      out << "unbounded_values_of_bounded_strings: []\n";
    } else {
      out << "unbounded_values_of_bounded_strings:\n";
      for (auto item : msg.unbounded_values_of_bounded_strings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bounded_values_of_bounded_strings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_values_of_bounded_strings.size() == 0) {
      out << "bounded_values_of_bounded_strings: []\n";
    } else {
      out << "bounded_values_of_bounded_strings:\n";
      for (auto item : msg.bounded_values_of_bounded_strings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: array_short_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.array_short_values.size() == 0) {
      out << "array_short_values: []\n";
    } else {
      out << "array_short_values:\n";
      for (auto item : msg.array_short_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int_and_frac_with_positive_scientific
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_and_frac_with_positive_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_and_frac_with_positive_scientific, out);
    out << "\n";
  }

  // member: int_and_frac_with_explicit_positive_scientific
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_and_frac_with_explicit_positive_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_and_frac_with_explicit_positive_scientific, out);
    out << "\n";
  }

  // member: int_and_frac_with_negative_scientific
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_and_frac_with_negative_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_and_frac_with_negative_scientific, out);
    out << "\n";
  }

  // member: int_and_frac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_and_frac: ";
    rosidl_generator_traits::value_to_yaml(msg.int_and_frac, out);
    out << "\n";
  }

  // member: int_with_empty_frac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_with_empty_frac: ";
    rosidl_generator_traits::value_to_yaml(msg.int_with_empty_frac, out);
    out << "\n";
  }

  // member: frac_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frac_only: ";
    rosidl_generator_traits::value_to_yaml(msg.frac_only, out);
    out << "\n";
  }

  // member: int_with_positive_scientific
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_with_positive_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_with_positive_scientific, out);
    out << "\n";
  }

  // member: int_with_explicit_positive_scientific
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_with_explicit_positive_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_with_explicit_positive_scientific, out);
    out << "\n";
  }

  // member: int_with_negative_scientific
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int_with_negative_scientific: ";
    rosidl_generator_traits::value_to_yaml(msg.int_with_negative_scientific, out);
    out << "\n";
  }

  // member: fixed_int_and_frac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_int_and_frac: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_int_and_frac, out);
    out << "\n";
  }

  // member: fixed_int_with_dot_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_int_with_dot_only: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_int_with_dot_only, out);
    out << "\n";
  }

  // member: fixed_frac_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_frac_only: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_frac_only, out);
    out << "\n";
  }

  // member: fixed_int_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_int_only: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_int_only, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rclrs_example_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rclrs_example_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rclrs_example_msgs::msg::MyMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  rclrs_example_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rclrs_example_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rclrs_example_msgs::msg::MyMessage & msg)
{
  return rclrs_example_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rclrs_example_msgs::msg::MyMessage>()
{
  return "rclrs_example_msgs::msg::MyMessage";
}

template<>
inline const char * name<rclrs_example_msgs::msg::MyMessage>()
{
  return "rclrs_example_msgs/msg/MyMessage";
}

template<>
struct has_fixed_size<rclrs_example_msgs::msg::MyMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rclrs_example_msgs::msg::MyMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rclrs_example_msgs::msg::MyMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__TRAITS_HPP_
