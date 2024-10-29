
classdef SetEventRequest < ros.Message
    %SetEventRequest MATLAB implementation of tm_msgs/SetEventRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'tm_msgs/SetEventRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'b239077800357c9aa13c08a1a4a4dce9' % The MD5 Checksum of the message definition
        PropertyList = { 'Func' 'Arg0' 'Arg1' } % List of non-constant message properties
        ROSPropertyList = { 'func' 'arg0' 'arg1' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        TAG = int8(1)
        WAITTAG = int8(2)
        STOP = int8(11)
        PAUSE = int8(12)
        RESUME = int8(13)
        EXIT = int8(-1)
    end
    properties
        Func
        Arg0
        Arg1
    end
    methods
        function set.Func(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetEventRequest', 'Func');
            obj.Func = int8(val);
        end
        function set.Arg0(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetEventRequest', 'Arg0');
            obj.Arg0 = int8(val);
        end
        function set.Arg1(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetEventRequest', 'Arg1');
            obj.Arg1 = int8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.tm_msgs.SetEventRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.tm_msgs.SetEventRequest(strObj);
        end
    end
end