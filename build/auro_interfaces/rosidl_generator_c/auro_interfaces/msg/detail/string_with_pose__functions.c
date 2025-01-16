// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auro_interfaces:msg/StringWithPose.idl
// generated code does not contain a copyright notice
#include "auro_interfaces/msg/detail/string_with_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
auro_interfaces__msg__StringWithPose__init(auro_interfaces__msg__StringWithPose * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    auro_interfaces__msg__StringWithPose__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    auro_interfaces__msg__StringWithPose__fini(msg);
    return false;
  }
  return true;
}

void
auro_interfaces__msg__StringWithPose__fini(auro_interfaces__msg__StringWithPose * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
auro_interfaces__msg__StringWithPose__are_equal(const auro_interfaces__msg__StringWithPose * lhs, const auro_interfaces__msg__StringWithPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
auro_interfaces__msg__StringWithPose__copy(
  const auro_interfaces__msg__StringWithPose * input,
  auro_interfaces__msg__StringWithPose * output)
{
  if (!input || !output) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

auro_interfaces__msg__StringWithPose *
auro_interfaces__msg__StringWithPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__StringWithPose * msg = (auro_interfaces__msg__StringWithPose *)allocator.allocate(sizeof(auro_interfaces__msg__StringWithPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auro_interfaces__msg__StringWithPose));
  bool success = auro_interfaces__msg__StringWithPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auro_interfaces__msg__StringWithPose__destroy(auro_interfaces__msg__StringWithPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auro_interfaces__msg__StringWithPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auro_interfaces__msg__StringWithPose__Sequence__init(auro_interfaces__msg__StringWithPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__StringWithPose * data = NULL;

  if (size) {
    data = (auro_interfaces__msg__StringWithPose *)allocator.zero_allocate(size, sizeof(auro_interfaces__msg__StringWithPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auro_interfaces__msg__StringWithPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auro_interfaces__msg__StringWithPose__fini(&data[i - 1]);
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
auro_interfaces__msg__StringWithPose__Sequence__fini(auro_interfaces__msg__StringWithPose__Sequence * array)
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
      auro_interfaces__msg__StringWithPose__fini(&array->data[i]);
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

auro_interfaces__msg__StringWithPose__Sequence *
auro_interfaces__msg__StringWithPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__msg__StringWithPose__Sequence * array = (auro_interfaces__msg__StringWithPose__Sequence *)allocator.allocate(sizeof(auro_interfaces__msg__StringWithPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auro_interfaces__msg__StringWithPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auro_interfaces__msg__StringWithPose__Sequence__destroy(auro_interfaces__msg__StringWithPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auro_interfaces__msg__StringWithPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auro_interfaces__msg__StringWithPose__Sequence__are_equal(const auro_interfaces__msg__StringWithPose__Sequence * lhs, const auro_interfaces__msg__StringWithPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auro_interfaces__msg__StringWithPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auro_interfaces__msg__StringWithPose__Sequence__copy(
  const auro_interfaces__msg__StringWithPose__Sequence * input,
  auro_interfaces__msg__StringWithPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auro_interfaces__msg__StringWithPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auro_interfaces__msg__StringWithPose * data =
      (auro_interfaces__msg__StringWithPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auro_interfaces__msg__StringWithPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auro_interfaces__msg__StringWithPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auro_interfaces__msg__StringWithPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
