// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/CartesianMoveRequest
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
#include "tm_msgs/CartesianMove.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_CartesianMoveRequest_common : public MATLABROSMsgInterface<tm_msgs::CartesianMove::Request> {
  public:
    virtual ~tm_msgs_msg_CartesianMoveRequest_common(){}
    virtual void copy_from_struct(tm_msgs::CartesianMove::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::CartesianMove::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_CartesianMoveRequest_common::copy_from_struct(tm_msgs::CartesianMove::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //poseTarget
        const matlab::data::StructArray poseTarget_arr = arr["PoseTarget"];
        auto msgClassPtr_poseTarget = getCommonObject<geometry_msgs::Pose>("geometry_msgs_msg_Pose_common",loader);
        msgClassPtr_poseTarget->copy_from_struct(&msg->poseTarget,poseTarget_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PoseTarget' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PoseTarget' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_CartesianMoveRequest_common::get_arr(MDFactory_T& factory, const tm_msgs::CartesianMove::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","PoseTarget"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/CartesianMoveRequest");
    // poseTarget
    auto currentElement_poseTarget = (msg + ctr)->poseTarget;
    auto msgClassPtr_poseTarget = getCommonObject<geometry_msgs::Pose>("geometry_msgs_msg_Pose_common",loader);
    outArray[ctr]["PoseTarget"] = msgClassPtr_poseTarget->get_arr(factory, &currentElement_poseTarget, loader);
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_CartesianMoveResponse_common : public MATLABROSMsgInterface<tm_msgs::CartesianMove::Response> {
  public:
    virtual ~tm_msgs_msg_CartesianMoveResponse_common(){}
    virtual void copy_from_struct(tm_msgs::CartesianMove::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::CartesianMove::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_CartesianMoveResponse_common::copy_from_struct(tm_msgs::CartesianMove::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T tm_msgs_msg_CartesianMoveResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::CartesianMove::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","IsOK"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/CartesianMoveResponse");
    // isOK
    auto currentElement_isOK = (msg + ctr)->isOK;
    outArray[ctr]["IsOK"] = factory.createScalar(static_cast<bool>(currentElement_isOK));
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_CartesianMove_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_CartesianMove_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_CartesianMove_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::CartesianMove::Request,tm_msgs_msg_CartesianMoveRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::CartesianMove::Response,tm_msgs_msg_CartesianMoveResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_CartesianMove_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::CartesianMove::Request,tm_msgs::CartesianMove::Request::ConstPtr,tm_msgs_msg_CartesianMoveRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::CartesianMove::Response,tm_msgs::CartesianMove::Response::ConstPtr,tm_msgs_msg_CartesianMoveResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_CartesianMove_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::CartesianMove::Request,tm_msgs::CartesianMove::Response,tm_msgs_msg_CartesianMoveRequest_common,tm_msgs_msg_CartesianMoveResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_CartesianMove_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::CartesianMove,tm_msgs::CartesianMove::Request,tm_msgs::CartesianMove::Response,tm_msgs_msg_CartesianMoveRequest_common,tm_msgs_msg_CartesianMoveResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_CartesianMove_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::CartesianMoveRequest,tm_msgs_msg_CartesianMoveRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::CartesianMoveResponse,tm_msgs_msg_CartesianMoveResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_CartesianMoveRequest_common, MATLABROSMsgInterface<tm_msgs::CartesianMoveRequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_CartesianMoveResponse_common, MATLABROSMsgInterface<tm_msgs::CartesianMoveResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_CartesianMove_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
