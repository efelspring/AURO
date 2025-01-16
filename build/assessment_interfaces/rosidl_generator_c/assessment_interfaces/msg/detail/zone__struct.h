// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assessment_interfaces:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__STRUCT_H_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ZONE_CYAN'.
enum
{
  assessment_interfaces__msg__Zone__ZONE_CYAN = 1
};

/// Constant 'ZONE_PURPLE'.
enum
{
  assessment_interfaces__msg__Zone__ZONE_PURPLE = 2
};

/// Constant 'ZONE_GREEN'.
enum
{
  assessment_interfaces__msg__Zone__ZONE_GREEN = 3
};

/// Constant 'ZONE_PINK'.
enum
{
  assessment_interfaces__msg__Zone__ZONE_PINK = 4
};

/// Struct defined in msg/Zone in the package assessment_interfaces.
typedef struct assessment_interfaces__msg__Zone
{
  uint8_t zone;
  int16_t x;
  int16_t y;
  float size;
} assessment_interfaces__msg__Zone;

// Struct for a sequence of assessment_interfaces__msg__Zone.
typedef struct assessment_interfaces__msg__Zone__Sequence
{
  assessment_interfaces__msg__Zone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assessment_interfaces__msg__Zone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__STRUCT_H_
