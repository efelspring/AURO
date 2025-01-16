// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auro_interfaces:msg/StringWithPose.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__TRAITS_HPP_
#define AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auro_interfaces/msg/detail/string_with_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace auro_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const StringWithPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StringWithPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StringWithPose & msg, bool use_flow_style = false)
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

}  // namespace auro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use auro_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const auro_interfaces::msg::StringWithPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  auro_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auro_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const auro_interfaces::msg::StringWithPose & msg)
{
  return auro_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<auro_interfaces::msg::StringWithPose>()
{
  return "auro_interfaces::msg::StringWithPose";
}

template<>
inline const char * name<auro_interfaces::msg::StringWithPose>()
{
  return "auro_interfaces/msg/StringWithPose";
}

template<>
struct has_fixed_size<auro_interfaces::msg::StringWithPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<auro_interfaces::msg::StringWithPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<auro_interfaces::msg::StringWithPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__TRAITS_HPP_
