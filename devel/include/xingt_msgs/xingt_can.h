// Generated by gencpp from file xingt_msgs/xingt_can.msg
// DO NOT EDIT!


#ifndef XINGT_MSGS_MESSAGE_XINGT_CAN_H
#define XINGT_MSGS_MESSAGE_XINGT_CAN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace xingt_msgs
{
template <class ContainerAllocator>
struct xingt_can_
{
  typedef xingt_can_<ContainerAllocator> Type;

  xingt_can_()
    : header()
    , theta()
    , velocity()
    , acc()  {
    }
  xingt_can_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , theta(_alloc)
    , velocity(_alloc)
    , acc(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _theta_type;
  _theta_type theta;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acc_type;
  _acc_type acc;





  typedef boost::shared_ptr< ::xingt_msgs::xingt_can_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xingt_msgs::xingt_can_<ContainerAllocator> const> ConstPtr;

}; // struct xingt_can_

typedef ::xingt_msgs::xingt_can_<std::allocator<void> > xingt_can;

typedef boost::shared_ptr< ::xingt_msgs::xingt_can > xingt_canPtr;
typedef boost::shared_ptr< ::xingt_msgs::xingt_can const> xingt_canConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xingt_msgs::xingt_can_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xingt_msgs::xingt_can_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xingt_msgs::xingt_can_<ContainerAllocator1> & lhs, const ::xingt_msgs::xingt_can_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.theta == rhs.theta &&
    lhs.velocity == rhs.velocity &&
    lhs.acc == rhs.acc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xingt_msgs::xingt_can_<ContainerAllocator1> & lhs, const ::xingt_msgs::xingt_can_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xingt_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xingt_msgs::xingt_can_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xingt_msgs::xingt_can_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xingt_msgs::xingt_can_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xingt_msgs::xingt_can_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xingt_msgs::xingt_can_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xingt_msgs::xingt_can_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xingt_msgs::xingt_can_<ContainerAllocator> >
{
  static const char* value()
  {
    return "201e3b6a54967d49ef943463f351318e";
  }

  static const char* value(const ::xingt_msgs::xingt_can_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x201e3b6a54967d49ULL;
  static const uint64_t static_value2 = 0xef943463f351318eULL;
};

template<class ContainerAllocator>
struct DataType< ::xingt_msgs::xingt_can_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xingt_msgs/xingt_can";
  }

  static const char* value(const ::xingt_msgs::xingt_can_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xingt_msgs::xingt_can_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"geometry_msgs/Vector3 theta\n"
"geometry_msgs/Vector3 velocity \n"
"geometry_msgs/Vector3 acc\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::xingt_msgs::xingt_can_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xingt_msgs::xingt_can_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.theta);
      stream.next(m.velocity);
      stream.next(m.acc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct xingt_can_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xingt_msgs::xingt_can_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xingt_msgs::xingt_can_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "theta: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.theta);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "acc: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XINGT_MSGS_MESSAGE_XINGT_CAN_H