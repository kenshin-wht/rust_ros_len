// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice
#include "rclrs_example_msgs/msg/detail/my_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `string_value`
// Member `bounded_string_value`
// Member `unbounded_values_of_bounded_strings`
// Member `bounded_values_of_bounded_strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `wstring_value`
// Member `bounded_wstring_value`
#include "rosidl_runtime_c/u16string_functions.h"
// Member `unbounded_short_values`
// Member `bounded_short_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rclrs_example_msgs__msg__MyMessage__init(rclrs_example_msgs__msg__MyMessage * msg)
{
  if (!msg) {
    return false;
  }
  // short_value
  // short_value2
  // unsigned_short_value
  msg->unsigned_short_value = 123;
  // long_value
  // unsigned_long_value
  // long_long_value
  // unsigned_long_long_value
  // float_value
  // double_value
  // char_value
  // wchar_value
  // boolean_value
  // octet_value
  // int8_value
  // uint8_value
  // int16_value
  // uint16_value
  // int32_value
  // uint32_value
  // int64_value
  // uint64_value
  // string_value
  if (!rosidl_runtime_c__String__init(&msg->string_value)) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
    return false;
  }
  // bounded_string_value
  if (!rosidl_runtime_c__String__init(&msg->bounded_string_value)) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
    return false;
  }
  // wstring_value
  if (!rosidl_runtime_c__U16String__init(&msg->wstring_value)) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
    return false;
  }
  // bounded_wstring_value
  if (!rosidl_runtime_c__U16String__init(&msg->bounded_wstring_value)) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
    return false;
  }
  // unbounded_short_values
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->unbounded_short_values, 0)) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
    return false;
  }
  // bounded_short_values
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->bounded_short_values, 0)) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
    return false;
  }
  // unbounded_values_of_bounded_strings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->unbounded_values_of_bounded_strings, 0)) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
    return false;
  }
  // bounded_values_of_bounded_strings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->bounded_values_of_bounded_strings, 0)) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
    return false;
  }
  // array_short_values
  // int_and_frac_with_positive_scientific
  msg->int_and_frac_with_positive_scientific = 19000000000.0f;
  // int_and_frac_with_explicit_positive_scientific
  msg->int_and_frac_with_explicit_positive_scientific = 19000000000.0f;
  // int_and_frac_with_negative_scientific
  msg->int_and_frac_with_negative_scientific = 1.1e-10f;
  // int_and_frac
  msg->int_and_frac = 9e-05f;
  // int_with_empty_frac
  msg->int_with_empty_frac = 1.0f;
  // frac_only
  msg->frac_only = 0.1f;
  // int_with_positive_scientific
  msg->int_with_positive_scientific = 900000.0f;
  // int_with_explicit_positive_scientific
  msg->int_with_explicit_positive_scientific = 900000.0f;
  // int_with_negative_scientific
  msg->int_with_negative_scientific = 9e-05f;
  // fixed_int_and_frac
  msg->fixed_int_and_frac = 8.7f;
  // fixed_int_with_dot_only
  msg->fixed_int_with_dot_only = 4.0f;
  // fixed_frac_only
  msg->fixed_frac_only = 0.3f;
  // fixed_int_only
  msg->fixed_int_only = 7.0f;
  return true;
}

void
rclrs_example_msgs__msg__MyMessage__fini(rclrs_example_msgs__msg__MyMessage * msg)
{
  if (!msg) {
    return;
  }
  // short_value
  // short_value2
  // unsigned_short_value
  // long_value
  // unsigned_long_value
  // long_long_value
  // unsigned_long_long_value
  // float_value
  // double_value
  // char_value
  // wchar_value
  // boolean_value
  // octet_value
  // int8_value
  // uint8_value
  // int16_value
  // uint16_value
  // int32_value
  // uint32_value
  // int64_value
  // uint64_value
  // string_value
  rosidl_runtime_c__String__fini(&msg->string_value);
  // bounded_string_value
  rosidl_runtime_c__String__fini(&msg->bounded_string_value);
  // wstring_value
  rosidl_runtime_c__U16String__fini(&msg->wstring_value);
  // bounded_wstring_value
  rosidl_runtime_c__U16String__fini(&msg->bounded_wstring_value);
  // unbounded_short_values
  rosidl_runtime_c__int16__Sequence__fini(&msg->unbounded_short_values);
  // bounded_short_values
  rosidl_runtime_c__int16__Sequence__fini(&msg->bounded_short_values);
  // unbounded_values_of_bounded_strings
  rosidl_runtime_c__String__Sequence__fini(&msg->unbounded_values_of_bounded_strings);
  // bounded_values_of_bounded_strings
  rosidl_runtime_c__String__Sequence__fini(&msg->bounded_values_of_bounded_strings);
  // array_short_values
  // int_and_frac_with_positive_scientific
  // int_and_frac_with_explicit_positive_scientific
  // int_and_frac_with_negative_scientific
  // int_and_frac
  // int_with_empty_frac
  // frac_only
  // int_with_positive_scientific
  // int_with_explicit_positive_scientific
  // int_with_negative_scientific
  // fixed_int_and_frac
  // fixed_int_with_dot_only
  // fixed_frac_only
  // fixed_int_only
}

bool
rclrs_example_msgs__msg__MyMessage__are_equal(const rclrs_example_msgs__msg__MyMessage * lhs, const rclrs_example_msgs__msg__MyMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // short_value
  if (lhs->short_value != rhs->short_value) {
    return false;
  }
  // short_value2
  if (lhs->short_value2 != rhs->short_value2) {
    return false;
  }
  // unsigned_short_value
  if (lhs->unsigned_short_value != rhs->unsigned_short_value) {
    return false;
  }
  // long_value
  if (lhs->long_value != rhs->long_value) {
    return false;
  }
  // unsigned_long_value
  if (lhs->unsigned_long_value != rhs->unsigned_long_value) {
    return false;
  }
  // long_long_value
  if (lhs->long_long_value != rhs->long_long_value) {
    return false;
  }
  // unsigned_long_long_value
  if (lhs->unsigned_long_long_value != rhs->unsigned_long_long_value) {
    return false;
  }
  // float_value
  if (lhs->float_value != rhs->float_value) {
    return false;
  }
  // double_value
  if (lhs->double_value != rhs->double_value) {
    return false;
  }
  // char_value
  if (lhs->char_value != rhs->char_value) {
    return false;
  }
  // wchar_value
  if (lhs->wchar_value != rhs->wchar_value) {
    return false;
  }
  // boolean_value
  if (lhs->boolean_value != rhs->boolean_value) {
    return false;
  }
  // octet_value
  if (lhs->octet_value != rhs->octet_value) {
    return false;
  }
  // int8_value
  if (lhs->int8_value != rhs->int8_value) {
    return false;
  }
  // uint8_value
  if (lhs->uint8_value != rhs->uint8_value) {
    return false;
  }
  // int16_value
  if (lhs->int16_value != rhs->int16_value) {
    return false;
  }
  // uint16_value
  if (lhs->uint16_value != rhs->uint16_value) {
    return false;
  }
  // int32_value
  if (lhs->int32_value != rhs->int32_value) {
    return false;
  }
  // uint32_value
  if (lhs->uint32_value != rhs->uint32_value) {
    return false;
  }
  // int64_value
  if (lhs->int64_value != rhs->int64_value) {
    return false;
  }
  // uint64_value
  if (lhs->uint64_value != rhs->uint64_value) {
    return false;
  }
  // string_value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->string_value), &(rhs->string_value)))
  {
    return false;
  }
  // bounded_string_value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bounded_string_value), &(rhs->bounded_string_value)))
  {
    return false;
  }
  // wstring_value
  if (!rosidl_runtime_c__U16String__are_equal(
      &(lhs->wstring_value), &(rhs->wstring_value)))
  {
    return false;
  }
  // bounded_wstring_value
  if (!rosidl_runtime_c__U16String__are_equal(
      &(lhs->bounded_wstring_value), &(rhs->bounded_wstring_value)))
  {
    return false;
  }
  // unbounded_short_values
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->unbounded_short_values), &(rhs->unbounded_short_values)))
  {
    return false;
  }
  // bounded_short_values
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->bounded_short_values), &(rhs->bounded_short_values)))
  {
    return false;
  }
  // unbounded_values_of_bounded_strings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->unbounded_values_of_bounded_strings), &(rhs->unbounded_values_of_bounded_strings)))
  {
    return false;
  }
  // bounded_values_of_bounded_strings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->bounded_values_of_bounded_strings), &(rhs->bounded_values_of_bounded_strings)))
  {
    return false;
  }
  // array_short_values
  for (size_t i = 0; i < 23; ++i) {
    if (lhs->array_short_values[i] != rhs->array_short_values[i]) {
      return false;
    }
  }
  // int_and_frac_with_positive_scientific
  if (lhs->int_and_frac_with_positive_scientific != rhs->int_and_frac_with_positive_scientific) {
    return false;
  }
  // int_and_frac_with_explicit_positive_scientific
  if (lhs->int_and_frac_with_explicit_positive_scientific != rhs->int_and_frac_with_explicit_positive_scientific) {
    return false;
  }
  // int_and_frac_with_negative_scientific
  if (lhs->int_and_frac_with_negative_scientific != rhs->int_and_frac_with_negative_scientific) {
    return false;
  }
  // int_and_frac
  if (lhs->int_and_frac != rhs->int_and_frac) {
    return false;
  }
  // int_with_empty_frac
  if (lhs->int_with_empty_frac != rhs->int_with_empty_frac) {
    return false;
  }
  // frac_only
  if (lhs->frac_only != rhs->frac_only) {
    return false;
  }
  // int_with_positive_scientific
  if (lhs->int_with_positive_scientific != rhs->int_with_positive_scientific) {
    return false;
  }
  // int_with_explicit_positive_scientific
  if (lhs->int_with_explicit_positive_scientific != rhs->int_with_explicit_positive_scientific) {
    return false;
  }
  // int_with_negative_scientific
  if (lhs->int_with_negative_scientific != rhs->int_with_negative_scientific) {
    return false;
  }
  // fixed_int_and_frac
  if (lhs->fixed_int_and_frac != rhs->fixed_int_and_frac) {
    return false;
  }
  // fixed_int_with_dot_only
  if (lhs->fixed_int_with_dot_only != rhs->fixed_int_with_dot_only) {
    return false;
  }
  // fixed_frac_only
  if (lhs->fixed_frac_only != rhs->fixed_frac_only) {
    return false;
  }
  // fixed_int_only
  if (lhs->fixed_int_only != rhs->fixed_int_only) {
    return false;
  }
  return true;
}

bool
rclrs_example_msgs__msg__MyMessage__copy(
  const rclrs_example_msgs__msg__MyMessage * input,
  rclrs_example_msgs__msg__MyMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // short_value
  output->short_value = input->short_value;
  // short_value2
  output->short_value2 = input->short_value2;
  // unsigned_short_value
  output->unsigned_short_value = input->unsigned_short_value;
  // long_value
  output->long_value = input->long_value;
  // unsigned_long_value
  output->unsigned_long_value = input->unsigned_long_value;
  // long_long_value
  output->long_long_value = input->long_long_value;
  // unsigned_long_long_value
  output->unsigned_long_long_value = input->unsigned_long_long_value;
  // float_value
  output->float_value = input->float_value;
  // double_value
  output->double_value = input->double_value;
  // char_value
  output->char_value = input->char_value;
  // wchar_value
  output->wchar_value = input->wchar_value;
  // boolean_value
  output->boolean_value = input->boolean_value;
  // octet_value
  output->octet_value = input->octet_value;
  // int8_value
  output->int8_value = input->int8_value;
  // uint8_value
  output->uint8_value = input->uint8_value;
  // int16_value
  output->int16_value = input->int16_value;
  // uint16_value
  output->uint16_value = input->uint16_value;
  // int32_value
  output->int32_value = input->int32_value;
  // uint32_value
  output->uint32_value = input->uint32_value;
  // int64_value
  output->int64_value = input->int64_value;
  // uint64_value
  output->uint64_value = input->uint64_value;
  // string_value
  if (!rosidl_runtime_c__String__copy(
      &(input->string_value), &(output->string_value)))
  {
    return false;
  }
  // bounded_string_value
  if (!rosidl_runtime_c__String__copy(
      &(input->bounded_string_value), &(output->bounded_string_value)))
  {
    return false;
  }
  // wstring_value
  if (!rosidl_runtime_c__U16String__copy(
      &(input->wstring_value), &(output->wstring_value)))
  {
    return false;
  }
  // bounded_wstring_value
  if (!rosidl_runtime_c__U16String__copy(
      &(input->bounded_wstring_value), &(output->bounded_wstring_value)))
  {
    return false;
  }
  // unbounded_short_values
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->unbounded_short_values), &(output->unbounded_short_values)))
  {
    return false;
  }
  // bounded_short_values
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->bounded_short_values), &(output->bounded_short_values)))
  {
    return false;
  }
  // unbounded_values_of_bounded_strings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->unbounded_values_of_bounded_strings), &(output->unbounded_values_of_bounded_strings)))
  {
    return false;
  }
  // bounded_values_of_bounded_strings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->bounded_values_of_bounded_strings), &(output->bounded_values_of_bounded_strings)))
  {
    return false;
  }
  // array_short_values
  for (size_t i = 0; i < 23; ++i) {
    output->array_short_values[i] = input->array_short_values[i];
  }
  // int_and_frac_with_positive_scientific
  output->int_and_frac_with_positive_scientific = input->int_and_frac_with_positive_scientific;
  // int_and_frac_with_explicit_positive_scientific
  output->int_and_frac_with_explicit_positive_scientific = input->int_and_frac_with_explicit_positive_scientific;
  // int_and_frac_with_negative_scientific
  output->int_and_frac_with_negative_scientific = input->int_and_frac_with_negative_scientific;
  // int_and_frac
  output->int_and_frac = input->int_and_frac;
  // int_with_empty_frac
  output->int_with_empty_frac = input->int_with_empty_frac;
  // frac_only
  output->frac_only = input->frac_only;
  // int_with_positive_scientific
  output->int_with_positive_scientific = input->int_with_positive_scientific;
  // int_with_explicit_positive_scientific
  output->int_with_explicit_positive_scientific = input->int_with_explicit_positive_scientific;
  // int_with_negative_scientific
  output->int_with_negative_scientific = input->int_with_negative_scientific;
  // fixed_int_and_frac
  output->fixed_int_and_frac = input->fixed_int_and_frac;
  // fixed_int_with_dot_only
  output->fixed_int_with_dot_only = input->fixed_int_with_dot_only;
  // fixed_frac_only
  output->fixed_frac_only = input->fixed_frac_only;
  // fixed_int_only
  output->fixed_int_only = input->fixed_int_only;
  return true;
}

rclrs_example_msgs__msg__MyMessage *
rclrs_example_msgs__msg__MyMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__MyMessage * msg = (rclrs_example_msgs__msg__MyMessage *)allocator.allocate(sizeof(rclrs_example_msgs__msg__MyMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rclrs_example_msgs__msg__MyMessage));
  bool success = rclrs_example_msgs__msg__MyMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rclrs_example_msgs__msg__MyMessage__destroy(rclrs_example_msgs__msg__MyMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rclrs_example_msgs__msg__MyMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rclrs_example_msgs__msg__MyMessage__Sequence__init(rclrs_example_msgs__msg__MyMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__MyMessage * data = NULL;

  if (size) {
    data = (rclrs_example_msgs__msg__MyMessage *)allocator.zero_allocate(size, sizeof(rclrs_example_msgs__msg__MyMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rclrs_example_msgs__msg__MyMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rclrs_example_msgs__msg__MyMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rclrs_example_msgs__msg__MyMessage__Sequence__fini(rclrs_example_msgs__msg__MyMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rclrs_example_msgs__msg__MyMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rclrs_example_msgs__msg__MyMessage__Sequence *
rclrs_example_msgs__msg__MyMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__MyMessage__Sequence * array = (rclrs_example_msgs__msg__MyMessage__Sequence *)allocator.allocate(sizeof(rclrs_example_msgs__msg__MyMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rclrs_example_msgs__msg__MyMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rclrs_example_msgs__msg__MyMessage__Sequence__destroy(rclrs_example_msgs__msg__MyMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rclrs_example_msgs__msg__MyMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rclrs_example_msgs__msg__MyMessage__Sequence__are_equal(const rclrs_example_msgs__msg__MyMessage__Sequence * lhs, const rclrs_example_msgs__msg__MyMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rclrs_example_msgs__msg__MyMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rclrs_example_msgs__msg__MyMessage__Sequence__copy(
  const rclrs_example_msgs__msg__MyMessage__Sequence * input,
  rclrs_example_msgs__msg__MyMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rclrs_example_msgs__msg__MyMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rclrs_example_msgs__msg__MyMessage * data =
      (rclrs_example_msgs__msg__MyMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rclrs_example_msgs__msg__MyMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rclrs_example_msgs__msg__MyMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rclrs_example_msgs__msg__MyMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
