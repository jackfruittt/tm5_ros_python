// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/StaResponse
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
#include "tm_msgs/StaResponse.h"
#include "visibility_control.h"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_StaResponse_common : public MATLABROSMsgInterface<tm_msgs::StaResponse> {
  public:
    virtual ~tm_msgs_msg_StaResponse_common(){}
    virtual void copy_from_struct(tm_msgs::StaResponse* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::StaResponse* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_StaResponse_common::copy_from_struct(tm_msgs::StaResponse* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr["Header"];
        auto msgClassPtr_header = getCommonObject<std_msgs::Header>("std_msgs_msg_Header_common",loader);
        msgClassPtr_header->copy_from_struct(&msg->header,header_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Header' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Header' is wrong type; expected a struct.");
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
  MDArray_T tm_msgs_msg_StaResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::StaResponse* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Subcmd","Subdata"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/StaResponse");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::Header>("std_msgs_msg_Header_common",loader);
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // subcmd
    auto currentElement_subcmd = (msg + ctr)->subcmd;
    outArray[ctr]["Subcmd"] = factory.createCharArray(currentElement_subcmd);
    // subdata
    auto currentElement_subdata = (msg + ctr)->subdata;
    outArray[ctr]["Subdata"] = factory.createCharArray(currentElement_subdata);
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_StaResponse_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_StaResponse_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_StaResponse_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<tm_msgs::StaResponse,tm_msgs_msg_StaResponse_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         tm_msgs_StaResponse_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<tm_msgs::StaResponse,tm_msgs::StaResponse::ConstPtr,tm_msgs_msg_StaResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface>
         tm_msgs_StaResponse_message::generateRosbagWriterInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSBagWriterImpl<tm_msgs::StaResponse,tm_msgs_msg_StaResponse_common>>();
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_StaResponse_common, MATLABROSMsgInterface<tm_msgs::StaResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_StaResponse_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1