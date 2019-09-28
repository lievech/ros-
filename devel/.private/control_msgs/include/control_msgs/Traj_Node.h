// Generated by gencpp from file control_msgs/Traj_Node.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_TRAJ_NODE_H
#define CONTROL_MSGS_MESSAGE_TRAJ_NODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Twist.h>

namespace control_msgs
{
template <class ContainerAllocator>
struct Traj_Node_
{
  typedef Traj_Node_<ContainerAllocator> Type;

  Traj_Node_()
    : forward(false)
    , id(0)
    , position()
    , orientation()
    , curvature(0.0)
    , velocity()  {
    }
  Traj_Node_(const ContainerAllocator& _alloc)
    : forward(false)
    , id(0)
    , position(_alloc)
    , orientation(_alloc)
    , curvature(0.0)
    , velocity(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _forward_type;
  _forward_type forward;

   typedef int32_t _id_type;
  _id_type id;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef double _curvature_type;
  _curvature_type curvature;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::control_msgs::Traj_Node_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::Traj_Node_<ContainerAllocator> const> ConstPtr;

}; // struct Traj_Node_

typedef ::control_msgs::Traj_Node_<std::allocator<void> > Traj_Node;

typedef boost::shared_ptr< ::control_msgs::Traj_Node > Traj_NodePtr;
typedef boost::shared_ptr< ::control_msgs::Traj_Node const> Traj_NodeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::Traj_Node_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::Traj_Node_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_driver_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/sensor_driver_msgs/msg'], 'control_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/control_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::Traj_Node_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::Traj_Node_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::Traj_Node_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::Traj_Node_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::Traj_Node_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::Traj_Node_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::Traj_Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf8156c0b203e66c6cdd6a4117bc4ae5";
  }

  static const char* value(const ::control_msgs::Traj_Node_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf8156c0b203e66cULL;
  static const uint64_t static_value2 = 0x6cdd6a4117bc4ae5ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::Traj_Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/Traj_Node";
  }

  static const char* value(const ::control_msgs::Traj_Node_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::Traj_Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool forward\n\
int32 id\n\
geometry_msgs/Point position\n\
geometry_msgs/Quaternion orientation\n\
float64 curvature\n\
geometry_msgs/Twist velocity\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::control_msgs::Traj_Node_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::Traj_Node_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.forward);
      stream.next(m.id);
      stream.next(m.position);
      stream.next(m.orientation);
      stream.next(m.curvature);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Traj_Node_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::Traj_Node_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::Traj_Node_<ContainerAllocator>& v)
  {
    s << indent << "forward: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.forward);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "curvature: ";
    Printer<double>::stream(s, indent + "  ", v.curvature);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_TRAJ_NODE_H
