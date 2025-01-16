// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auro_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__DIRECTION__TRAITS_HPP_
#define AURO_INTERFACES__MSG__DETAIL__DIRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auro_interfaces/msg/detail/direction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace auro_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Direction & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Direction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Direction & msg, bool use_flow_style = false)
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
  const auro_interfaces::msg::Direction & msg,
  std::ostream & out, size_t indentation = 0)
{
  auro_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auro_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const auro_interfaces::msg::Direction & msg)
{
  return auro_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<auro_interfaces::msg::Direction>()
{
  return "auro_interfaces::msg::Direction";
}

template<>
inline const char * name<auro_interfaces::msg::Direction>()
{
  return "auro_interfaces/msg/Direction";
}

template<>
struct has_fixed_size<auro_interfaces::msg::Direction>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<auro_interfaces::msg::Direction>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<auro_interfaces::msg::Direction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AURO_INTERFACES__MSG__DETAIL__DIRECTION__TRAITS_HPP_
