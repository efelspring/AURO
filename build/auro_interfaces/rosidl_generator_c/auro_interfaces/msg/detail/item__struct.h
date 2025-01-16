// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auro_interfaces:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__ITEM__STRUCT_H_
#define AURO_INTERFACES__MSG__DETAIL__ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'colour'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Item in the package auro_interfaces.
typedef struct auro_interfaces__msg__Item
{
  int16_t x;
  uint16_t diameter;
  rosidl_runtime_c__String colour;
} auro_interfaces__msg__Item;

// Struct for a sequence of auro_interfaces__msg__Item.
typedef struct auro_interfaces__msg__Item__Sequence
{
  auro_interfaces__msg__Item * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auro_interfaces__msg__Item__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AURO_INTERFACES__MSG__DETAIL__ITEM__STRUCT_H_
