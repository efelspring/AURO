// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assessment_interfaces:msg/ItemList.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_H_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_H_

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
#include "assessment_interfaces/msg/detail/item__struct.h"

/// Struct defined in msg/ItemList in the package assessment_interfaces.
typedef struct assessment_interfaces__msg__ItemList
{
  assessment_interfaces__msg__Item__Sequence data;
} assessment_interfaces__msg__ItemList;

// Struct for a sequence of assessment_interfaces__msg__ItemList.
typedef struct assessment_interfaces__msg__ItemList__Sequence
{
  assessment_interfaces__msg__ItemList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assessment_interfaces__msg__ItemList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_H_
