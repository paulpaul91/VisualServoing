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
 * Auto-generated by gensrv_cpp from file /home/visual-servoing/ros/ws_baxter/src/baxter_common/baxter_maintenance_msgs/srv/LSCores.srv
 *
 */


#ifndef BAXTER_MAINTENANCE_MSGS_MESSAGE_LSCORES_H
#define BAXTER_MAINTENANCE_MSGS_MESSAGE_LSCORES_H

#include <ros/service_traits.h>


#include <baxter_maintenance_msgs/LSCoresRequest.h>
#include <baxter_maintenance_msgs/LSCoresResponse.h>


namespace baxter_maintenance_msgs
{

struct LSCores
{

typedef LSCoresRequest Request;
typedef LSCoresResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LSCores
} // namespace baxter_maintenance_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::baxter_maintenance_msgs::LSCores > {
  static const char* value()
  {
    return "327760b6a778597bd0478d23b1ca7006";
  }

  static const char* value(const ::baxter_maintenance_msgs::LSCores&) { return value(); }
};

template<>
struct DataType< ::baxter_maintenance_msgs::LSCores > {
  static const char* value()
  {
    return "baxter_maintenance_msgs/LSCores";
  }

  static const char* value(const ::baxter_maintenance_msgs::LSCores&) { return value(); }
};


// service_traits::MD5Sum< ::baxter_maintenance_msgs::LSCoresRequest> should match 
// service_traits::MD5Sum< ::baxter_maintenance_msgs::LSCores > 
template<>
struct MD5Sum< ::baxter_maintenance_msgs::LSCoresRequest>
{
  static const char* value()
  {
    return MD5Sum< ::baxter_maintenance_msgs::LSCores >::value();
  }
  static const char* value(const ::baxter_maintenance_msgs::LSCoresRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::baxter_maintenance_msgs::LSCoresRequest> should match 
// service_traits::DataType< ::baxter_maintenance_msgs::LSCores > 
template<>
struct DataType< ::baxter_maintenance_msgs::LSCoresRequest>
{
  static const char* value()
  {
    return DataType< ::baxter_maintenance_msgs::LSCores >::value();
  }
  static const char* value(const ::baxter_maintenance_msgs::LSCoresRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::baxter_maintenance_msgs::LSCoresResponse> should match 
// service_traits::MD5Sum< ::baxter_maintenance_msgs::LSCores > 
template<>
struct MD5Sum< ::baxter_maintenance_msgs::LSCoresResponse>
{
  static const char* value()
  {
    return MD5Sum< ::baxter_maintenance_msgs::LSCores >::value();
  }
  static const char* value(const ::baxter_maintenance_msgs::LSCoresResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::baxter_maintenance_msgs::LSCoresResponse> should match 
// service_traits::DataType< ::baxter_maintenance_msgs::LSCores > 
template<>
struct DataType< ::baxter_maintenance_msgs::LSCoresResponse>
{
  static const char* value()
  {
    return DataType< ::baxter_maintenance_msgs::LSCores >::value();
  }
  static const char* value(const ::baxter_maintenance_msgs::LSCoresResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BAXTER_MAINTENANCE_MSGS_MESSAGE_LSCORES_H
