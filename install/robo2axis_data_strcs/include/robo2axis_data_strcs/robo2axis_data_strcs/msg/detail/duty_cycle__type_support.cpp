// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robo2axis_data_strcs:msg/DutyCycle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robo2axis_data_strcs/msg/detail/duty_cycle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robo2axis_data_strcs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DutyCycle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robo2axis_data_strcs::msg::DutyCycle(_init);
}

void DutyCycle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robo2axis_data_strcs::msg::DutyCycle *>(message_memory);
  typed_message->~DutyCycle();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DutyCycle_message_member_array[1] = {
  {
    "dcpercent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo2axis_data_strcs::msg::DutyCycle, dcpercent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DutyCycle_message_members = {
  "robo2axis_data_strcs::msg",  // message namespace
  "DutyCycle",  // message name
  1,  // number of fields
  sizeof(robo2axis_data_strcs::msg::DutyCycle),
  DutyCycle_message_member_array,  // message members
  DutyCycle_init_function,  // function to initialize message memory (memory has to be allocated)
  DutyCycle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DutyCycle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DutyCycle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robo2axis_data_strcs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robo2axis_data_strcs::msg::DutyCycle>()
{
  return &::robo2axis_data_strcs::msg::rosidl_typesupport_introspection_cpp::DutyCycle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robo2axis_data_strcs, msg, DutyCycle)() {
  return &::robo2axis_data_strcs::msg::rosidl_typesupport_introspection_cpp::DutyCycle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
