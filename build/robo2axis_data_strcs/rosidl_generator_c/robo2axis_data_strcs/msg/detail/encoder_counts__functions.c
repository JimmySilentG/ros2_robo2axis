// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo2axis_data_strcs:msg/EncoderCounts.idl
// generated code does not contain a copyright notice
#include "robo2axis_data_strcs/msg/detail/encoder_counts__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robo2axis_data_strcs__msg__EncoderCounts__init(robo2axis_data_strcs__msg__EncoderCounts * msg)
{
  if (!msg) {
    return false;
  }
  // axis1
  // axis2
  return true;
}

void
robo2axis_data_strcs__msg__EncoderCounts__fini(robo2axis_data_strcs__msg__EncoderCounts * msg)
{
  if (!msg) {
    return;
  }
  // axis1
  // axis2
}

bool
robo2axis_data_strcs__msg__EncoderCounts__are_equal(const robo2axis_data_strcs__msg__EncoderCounts * lhs, const robo2axis_data_strcs__msg__EncoderCounts * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // axis1
  if (lhs->axis1 != rhs->axis1) {
    return false;
  }
  // axis2
  if (lhs->axis2 != rhs->axis2) {
    return false;
  }
  return true;
}

bool
robo2axis_data_strcs__msg__EncoderCounts__copy(
  const robo2axis_data_strcs__msg__EncoderCounts * input,
  robo2axis_data_strcs__msg__EncoderCounts * output)
{
  if (!input || !output) {
    return false;
  }
  // axis1
  output->axis1 = input->axis1;
  // axis2
  output->axis2 = input->axis2;
  return true;
}

robo2axis_data_strcs__msg__EncoderCounts *
robo2axis_data_strcs__msg__EncoderCounts__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo2axis_data_strcs__msg__EncoderCounts * msg = (robo2axis_data_strcs__msg__EncoderCounts *)allocator.allocate(sizeof(robo2axis_data_strcs__msg__EncoderCounts), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo2axis_data_strcs__msg__EncoderCounts));
  bool success = robo2axis_data_strcs__msg__EncoderCounts__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo2axis_data_strcs__msg__EncoderCounts__destroy(robo2axis_data_strcs__msg__EncoderCounts * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo2axis_data_strcs__msg__EncoderCounts__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo2axis_data_strcs__msg__EncoderCounts__Sequence__init(robo2axis_data_strcs__msg__EncoderCounts__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo2axis_data_strcs__msg__EncoderCounts * data = NULL;

  if (size) {
    data = (robo2axis_data_strcs__msg__EncoderCounts *)allocator.zero_allocate(size, sizeof(robo2axis_data_strcs__msg__EncoderCounts), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo2axis_data_strcs__msg__EncoderCounts__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo2axis_data_strcs__msg__EncoderCounts__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robo2axis_data_strcs__msg__EncoderCounts__Sequence__fini(robo2axis_data_strcs__msg__EncoderCounts__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo2axis_data_strcs__msg__EncoderCounts__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robo2axis_data_strcs__msg__EncoderCounts__Sequence *
robo2axis_data_strcs__msg__EncoderCounts__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo2axis_data_strcs__msg__EncoderCounts__Sequence * array = (robo2axis_data_strcs__msg__EncoderCounts__Sequence *)allocator.allocate(sizeof(robo2axis_data_strcs__msg__EncoderCounts__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo2axis_data_strcs__msg__EncoderCounts__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo2axis_data_strcs__msg__EncoderCounts__Sequence__destroy(robo2axis_data_strcs__msg__EncoderCounts__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo2axis_data_strcs__msg__EncoderCounts__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo2axis_data_strcs__msg__EncoderCounts__Sequence__are_equal(const robo2axis_data_strcs__msg__EncoderCounts__Sequence * lhs, const robo2axis_data_strcs__msg__EncoderCounts__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo2axis_data_strcs__msg__EncoderCounts__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo2axis_data_strcs__msg__EncoderCounts__Sequence__copy(
  const robo2axis_data_strcs__msg__EncoderCounts__Sequence * input,
  robo2axis_data_strcs__msg__EncoderCounts__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robo2axis_data_strcs__msg__EncoderCounts);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo2axis_data_strcs__msg__EncoderCounts * data =
      (robo2axis_data_strcs__msg__EncoderCounts *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo2axis_data_strcs__msg__EncoderCounts__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo2axis_data_strcs__msg__EncoderCounts__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo2axis_data_strcs__msg__EncoderCounts__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
