// Generated by gencpp from file viso2_ros/VisoInfo.msg
// DO NOT EDIT!


#ifndef VISO2_ROS_MESSAGE_VISOINFO_H
#define VISO2_ROS_MESSAGE_VISOINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace viso2_ros
{
template <class ContainerAllocator>
struct VisoInfo_
{
  typedef VisoInfo_<ContainerAllocator> Type;

  VisoInfo_()
    : header()
    , got_lost(false)
    , change_reference_frame(false)
    , motion_estimate_valid(false)
    , num_matches(0)
    , num_inliers(0)
    , runtime(0.0)  {
    }
  VisoInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , got_lost(false)
    , change_reference_frame(false)
    , motion_estimate_valid(false)
    , num_matches(0)
    , num_inliers(0)
    , runtime(0.0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _got_lost_type;
  _got_lost_type got_lost;

   typedef uint8_t _change_reference_frame_type;
  _change_reference_frame_type change_reference_frame;

   typedef uint8_t _motion_estimate_valid_type;
  _motion_estimate_valid_type motion_estimate_valid;

   typedef int32_t _num_matches_type;
  _num_matches_type num_matches;

   typedef int32_t _num_inliers_type;
  _num_inliers_type num_inliers;

   typedef double _runtime_type;
  _runtime_type runtime;




  typedef boost::shared_ptr< ::viso2_ros::VisoInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::viso2_ros::VisoInfo_<ContainerAllocator> const> ConstPtr;

}; // struct VisoInfo_

typedef ::viso2_ros::VisoInfo_<std::allocator<void> > VisoInfo;

typedef boost::shared_ptr< ::viso2_ros::VisoInfo > VisoInfoPtr;
typedef boost::shared_ptr< ::viso2_ros::VisoInfo const> VisoInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::viso2_ros::VisoInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::viso2_ros::VisoInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace viso2_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'viso2_ros': ['/home/odroid/barc/cam_test/src/viso2/viso2_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::viso2_ros::VisoInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::viso2_ros::VisoInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::viso2_ros::VisoInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::viso2_ros::VisoInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::viso2_ros::VisoInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::viso2_ros::VisoInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::viso2_ros::VisoInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "765500d8b83bf74f7715c6e2e8e89092";
  }

  static const char* value(const ::viso2_ros::VisoInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x765500d8b83bf74fULL;
  static const uint64_t static_value2 = 0x7715c6e2e8e89092ULL;
};

template<class ContainerAllocator>
struct DataType< ::viso2_ros::VisoInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "viso2_ros/VisoInfo";
  }

  static const char* value(const ::viso2_ros::VisoInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::viso2_ros::VisoInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Internal information on the\n\
# viso2 algorithm parameters\n\
# and results\n\
\n\
Header header\n\
\n\
# True if the previous iteration of viso2\n\
# was not able to complete the matching process\n\
# therefore the visual odometer is re-started.\n\
bool got_lost\n\
\n\
# True if in the next run the reference \n\
# frame will be changed. This is the case\n\
# when the number of inliers drops below\n\
# a threshold or the previous motion estimate\n\
# failed in last motion estimation.\n\
bool change_reference_frame\n\
\n\
# info from motion estimator\n\
bool motion_estimate_valid\n\
int32 num_matches\n\
int32 num_inliers\n\
\n\
# runtime of last iteration in seconds\n\
float64 runtime\n\
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
";
  }

  static const char* value(const ::viso2_ros::VisoInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::viso2_ros::VisoInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.got_lost);
      stream.next(m.change_reference_frame);
      stream.next(m.motion_estimate_valid);
      stream.next(m.num_matches);
      stream.next(m.num_inliers);
      stream.next(m.runtime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct VisoInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::viso2_ros::VisoInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::viso2_ros::VisoInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "got_lost: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.got_lost);
    s << indent << "change_reference_frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.change_reference_frame);
    s << indent << "motion_estimate_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motion_estimate_valid);
    s << indent << "num_matches: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_matches);
    s << indent << "num_inliers: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_inliers);
    s << indent << "runtime: ";
    Printer<double>::stream(s, indent + "  ", v.runtime);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISO2_ROS_MESSAGE_VISOINFO_H
