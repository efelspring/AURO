// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__TRAITS_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "assessment_interfaces/msg/detail/item_holder__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace assessment_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ItemHolder & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: holding_item
  {
    out << "holding_item: ";
    rosidl_generator_traits::value_to_yaml(msg.holding_item, out);
    out << ", ";
  }

  // member: item_colour
  {
    out << "item_colour: ";
    rosidl_generator_traits::value_to_yaml(msg.item_colour, out);
    out << ", ";
  }

  // member: item_value
  {
    out << "item_value: ";
    rosidl_generator_traits::value_to_yaml(msg.item_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ItemHolder & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: holding_item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "holding_item: ";
    rosidl_generator_traits::value_to_yaml(msg.holding_item, out);
    out << "\n";
  }

  // member: item_colour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_colour: ";
    rosidl_generator_traits::value_to_yaml(msg.item_colour, out);
    out << "\n";
  }

  // member: item_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_value: ";
    rosidl_generator_traits::value_to_yaml(msg.item_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ItemHolder & msg, bool use_flow_style = false)
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

}  // namespace assessment_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use assessment_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assessment_interfaces::msg::ItemHolder & msg,
  std::ostream & out, size_t indentation = 0)
{
  assessment_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assessment_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const assessment_interfaces::msg::ItemHolder & msg)
{
  return assessment_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<assessment_interfaces::msg::ItemHolder>()
{
  return "assessment_interfaces::msg::ItemHolder";
}

template<>
inline const char * name<assessment_interfaces::msg::ItemHolder>()
{
  return "assessment_interfaces/msg/ItemHolder";
}

template<>
struct has_fixed_size<assessment_interfaces::msg::ItemHolder>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<assessment_interfaces::msg::ItemHolder>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<assessment_interfaces::msg::ItemHolder>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__TRAITS_HPP_
