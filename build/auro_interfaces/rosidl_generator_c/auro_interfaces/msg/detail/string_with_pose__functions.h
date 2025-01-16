// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from auro_interfaces:msg/StringWithPose.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__FUNCTIONS_H_
#define AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "auro_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "auro_interfaces/msg/detail/string_with_pose__struct.h"

/// Initialize msg/StringWithPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * auro_interfaces__msg__StringWithPose
 * )) before or use
 * auro_interfaces__msg__StringWithPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
bool
auro_interfaces__msg__StringWithPose__init(auro_interfaces__msg__StringWithPose * msg);

/// Finalize msg/StringWithPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
void
auro_interfaces__msg__StringWithPose__fini(auro_interfaces__msg__StringWithPose * msg);

/// Create msg/StringWithPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * auro_interfaces__msg__StringWithPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
auro_interfaces__msg__StringWithPose *
auro_interfaces__msg__StringWithPose__create();

/// Destroy msg/StringWithPose message.
/**
 * It calls
 * auro_interfaces__msg__StringWithPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
void
auro_interfaces__msg__StringWithPose__destroy(auro_interfaces__msg__StringWithPose * msg);

/// Check for msg/StringWithPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
bool
auro_interfaces__msg__StringWithPose__are_equal(const auro_interfaces__msg__StringWithPose * lhs, const auro_interfaces__msg__StringWithPose * rhs);

/// Copy a msg/StringWithPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
bool
auro_interfaces__msg__StringWithPose__copy(
  const auro_interfaces__msg__StringWithPose * input,
  auro_interfaces__msg__StringWithPose * output);

/// Initialize array of msg/StringWithPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * auro_interfaces__msg__StringWithPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
bool
auro_interfaces__msg__StringWithPose__Sequence__init(auro_interfaces__msg__StringWithPose__Sequence * array, size_t size);

/// Finalize array of msg/StringWithPose messages.
/**
 * It calls
 * auro_interfaces__msg__StringWithPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
void
auro_interfaces__msg__StringWithPose__Sequence__fini(auro_interfaces__msg__StringWithPose__Sequence * array);

/// Create array of msg/StringWithPose messages.
/**
 * It allocates the memory for the array and calls
 * auro_interfaces__msg__StringWithPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
auro_interfaces__msg__StringWithPose__Sequence *
auro_interfaces__msg__StringWithPose__Sequence__create(size_t size);

/// Destroy array of msg/StringWithPose messages.
/**
 * It calls
 * auro_interfaces__msg__StringWithPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
void
auro_interfaces__msg__StringWithPose__Sequence__destroy(auro_interfaces__msg__StringWithPose__Sequence * array);

/// Check for msg/StringWithPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
bool
auro_interfaces__msg__StringWithPose__Sequence__are_equal(const auro_interfaces__msg__StringWithPose__Sequence * lhs, const auro_interfaces__msg__StringWithPose__Sequence * rhs);

/// Copy an array of msg/StringWithPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_auro_interfaces
bool
auro_interfaces__msg__StringWithPose__Sequence__copy(
  const auro_interfaces__msg__StringWithPose__Sequence * input,
  auro_interfaces__msg__StringWithPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__FUNCTIONS_H_
