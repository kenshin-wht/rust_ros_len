// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/LoggerLevel.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/logger_level__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
rcl_interfaces__msg__LoggerLevel__init(rcl_interfaces__msg__LoggerLevel * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rcl_interfaces__msg__LoggerLevel__fini(msg);
    return false;
  }
  // level
  return true;
}

void
rcl_interfaces__msg__LoggerLevel__fini(rcl_interfaces__msg__LoggerLevel * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // level
}

bool
rcl_interfaces__msg__LoggerLevel__are_equal(const rcl_interfaces__msg__LoggerLevel * lhs, const rcl_interfaces__msg__LoggerLevel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  return true;
}

bool
rcl_interfaces__msg__LoggerLevel__copy(
  const rcl_interfaces__msg__LoggerLevel * input,
  rcl_interfaces__msg__LoggerLevel * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // level
  output->level = input->level;
  return true;
}

rcl_interfaces__msg__LoggerLevel *
rcl_interfaces__msg__LoggerLevel__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__msg__LoggerLevel * msg = (rcl_interfaces__msg__LoggerLevel *)allocator.allocate(sizeof(rcl_interfaces__msg__LoggerLevel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__LoggerLevel));
  bool success = rcl_interfaces__msg__LoggerLevel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__LoggerLevel__destroy(rcl_interfaces__msg__LoggerLevel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rcl_interfaces__msg__LoggerLevel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rcl_interfaces__msg__LoggerLevel__Sequence__init(rcl_interfaces__msg__LoggerLevel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__msg__LoggerLevel * data = NULL;

  if (size) {
    data = (rcl_interfaces__msg__LoggerLevel *)allocator.zero_allocate(size, sizeof(rcl_interfaces__msg__LoggerLevel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__LoggerLevel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__LoggerLevel__fini(&data[i - 1]);
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
rcl_interfaces__msg__LoggerLevel__Sequence__fini(rcl_interfaces__msg__LoggerLevel__Sequence * array)
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
      rcl_interfaces__msg__LoggerLevel__fini(&array->data[i]);
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

rcl_interfaces__msg__LoggerLevel__Sequence *
rcl_interfaces__msg__LoggerLevel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__msg__LoggerLevel__Sequence * array = (rcl_interfaces__msg__LoggerLevel__Sequence *)allocator.allocate(sizeof(rcl_interfaces__msg__LoggerLevel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__LoggerLevel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__LoggerLevel__Sequence__destroy(rcl_interfaces__msg__LoggerLevel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rcl_interfaces__msg__LoggerLevel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rcl_interfaces__msg__LoggerLevel__Sequence__are_equal(const rcl_interfaces__msg__LoggerLevel__Sequence * lhs, const rcl_interfaces__msg__LoggerLevel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rcl_interfaces__msg__LoggerLevel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rcl_interfaces__msg__LoggerLevel__Sequence__copy(
  const rcl_interfaces__msg__LoggerLevel__Sequence * input,
  rcl_interfaces__msg__LoggerLevel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rcl_interfaces__msg__LoggerLevel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rcl_interfaces__msg__LoggerLevel * data =
      (rcl_interfaces__msg__LoggerLevel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rcl_interfaces__msg__LoggerLevel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rcl_interfaces__msg__LoggerLevel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rcl_interfaces__msg__LoggerLevel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
