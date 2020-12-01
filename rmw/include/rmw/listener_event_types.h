// Copyright 2020 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RMW__LISTENER_EVENT_TYPES_H_
#define RMW__LISTENER_EVENT_TYPES_H_

#ifdef __cplusplus
extern "C"
{
#endif

enum rmw_listener_event_type_t {
    SUBSCRIPTION_EVENT,
    SERVICE_EVENT,
    CLIENT_EVENT,
    WAITABLE_EVENT
};

typedef enum rmw_listener_event_type_t rmw_listener_event_type_t;

struct rmw_listener_event_t {
  const void * entity;
  rmw_listener_event_type_t type;
};

typedef struct rmw_listener_event_t rmw_listener_event_t;

typedef void (*rmw_listener_cb_t)(const void * user_data, rmw_listener_event_t event);


#ifdef __cplusplus
}
#endif

#endif  // RMW__LISTENER_EVENT_TYPES_H_
