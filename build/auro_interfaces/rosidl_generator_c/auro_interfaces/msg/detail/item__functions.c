// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auro_interfaces:msg/Item.idl
// generated code does not contain a copyright notice
#include "auro_interfaces/msg/detail/item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `colour`
#include "rosidl_runtime_c/string_functions.h"

bool
auro_interfaces__msg__Item__init(auro_interfaces__msg__Item * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // diameter
  // colour
  if (!rosidl_runtime_c__String__init(&msg->colour)) {
    auro_interfaces__msg__Item__fini(msg);
    return false;
  }
  return true;
}

void
auro_interfaces__msg__Item__fini(auro_interfaces__msg__Item * msg)
{
  if (!msg) {
    return;
  }
  // x
  // diameter
  // colour
  rosidl_runtime_c__String__fini(&msg->colour);
}

bool
auro_interfaces__msg__Item__are_equal(const auro_interfaces__msg__Item * lhs, const auro_interfaces__msg__Item * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // diameter
  if (lhs->diameter != rhs->diameter) {
    return false;
  }
  // colour
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->colour), &(rhs->colour)))
  {
    return false;
  }
  return true;
}

bool
auro_interfaces__msg__Item__copy(
  const auro_interfaces__msg__Item * input,
  auro_interfaces__msg__Item * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // diameter
  output->diameter = input->diameter;
  // colour
  if (!rosidl_runtime_c__String__copy(
      &(input->colour), &(output->colour)))
  {
    return false;
  }
  return true;
}

auro_interfaces__msg__Item *
auro_interfaces__msg__Item__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__Item * msg = (auro_interfaces__msg__Item *)allocator.allocate(sizeof(auro_interfaces__msg__Item), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auro_interfaces__msg__Item));
  bool success = auro_interfaces__msg__Item__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auro_interfaces__msg__Item__destroy(auro_interfaces__msg__Item * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auro_interfaces__msg__Item__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auro_interfaces__msg__Item__Sequence__init(auro_interfaces__msg__Item__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__Item * data = NULL;

  if (size) {
    data = (auro_interfaces__msg__Item *)allocator.zero_allocate(size, sizeof(auro_interfaces__msg__Item), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auro_interfaces__msg__Item__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auro_interfaces__msg__Item__fini(&data[i - 1]);
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
auro_interfaces__msg__Item__Sequence__fini(auro_interfaces__msg__Item__Sequence * array)
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
      auro_interfaces__msg__Item__fini(&array->data[i]);
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

auro_interfaces__msg__Item__Sequence *
auro_interfaces__msg__Item__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__Item__Sequence * array = (auro_interfaces__msg__Item__Sequence *)allocator.allocate(sizeof(auro_interfaces__msg__Item__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auro_interfaces__msg__Item__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auro_interfaces__msg__Item__Sequence__destroy(auro_interfaces__msg__Item__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auro_interfaces__msg__Item__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auro_interfaces__msg__Item__Sequence__are_equal(const auro_interfaces__msg__Item__Sequence * lhs, const auro_interfaces__msg__Item__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auro_interfaces__msg__Item__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auro_interfaces__msg__Item__Sequence__copy(
  const auro_interfaces__msg__Item__Sequence * input,
  auro_interfaces__msg__Item__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auro_interfaces__msg__Item);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auro_interfaces__msg__Item * data =
      (auro_interfaces__msg__Item *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auro_interfaces__msg__Item__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auro_interfaces__msg__Item__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auro_interfaces__msg__Item__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
