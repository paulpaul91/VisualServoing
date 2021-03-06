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
 * Auto-generated by genmsg_cpp from file /home/visual-servoing/ros/ws_baxter/src/baxter_common/baxter_core_msgs/srv/ListCameras.srv
 *
 */


#ifndef BAXTER_CORE_MSGS_MESSAGE_LISTCAMERASRESPONSE_H
#define BAXTER_CORE_MSGS_MESSAGE_LISTCAMERASRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_core_msgs
{
template <class ContainerAllocator>
struct ListCamerasResponse_
{
  typedef ListCamerasResponse_<ContainerAllocator> Type;

  ListCamerasResponse_()
    : cameras()  {
    }
  ListCamerasResponse_(const ContainerAllocator& _alloc)
    : cameras(_alloc)  {
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _cameras_type;
  _cameras_type cameras;




  typedef boost::shared_ptr< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct ListCamerasResponse_

typedef ::baxter_core_msgs::ListCamerasResponse_<std::allocator<void> > ListCamerasResponse;

typedef boost::shared_ptr< ::baxter_core_msgs::ListCamerasResponse > ListCamerasResponsePtr;
typedef boost::shared_ptr< ::baxter_core_msgs::ListCamerasResponse const> ListCamerasResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/hydro/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/visual-servoing/ros/ws_baxter/src/baxter_common/baxter_core_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "855b31192ab61744e7deb992d94db7ff";
  }

  static const char* value(const ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x855b31192ab61744ULL;
  static const uint64_t static_value2 = 0xe7deb992d94db7ffULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/ListCamerasResponse";
  }

  static const char* value(const ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[]    cameras\n\
\n\
";
  }

  static const char* value(const ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cameras);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ListCamerasResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::ListCamerasResponse_<ContainerAllocator>& v)
  {
    s << indent << "cameras[]" << std::endl;
    for (size_t i = 0; i < v.cameras.size(); ++i)
    {
      s << indent << "  cameras[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cameras[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_LISTCAMERASRESPONSE_H
