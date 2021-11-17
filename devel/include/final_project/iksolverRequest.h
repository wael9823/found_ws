// Generated by gencpp from file final_project/iksolverRequest.msg
// DO NOT EDIT!


#ifndef FINAL_PROJECT_MESSAGE_IKSOLVERREQUEST_H
#define FINAL_PROJECT_MESSAGE_IKSOLVERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace final_project
{
template <class ContainerAllocator>
struct iksolverRequest_
{
  typedef iksolverRequest_<ContainerAllocator> Type;

  iksolverRequest_()
    : desired_pose()  {
    }
  iksolverRequest_(const ContainerAllocator& _alloc)
    : desired_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _desired_pose_type;
  _desired_pose_type desired_pose;





  typedef boost::shared_ptr< ::final_project::iksolverRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::final_project::iksolverRequest_<ContainerAllocator> const> ConstPtr;

}; // struct iksolverRequest_

typedef ::final_project::iksolverRequest_<std::allocator<void> > iksolverRequest;

typedef boost::shared_ptr< ::final_project::iksolverRequest > iksolverRequestPtr;
typedef boost::shared_ptr< ::final_project::iksolverRequest const> iksolverRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::final_project::iksolverRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::final_project::iksolverRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::final_project::iksolverRequest_<ContainerAllocator1> & lhs, const ::final_project::iksolverRequest_<ContainerAllocator2> & rhs)
{
  return lhs.desired_pose == rhs.desired_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::final_project::iksolverRequest_<ContainerAllocator1> & lhs, const ::final_project::iksolverRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace final_project

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::final_project::iksolverRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::final_project::iksolverRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::final_project::iksolverRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::final_project::iksolverRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::final_project::iksolverRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::final_project::iksolverRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::final_project::iksolverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0538590fc0be5b737b11f5be6e5b1759";
  }

  static const char* value(const ::final_project::iksolverRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0538590fc0be5b73ULL;
  static const uint64_t static_value2 = 0x7b11f5be6e5b1759ULL;
};

template<class ContainerAllocator>
struct DataType< ::final_project::iksolverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "final_project/iksolverRequest";
  }

  static const char* value(const ::final_project::iksolverRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::final_project::iksolverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose desired_pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::final_project::iksolverRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::final_project::iksolverRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.desired_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct iksolverRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::final_project::iksolverRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::final_project::iksolverRequest_<ContainerAllocator>& v)
  {
    s << indent << "desired_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.desired_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FINAL_PROJECT_MESSAGE_IKSOLVERREQUEST_H
