/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/visual-servoing/ros/ws_baxter/src/ros_control/controller_manager_msgs/srv/ListControllerTypes.srv
 *
 */


#ifndef CONTROLLER_MANAGER_MSGS_MESSAGE_LISTCONTROLLERTYPES_H
#define CONTROLLER_MANAGER_MSGS_MESSAGE_LISTCONTROLLERTYPES_H

#include <ros/service_traits.h>


#include <controller_manager_msgs/ListControllerTypesRequest.h>
#include <controller_manager_msgs/ListControllerTypesResponse.h>


namespace controller_manager_msgs
{

struct ListControllerTypes
{

typedef ListControllerTypesRequest Request;
typedef ListControllerTypesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ListControllerTypes
} // namespace controller_manager_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::controller_manager_msgs::ListControllerTypes > {
  static const char* value()
  {
    return "c1d4cd11aefa9f97ba4aeb5b33987f4e";
  }

  static const char* value(const ::controller_manager_msgs::ListControllerTypes&) { return value(); }
};

template<>
struct DataType< ::controller_manager_msgs::ListControllerTypes > {
  static const char* value()
  {
    return "controller_manager_msgs/ListControllerTypes";
  }

  static const char* value(const ::controller_manager_msgs::ListControllerTypes&) { return value(); }
};


// service_traits::MD5Sum< ::controller_manager_msgs::ListControllerTypesRequest> should match 
// service_traits::MD5Sum< ::controller_manager_msgs::ListControllerTypes > 
template<>
struct MD5Sum< ::controller_manager_msgs::ListControllerTypesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::controller_manager_msgs::ListControllerTypes >::value();
  }
  static const char* value(const ::controller_manager_msgs::ListControllerTypesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::controller_manager_msgs::ListControllerTypesRequest> should match 
// service_traits::DataType< ::controller_manager_msgs::ListControllerTypes > 
template<>
struct DataType< ::controller_manager_msgs::ListControllerTypesRequest>
{
  static const char* value()
  {
    return DataType< ::controller_manager_msgs::ListControllerTypes >::value();
  }
  static const char* value(const ::controller_manager_msgs::ListControllerTypesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::controller_manager_msgs::ListControllerTypesResponse> should match 
// service_traits::MD5Sum< ::controller_manager_msgs::ListControllerTypes > 
template<>
struct MD5Sum< ::controller_manager_msgs::ListControllerTypesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::controller_manager_msgs::ListControllerTypes >::value();
  }
  static const char* value(const ::controller_manager_msgs::ListControllerTypesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::controller_manager_msgs::ListControllerTypesResponse> should match 
// service_traits::DataType< ::controller_manager_msgs::ListControllerTypes > 
template<>
struct DataType< ::controller_manager_msgs::ListControllerTypesResponse>
{
  static const char* value()
  {
    return DataType< ::controller_manager_msgs::ListControllerTypes >::value();
  }
  static const char* value(const ::controller_manager_msgs::ListControllerTypesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CONTROLLER_MANAGER_MSGS_MESSAGE_LISTCONTROLLERTYPES_H
