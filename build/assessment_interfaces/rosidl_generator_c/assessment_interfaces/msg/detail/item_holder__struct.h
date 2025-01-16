// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__STRUCT_H_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__STRUCT_H_

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
// Member 'item_colour'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ItemHolder in the package assessment_interfaces.
typedef struct assessment_interfaces__msg__ItemHolder
{
  rosidl_runtime_c__String robot_id;
  bool holding_item;
  rosidl_runtime_c__String item_colour;
  uint8_t item_value;
} assessment_interfaces__msg__ItemHolder;

// Struct for a sequence of assessment_interfaces__msg__ItemHolder.
typedef struct assessment_interfaces__msg__ItemHolder__Sequence
{
  assessment_interfaces__msg__ItemHolder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assessment_interfaces__msg__ItemHolder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__STRUCT_H_
