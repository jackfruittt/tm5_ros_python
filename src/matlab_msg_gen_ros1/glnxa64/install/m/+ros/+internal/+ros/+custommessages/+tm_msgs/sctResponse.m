function [data, info] = sctResponse
%SctResponse gives an empty data for tm_msgs/SctResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/SctResponse';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Id, info.Id] = ros.internal.ros.messages.ros.char('string',0);
[data.Script, info.Script] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'tm_msgs/SctResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'id';
info.MatPath{8} = 'script';