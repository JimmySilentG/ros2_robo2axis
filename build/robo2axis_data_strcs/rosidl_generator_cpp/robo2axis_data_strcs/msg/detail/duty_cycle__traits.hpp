// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo2axis_data_strcs:msg/DutyCycle.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__TRAITS_HPP_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robo2axis_data_strcs/msg/detail/duty_cycle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robo2axis_data_strcs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DutyCycle & msg,
  std::ostream & out)
{
  out << "{";
  // member: dcpercent
  {
    out << "dcpercent: ";
    rosidl_generator_traits::value_to_yaml(msg.dcpercent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DutyCycle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dcpercent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcpercent: ";
    rosidl_generator_traits::value_to_yaml(msg.dcpercent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DutyCycle & msg, bool use_flow_style = false)
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
  const robo2axis_data_strcs::msg::DutyCycle & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo2axis_data_strcs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo2axis_data_strcs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robo2axis_data_strcs::msg::DutyCycle & msg)
{
  return robo2axis_data_strcs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robo2axis_data_strcs::msg::DutyCycle>()
{
  return "robo2axis_data_strcs::msg::DutyCycle";
}

template<>
inline const char * name<robo2axis_data_strcs::msg::DutyCycle>()
{
  return "robo2axis_data_strcs/msg/DutyCycle";
}

template<>
struct has_fixed_size<robo2axis_data_strcs::msg::DutyCycle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo2axis_data_strcs::msg::DutyCycle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo2axis_data_strcs::msg::DutyCycle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__TRAITS_HPP_
