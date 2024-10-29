function [data, info] = askItemResponse
%AskItem gives an empty data for tm_msgs/AskItemResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/AskItemResponse';
[data.Ok, info.Ok] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.Id, info.Id] = ros.internal.ros.messages.ros.char('string',0);
[data.Value, info.Value] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'tm_msgs/AskItemResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'ok';
info.MatPath{2} = 'id';
info.MatPath{3} = 'value';
