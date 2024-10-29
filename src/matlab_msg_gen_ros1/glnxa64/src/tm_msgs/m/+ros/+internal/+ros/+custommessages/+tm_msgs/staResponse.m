function [data, info] = staResponse
%StaResponse gives an empty data for tm_msgs/StaResponse
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/StaResponse';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Subcmd, info.Subcmd] = ros.internal.ros.messages.ros.char('string',0);
[data.Subdata, info.Subdata] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'tm_msgs/StaResponse';
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
info.MatPath{7} = 'subcmd';
info.MatPath{8} = 'subdata';
