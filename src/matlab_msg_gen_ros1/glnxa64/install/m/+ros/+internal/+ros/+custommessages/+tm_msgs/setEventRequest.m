function [data, info] = setEventRequest
%SetEvent gives an empty data for tm_msgs/SetEventRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/SetEventRequest';
[data.TAG, info.TAG] = ros.internal.ros.messages.ros.default_type('int8',1, 1);
[data.WAITTAG, info.WAITTAG] = ros.internal.ros.messages.ros.default_type('int8',1, 2);
[data.STOP, info.STOP] = ros.internal.ros.messages.ros.default_type('int8',1, 11);
[data.PAUSE, info.PAUSE] = ros.internal.ros.messages.ros.default_type('int8',1, 12);
[data.RESUME, info.RESUME] = ros.internal.ros.messages.ros.default_type('int8',1, 13);
[data.EXIT, info.EXIT] = ros.internal.ros.messages.ros.default_type('int8',1, -1);
[data.Func, info.Func] = ros.internal.ros.messages.ros.default_type('int8',1);
[data.Arg0, info.Arg0] = ros.internal.ros.messages.ros.default_type('int8',1);
[data.Arg1, info.Arg1] = ros.internal.ros.messages.ros.default_type('int8',1);
info.MessageType = 'tm_msgs/SetEventRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'TAG';
info.MatPath{2} = 'WAIT_TAG';
info.MatPath{3} = 'STOP';
info.MatPath{4} = 'PAUSE';
info.MatPath{5} = 'RESUME';
info.MatPath{6} = 'EXIT';
info.MatPath{7} = 'func';
info.MatPath{8} = 'arg0';
info.MatPath{9} = 'arg1';
