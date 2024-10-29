// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/JointMoveRequest
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
#include "tm_msgs/JointMove.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_JointMoveRequest_common : public MATLABROSMsgInterface<tm_msgs::JointMove::Request> {
  public:
    virtual ~tm_msgs_msg_JointMoveRequest_common(){}
    virtual void copy_from_struct(tm_msgs::JointMove::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::JointMove::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_JointMoveRequest_common::copy_from_struct(tm_msgs::JointMove::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //jointTarget
        const matlab::data::StructArray jointTarget_arr = arr["JointTarget"];
        auto msgClassPtr_jointTarget = getCommonObject<sensor_msgs::JointState>("sensor_msgs_msg_JointState_common",loader);
        msgClassPtr_jointTarget->copy_from_struct(&msg->jointTarget,jointTarget_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointTarget' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointTarget' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_JointMoveRequest_common::get_arr(MDFactory_T& factory, const tm_msgs::JointMove::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","JointTarget"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/JointMoveRequest");
    // jointTarget
    auto currentElement_jointTarget = (msg + ctr)->jointTarget;
    auto msgClassPtr_jointTarget = getCommonObject<sensor_msgs::JointState>("sensor_msgs_msg_JointState_common",loader);
    outArray[ctr]["JointTarget"] = msgClassPtr_jointTarget->get_arr(factory, &currentElement_jointTarget, loader);
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_JointMoveResponse_common : public MATLABROSMsgInterface<tm_msgs::JointMove::Response> {
  public:
    virtual ~tm_msgs_msg_JointMoveResponse_common(){}
    virtual void copy_from_struct(tm_msgs::JointMove::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::JointMove::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_JointMoveResponse_common::copy_from_struct(tm_msgs::JointMove::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //isOK
        const matlab::data::TypedArray<bool> isOK_arr = arr["IsOK"];
        msg->isOK = isOK_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IsOK' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IsOK' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_JointMoveResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::JointMove::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","IsOK"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/JointMoveResponse");
    // isOK
    auto currentElement_isOK = (msg + ctr)->isOK;
    outArray[ctr]["IsOK"] = factory.createScalar(static_cast<bool>(currentElement_isOK));
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_JointMove_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_JointMove_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_JointMove_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::JointMove::Request,tm_msgs_msg_JointMoveRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::JointMove::Response,tm_msgs_msg_JointMoveResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_JointMove_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::JointMove::Request,tm_msgs::JointMove::Request::ConstPtr,tm_msgs_msg_JointMoveRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::JointMove::Response,tm_msgs::JointMove::Response::ConstPtr,tm_msgs_msg_JointMoveResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_JointMove_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::JointMove::Request,tm_msgs::JointMove::Response,tm_msgs_msg_JointMoveRequest_common,tm_msgs_msg_JointMoveResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_JointMove_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::JointMove,tm_msgs::JointMove::Request,tm_msgs::JointMove::Response,tm_msgs_msg_JointMoveRequest_common,tm_msgs_msg_JointMoveResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_JointMove_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::JointMoveRequest,tm_msgs_msg_JointMoveRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::JointMoveResponse,tm_msgs_msg_JointMoveResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_JointMoveRequest_common, MATLABROSMsgInterface<tm_msgs::JointMoveRequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_JointMoveResponse_common, MATLABROSMsgInterface<tm_msgs::JointMoveResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_JointMove_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
