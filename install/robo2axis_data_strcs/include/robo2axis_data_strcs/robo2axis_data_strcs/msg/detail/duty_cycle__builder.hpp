// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo2axis_data_strcs:msg/DutyCycle.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__BUILDER_HPP_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robo2axis_data_strcs/msg/detail/duty_cycle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robo2axis_data_strcs
{

namespace msg
{

namespace builder
{

class Init_DutyCycle_dcpercent
{
public:
  Init_DutyCycle_dcpercent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo2axis_data_strcs::msg::DutyCycle dcpercent(::robo2axis_data_strcs::msg::DutyCycle::_dcpercent_type arg)
  {
    msg_.dcpercent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo2axis_data_strcs::msg::DutyCycle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo2axis_data_strcs::msg::DutyCycle>()
{
  return robo2axis_data_strcs::msg::builder::Init_DutyCycle_dcpercent();
}

}  // namespace robo2axis_data_strcs

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__BUILDER_HPP_
