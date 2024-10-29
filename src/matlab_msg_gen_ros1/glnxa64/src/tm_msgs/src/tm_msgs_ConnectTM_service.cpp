// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/ConnectTMRequest
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#pragma warning(disable : 4068)
#pragma warning(disable : 4245)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "ros/ros.h"
#include "tm_msgs/ConnectTM.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_ConnectTMRequest_common : public MATLABROSMsgInterface<tm_msgs::ConnectTM::Request> {
  public:
    virtual ~tm_msgs_msg_ConnectTMRequest_common(){}
    virtual void copy_from_struct(tm_msgs::ConnectTM::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::ConnectTM::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_ConnectTMRequest_common::copy_from_struct(tm_msgs::ConnectTM::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //server
        const matlab::data::TypedArray<int8_t> server_arr = arr["Server"];
        msg->server = server_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Server' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Server' is wrong type; expected a int8.");
    }
    try {
        //connect
        const matlab::data::TypedArray<bool> connect_arr = arr["Connect"];
        msg->connect = connect_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Connect' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Connect' is wrong type; expected a logical.");
    }
    try {
        //reconnect
        const matlab::data::TypedArray<bool> reconnect_arr = arr["Reconnect"];
        msg->reconnect = reconnect_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Reconnect' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Reconnect' is wrong type; expected a logical.");
    }
    try {
        //timeout
        const matlab::data::TypedArray<double> timeout_arr = arr["Timeout"];
        msg->timeout = timeout_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Timeout' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Timeout' is wrong type; expected a double.");
    }
    try {
        //timeval
        const matlab::data::TypedArray<double> timeval_arr = arr["Timeval"];
        msg->timeval = timeval_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Timeval' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Timeval' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_ConnectTMRequest_common::get_arr(MDFactory_T& factory, const tm_msgs::ConnectTM::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","TMSVR","TMSCT","Server","Connect","Reconnect","Timeout","Timeval"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/ConnectTMRequest");
    // TMSVR
    auto currentElement_TMSVR = (msg + ctr)->TMSVR;
    outArray[ctr]["TMSVR"] = factory.createScalar(static_cast<int8_t>(currentElement_TMSVR));
    // TMSCT
    auto currentElement_TMSCT = (msg + ctr)->TMSCT;
    outArray[ctr]["TMSCT"] = factory.createScalar(static_cast<int8_t>(currentElement_TMSCT));
    // server
    auto currentElement_server = (msg + ctr)->server;
    outArray[ctr]["Server"] = factory.createScalar(currentElement_server);
    // connect
    auto currentElement_connect = (msg + ctr)->connect;
    outArray[ctr]["Connect"] = factory.createScalar(static_cast<bool>(currentElement_connect));
    // reconnect
    auto currentElement_reconnect = (msg + ctr)->reconnect;
    outArray[ctr]["Reconnect"] = factory.createScalar(static_cast<bool>(currentElement_reconnect));
    // timeout
    auto currentElement_timeout = (msg + ctr)->timeout;
    outArray[ctr]["Timeout"] = factory.createScalar(currentElement_timeout);
    // timeval
    auto currentElement_timeval = (msg + ctr)->timeval;
    outArray[ctr]["Timeval"] = factory.createScalar(currentElement_timeval);
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_ConnectTMResponse_common : public MATLABROSMsgInterface<tm_msgs::ConnectTM::Response> {
  public:
    virtual ~tm_msgs_msg_ConnectTMResponse_common(){}
    virtual void copy_from_struct(tm_msgs::ConnectTM::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::ConnectTM::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_ConnectTMResponse_common::copy_from_struct(tm_msgs::ConnectTM::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //ok
        const matlab::data::TypedArray<bool> ok_arr = arr["Ok"];
        msg->ok = ok_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Ok' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Ok' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_ConnectTMResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::ConnectTM::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Ok"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/ConnectTMResponse");
    // ok
    auto currentElement_ok = (msg + ctr)->ok;
    outArray[ctr]["Ok"] = factory.createScalar(static_cast<bool>(currentElement_ok));
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_ConnectTM_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_ConnectTM_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_ConnectTM_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::ConnectTM::Request,tm_msgs_msg_ConnectTMRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::ConnectTM::Response,tm_msgs_msg_ConnectTMResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_ConnectTM_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::ConnectTM::Request,tm_msgs::ConnectTM::Request::ConstPtr,tm_msgs_msg_ConnectTMRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::ConnectTM::Response,tm_msgs::ConnectTM::Response::ConstPtr,tm_msgs_msg_ConnectTMResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_ConnectTM_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::ConnectTM::Request,tm_msgs::ConnectTM::Response,tm_msgs_msg_ConnectTMRequest_common,tm_msgs_msg_ConnectTMResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_ConnectTM_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::ConnectTM,tm_msgs::ConnectTM::Request,tm_msgs::ConnectTM::Response,tm_msgs_msg_ConnectTMRequest_common,tm_msgs_msg_ConnectTMResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_ConnectTM_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::ConnectTMRequest,tm_msgs_msg_ConnectTMRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::ConnectTMResponse,tm_msgs_msg_ConnectTMResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_ConnectTMRequest_common, MATLABROSMsgInterface<tm_msgs::ConnectTMRequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_ConnectTMResponse_common, MATLABROSMsgInterface<tm_msgs::ConnectTMResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_ConnectTM_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
