
classdef ConnectTMRequest < ros.Message
    %ConnectTMRequest MATLAB implementation of tm_msgs/ConnectTMRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'tm_msgs/ConnectTMRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '689402be41aef39745cc8a1b503617c8' % The MD5 Checksum of the message definition
        PropertyList = { 'Server' 'Connect' 'Reconnect' 'Timeout' 'Timeval' } % List of non-constant message properties
        ROSPropertyList = { 'server' 'connect' 'reconnect' 'timeout' 'timeval' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        TMSVR = int8(0)
        TMSCT = int8(1)
    end
    properties
        Server
        Connect
        Reconnect
        Timeout
        Timeval
    end
    methods
        function set.Server(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ConnectTMRequest', 'Server');
            obj.Server = int8(val);
        end
        function set.Connect(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ConnectTMRequest', 'Connect');
            obj.Connect = logical(val);
        end
        function set.Reconnect(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ConnectTMRequest', 'Reconnect');
            obj.Reconnect = logical(val);
        end
        function set.Timeout(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ConnectTMRequest', 'Timeout');
            obj.Timeout = double(val);
        end
        function set.Timeval(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ConnectTMRequest', 'Timeval');
            obj.Timeval = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.tm_msgs.ConnectTMRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.tm_msgs.ConnectTMRequest(strObj);
        end
    end
end