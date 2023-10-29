// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robo2axis_data_strcs:msg/EncoderCounts.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__FUNCTIONS_H_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robo2axis_data_strcs/msg/rosidl_generator_c__visibility_control.h"

#include "robo2axis_data_strcs/msg/detail/encoder_counts__struct.h"

/// Initialize msg/EncoderCounts message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo2axis_data_strcs__msg__EncoderCounts
 * )) before or use
 * robo2axis_data_strcs__msg__EncoderCounts__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
bool
robo2axis_data_strcs__msg__EncoderCounts__init(robo2axis_data_strcs__msg__EncoderCounts * msg);

/// Finalize msg/EncoderCounts message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
void
robo2axis_data_strcs__msg__EncoderCounts__fini(robo2axis_data_strcs__msg__EncoderCounts * msg);

/// Create msg/EncoderCounts message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo2axis_data_strcs__msg__EncoderCounts__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
robo2axis_data_strcs__msg__EncoderCounts *
robo2axis_data_strcs__msg__EncoderCounts__create();

/// Destroy msg/EncoderCounts message.
/**
 * It calls
 * robo2axis_data_strcs__msg__EncoderCounts__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
void
robo2axis_data_strcs__msg__EncoderCounts__destroy(robo2axis_data_strcs__msg__EncoderCounts * msg);

/// Check for msg/EncoderCounts message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
bool
robo2axis_data_strcs__msg__EncoderCounts__are_equal(const robo2axis_data_strcs__msg__EncoderCounts * lhs, const robo2axis_data_strcs__msg__EncoderCounts * rhs);

/// Copy a msg/EncoderCounts message.
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
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
bool
robo2axis_data_strcs__msg__EncoderCounts__copy(
  const robo2axis_data_strcs__msg__EncoderCounts * input,
  robo2axis_data_strcs__msg__EncoderCounts * output);

/// Initialize array of msg/EncoderCounts messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo2axis_data_strcs__msg__EncoderCounts__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
bool
robo2axis_data_strcs__msg__EncoderCounts__Sequence__init(robo2axis_data_strcs__msg__EncoderCounts__Sequence * array, size_t size);

/// Finalize array of msg/EncoderCounts messages.
/**
 * It calls
 * robo2axis_data_strcs__msg__EncoderCounts__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
void
robo2axis_data_strcs__msg__EncoderCounts__Sequence__fini(robo2axis_data_strcs__msg__EncoderCounts__Sequence * array);

/// Create array of msg/EncoderCounts messages.
/**
 * It allocates the memory for the array and calls
 * robo2axis_data_strcs__msg__EncoderCounts__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
robo2axis_data_strcs__msg__EncoderCounts__Sequence *
robo2axis_data_strcs__msg__EncoderCounts__Sequence__create(size_t size);

/// Destroy array of msg/EncoderCounts messages.
/**
 * It calls
 * robo2axis_data_strcs__msg__EncoderCounts__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
void
robo2axis_data_strcs__msg__EncoderCounts__Sequence__destroy(robo2axis_data_strcs__msg__EncoderCounts__Sequence * array);

/// Check for msg/EncoderCounts message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
bool
robo2axis_data_strcs__msg__EncoderCounts__Sequence__are_equal(const robo2axis_data_strcs__msg__EncoderCounts__Sequence * lhs, const robo2axis_data_strcs__msg__EncoderCounts__Sequence * rhs);

/// Copy an array of msg/EncoderCounts messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robo2axis_data_strcs
bool
robo2axis_data_strcs__msg__EncoderCounts__Sequence__copy(
  const robo2axis_data_strcs__msg__EncoderCounts__Sequence * input,
  robo2axis_data_strcs__msg__EncoderCounts__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__FUNCTIONS_H_
