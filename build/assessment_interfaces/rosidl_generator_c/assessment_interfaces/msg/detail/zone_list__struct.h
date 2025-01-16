// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assessment_interfaces:msg/ZoneList.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE_LIST__STRUCT_H_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE_LIST__STRUCT_H_

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
#include "assessment_interfaces/msg/detail/zone__struct.h"

/// Struct defined in msg/ZoneList in the package assessment_interfaces.
typedef struct assessment_interfaces__msg__ZoneList
{
  assessment_interfaces__msg__Zone__Sequence data;
} assessment_interfaces__msg__ZoneList;

// Struct for a sequence of assessment_interfaces__msg__ZoneList.
typedef struct assessment_interfaces__msg__ZoneList__Sequence
{
  assessment_interfaces__msg__ZoneList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assessment_interfaces__msg__ZoneList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE_LIST__STRUCT_H_
