// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robo2axis_data_strcs:msg/EncoderCounts.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robo2axis_data_strcs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robo2axis_data_strcs/msg/detail/encoder_counts__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robo2axis_data_strcs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo2axis_data_strcs
cdr_serialize(
  const robo2axis_data_strcs::msg::EncoderCounts & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo2axis_data_strcs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo2axis_data_strcs::msg::EncoderCounts & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo2axis_data_strcs
get_serialized_size(
  const robo2axis_data_strcs::msg::EncoderCounts & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo2axis_data_strcs
max_serialized_size_EncoderCounts(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robo2axis_data_strcs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo2axis_data_strcs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo2axis_data_strcs, msg, EncoderCounts)();

#ifdef __cplusplus
}
#endif

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
