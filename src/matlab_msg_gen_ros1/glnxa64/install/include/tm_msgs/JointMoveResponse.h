// Generated by gencpp from file tm_msgs/JointMoveResponse.msg
// DO NOT EDIT!


#ifndef TM_MSGS_MESSAGE_JOINTMOVERESPONSE_H
#define TM_MSGS_MESSAGE_JOINTMOVERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tm_msgs
{
template <class ContainerAllocator>
struct JointMoveResponse_
{
  typedef JointMoveResponse_<ContainerAllocator> Type;

  JointMoveResponse_()
    : isOK(false)  {
    }
  JointMoveResponse_(const ContainerAllocator& _alloc)
    : isOK(false)  {
  (void)_alloc;
    }



   typedef uint8_t _isOK_type;
  _isOK_type isOK;





  typedef boost::shared_ptr< ::tm_msgs::JointMoveResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tm_msgs::JointMoveResponse_<ContainerAllocator> const> ConstPtr;

}; // struct JointMoveResponse_

typedef ::tm_msgs::JointMoveResponse_<std::allocator<void> > JointMoveResponse;

typedef boost::shared_ptr< ::tm_msgs::JointMoveResponse > JointMoveResponsePtr;
typedef boost::shared_ptr< ::tm_msgs::JointMoveResponse const> JointMoveResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tm_msgs::JointMoveResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tm_msgs::JointMoveResponse_<ContainerAllocator1> & lhs, const ::tm_msgs::JointMoveResponse_<ContainerAllocator2> & rhs)
{
  return lhs.isOK == rhs.isOK;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tm_msgs::JointMoveResponse_<ContainerAllocator1> & lhs, const ::tm_msgs::JointMoveResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tm_msgs::JointMoveResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_msgs::JointMoveResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_msgs::JointMoveResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "497312386196714e5f4a62411b9bd684";
  }

  static const char* value(const ::tm_msgs::JointMoveResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x497312386196714eULL;
  static const uint64_t static_value2 = 0x5f4a62411b9bd684ULL;
};

template<class ContainerAllocator>
struct DataType< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tm_msgs/JointMoveResponse";
  }

  static const char* value(const ::tm_msgs::JointMoveResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool isOK\n"
;
  }

  static const char* value(const ::tm_msgs::JointMoveResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.isOK);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointMoveResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tm_msgs::JointMoveResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tm_msgs::JointMoveResponse_<ContainerAllocator>& v)
  {
    s << indent << "isOK: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isOK);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TM_MSGS_MESSAGE_JOINTMOVERESPONSE_H
