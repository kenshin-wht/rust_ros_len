// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice
#include "rclrs_example_msgs/msg/detail/my_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rclrs_example_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rclrs_example_msgs/msg/detail/my_message__struct.h"
#include "rclrs_example_msgs/msg/detail/my_message__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // bounded_short_values, unbounded_short_values
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bounded_short_values, unbounded_short_values
#include "rosidl_runtime_c/string.h"  // bounded_string_value, bounded_values_of_bounded_strings, string_value, unbounded_values_of_bounded_strings
#include "rosidl_runtime_c/string_functions.h"  // bounded_string_value, bounded_values_of_bounded_strings, string_value, unbounded_values_of_bounded_strings
#include "rosidl_runtime_c/u16string.h"  // bounded_wstring_value, wstring_value
#include "rosidl_runtime_c/u16string_functions.h"  // bounded_wstring_value, wstring_value

// forward declare type support functions


using _MyMessage__ros_msg_type = rclrs_example_msgs__msg__MyMessage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
bool cdr_serialize_rclrs_example_msgs__msg__MyMessage(
  const rclrs_example_msgs__msg__MyMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: short_value
  {
    cdr << ros_message->short_value;
  }

  // Field name: short_value2
  {
    cdr << ros_message->short_value2;
  }

  // Field name: unsigned_short_value
  {
    cdr << ros_message->unsigned_short_value;
  }

  // Field name: long_value
  {
    cdr << ros_message->long_value;
  }

  // Field name: unsigned_long_value
  {
    cdr << ros_message->unsigned_long_value;
  }

  // Field name: long_long_value
  {
    cdr << ros_message->long_long_value;
  }

  // Field name: unsigned_long_long_value
  {
    cdr << ros_message->unsigned_long_long_value;
  }

  // Field name: float_value
  {
    cdr << ros_message->float_value;
  }

  // Field name: double_value
  {
    cdr << ros_message->double_value;
  }

  // Field name: char_value
  {
    cdr << ros_message->char_value;
  }

  // Field name: wchar_value
  {
    cdr << static_cast<wchar_t>(ros_message->wchar_value);
  }

  // Field name: boolean_value
  {
    cdr << (ros_message->boolean_value ? true : false);
  }

  // Field name: octet_value
  {
    cdr << ros_message->octet_value;
  }

  // Field name: int8_value
  {
    cdr << ros_message->int8_value;
  }

  // Field name: uint8_value
  {
    cdr << ros_message->uint8_value;
  }

  // Field name: int16_value
  {
    cdr << ros_message->int16_value;
  }

  // Field name: uint16_value
  {
    cdr << ros_message->uint16_value;
  }

  // Field name: int32_value
  {
    cdr << ros_message->int32_value;
  }

  // Field name: uint32_value
  {
    cdr << ros_message->uint32_value;
  }

  // Field name: int64_value
  {
    cdr << ros_message->int64_value;
  }

  // Field name: uint64_value
  {
    cdr << ros_message->uint64_value;
  }

  // Field name: string_value
  {
    const rosidl_runtime_c__String * str = &ros_message->string_value;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounded_string_value
  {
    const rosidl_runtime_c__String * str = &ros_message->bounded_string_value;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: wstring_value
  {
    rosidl_typesupport_fastrtps_c::cdr_serialize(cdr, ros_message->wstring_value);
  }

  // Field name: bounded_wstring_value
  {
    rosidl_typesupport_fastrtps_c::cdr_serialize(cdr, ros_message->bounded_wstring_value);
  }

  // Field name: unbounded_short_values
  {
    size_t size = ros_message->unbounded_short_values.size;
    auto array_ptr = ros_message->unbounded_short_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: bounded_short_values
  {
    size_t size = ros_message->bounded_short_values.size;
    auto array_ptr = ros_message->bounded_short_values.data;
    if (size > 5) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: unbounded_values_of_bounded_strings
  {
    size_t size = ros_message->unbounded_values_of_bounded_strings.size;
    auto array_ptr = ros_message->unbounded_values_of_bounded_strings.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: bounded_values_of_bounded_strings
  {
    size_t size = ros_message->bounded_values_of_bounded_strings.size;
    auto array_ptr = ros_message->bounded_values_of_bounded_strings.data;
    if (size > 4) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: array_short_values
  {
    size_t size = 23;
    auto array_ptr = ros_message->array_short_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int_and_frac_with_positive_scientific
  {
    cdr << ros_message->int_and_frac_with_positive_scientific;
  }

  // Field name: int_and_frac_with_explicit_positive_scientific
  {
    cdr << ros_message->int_and_frac_with_explicit_positive_scientific;
  }

  // Field name: int_and_frac_with_negative_scientific
  {
    cdr << ros_message->int_and_frac_with_negative_scientific;
  }

  // Field name: int_and_frac
  {
    cdr << ros_message->int_and_frac;
  }

  // Field name: int_with_empty_frac
  {
    cdr << ros_message->int_with_empty_frac;
  }

  // Field name: frac_only
  {
    cdr << ros_message->frac_only;
  }

  // Field name: int_with_positive_scientific
  {
    cdr << ros_message->int_with_positive_scientific;
  }

  // Field name: int_with_explicit_positive_scientific
  {
    cdr << ros_message->int_with_explicit_positive_scientific;
  }

  // Field name: int_with_negative_scientific
  {
    cdr << ros_message->int_with_negative_scientific;
  }

  // Field name: fixed_int_and_frac
  {
    cdr << ros_message->fixed_int_and_frac;
  }

  // Field name: fixed_int_with_dot_only
  {
    cdr << ros_message->fixed_int_with_dot_only;
  }

  // Field name: fixed_frac_only
  {
    cdr << ros_message->fixed_frac_only;
  }

  // Field name: fixed_int_only
  {
    cdr << ros_message->fixed_int_only;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
bool cdr_deserialize_rclrs_example_msgs__msg__MyMessage(
  eprosima::fastcdr::Cdr & cdr,
  rclrs_example_msgs__msg__MyMessage * ros_message)
{
  // Field name: short_value
  {
    cdr >> ros_message->short_value;
  }

  // Field name: short_value2
  {
    cdr >> ros_message->short_value2;
  }

  // Field name: unsigned_short_value
  {
    cdr >> ros_message->unsigned_short_value;
  }

  // Field name: long_value
  {
    cdr >> ros_message->long_value;
  }

  // Field name: unsigned_long_value
  {
    cdr >> ros_message->unsigned_long_value;
  }

  // Field name: long_long_value
  {
    cdr >> ros_message->long_long_value;
  }

  // Field name: unsigned_long_long_value
  {
    cdr >> ros_message->unsigned_long_long_value;
  }

  // Field name: float_value
  {
    cdr >> ros_message->float_value;
  }

  // Field name: double_value
  {
    cdr >> ros_message->double_value;
  }

  // Field name: char_value
  {
    cdr >> ros_message->char_value;
  }

  // Field name: wchar_value
  {
    wchar_t tmp;
    cdr >> tmp;
    ros_message->wchar_value = static_cast<char16_t>(tmp);
  }

  // Field name: boolean_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->boolean_value = tmp ? true : false;
  }

  // Field name: octet_value
  {
    cdr >> ros_message->octet_value;
  }

  // Field name: int8_value
  {
    cdr >> ros_message->int8_value;
  }

  // Field name: uint8_value
  {
    cdr >> ros_message->uint8_value;
  }

  // Field name: int16_value
  {
    cdr >> ros_message->int16_value;
  }

  // Field name: uint16_value
  {
    cdr >> ros_message->uint16_value;
  }

  // Field name: int32_value
  {
    cdr >> ros_message->int32_value;
  }

  // Field name: uint32_value
  {
    cdr >> ros_message->uint32_value;
  }

  // Field name: int64_value
  {
    cdr >> ros_message->int64_value;
  }

  // Field name: uint64_value
  {
    cdr >> ros_message->uint64_value;
  }

  // Field name: string_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value.data) {
      rosidl_runtime_c__String__init(&ros_message->string_value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value'\n");
      return false;
    }
  }

  // Field name: bounded_string_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_string_value.data) {
      rosidl_runtime_c__String__init(&ros_message->bounded_string_value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bounded_string_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_string_value'\n");
      return false;
    }
  }

  // Field name: wstring_value
  {
    if (!ros_message->wstring_value.data) {
      rosidl_runtime_c__U16String__init(&ros_message->wstring_value);
    }
    bool succeeded = rosidl_typesupport_fastrtps_c::cdr_deserialize(cdr, ros_message->wstring_value);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_runtime_c__U16String__fini(&ros_message->wstring_value);
      return false;
    }
  }

  // Field name: bounded_wstring_value
  {
    if (!ros_message->bounded_wstring_value.data) {
      rosidl_runtime_c__U16String__init(&ros_message->bounded_wstring_value);
    }
    bool succeeded = rosidl_typesupport_fastrtps_c::cdr_deserialize(cdr, ros_message->bounded_wstring_value);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_runtime_c__U16String__fini(&ros_message->bounded_wstring_value);
      return false;
    }
  }

  // Field name: unbounded_short_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_short_values.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->unbounded_short_values);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->unbounded_short_values, size)) {
      fprintf(stderr, "failed to create array for field 'unbounded_short_values'");
      return false;
    }
    auto array_ptr = ros_message->unbounded_short_values.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: bounded_short_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_short_values.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->bounded_short_values);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->bounded_short_values, size)) {
      fprintf(stderr, "failed to create array for field 'bounded_short_values'");
      return false;
    }
    auto array_ptr = ros_message->bounded_short_values.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: unbounded_values_of_bounded_strings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_values_of_bounded_strings.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->unbounded_values_of_bounded_strings);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->unbounded_values_of_bounded_strings, size)) {
      fprintf(stderr, "failed to create array for field 'unbounded_values_of_bounded_strings'");
      return false;
    }
    auto array_ptr = ros_message->unbounded_values_of_bounded_strings.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'unbounded_values_of_bounded_strings'\n");
        return false;
      }
    }
  }

  // Field name: bounded_values_of_bounded_strings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_values_of_bounded_strings.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->bounded_values_of_bounded_strings);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->bounded_values_of_bounded_strings, size)) {
      fprintf(stderr, "failed to create array for field 'bounded_values_of_bounded_strings'");
      return false;
    }
    auto array_ptr = ros_message->bounded_values_of_bounded_strings.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'bounded_values_of_bounded_strings'\n");
        return false;
      }
    }
  }

  // Field name: array_short_values
  {
    size_t size = 23;
    auto array_ptr = ros_message->array_short_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int_and_frac_with_positive_scientific
  {
    cdr >> ros_message->int_and_frac_with_positive_scientific;
  }

  // Field name: int_and_frac_with_explicit_positive_scientific
  {
    cdr >> ros_message->int_and_frac_with_explicit_positive_scientific;
  }

  // Field name: int_and_frac_with_negative_scientific
  {
    cdr >> ros_message->int_and_frac_with_negative_scientific;
  }

  // Field name: int_and_frac
  {
    cdr >> ros_message->int_and_frac;
  }

  // Field name: int_with_empty_frac
  {
    cdr >> ros_message->int_with_empty_frac;
  }

  // Field name: frac_only
  {
    cdr >> ros_message->frac_only;
  }

  // Field name: int_with_positive_scientific
  {
    cdr >> ros_message->int_with_positive_scientific;
  }

  // Field name: int_with_explicit_positive_scientific
  {
    cdr >> ros_message->int_with_explicit_positive_scientific;
  }

  // Field name: int_with_negative_scientific
  {
    cdr >> ros_message->int_with_negative_scientific;
  }

  // Field name: fixed_int_and_frac
  {
    cdr >> ros_message->fixed_int_and_frac;
  }

  // Field name: fixed_int_with_dot_only
  {
    cdr >> ros_message->fixed_int_with_dot_only;
  }

  // Field name: fixed_frac_only
  {
    cdr >> ros_message->fixed_frac_only;
  }

  // Field name: fixed_int_only
  {
    cdr >> ros_message->fixed_int_only;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
size_t get_serialized_size_rclrs_example_msgs__msg__MyMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MyMessage__ros_msg_type * ros_message = static_cast<const _MyMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: short_value
  {
    size_t item_size = sizeof(ros_message->short_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: short_value2
  {
    size_t item_size = sizeof(ros_message->short_value2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unsigned_short_value
  {
    size_t item_size = sizeof(ros_message->unsigned_short_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: long_value
  {
    size_t item_size = sizeof(ros_message->long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unsigned_long_value
  {
    size_t item_size = sizeof(ros_message->unsigned_long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: long_long_value
  {
    size_t item_size = sizeof(ros_message->long_long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unsigned_long_long_value
  {
    size_t item_size = sizeof(ros_message->unsigned_long_long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float_value
  {
    size_t item_size = sizeof(ros_message->float_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: double_value
  {
    size_t item_size = sizeof(ros_message->double_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_value
  {
    size_t item_size = sizeof(ros_message->char_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wchar_value
  {
    size_t item_size = sizeof(ros_message->wchar_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: boolean_value
  {
    size_t item_size = sizeof(ros_message->boolean_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: octet_value
  {
    size_t item_size = sizeof(ros_message->octet_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_value
  {
    size_t item_size = sizeof(ros_message->int8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_value
  {
    size_t item_size = sizeof(ros_message->uint8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_value
  {
    size_t item_size = sizeof(ros_message->int16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_value
  {
    size_t item_size = sizeof(ros_message->uint16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_value
  {
    size_t item_size = sizeof(ros_message->int32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_value
  {
    size_t item_size = sizeof(ros_message->uint32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_value
  {
    size_t item_size = sizeof(ros_message->int64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_value
  {
    size_t item_size = sizeof(ros_message->uint64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value.size + 1);

  // Field name: bounded_string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_string_value.size + 1);

  // Field name: wstring_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->wstring_value.size + 1);

  // Field name: bounded_wstring_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->bounded_wstring_value.size + 1);

  // Field name: unbounded_short_values
  {
    size_t array_size = ros_message->unbounded_short_values.size;
    auto array_ptr = ros_message->unbounded_short_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bounded_short_values
  {
    size_t array_size = ros_message->bounded_short_values.size;
    auto array_ptr = ros_message->bounded_short_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unbounded_values_of_bounded_strings
  {
    size_t array_size = ros_message->unbounded_values_of_bounded_strings.size;
    auto array_ptr = ros_message->unbounded_values_of_bounded_strings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: bounded_values_of_bounded_strings
  {
    size_t array_size = ros_message->bounded_values_of_bounded_strings.size;
    auto array_ptr = ros_message->bounded_values_of_bounded_strings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: array_short_values
  {
    size_t array_size = 23;
    auto array_ptr = ros_message->array_short_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int_and_frac_with_positive_scientific
  {
    size_t item_size = sizeof(ros_message->int_and_frac_with_positive_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int_and_frac_with_explicit_positive_scientific
  {
    size_t item_size = sizeof(ros_message->int_and_frac_with_explicit_positive_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int_and_frac_with_negative_scientific
  {
    size_t item_size = sizeof(ros_message->int_and_frac_with_negative_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int_and_frac
  {
    size_t item_size = sizeof(ros_message->int_and_frac);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int_with_empty_frac
  {
    size_t item_size = sizeof(ros_message->int_with_empty_frac);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frac_only
  {
    size_t item_size = sizeof(ros_message->frac_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int_with_positive_scientific
  {
    size_t item_size = sizeof(ros_message->int_with_positive_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int_with_explicit_positive_scientific
  {
    size_t item_size = sizeof(ros_message->int_with_explicit_positive_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int_with_negative_scientific
  {
    size_t item_size = sizeof(ros_message->int_with_negative_scientific);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_int_and_frac
  {
    size_t item_size = sizeof(ros_message->fixed_int_and_frac);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_int_with_dot_only
  {
    size_t item_size = sizeof(ros_message->fixed_int_with_dot_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_frac_only
  {
    size_t item_size = sizeof(ros_message->fixed_frac_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_int_only
  {
    size_t item_size = sizeof(ros_message->fixed_int_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
size_t max_serialized_size_rclrs_example_msgs__msg__MyMessage(
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

  // Field name: short_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: short_value2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: unsigned_short_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: unsigned_long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: long_long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: unsigned_long_long_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: float_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: double_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: char_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wchar_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: boolean_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: octet_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int8_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_value
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_value
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

  // Field name: bounded_string_value
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

  // Field name: wstring_value
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

  // Field name: bounded_wstring_value
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

  // Field name: unbounded_short_values
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

  // Field name: bounded_short_values
  {
    size_t array_size = 5;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: unbounded_values_of_bounded_strings
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

  // Field name: bounded_values_of_bounded_strings
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

  // Field name: array_short_values
  {
    size_t array_size = 23;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int_and_frac_with_positive_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int_and_frac_with_explicit_positive_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int_and_frac_with_negative_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int_and_frac
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int_with_empty_frac
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: frac_only
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int_with_positive_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int_with_explicit_positive_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int_with_negative_scientific
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fixed_int_and_frac
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fixed_int_with_dot_only
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fixed_frac_only
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fixed_int_only
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
    using DataType = rclrs_example_msgs__msg__MyMessage;
    is_plain =
      (
      offsetof(DataType, fixed_int_only) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
bool cdr_serialize_key_rclrs_example_msgs__msg__MyMessage(
  const rclrs_example_msgs__msg__MyMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: long_value
  {
    cdr << ros_message->long_value;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
size_t get_serialized_size_key_rclrs_example_msgs__msg__MyMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MyMessage__ros_msg_type * ros_message = static_cast<const _MyMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: long_value
  {
    size_t item_size = sizeof(ros_message->long_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
size_t max_serialized_size_key_rclrs_example_msgs__msg__MyMessage(
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
  // Field name: long_value
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
    using DataType = rclrs_example_msgs__msg__MyMessage;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rclrs_example_msgs__msg__MyMessage * ros_message = static_cast<const rclrs_example_msgs__msg__MyMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_key_rclrs_example_msgs__msg__MyMessage(ros_message, cdr);
}

static size_t _MyMessage__get_serialized_size_key(
  const void * untyped_ros_message)
{
  return get_serialized_size_key_rclrs_example_msgs__msg__MyMessage(
      untyped_ros_message, 0);
}

static
size_t
_MyMessage__max_serialized_size_key(
  bool & is_unbounded)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_key_rclrs_example_msgs__msg__MyMessage(
    full_bounded, is_plain, 0);

  is_unbounded = !full_bounded;
  return ret_val;
}

static message_type_support_key_callbacks_t __key_callbacks_MyMessage = {
  _MyMessage__max_serialized_size_key,
  _MyMessage__get_serialized_size_key,
  _MyMessage__cdr_serialize_key
};

static bool _MyMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rclrs_example_msgs__msg__MyMessage * ros_message = static_cast<const rclrs_example_msgs__msg__MyMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rclrs_example_msgs__msg__MyMessage(ros_message, cdr);
}

static bool _MyMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rclrs_example_msgs__msg__MyMessage * ros_message = static_cast<rclrs_example_msgs__msg__MyMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rclrs_example_msgs__msg__MyMessage(cdr, ros_message);
}

static uint32_t _MyMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rclrs_example_msgs__msg__MyMessage(
      untyped_ros_message, 0));
}

static size_t _MyMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rclrs_example_msgs__msg__MyMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MyMessage = {
  "rclrs_example_msgs::msg",
  "MyMessage",
  _MyMessage__cdr_serialize,
  _MyMessage__cdr_deserialize,
  _MyMessage__get_serialized_size,
  _MyMessage__max_serialized_size,
  &__key_callbacks_MyMessage
};

static rosidl_message_type_support_t _MyMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MyMessage,
  get_message_typesupport_handle_function,
  &rclrs_example_msgs__msg__MyMessage__get_type_hash,
  &rclrs_example_msgs__msg__MyMessage__get_type_description,
  &rclrs_example_msgs__msg__MyMessage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, MyMessage)() {
  return &_MyMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
