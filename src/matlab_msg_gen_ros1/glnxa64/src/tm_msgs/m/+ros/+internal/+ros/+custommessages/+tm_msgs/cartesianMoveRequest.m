function [data, info] = cartesianMoveRequest
%CartesianMove gives an empty data for tm_msgs/CartesianMoveRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/CartesianMoveRequest';
[data.PoseTarget, info.PoseTarget] = ros.internal.ros.messages.geometry_msgs.pose;
info.PoseTarget.MLdataType = 'struct';
info.MessageType = 'tm_msgs/CartesianMoveRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'poseTarget';
info.MatPath{2} = 'poseTarget.position';
info.MatPath{3} = 'poseTarget.position.x';
info.MatPath{4} = 'poseTarget.position.y';
info.MatPath{5} = 'poseTarget.position.z';
info.MatPath{6} = 'poseTarget.orientation';
info.MatPath{7} = 'poseTarget.orientation.x';
info.MatPath{8} = 'poseTarget.orientation.y';
info.MatPath{9} = 'poseTarget.orientation.z';
info.MatPath{10} = 'poseTarget.orientation.w';
