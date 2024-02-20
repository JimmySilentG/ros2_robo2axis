// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo2axis_data_strcs:msg/DutyCycle.idl
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__STRUCT_HPP_
#define ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robo2axis_data_strcs__msg__DutyCycle __attribute__((deprecated))
#else
# define DEPRECATED__robo2axis_data_strcs__msg__DutyCycle __declspec(deprecated)
#endif

namespace robo2axis_data_strcs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DutyCycle_
{
  using Type = DutyCycle_<ContainerAllocator>;

  explicit DutyCycle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dcpercent = 0.0f;
    }
  }

  explicit DutyCycle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dcpercent = 0.0f;
    }
  }

  // field types and members
  using _dcpercent_type =
    float;
  _dcpercent_type dcpercent;

  // setters for named parameter idiom
  Type & set__dcpercent(
    const float & _arg)
  {
    this->dcpercent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo2axis_data_strcs__msg__DutyCycle
    std::shared_ptr<robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo2axis_data_strcs__msg__DutyCycle
    std::shared_ptr<robo2axis_data_strcs::msg::DutyCycle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DutyCycle_ & other) const
  {
    if (this->dcpercent != other.dcpercent) {
      return false;
    }
    return true;
  }
  bool operator!=(const DutyCycle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DutyCycle_

// alias to use template instance with default allocator
using DutyCycle =
  robo2axis_data_strcs::msg::DutyCycle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robo2axis_data_strcs

#endif  // ROBO2AXIS_DATA_STRCS__MSG__DETAIL__DUTY_CYCLE__STRUCT_HPP_
