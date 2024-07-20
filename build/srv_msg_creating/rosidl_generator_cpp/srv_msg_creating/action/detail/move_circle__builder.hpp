// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_msg_creating:action/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__BUILDER_HPP_
#define SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srv_msg_creating/action/detail/move_circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srv_msg_creating
{

namespace action
{

namespace builder
{

class Init_MoveCircle_Goal_enable
{
public:
  Init_MoveCircle_Goal_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_msg_creating::action::MoveCircle_Goal enable(::srv_msg_creating::action::MoveCircle_Goal::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::action::MoveCircle_Goal>()
{
  return srv_msg_creating::action::builder::Init_MoveCircle_Goal_enable();
}

}  // namespace srv_msg_creating


namespace srv_msg_creating
{

namespace action
{

namespace builder
{

class Init_MoveCircle_Result_finish
{
public:
  Init_MoveCircle_Result_finish()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_msg_creating::action::MoveCircle_Result finish(::srv_msg_creating::action::MoveCircle_Result::_finish_type arg)
  {
    msg_.finish = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::action::MoveCircle_Result>()
{
  return srv_msg_creating::action::builder::Init_MoveCircle_Result_finish();
}

}  // namespace srv_msg_creating


namespace srv_msg_creating
{

namespace action
{

namespace builder
{

class Init_MoveCircle_Feedback_state
{
public:
  Init_MoveCircle_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_msg_creating::action::MoveCircle_Feedback state(::srv_msg_creating::action::MoveCircle_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::action::MoveCircle_Feedback>()
{
  return srv_msg_creating::action::builder::Init_MoveCircle_Feedback_state();
}

}  // namespace srv_msg_creating


namespace srv_msg_creating
{

namespace action
{

namespace builder
{

class Init_MoveCircle_SendGoal_Request_goal
{
public:
  explicit Init_MoveCircle_SendGoal_Request_goal(::srv_msg_creating::action::MoveCircle_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::srv_msg_creating::action::MoveCircle_SendGoal_Request goal(::srv_msg_creating::action::MoveCircle_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_SendGoal_Request msg_;
};

class Init_MoveCircle_SendGoal_Request_goal_id
{
public:
  Init_MoveCircle_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_SendGoal_Request_goal goal_id(::srv_msg_creating::action::MoveCircle_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveCircle_SendGoal_Request_goal(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::action::MoveCircle_SendGoal_Request>()
{
  return srv_msg_creating::action::builder::Init_MoveCircle_SendGoal_Request_goal_id();
}

}  // namespace srv_msg_creating


namespace srv_msg_creating
{

namespace action
{

namespace builder
{

class Init_MoveCircle_SendGoal_Response_stamp
{
public:
  explicit Init_MoveCircle_SendGoal_Response_stamp(::srv_msg_creating::action::MoveCircle_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::srv_msg_creating::action::MoveCircle_SendGoal_Response stamp(::srv_msg_creating::action::MoveCircle_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_SendGoal_Response msg_;
};

class Init_MoveCircle_SendGoal_Response_accepted
{
public:
  Init_MoveCircle_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_SendGoal_Response_stamp accepted(::srv_msg_creating::action::MoveCircle_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveCircle_SendGoal_Response_stamp(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::action::MoveCircle_SendGoal_Response>()
{
  return srv_msg_creating::action::builder::Init_MoveCircle_SendGoal_Response_accepted();
}

}  // namespace srv_msg_creating


namespace srv_msg_creating
{

namespace action
{

namespace builder
{

class Init_MoveCircle_GetResult_Request_goal_id
{
public:
  Init_MoveCircle_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_msg_creating::action::MoveCircle_GetResult_Request goal_id(::srv_msg_creating::action::MoveCircle_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::action::MoveCircle_GetResult_Request>()
{
  return srv_msg_creating::action::builder::Init_MoveCircle_GetResult_Request_goal_id();
}

}  // namespace srv_msg_creating


namespace srv_msg_creating
{

namespace action
{

namespace builder
{

class Init_MoveCircle_GetResult_Response_result
{
public:
  explicit Init_MoveCircle_GetResult_Response_result(::srv_msg_creating::action::MoveCircle_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::srv_msg_creating::action::MoveCircle_GetResult_Response result(::srv_msg_creating::action::MoveCircle_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_GetResult_Response msg_;
};

class Init_MoveCircle_GetResult_Response_status
{
public:
  Init_MoveCircle_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_GetResult_Response_result status(::srv_msg_creating::action::MoveCircle_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveCircle_GetResult_Response_result(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::action::MoveCircle_GetResult_Response>()
{
  return srv_msg_creating::action::builder::Init_MoveCircle_GetResult_Response_status();
}

}  // namespace srv_msg_creating


namespace srv_msg_creating
{

namespace action
{

namespace builder
{

class Init_MoveCircle_FeedbackMessage_feedback
{
public:
  explicit Init_MoveCircle_FeedbackMessage_feedback(::srv_msg_creating::action::MoveCircle_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::srv_msg_creating::action::MoveCircle_FeedbackMessage feedback(::srv_msg_creating::action::MoveCircle_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_FeedbackMessage msg_;
};

class Init_MoveCircle_FeedbackMessage_goal_id
{
public:
  Init_MoveCircle_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_FeedbackMessage_feedback goal_id(::srv_msg_creating::action::MoveCircle_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveCircle_FeedbackMessage_feedback(msg_);
  }

private:
  ::srv_msg_creating::action::MoveCircle_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_msg_creating::action::MoveCircle_FeedbackMessage>()
{
  return srv_msg_creating::action::builder::Init_MoveCircle_FeedbackMessage_goal_id();
}

}  // namespace srv_msg_creating

#endif  // SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__BUILDER_HPP_
