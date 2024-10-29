// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/SendScriptRequest
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
#include "tm_msgs/SendScript.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_SendScriptRequest_common : public MATLABROSMsgInterface<tm_msgs::SendScript::Request> {
  public:
    virtual ~tm_msgs_msg_SendScriptRequest_common(){}
    virtual void copy_from_struct(tm_msgs::SendScript::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::SendScript::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_SendScriptRequest_common::copy_from_struct(tm_msgs::SendScript::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //id
        const matlab::data::CharArray id_arr = arr["Id"];
        msg->id = id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Id' is wrong type; expected a string.");
    }
    try {
        //script
        const matlab::data::CharArray script_arr = arr["Script"];
        msg->script = script_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Script' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Script' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_SendScriptRequest_common::get_arr(MDFactory_T& factory, const tm_msgs::SendScript::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Id","Script"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/SendScriptRequest");
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["Id"] = factory.createCharArray(currentElement_id);
    // script
    auto currentElement_script = (msg + ctr)->script;
    outArray[ctr]["Script"] = factory.createCharArray(currentElement_script);
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_SendScriptResponse_common : public MATLABROSMsgInterface<tm_msgs::SendScript::Response> {
  public:
    virtual ~tm_msgs_msg_SendScriptResponse_common(){}
    virtual void copy_from_struct(tm_msgs::SendScript::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::SendScript::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_SendScriptResponse_common::copy_from_struct(tm_msgs::SendScript::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T tm_msgs_msg_SendScriptResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::SendScript::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Ok"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/SendScriptResponse");
    // ok
    auto currentElement_ok = (msg + ctr)->ok;
    outArray[ctr]["Ok"] = factory.createScalar(static_cast<bool>(currentElement_ok));
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_SendScript_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_SendScript_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_SendScript_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::SendScript::Request,tm_msgs_msg_SendScriptRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::SendScript::Response,tm_msgs_msg_SendScriptResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_SendScript_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::SendScript::Request,tm_msgs::SendScript::Request::ConstPtr,tm_msgs_msg_SendScriptRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::SendScript::Response,tm_msgs::SendScript::Response::ConstPtr,tm_msgs_msg_SendScriptResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_SendScript_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::SendScript::Request,tm_msgs::SendScript::Response,tm_msgs_msg_SendScriptRequest_common,tm_msgs_msg_SendScriptResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_SendScript_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::SendScript,tm_msgs::SendScript::Request,tm_msgs::SendScript::Response,tm_msgs_msg_SendScriptRequest_common,tm_msgs_msg_SendScriptResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_SendScript_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::SendScriptRequest,tm_msgs_msg_SendScriptRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::SendScriptResponse,tm_msgs_msg_SendScriptResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_SendScriptRequest_common, MATLABROSMsgInterface<tm_msgs::SendScriptRequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_SendScriptResponse_common, MATLABROSMsgInterface<tm_msgs::SendScriptResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_SendScript_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
