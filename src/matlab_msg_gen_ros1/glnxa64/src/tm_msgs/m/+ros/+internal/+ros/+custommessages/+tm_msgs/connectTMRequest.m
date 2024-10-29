function [data, info] = connectTMRequest
%ConnectTM gives an empty data for tm_msgs/ConnectTMRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/ConnectTMRequest';
[data.TMSVR, info.TMSVR] = ros.internal.ros.messages.ros.default_type('int8',1, 0);
[data.TMSCT, info.TMSCT] = ros.internal.ros.messages.ros.default_type('int8',1, 1);
[data.Server, info.Server] = ros.internal.ros.messages.ros.default_type('int8',1);
[data.Connect, info.Connect] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.Reconnect, info.Reconnect] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.Timeout, info.Timeout] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Timeval, info.Timeval] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'tm_msgs/ConnectTMRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'TMSVR';
info.MatPath{2} = 'TMSCT';
info.MatPath{3} = 'server';
info.MatPath{4} = 'connect';
info.MatPath{5} = 'reconnect';
info.MatPath{6} = 'timeout';
info.MatPath{7} = 'timeval';
