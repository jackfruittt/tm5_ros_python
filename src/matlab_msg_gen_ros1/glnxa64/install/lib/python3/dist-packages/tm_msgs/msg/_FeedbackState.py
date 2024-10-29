# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tm_msgs/FeedbackState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class FeedbackState(genpy.Message):
  _md5sum = "44d5702d5a7507d317011ef00404b814"
  _type = "tm_msgs/FeedbackState"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header

# Connection Status
bool is_svr_connected       # Ethernet connection
bool is_sct_connected       # Listen Node connection

# Response ROS Node Status
int32 tmsrv_cperr           # TM Ethernet Slave Communication Last CPERR Error Code
int32 tmscript_cperr        # External Script Communication Last CPERR Error Code
int32 tmsrv_dataerr         # TMSVR Communication Last Data Error Code
int32 tmscript_dataerr      # External Script Communication TMSCT (or TMSTA) Last Data Error Code

# Disconnection Message
int32 max_not_connect_in_s
int32 disconnection_times

# Movement
float64[] joint_pos
float64[] joint_vel
float64[] joint_tor
float64[] tool0_pose         # flange_pose
float64[] tool_pose
float64[] tcp_speed
float64[] tcp_force

# Torque Data(for TM-Flow 1.84)
float64[] joint_tor_average
float64[] joint_tor_min
float64[] joint_tor_max

# Status
bool robot_link              # Link Robot Controller
bool is_data_table_correct   # Data Table Setting is Correct
bool robot_error             # Error or Not
bool project_run             # Project Runing or not
bool project_pause           # Project Pause or not
bool safetyguard_a           # Safety IO(Safeguard Port A trigger) 
bool e_stop                  # Emergency STOP
bool camera_light            # Light
int32 error_code             # Last Error Code
int32 project_speed          # Project Running Speed
int32 ma_mode                # M/A Mode
int32 robot_light            # Robot light

# IO
bool[] cb_digital_output
bool[] cb_digital_input
float32[] cb_analog_output
float32[] cb_analog_input
bool[] ee_digital_output
bool[] ee_digital_input
float32[] ee_analog_output
float32[] ee_analog_input

# String
string error_content


================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','is_svr_connected','is_sct_connected','tmsrv_cperr','tmscript_cperr','tmsrv_dataerr','tmscript_dataerr','max_not_connect_in_s','disconnection_times','joint_pos','joint_vel','joint_tor','tool0_pose','tool_pose','tcp_speed','tcp_force','joint_tor_average','joint_tor_min','joint_tor_max','robot_link','is_data_table_correct','robot_error','project_run','project_pause','safetyguard_a','e_stop','camera_light','error_code','project_speed','ma_mode','robot_light','cb_digital_output','cb_digital_input','cb_analog_output','cb_analog_input','ee_digital_output','ee_digital_input','ee_analog_output','ee_analog_input','error_content']
  _slot_types = ['std_msgs/Header','bool','bool','int32','int32','int32','int32','int32','int32','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','float64[]','bool','bool','bool','bool','bool','bool','bool','bool','int32','int32','int32','int32','bool[]','bool[]','float32[]','float32[]','bool[]','bool[]','float32[]','float32[]','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,is_svr_connected,is_sct_connected,tmsrv_cperr,tmscript_cperr,tmsrv_dataerr,tmscript_dataerr,max_not_connect_in_s,disconnection_times,joint_pos,joint_vel,joint_tor,tool0_pose,tool_pose,tcp_speed,tcp_force,joint_tor_average,joint_tor_min,joint_tor_max,robot_link,is_data_table_correct,robot_error,project_run,project_pause,safetyguard_a,e_stop,camera_light,error_code,project_speed,ma_mode,robot_light,cb_digital_output,cb_digital_input,cb_analog_output,cb_analog_input,ee_digital_output,ee_digital_input,ee_analog_output,ee_analog_input,error_content

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FeedbackState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.is_svr_connected is None:
        self.is_svr_connected = False
      if self.is_sct_connected is None:
        self.is_sct_connected = False
      if self.tmsrv_cperr is None:
        self.tmsrv_cperr = 0
      if self.tmscript_cperr is None:
        self.tmscript_cperr = 0
      if self.tmsrv_dataerr is None:
        self.tmsrv_dataerr = 0
      if self.tmscript_dataerr is None:
        self.tmscript_dataerr = 0
      if self.max_not_connect_in_s is None:
        self.max_not_connect_in_s = 0
      if self.disconnection_times is None:
        self.disconnection_times = 0
      if self.joint_pos is None:
        self.joint_pos = []
      if self.joint_vel is None:
        self.joint_vel = []
      if self.joint_tor is None:
        self.joint_tor = []
      if self.tool0_pose is None:
        self.tool0_pose = []
      if self.tool_pose is None:
        self.tool_pose = []
      if self.tcp_speed is None:
        self.tcp_speed = []
      if self.tcp_force is None:
        self.tcp_force = []
      if self.joint_tor_average is None:
        self.joint_tor_average = []
      if self.joint_tor_min is None:
        self.joint_tor_min = []
      if self.joint_tor_max is None:
        self.joint_tor_max = []
      if self.robot_link is None:
        self.robot_link = False
      if self.is_data_table_correct is None:
        self.is_data_table_correct = False
      if self.robot_error is None:
        self.robot_error = False
      if self.project_run is None:
        self.project_run = False
      if self.project_pause is None:
        self.project_pause = False
      if self.safetyguard_a is None:
        self.safetyguard_a = False
      if self.e_stop is None:
        self.e_stop = False
      if self.camera_light is None:
        self.camera_light = False
      if self.error_code is None:
        self.error_code = 0
      if self.project_speed is None:
        self.project_speed = 0
      if self.ma_mode is None:
        self.ma_mode = 0
      if self.robot_light is None:
        self.robot_light = 0
      if self.cb_digital_output is None:
        self.cb_digital_output = []
      if self.cb_digital_input is None:
        self.cb_digital_input = []
      if self.cb_analog_output is None:
        self.cb_analog_output = []
      if self.cb_analog_input is None:
        self.cb_analog_input = []
      if self.ee_digital_output is None:
        self.ee_digital_output = []
      if self.ee_digital_input is None:
        self.ee_digital_input = []
      if self.ee_analog_output is None:
        self.ee_analog_output = []
      if self.ee_analog_input is None:
        self.ee_analog_input = []
      if self.error_content is None:
        self.error_content = ''
    else:
      self.header = std_msgs.msg.Header()
      self.is_svr_connected = False
      self.is_sct_connected = False
      self.tmsrv_cperr = 0
      self.tmscript_cperr = 0
      self.tmsrv_dataerr = 0
      self.tmscript_dataerr = 0
      self.max_not_connect_in_s = 0
      self.disconnection_times = 0
      self.joint_pos = []
      self.joint_vel = []
      self.joint_tor = []
      self.tool0_pose = []
      self.tool_pose = []
      self.tcp_speed = []
      self.tcp_force = []
      self.joint_tor_average = []
      self.joint_tor_min = []
      self.joint_tor_max = []
      self.robot_link = False
      self.is_data_table_correct = False
      self.robot_error = False
      self.project_run = False
      self.project_pause = False
      self.safetyguard_a = False
      self.e_stop = False
      self.camera_light = False
      self.error_code = 0
      self.project_speed = 0
      self.ma_mode = 0
      self.robot_light = 0
      self.cb_digital_output = []
      self.cb_digital_input = []
      self.cb_analog_output = []
      self.cb_analog_input = []
      self.ee_digital_output = []
      self.ee_digital_input = []
      self.ee_analog_output = []
      self.ee_analog_input = []
      self.error_content = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2B6i().pack(_x.is_svr_connected, _x.is_sct_connected, _x.tmsrv_cperr, _x.tmscript_cperr, _x.tmsrv_dataerr, _x.tmscript_dataerr, _x.max_not_connect_in_s, _x.disconnection_times))
      length = len(self.joint_pos)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.joint_pos))
      length = len(self.joint_vel)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.joint_vel))
      length = len(self.joint_tor)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.joint_tor))
      length = len(self.tool0_pose)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.tool0_pose))
      length = len(self.tool_pose)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.tool_pose))
      length = len(self.tcp_speed)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.tcp_speed))
      length = len(self.tcp_force)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.tcp_force))
      length = len(self.joint_tor_average)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.joint_tor_average))
      length = len(self.joint_tor_min)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.joint_tor_min))
      length = len(self.joint_tor_max)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.joint_tor_max))
      _x = self
      buff.write(_get_struct_8B4i().pack(_x.robot_link, _x.is_data_table_correct, _x.robot_error, _x.project_run, _x.project_pause, _x.safetyguard_a, _x.e_stop, _x.camera_light, _x.error_code, _x.project_speed, _x.ma_mode, _x.robot_light))
      length = len(self.cb_digital_output)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.Struct(pattern).pack(*self.cb_digital_output))
      length = len(self.cb_digital_input)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.Struct(pattern).pack(*self.cb_digital_input))
      length = len(self.cb_analog_output)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.cb_analog_output))
      length = len(self.cb_analog_input)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.cb_analog_input))
      length = len(self.ee_digital_output)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.Struct(pattern).pack(*self.ee_digital_output))
      length = len(self.ee_digital_input)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.Struct(pattern).pack(*self.ee_digital_input))
      length = len(self.ee_analog_output)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.ee_analog_output))
      length = len(self.ee_analog_input)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.ee_analog_input))
      _x = self.error_content
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 26
      (_x.is_svr_connected, _x.is_sct_connected, _x.tmsrv_cperr, _x.tmscript_cperr, _x.tmsrv_dataerr, _x.tmscript_dataerr, _x.max_not_connect_in_s, _x.disconnection_times,) = _get_struct_2B6i().unpack(str[start:end])
      self.is_svr_connected = bool(self.is_svr_connected)
      self.is_sct_connected = bool(self.is_sct_connected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_pos = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_vel = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_tor = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.tool0_pose = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.tool_pose = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.tcp_speed = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.tcp_force = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_tor_average = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_tor_min = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_tor_max = s.unpack(str[start:end])
      _x = self
      start = end
      end += 24
      (_x.robot_link, _x.is_data_table_correct, _x.robot_error, _x.project_run, _x.project_pause, _x.safetyguard_a, _x.e_stop, _x.camera_light, _x.error_code, _x.project_speed, _x.ma_mode, _x.robot_light,) = _get_struct_8B4i().unpack(str[start:end])
      self.robot_link = bool(self.robot_link)
      self.is_data_table_correct = bool(self.is_data_table_correct)
      self.robot_error = bool(self.robot_error)
      self.project_run = bool(self.project_run)
      self.project_pause = bool(self.project_pause)
      self.safetyguard_a = bool(self.safetyguard_a)
      self.e_stop = bool(self.e_stop)
      self.camera_light = bool(self.camera_light)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cb_digital_output = s.unpack(str[start:end])
      self.cb_digital_output = list(map(bool, self.cb_digital_output))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cb_digital_input = s.unpack(str[start:end])
      self.cb_digital_input = list(map(bool, self.cb_digital_input))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cb_analog_output = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cb_analog_input = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ee_digital_output = s.unpack(str[start:end])
      self.ee_digital_output = list(map(bool, self.ee_digital_output))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ee_digital_input = s.unpack(str[start:end])
      self.ee_digital_input = list(map(bool, self.ee_digital_input))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ee_analog_output = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ee_analog_input = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error_content = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.error_content = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2B6i().pack(_x.is_svr_connected, _x.is_sct_connected, _x.tmsrv_cperr, _x.tmscript_cperr, _x.tmsrv_dataerr, _x.tmscript_dataerr, _x.max_not_connect_in_s, _x.disconnection_times))
      length = len(self.joint_pos)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.joint_pos.tostring())
      length = len(self.joint_vel)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.joint_vel.tostring())
      length = len(self.joint_tor)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.joint_tor.tostring())
      length = len(self.tool0_pose)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.tool0_pose.tostring())
      length = len(self.tool_pose)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.tool_pose.tostring())
      length = len(self.tcp_speed)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.tcp_speed.tostring())
      length = len(self.tcp_force)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.tcp_force.tostring())
      length = len(self.joint_tor_average)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.joint_tor_average.tostring())
      length = len(self.joint_tor_min)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.joint_tor_min.tostring())
      length = len(self.joint_tor_max)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.joint_tor_max.tostring())
      _x = self
      buff.write(_get_struct_8B4i().pack(_x.robot_link, _x.is_data_table_correct, _x.robot_error, _x.project_run, _x.project_pause, _x.safetyguard_a, _x.e_stop, _x.camera_light, _x.error_code, _x.project_speed, _x.ma_mode, _x.robot_light))
      length = len(self.cb_digital_output)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.cb_digital_output.tostring())
      length = len(self.cb_digital_input)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.cb_digital_input.tostring())
      length = len(self.cb_analog_output)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.cb_analog_output.tostring())
      length = len(self.cb_analog_input)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.cb_analog_input.tostring())
      length = len(self.ee_digital_output)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.ee_digital_output.tostring())
      length = len(self.ee_digital_input)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.ee_digital_input.tostring())
      length = len(self.ee_analog_output)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.ee_analog_output.tostring())
      length = len(self.ee_analog_input)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.ee_analog_input.tostring())
      _x = self.error_content
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 26
      (_x.is_svr_connected, _x.is_sct_connected, _x.tmsrv_cperr, _x.tmscript_cperr, _x.tmsrv_dataerr, _x.tmscript_dataerr, _x.max_not_connect_in_s, _x.disconnection_times,) = _get_struct_2B6i().unpack(str[start:end])
      self.is_svr_connected = bool(self.is_svr_connected)
      self.is_sct_connected = bool(self.is_sct_connected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_pos = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_vel = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_tor = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.tool0_pose = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.tool_pose = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.tcp_speed = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.tcp_force = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_tor_average = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_tor_min = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.joint_tor_max = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      _x = self
      start = end
      end += 24
      (_x.robot_link, _x.is_data_table_correct, _x.robot_error, _x.project_run, _x.project_pause, _x.safetyguard_a, _x.e_stop, _x.camera_light, _x.error_code, _x.project_speed, _x.ma_mode, _x.robot_light,) = _get_struct_8B4i().unpack(str[start:end])
      self.robot_link = bool(self.robot_link)
      self.is_data_table_correct = bool(self.is_data_table_correct)
      self.robot_error = bool(self.robot_error)
      self.project_run = bool(self.project_run)
      self.project_pause = bool(self.project_pause)
      self.safetyguard_a = bool(self.safetyguard_a)
      self.e_stop = bool(self.e_stop)
      self.camera_light = bool(self.camera_light)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cb_digital_output = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.cb_digital_output = list(map(bool, self.cb_digital_output))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cb_digital_input = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.cb_digital_input = list(map(bool, self.cb_digital_input))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cb_analog_output = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.cb_analog_input = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ee_digital_output = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.ee_digital_output = list(map(bool, self.ee_digital_output))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ee_digital_input = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.ee_digital_input = list(map(bool, self.ee_digital_input))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ee_analog_output = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ee_analog_input = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error_content = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.error_content = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B6i = None
def _get_struct_2B6i():
    global _struct_2B6i
    if _struct_2B6i is None:
        _struct_2B6i = struct.Struct("<2B6i")
    return _struct_2B6i
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_8B4i = None
def _get_struct_8B4i():
    global _struct_8B4i
    if _struct_8B4i is None:
        _struct_8B4i = struct.Struct("<8B4i")
    return _struct_8B4i
