// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from village_interface:srv/Buybooks.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACE__SRV__DETAIL__BUYBOOKS__STRUCT_HPP_
#define VILLAGE_INTERFACE__SRV__DETAIL__BUYBOOKS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__village_interface__srv__Buybooks_Request __attribute__((deprecated))
#else
# define DEPRECATED__village_interface__srv__Buybooks_Request __declspec(deprecated)
#endif

namespace village_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Buybooks_Request_
{
  using Type = Buybooks_Request_<ContainerAllocator>;

  explicit Buybooks_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->money = 0ul;
    }
  }

  explicit Buybooks_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->money = 0ul;
    }
  }

  // field types and members
  using _money_type =
    uint32_t;
  _money_type money;

  // setters for named parameter idiom
  Type & set__money(
    const uint32_t & _arg)
  {
    this->money = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    village_interface::srv::Buybooks_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const village_interface::srv::Buybooks_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<village_interface::srv::Buybooks_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<village_interface::srv::Buybooks_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      village_interface::srv::Buybooks_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<village_interface::srv::Buybooks_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      village_interface::srv::Buybooks_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<village_interface::srv::Buybooks_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<village_interface::srv::Buybooks_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<village_interface::srv::Buybooks_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__village_interface__srv__Buybooks_Request
    std::shared_ptr<village_interface::srv::Buybooks_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__village_interface__srv__Buybooks_Request
    std::shared_ptr<village_interface::srv::Buybooks_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Buybooks_Request_ & other) const
  {
    if (this->money != other.money) {
      return false;
    }
    return true;
  }
  bool operator!=(const Buybooks_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Buybooks_Request_

// alias to use template instance with default allocator
using Buybooks_Request =
  village_interface::srv::Buybooks_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace village_interface


#ifndef _WIN32
# define DEPRECATED__village_interface__srv__Buybooks_Response __attribute__((deprecated))
#else
# define DEPRECATED__village_interface__srv__Buybooks_Response __declspec(deprecated)
#endif

namespace village_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Buybooks_Response_
{
  using Type = Buybooks_Response_<ContainerAllocator>;

  explicit Buybooks_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Buybooks_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _books_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _books_type books;

  // setters for named parameter idiom
  Type & set__books(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->books = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    village_interface::srv::Buybooks_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const village_interface::srv::Buybooks_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<village_interface::srv::Buybooks_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<village_interface::srv::Buybooks_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      village_interface::srv::Buybooks_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<village_interface::srv::Buybooks_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      village_interface::srv::Buybooks_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<village_interface::srv::Buybooks_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<village_interface::srv::Buybooks_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<village_interface::srv::Buybooks_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__village_interface__srv__Buybooks_Response
    std::shared_ptr<village_interface::srv::Buybooks_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__village_interface__srv__Buybooks_Response
    std::shared_ptr<village_interface::srv::Buybooks_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Buybooks_Response_ & other) const
  {
    if (this->books != other.books) {
      return false;
    }
    return true;
  }
  bool operator!=(const Buybooks_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Buybooks_Response_

// alias to use template instance with default allocator
using Buybooks_Response =
  village_interface::srv::Buybooks_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace village_interface

namespace village_interface
{

namespace srv
{

struct Buybooks
{
  using Request = village_interface::srv::Buybooks_Request;
  using Response = village_interface::srv::Buybooks_Response;
};

}  // namespace srv

}  // namespace village_interface

#endif  // VILLAGE_INTERFACE__SRV__DETAIL__BUYBOOKS__STRUCT_HPP_
