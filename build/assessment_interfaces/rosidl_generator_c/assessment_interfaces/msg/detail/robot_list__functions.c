// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assessment_interfaces:msg/RobotList.idl
// generated code does not contain a copyright notice
#include "assessment_interfaces/msg/detail/robot_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "assessment_interfaces/msg/detail/robot__functions.h"

bool
assessment_interfaces__msg__RobotList__init(assessment_interfaces__msg__RobotList * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!assessment_interfaces__msg__Robot__Sequence__init(&msg->data, 0)) {
    assessment_interfaces__msg__RobotList__fini(msg);
    return false;
  }
  return true;
}

void
assessment_interfaces__msg__RobotList__fini(assessment_interfaces__msg__RobotList * msg)
{
  if (!msg) {
    return;
  }
  // data
  assessment_interfaces__msg__Robot__Sequence__fini(&msg->data);
}

bool
assessment_interfaces__msg__RobotList__are_equal(const assessment_interfaces__msg__RobotList * lhs, const assessment_interfaces__msg__RobotList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!assessment_interfaces__msg__Robot__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
assessment_interfaces__msg__RobotList__copy(
  const assessment_interfaces__msg__RobotList * input,
  assessment_interfaces__msg__RobotList * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!assessment_interfaces__msg__Robot__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

assessment_interfaces__msg__RobotList *
assessment_interfaces__msg__RobotList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__RobotList * msg = (assessment_interfaces__msg__RobotList *)allocator.allocate(sizeof(assessment_interfaces__msg__RobotList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assessment_interfaces__msg__RobotList));
  bool success = assessment_interfaces__msg__RobotList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assessment_interfaces__msg__RobotList__destroy(assessment_interfaces__msg__RobotList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assessment_interfaces__msg__RobotList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assessment_interfaces__msg__RobotList__Sequence__init(assessment_interfaces__msg__RobotList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__RobotList * data = NULL;

  if (size) {
    data = (assessment_interfaces__msg__RobotList *)allocator.zero_allocate(size, sizeof(assessment_interfaces__msg__RobotList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assessment_interfaces__msg__RobotList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assessment_interfaces__msg__RobotList__fini(&data[i - 1]);
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
assessment_interfaces__msg__RobotList__Sequence__fini(assessment_interfaces__msg__RobotList__Sequence * array)
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
      assessment_interfaces__msg__RobotList__fini(&array->data[i]);
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

assessment_interfaces__msg__RobotList__Sequence *
assessment_interfaces__msg__RobotList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assessment_interfaces__msg__RobotList__Sequence * array = (assessment_interfaces__msg__RobotList__Sequence *)allocator.allocate(sizeof(assessment_interfaces__msg__RobotList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assessment_interfaces__msg__RobotList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assessment_interfaces__msg__RobotList__Sequence__destroy(assessment_interfaces__msg__RobotList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assessment_interfaces__msg__RobotList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assessment_interfaces__msg__RobotList__Sequence__are_equal(const assessment_interfaces__msg__RobotList__Sequence * lhs, const assessment_interfaces__msg__RobotList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assessment_interfaces__msg__RobotList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assessment_interfaces__msg__RobotList__Sequence__copy(
  const assessment_interfaces__msg__RobotList__Sequence * input,
  assessment_interfaces__msg__RobotList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assessment_interfaces__msg__RobotList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assessment_interfaces__msg__RobotList * data =
      (assessment_interfaces__msg__RobotList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assessment_interfaces__msg__RobotList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assessment_interfaces__msg__RobotList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assessment_interfaces__msg__RobotList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
