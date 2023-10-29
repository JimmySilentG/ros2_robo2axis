// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo2axis_data_strcs:msg/EncoderCounts.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__STRUCT_HPP_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robo2axis_data_strcs__msg__EncoderCounts __attribute__((deprecated))
#else
# define DEPRECATED__robo2axis_data_strcs__msg__EncoderCounts __declspec(deprecated)
#endif

namespace robo2axis_data_strcs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncoderCounts_
{
  using Type = EncoderCounts_<ContainerAllocator>;

  explicit EncoderCounts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis1 = 0l;
      this->axis2 = 0l;
    }
  }

  explicit EncoderCounts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis1 = 0l;
      this->axis2 = 0l;
    }
  }

  // field types and members
  using _axis1_type =
    int32_t;
  _axis1_type axis1;
  using _axis2_type =
    int32_t;
  _axis2_type axis2;

  // setters for named parameter idiom
  Type & set__axis1(
    const int32_t & _arg)
  {
    this->axis1 = _arg;
    return *this;
  }
  Type & set__axis2(
    const int32_t & _arg)
  {
    this->axis2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo2axis_data_strcs__msg__EncoderCounts
    std::shared_ptr<robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo2axis_data_strcs__msg__EncoderCounts
    std::shared_ptr<robo2axis_data_strcs::msg::EncoderCounts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncoderCounts_ & other) const
  {
    if (this->axis1 != other.axis1) {
      return false;
    }
    if (this->axis2 != other.axis2) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncoderCounts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncoderCounts_

// alias to use template instance with default allocator
using EncoderCounts =
  robo2axis_data_strcs::msg::EncoderCounts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robo2axis_data_strcs

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__ENCODER_COUNTS__STRUCT_HPP_
