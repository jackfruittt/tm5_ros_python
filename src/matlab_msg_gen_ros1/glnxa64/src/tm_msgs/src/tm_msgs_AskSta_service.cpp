// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/AskStaRequest
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
#include "tm_msgs/AskSta.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_AskStaRequest_common : public MATLABROSMsgInterface<tm_msgs::AskSta::Request> {
  public:
    virtual ~tm_msgs_msg_AskStaRequest_common(){}
    virtual void copy_from_struct(tm_msgs::AskSta::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::AskSta::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_AskStaRequest_common::copy_from_struct(tm_msgs::AskSta::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //subcmd
        const matlab::data::CharArray subcmd_arr = arr["Subcmd"];
        msg->subcmd = subcmd_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Subcmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Subcmd' is wrong type; expected a string.");
    }
    try {
        //subdata
        const matlab::data::CharArray subdata_arr = arr["Subdata"];
        msg->subdata = subdata_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Subdata' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Subdata' is wrong type; expected a string.");
    }
    try {
        //wait_time
        const matlab::data::TypedArray<double> wait_time_arr = arr["WaitTime"];
        msg->wait_time = wait_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'WaitTime' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'WaitTime' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_AskStaRequest_common::get_arr(MDFactory_T& factory, const tm_msgs::AskSta::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Subcmd","Subdata","WaitTime"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/AskStaRequest");
    // subcmd
    auto currentElement_subcmd = (msg + ctr)->subcmd;
    outArray[ctr]["Subcmd"] = factory.createCharArray(currentElement_subcmd);
    // subdata
    auto currentElement_subdata = (msg + ctr)->subdata;
    outArray[ctr]["Subdata"] = factory.createCharArray(currentElement_subdata);
    // wait_time
    auto currentElement_wait_time = (msg + ctr)->wait_time;
    outArray[ctr]["WaitTime"] = factory.createScalar(currentElement_wait_time);
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_AskStaResponse_common : public MATLABROSMsgInterface<tm_msgs::AskSta::Response> {
  public:
    virtual ~tm_msgs_msg_AskStaResponse_common(){}
    virtual void copy_from_struct(tm_msgs::AskSta::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::AskSta::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_AskStaResponse_common::copy_from_struct(tm_msgs::AskSta::Response* msg, const matlab::data::Struct& arr,
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
    try {
        //subcmd
        const matlab::data::CharArray subcmd_arr = arr["Subcmd"];
        msg->subcmd = subcmd_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Subcmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Subcmd' is wrong type; expected a string.");
    }
    try {
        //subdata
        const matlab::data::CharArray subdata_arr = arr["Subdata"];
        msg->subdata = subdata_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Subdata' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Subdata' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_AskStaResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::AskSta::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Ok","Subcmd","Subdata"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/AskStaResponse");
    // ok
    auto currentElement_ok = (msg + ctr)->ok;
    outArray[ctr]["Ok"] = factory.createScalar(static_cast<bool>(currentElement_ok));
    // subcmd
    auto currentElement_subcmd = (msg + ctr)->subcmd;
    outArray[ctr]["Subcmd"] = factory.createCharArray(currentElement_subcmd);
    // subdata
    auto currentElement_subdata = (msg + ctr)->subdata;
    outArray[ctr]["Subdata"] = factory.createCharArray(currentElement_subdata);
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_AskSta_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_AskSta_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_AskSta_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::AskSta::Request,tm_msgs_msg_AskStaRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::AskSta::Response,tm_msgs_msg_AskStaResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_AskSta_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::AskSta::Request,tm_msgs::AskSta::Request::ConstPtr,tm_msgs_msg_AskStaRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::AskSta::Response,tm_msgs::AskSta::Response::ConstPtr,tm_msgs_msg_AskStaResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_AskSta_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::AskSta::Request,tm_msgs::AskSta::Response,tm_msgs_msg_AskStaRequest_common,tm_msgs_msg_AskStaResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_AskSta_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::AskSta,tm_msgs::AskSta::Request,tm_msgs::AskSta::Response,tm_msgs_msg_AskStaRequest_common,tm_msgs_msg_AskStaResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_AskSta_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::AskStaRequest,tm_msgs_msg_AskStaRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::AskStaResponse,tm_msgs_msg_AskStaResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_AskStaRequest_common, MATLABROSMsgInterface<tm_msgs::AskStaRequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_AskStaResponse_common, MATLABROSMsgInterface<tm_msgs::AskStaResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_AskSta_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
