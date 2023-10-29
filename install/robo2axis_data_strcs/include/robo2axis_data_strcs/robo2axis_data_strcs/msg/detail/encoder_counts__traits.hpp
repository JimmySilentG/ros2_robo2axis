// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo2axis_data_strcs:msg/EncoderCounts.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__TRAITS_HPP_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robo2axis_data_strcs/msg/detail/encoder_counts__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robo2axis_data_strcs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EncoderCounts & msg,
  std::ostream & out)
{
  out << "{";
  // member: axis1
  {
    out << "axis1: ";
    rosidl_generator_traits::value_to_yaml(msg.axis1, out);
    out << ", ";
  }

  // member: axis2
  {
    out << "axis2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncoderCounts & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: axis1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis1: ";
    rosidl_generator_traits::value_to_yaml(msg.axis1, out);
    out << "\n";
  }

  // member: axis2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncoderCounts & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robo2axis_data_strcs

namespace rosidl_generator_traits
{

[[deprecated("use robo2axis_data_strcs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robo2axis_data_strcs::msg::EncoderCounts & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo2axis_data_strcs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo2axis_data_strcs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robo2axis_data_strcs::msg::EncoderCounts & msg)
{
  return robo2axis_data_strcs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robo2axis_data_strcs::msg::EncoderCounts>()
{
  return "robo2axis_data_strcs::msg::EncoderCounts";
}

template<>
inline const char * name<robo2axis_data_strcs::msg::EncoderCounts>()
{
  return "robo2axis_data_strcs/msg/EncoderCounts";
}

template<>
struct has_fixed_size<robo2axis_data_strcs::msg::EncoderCounts>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo2axis_data_strcs::msg::EncoderCounts>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo2axis_data_strcs::msg::EncoderCounts>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__TRAITS_HPP_
