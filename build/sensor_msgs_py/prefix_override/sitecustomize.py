import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ohtoai/rust_ros_ws/install/sensor_msgs_py'
