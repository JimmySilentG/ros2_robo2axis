// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo2axis_data_strcs:msg/DutyCycle.idl
// generated code does not contain a copyright notice
#include "robo2axis_data_strcs/msg/detail/duty_cycle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robo2axis_data_strcs__msg__DutyCycle__init(robo2axis_data_strcs__msg__DutyCycle * msg)
{
  if (!msg) {
    return false;
  }
  // dcpercent
  return true;
}

void
robo2axis_data_strcs__msg__DutyCycle__fini(robo2axis_data_strcs__msg__DutyCycle * msg)
{
  if (!msg) {
    return;
  }
  // dcpercent
}

bool
robo2axis_data_strcs__msg__DutyCycle__are_equal(const robo2axis_data_strcs__msg__DutyCycle * lhs, const robo2axis_data_strcs__msg__DutyCycle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dcpercent
  if (lhs->dcpercent != rhs->dcpercent) {
    return false;
  }
  return true;
}

bool
robo2axis_data_strcs__msg__DutyCycle__copy(
  const robo2axis_data_strcs__msg__DutyCycle * input,
  robo2axis_data_strcs__msg__DutyCycle * output)
{
  if (!input || !output) {
    return false;
  }
  // dcpercent
  output->dcpercent = input->dcpercent;
  return true;
}

robo2axis_data_strcs__msg__DutyCycle *
robo2axis_data_strcs__msg__DutyCycle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo2axis_data_strcs__msg__DutyCycle * msg = (robo2axis_data_strcs__msg__DutyCycle *)allocator.allocate(sizeof(robo2axis_data_strcs__msg__DutyCycle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo2axis_data_strcs__msg__DutyCycle));
  bool success = robo2axis_data_strcs__msg__DutyCycle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo2axis_data_strcs__msg__DutyCycle__destroy(robo2axis_data_strcs__msg__DutyCycle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo2axis_data_strcs__msg__DutyCycle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo2axis_data_strcs__msg__DutyCycle__Sequence__init(robo2axis_data_strcs__msg__DutyCycle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo2axis_data_strcs__msg__DutyCycle * data = NULL;

  if (size) {
    data = (robo2axis_data_strcs__msg__DutyCycle *)allocator.zero_allocate(size, sizeof(robo2axis_data_strcs__msg__DutyCycle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo2axis_data_strcs__msg__DutyCycle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo2axis_data_strcs__msg__DutyCycle__fini(&data[i - 1]);
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
robo2axis_data_strcs__msg__DutyCycle__Sequence__fini(robo2axis_data_strcs__msg__DutyCycle__Sequence * array)
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
      robo2axis_data_strcs__msg__DutyCycle__fini(&array->data[i]);
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

robo2axis_data_strcs__msg__DutyCycle__Sequence *
robo2axis_data_strcs__msg__DutyCycle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo2axis_data_strcs__msg__DutyCycle__Sequence * array = (robo2axis_data_strcs__msg__DutyCycle__Sequence *)allocator.allocate(sizeof(robo2axis_data_strcs__msg__DutyCycle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo2axis_data_strcs__msg__DutyCycle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo2axis_data_strcs__msg__DutyCycle__Sequence__destroy(robo2axis_data_strcs__msg__DutyCycle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo2axis_data_strcs__msg__DutyCycle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo2axis_data_strcs__msg__DutyCycle__Sequence__are_equal(const robo2axis_data_strcs__msg__DutyCycle__Sequence * lhs, const robo2axis_data_strcs__msg__DutyCycle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo2axis_data_strcs__msg__DutyCycle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo2axis_data_strcs__msg__DutyCycle__Sequence__copy(
  const robo2axis_data_strcs__msg__DutyCycle__Sequence * input,
  robo2axis_data_strcs__msg__DutyCycle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robo2axis_data_strcs__msg__DutyCycle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo2axis_data_strcs__msg__DutyCycle * data =
      (robo2axis_data_strcs__msg__DutyCycle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo2axis_data_strcs__msg__DutyCycle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo2axis_data_strcs__msg__DutyCycle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo2axis_data_strcs__msg__DutyCycle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
