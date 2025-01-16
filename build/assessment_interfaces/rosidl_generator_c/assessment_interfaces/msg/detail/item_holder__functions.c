// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice
#include "assessment_interfaces/msg/detail/item_holder__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_id`
// Member `item_colour`
#include "rosidl_runtime_c/string_functions.h"

bool
assessment_interfaces__msg__ItemHolder__init(assessment_interfaces__msg__ItemHolder * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    assessment_interfaces__msg__ItemHolder__fini(msg);
    return false;
  }
  // holding_item
  // item_colour
  if (!rosidl_runtime_c__String__init(&msg->item_colour)) {
    assessment_interfaces__msg__ItemHolder__fini(msg);
    return false;
  }
  // item_value
  return true;
}

void
assessment_interfaces__msg__ItemHolder__fini(assessment_interfaces__msg__ItemHolder * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // holding_item
  // item_colour
  rosidl_runtime_c__String__fini(&msg->item_colour);
  // item_value
}

bool
assessment_interfaces__msg__ItemHolder__are_equal(const assessment_interfaces__msg__ItemHolder * lhs, const assessment_interfaces__msg__ItemHolder * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // holding_item
  if (lhs->holding_item != rhs->holding_item) {
    return false;
  }
  // item_colour
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item_colour), &(rhs->item_colour)))
  {
    return false;
  }
  // item_value
  if (lhs->item_value != rhs->item_value) {
    return false;
  }
  return true;
}

bool
assessment_interfaces__msg__ItemHolder__copy(
  const assessment_interfaces__msg__ItemHolder * input,
  assessment_interfaces__msg__ItemHolder * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // holding_item
  output->holding_item = input->holding_item;
  // item_colour
  if (!rosidl_runtime_c__String__copy(
      &(input->item_colour), &(output->item_colour)))
  {
    return false;
  }
  // item_value
  output->item_value = input->item_value;
  return true;
}

assessment_interfaces__msg__ItemHolder *
assessment_interfaces__msg__ItemHolder__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__ItemHolder * msg = (assessment_interfaces__msg__ItemHolder *)allocator.allocate(sizeof(assessment_interfaces__msg__ItemHolder), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assessment_interfaces__msg__ItemHolder));
  bool success = assessment_interfaces__msg__ItemHolder__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assessment_interfaces__msg__ItemHolder__destroy(assessment_interfaces__msg__ItemHolder * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assessment_interfaces__msg__ItemHolder__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assessment_interfaces__msg__ItemHolder__Sequence__init(assessment_interfaces__msg__ItemHolder__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__ItemHolder * data = NULL;

  if (size) {
    data = (assessment_interfaces__msg__ItemHolder *)allocator.zero_allocate(size, sizeof(assessment_interfaces__msg__ItemHolder), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assessment_interfaces__msg__ItemHolder__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assessment_interfaces__msg__ItemHolder__fini(&data[i - 1]);
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
assessment_interfaces__msg__ItemHolder__Sequence__fini(assessment_interfaces__msg__ItemHolder__Sequence * array)
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
      assessment_interfaces__msg__ItemHolder__fini(&array->data[i]);
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

assessment_interfaces__msg__ItemHolder__Sequence *
assessment_interfaces__msg__ItemHolder__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__ItemHolder__Sequence * array = (assessment_interfaces__msg__ItemHolder__Sequence *)allocator.allocate(sizeof(assessment_interfaces__msg__ItemHolder__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assessment_interfaces__msg__ItemHolder__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assessment_interfaces__msg__ItemHolder__Sequence__destroy(assessment_interfaces__msg__ItemHolder__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assessment_interfaces__msg__ItemHolder__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assessment_interfaces__msg__ItemHolder__Sequence__are_equal(const assessment_interfaces__msg__ItemHolder__Sequence * lhs, const assessment_interfaces__msg__ItemHolder__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assessment_interfaces__msg__ItemHolder__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assessment_interfaces__msg__ItemHolder__Sequence__copy(
  const assessment_interfaces__msg__ItemHolder__Sequence * input,
  assessment_interfaces__msg__ItemHolder__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assessment_interfaces__msg__ItemHolder);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assessment_interfaces__msg__ItemHolder * data =
      (assessment_interfaces__msg__ItemHolder *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assessment_interfaces__msg__ItemHolder__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assessment_interfaces__msg__ItemHolder__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assessment_interfaces__msg__ItemHolder__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
