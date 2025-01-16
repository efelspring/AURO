// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auro_interfaces:srv/ItemRequest.idl
// generated code does not contain a copyright notice
#include "auro_interfaces/srv/detail/item_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_id`
#include "rosidl_runtime_c/string_functions.h"

bool
auro_interfaces__srv__ItemRequest_Request__init(auro_interfaces__srv__ItemRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    auro_interfaces__srv__ItemRequest_Request__fini(msg);
    return false;
  }
  return true;
}

void
auro_interfaces__srv__ItemRequest_Request__fini(auro_interfaces__srv__ItemRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
}

bool
auro_interfaces__srv__ItemRequest_Request__are_equal(const auro_interfaces__srv__ItemRequest_Request * lhs, const auro_interfaces__srv__ItemRequest_Request * rhs)
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
  return true;
}

bool
auro_interfaces__srv__ItemRequest_Request__copy(
  const auro_interfaces__srv__ItemRequest_Request * input,
  auro_interfaces__srv__ItemRequest_Request * output)
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
  return true;
}

auro_interfaces__srv__ItemRequest_Request *
auro_interfaces__srv__ItemRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__srv__ItemRequest_Request * msg = (auro_interfaces__srv__ItemRequest_Request *)allocator.allocate(sizeof(auro_interfaces__srv__ItemRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auro_interfaces__srv__ItemRequest_Request));
  bool success = auro_interfaces__srv__ItemRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auro_interfaces__srv__ItemRequest_Request__destroy(auro_interfaces__srv__ItemRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auro_interfaces__srv__ItemRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auro_interfaces__srv__ItemRequest_Request__Sequence__init(auro_interfaces__srv__ItemRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__srv__ItemRequest_Request * data = NULL;

  if (size) {
    data = (auro_interfaces__srv__ItemRequest_Request *)allocator.zero_allocate(size, sizeof(auro_interfaces__srv__ItemRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auro_interfaces__srv__ItemRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auro_interfaces__srv__ItemRequest_Request__fini(&data[i - 1]);
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
auro_interfaces__srv__ItemRequest_Request__Sequence__fini(auro_interfaces__srv__ItemRequest_Request__Sequence * array)
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
      auro_interfaces__srv__ItemRequest_Request__fini(&array->data[i]);
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

auro_interfaces__srv__ItemRequest_Request__Sequence *
auro_interfaces__srv__ItemRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__srv__ItemRequest_Request__Sequence * array = (auro_interfaces__srv__ItemRequest_Request__Sequence *)allocator.allocate(sizeof(auro_interfaces__srv__ItemRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auro_interfaces__srv__ItemRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auro_interfaces__srv__ItemRequest_Request__Sequence__destroy(auro_interfaces__srv__ItemRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auro_interfaces__srv__ItemRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auro_interfaces__srv__ItemRequest_Request__Sequence__are_equal(const auro_interfaces__srv__ItemRequest_Request__Sequence * lhs, const auro_interfaces__srv__ItemRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auro_interfaces__srv__ItemRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auro_interfaces__srv__ItemRequest_Request__Sequence__copy(
  const auro_interfaces__srv__ItemRequest_Request__Sequence * input,
  auro_interfaces__srv__ItemRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auro_interfaces__srv__ItemRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auro_interfaces__srv__ItemRequest_Request * data =
      (auro_interfaces__srv__ItemRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auro_interfaces__srv__ItemRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auro_interfaces__srv__ItemRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auro_interfaces__srv__ItemRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
auro_interfaces__srv__ItemRequest_Response__init(auro_interfaces__srv__ItemRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    auro_interfaces__srv__ItemRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
auro_interfaces__srv__ItemRequest_Response__fini(auro_interfaces__srv__ItemRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
auro_interfaces__srv__ItemRequest_Response__are_equal(const auro_interfaces__srv__ItemRequest_Response * lhs, const auro_interfaces__srv__ItemRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
auro_interfaces__srv__ItemRequest_Response__copy(
  const auro_interfaces__srv__ItemRequest_Response * input,
  auro_interfaces__srv__ItemRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

auro_interfaces__srv__ItemRequest_Response *
auro_interfaces__srv__ItemRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__srv__ItemRequest_Response * msg = (auro_interfaces__srv__ItemRequest_Response *)allocator.allocate(sizeof(auro_interfaces__srv__ItemRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auro_interfaces__srv__ItemRequest_Response));
  bool success = auro_interfaces__srv__ItemRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auro_interfaces__srv__ItemRequest_Response__destroy(auro_interfaces__srv__ItemRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auro_interfaces__srv__ItemRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auro_interfaces__srv__ItemRequest_Response__Sequence__init(auro_interfaces__srv__ItemRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__srv__ItemRequest_Response * data = NULL;

  if (size) {
    data = (auro_interfaces__srv__ItemRequest_Response *)allocator.zero_allocate(size, sizeof(auro_interfaces__srv__ItemRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auro_interfaces__srv__ItemRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auro_interfaces__srv__ItemRequest_Response__fini(&data[i - 1]);
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
auro_interfaces__srv__ItemRequest_Response__Sequence__fini(auro_interfaces__srv__ItemRequest_Response__Sequence * array)
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
      auro_interfaces__srv__ItemRequest_Response__fini(&array->data[i]);
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

auro_interfaces__srv__ItemRequest_Response__Sequence *
auro_interfaces__srv__ItemRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auro_interfaces__srv__ItemRequest_Response__Sequence * array = (auro_interfaces__srv__ItemRequest_Response__Sequence *)allocator.allocate(sizeof(auro_interfaces__srv__ItemRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auro_interfaces__srv__ItemRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auro_interfaces__srv__ItemRequest_Response__Sequence__destroy(auro_interfaces__srv__ItemRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auro_interfaces__srv__ItemRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auro_interfaces__srv__ItemRequest_Response__Sequence__are_equal(const auro_interfaces__srv__ItemRequest_Response__Sequence * lhs, const auro_interfaces__srv__ItemRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auro_interfaces__srv__ItemRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auro_interfaces__srv__ItemRequest_Response__Sequence__copy(
  const auro_interfaces__srv__ItemRequest_Response__Sequence * input,
  auro_interfaces__srv__ItemRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auro_interfaces__srv__ItemRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auro_interfaces__srv__ItemRequest_Response * data =
      (auro_interfaces__srv__ItemRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auro_interfaces__srv__ItemRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auro_interfaces__srv__ItemRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auro_interfaces__srv__ItemRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
