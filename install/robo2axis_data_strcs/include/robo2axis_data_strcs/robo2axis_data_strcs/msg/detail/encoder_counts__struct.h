// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo2axis_data_strcs:msg/EncoderCounts.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__STRUCT_H_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EncoderCounts in the package robo2axis_data_strcs.
typedef struct robo2axis_data_strcs__msg__EncoderCounts
{
  int32_t axis1;
  int32_t axis2;
} robo2axis_data_strcs__msg__EncoderCounts;

// Struct for a sequence of robo2axis_data_strcs__msg__EncoderCounts.
typedef struct robo2axis_data_strcs__msg__EncoderCounts__Sequence
{
  robo2axis_data_strcs__msg__EncoderCounts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo2axis_data_strcs__msg__EncoderCounts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__STRUCT_H_
