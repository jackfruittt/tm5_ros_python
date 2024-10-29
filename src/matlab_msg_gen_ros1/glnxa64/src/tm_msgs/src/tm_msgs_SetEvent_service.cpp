// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/SetEventRequest
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
#include "tm_msgs/SetEvent.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_SetEventRequest_common : public MATLABROSMsgInterface<tm_msgs::SetEvent::Request> {
  public:
    virtual ~tm_msgs_msg_SetEventRequest_common(){}
    virtual void copy_from_struct(tm_msgs::SetEvent::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::SetEvent::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_SetEventRequest_common::copy_from_struct(tm_msgs::SetEvent::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //func
        const matlab::data::TypedArray<int8_t> func_arr = arr["Func"];
        msg->func = func_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Func' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Func' is wrong type; expected a int8.");
    }
    try {
        //arg0
        const matlab::data::TypedArray<int8_t> arg0_arr = arr["Arg0"];
        msg->arg0 = arg0_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Arg0' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Arg0' is wrong type; expected a int8.");
    }
    try {
        //arg1
        const matlab::data::TypedArray<int8_t> arg1_arr = arr["Arg1"];
        msg->arg1 = arg1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Arg1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Arg1' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_SetEventRequest_common::get_arr(MDFactory_T& factory, const tm_msgs::SetEvent::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","TAG","WAITTAG","STOP","PAUSE","RESUME","EXIT","Func","Arg0","Arg1"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/SetEventRequest");
    // TAG
    auto currentElement_TAG = (msg + ctr)->TAG;
    outArray[ctr]["TAG"] = factory.createScalar(static_cast<int8_t>(currentElement_TAG));
    // WAIT_TAG
    auto currentElement_WAIT_TAG = (msg + ctr)->WAIT_TAG;
    outArray[ctr]["WAITTAG"] = factory.createScalar(static_cast<int8_t>(currentElement_WAIT_TAG));
    // STOP
    auto currentElement_STOP = (msg + ctr)->STOP;
    outArray[ctr]["STOP"] = factory.createScalar(static_cast<int8_t>(currentElement_STOP));
    // PAUSE
    auto currentElement_PAUSE = (msg + ctr)->PAUSE;
    outArray[ctr]["PAUSE"] = factory.createScalar(static_cast<int8_t>(currentElement_PAUSE));
    // RESUME
    auto currentElement_RESUME = (msg + ctr)->RESUME;
    outArray[ctr]["RESUME"] = factory.createScalar(static_cast<int8_t>(currentElement_RESUME));
    // EXIT
    auto currentElement_EXIT = (msg + ctr)->EXIT;
    outArray[ctr]["EXIT"] = factory.createScalar(static_cast<int8_t>(currentElement_EXIT));
    // func
    auto currentElement_func = (msg + ctr)->func;
    outArray[ctr]["Func"] = factory.createScalar(currentElement_func);
    // arg0
    auto currentElement_arg0 = (msg + ctr)->arg0;
    outArray[ctr]["Arg0"] = factory.createScalar(currentElement_arg0);
    // arg1
    auto currentElement_arg1 = (msg + ctr)->arg1;
    outArray[ctr]["Arg1"] = factory.createScalar(currentElement_arg1);
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_SetEventResponse_common : public MATLABROSMsgInterface<tm_msgs::SetEvent::Response> {
  public:
    virtual ~tm_msgs_msg_SetEventResponse_common(){}
    virtual void copy_from_struct(tm_msgs::SetEvent::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::SetEvent::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_SetEventResponse_common::copy_from_struct(tm_msgs::SetEvent::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T tm_msgs_msg_SetEventResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::SetEvent::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Ok"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/SetEventResponse");
    // ok
    auto currentElement_ok = (msg + ctr)->ok;
    outArray[ctr]["Ok"] = factory.createScalar(static_cast<bool>(currentElement_ok));
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_SetEvent_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_SetEvent_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_SetEvent_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::SetEvent::Request,tm_msgs_msg_SetEventRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::SetEvent::Response,tm_msgs_msg_SetEventResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_SetEvent_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::SetEvent::Request,tm_msgs::SetEvent::Request::ConstPtr,tm_msgs_msg_SetEventRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::SetEvent::Response,tm_msgs::SetEvent::Response::ConstPtr,tm_msgs_msg_SetEventResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_SetEvent_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::SetEvent::Request,tm_msgs::SetEvent::Response,tm_msgs_msg_SetEventRequest_common,tm_msgs_msg_SetEventResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_SetEvent_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::SetEvent,tm_msgs::SetEvent::Request,tm_msgs::SetEvent::Response,tm_msgs_msg_SetEventRequest_common,tm_msgs_msg_SetEventResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_SetEvent_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::SetEventRequest,tm_msgs_msg_SetEventRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::SetEventResponse,tm_msgs_msg_SetEventResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_SetEventRequest_common, MATLABROSMsgInterface<tm_msgs::SetEventRequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_SetEventResponse_common, MATLABROSMsgInterface<tm_msgs::SetEventResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_SetEvent_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
