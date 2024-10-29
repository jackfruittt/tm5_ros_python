// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/AskItemRequest
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
#include "tm_msgs/AskItem.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_AskItemRequest_common : public MATLABROSMsgInterface<tm_msgs::AskItem::Request> {
  public:
    virtual ~tm_msgs_msg_AskItemRequest_common(){}
    virtual void copy_from_struct(tm_msgs::AskItem::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::AskItem::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_AskItemRequest_common::copy_from_struct(tm_msgs::AskItem::Request* msg, const matlab::data::Struct& arr,
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
        //item
        const matlab::data::CharArray item_arr = arr["Item"];
        msg->item = item_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Item' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Item' is wrong type; expected a string.");
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
  MDArray_T tm_msgs_msg_AskItemRequest_common::get_arr(MDFactory_T& factory, const tm_msgs::AskItem::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Id","Item","WaitTime"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/AskItemRequest");
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["Id"] = factory.createCharArray(currentElement_id);
    // item
    auto currentElement_item = (msg + ctr)->item;
    outArray[ctr]["Item"] = factory.createCharArray(currentElement_item);
    // wait_time
    auto currentElement_wait_time = (msg + ctr)->wait_time;
    outArray[ctr]["WaitTime"] = factory.createScalar(currentElement_wait_time);
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_AskItemResponse_common : public MATLABROSMsgInterface<tm_msgs::AskItem::Response> {
  public:
    virtual ~tm_msgs_msg_AskItemResponse_common(){}
    virtual void copy_from_struct(tm_msgs::AskItem::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::AskItem::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_AskItemResponse_common::copy_from_struct(tm_msgs::AskItem::Response* msg, const matlab::data::Struct& arr,
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
        //id
        const matlab::data::CharArray id_arr = arr["Id"];
        msg->id = id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Id' is wrong type; expected a string.");
    }
    try {
        //value
        const matlab::data::CharArray value_arr = arr["Value"];
        msg->value = value_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Value' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_AskItemResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::AskItem::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Ok","Id","Value"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/AskItemResponse");
    // ok
    auto currentElement_ok = (msg + ctr)->ok;
    outArray[ctr]["Ok"] = factory.createScalar(static_cast<bool>(currentElement_ok));
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["Id"] = factory.createCharArray(currentElement_id);
    // value
    auto currentElement_value = (msg + ctr)->value;
    outArray[ctr]["Value"] = factory.createCharArray(currentElement_value);
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_AskItem_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_AskItem_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_AskItem_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::AskItem::Request,tm_msgs_msg_AskItemRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::AskItem::Response,tm_msgs_msg_AskItemResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_AskItem_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::AskItem::Request,tm_msgs::AskItem::Request::ConstPtr,tm_msgs_msg_AskItemRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::AskItem::Response,tm_msgs::AskItem::Response::ConstPtr,tm_msgs_msg_AskItemResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_AskItem_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::AskItem::Request,tm_msgs::AskItem::Response,tm_msgs_msg_AskItemRequest_common,tm_msgs_msg_AskItemResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_AskItem_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::AskItem,tm_msgs::AskItem::Request,tm_msgs::AskItem::Response,tm_msgs_msg_AskItemRequest_common,tm_msgs_msg_AskItemResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_AskItem_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::AskItemRequest,tm_msgs_msg_AskItemRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::AskItemResponse,tm_msgs_msg_AskItemResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_AskItemRequest_common, MATLABROSMsgInterface<tm_msgs::AskItemRequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_AskItemResponse_common, MATLABROSMsgInterface<tm_msgs::AskItemResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_AskItem_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
