function [data, info] = writeItemRequest
%WriteItem gives an empty data for tm_msgs/WriteItemRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/WriteItemRequest';
[data.Id, info.Id] = ros.internal.ros.messages.ros.char('string',0);
[data.Item, info.Item] = ros.internal.ros.messages.ros.char('string',0);
[data.Value, info.Value] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'tm_msgs/WriteItemRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'id';
info.MatPath{2} = 'item';
info.MatPath{3} = 'value';
