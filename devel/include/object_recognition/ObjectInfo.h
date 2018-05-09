// Generated by gencpp from file object_recognition/ObjectInfo.msg
// DO NOT EDIT!


#ifndef OBJECT_RECOGNITION_MESSAGE_OBJECTINFO_H
#define OBJECT_RECOGNITION_MESSAGE_OBJECTINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace object_recognition
{
template <class ContainerAllocator>
struct ObjectInfo_
{
  typedef ObjectInfo_<ContainerAllocator> Type;

  ObjectInfo_()
    : names()
    , x()
    , y()
    , theta()  {
    }
  ObjectInfo_(const ContainerAllocator& _alloc)
    : names(_alloc)
    , x(_alloc)
    , y(_alloc)
    , theta(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _names_type;
  _names_type names;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _x_type;
  _x_type x;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _y_type;
  _y_type y;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _theta_type;
  _theta_type theta;




  typedef boost::shared_ptr< ::object_recognition::ObjectInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_recognition::ObjectInfo_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectInfo_

typedef ::object_recognition::ObjectInfo_<std::allocator<void> > ObjectInfo;

typedef boost::shared_ptr< ::object_recognition::ObjectInfo > ObjectInfoPtr;
typedef boost::shared_ptr< ::object_recognition::ObjectInfo const> ObjectInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_recognition::ObjectInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_recognition::ObjectInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace object_recognition

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'baxter_core_msgs': ['/scratch/shared/baxter_ws/src/baxter_common/baxter_core_msgs/msg'], 'object_recognition': ['/home/cc/ee106b/sp18/class/ee106b-aaf/ros_workspaces/lab1_ws/src/object_recognition/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::object_recognition::ObjectInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_recognition::ObjectInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_recognition::ObjectInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_recognition::ObjectInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_recognition::ObjectInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_recognition::ObjectInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_recognition::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "16c44849a01069f6f5a236682938356e";
  }

  static const char* value(const ::object_recognition::ObjectInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x16c44849a01069f6ULL;
  static const uint64_t static_value2 = 0xf5a236682938356eULL;
};

template<class ContainerAllocator>
struct DataType< ::object_recognition::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_recognition/ObjectInfo";
  }

  static const char* value(const ::object_recognition::ObjectInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_recognition::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] names\n\
uint16[] x\n\
uint16[] y\n\
float32[] theta\n\
";
  }

  static const char* value(const ::object_recognition::ObjectInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_recognition::ObjectInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.names);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_recognition::ObjectInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_recognition::ObjectInfo_<ContainerAllocator>& v)
  {
    s << indent << "names[]" << std::endl;
    for (size_t i = 0; i < v.names.size(); ++i)
    {
      s << indent << "  names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.names[i]);
    }
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.y[i]);
    }
    s << indent << "theta[]" << std::endl;
    for (size_t i = 0; i < v.theta.size(); ++i)
    {
      s << indent << "  theta[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.theta[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_RECOGNITION_MESSAGE_OBJECTINFO_H
