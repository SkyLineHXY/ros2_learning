// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_msg_creating:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef SRV_MSG_CREATING__MSG__DETAIL__NUM__BUILDER_HPP_
#define SRV_MSG_CREATING__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srv_msg_creating/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srv_msg_creating
{

namespace msg
{

namespace builder
{

class Init_Num_c
{
public:
  explicit Init_Num_c(::srv_msg_creating::msg::Num & msg)
  : msg_(msg)
  {}
  ::srv_msg_creating::msg::Num c(::srv_msg_creating::msg::Num::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::msg::Num msg_;
};

class Init_Num_b
{
public:
  explicit Init_Num_b(::srv_msg_creating::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_c b(::srv_msg_creating::msg::Num::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Num_c(msg_);
  }

private:
  ::srv_msg_creating::msg::Num msg_;
};

class Init_Num_a
{
public:
  Init_Num_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_b a(::srv_msg_creating::msg::Num::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Num_b(msg_);
  }

private:
  ::srv_msg_creating::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::msg::Num>()
{
  return srv_msg_creating::msg::builder::Init_Num_a();
}

}  // namespace srv_msg_creating

#endif  // SRV_MSG_CREATING__MSG__DETAIL__NUM__BUILDER_HPP_
