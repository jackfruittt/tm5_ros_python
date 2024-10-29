// Generated by gencpp from file tm_msgs/ConnectTMRequest.msg
// DO NOT EDIT!


#ifndef TM_MSGS_MESSAGE_CONNECTTMREQUEST_H
#define TM_MSGS_MESSAGE_CONNECTTMREQUEST_H


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
struct ConnectTMRequest_
{
  typedef ConnectTMRequest_<ContainerAllocator> Type;

  ConnectTMRequest_()
    : server(0)
    , connect(false)
    , reconnect(false)
    , timeout(0.0)
    , timeval(0.0)  {
    }
  ConnectTMRequest_(const ContainerAllocator& _alloc)
    : server(0)
    , connect(false)
    , reconnect(false)
    , timeout(0.0)
    , timeval(0.0)  {
  (void)_alloc;
    }



   typedef int8_t _server_type;
  _server_type server;

   typedef uint8_t _connect_type;
  _connect_type connect;

   typedef uint8_t _reconnect_type;
  _reconnect_type reconnect;

   typedef double _timeout_type;
  _timeout_type timeout;

   typedef double _timeval_type;
  _timeval_type timeval;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(TMSVR)
  #undef TMSVR
#endif
#if defined(_WIN32) && defined(TMSCT)
  #undef TMSCT
#endif

  enum {
    TMSVR = 0,
    TMSCT = 1,
  };


  typedef boost::shared_ptr< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ConnectTMRequest_

typedef ::tm_msgs::ConnectTMRequest_<std::allocator<void> > ConnectTMRequest;

typedef boost::shared_ptr< ::tm_msgs::ConnectTMRequest > ConnectTMRequestPtr;
typedef boost::shared_ptr< ::tm_msgs::ConnectTMRequest const> ConnectTMRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tm_msgs::ConnectTMRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tm_msgs::ConnectTMRequest_<ContainerAllocator1> & lhs, const ::tm_msgs::ConnectTMRequest_<ContainerAllocator2> & rhs)
{
  return lhs.server == rhs.server &&
    lhs.connect == rhs.connect &&
    lhs.reconnect == rhs.reconnect &&
    lhs.timeout == rhs.timeout &&
    lhs.timeval == rhs.timeval;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tm_msgs::ConnectTMRequest_<ContainerAllocator1> & lhs, const ::tm_msgs::ConnectTMRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "689402be41aef39745cc8a1b503617c8";
  }

  static const char* value(const ::tm_msgs::ConnectTMRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x689402be41aef397ULL;
  static const uint64_t static_value2 = 0x45cc8a1b503617c8ULL;
};

template<class ContainerAllocator>
struct DataType< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tm_msgs/ConnectTMRequest";
  }

  static const char* value(const ::tm_msgs::ConnectTMRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#float64 DEFAULT_TIMEOUT = 1.0\n"
"#float64 DEFAULT_TIMEVAL = 3.0\n"
"#server :   TMSVR, TMSCT\n"
"#connect/reconnect : In Connection phase. \n"
"#connect    == true. Keeping connect function\n"
"#reconnect  == true. If connect funcition fail, It will reconnect.\n"
"\n"
"int8 TMSVR = 0\n"
"int8 TMSCT = 1\n"
"\n"
"int8 server\n"
"bool connect\n"
"bool reconnect\n"
"float64 timeout\n"
"float64 timeval\n"
;
  }

  static const char* value(const ::tm_msgs::ConnectTMRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.server);
      stream.next(m.connect);
      stream.next(m.reconnect);
      stream.next(m.timeout);
      stream.next(m.timeval);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConnectTMRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tm_msgs::ConnectTMRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tm_msgs::ConnectTMRequest_<ContainerAllocator>& v)
  {
    s << indent << "server: ";
    Printer<int8_t>::stream(s, indent + "  ", v.server);
    s << indent << "connect: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.connect);
    s << indent << "reconnect: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reconnect);
    s << indent << "timeout: ";
    Printer<double>::stream(s, indent + "  ", v.timeout);
    s << indent << "timeval: ";
    Printer<double>::stream(s, indent + "  ", v.timeval);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TM_MSGS_MESSAGE_CONNECTTMREQUEST_H
