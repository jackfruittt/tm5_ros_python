
classdef SetIOResponse < ros.Message
    %SetIOResponse MATLAB implementation of tm_msgs/SetIOResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'tm_msgs/SetIOResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '6f6da3883749771fac40d6deb24a8c02' % The MD5 Checksum of the message definition
        PropertyList = { 'Ok' } % List of non-constant message properties
        ROSPropertyList = { 'ok' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Ok
    end
    methods
        function set.Ok(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetIOResponse', 'Ok');
            obj.Ok = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.tm_msgs.SetIOResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.tm_msgs.SetIOResponse(strObj);
        end
    end
end
