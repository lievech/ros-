// Generated by gencpp from file control_msgs/SendECUCmd.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_SENDECUCMD_H
#define CONTROL_MSGS_MESSAGE_SENDECUCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <control_msgs/ModeCmd.h>
#include <control_msgs/ThrottleCmd.h>
#include <control_msgs/BrakeCmd.h>
#include <control_msgs/SteerCmd.h>
#include <control_msgs/GearCmd.h>
#include <control_msgs/LampCmd.h>

namespace control_msgs
{
template <class ContainerAllocator>
struct SendECUCmd_
{
  typedef SendECUCmd_<ContainerAllocator> Type;

  SendECUCmd_()
    : header()
    , mode()
    , throttle_cmd()
    , brake_cmd()
    , steer_cmd()
    , gear_cmd()
    , lamp_cmd()
    , emergency(false)  {
    }
  SendECUCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , mode(_alloc)
    , throttle_cmd(_alloc)
    , brake_cmd(_alloc)
    , steer_cmd(_alloc)
    , gear_cmd(_alloc)
    , lamp_cmd(_alloc)
    , emergency(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::control_msgs::ModeCmd_<ContainerAllocator>  _mode_type;
  _mode_type mode;

   typedef  ::control_msgs::ThrottleCmd_<ContainerAllocator>  _throttle_cmd_type;
  _throttle_cmd_type throttle_cmd;

   typedef  ::control_msgs::BrakeCmd_<ContainerAllocator>  _brake_cmd_type;
  _brake_cmd_type brake_cmd;

   typedef  ::control_msgs::SteerCmd_<ContainerAllocator>  _steer_cmd_type;
  _steer_cmd_type steer_cmd;

   typedef  ::control_msgs::GearCmd_<ContainerAllocator>  _gear_cmd_type;
  _gear_cmd_type gear_cmd;

   typedef  ::control_msgs::LampCmd_<ContainerAllocator>  _lamp_cmd_type;
  _lamp_cmd_type lamp_cmd;

   typedef uint8_t _emergency_type;
  _emergency_type emergency;





  typedef boost::shared_ptr< ::control_msgs::SendECUCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::SendECUCmd_<ContainerAllocator> const> ConstPtr;

}; // struct SendECUCmd_

typedef ::control_msgs::SendECUCmd_<std::allocator<void> > SendECUCmd;

typedef boost::shared_ptr< ::control_msgs::SendECUCmd > SendECUCmdPtr;
typedef boost::shared_ptr< ::control_msgs::SendECUCmd const> SendECUCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::SendECUCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::SendECUCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_driver_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/sensor_driver_msgs/msg'], 'control_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/control_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::SendECUCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::SendECUCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::SendECUCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::SendECUCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::SendECUCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::SendECUCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::SendECUCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e6c83979d7ed3546b72159d9ee045d5d";
  }

  static const char* value(const ::control_msgs::SendECUCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe6c83979d7ed3546ULL;
  static const uint64_t static_value2 = 0xb72159d9ee045d5dULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::SendECUCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/SendECUCmd";
  }

  static const char* value(const ::control_msgs::SendECUCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::SendECUCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
control_msgs/ModeCmd mode\n\
\n\
control_msgs/ThrottleCmd throttle_cmd\n\
control_msgs/BrakeCmd brake_cmd\n\
control_msgs/SteerCmd steer_cmd\n\
control_msgs/GearCmd gear_cmd\n\
control_msgs/LampCmd lamp_cmd\n\
\n\
bool emergency\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: control_msgs/ModeCmd\n\
Header header\n\
\n\
int32 auto_mode\n\
\n\
int32 speed_mode\n\
bool throttle_enable\n\
bool brake_enable\n\
\n\
int32 steer_mode\n\
int32 gear_mode\n\
\n\
\n\
================================================================================\n\
MSG: control_msgs/ThrottleCmd\n\
Header header\n\
float32 throttle\n\
\n\
\n\
\n\
================================================================================\n\
MSG: control_msgs/BrakeCmd\n\
Header header\n\
float32 brake\n\
\n\
\n\
================================================================================\n\
MSG: control_msgs/SteerCmd\n\
Header header\n\
float32 steer\n\
\n\
================================================================================\n\
MSG: control_msgs/GearCmd\n\
Header header\n\
uint8 gear\n\
\n\
================================================================================\n\
MSG: control_msgs/LampCmd\n\
Header header\n\
bool lamp_1\n\
bool lamp_2\n\
\n\
";
  }

  static const char* value(const ::control_msgs::SendECUCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::SendECUCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.mode);
      stream.next(m.throttle_cmd);
      stream.next(m.brake_cmd);
      stream.next(m.steer_cmd);
      stream.next(m.gear_cmd);
      stream.next(m.lamp_cmd);
      stream.next(m.emergency);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendECUCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::SendECUCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::SendECUCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "mode: ";
    s << std::endl;
    Printer< ::control_msgs::ModeCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.mode);
    s << indent << "throttle_cmd: ";
    s << std::endl;
    Printer< ::control_msgs::ThrottleCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.throttle_cmd);
    s << indent << "brake_cmd: ";
    s << std::endl;
    Printer< ::control_msgs::BrakeCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.brake_cmd);
    s << indent << "steer_cmd: ";
    s << std::endl;
    Printer< ::control_msgs::SteerCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.steer_cmd);
    s << indent << "gear_cmd: ";
    s << std::endl;
    Printer< ::control_msgs::GearCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.gear_cmd);
    s << indent << "lamp_cmd: ";
    s << std::endl;
    Printer< ::control_msgs::LampCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.lamp_cmd);
    s << indent << "emergency: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.emergency);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_SENDECUCMD_H
