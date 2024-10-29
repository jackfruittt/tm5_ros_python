// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/SetIORequest
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
#include "tm_msgs/SetIO.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_SetIORequest_common : public MATLABROSMsgInterface<tm_msgs::SetIO::Request> {
  public:
    virtual ~tm_msgs_msg_SetIORequest_common(){}
    virtual void copy_from_struct(tm_msgs::SetIO::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::SetIO::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_SetIORequest_common::copy_from_struct(tm_msgs::SetIO::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //module
        const matlab::data::TypedArray<int8_t> module_arr = arr["Module"];
        msg->module = module_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Module' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Module' is wrong type; expected a int8.");
    }
    try {
        //type
        const matlab::data::TypedArray<int8_t> type_arr = arr["Type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Type' is wrong type; expected a int8.");
    }
    try {
        //pin
        const matlab::data::TypedArray<int8_t> pin_arr = arr["Pin"];
        msg->pin = pin_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Pin' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Pin' is wrong type; expected a int8.");
    }
    try {
        //state
        const matlab::data::TypedArray<float> state_arr = arr["State"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'State' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'State' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_SetIORequest_common::get_arr(MDFactory_T& factory, const tm_msgs::SetIO::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MODULECONTROLBOX","MODULEENDEFFECTOR","TYPEDIGITALIN","TYPEDIGITALOUT","TYPEINSTANTDO","TYPEANALOGIN","TYPEANALOGOUT","TYPEINSTANTAO","STATEOFF","STATEON","Module","Type","Pin","State"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/SetIORequest");
    // MODULE_CONTROLBOX
    auto currentElement_MODULE_CONTROLBOX = (msg + ctr)->MODULE_CONTROLBOX;
    outArray[ctr]["MODULECONTROLBOX"] = factory.createScalar(static_cast<int8_t>(currentElement_MODULE_CONTROLBOX));
    // MODULE_ENDEFFECTOR
    auto currentElement_MODULE_ENDEFFECTOR = (msg + ctr)->MODULE_ENDEFFECTOR;
    outArray[ctr]["MODULEENDEFFECTOR"] = factory.createScalar(static_cast<int8_t>(currentElement_MODULE_ENDEFFECTOR));
    // TYPE_DIGITAL_IN
    auto currentElement_TYPE_DIGITAL_IN = (msg + ctr)->TYPE_DIGITAL_IN;
    outArray[ctr]["TYPEDIGITALIN"] = factory.createScalar(static_cast<int8_t>(currentElement_TYPE_DIGITAL_IN));
    // TYPE_DIGITAL_OUT
    auto currentElement_TYPE_DIGITAL_OUT = (msg + ctr)->TYPE_DIGITAL_OUT;
    outArray[ctr]["TYPEDIGITALOUT"] = factory.createScalar(static_cast<int8_t>(currentElement_TYPE_DIGITAL_OUT));
    // TYPE_INSTANT_DO
    auto currentElement_TYPE_INSTANT_DO = (msg + ctr)->TYPE_INSTANT_DO;
    outArray[ctr]["TYPEINSTANTDO"] = factory.createScalar(static_cast<int8_t>(currentElement_TYPE_INSTANT_DO));
    // TYPE_ANALOG_IN
    auto currentElement_TYPE_ANALOG_IN = (msg + ctr)->TYPE_ANALOG_IN;
    outArray[ctr]["TYPEANALOGIN"] = factory.createScalar(static_cast<int8_t>(currentElement_TYPE_ANALOG_IN));
    // TYPE_ANALOG_OUT
    auto currentElement_TYPE_ANALOG_OUT = (msg + ctr)->TYPE_ANALOG_OUT;
    outArray[ctr]["TYPEANALOGOUT"] = factory.createScalar(static_cast<int8_t>(currentElement_TYPE_ANALOG_OUT));
    // TYPE_INSTANT_AO
    auto currentElement_TYPE_INSTANT_AO = (msg + ctr)->TYPE_INSTANT_AO;
    outArray[ctr]["TYPEINSTANTAO"] = factory.createScalar(static_cast<int8_t>(currentElement_TYPE_INSTANT_AO));
    // STATE_OFF
    auto currentElement_STATE_OFF = (msg + ctr)->STATE_OFF;
    outArray[ctr]["STATEOFF"] = factory.createScalar(static_cast<int8_t>(currentElement_STATE_OFF));
    // STATE_ON
    auto currentElement_STATE_ON = (msg + ctr)->STATE_ON;
    outArray[ctr]["STATEON"] = factory.createScalar(static_cast<int8_t>(currentElement_STATE_ON));
    // module
    auto currentElement_module = (msg + ctr)->module;
    outArray[ctr]["Module"] = factory.createScalar(currentElement_module);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["Type"] = factory.createScalar(currentElement_type);
    // pin
    auto currentElement_pin = (msg + ctr)->pin;
    outArray[ctr]["Pin"] = factory.createScalar(currentElement_pin);
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["State"] = factory.createScalar(currentElement_state);
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_SetIOResponse_common : public MATLABROSMsgInterface<tm_msgs::SetIO::Response> {
  public:
    virtual ~tm_msgs_msg_SetIOResponse_common(){}
    virtual void copy_from_struct(tm_msgs::SetIO::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::SetIO::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_SetIOResponse_common::copy_from_struct(tm_msgs::SetIO::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T tm_msgs_msg_SetIOResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::SetIO::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Ok"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/SetIOResponse");
    // ok
    auto currentElement_ok = (msg + ctr)->ok;
    outArray[ctr]["Ok"] = factory.createScalar(static_cast<bool>(currentElement_ok));
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_SetIO_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_SetIO_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_SetIO_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::SetIO::Request,tm_msgs_msg_SetIORequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::SetIO::Response,tm_msgs_msg_SetIOResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_SetIO_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::SetIO::Request,tm_msgs::SetIO::Request::ConstPtr,tm_msgs_msg_SetIORequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::SetIO::Response,tm_msgs::SetIO::Response::ConstPtr,tm_msgs_msg_SetIOResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_SetIO_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::SetIO::Request,tm_msgs::SetIO::Response,tm_msgs_msg_SetIORequest_common,tm_msgs_msg_SetIOResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_SetIO_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::SetIO,tm_msgs::SetIO::Request,tm_msgs::SetIO::Response,tm_msgs_msg_SetIORequest_common,tm_msgs_msg_SetIOResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_SetIO_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::SetIORequest,tm_msgs_msg_SetIORequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::SetIOResponse,tm_msgs_msg_SetIOResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_SetIORequest_common, MATLABROSMsgInterface<tm_msgs::SetIORequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_SetIOResponse_common, MATLABROSMsgInterface<tm_msgs::SetIOResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_SetIO_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
