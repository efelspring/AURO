// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auro_interfaces:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__ITEM__TRAITS_HPP_
#define AURO_INTERFACES__MSG__DETAIL__ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auro_interfaces/msg/detail/item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace auro_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Item & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: diameter
  {
    out << "diameter: ";
    rosidl_generator_traits::value_to_yaml(msg.diameter, out);
    out << ", ";
  }

  // member: colour
  {
    out << "colour: ";
    rosidl_generator_traits::value_to_yaml(msg.colour, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Item & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: diameter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diameter: ";
    rosidl_generator_traits::value_to_yaml(msg.diameter, out);
    out << "\n";
  }

  // member: colour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "colour: ";
    rosidl_generator_traits::value_to_yaml(msg.colour, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Item & msg, bool use_flow_style = false)
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
  const auro_interfaces::msg::Item & msg,
  std::ostream & out, size_t indentation = 0)
{
  auro_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auro_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const auro_interfaces::msg::Item & msg)
{
  return auro_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<auro_interfaces::msg::Item>()
{
  return "auro_interfaces::msg::Item";
}

template<>
inline const char * name<auro_interfaces::msg::Item>()
{
  return "auro_interfaces/msg/Item";
}

template<>
struct has_fixed_size<auro_interfaces::msg::Item>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<auro_interfaces::msg::Item>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<auro_interfaces::msg::Item>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AURO_INTERFACES__MSG__DETAIL__ITEM__TRAITS_HPP_
