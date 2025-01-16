// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auro_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice
#include "auro_interfaces/msg/detail/direction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
auro_interfaces__msg__Direction__init(auro_interfaces__msg__Direction * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  return true;
}

void
auro_interfaces__msg__Direction__fini(auro_interfaces__msg__Direction * msg)
{
  if (!msg) {
    return;
  }
  // direction
}

bool
auro_interfaces__msg__Direction__are_equal(const auro_interfaces__msg__Direction * lhs, const auro_interfaces__msg__Direction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  return true;
}

bool
auro_interfaces__msg__Direction__copy(
  const auro_interfaces__msg__Direction * input,
  auro_interfaces__msg__Direction * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  output->direction = input->direction;
  return true;
}

auro_interfaces__msg__Direction *
auro_interfaces__msg__Direction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__Direction * msg = (auro_interfaces__msg__Direction *)allocator.allocate(sizeof(auro_interfaces__msg__Direction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auro_interfaces__msg__Direction));
  bool success = auro_interfaces__msg__Direction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auro_interfaces__msg__Direction__destroy(auro_interfaces__msg__Direction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auro_interfaces__msg__Direction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auro_interfaces__msg__Direction__Sequence__init(auro_interfaces__msg__Direction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__Direction * data = NULL;

  if (size) {
    data = (auro_interfaces__msg__Direction *)allocator.zero_allocate(size, sizeof(auro_interfaces__msg__Direction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auro_interfaces__msg__Direction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auro_interfaces__msg__Direction__fini(&data[i - 1]);
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
auro_interfaces__msg__Direction__Sequence__fini(auro_interfaces__msg__Direction__Sequence * array)
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
      auro_interfaces__msg__Direction__fini(&array->data[i]);
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

auro_interfaces__msg__Direction__Sequence *
auro_interfaces__msg__Direction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__Direction__Sequence * array = (auro_interfaces__msg__Direction__Sequence *)allocator.allocate(sizeof(auro_interfaces__msg__Direction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auro_interfaces__msg__Direction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auro_interfaces__msg__Direction__Sequence__destroy(auro_interfaces__msg__Direction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auro_interfaces__msg__Direction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auro_interfaces__msg__Direction__Sequence__are_equal(const auro_interfaces__msg__Direction__Sequence * lhs, const auro_interfaces__msg__Direction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auro_interfaces__msg__Direction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auro_interfaces__msg__Direction__Sequence__copy(
  const auro_interfaces__msg__Direction__Sequence * input,
  auro_interfaces__msg__Direction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auro_interfaces__msg__Direction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auro_interfaces__msg__Direction * data =
      (auro_interfaces__msg__Direction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auro_interfaces__msg__Direction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auro_interfaces__msg__Direction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auro_interfaces__msg__Direction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
