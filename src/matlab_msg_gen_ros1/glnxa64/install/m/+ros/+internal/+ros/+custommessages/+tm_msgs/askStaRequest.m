function [data, info] = askStaRequest
%AskSta gives an empty data for tm_msgs/AskStaRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/AskStaRequest';
[data.Subcmd, info.Subcmd] = ros.internal.ros.messages.ros.char('string',0);
[data.Subdata, info.Subdata] = ros.internal.ros.messages.ros.char('string',0);
[data.WaitTime, info.WaitTime] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'tm_msgs/AskStaRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'subcmd';
info.MatPath{2} = 'subdata';
info.MatPath{3} = 'wait_time';
