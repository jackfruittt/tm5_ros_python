function [data, info] = setPositionsRequest
%SetPositions gives an empty data for tm_msgs/SetPositionsRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'tm_msgs/SetPositionsRequest';
[data.PTPJ, info.PTPJ] = ros.internal.ros.messages.ros.default_type('int8',1, 1);
[data.PTPT, info.PTPT] = ros.internal.ros.messages.ros.default_type('int8',1, 2);
[data.LINET, info.LINET] = ros.internal.ros.messages.ros.default_type('int8',1, 4);
[data.CIRCT, info.CIRCT] = ros.internal.ros.messages.ros.default_type('int8',1, 6);
[data.PLINET, info.PLINET] = ros.internal.ros.messages.ros.default_type('int8',1, 8);
[data.MotionType, info.MotionType] = ros.internal.ros.messages.ros.default_type('int8',1);
[data.Positions, info.Positions] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.Velocity, info.Velocity] = ros.internal.ros.messages.ros.default_type('double',1);
[data.AccTime, info.AccTime] = ros.internal.ros.messages.ros.default_type('double',1);
[data.BlendPercentage, info.BlendPercentage] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.FineGoal, info.FineGoal] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'tm_msgs/SetPositionsRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'PTP_J';
info.MatPath{2} = 'PTP_T';
info.MatPath{3} = 'LINE_T';
info.MatPath{4} = 'CIRC_T';
info.MatPath{5} = 'PLINE_T';
info.MatPath{6} = 'motion_type';
info.MatPath{7} = 'positions';
info.MatPath{8} = 'velocity';
info.MatPath{9} = 'acc_time';
info.MatPath{10} = 'blend_percentage';
info.MatPath{11} = 'fine_goal';
