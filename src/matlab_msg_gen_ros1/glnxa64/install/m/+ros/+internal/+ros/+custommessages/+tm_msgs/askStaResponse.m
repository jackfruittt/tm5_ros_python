function [data, info] = askStaResponse
%AskSta gives an empty data for tm_msgs/AskStaResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/AskStaResponse';
[data.Ok, info.Ok] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.Subcmd, info.Subcmd] = ros.internal.ros.messages.ros.char('string',0);
[data.Subdata, info.Subdata] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'tm_msgs/AskStaResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'ok';
info.MatPath{2} = 'subcmd';
info.MatPath{3} = 'subdata';
