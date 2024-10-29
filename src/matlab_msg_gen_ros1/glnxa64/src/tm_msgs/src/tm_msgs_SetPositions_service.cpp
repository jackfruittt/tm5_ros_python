// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/SetPositionsRequest
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
#include "tm_msgs/SetPositions.h"
#include "visibility_control.h"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_SetPositionsRequest_common : public MATLABROSMsgInterface<tm_msgs::SetPositions::Request> {
  public:
    virtual ~tm_msgs_msg_SetPositionsRequest_common(){}
    virtual void copy_from_struct(tm_msgs::SetPositions::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::SetPositions::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_SetPositionsRequest_common::copy_from_struct(tm_msgs::SetPositions::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //motion_type
        const matlab::data::TypedArray<int8_t> motion_type_arr = arr["MotionType"];
        msg->motion_type = motion_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'MotionType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'MotionType' is wrong type; expected a int8.");
    }
    try {
        //positions
        const matlab::data::TypedArray<double> positions_arr = arr["Positions"];
        size_t nelem = positions_arr.getNumberOfElements();
        	msg->positions.resize(nelem);
        	std::copy(positions_arr.begin(), positions_arr.begin()+nelem, msg->positions.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Positions' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Positions' is wrong type; expected a double.");
    }
    try {
        //velocity
        const matlab::data::TypedArray<double> velocity_arr = arr["Velocity"];
        msg->velocity = velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Velocity' is wrong type; expected a double.");
    }
    try {
        //acc_time
        const matlab::data::TypedArray<double> acc_time_arr = arr["AccTime"];
        msg->acc_time = acc_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AccTime' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AccTime' is wrong type; expected a double.");
    }
    try {
        //blend_percentage
        const matlab::data::TypedArray<int32_t> blend_percentage_arr = arr["BlendPercentage"];
        msg->blend_percentage = blend_percentage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BlendPercentage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BlendPercentage' is wrong type; expected a int32.");
    }
    try {
        //fine_goal
        const matlab::data::TypedArray<bool> fine_goal_arr = arr["FineGoal"];
        msg->fine_goal = fine_goal_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FineGoal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FineGoal' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_SetPositionsRequest_common::get_arr(MDFactory_T& factory, const tm_msgs::SetPositions::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","PTPJ","PTPT","LINET","CIRCT","PLINET","MotionType","Positions","Velocity","AccTime","BlendPercentage","FineGoal"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/SetPositionsRequest");
    // PTP_J
    auto currentElement_PTP_J = (msg + ctr)->PTP_J;
    outArray[ctr]["PTPJ"] = factory.createScalar(static_cast<int8_t>(currentElement_PTP_J));
    // PTP_T
    auto currentElement_PTP_T = (msg + ctr)->PTP_T;
    outArray[ctr]["PTPT"] = factory.createScalar(static_cast<int8_t>(currentElement_PTP_T));
    // LINE_T
    auto currentElement_LINE_T = (msg + ctr)->LINE_T;
    outArray[ctr]["LINET"] = factory.createScalar(static_cast<int8_t>(currentElement_LINE_T));
    // CIRC_T
    auto currentElement_CIRC_T = (msg + ctr)->CIRC_T;
    outArray[ctr]["CIRCT"] = factory.createScalar(static_cast<int8_t>(currentElement_CIRC_T));
    // PLINE_T
    auto currentElement_PLINE_T = (msg + ctr)->PLINE_T;
    outArray[ctr]["PLINET"] = factory.createScalar(static_cast<int8_t>(currentElement_PLINE_T));
    // motion_type
    auto currentElement_motion_type = (msg + ctr)->motion_type;
    outArray[ctr]["MotionType"] = factory.createScalar(currentElement_motion_type);
    // positions
    auto currentElement_positions = (msg + ctr)->positions;
    outArray[ctr]["Positions"] = factory.createArray<tm_msgs::SetPositions::Request::_positions_type::const_iterator, double>({currentElement_positions.size(),1}, currentElement_positions.begin(), currentElement_positions.end());
    // velocity
    auto currentElement_velocity = (msg + ctr)->velocity;
    outArray[ctr]["Velocity"] = factory.createScalar(currentElement_velocity);
    // acc_time
    auto currentElement_acc_time = (msg + ctr)->acc_time;
    outArray[ctr]["AccTime"] = factory.createScalar(currentElement_acc_time);
    // blend_percentage
    auto currentElement_blend_percentage = (msg + ctr)->blend_percentage;
    outArray[ctr]["BlendPercentage"] = factory.createScalar(currentElement_blend_percentage);
    // fine_goal
    auto currentElement_fine_goal = (msg + ctr)->fine_goal;
    outArray[ctr]["FineGoal"] = factory.createScalar(static_cast<bool>(currentElement_fine_goal));
    }
    return std::move(outArray);
  }
class TM_MSGS_EXPORT tm_msgs_msg_SetPositionsResponse_common : public MATLABROSMsgInterface<tm_msgs::SetPositions::Response> {
  public:
    virtual ~tm_msgs_msg_SetPositionsResponse_common(){}
    virtual void copy_from_struct(tm_msgs::SetPositions::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::SetPositions::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_SetPositionsResponse_common::copy_from_struct(tm_msgs::SetPositions::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T tm_msgs_msg_SetPositionsResponse_common::get_arr(MDFactory_T& factory, const tm_msgs::SetPositions::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Ok"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/SetPositionsResponse");
    // ok
    auto currentElement_ok = (msg + ctr)->ok;
    outArray[ctr]["Ok"] = factory.createScalar(static_cast<bool>(currentElement_ok));
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_SetPositions_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_SetPositions_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_SetPositions_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::SetPositions::Request,tm_msgs_msg_SetPositionsRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<tm_msgs::SetPositions::Response,tm_msgs_msg_SetPositionsResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          tm_msgs_SetPositions_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::SetPositions::Request,tm_msgs::SetPositions::Request::ConstPtr,tm_msgs_msg_SetPositionsRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<tm_msgs::SetPositions::Response,tm_msgs::SetPositions::Response::ConstPtr,tm_msgs_msg_SetPositionsResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          tm_msgs_SetPositions_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<tm_msgs::SetPositions::Request,tm_msgs::SetPositions::Response,tm_msgs_msg_SetPositionsRequest_common,tm_msgs_msg_SetPositionsResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          tm_msgs_SetPositions_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<tm_msgs::SetPositions,tm_msgs::SetPositions::Request,tm_msgs::SetPositions::Response,tm_msgs_msg_SetPositionsRequest_common,tm_msgs_msg_SetPositionsResponse_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface> 
          tm_msgs_SetPositions_service::generateRosbagWriterInterface(ElementType type){
    std::shared_ptr<MATLABRosbagWriterInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::SetPositionsRequest,tm_msgs_msg_SetPositionsRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSBagWriterImpl<tm_msgs::SetPositionsResponse,tm_msgs_msg_SetPositionsResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_SetPositionsRequest_common, MATLABROSMsgInterface<tm_msgs::SetPositionsRequest>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_SetPositionsResponse_common, MATLABROSMsgInterface<tm_msgs::SetPositionsResponse>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_SetPositions_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
