// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__STRUCT_H_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ItemLog in the package assessment_interfaces.
typedef struct assessment_interfaces__msg__ItemLog
{
  uint16_t red_count;
  uint16_t green_count;
  uint16_t blue_count;
  uint16_t total_count;
  uint16_t red_value;
  uint16_t green_value;
  uint16_t blue_value;
  uint16_t total_value;
} assessment_interfaces__msg__ItemLog;

// Struct for a sequence of assessment_interfaces__msg__ItemLog.
typedef struct assessment_interfaces__msg__ItemLog__Sequence
{
  assessment_interfaces__msg__ItemLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assessment_interfaces__msg__ItemLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__STRUCT_H_
