// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_msg_creating:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef SRV_MSG_CREATING__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define SRV_MSG_CREATING__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srv_msg_creating/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srv_msg_creating
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::srv_msg_creating::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::srv_msg_creating::srv::AddThreeInts_Request c(::srv_msg_creating::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::srv_msg_creating::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::srv_msg_creating::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::srv_msg_creating::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::srv_msg_creating::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::srv_msg_creating::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::srv::AddThreeInts_Request>()
{
  return srv_msg_creating::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace srv_msg_creating


namespace srv_msg_creating
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_msg_creating::srv::AddThreeInts_Response sum(::srv_msg_creating::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::srv::AddThreeInts_Response>()
{
  return srv_msg_creating::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace srv_msg_creating

#endif  // SRV_MSG_CREATING__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
