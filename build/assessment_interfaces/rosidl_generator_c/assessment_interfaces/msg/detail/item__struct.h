// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assessment_interfaces:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM__STRUCT_H_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM__STRUCT_H_

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

/// Struct defined in msg/Item in the package assessment_interfaces.
typedef struct assessment_interfaces__msg__Item
{
  int16_t x;
  int16_t y;
  uint16_t diameter;
  rosidl_runtime_c__String colour;
  uint8_t value;
} assessment_interfaces__msg__Item;

// Struct for a sequence of assessment_interfaces__msg__Item.
typedef struct assessment_interfaces__msg__Item__Sequence
{
  assessment_interfaces__msg__Item * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assessment_interfaces__msg__Item__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM__STRUCT_H_
