// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auro_interfaces:msg/ItemList.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_H_
#define AURO_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_H_

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
#include "auro_interfaces/msg/detail/item__struct.h"

/// Struct defined in msg/ItemList in the package auro_interfaces.
typedef struct auro_interfaces__msg__ItemList
{
  auro_interfaces__msg__Item__Sequence data;
} auro_interfaces__msg__ItemList;

// Struct for a sequence of auro_interfaces__msg__ItemList.
typedef struct auro_interfaces__msg__ItemList__Sequence
{
  auro_interfaces__msg__ItemList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auro_interfaces__msg__ItemList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AURO_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_H_
