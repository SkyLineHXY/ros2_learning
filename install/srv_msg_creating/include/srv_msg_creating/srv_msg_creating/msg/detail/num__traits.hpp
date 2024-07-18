// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srv_msg_creating:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef SRV_MSG_CREATING__MSG__DETAIL__NUM__TRAITS_HPP_
#define SRV_MSG_CREATING__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "srv_msg_creating/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace srv_msg_creating
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace srv_msg_creating

namespace rosidl_generator_traits
{

[[deprecated("use srv_msg_creating::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_msg_creating::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_msg_creating::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_msg_creating::msg::to_yaml() instead")]]
inline std::string to_yaml(const srv_msg_creating::msg::Num & msg)
{
  return srv_msg_creating::msg::to_yaml(msg);
}

template<>
inline const char * data_type<srv_msg_creating::msg::Num>()
{
  return "srv_msg_creating::msg::Num";
}

template<>
inline const char * name<srv_msg_creating::msg::Num>()
{
  return "srv_msg_creating/msg/Num";
}

template<>
struct has_fixed_size<srv_msg_creating::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_msg_creating::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_msg_creating::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SRV_MSG_CREATING__MSG__DETAIL__NUM__TRAITS_HPP_
