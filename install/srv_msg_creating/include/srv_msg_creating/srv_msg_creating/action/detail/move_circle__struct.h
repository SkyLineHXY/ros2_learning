// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv_msg_creating:action/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_
#define SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package srv_msg_creating.
typedef struct srv_msg_creating__action__MoveCircle_Goal
{
  bool enable;
} srv_msg_creating__action__MoveCircle_Goal;

// Struct for a sequence of srv_msg_creating__action__MoveCircle_Goal.
typedef struct srv_msg_creating__action__MoveCircle_Goal__Sequence
{
  srv_msg_creating__action__MoveCircle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__action__MoveCircle_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package srv_msg_creating.
typedef struct srv_msg_creating__action__MoveCircle_Result
{
  bool finish;
} srv_msg_creating__action__MoveCircle_Result;

// Struct for a sequence of srv_msg_creating__action__MoveCircle_Result.
typedef struct srv_msg_creating__action__MoveCircle_Result__Sequence
{
  srv_msg_creating__action__MoveCircle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__action__MoveCircle_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package srv_msg_creating.
typedef struct srv_msg_creating__action__MoveCircle_Feedback
{
  int32_t state;
} srv_msg_creating__action__MoveCircle_Feedback;

// Struct for a sequence of srv_msg_creating__action__MoveCircle_Feedback.
typedef struct srv_msg_creating__action__MoveCircle_Feedback__Sequence
{
  srv_msg_creating__action__MoveCircle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__action__MoveCircle_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "srv_msg_creating/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package srv_msg_creating.
typedef struct srv_msg_creating__action__MoveCircle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  srv_msg_creating__action__MoveCircle_Goal goal;
} srv_msg_creating__action__MoveCircle_SendGoal_Request;

// Struct for a sequence of srv_msg_creating__action__MoveCircle_SendGoal_Request.
typedef struct srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence
{
  srv_msg_creating__action__MoveCircle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveCircle in the package srv_msg_creating.
typedef struct srv_msg_creating__action__MoveCircle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} srv_msg_creating__action__MoveCircle_SendGoal_Response;

// Struct for a sequence of srv_msg_creating__action__MoveCircle_SendGoal_Response.
typedef struct srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence
{
  srv_msg_creating__action__MoveCircle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveCircle in the package srv_msg_creating.
typedef struct srv_msg_creating__action__MoveCircle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} srv_msg_creating__action__MoveCircle_GetResult_Request;

// Struct for a sequence of srv_msg_creating__action__MoveCircle_GetResult_Request.
typedef struct srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence
{
  srv_msg_creating__action__MoveCircle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "srv_msg_creating/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package srv_msg_creating.
typedef struct srv_msg_creating__action__MoveCircle_GetResult_Response
{
  int8_t status;
  srv_msg_creating__action__MoveCircle_Result result;
} srv_msg_creating__action__MoveCircle_GetResult_Response;

// Struct for a sequence of srv_msg_creating__action__MoveCircle_GetResult_Response.
typedef struct srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence
{
  srv_msg_creating__action__MoveCircle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "srv_msg_creating/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package srv_msg_creating.
typedef struct srv_msg_creating__action__MoveCircle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  srv_msg_creating__action__MoveCircle_Feedback feedback;
} srv_msg_creating__action__MoveCircle_FeedbackMessage;

// Struct for a sequence of srv_msg_creating__action__MoveCircle_FeedbackMessage.
typedef struct srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence
{
  srv_msg_creating__action__MoveCircle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_
