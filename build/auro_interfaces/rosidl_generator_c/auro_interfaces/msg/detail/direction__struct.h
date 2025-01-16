// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auro_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_H_
#define AURO_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LEFT'.
enum
{
  auro_interfaces__msg__Direction__LEFT = 0
};

/// Constant 'RIGHT'.
enum
{
  auro_interfaces__msg__Direction__RIGHT = 1
};

/// Constant 'FRONT'.
enum
{
  auro_interfaces__msg__Direction__FRONT = 2
};

/// Constant 'BACK'.
enum
{
  auro_interfaces__msg__Direction__BACK = 3
};

/// Struct defined in msg/Direction in the package auro_interfaces.
typedef struct auro_interfaces__msg__Direction
{
  uint8_t direction;
} auro_interfaces__msg__Direction;

// Struct for a sequence of auro_interfaces__msg__Direction.
typedef struct auro_interfaces__msg__Direction__Sequence
{
  auro_interfaces__msg__Direction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auro_interfaces__msg__Direction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AURO_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_H_
