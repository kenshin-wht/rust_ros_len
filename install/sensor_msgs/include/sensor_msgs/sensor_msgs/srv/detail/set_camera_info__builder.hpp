// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sensor_msgs/srv/set_camera_info.hpp"


#ifndef SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__BUILDER_HPP_
#define SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/srv/detail/set_camera_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCameraInfo_Request_camera_info
{
public:
  Init_SetCameraInfo_Request_camera_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_msgs::srv::SetCameraInfo_Request camera_info(::sensor_msgs::srv::SetCameraInfo_Request::_camera_info_type arg)
  {
    msg_.camera_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::srv::SetCameraInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::srv::SetCameraInfo_Request>()
{
  return sensor_msgs::srv::builder::Init_SetCameraInfo_Request_camera_info();
}

}  // namespace sensor_msgs


namespace sensor_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCameraInfo_Response_status_message
{
public:
  explicit Init_SetCameraInfo_Response_status_message(::sensor_msgs::srv::SetCameraInfo_Response & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::srv::SetCameraInfo_Response status_message(::sensor_msgs::srv::SetCameraInfo_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::srv::SetCameraInfo_Response msg_;
};

class Init_SetCameraInfo_Response_success
{
public:
  Init_SetCameraInfo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCameraInfo_Response_status_message success(::sensor_msgs::srv::SetCameraInfo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetCameraInfo_Response_status_message(msg_);
  }

private:
  ::sensor_msgs::srv::SetCameraInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::srv::SetCameraInfo_Response>()
{
  return sensor_msgs::srv::builder::Init_SetCameraInfo_Response_success();
}

}  // namespace sensor_msgs


namespace sensor_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCameraInfo_Event_response
{
public:
  explicit Init_SetCameraInfo_Event_response(::sensor_msgs::srv::SetCameraInfo_Event & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::srv::SetCameraInfo_Event response(::sensor_msgs::srv::SetCameraInfo_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::srv::SetCameraInfo_Event msg_;
};

class Init_SetCameraInfo_Event_request
{
public:
  explicit Init_SetCameraInfo_Event_request(::sensor_msgs::srv::SetCameraInfo_Event & msg)
  : msg_(msg)
  {}
  Init_SetCameraInfo_Event_response request(::sensor_msgs::srv::SetCameraInfo_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetCameraInfo_Event_response(msg_);
  }

private:
  ::sensor_msgs::srv::SetCameraInfo_Event msg_;
};

class Init_SetCameraInfo_Event_info
{
public:
  Init_SetCameraInfo_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCameraInfo_Event_request info(::sensor_msgs::srv::SetCameraInfo_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetCameraInfo_Event_request(msg_);
  }

private:
  ::sensor_msgs::srv::SetCameraInfo_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::srv::SetCameraInfo_Event>()
{
  return sensor_msgs::srv::builder::Init_SetCameraInfo_Event_info();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__BUILDER_HPP_
