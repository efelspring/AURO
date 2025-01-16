// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice
#include "assessment_interfaces/msg/detail/item_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
assessment_interfaces__msg__ItemLog__init(assessment_interfaces__msg__ItemLog * msg)
{
  if (!msg) {
    return false;
  }
  // red_count
  // green_count
  // blue_count
  // total_count
  // red_value
  // green_value
  // blue_value
  // total_value
  return true;
}

void
assessment_interfaces__msg__ItemLog__fini(assessment_interfaces__msg__ItemLog * msg)
{
  if (!msg) {
    return;
  }
  // red_count
  // green_count
  // blue_count
  // total_count
  // red_value
  // green_value
  // blue_value
  // total_value
}

bool
assessment_interfaces__msg__ItemLog__are_equal(const assessment_interfaces__msg__ItemLog * lhs, const assessment_interfaces__msg__ItemLog * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red_count
  if (lhs->red_count != rhs->red_count) {
    return false;
  }
  // green_count
  if (lhs->green_count != rhs->green_count) {
    return false;
  }
  // blue_count
  if (lhs->blue_count != rhs->blue_count) {
    return false;
  }
  // total_count
  if (lhs->total_count != rhs->total_count) {
    return false;
  }
  // red_value
  if (lhs->red_value != rhs->red_value) {
    return false;
  }
  // green_value
  if (lhs->green_value != rhs->green_value) {
    return false;
  }
  // blue_value
  if (lhs->blue_value != rhs->blue_value) {
    return false;
  }
  // total_value
  if (lhs->total_value != rhs->total_value) {
    return false;
  }
  return true;
}

bool
assessment_interfaces__msg__ItemLog__copy(
  const assessment_interfaces__msg__ItemLog * input,
  assessment_interfaces__msg__ItemLog * output)
{
  if (!input || !output) {
    return false;
  }
  // red_count
  output->red_count = input->red_count;
  // green_count
  output->green_count = input->green_count;
  // blue_count
  output->blue_count = input->blue_count;
  // total_count
  output->total_count = input->total_count;
  // red_value
  output->red_value = input->red_value;
  // green_value
  output->green_value = input->green_value;
  // blue_value
  output->blue_value = input->blue_value;
  // total_value
  output->total_value = input->total_value;
  return true;
}

assessment_interfaces__msg__ItemLog *
assessment_interfaces__msg__ItemLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__ItemLog * msg = (assessment_interfaces__msg__ItemLog *)allocator.allocate(sizeof(assessment_interfaces__msg__ItemLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assessment_interfaces__msg__ItemLog));
  bool success = assessment_interfaces__msg__ItemLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assessment_interfaces__msg__ItemLog__destroy(assessment_interfaces__msg__ItemLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assessment_interfaces__msg__ItemLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assessment_interfaces__msg__ItemLog__Sequence__init(assessment_interfaces__msg__ItemLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__ItemLog * data = NULL;

  if (size) {
    data = (assessment_interfaces__msg__ItemLog *)allocator.zero_allocate(size, sizeof(assessment_interfaces__msg__ItemLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assessment_interfaces__msg__ItemLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assessment_interfaces__msg__ItemLog__fini(&data[i - 1]);
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
assessment_interfaces__msg__ItemLog__Sequence__fini(assessment_interfaces__msg__ItemLog__Sequence * array)
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
      assessment_interfaces__msg__ItemLog__fini(&array->data[i]);
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

assessment_interfaces__msg__ItemLog__Sequence *
assessment_interfaces__msg__ItemLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__ItemLog__Sequence * array = (assessment_interfaces__msg__ItemLog__Sequence *)allocator.allocate(sizeof(assessment_interfaces__msg__ItemLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assessment_interfaces__msg__ItemLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assessment_interfaces__msg__ItemLog__Sequence__destroy(assessment_interfaces__msg__ItemLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assessment_interfaces__msg__ItemLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assessment_interfaces__msg__ItemLog__Sequence__are_equal(const assessment_interfaces__msg__ItemLog__Sequence * lhs, const assessment_interfaces__msg__ItemLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assessment_interfaces__msg__ItemLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assessment_interfaces__msg__ItemLog__Sequence__copy(
  const assessment_interfaces__msg__ItemLog__Sequence * input,
  assessment_interfaces__msg__ItemLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assessment_interfaces__msg__ItemLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assessment_interfaces__msg__ItemLog * data =
      (assessment_interfaces__msg__ItemLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assessment_interfaces__msg__ItemLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assessment_interfaces__msg__ItemLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assessment_interfaces__msg__ItemLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
