// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assessment_interfaces:msg/ItemHolders.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDERS__STRUCT_H_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "assessment_interfaces/msg/detail/item_holder__struct.h"

/// Struct defined in msg/ItemHolders in the package assessment_interfaces.
typedef struct assessment_interfaces__msg__ItemHolders
{
  assessment_interfaces__msg__ItemHolder__Sequence data;
} assessment_interfaces__msg__ItemHolders;

// Struct for a sequence of assessment_interfaces__msg__ItemHolders.
typedef struct assessment_interfaces__msg__ItemHolders__Sequence
{
  assessment_interfaces__msg__ItemHolders * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assessment_interfaces__msg__ItemHolders__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDERS__STRUCT_H_
