// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for tm_msgs/FeedbackState
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
#include "tm_msgs/FeedbackState.h"
#include "visibility_control.h"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class TM_MSGS_EXPORT tm_msgs_msg_FeedbackState_common : public MATLABROSMsgInterface<tm_msgs::FeedbackState> {
  public:
    virtual ~tm_msgs_msg_FeedbackState_common(){}
    virtual void copy_from_struct(tm_msgs::FeedbackState* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tm_msgs::FeedbackState* msg, MultiLibLoader loader, size_t size = 1);
};
  void tm_msgs_msg_FeedbackState_common::copy_from_struct(tm_msgs::FeedbackState* msg, const matlab::data::Struct& arr,
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
        //is_svr_connected
        const matlab::data::TypedArray<bool> is_svr_connected_arr = arr["IsSvrConnected"];
        msg->is_svr_connected = is_svr_connected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IsSvrConnected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IsSvrConnected' is wrong type; expected a logical.");
    }
    try {
        //is_sct_connected
        const matlab::data::TypedArray<bool> is_sct_connected_arr = arr["IsSctConnected"];
        msg->is_sct_connected = is_sct_connected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IsSctConnected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IsSctConnected' is wrong type; expected a logical.");
    }
    try {
        //tmsrv_cperr
        const matlab::data::TypedArray<int32_t> tmsrv_cperr_arr = arr["TmsrvCperr"];
        msg->tmsrv_cperr = tmsrv_cperr_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TmsrvCperr' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TmsrvCperr' is wrong type; expected a int32.");
    }
    try {
        //tmscript_cperr
        const matlab::data::TypedArray<int32_t> tmscript_cperr_arr = arr["TmscriptCperr"];
        msg->tmscript_cperr = tmscript_cperr_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TmscriptCperr' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TmscriptCperr' is wrong type; expected a int32.");
    }
    try {
        //tmsrv_dataerr
        const matlab::data::TypedArray<int32_t> tmsrv_dataerr_arr = arr["TmsrvDataerr"];
        msg->tmsrv_dataerr = tmsrv_dataerr_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TmsrvDataerr' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TmsrvDataerr' is wrong type; expected a int32.");
    }
    try {
        //tmscript_dataerr
        const matlab::data::TypedArray<int32_t> tmscript_dataerr_arr = arr["TmscriptDataerr"];
        msg->tmscript_dataerr = tmscript_dataerr_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TmscriptDataerr' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TmscriptDataerr' is wrong type; expected a int32.");
    }
    try {
        //max_not_connect_in_s
        const matlab::data::TypedArray<int32_t> max_not_connect_in_s_arr = arr["MaxNotConnectInS"];
        msg->max_not_connect_in_s = max_not_connect_in_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'MaxNotConnectInS' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'MaxNotConnectInS' is wrong type; expected a int32.");
    }
    try {
        //disconnection_times
        const matlab::data::TypedArray<int32_t> disconnection_times_arr = arr["DisconnectionTimes"];
        msg->disconnection_times = disconnection_times_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'DisconnectionTimes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'DisconnectionTimes' is wrong type; expected a int32.");
    }
    try {
        //joint_pos
        const matlab::data::TypedArray<double> joint_pos_arr = arr["JointPos"];
        size_t nelem = joint_pos_arr.getNumberOfElements();
        	msg->joint_pos.resize(nelem);
        	std::copy(joint_pos_arr.begin(), joint_pos_arr.begin()+nelem, msg->joint_pos.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointPos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointPos' is wrong type; expected a double.");
    }
    try {
        //joint_vel
        const matlab::data::TypedArray<double> joint_vel_arr = arr["JointVel"];
        size_t nelem = joint_vel_arr.getNumberOfElements();
        	msg->joint_vel.resize(nelem);
        	std::copy(joint_vel_arr.begin(), joint_vel_arr.begin()+nelem, msg->joint_vel.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointVel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointVel' is wrong type; expected a double.");
    }
    try {
        //joint_tor
        const matlab::data::TypedArray<double> joint_tor_arr = arr["JointTor"];
        size_t nelem = joint_tor_arr.getNumberOfElements();
        	msg->joint_tor.resize(nelem);
        	std::copy(joint_tor_arr.begin(), joint_tor_arr.begin()+nelem, msg->joint_tor.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointTor' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointTor' is wrong type; expected a double.");
    }
    try {
        //tool0_pose
        const matlab::data::TypedArray<double> tool0_pose_arr = arr["Tool0Pose"];
        size_t nelem = tool0_pose_arr.getNumberOfElements();
        	msg->tool0_pose.resize(nelem);
        	std::copy(tool0_pose_arr.begin(), tool0_pose_arr.begin()+nelem, msg->tool0_pose.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Tool0Pose' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Tool0Pose' is wrong type; expected a double.");
    }
    try {
        //tool_pose
        const matlab::data::TypedArray<double> tool_pose_arr = arr["ToolPose"];
        size_t nelem = tool_pose_arr.getNumberOfElements();
        	msg->tool_pose.resize(nelem);
        	std::copy(tool_pose_arr.begin(), tool_pose_arr.begin()+nelem, msg->tool_pose.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ToolPose' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ToolPose' is wrong type; expected a double.");
    }
    try {
        //tcp_speed
        const matlab::data::TypedArray<double> tcp_speed_arr = arr["TcpSpeed"];
        size_t nelem = tcp_speed_arr.getNumberOfElements();
        	msg->tcp_speed.resize(nelem);
        	std::copy(tcp_speed_arr.begin(), tcp_speed_arr.begin()+nelem, msg->tcp_speed.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TcpSpeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TcpSpeed' is wrong type; expected a double.");
    }
    try {
        //tcp_force
        const matlab::data::TypedArray<double> tcp_force_arr = arr["TcpForce"];
        size_t nelem = tcp_force_arr.getNumberOfElements();
        	msg->tcp_force.resize(nelem);
        	std::copy(tcp_force_arr.begin(), tcp_force_arr.begin()+nelem, msg->tcp_force.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TcpForce' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TcpForce' is wrong type; expected a double.");
    }
    try {
        //joint_tor_average
        const matlab::data::TypedArray<double> joint_tor_average_arr = arr["JointTorAverage"];
        size_t nelem = joint_tor_average_arr.getNumberOfElements();
        	msg->joint_tor_average.resize(nelem);
        	std::copy(joint_tor_average_arr.begin(), joint_tor_average_arr.begin()+nelem, msg->joint_tor_average.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointTorAverage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointTorAverage' is wrong type; expected a double.");
    }
    try {
        //joint_tor_min
        const matlab::data::TypedArray<double> joint_tor_min_arr = arr["JointTorMin"];
        size_t nelem = joint_tor_min_arr.getNumberOfElements();
        	msg->joint_tor_min.resize(nelem);
        	std::copy(joint_tor_min_arr.begin(), joint_tor_min_arr.begin()+nelem, msg->joint_tor_min.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointTorMin' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointTorMin' is wrong type; expected a double.");
    }
    try {
        //joint_tor_max
        const matlab::data::TypedArray<double> joint_tor_max_arr = arr["JointTorMax"];
        size_t nelem = joint_tor_max_arr.getNumberOfElements();
        	msg->joint_tor_max.resize(nelem);
        	std::copy(joint_tor_max_arr.begin(), joint_tor_max_arr.begin()+nelem, msg->joint_tor_max.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'JointTorMax' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'JointTorMax' is wrong type; expected a double.");
    }
    try {
        //robot_link
        const matlab::data::TypedArray<bool> robot_link_arr = arr["RobotLink"];
        msg->robot_link = robot_link_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RobotLink' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RobotLink' is wrong type; expected a logical.");
    }
    try {
        //is_data_table_correct
        const matlab::data::TypedArray<bool> is_data_table_correct_arr = arr["IsDataTableCorrect"];
        msg->is_data_table_correct = is_data_table_correct_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IsDataTableCorrect' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IsDataTableCorrect' is wrong type; expected a logical.");
    }
    try {
        //robot_error
        const matlab::data::TypedArray<bool> robot_error_arr = arr["RobotError"];
        msg->robot_error = robot_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RobotError' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RobotError' is wrong type; expected a logical.");
    }
    try {
        //project_run
        const matlab::data::TypedArray<bool> project_run_arr = arr["ProjectRun"];
        msg->project_run = project_run_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ProjectRun' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ProjectRun' is wrong type; expected a logical.");
    }
    try {
        //project_pause
        const matlab::data::TypedArray<bool> project_pause_arr = arr["ProjectPause"];
        msg->project_pause = project_pause_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ProjectPause' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ProjectPause' is wrong type; expected a logical.");
    }
    try {
        //safetyguard_a
        const matlab::data::TypedArray<bool> safetyguard_a_arr = arr["SafetyguardA"];
        msg->safetyguard_a = safetyguard_a_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'SafetyguardA' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'SafetyguardA' is wrong type; expected a logical.");
    }
    try {
        //e_stop
        const matlab::data::TypedArray<bool> e_stop_arr = arr["EStop"];
        msg->e_stop = e_stop_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EStop' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EStop' is wrong type; expected a logical.");
    }
    try {
        //camera_light
        const matlab::data::TypedArray<bool> camera_light_arr = arr["CameraLight"];
        msg->camera_light = camera_light_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CameraLight' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CameraLight' is wrong type; expected a logical.");
    }
    try {
        //error_code
        const matlab::data::TypedArray<int32_t> error_code_arr = arr["ErrorCode"];
        msg->error_code = error_code_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ErrorCode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ErrorCode' is wrong type; expected a int32.");
    }
    try {
        //project_speed
        const matlab::data::TypedArray<int32_t> project_speed_arr = arr["ProjectSpeed"];
        msg->project_speed = project_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ProjectSpeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ProjectSpeed' is wrong type; expected a int32.");
    }
    try {
        //ma_mode
        const matlab::data::TypedArray<int32_t> ma_mode_arr = arr["MaMode"];
        msg->ma_mode = ma_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'MaMode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'MaMode' is wrong type; expected a int32.");
    }
    try {
        //robot_light
        const matlab::data::TypedArray<int32_t> robot_light_arr = arr["RobotLight"];
        msg->robot_light = robot_light_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RobotLight' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RobotLight' is wrong type; expected a int32.");
    }
    try {
        //cb_digital_output
        const matlab::data::TypedArray<bool> cb_digital_output_arr = arr["CbDigitalOutput"];
        size_t nelem = cb_digital_output_arr.getNumberOfElements();
        	msg->cb_digital_output.resize(nelem);
        	std::copy(cb_digital_output_arr.begin(), cb_digital_output_arr.begin()+nelem, msg->cb_digital_output.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CbDigitalOutput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CbDigitalOutput' is wrong type; expected a logical.");
    }
    try {
        //cb_digital_input
        const matlab::data::TypedArray<bool> cb_digital_input_arr = arr["CbDigitalInput"];
        size_t nelem = cb_digital_input_arr.getNumberOfElements();
        	msg->cb_digital_input.resize(nelem);
        	std::copy(cb_digital_input_arr.begin(), cb_digital_input_arr.begin()+nelem, msg->cb_digital_input.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CbDigitalInput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CbDigitalInput' is wrong type; expected a logical.");
    }
    try {
        //cb_analog_output
        const matlab::data::TypedArray<float> cb_analog_output_arr = arr["CbAnalogOutput"];
        size_t nelem = cb_analog_output_arr.getNumberOfElements();
        	msg->cb_analog_output.resize(nelem);
        	std::copy(cb_analog_output_arr.begin(), cb_analog_output_arr.begin()+nelem, msg->cb_analog_output.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CbAnalogOutput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CbAnalogOutput' is wrong type; expected a single.");
    }
    try {
        //cb_analog_input
        const matlab::data::TypedArray<float> cb_analog_input_arr = arr["CbAnalogInput"];
        size_t nelem = cb_analog_input_arr.getNumberOfElements();
        	msg->cb_analog_input.resize(nelem);
        	std::copy(cb_analog_input_arr.begin(), cb_analog_input_arr.begin()+nelem, msg->cb_analog_input.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CbAnalogInput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CbAnalogInput' is wrong type; expected a single.");
    }
    try {
        //ee_digital_output
        const matlab::data::TypedArray<bool> ee_digital_output_arr = arr["EeDigitalOutput"];
        size_t nelem = ee_digital_output_arr.getNumberOfElements();
        	msg->ee_digital_output.resize(nelem);
        	std::copy(ee_digital_output_arr.begin(), ee_digital_output_arr.begin()+nelem, msg->ee_digital_output.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EeDigitalOutput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EeDigitalOutput' is wrong type; expected a logical.");
    }
    try {
        //ee_digital_input
        const matlab::data::TypedArray<bool> ee_digital_input_arr = arr["EeDigitalInput"];
        size_t nelem = ee_digital_input_arr.getNumberOfElements();
        	msg->ee_digital_input.resize(nelem);
        	std::copy(ee_digital_input_arr.begin(), ee_digital_input_arr.begin()+nelem, msg->ee_digital_input.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EeDigitalInput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EeDigitalInput' is wrong type; expected a logical.");
    }
    try {
        //ee_analog_output
        const matlab::data::TypedArray<float> ee_analog_output_arr = arr["EeAnalogOutput"];
        size_t nelem = ee_analog_output_arr.getNumberOfElements();
        	msg->ee_analog_output.resize(nelem);
        	std::copy(ee_analog_output_arr.begin(), ee_analog_output_arr.begin()+nelem, msg->ee_analog_output.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EeAnalogOutput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EeAnalogOutput' is wrong type; expected a single.");
    }
    try {
        //ee_analog_input
        const matlab::data::TypedArray<float> ee_analog_input_arr = arr["EeAnalogInput"];
        size_t nelem = ee_analog_input_arr.getNumberOfElements();
        	msg->ee_analog_input.resize(nelem);
        	std::copy(ee_analog_input_arr.begin(), ee_analog_input_arr.begin()+nelem, msg->ee_analog_input.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EeAnalogInput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EeAnalogInput' is wrong type; expected a single.");
    }
    try {
        //error_content
        const matlab::data::CharArray error_content_arr = arr["ErrorContent"];
        msg->error_content = error_content_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ErrorContent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ErrorContent' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T tm_msgs_msg_FeedbackState_common::get_arr(MDFactory_T& factory, const tm_msgs::FeedbackState* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","IsSvrConnected","IsSctConnected","TmsrvCperr","TmscriptCperr","TmsrvDataerr","TmscriptDataerr","MaxNotConnectInS","DisconnectionTimes","JointPos","JointVel","JointTor","Tool0Pose","ToolPose","TcpSpeed","TcpForce","JointTorAverage","JointTorMin","JointTorMax","RobotLink","IsDataTableCorrect","RobotError","ProjectRun","ProjectPause","SafetyguardA","EStop","CameraLight","ErrorCode","ProjectSpeed","MaMode","RobotLight","CbDigitalOutput","CbDigitalInput","CbAnalogOutput","CbAnalogInput","EeDigitalOutput","EeDigitalInput","EeAnalogOutput","EeAnalogInput","ErrorContent"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tm_msgs/FeedbackState");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::Header>("std_msgs_msg_Header_common",loader);
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // is_svr_connected
    auto currentElement_is_svr_connected = (msg + ctr)->is_svr_connected;
    outArray[ctr]["IsSvrConnected"] = factory.createScalar(static_cast<bool>(currentElement_is_svr_connected));
    // is_sct_connected
    auto currentElement_is_sct_connected = (msg + ctr)->is_sct_connected;
    outArray[ctr]["IsSctConnected"] = factory.createScalar(static_cast<bool>(currentElement_is_sct_connected));
    // tmsrv_cperr
    auto currentElement_tmsrv_cperr = (msg + ctr)->tmsrv_cperr;
    outArray[ctr]["TmsrvCperr"] = factory.createScalar(currentElement_tmsrv_cperr);
    // tmscript_cperr
    auto currentElement_tmscript_cperr = (msg + ctr)->tmscript_cperr;
    outArray[ctr]["TmscriptCperr"] = factory.createScalar(currentElement_tmscript_cperr);
    // tmsrv_dataerr
    auto currentElement_tmsrv_dataerr = (msg + ctr)->tmsrv_dataerr;
    outArray[ctr]["TmsrvDataerr"] = factory.createScalar(currentElement_tmsrv_dataerr);
    // tmscript_dataerr
    auto currentElement_tmscript_dataerr = (msg + ctr)->tmscript_dataerr;
    outArray[ctr]["TmscriptDataerr"] = factory.createScalar(currentElement_tmscript_dataerr);
    // max_not_connect_in_s
    auto currentElement_max_not_connect_in_s = (msg + ctr)->max_not_connect_in_s;
    outArray[ctr]["MaxNotConnectInS"] = factory.createScalar(currentElement_max_not_connect_in_s);
    // disconnection_times
    auto currentElement_disconnection_times = (msg + ctr)->disconnection_times;
    outArray[ctr]["DisconnectionTimes"] = factory.createScalar(currentElement_disconnection_times);
    // joint_pos
    auto currentElement_joint_pos = (msg + ctr)->joint_pos;
    outArray[ctr]["JointPos"] = factory.createArray<tm_msgs::FeedbackState::_joint_pos_type::const_iterator, double>({currentElement_joint_pos.size(),1}, currentElement_joint_pos.begin(), currentElement_joint_pos.end());
    // joint_vel
    auto currentElement_joint_vel = (msg + ctr)->joint_vel;
    outArray[ctr]["JointVel"] = factory.createArray<tm_msgs::FeedbackState::_joint_vel_type::const_iterator, double>({currentElement_joint_vel.size(),1}, currentElement_joint_vel.begin(), currentElement_joint_vel.end());
    // joint_tor
    auto currentElement_joint_tor = (msg + ctr)->joint_tor;
    outArray[ctr]["JointTor"] = factory.createArray<tm_msgs::FeedbackState::_joint_tor_type::const_iterator, double>({currentElement_joint_tor.size(),1}, currentElement_joint_tor.begin(), currentElement_joint_tor.end());
    // tool0_pose
    auto currentElement_tool0_pose = (msg + ctr)->tool0_pose;
    outArray[ctr]["Tool0Pose"] = factory.createArray<tm_msgs::FeedbackState::_tool0_pose_type::const_iterator, double>({currentElement_tool0_pose.size(),1}, currentElement_tool0_pose.begin(), currentElement_tool0_pose.end());
    // tool_pose
    auto currentElement_tool_pose = (msg + ctr)->tool_pose;
    outArray[ctr]["ToolPose"] = factory.createArray<tm_msgs::FeedbackState::_tool_pose_type::const_iterator, double>({currentElement_tool_pose.size(),1}, currentElement_tool_pose.begin(), currentElement_tool_pose.end());
    // tcp_speed
    auto currentElement_tcp_speed = (msg + ctr)->tcp_speed;
    outArray[ctr]["TcpSpeed"] = factory.createArray<tm_msgs::FeedbackState::_tcp_speed_type::const_iterator, double>({currentElement_tcp_speed.size(),1}, currentElement_tcp_speed.begin(), currentElement_tcp_speed.end());
    // tcp_force
    auto currentElement_tcp_force = (msg + ctr)->tcp_force;
    outArray[ctr]["TcpForce"] = factory.createArray<tm_msgs::FeedbackState::_tcp_force_type::const_iterator, double>({currentElement_tcp_force.size(),1}, currentElement_tcp_force.begin(), currentElement_tcp_force.end());
    // joint_tor_average
    auto currentElement_joint_tor_average = (msg + ctr)->joint_tor_average;
    outArray[ctr]["JointTorAverage"] = factory.createArray<tm_msgs::FeedbackState::_joint_tor_average_type::const_iterator, double>({currentElement_joint_tor_average.size(),1}, currentElement_joint_tor_average.begin(), currentElement_joint_tor_average.end());
    // joint_tor_min
    auto currentElement_joint_tor_min = (msg + ctr)->joint_tor_min;
    outArray[ctr]["JointTorMin"] = factory.createArray<tm_msgs::FeedbackState::_joint_tor_min_type::const_iterator, double>({currentElement_joint_tor_min.size(),1}, currentElement_joint_tor_min.begin(), currentElement_joint_tor_min.end());
    // joint_tor_max
    auto currentElement_joint_tor_max = (msg + ctr)->joint_tor_max;
    outArray[ctr]["JointTorMax"] = factory.createArray<tm_msgs::FeedbackState::_joint_tor_max_type::const_iterator, double>({currentElement_joint_tor_max.size(),1}, currentElement_joint_tor_max.begin(), currentElement_joint_tor_max.end());
    // robot_link
    auto currentElement_robot_link = (msg + ctr)->robot_link;
    outArray[ctr]["RobotLink"] = factory.createScalar(static_cast<bool>(currentElement_robot_link));
    // is_data_table_correct
    auto currentElement_is_data_table_correct = (msg + ctr)->is_data_table_correct;
    outArray[ctr]["IsDataTableCorrect"] = factory.createScalar(static_cast<bool>(currentElement_is_data_table_correct));
    // robot_error
    auto currentElement_robot_error = (msg + ctr)->robot_error;
    outArray[ctr]["RobotError"] = factory.createScalar(static_cast<bool>(currentElement_robot_error));
    // project_run
    auto currentElement_project_run = (msg + ctr)->project_run;
    outArray[ctr]["ProjectRun"] = factory.createScalar(static_cast<bool>(currentElement_project_run));
    // project_pause
    auto currentElement_project_pause = (msg + ctr)->project_pause;
    outArray[ctr]["ProjectPause"] = factory.createScalar(static_cast<bool>(currentElement_project_pause));
    // safetyguard_a
    auto currentElement_safetyguard_a = (msg + ctr)->safetyguard_a;
    outArray[ctr]["SafetyguardA"] = factory.createScalar(static_cast<bool>(currentElement_safetyguard_a));
    // e_stop
    auto currentElement_e_stop = (msg + ctr)->e_stop;
    outArray[ctr]["EStop"] = factory.createScalar(static_cast<bool>(currentElement_e_stop));
    // camera_light
    auto currentElement_camera_light = (msg + ctr)->camera_light;
    outArray[ctr]["CameraLight"] = factory.createScalar(static_cast<bool>(currentElement_camera_light));
    // error_code
    auto currentElement_error_code = (msg + ctr)->error_code;
    outArray[ctr]["ErrorCode"] = factory.createScalar(currentElement_error_code);
    // project_speed
    auto currentElement_project_speed = (msg + ctr)->project_speed;
    outArray[ctr]["ProjectSpeed"] = factory.createScalar(currentElement_project_speed);
    // ma_mode
    auto currentElement_ma_mode = (msg + ctr)->ma_mode;
    outArray[ctr]["MaMode"] = factory.createScalar(currentElement_ma_mode);
    // robot_light
    auto currentElement_robot_light = (msg + ctr)->robot_light;
    outArray[ctr]["RobotLight"] = factory.createScalar(currentElement_robot_light);
    // cb_digital_output
    auto currentElement_cb_digital_output = (msg + ctr)->cb_digital_output;
    auto cb_digital_output_bool = std::vector<bool>(std::begin(currentElement_cb_digital_output),std::end(currentElement_cb_digital_output));
    outArray[ctr]["CbDigitalOutput"] = factory.createArray<std::vector<bool>::const_iterator, bool>({cb_digital_output_bool.size(),1}, cb_digital_output_bool.begin(), cb_digital_output_bool.end());
    // cb_digital_input
    auto currentElement_cb_digital_input = (msg + ctr)->cb_digital_input;
    auto cb_digital_input_bool = std::vector<bool>(std::begin(currentElement_cb_digital_input),std::end(currentElement_cb_digital_input));
    outArray[ctr]["CbDigitalInput"] = factory.createArray<std::vector<bool>::const_iterator, bool>({cb_digital_input_bool.size(),1}, cb_digital_input_bool.begin(), cb_digital_input_bool.end());
    // cb_analog_output
    auto currentElement_cb_analog_output = (msg + ctr)->cb_analog_output;
    outArray[ctr]["CbAnalogOutput"] = factory.createArray<tm_msgs::FeedbackState::_cb_analog_output_type::const_iterator, float>({currentElement_cb_analog_output.size(),1}, currentElement_cb_analog_output.begin(), currentElement_cb_analog_output.end());
    // cb_analog_input
    auto currentElement_cb_analog_input = (msg + ctr)->cb_analog_input;
    outArray[ctr]["CbAnalogInput"] = factory.createArray<tm_msgs::FeedbackState::_cb_analog_input_type::const_iterator, float>({currentElement_cb_analog_input.size(),1}, currentElement_cb_analog_input.begin(), currentElement_cb_analog_input.end());
    // ee_digital_output
    auto currentElement_ee_digital_output = (msg + ctr)->ee_digital_output;
    auto ee_digital_output_bool = std::vector<bool>(std::begin(currentElement_ee_digital_output),std::end(currentElement_ee_digital_output));
    outArray[ctr]["EeDigitalOutput"] = factory.createArray<std::vector<bool>::const_iterator, bool>({ee_digital_output_bool.size(),1}, ee_digital_output_bool.begin(), ee_digital_output_bool.end());
    // ee_digital_input
    auto currentElement_ee_digital_input = (msg + ctr)->ee_digital_input;
    auto ee_digital_input_bool = std::vector<bool>(std::begin(currentElement_ee_digital_input),std::end(currentElement_ee_digital_input));
    outArray[ctr]["EeDigitalInput"] = factory.createArray<std::vector<bool>::const_iterator, bool>({ee_digital_input_bool.size(),1}, ee_digital_input_bool.begin(), ee_digital_input_bool.end());
    // ee_analog_output
    auto currentElement_ee_analog_output = (msg + ctr)->ee_analog_output;
    outArray[ctr]["EeAnalogOutput"] = factory.createArray<tm_msgs::FeedbackState::_ee_analog_output_type::const_iterator, float>({currentElement_ee_analog_output.size(),1}, currentElement_ee_analog_output.begin(), currentElement_ee_analog_output.end());
    // ee_analog_input
    auto currentElement_ee_analog_input = (msg + ctr)->ee_analog_input;
    outArray[ctr]["EeAnalogInput"] = factory.createArray<tm_msgs::FeedbackState::_ee_analog_input_type::const_iterator, float>({currentElement_ee_analog_input.size(),1}, currentElement_ee_analog_input.begin(), currentElement_ee_analog_input.end());
    // error_content
    auto currentElement_error_content = (msg + ctr)->error_content;
    outArray[ctr]["ErrorContent"] = factory.createCharArray(currentElement_error_content);
    }
    return std::move(outArray);
  } 
class TM_MSGS_EXPORT tm_msgs_FeedbackState_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~tm_msgs_FeedbackState_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          tm_msgs_FeedbackState_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<tm_msgs::FeedbackState,tm_msgs_msg_FeedbackState_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         tm_msgs_FeedbackState_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<tm_msgs::FeedbackState,tm_msgs::FeedbackState::ConstPtr,tm_msgs_msg_FeedbackState_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface>
         tm_msgs_FeedbackState_message::generateRosbagWriterInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSBagWriterImpl<tm_msgs::FeedbackState,tm_msgs_msg_FeedbackState_common>>();
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(tm_msgs_msg_FeedbackState_common, MATLABROSMsgInterface<tm_msgs::FeedbackState>)
CLASS_LOADER_REGISTER_CLASS(tm_msgs_FeedbackState_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1