function [data, info] = svrResponse
%SvrResponse gives an empty data for tm_msgs/SvrResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/SvrResponse';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Id, info.Id] = ros.internal.ros.messages.ros.char('string',0);
[data.Mode, info.Mode] = ros.internal.ros.messages.ros.default_type('int8',1);
[data.Content, info.Content] = ros.internal.ros.messages.ros.char('string',0);
[data.ErrorCode, info.ErrorCode] = ros.internal.ros.messages.ros.default_type('int8',1);
info.MessageType = 'tm_msgs/SvrResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'id';
info.MatPath{8} = 'mode';
info.MatPath{9} = 'content';
info.MatPath{10} = 'error_code';