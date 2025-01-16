// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auro_interfaces:msg/ItemList.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__ITEM_LIST__TRAITS_HPP_
#define AURO_INTERFACES__MSG__DETAIL__ITEM_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auro_interfaces/msg/detail/item_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "auro_interfaces/msg/detail/item__traits.hpp"

namespace auro_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ItemList & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ItemList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ItemList & msg, bool use_flow_style = false)
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
  const auro_interfaces::msg::ItemList & msg,
  std::ostream & out, size_t indentation = 0)
{
  auro_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auro_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const auro_interfaces::msg::ItemList & msg)
{
  return auro_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<auro_interfaces::msg::ItemList>()
{
  return "auro_interfaces::msg::ItemList";
}

template<>
inline const char * name<auro_interfaces::msg::ItemList>()
{
  return "auro_interfaces/msg/ItemList";
}

template<>
struct has_fixed_size<auro_interfaces::msg::ItemList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<auro_interfaces::msg::ItemList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<auro_interfaces::msg::ItemList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AURO_INTERFACES__MSG__DETAIL__ITEM_LIST__TRAITS_HPP_
