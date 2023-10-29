// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo2axis_data_strcs:msg/EncoderCounts.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__BUILDER_HPP_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robo2axis_data_strcs/msg/detail/encoder_counts__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robo2axis_data_strcs
{

namespace msg
{

namespace builder
{

class Init_EncoderCounts_axis2
{
public:
  explicit Init_EncoderCounts_axis2(::robo2axis_data_strcs::msg::EncoderCounts & msg)
  : msg_(msg)
  {}
  ::robo2axis_data_strcs::msg::EncoderCounts axis2(::robo2axis_data_strcs::msg::EncoderCounts::_axis2_type arg)
  {
    msg_.axis2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo2axis_data_strcs::msg::EncoderCounts msg_;
};

class Init_EncoderCounts_axis1
{
public:
  Init_EncoderCounts_axis1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncoderCounts_axis2 axis1(::robo2axis_data_strcs::msg::EncoderCounts::_axis1_type arg)
  {
    msg_.axis1 = std::move(arg);
    return Init_EncoderCounts_axis2(msg_);
  }

private:
  ::robo2axis_data_strcs::msg::EncoderCounts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo2axis_data_strcs::msg::EncoderCounts>()
{
  return robo2axis_data_strcs::msg::builder::Init_EncoderCounts_axis1();
}

}  // namespace robo2axis_data_strcs

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__BUILDER_HPP_
