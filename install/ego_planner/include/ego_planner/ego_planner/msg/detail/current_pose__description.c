// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ego_planner:msg/CurrentPose.idl
// generated code does not contain a copyright notice

#include "ego_planner/msg/detail/current_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ego_planner
const rosidl_type_hash_t *
ego_planner__msg__CurrentPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb3, 0x8b, 0xa2, 0x7b, 0xe7, 0xe9, 0x1a, 0xd5,
      0x5b, 0xff, 0xfd, 0xfe, 0xd7, 0x59, 0xc9, 0xf6,
      0xae, 0x67, 0xae, 0xbf, 0xf5, 0x7a, 0x06, 0x75,
      0xd6, 0x31, 0x4f, 0x7b, 0x58, 0xce, 0x96, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ego_planner__msg__CurrentPose__TYPE_NAME[] = "ego_planner/msg/CurrentPose";

// Define type names, field names, and default values
static char ego_planner__msg__CurrentPose__FIELD_NAME__x[] = "x";
static char ego_planner__msg__CurrentPose__FIELD_NAME__y[] = "y";
static char ego_planner__msg__CurrentPose__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field ego_planner__msg__CurrentPose__FIELDS[] = {
  {
    {ego_planner__msg__CurrentPose__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ego_planner__msg__CurrentPose__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ego_planner__msg__CurrentPose__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ego_planner__msg__CurrentPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ego_planner__msg__CurrentPose__TYPE_NAME, 27, 27},
      {ego_planner__msg__CurrentPose__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ego_planner__msg__CurrentPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ego_planner__msg__CurrentPose__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ego_planner__msg__CurrentPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ego_planner__msg__CurrentPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
