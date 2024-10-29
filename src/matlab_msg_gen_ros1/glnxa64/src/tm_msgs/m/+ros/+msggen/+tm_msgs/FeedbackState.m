
classdef FeedbackState < ros.Message
    %FeedbackState MATLAB implementation of tm_msgs/FeedbackState
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'tm_msgs/FeedbackState' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '44d5702d5a7507d317011ef00404b814' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'IsSvrConnected' 'IsSctConnected' 'TmsrvCperr' 'TmscriptCperr' 'TmsrvDataerr' 'TmscriptDataerr' 'MaxNotConnectInS' 'DisconnectionTimes' 'JointPos' 'JointVel' 'JointTor' 'Tool0Pose' 'ToolPose' 'TcpSpeed' 'TcpForce' 'JointTorAverage' 'JointTorMin' 'JointTorMax' 'RobotLink' 'IsDataTableCorrect' 'RobotError' 'ProjectRun' 'ProjectPause' 'SafetyguardA' 'EStop' 'CameraLight' 'ErrorCode' 'ProjectSpeed' 'MaMode' 'RobotLight' 'CbDigitalOutput' 'CbDigitalInput' 'CbAnalogOutput' 'CbAnalogInput' 'EeDigitalOutput' 'EeDigitalInput' 'EeAnalogOutput' 'EeAnalogInput' 'ErrorContent' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'is_svr_connected' 'is_sct_connected' 'tmsrv_cperr' 'tmscript_cperr' 'tmsrv_dataerr' 'tmscript_dataerr' 'max_not_connect_in_s' 'disconnection_times' 'joint_pos' 'joint_vel' 'joint_tor' 'tool0_pose' 'tool_pose' 'tcp_speed' 'tcp_force' 'joint_tor_average' 'joint_tor_min' 'joint_tor_max' 'robot_link' 'is_data_table_correct' 'robot_error' 'project_run' 'project_pause' 'safetyguard_a' 'e_stop' 'camera_light' 'error_code' 'project_speed' 'ma_mode' 'robot_light' 'cb_digital_output' 'cb_digital_input' 'cb_analog_output' 'cb_analog_input' 'ee_digital_output' 'ee_digital_input' 'ee_analog_output' 'ee_analog_input' 'error_content' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        IsSvrConnected
        IsSctConnected
        TmsrvCperr
        TmscriptCperr
        TmsrvDataerr
        TmscriptDataerr
        MaxNotConnectInS
        DisconnectionTimes
        JointPos
        JointVel
        JointTor
        Tool0Pose
        ToolPose
        TcpSpeed
        TcpForce
        JointTorAverage
        JointTorMin
        JointTorMax
        RobotLink
        IsDataTableCorrect
        RobotError
        ProjectRun
        ProjectPause
        SafetyguardA
        EStop
        CameraLight
        ErrorCode
        ProjectSpeed
        MaMode
        RobotLight
        CbDigitalOutput
        CbDigitalInput
        CbAnalogOutput
        CbAnalogInput
        EeDigitalOutput
        EeDigitalInput
        EeAnalogOutput
        EeAnalogInput
        ErrorContent
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'Header')
            obj.Header = val;
        end
        function set.IsSvrConnected(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'IsSvrConnected');
            obj.IsSvrConnected = logical(val);
        end
        function set.IsSctConnected(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'IsSctConnected');
            obj.IsSctConnected = logical(val);
        end
        function set.TmsrvCperr(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'TmsrvCperr');
            obj.TmsrvCperr = int32(val);
        end
        function set.TmscriptCperr(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'TmscriptCperr');
            obj.TmscriptCperr = int32(val);
        end
        function set.TmsrvDataerr(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'TmsrvDataerr');
            obj.TmsrvDataerr = int32(val);
        end
        function set.TmscriptDataerr(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'TmscriptDataerr');
            obj.TmscriptDataerr = int32(val);
        end
        function set.MaxNotConnectInS(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'MaxNotConnectInS');
            obj.MaxNotConnectInS = int32(val);
        end
        function set.DisconnectionTimes(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'DisconnectionTimes');
            obj.DisconnectionTimes = int32(val);
        end
        function set.JointPos(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'JointPos');
            obj.JointPos = double(val);
        end
        function set.JointVel(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'JointVel');
            obj.JointVel = double(val);
        end
        function set.JointTor(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'JointTor');
            obj.JointTor = double(val);
        end
        function set.Tool0Pose(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'Tool0Pose');
            obj.Tool0Pose = double(val);
        end
        function set.ToolPose(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'ToolPose');
            obj.ToolPose = double(val);
        end
        function set.TcpSpeed(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'TcpSpeed');
            obj.TcpSpeed = double(val);
        end
        function set.TcpForce(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'TcpForce');
            obj.TcpForce = double(val);
        end
        function set.JointTorAverage(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'JointTorAverage');
            obj.JointTorAverage = double(val);
        end
        function set.JointTorMin(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'JointTorMin');
            obj.JointTorMin = double(val);
        end
        function set.JointTorMax(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'JointTorMax');
            obj.JointTorMax = double(val);
        end
        function set.RobotLink(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'RobotLink');
            obj.RobotLink = logical(val);
        end
        function set.IsDataTableCorrect(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'IsDataTableCorrect');
            obj.IsDataTableCorrect = logical(val);
        end
        function set.RobotError(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'RobotError');
            obj.RobotError = logical(val);
        end
        function set.ProjectRun(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'ProjectRun');
            obj.ProjectRun = logical(val);
        end
        function set.ProjectPause(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'ProjectPause');
            obj.ProjectPause = logical(val);
        end
        function set.SafetyguardA(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'SafetyguardA');
            obj.SafetyguardA = logical(val);
        end
        function set.EStop(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'EStop');
            obj.EStop = logical(val);
        end
        function set.CameraLight(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'CameraLight');
            obj.CameraLight = logical(val);
        end
        function set.ErrorCode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'ErrorCode');
            obj.ErrorCode = int32(val);
        end
        function set.ProjectSpeed(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'ProjectSpeed');
            obj.ProjectSpeed = int32(val);
        end
        function set.MaMode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'MaMode');
            obj.MaMode = int32(val);
        end
        function set.RobotLight(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'RobotLight');
            obj.RobotLight = int32(val);
        end
        function set.CbDigitalOutput(obj, val)
            validClasses = {'logical', 'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = logical.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'CbDigitalOutput');
            obj.CbDigitalOutput = logical(val);
        end
        function set.CbDigitalInput(obj, val)
            validClasses = {'logical', 'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = logical.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'CbDigitalInput');
            obj.CbDigitalInput = logical(val);
        end
        function set.CbAnalogOutput(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'CbAnalogOutput');
            obj.CbAnalogOutput = single(val);
        end
        function set.CbAnalogInput(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'CbAnalogInput');
            obj.CbAnalogInput = single(val);
        end
        function set.EeDigitalOutput(obj, val)
            validClasses = {'logical', 'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = logical.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'EeDigitalOutput');
            obj.EeDigitalOutput = logical(val);
        end
        function set.EeDigitalInput(obj, val)
            validClasses = {'logical', 'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = logical.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'EeDigitalInput');
            obj.EeDigitalInput = logical(val);
        end
        function set.EeAnalogOutput(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'EeAnalogOutput');
            obj.EeAnalogOutput = single(val);
        end
        function set.EeAnalogInput(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'EeAnalogInput');
            obj.EeAnalogInput = single(val);
        end
        function set.ErrorContent(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'FeedbackState', 'ErrorContent');
            obj.ErrorContent = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.tm_msgs.FeedbackState.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.tm_msgs.FeedbackState(strObj);
        end
    end
end