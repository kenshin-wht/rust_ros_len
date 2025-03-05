// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rclrs_example_msgs/msg/my_message.hpp"


#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rclrs_example_msgs__msg__MyMessage __attribute__((deprecated))
#else
# define DEPRECATED__rclrs_example_msgs__msg__MyMessage __declspec(deprecated)
#endif

namespace rclrs_example_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyMessage_
{
  using Type = MyMessage_<ContainerAllocator>;

  explicit MyMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->unsigned_short_value = 123;
      this->int_and_frac_with_positive_scientific = 19000000000.0f;
      this->int_and_frac_with_explicit_positive_scientific = 19000000000.0f;
      this->int_and_frac_with_negative_scientific = 1.1e-10f;
      this->int_and_frac = 9e-05f;
      this->int_with_empty_frac = 1.0f;
      this->frac_only = 0.1f;
      this->int_with_positive_scientific = 900000.0f;
      this->int_with_explicit_positive_scientific = 900000.0f;
      this->int_with_negative_scientific = 9e-05f;
      this->fixed_int_and_frac = 8.7f;
      this->fixed_int_with_dot_only = 4.0f;
      this->fixed_frac_only = 0.3f;
      this->fixed_int_only = 7.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->short_value = 0;
      this->short_value2 = 0;
      this->unsigned_short_value = 0;
      this->long_value = 0l;
      this->unsigned_long_value = 0ul;
      this->long_long_value = 0ll;
      this->unsigned_long_long_value = 0ull;
      this->float_value = 0.0f;
      this->double_value = 0.0;
      this->char_value = 0;
      this->wchar_value = 0;
      this->boolean_value = false;
      this->octet_value = 0;
      this->int8_value = 0;
      this->uint8_value = 0;
      this->int16_value = 0;
      this->uint16_value = 0;
      this->int32_value = 0l;
      this->uint32_value = 0ul;
      this->int64_value = 0ll;
      this->uint64_value = 0ull;
      this->string_value = "";
      this->bounded_string_value = "";
      this->wstring_value = u"";
      this->bounded_wstring_value = u"";
      std::fill<typename std::array<int16_t, 23>::iterator, int16_t>(this->array_short_values.begin(), this->array_short_values.end(), 0);
      this->int_and_frac_with_positive_scientific = 0.0f;
      this->int_and_frac_with_explicit_positive_scientific = 0.0f;
      this->int_and_frac_with_negative_scientific = 0.0f;
      this->int_and_frac = 0.0f;
      this->int_with_empty_frac = 0.0f;
      this->frac_only = 0.0f;
      this->int_with_positive_scientific = 0.0f;
      this->int_with_explicit_positive_scientific = 0.0f;
      this->int_with_negative_scientific = 0.0f;
      this->fixed_int_and_frac = 0.0f;
      this->fixed_int_with_dot_only = 0.0f;
      this->fixed_frac_only = 0.0f;
      this->fixed_int_only = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->short_value = 0;
      this->short_value2 = 0;
      this->long_value = 0l;
      this->unsigned_long_value = 0ul;
      this->long_long_value = 0ll;
      this->unsigned_long_long_value = 0ull;
      this->float_value = 0.0f;
      this->double_value = 0.0;
      this->char_value = 0;
      this->wchar_value = 0;
      this->boolean_value = false;
      this->octet_value = 0;
      this->int8_value = 0;
      this->uint8_value = 0;
      this->int16_value = 0;
      this->uint16_value = 0;
      this->int32_value = 0l;
      this->uint32_value = 0ul;
      this->int64_value = 0ll;
      this->uint64_value = 0ull;
      this->string_value = "";
      this->bounded_string_value = "";
      this->wstring_value = u"";
      this->bounded_wstring_value = u"";
      std::fill<typename std::array<int16_t, 23>::iterator, int16_t>(this->array_short_values.begin(), this->array_short_values.end(), 0);
    }
  }

  explicit MyMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : string_value(_alloc),
    bounded_string_value(_alloc),
    wstring_value(_alloc),
    bounded_wstring_value(_alloc),
    array_short_values(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->unsigned_short_value = 123;
      this->int_and_frac_with_positive_scientific = 19000000000.0f;
      this->int_and_frac_with_explicit_positive_scientific = 19000000000.0f;
      this->int_and_frac_with_negative_scientific = 1.1e-10f;
      this->int_and_frac = 9e-05f;
      this->int_with_empty_frac = 1.0f;
      this->frac_only = 0.1f;
      this->int_with_positive_scientific = 900000.0f;
      this->int_with_explicit_positive_scientific = 900000.0f;
      this->int_with_negative_scientific = 9e-05f;
      this->fixed_int_and_frac = 8.7f;
      this->fixed_int_with_dot_only = 4.0f;
      this->fixed_frac_only = 0.3f;
      this->fixed_int_only = 7.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->short_value = 0;
      this->short_value2 = 0;
      this->unsigned_short_value = 0;
      this->long_value = 0l;
      this->unsigned_long_value = 0ul;
      this->long_long_value = 0ll;
      this->unsigned_long_long_value = 0ull;
      this->float_value = 0.0f;
      this->double_value = 0.0;
      this->char_value = 0;
      this->wchar_value = 0;
      this->boolean_value = false;
      this->octet_value = 0;
      this->int8_value = 0;
      this->uint8_value = 0;
      this->int16_value = 0;
      this->uint16_value = 0;
      this->int32_value = 0l;
      this->uint32_value = 0ul;
      this->int64_value = 0ll;
      this->uint64_value = 0ull;
      this->string_value = "";
      this->bounded_string_value = "";
      this->wstring_value = u"";
      this->bounded_wstring_value = u"";
      std::fill<typename std::array<int16_t, 23>::iterator, int16_t>(this->array_short_values.begin(), this->array_short_values.end(), 0);
      this->int_and_frac_with_positive_scientific = 0.0f;
      this->int_and_frac_with_explicit_positive_scientific = 0.0f;
      this->int_and_frac_with_negative_scientific = 0.0f;
      this->int_and_frac = 0.0f;
      this->int_with_empty_frac = 0.0f;
      this->frac_only = 0.0f;
      this->int_with_positive_scientific = 0.0f;
      this->int_with_explicit_positive_scientific = 0.0f;
      this->int_with_negative_scientific = 0.0f;
      this->fixed_int_and_frac = 0.0f;
      this->fixed_int_with_dot_only = 0.0f;
      this->fixed_frac_only = 0.0f;
      this->fixed_int_only = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->short_value = 0;
      this->short_value2 = 0;
      this->long_value = 0l;
      this->unsigned_long_value = 0ul;
      this->long_long_value = 0ll;
      this->unsigned_long_long_value = 0ull;
      this->float_value = 0.0f;
      this->double_value = 0.0;
      this->char_value = 0;
      this->wchar_value = 0;
      this->boolean_value = false;
      this->octet_value = 0;
      this->int8_value = 0;
      this->uint8_value = 0;
      this->int16_value = 0;
      this->uint16_value = 0;
      this->int32_value = 0l;
      this->uint32_value = 0ul;
      this->int64_value = 0ll;
      this->uint64_value = 0ull;
      this->string_value = "";
      this->bounded_string_value = "";
      this->wstring_value = u"";
      this->bounded_wstring_value = u"";
      std::fill<typename std::array<int16_t, 23>::iterator, int16_t>(this->array_short_values.begin(), this->array_short_values.end(), 0);
    }
  }

  // field types and members
  using _short_value_type =
    int16_t;
  _short_value_type short_value;
  using _short_value2_type =
    int16_t;
  _short_value2_type short_value2;
  using _unsigned_short_value_type =
    uint16_t;
  _unsigned_short_value_type unsigned_short_value;
  using _long_value_type =
    int32_t;
  _long_value_type long_value;
  using _unsigned_long_value_type =
    uint32_t;
  _unsigned_long_value_type unsigned_long_value;
  using _long_long_value_type =
    int64_t;
  _long_long_value_type long_long_value;
  using _unsigned_long_long_value_type =
    uint64_t;
  _unsigned_long_long_value_type unsigned_long_long_value;
  using _float_value_type =
    float;
  _float_value_type float_value;
  using _double_value_type =
    double;
  _double_value_type double_value;
  using _char_value_type =
    unsigned char;
  _char_value_type char_value;
  using _wchar_value_type =
    char16_t;
  _wchar_value_type wchar_value;
  using _boolean_value_type =
    bool;
  _boolean_value_type boolean_value;
  using _octet_value_type =
    unsigned char;
  _octet_value_type octet_value;
  using _int8_value_type =
    int8_t;
  _int8_value_type int8_value;
  using _uint8_value_type =
    uint8_t;
  _uint8_value_type uint8_value;
  using _int16_value_type =
    int16_t;
  _int16_value_type int16_value;
  using _uint16_value_type =
    uint16_t;
  _uint16_value_type uint16_value;
  using _int32_value_type =
    int32_t;
  _int32_value_type int32_value;
  using _uint32_value_type =
    uint32_t;
  _uint32_value_type uint32_value;
  using _int64_value_type =
    int64_t;
  _int64_value_type int64_value;
  using _uint64_value_type =
    uint64_t;
  _uint64_value_type uint64_value;
  using _string_value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _string_value_type string_value;
  using _bounded_string_value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bounded_string_value_type bounded_string_value;
  using _wstring_value_type =
    std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>>;
  _wstring_value_type wstring_value;
  using _bounded_wstring_value_type =
    std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>>;
  _bounded_wstring_value_type bounded_wstring_value;
  using _unbounded_short_values_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _unbounded_short_values_type unbounded_short_values;
  using _bounded_short_values_type =
    rosidl_runtime_cpp::BoundedVector<int16_t, 5, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _bounded_short_values_type bounded_short_values;
  using _unbounded_values_of_bounded_strings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _unbounded_values_of_bounded_strings_type unbounded_values_of_bounded_strings;
  using _bounded_values_of_bounded_strings_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _bounded_values_of_bounded_strings_type bounded_values_of_bounded_strings;
  using _array_short_values_type =
    std::array<int16_t, 23>;
  _array_short_values_type array_short_values;
  using _int_and_frac_with_positive_scientific_type =
    float;
  _int_and_frac_with_positive_scientific_type int_and_frac_with_positive_scientific;
  using _int_and_frac_with_explicit_positive_scientific_type =
    float;
  _int_and_frac_with_explicit_positive_scientific_type int_and_frac_with_explicit_positive_scientific;
  using _int_and_frac_with_negative_scientific_type =
    float;
  _int_and_frac_with_negative_scientific_type int_and_frac_with_negative_scientific;
  using _int_and_frac_type =
    float;
  _int_and_frac_type int_and_frac;
  using _int_with_empty_frac_type =
    float;
  _int_with_empty_frac_type int_with_empty_frac;
  using _frac_only_type =
    float;
  _frac_only_type frac_only;
  using _int_with_positive_scientific_type =
    float;
  _int_with_positive_scientific_type int_with_positive_scientific;
  using _int_with_explicit_positive_scientific_type =
    float;
  _int_with_explicit_positive_scientific_type int_with_explicit_positive_scientific;
  using _int_with_negative_scientific_type =
    float;
  _int_with_negative_scientific_type int_with_negative_scientific;
  using _fixed_int_and_frac_type =
    float;
  _fixed_int_and_frac_type fixed_int_and_frac;
  using _fixed_int_with_dot_only_type =
    float;
  _fixed_int_with_dot_only_type fixed_int_with_dot_only;
  using _fixed_frac_only_type =
    float;
  _fixed_frac_only_type fixed_frac_only;
  using _fixed_int_only_type =
    float;
  _fixed_int_only_type fixed_int_only;

  // setters for named parameter idiom
  Type & set__short_value(
    const int16_t & _arg)
  {
    this->short_value = _arg;
    return *this;
  }
  Type & set__short_value2(
    const int16_t & _arg)
  {
    this->short_value2 = _arg;
    return *this;
  }
  Type & set__unsigned_short_value(
    const uint16_t & _arg)
  {
    this->unsigned_short_value = _arg;
    return *this;
  }
  Type & set__long_value(
    const int32_t & _arg)
  {
    this->long_value = _arg;
    return *this;
  }
  Type & set__unsigned_long_value(
    const uint32_t & _arg)
  {
    this->unsigned_long_value = _arg;
    return *this;
  }
  Type & set__long_long_value(
    const int64_t & _arg)
  {
    this->long_long_value = _arg;
    return *this;
  }
  Type & set__unsigned_long_long_value(
    const uint64_t & _arg)
  {
    this->unsigned_long_long_value = _arg;
    return *this;
  }
  Type & set__float_value(
    const float & _arg)
  {
    this->float_value = _arg;
    return *this;
  }
  Type & set__double_value(
    const double & _arg)
  {
    this->double_value = _arg;
    return *this;
  }
  Type & set__char_value(
    const unsigned char & _arg)
  {
    this->char_value = _arg;
    return *this;
  }
  Type & set__wchar_value(
    const char16_t & _arg)
  {
    this->wchar_value = _arg;
    return *this;
  }
  Type & set__boolean_value(
    const bool & _arg)
  {
    this->boolean_value = _arg;
    return *this;
  }
  Type & set__octet_value(
    const unsigned char & _arg)
  {
    this->octet_value = _arg;
    return *this;
  }
  Type & set__int8_value(
    const int8_t & _arg)
  {
    this->int8_value = _arg;
    return *this;
  }
  Type & set__uint8_value(
    const uint8_t & _arg)
  {
    this->uint8_value = _arg;
    return *this;
  }
  Type & set__int16_value(
    const int16_t & _arg)
  {
    this->int16_value = _arg;
    return *this;
  }
  Type & set__uint16_value(
    const uint16_t & _arg)
  {
    this->uint16_value = _arg;
    return *this;
  }
  Type & set__int32_value(
    const int32_t & _arg)
  {
    this->int32_value = _arg;
    return *this;
  }
  Type & set__uint32_value(
    const uint32_t & _arg)
  {
    this->uint32_value = _arg;
    return *this;
  }
  Type & set__int64_value(
    const int64_t & _arg)
  {
    this->int64_value = _arg;
    return *this;
  }
  Type & set__uint64_value(
    const uint64_t & _arg)
  {
    this->uint64_value = _arg;
    return *this;
  }
  Type & set__string_value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->string_value = _arg;
    return *this;
  }
  Type & set__bounded_string_value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bounded_string_value = _arg;
    return *this;
  }
  Type & set__wstring_value(
    const std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>> & _arg)
  {
    this->wstring_value = _arg;
    return *this;
  }
  Type & set__bounded_wstring_value(
    const std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>> & _arg)
  {
    this->bounded_wstring_value = _arg;
    return *this;
  }
  Type & set__unbounded_short_values(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->unbounded_short_values = _arg;
    return *this;
  }
  Type & set__bounded_short_values(
    const rosidl_runtime_cpp::BoundedVector<int16_t, 5, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->bounded_short_values = _arg;
    return *this;
  }
  Type & set__unbounded_values_of_bounded_strings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->unbounded_values_of_bounded_strings = _arg;
    return *this;
  }
  Type & set__bounded_values_of_bounded_strings(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->bounded_values_of_bounded_strings = _arg;
    return *this;
  }
  Type & set__array_short_values(
    const std::array<int16_t, 23> & _arg)
  {
    this->array_short_values = _arg;
    return *this;
  }
  Type & set__int_and_frac_with_positive_scientific(
    const float & _arg)
  {
    this->int_and_frac_with_positive_scientific = _arg;
    return *this;
  }
  Type & set__int_and_frac_with_explicit_positive_scientific(
    const float & _arg)
  {
    this->int_and_frac_with_explicit_positive_scientific = _arg;
    return *this;
  }
  Type & set__int_and_frac_with_negative_scientific(
    const float & _arg)
  {
    this->int_and_frac_with_negative_scientific = _arg;
    return *this;
  }
  Type & set__int_and_frac(
    const float & _arg)
  {
    this->int_and_frac = _arg;
    return *this;
  }
  Type & set__int_with_empty_frac(
    const float & _arg)
  {
    this->int_with_empty_frac = _arg;
    return *this;
  }
  Type & set__frac_only(
    const float & _arg)
  {
    this->frac_only = _arg;
    return *this;
  }
  Type & set__int_with_positive_scientific(
    const float & _arg)
  {
    this->int_with_positive_scientific = _arg;
    return *this;
  }
  Type & set__int_with_explicit_positive_scientific(
    const float & _arg)
  {
    this->int_with_explicit_positive_scientific = _arg;
    return *this;
  }
  Type & set__int_with_negative_scientific(
    const float & _arg)
  {
    this->int_with_negative_scientific = _arg;
    return *this;
  }
  Type & set__fixed_int_and_frac(
    const float & _arg)
  {
    this->fixed_int_and_frac = _arg;
    return *this;
  }
  Type & set__fixed_int_with_dot_only(
    const float & _arg)
  {
    this->fixed_int_with_dot_only = _arg;
    return *this;
  }
  Type & set__fixed_frac_only(
    const float & _arg)
  {
    this->fixed_frac_only = _arg;
    return *this;
  }
  Type & set__fixed_int_only(
    const float & _arg)
  {
    this->fixed_int_only = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t SHORT_CONSTANT =
    -23;
  static constexpr uint32_t UNSIGNED_LONG_CONSTANT =
    42u;
  static constexpr float FLOAT_CONSTANT =
    1.25f;
  static constexpr bool BOOLEAN_CONSTANT =
    1;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STRING_CONSTANT;
  static const std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>> WSTRING_CONSTANT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMPTY_STRING_CONSTANT;

  // pointer types
  using RawPtr =
    rclrs_example_msgs::msg::MyMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rclrs_example_msgs::msg::MyMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rclrs_example_msgs::msg::MyMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rclrs_example_msgs::msg::MyMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rclrs_example_msgs::msg::MyMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rclrs_example_msgs::msg::MyMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rclrs_example_msgs::msg::MyMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rclrs_example_msgs::msg::MyMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rclrs_example_msgs::msg::MyMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rclrs_example_msgs::msg::MyMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rclrs_example_msgs__msg__MyMessage
    std::shared_ptr<rclrs_example_msgs::msg::MyMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rclrs_example_msgs__msg__MyMessage
    std::shared_ptr<rclrs_example_msgs::msg::MyMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyMessage_ & other) const
  {
    if (this->short_value != other.short_value) {
      return false;
    }
    if (this->short_value2 != other.short_value2) {
      return false;
    }
    if (this->unsigned_short_value != other.unsigned_short_value) {
      return false;
    }
    if (this->long_value != other.long_value) {
      return false;
    }
    if (this->unsigned_long_value != other.unsigned_long_value) {
      return false;
    }
    if (this->long_long_value != other.long_long_value) {
      return false;
    }
    if (this->unsigned_long_long_value != other.unsigned_long_long_value) {
      return false;
    }
    if (this->float_value != other.float_value) {
      return false;
    }
    if (this->double_value != other.double_value) {
      return false;
    }
    if (this->char_value != other.char_value) {
      return false;
    }
    if (this->wchar_value != other.wchar_value) {
      return false;
    }
    if (this->boolean_value != other.boolean_value) {
      return false;
    }
    if (this->octet_value != other.octet_value) {
      return false;
    }
    if (this->int8_value != other.int8_value) {
      return false;
    }
    if (this->uint8_value != other.uint8_value) {
      return false;
    }
    if (this->int16_value != other.int16_value) {
      return false;
    }
    if (this->uint16_value != other.uint16_value) {
      return false;
    }
    if (this->int32_value != other.int32_value) {
      return false;
    }
    if (this->uint32_value != other.uint32_value) {
      return false;
    }
    if (this->int64_value != other.int64_value) {
      return false;
    }
    if (this->uint64_value != other.uint64_value) {
      return false;
    }
    if (this->string_value != other.string_value) {
      return false;
    }
    if (this->bounded_string_value != other.bounded_string_value) {
      return false;
    }
    if (this->wstring_value != other.wstring_value) {
      return false;
    }
    if (this->bounded_wstring_value != other.bounded_wstring_value) {
      return false;
    }
    if (this->unbounded_short_values != other.unbounded_short_values) {
      return false;
    }
    if (this->bounded_short_values != other.bounded_short_values) {
      return false;
    }
    if (this->unbounded_values_of_bounded_strings != other.unbounded_values_of_bounded_strings) {
      return false;
    }
    if (this->bounded_values_of_bounded_strings != other.bounded_values_of_bounded_strings) {
      return false;
    }
    if (this->array_short_values != other.array_short_values) {
      return false;
    }
    if (this->int_and_frac_with_positive_scientific != other.int_and_frac_with_positive_scientific) {
      return false;
    }
    if (this->int_and_frac_with_explicit_positive_scientific != other.int_and_frac_with_explicit_positive_scientific) {
      return false;
    }
    if (this->int_and_frac_with_negative_scientific != other.int_and_frac_with_negative_scientific) {
      return false;
    }
    if (this->int_and_frac != other.int_and_frac) {
      return false;
    }
    if (this->int_with_empty_frac != other.int_with_empty_frac) {
      return false;
    }
    if (this->frac_only != other.frac_only) {
      return false;
    }
    if (this->int_with_positive_scientific != other.int_with_positive_scientific) {
      return false;
    }
    if (this->int_with_explicit_positive_scientific != other.int_with_explicit_positive_scientific) {
      return false;
    }
    if (this->int_with_negative_scientific != other.int_with_negative_scientific) {
      return false;
    }
    if (this->fixed_int_and_frac != other.fixed_int_and_frac) {
      return false;
    }
    if (this->fixed_int_with_dot_only != other.fixed_int_with_dot_only) {
      return false;
    }
    if (this->fixed_frac_only != other.fixed_frac_only) {
      return false;
    }
    if (this->fixed_int_only != other.fixed_int_only) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyMessage_

// alias to use template instance with default allocator
using MyMessage =
  rclrs_example_msgs::msg::MyMessage_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t MyMessage_<ContainerAllocator>::SHORT_CONSTANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MyMessage_<ContainerAllocator>::UNSIGNED_LONG_CONSTANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float MyMessage_<ContainerAllocator>::FLOAT_CONSTANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr bool MyMessage_<ContainerAllocator>::BOOLEAN_CONSTANT;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MyMessage_<ContainerAllocator>::STRING_CONSTANT = "string_value";
template<typename ContainerAllocator>
const std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>>
MyMessage_<ContainerAllocator>::WSTRING_CONSTANT = u"wstring_value_\\u2122";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MyMessage_<ContainerAllocator>::EMPTY_STRING_CONSTANT = "";

}  // namespace msg

}  // namespace rclrs_example_msgs

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_HPP_
