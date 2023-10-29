// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo2axis_data_strcs:msg/EncoderCounts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo2axis_data_strcs/msg/detail/encoder_counts__rosidl_typesupport_introspection_c.h"
#include "robo2axis_data_strcs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo2axis_data_strcs/msg/detail/encoder_counts__functions.h"
#include "robo2axis_data_strcs/msg/detail/encoder_counts__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo2axis_data_strcs__msg__EncoderCounts__init(message_memory);
}

void robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_fini_function(void * message_memory)
{
  robo2axis_data_strcs__msg__EncoderCounts__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_message_member_array[2] = {
  {
    "axis1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo2axis_data_strcs__msg__EncoderCounts, axis1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "axis2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo2axis_data_strcs__msg__EncoderCounts, axis2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_message_members = {
  "robo2axis_data_strcs__msg",  // message namespace
  "EncoderCounts",  // message name
  2,  // number of fields
  sizeof(robo2axis_data_strcs__msg__EncoderCounts),
  robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_message_member_array,  // message members
  robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_init_function,  // function to initialize message memory (memory has to be allocated)
  robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_message_type_support_handle = {
  0,
  &robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo2axis_data_strcs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo2axis_data_strcs, msg, EncoderCounts)() {
  if (!robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_message_type_support_handle.typesupport_identifier) {
    robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robo2axis_data_strcs__msg__EncoderCounts__rosidl_typesupport_introspection_c__EncoderCounts_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
