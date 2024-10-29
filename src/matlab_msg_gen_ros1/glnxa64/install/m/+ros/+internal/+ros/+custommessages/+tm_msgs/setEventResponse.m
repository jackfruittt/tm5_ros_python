function [data, info] = setEventResponse
%SetEvent gives an empty data for tm_msgs/SetEventResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/SetEventResponse';
[data.Ok, info.Ok] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'tm_msgs/SetEventResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'ok';
