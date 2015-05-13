// Generated by gencpp from file motor_control/BR_Encoder.msg
// DO NOT EDIT!


#ifndef MOTOR_CONTROL_MESSAGE_BR_ENCODER_H
#define MOTOR_CONTROL_MESSAGE_BR_ENCODER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motor_control
{
template <class ContainerAllocator>
struct BR_Encoder_
{
  typedef BR_Encoder_<ContainerAllocator> Type;

  BR_Encoder_()
    : encoder(0)  {
    }
  BR_Encoder_(const ContainerAllocator& _alloc)
    : encoder(0)  {
    }



   typedef uint32_t _encoder_type;
  _encoder_type encoder;




  typedef boost::shared_ptr< ::motor_control::BR_Encoder_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_control::BR_Encoder_<ContainerAllocator> const> ConstPtr;

}; // struct BR_Encoder_

typedef ::motor_control::BR_Encoder_<std::allocator<void> > BR_Encoder;

typedef boost::shared_ptr< ::motor_control::BR_Encoder > BR_EncoderPtr;
typedef boost::shared_ptr< ::motor_control::BR_Encoder const> BR_EncoderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_control::BR_Encoder_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_control::BR_Encoder_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace motor_control

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'motor_control': ['/home/legged/Legged/catkin_ws/src/motor_control/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::motor_control::BR_Encoder_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_control::BR_Encoder_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_control::BR_Encoder_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_control::BR_Encoder_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_control::BR_Encoder_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_control::BR_Encoder_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_control::BR_Encoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "281bf2da8de91e03210bb87e7782dcbd";
  }

  static const char* value(const ::motor_control::BR_Encoder_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x281bf2da8de91e03ULL;
  static const uint64_t static_value2 = 0x210bb87e7782dcbdULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_control::BR_Encoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_control/BR_Encoder";
  }

  static const char* value(const ::motor_control::BR_Encoder_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_control::BR_Encoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 encoder\n\
";
  }

  static const char* value(const ::motor_control::BR_Encoder_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_control::BR_Encoder_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.encoder);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct BR_Encoder_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_control::BR_Encoder_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_control::BR_Encoder_<ContainerAllocator>& v)
  {
    s << indent << "encoder: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.encoder);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_CONTROL_MESSAGE_BR_ENCODER_H