// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from village_interface:srv/Money.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACE__SRV__DETAIL__MONEY__BUILDER_HPP_
#define VILLAGE_INTERFACE__SRV__DETAIL__MONEY__BUILDER_HPP_

#include "village_interface/srv/detail/money__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace village_interface
{

namespace srv
{

namespace builder
{

class Init_Money_Request_money
{
public:
  explicit Init_Money_Request_money(::village_interface::srv::Money_Request & msg)
  : msg_(msg)
  {}
  ::village_interface::srv::Money_Request money(::village_interface::srv::Money_Request::_money_type arg)
  {
    msg_.money = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interface::srv::Money_Request msg_;
};

class Init_Money_Request_name
{
public:
  Init_Money_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Money_Request_money name(::village_interface::srv::Money_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Money_Request_money(msg_);
  }

private:
  ::village_interface::srv::Money_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interface::srv::Money_Request>()
{
  return village_interface::srv::builder::Init_Money_Request_name();
}

}  // namespace village_interface


namespace village_interface
{

namespace srv
{

namespace builder
{

class Init_Money_Response_money
{
public:
  explicit Init_Money_Response_money(::village_interface::srv::Money_Response & msg)
  : msg_(msg)
  {}
  ::village_interface::srv::Money_Response money(::village_interface::srv::Money_Response::_money_type arg)
  {
    msg_.money = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interface::srv::Money_Response msg_;
};

class Init_Money_Response_success
{
public:
  Init_Money_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Money_Response_money success(::village_interface::srv::Money_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Money_Response_money(msg_);
  }

private:
  ::village_interface::srv::Money_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interface::srv::Money_Response>()
{
  return village_interface::srv::builder::Init_Money_Response_success();
}

}  // namespace village_interface

#endif  // VILLAGE_INTERFACE__SRV__DETAIL__MONEY__BUILDER_HPP_