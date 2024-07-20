// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from srv_msg_creating:action/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__FUNCTIONS_H_
#define SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "srv_msg_creating/msg/rosidl_generator_c__visibility_control.h"

#include "srv_msg_creating/action/detail/move_circle__struct.h"

/// Initialize action/MoveCircle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_msg_creating__action__MoveCircle_Goal
 * )) before or use
 * srv_msg_creating__action__MoveCircle_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Goal__init(srv_msg_creating__action__MoveCircle_Goal * msg);

/// Finalize action/MoveCircle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Goal__fini(srv_msg_creating__action__MoveCircle_Goal * msg);

/// Create action/MoveCircle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_msg_creating__action__MoveCircle_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_Goal *
srv_msg_creating__action__MoveCircle_Goal__create();

/// Destroy action/MoveCircle message.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Goal__destroy(srv_msg_creating__action__MoveCircle_Goal * msg);

/// Check for action/MoveCircle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Goal__are_equal(const srv_msg_creating__action__MoveCircle_Goal * lhs, const srv_msg_creating__action__MoveCircle_Goal * rhs);

/// Copy a action/MoveCircle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Goal__copy(
  const srv_msg_creating__action__MoveCircle_Goal * input,
  srv_msg_creating__action__MoveCircle_Goal * output);

/// Initialize array of action/MoveCircle messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_msg_creating__action__MoveCircle_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Goal__Sequence__init(srv_msg_creating__action__MoveCircle_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Goal__Sequence__fini(srv_msg_creating__action__MoveCircle_Goal__Sequence * array);

/// Create array of action/MoveCircle messages.
/**
 * It allocates the memory for the array and calls
 * srv_msg_creating__action__MoveCircle_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_Goal__Sequence *
srv_msg_creating__action__MoveCircle_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Goal__Sequence__destroy(srv_msg_creating__action__MoveCircle_Goal__Sequence * array);

/// Check for action/MoveCircle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Goal__Sequence__are_equal(const srv_msg_creating__action__MoveCircle_Goal__Sequence * lhs, const srv_msg_creating__action__MoveCircle_Goal__Sequence * rhs);

/// Copy an array of action/MoveCircle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Goal__Sequence__copy(
  const srv_msg_creating__action__MoveCircle_Goal__Sequence * input,
  srv_msg_creating__action__MoveCircle_Goal__Sequence * output);

/// Initialize action/MoveCircle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_msg_creating__action__MoveCircle_Result
 * )) before or use
 * srv_msg_creating__action__MoveCircle_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Result__init(srv_msg_creating__action__MoveCircle_Result * msg);

/// Finalize action/MoveCircle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Result__fini(srv_msg_creating__action__MoveCircle_Result * msg);

/// Create action/MoveCircle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_msg_creating__action__MoveCircle_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_Result *
srv_msg_creating__action__MoveCircle_Result__create();

/// Destroy action/MoveCircle message.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Result__destroy(srv_msg_creating__action__MoveCircle_Result * msg);

/// Check for action/MoveCircle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Result__are_equal(const srv_msg_creating__action__MoveCircle_Result * lhs, const srv_msg_creating__action__MoveCircle_Result * rhs);

/// Copy a action/MoveCircle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Result__copy(
  const srv_msg_creating__action__MoveCircle_Result * input,
  srv_msg_creating__action__MoveCircle_Result * output);

/// Initialize array of action/MoveCircle messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_msg_creating__action__MoveCircle_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Result__Sequence__init(srv_msg_creating__action__MoveCircle_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Result__Sequence__fini(srv_msg_creating__action__MoveCircle_Result__Sequence * array);

/// Create array of action/MoveCircle messages.
/**
 * It allocates the memory for the array and calls
 * srv_msg_creating__action__MoveCircle_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_Result__Sequence *
srv_msg_creating__action__MoveCircle_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Result__Sequence__destroy(srv_msg_creating__action__MoveCircle_Result__Sequence * array);

/// Check for action/MoveCircle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Result__Sequence__are_equal(const srv_msg_creating__action__MoveCircle_Result__Sequence * lhs, const srv_msg_creating__action__MoveCircle_Result__Sequence * rhs);

/// Copy an array of action/MoveCircle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Result__Sequence__copy(
  const srv_msg_creating__action__MoveCircle_Result__Sequence * input,
  srv_msg_creating__action__MoveCircle_Result__Sequence * output);

/// Initialize action/MoveCircle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_msg_creating__action__MoveCircle_Feedback
 * )) before or use
 * srv_msg_creating__action__MoveCircle_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Feedback__init(srv_msg_creating__action__MoveCircle_Feedback * msg);

/// Finalize action/MoveCircle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Feedback__fini(srv_msg_creating__action__MoveCircle_Feedback * msg);

/// Create action/MoveCircle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_msg_creating__action__MoveCircle_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_Feedback *
srv_msg_creating__action__MoveCircle_Feedback__create();

/// Destroy action/MoveCircle message.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Feedback__destroy(srv_msg_creating__action__MoveCircle_Feedback * msg);

/// Check for action/MoveCircle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Feedback__are_equal(const srv_msg_creating__action__MoveCircle_Feedback * lhs, const srv_msg_creating__action__MoveCircle_Feedback * rhs);

/// Copy a action/MoveCircle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Feedback__copy(
  const srv_msg_creating__action__MoveCircle_Feedback * input,
  srv_msg_creating__action__MoveCircle_Feedback * output);

/// Initialize array of action/MoveCircle messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_msg_creating__action__MoveCircle_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Feedback__Sequence__init(srv_msg_creating__action__MoveCircle_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Feedback__Sequence__fini(srv_msg_creating__action__MoveCircle_Feedback__Sequence * array);

/// Create array of action/MoveCircle messages.
/**
 * It allocates the memory for the array and calls
 * srv_msg_creating__action__MoveCircle_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_Feedback__Sequence *
srv_msg_creating__action__MoveCircle_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_Feedback__Sequence__destroy(srv_msg_creating__action__MoveCircle_Feedback__Sequence * array);

/// Check for action/MoveCircle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Feedback__Sequence__are_equal(const srv_msg_creating__action__MoveCircle_Feedback__Sequence * lhs, const srv_msg_creating__action__MoveCircle_Feedback__Sequence * rhs);

/// Copy an array of action/MoveCircle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_Feedback__Sequence__copy(
  const srv_msg_creating__action__MoveCircle_Feedback__Sequence * input,
  srv_msg_creating__action__MoveCircle_Feedback__Sequence * output);

/// Initialize action/MoveCircle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_msg_creating__action__MoveCircle_SendGoal_Request
 * )) before or use
 * srv_msg_creating__action__MoveCircle_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Request__init(srv_msg_creating__action__MoveCircle_SendGoal_Request * msg);

/// Finalize action/MoveCircle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_SendGoal_Request__fini(srv_msg_creating__action__MoveCircle_SendGoal_Request * msg);

/// Create action/MoveCircle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_SendGoal_Request *
srv_msg_creating__action__MoveCircle_SendGoal_Request__create();

/// Destroy action/MoveCircle message.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_SendGoal_Request__destroy(srv_msg_creating__action__MoveCircle_SendGoal_Request * msg);

/// Check for action/MoveCircle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Request__are_equal(const srv_msg_creating__action__MoveCircle_SendGoal_Request * lhs, const srv_msg_creating__action__MoveCircle_SendGoal_Request * rhs);

/// Copy a action/MoveCircle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Request__copy(
  const srv_msg_creating__action__MoveCircle_SendGoal_Request * input,
  srv_msg_creating__action__MoveCircle_SendGoal_Request * output);

/// Initialize array of action/MoveCircle messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence__init(srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence__fini(srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence * array);

/// Create array of action/MoveCircle messages.
/**
 * It allocates the memory for the array and calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence *
srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence__destroy(srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence * array);

/// Check for action/MoveCircle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence__are_equal(const srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence * lhs, const srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveCircle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence__copy(
  const srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence * input,
  srv_msg_creating__action__MoveCircle_SendGoal_Request__Sequence * output);

/// Initialize action/MoveCircle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_msg_creating__action__MoveCircle_SendGoal_Response
 * )) before or use
 * srv_msg_creating__action__MoveCircle_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Response__init(srv_msg_creating__action__MoveCircle_SendGoal_Response * msg);

/// Finalize action/MoveCircle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_SendGoal_Response__fini(srv_msg_creating__action__MoveCircle_SendGoal_Response * msg);

/// Create action/MoveCircle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_SendGoal_Response *
srv_msg_creating__action__MoveCircle_SendGoal_Response__create();

/// Destroy action/MoveCircle message.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_SendGoal_Response__destroy(srv_msg_creating__action__MoveCircle_SendGoal_Response * msg);

/// Check for action/MoveCircle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Response__are_equal(const srv_msg_creating__action__MoveCircle_SendGoal_Response * lhs, const srv_msg_creating__action__MoveCircle_SendGoal_Response * rhs);

/// Copy a action/MoveCircle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Response__copy(
  const srv_msg_creating__action__MoveCircle_SendGoal_Response * input,
  srv_msg_creating__action__MoveCircle_SendGoal_Response * output);

/// Initialize array of action/MoveCircle messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence__init(srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence__fini(srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence * array);

/// Create array of action/MoveCircle messages.
/**
 * It allocates the memory for the array and calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence *
srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence__destroy(srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence * array);

/// Check for action/MoveCircle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence__are_equal(const srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence * lhs, const srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveCircle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence__copy(
  const srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence * input,
  srv_msg_creating__action__MoveCircle_SendGoal_Response__Sequence * output);

/// Initialize action/MoveCircle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_msg_creating__action__MoveCircle_GetResult_Request
 * )) before or use
 * srv_msg_creating__action__MoveCircle_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Request__init(srv_msg_creating__action__MoveCircle_GetResult_Request * msg);

/// Finalize action/MoveCircle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_GetResult_Request__fini(srv_msg_creating__action__MoveCircle_GetResult_Request * msg);

/// Create action/MoveCircle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_msg_creating__action__MoveCircle_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_GetResult_Request *
srv_msg_creating__action__MoveCircle_GetResult_Request__create();

/// Destroy action/MoveCircle message.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_GetResult_Request__destroy(srv_msg_creating__action__MoveCircle_GetResult_Request * msg);

/// Check for action/MoveCircle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Request__are_equal(const srv_msg_creating__action__MoveCircle_GetResult_Request * lhs, const srv_msg_creating__action__MoveCircle_GetResult_Request * rhs);

/// Copy a action/MoveCircle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Request__copy(
  const srv_msg_creating__action__MoveCircle_GetResult_Request * input,
  srv_msg_creating__action__MoveCircle_GetResult_Request * output);

/// Initialize array of action/MoveCircle messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_msg_creating__action__MoveCircle_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence__init(srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence__fini(srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence * array);

/// Create array of action/MoveCircle messages.
/**
 * It allocates the memory for the array and calls
 * srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence *
srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence__destroy(srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence * array);

/// Check for action/MoveCircle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence__are_equal(const srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence * lhs, const srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveCircle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence__copy(
  const srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence * input,
  srv_msg_creating__action__MoveCircle_GetResult_Request__Sequence * output);

/// Initialize action/MoveCircle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_msg_creating__action__MoveCircle_GetResult_Response
 * )) before or use
 * srv_msg_creating__action__MoveCircle_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Response__init(srv_msg_creating__action__MoveCircle_GetResult_Response * msg);

/// Finalize action/MoveCircle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_GetResult_Response__fini(srv_msg_creating__action__MoveCircle_GetResult_Response * msg);

/// Create action/MoveCircle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_msg_creating__action__MoveCircle_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_GetResult_Response *
srv_msg_creating__action__MoveCircle_GetResult_Response__create();

/// Destroy action/MoveCircle message.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_GetResult_Response__destroy(srv_msg_creating__action__MoveCircle_GetResult_Response * msg);

/// Check for action/MoveCircle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Response__are_equal(const srv_msg_creating__action__MoveCircle_GetResult_Response * lhs, const srv_msg_creating__action__MoveCircle_GetResult_Response * rhs);

/// Copy a action/MoveCircle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Response__copy(
  const srv_msg_creating__action__MoveCircle_GetResult_Response * input,
  srv_msg_creating__action__MoveCircle_GetResult_Response * output);

/// Initialize array of action/MoveCircle messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_msg_creating__action__MoveCircle_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence__init(srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence__fini(srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence * array);

/// Create array of action/MoveCircle messages.
/**
 * It allocates the memory for the array and calls
 * srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence *
srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence__destroy(srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence * array);

/// Check for action/MoveCircle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence__are_equal(const srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence * lhs, const srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveCircle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence__copy(
  const srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence * input,
  srv_msg_creating__action__MoveCircle_GetResult_Response__Sequence * output);

/// Initialize action/MoveCircle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_msg_creating__action__MoveCircle_FeedbackMessage
 * )) before or use
 * srv_msg_creating__action__MoveCircle_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_FeedbackMessage__init(srv_msg_creating__action__MoveCircle_FeedbackMessage * msg);

/// Finalize action/MoveCircle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_FeedbackMessage__fini(srv_msg_creating__action__MoveCircle_FeedbackMessage * msg);

/// Create action/MoveCircle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_msg_creating__action__MoveCircle_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_FeedbackMessage *
srv_msg_creating__action__MoveCircle_FeedbackMessage__create();

/// Destroy action/MoveCircle message.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_FeedbackMessage__destroy(srv_msg_creating__action__MoveCircle_FeedbackMessage * msg);

/// Check for action/MoveCircle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_FeedbackMessage__are_equal(const srv_msg_creating__action__MoveCircle_FeedbackMessage * lhs, const srv_msg_creating__action__MoveCircle_FeedbackMessage * rhs);

/// Copy a action/MoveCircle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_FeedbackMessage__copy(
  const srv_msg_creating__action__MoveCircle_FeedbackMessage * input,
  srv_msg_creating__action__MoveCircle_FeedbackMessage * output);

/// Initialize array of action/MoveCircle messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_msg_creating__action__MoveCircle_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence__init(srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence__fini(srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence * array);

/// Create array of action/MoveCircle messages.
/**
 * It allocates the memory for the array and calls
 * srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence *
srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveCircle messages.
/**
 * It calls
 * srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
void
srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence__destroy(srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence * array);

/// Check for action/MoveCircle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence__are_equal(const srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence * lhs, const srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveCircle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_msg_creating
bool
srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence__copy(
  const srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence * input,
  srv_msg_creating__action__MoveCircle_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SRV_MSG_CREATING__ACTION__DETAIL__MOVE_CIRCLE__FUNCTIONS_H_
