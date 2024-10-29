function [data, info] = askItemRequest
%AskItem gives an empty data for tm_msgs/AskItemRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/AskItemRequest';
[data.Id, info.Id] = ros.internal.ros.messages.ros.char('string',0);
[data.Item, info.Item] = ros.internal.ros.messages.ros.char('string',0);
[data.WaitTime, info.WaitTime] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'tm_msgs/AskItemRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'id';
info.MatPath{2} = 'item';
info.MatPath{3} = 'wait_time';
