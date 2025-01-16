// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assessment_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Robot in the package assessment_interfaces.
typedef struct assessment_interfaces__msg__Robot
{
  int16_t x;
  int16_t y;
  float size;
} assessment_interfaces__msg__Robot;

// Struct for a sequence of assessment_interfaces__msg__Robot.
typedef struct assessment_interfaces__msg__Robot__Sequence
{
  assessment_interfaces__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assessment_interfaces__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_
