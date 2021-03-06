// Generated by gencpp from file legged_robot/PWM.msg
// DO NOT EDIT!


#ifndef LEGGED_ROBOT_MESSAGE_PWM_H
#define LEGGED_ROBOT_MESSAGE_PWM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace legged_robot
{
template <class ContainerAllocator>
struct PWM_
{
  typedef PWM_<ContainerAllocator> Type;

  PWM_()
    : pwm_duty(0)  {
    }
  PWM_(const ContainerAllocator& _alloc)
    : pwm_duty(0)  {
    }



   typedef int8_t _pwm_duty_type;
  _pwm_duty_type pwm_duty;




  typedef boost::shared_ptr< ::legged_robot::PWM_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::legged_robot::PWM_<ContainerAllocator> const> ConstPtr;

}; // struct PWM_

typedef ::legged_robot::PWM_<std::allocator<void> > PWM;

typedef boost::shared_ptr< ::legged_robot::PWM > PWMPtr;
typedef boost::shared_ptr< ::legged_robot::PWM const> PWMConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::legged_robot::PWM_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::legged_robot::PWM_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace legged_robot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'legged_robot': ['/home/legged/Legged/catkin_ws/src/legged_robot/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::legged_robot::PWM_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::legged_robot::PWM_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::legged_robot::PWM_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::legged_robot::PWM_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::legged_robot::PWM_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::legged_robot::PWM_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::legged_robot::PWM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc1c76e848affc91996664a93666ea97";
  }

  static const char* value(const ::legged_robot::PWM_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc1c76e848affc91ULL;
  static const uint64_t static_value2 = 0x996664a93666ea97ULL;
};

template<class ContainerAllocator>
struct DataType< ::legged_robot::PWM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "legged_robot/PWM";
  }

  static const char* value(const ::legged_robot::PWM_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::legged_robot::PWM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 pwm_duty\n\
";
  }

  static const char* value(const ::legged_robot::PWM_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::legged_robot::PWM_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pwm_duty);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PWM_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::legged_robot::PWM_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::legged_robot::PWM_<ContainerAllocator>& v)
  {
    s << indent << "pwm_duty: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pwm_duty);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEGGED_ROBOT_MESSAGE_PWM_H
