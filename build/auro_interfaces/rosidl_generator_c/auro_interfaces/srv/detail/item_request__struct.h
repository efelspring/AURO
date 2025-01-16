// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auro_interfaces:srv/ItemRequest.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__SRV__DETAIL__ITEM_REQUEST__STRUCT_H_
#define AURO_INTERFACES__SRV__DETAIL__ITEM_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ItemRequest in the package auro_interfaces.
typedef struct auro_interfaces__srv__ItemRequest_Request
{
  rosidl_runtime_c__String robot_id;
} auro_interfaces__srv__ItemRequest_Request;

// Struct for a sequence of auro_interfaces__srv__ItemRequest_Request.
typedef struct auro_interfaces__srv__ItemRequest_Request__Sequence
{
  auro_interfaces__srv__ItemRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auro_interfaces__srv__ItemRequest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ItemRequest in the package auro_interfaces.
typedef struct auro_interfaces__srv__ItemRequest_Response
{
  bool success;
  rosidl_runtime_c__String message;
} auro_interfaces__srv__ItemRequest_Response;

// Struct for a sequence of auro_interfaces__srv__ItemRequest_Response.
typedef struct auro_interfaces__srv__ItemRequest_Response__Sequence
{
  auro_interfaces__srv__ItemRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auro_interfaces__srv__ItemRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AURO_INTERFACES__SRV__DETAIL__ITEM_REQUEST__STRUCT_H_
