// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/multi_array_layout__rosidl_typesupport_fastrtps_cpp.hpp"
#include "example_interfaces/msg/detail/multi_array_layout__functions.h"
#include "example_interfaces/msg/detail/multi_array_layout__struct.hpp"

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
namespace example_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const example_interfaces::msg::MultiArrayDimension &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  example_interfaces::msg::MultiArrayDimension &);
size_t get_serialized_size(
  const example_interfaces::msg::MultiArrayDimension &,
  size_t current_alignment);
size_t
max_serialized_size_MultiArrayDimension(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const example_interfaces::msg::MultiArrayDimension &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const example_interfaces::msg::MultiArrayDimension &,
  size_t current_alignment);
size_t
max_serialized_size_key_MultiArrayDimension(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace example_interfaces


namespace example_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::msg::MultiArrayLayout & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dim
  {
    size_t size = ros_message.dim.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      example_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.dim[i],
        cdr);
    }
  }

  // Member: data_offset
  cdr << ros_message.data_offset;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  example_interfaces::msg::MultiArrayLayout & ros_message)
{
  // Member: dim
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.dim.resize(size);
    for (size_t i = 0; i < size; i++) {
      example_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.dim[i]);
    }
  }

  // Member: data_offset
  cdr >> ros_message.data_offset;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::msg::MultiArrayLayout & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dim
  {
    size_t array_size = ros_message.dim.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        example_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.dim[index], current_alignment);
    }
  }

  // Member: data_offset
  {
    size_t item_size = sizeof(ros_message.data_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
max_serialized_size_MultiArrayLayout(
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

  // Member: dim
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        example_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_MultiArrayDimension(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: data_offset
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
    using DataType = example_interfaces::msg::MultiArrayLayout;
    is_plain =
      (
      offsetof(DataType, data_offset) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_serialize_key(
  const example_interfaces::msg::MultiArrayLayout & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dim
  {
    size_t size = ros_message.dim.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      example_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.dim[i],
        cdr);
    }
  }

  // Member: data_offset
  cdr << ros_message.data_offset;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
get_serialized_size_key(
  const example_interfaces::msg::MultiArrayLayout & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dim
  {
    size_t array_size = ros_message.dim.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        example_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.dim[index], current_alignment);
    }
  }

  // Member: data_offset
  {
    size_t item_size = sizeof(ros_message.data_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
max_serialized_size_key_MultiArrayLayout(
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

  // Member: dim
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        example_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_MultiArrayDimension(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: data_offset
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
    using DataType = example_interfaces::msg::MultiArrayLayout;
    is_plain =
      (
      offsetof(DataType, data_offset) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MultiArrayLayout__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::MultiArrayLayout *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiArrayLayout__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::msg::MultiArrayLayout *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiArrayLayout__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::MultiArrayLayout *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiArrayLayout__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MultiArrayLayout(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MultiArrayLayout__callbacks = {
  "example_interfaces::msg",
  "MultiArrayLayout",
  _MultiArrayLayout__cdr_serialize,
  _MultiArrayLayout__cdr_deserialize,
  _MultiArrayLayout__get_serialized_size,
  _MultiArrayLayout__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MultiArrayLayout__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MultiArrayLayout__callbacks,
  get_message_typesupport_handle_function,
  &example_interfaces__msg__MultiArrayLayout__get_type_hash,
  &example_interfaces__msg__MultiArrayLayout__get_type_description,
  &example_interfaces__msg__MultiArrayLayout__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace example_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::msg::MultiArrayLayout>()
{
  return &example_interfaces::msg::typesupport_fastrtps_cpp::_MultiArrayLayout__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, msg, MultiArrayLayout)() {
  return &example_interfaces::msg::typesupport_fastrtps_cpp::_MultiArrayLayout__handle;
}

#ifdef __cplusplus
}
#endif
