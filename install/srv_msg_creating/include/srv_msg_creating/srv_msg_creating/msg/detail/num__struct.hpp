// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srv_msg_creating:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef SRV_MSG_CREATING__MSG__DETAIL__NUM__STRUCT_HPP_
#define SRV_MSG_CREATING__MSG__DETAIL__NUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__srv_msg_creating__msg__Num __attribute__((deprecated))
#else
# define DEPRECATED__srv_msg_creating__msg__Num __declspec(deprecated)
#endif

namespace srv_msg_creating
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Num_
{
  using Type = Num_<ContainerAllocator>;

  explicit Num_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
    }
  }

  explicit Num_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;
  using _c_type =
    int64_t;
  _c_type c;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int64_t & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_msg_creating::msg::Num_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_msg_creating::msg::Num_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_msg_creating::msg::Num_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_msg_creating::msg::Num_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_msg_creating::msg::Num_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_msg_creating::msg::Num_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_msg_creating::msg::Num_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_msg_creating::msg::Num_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_msg_creating::msg::Num_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_msg_creating::msg::Num_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_msg_creating__msg__Num
    std::shared_ptr<srv_msg_creating::msg::Num_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_msg_creating__msg__Num
    std::shared_ptr<srv_msg_creating::msg::Num_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Num_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const Num_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Num_

// alias to use template instance with default allocator
using Num =
  srv_msg_creating::msg::Num_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace srv_msg_creating

#endif  // SRV_MSG_CREATING__MSG__DETAIL__NUM__STRUCT_HPP_
