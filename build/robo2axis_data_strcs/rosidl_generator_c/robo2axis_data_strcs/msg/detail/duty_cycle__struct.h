// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo2axis_data_strcs:msg/DutyCycle.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__STRUCT_H_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DutyCycle in the package robo2axis_data_strcs.
typedef struct robo2axis_data_strcs__msg__DutyCycle
{
  int8_t dcpercent;
} robo2axis_data_strcs__msg__DutyCycle;

// Struct for a sequence of robo2axis_data_strcs__msg__DutyCycle.
typedef struct robo2axis_data_strcs__msg__DutyCycle__Sequence
{
  robo2axis_data_strcs__msg__DutyCycle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo2axis_data_strcs__msg__DutyCycle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__STRUCT_H_
