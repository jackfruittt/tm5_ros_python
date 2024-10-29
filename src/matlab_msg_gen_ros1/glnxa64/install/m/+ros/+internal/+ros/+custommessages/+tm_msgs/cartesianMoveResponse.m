function [data, info] = cartesianMoveResponse
%CartesianMove gives an empty data for tm_msgs/CartesianMoveResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/CartesianMoveResponse';
[data.IsOK, info.IsOK] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'tm_msgs/CartesianMoveResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'isOK';
