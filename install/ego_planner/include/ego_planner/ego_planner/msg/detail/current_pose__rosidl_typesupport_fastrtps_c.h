// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ego_planner:msg/CurrentPose.idl
// generated code does not contain a copyright notice
#ifndef EGO_PLANNER__MSG__DETAIL__CURRENT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define EGO_PLANNER__MSG__DETAIL__CURRENT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ego_planner/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ego_planner/msg/detail/current_pose__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ego_planner
bool cdr_serialize_ego_planner__msg__CurrentPose(
  const ego_planner__msg__CurrentPose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ego_planner
bool cdr_deserialize_ego_planner__msg__CurrentPose(
  eprosima::fastcdr::Cdr &,
  ego_planner__msg__CurrentPose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ego_planner
size_t get_serialized_size_ego_planner__msg__CurrentPose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ego_planner
size_t max_serialized_size_ego_planner__msg__CurrentPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ego_planner
bool cdr_serialize_key_ego_planner__msg__CurrentPose(
  const ego_planner__msg__CurrentPose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ego_planner
size_t get_serialized_size_key_ego_planner__msg__CurrentPose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ego_planner
size_t max_serialized_size_key_ego_planner__msg__CurrentPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ego_planner
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ego_planner, msg, CurrentPose)();

#ifdef __cplusplus
}
#endif

#endif  // EGO_PLANNER__MSG__DETAIL__CURRENT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
