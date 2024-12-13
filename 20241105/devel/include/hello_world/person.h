// Generated by gencpp from file hello_world/person.msg
// DO NOT EDIT!


#ifndef HELLO_WORLD_MESSAGE_PERSON_H
#define HELLO_WORLD_MESSAGE_PERSON_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hello_world
{
template <class ContainerAllocator>
struct person_
{
  typedef person_<ContainerAllocator> Type;

  person_()
    : a(0)
    , b(0.0)  {
    }
  person_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _a_type;
  _a_type a;

   typedef float _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::hello_world::person_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hello_world::person_<ContainerAllocator> const> ConstPtr;

}; // struct person_

typedef ::hello_world::person_<std::allocator<void> > person;

typedef boost::shared_ptr< ::hello_world::person > personPtr;
typedef boost::shared_ptr< ::hello_world::person const> personConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hello_world::person_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hello_world::person_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hello_world::person_<ContainerAllocator1> & lhs, const ::hello_world::person_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hello_world::person_<ContainerAllocator1> & lhs, const ::hello_world::person_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hello_world

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hello_world::person_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hello_world::person_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hello_world::person_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hello_world::person_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hello_world::person_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hello_world::person_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hello_world::person_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c42adccf478b67fc840a040c9ca6483b";
  }

  static const char* value(const ::hello_world::person_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc42adccf478b67fcULL;
  static const uint64_t static_value2 = 0x840a040c9ca6483bULL;
};

template<class ContainerAllocator>
struct DataType< ::hello_world::person_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hello_world/person";
  }

  static const char* value(const ::hello_world::person_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hello_world::person_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 a\n"
"float32 b\n"
;
  }

  static const char* value(const ::hello_world::person_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hello_world::person_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct person_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hello_world::person_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hello_world::person_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<float>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HELLO_WORLD_MESSAGE_PERSON_H
