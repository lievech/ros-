// Generated by gencpp from file control_msgs/BrakeReport.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_BRAKEREPORT_H
#define CONTROL_MSGS_MESSAGE_BRAKEREPORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <control_msgs/WheelStateReport.h>

namespace control_msgs
{
template <class ContainerAllocator>
struct BrakeReport_
{
  typedef BrakeReport_<ContainerAllocator> Type;

  BrakeReport_()
    : header()
    , brake_ESC_left(0.0)
    , brake_ESC_right(0.0)
    , brake_wheel()
    , brake_pedal(0.0)  {
    }
  BrakeReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , brake_ESC_left(0.0)
    , brake_ESC_right(0.0)
    , brake_wheel(_alloc)
    , brake_pedal(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _brake_ESC_left_type;
  _brake_ESC_left_type brake_ESC_left;

   typedef float _brake_ESC_right_type;
  _brake_ESC_right_type brake_ESC_right;

   typedef  ::control_msgs::WheelStateReport_<ContainerAllocator>  _brake_wheel_type;
  _brake_wheel_type brake_wheel;

   typedef float _brake_pedal_type;
  _brake_pedal_type brake_pedal;





  typedef boost::shared_ptr< ::control_msgs::BrakeReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::BrakeReport_<ContainerAllocator> const> ConstPtr;

}; // struct BrakeReport_

typedef ::control_msgs::BrakeReport_<std::allocator<void> > BrakeReport;

typedef boost::shared_ptr< ::control_msgs::BrakeReport > BrakeReportPtr;
typedef boost::shared_ptr< ::control_msgs::BrakeReport const> BrakeReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::BrakeReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::BrakeReport_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::control_msgs::BrakeReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::BrakeReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::BrakeReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::BrakeReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::BrakeReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::BrakeReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::BrakeReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b70ede16519a0d621c3ea9bdf833527";
  }

  static const char* value(const ::control_msgs::BrakeReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b70ede16519a0d6ULL;
  static const uint64_t static_value2 = 0x21c3ea9bdf833527ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::BrakeReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/BrakeReport";
  }

  static const char* value(const ::control_msgs::BrakeReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::BrakeReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
float32 brake_ESC_left\n\
float32 brake_ESC_right\n\
\n\
control_msgs/WheelStateReport brake_wheel\n\
\n\
float32 brake_pedal\n\
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
MSG: control_msgs/WheelStateReport\n\
Header header\n\
\n\
float32 front_left\n\
float32 front_right\n\
float32 rear_left\n\
float32 rear_right\n\
";
  }

  static const char* value(const ::control_msgs::BrakeReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::BrakeReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.brake_ESC_left);
      stream.next(m.brake_ESC_right);
      stream.next(m.brake_wheel);
      stream.next(m.brake_pedal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BrakeReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::BrakeReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::BrakeReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "brake_ESC_left: ";
    Printer<float>::stream(s, indent + "  ", v.brake_ESC_left);
    s << indent << "brake_ESC_right: ";
    Printer<float>::stream(s, indent + "  ", v.brake_ESC_right);
    s << indent << "brake_wheel: ";
    s << std::endl;
    Printer< ::control_msgs::WheelStateReport_<ContainerAllocator> >::stream(s, indent + "  ", v.brake_wheel);
    s << indent << "brake_pedal: ";
    Printer<float>::stream(s, indent + "  ", v.brake_pedal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_BRAKEREPORT_H
