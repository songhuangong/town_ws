// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from village_interface:srv/Buybooks.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACE__SRV__DETAIL__BUYBOOKS__BUILDER_HPP_
#define VILLAGE_INTERFACE__SRV__DETAIL__BUYBOOKS__BUILDER_HPP_

#include "village_interface/srv/detail/buybooks__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace village_interface
{

namespace srv
{

namespace builder
{

class Init_Buybooks_Request_money
{
public:
  Init_Buybooks_Request_money()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::village_interface::srv::Buybooks_Request money(::village_interface::srv::Buybooks_Request::_money_type arg)
  {
    msg_.money = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interface::srv::Buybooks_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interface::srv::Buybooks_Request>()
{
  return village_interface::srv::builder::Init_Buybooks_Request_money();
}

}  // namespace village_interface


namespace village_interface
{

namespace srv
{

namespace builder
{

class Init_Buybooks_Response_books
{
public:
  Init_Buybooks_Response_books()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::village_interface::srv::Buybooks_Response books(::village_interface::srv::Buybooks_Response::_books_type arg)
  {
    msg_.books = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interface::srv::Buybooks_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interface::srv::Buybooks_Response>()
{
  return village_interface::srv::builder::Init_Buybooks_Response_books();
}

}  // namespace village_interface

#endif  // VILLAGE_INTERFACE__SRV__DETAIL__BUYBOOKS__BUILDER_HPP_
