function [data, info] = sendScriptRequest
%SendScript gives an empty data for tm_msgs/SendScriptRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/SendScriptRequest';
[data.Id, info.Id] = ros.internal.ros.messages.ros.char('string',0);
[data.Script, info.Script] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'tm_msgs/SendScriptRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'id';
info.MatPath{2} = 'script';
