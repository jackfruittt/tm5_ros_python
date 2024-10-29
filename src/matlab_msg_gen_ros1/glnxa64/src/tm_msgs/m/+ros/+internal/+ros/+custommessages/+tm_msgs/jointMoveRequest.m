function [data, info] = jointMoveRequest
%JointMove gives an empty data for tm_msgs/JointMoveRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/JointMoveRequest';
[data.JointTarget, info.JointTarget] = ros.internal.ros.messages.sensor_msgs.jointState;
info.JointTarget.MLdataType = 'struct';
info.MessageType = 'tm_msgs/JointMoveRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'jointTarget';
info.MatPath{2} = 'jointTarget.header';
info.MatPath{3} = 'jointTarget.header.seq';
info.MatPath{4} = 'jointTarget.header.stamp';
info.MatPath{5} = 'jointTarget.header.stamp.sec';
info.MatPath{6} = 'jointTarget.header.stamp.nsec';
info.MatPath{7} = 'jointTarget.header.frame_id';
info.MatPath{8} = 'jointTarget.name';
info.MatPath{9} = 'jointTarget.position';
info.MatPath{10} = 'jointTarget.velocity';
info.MatPath{11} = 'jointTarget.effort';
