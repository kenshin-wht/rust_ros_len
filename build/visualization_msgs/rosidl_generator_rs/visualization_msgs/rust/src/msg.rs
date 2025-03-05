pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__ImageMarker() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__ImageMarker__init(msg: *mut ImageMarker) -> bool;
    fn visualization_msgs__msg__ImageMarker__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ImageMarker>, size: usize) -> bool;
    fn visualization_msgs__msg__ImageMarker__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ImageMarker>);
    fn visualization_msgs__msg__ImageMarker__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ImageMarker>, out_seq: *mut rosidl_runtime_rs::Sequence<ImageMarker>) -> bool;
}

// Corresponds to visualization_msgs__msg__ImageMarker
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImageMarker {
    pub header: std_msgs::msg::rmw::Header,
    pub ns: rosidl_runtime_rs::String,
    pub id: i32,
    pub type_: i32,
    pub action: i32,
    pub position: geometry_msgs::msg::rmw::Point,
    pub scale: f32,
    pub outline_color: std_msgs::msg::rmw::ColorRGBA,
    pub filled: u8,
    pub fill_color: std_msgs::msg::rmw::ColorRGBA,
    pub lifetime: builtin_interfaces::msg::rmw::Duration,
    pub points: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,
    pub outline_colors: rosidl_runtime_rs::Sequence<std_msgs::msg::rmw::ColorRGBA>,
}

impl ImageMarker {
    pub const CIRCLE: i32 = 0;
    pub const LINE_STRIP: i32 = 1;
    pub const LINE_LIST: i32 = 2;
    pub const POLYGON: i32 = 3;
    pub const POINTS: i32 = 4;
    pub const ADD: i32 = 0;
    pub const REMOVE: i32 = 1;
}


impl Default for ImageMarker {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__ImageMarker__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__ImageMarker__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ImageMarker {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__ImageMarker__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__ImageMarker__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__ImageMarker__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ImageMarker {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ImageMarker where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/ImageMarker";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__ImageMarker() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarker() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__InteractiveMarker__init(msg: *mut InteractiveMarker) -> bool;
    fn visualization_msgs__msg__InteractiveMarker__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarker>, size: usize) -> bool;
    fn visualization_msgs__msg__InteractiveMarker__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarker>);
    fn visualization_msgs__msg__InteractiveMarker__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InteractiveMarker>, out_seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarker>) -> bool;
}

// Corresponds to visualization_msgs__msg__InteractiveMarker
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarker {
    pub header: std_msgs::msg::rmw::Header,
    pub pose: geometry_msgs::msg::rmw::Pose,
    pub name: rosidl_runtime_rs::String,
    pub description: rosidl_runtime_rs::String,
    pub scale: f32,
    pub menu_entries: rosidl_runtime_rs::Sequence<crate::msg::rmw::MenuEntry>,
    pub controls: rosidl_runtime_rs::Sequence<crate::msg::rmw::InteractiveMarkerControl>,
}



impl Default for InteractiveMarker {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__InteractiveMarker__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__InteractiveMarker__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InteractiveMarker {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarker__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarker__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarker__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarker {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InteractiveMarker where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/InteractiveMarker";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarker() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerControl() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__InteractiveMarkerControl__init(msg: *mut InteractiveMarkerControl) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerControl>, size: usize) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerControl>);
    fn visualization_msgs__msg__InteractiveMarkerControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InteractiveMarkerControl>, out_seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerControl>) -> bool;
}

// Corresponds to visualization_msgs__msg__InteractiveMarkerControl
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerControl {
    pub name: rosidl_runtime_rs::String,
    pub orientation: geometry_msgs::msg::rmw::Quaternion,
    pub orientation_mode: u8,
    pub interaction_mode: u8,
    pub always_visible: bool,
    pub markers: rosidl_runtime_rs::Sequence<crate::msg::rmw::Marker>,
    pub independent_marker_orientation: bool,
    pub description: rosidl_runtime_rs::String,
}

impl InteractiveMarkerControl {
    /// Orientation mode: controls how orientation changes.
    /// INHERIT: Follow orientation of interactive marker
    /// FIXED: Keep orientation fixed at initial state
    /// VIEW_FACING: Align y-z plane with screen (x: forward, y:left, z:up).
    pub const INHERIT: u8 = 0;
    pub const FIXED: u8 = 1;
    pub const VIEW_FACING: u8 = 2;
    /// Interaction mode for this control
    ///
    /// NONE: This control is only meant for visualization; no context menu.
    /// MENU: Like NONE, but right-click menu is active.
    /// BUTTON: Element can be left-clicked.
    /// MOVE_AXIS: Translate along local x-axis.
    /// MOVE_PLANE: Translate in local y-z plane.
    /// ROTATE_AXIS: Rotate around local x-axis.
    /// MOVE_ROTATE: Combines MOVE_PLANE and ROTATE_AXIS.
    pub const NONE: u8 = 0;
    pub const MENU: u8 = 1;
    pub const BUTTON: u8 = 2;
    pub const MOVE_AXIS: u8 = 3;
    pub const MOVE_PLANE: u8 = 4;
    pub const ROTATE_AXIS: u8 = 5;
    pub const MOVE_ROTATE: u8 = 6;
    /// "3D" interaction modes work with the mouse+SHIFT+CTRL or with 3D cursors.
    /// MOVE_3D: Translate freely in 3D space.
    /// ROTATE_3D: Rotate freely in 3D space about the origin of parent frame.
    /// MOVE_ROTATE_3D: Full 6-DOF freedom of translation and rotation about the cursor origin.
    pub const MOVE_3D: u8 = 7;
    pub const ROTATE_3D: u8 = 8;
    pub const MOVE_ROTATE_3D: u8 = 9;
}


impl Default for InteractiveMarkerControl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__InteractiveMarkerControl__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__InteractiveMarkerControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InteractiveMarkerControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InteractiveMarkerControl where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/InteractiveMarkerControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerControl() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerFeedback() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__InteractiveMarkerFeedback__init(msg: *mut InteractiveMarkerFeedback) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerFeedback>, size: usize) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerFeedback>);
    fn visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InteractiveMarkerFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerFeedback>) -> bool;
}

// Corresponds to visualization_msgs__msg__InteractiveMarkerFeedback
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerFeedback {
    pub header: std_msgs::msg::rmw::Header,
    pub client_id: rosidl_runtime_rs::String,
    pub marker_name: rosidl_runtime_rs::String,
    pub control_name: rosidl_runtime_rs::String,
    pub event_type: u8,
    pub pose: geometry_msgs::msg::rmw::Pose,
    pub menu_entry_id: u32,
    pub mouse_point: geometry_msgs::msg::rmw::Point,
    pub mouse_point_valid: bool,
}

impl InteractiveMarkerFeedback {
    /// Type of the event
    /// KEEP_ALIVE: sent while dragging to keep up control of the marker
    /// MENU_SELECT: a menu entry has been selected
    /// BUTTON_CLICK: a button control has been clicked
    /// POSE_UPDATE: the pose has been changed using one of the controls
    pub const KEEP_ALIVE: u8 = 0;
    pub const POSE_UPDATE: u8 = 1;
    pub const MENU_SELECT: u8 = 2;
    pub const BUTTON_CLICK: u8 = 3;
    pub const MOUSE_DOWN: u8 = 4;
    pub const MOUSE_UP: u8 = 5;
}


impl Default for InteractiveMarkerFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__InteractiveMarkerFeedback__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__InteractiveMarkerFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InteractiveMarkerFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InteractiveMarkerFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/InteractiveMarkerFeedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerFeedback() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerInit() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__InteractiveMarkerInit__init(msg: *mut InteractiveMarkerInit) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerInit__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerInit>, size: usize) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerInit__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerInit>);
    fn visualization_msgs__msg__InteractiveMarkerInit__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InteractiveMarkerInit>, out_seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerInit>) -> bool;
}

// Corresponds to visualization_msgs__msg__InteractiveMarkerInit
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerInit {
    pub server_id: rosidl_runtime_rs::String,
    pub seq_num: u64,
    pub markers: rosidl_runtime_rs::Sequence<crate::msg::rmw::InteractiveMarker>,
}



impl Default for InteractiveMarkerInit {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__InteractiveMarkerInit__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__InteractiveMarkerInit__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InteractiveMarkerInit {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerInit__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerInit__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerInit__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerInit {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InteractiveMarkerInit where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/InteractiveMarkerInit";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerInit() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerPose() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__InteractiveMarkerPose__init(msg: *mut InteractiveMarkerPose) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerPose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerPose>, size: usize) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerPose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerPose>);
    fn visualization_msgs__msg__InteractiveMarkerPose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InteractiveMarkerPose>, out_seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerPose>) -> bool;
}

// Corresponds to visualization_msgs__msg__InteractiveMarkerPose
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerPose {
    pub header: std_msgs::msg::rmw::Header,
    pub pose: geometry_msgs::msg::rmw::Pose,
    pub name: rosidl_runtime_rs::String,
}



impl Default for InteractiveMarkerPose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__InteractiveMarkerPose__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__InteractiveMarkerPose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InteractiveMarkerPose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerPose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerPose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerPose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerPose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InteractiveMarkerPose where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/InteractiveMarkerPose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerPose() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerUpdate() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__InteractiveMarkerUpdate__init(msg: *mut InteractiveMarkerUpdate) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerUpdate__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerUpdate>, size: usize) -> bool;
    fn visualization_msgs__msg__InteractiveMarkerUpdate__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerUpdate>);
    fn visualization_msgs__msg__InteractiveMarkerUpdate__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InteractiveMarkerUpdate>, out_seq: *mut rosidl_runtime_rs::Sequence<InteractiveMarkerUpdate>) -> bool;
}

// Corresponds to visualization_msgs__msg__InteractiveMarkerUpdate
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerUpdate {
    pub server_id: rosidl_runtime_rs::String,
    pub seq_num: u64,
    pub type_: u8,
    pub markers: rosidl_runtime_rs::Sequence<crate::msg::rmw::InteractiveMarker>,
    pub poses: rosidl_runtime_rs::Sequence<crate::msg::rmw::InteractiveMarkerPose>,
    pub erases: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,
}

impl InteractiveMarkerUpdate {
    /// Type holds the purpose of this message.  It must be one of UPDATE or KEEP_ALIVE.
    /// UPDATE: Incremental update to previous state.
    ///         The sequence number must be 1 higher than for
    ///         the previous update.
    /// KEEP_ALIVE: Indicates the that the server is still living.
    ///             The sequence number does not increase.
    ///             No payload data should be filled out (markers, poses, or erases).
    pub const KEEP_ALIVE: u8 = 0;
    pub const UPDATE: u8 = 1;
}


impl Default for InteractiveMarkerUpdate {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__InteractiveMarkerUpdate__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__InteractiveMarkerUpdate__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InteractiveMarkerUpdate {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerUpdate__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerUpdate__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__InteractiveMarkerUpdate__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerUpdate {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InteractiveMarkerUpdate where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/InteractiveMarkerUpdate";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__InteractiveMarkerUpdate() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__Marker() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__Marker__init(msg: *mut Marker) -> bool;
    fn visualization_msgs__msg__Marker__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Marker>, size: usize) -> bool;
    fn visualization_msgs__msg__Marker__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Marker>);
    fn visualization_msgs__msg__Marker__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Marker>, out_seq: *mut rosidl_runtime_rs::Sequence<Marker>) -> bool;
}

// Corresponds to visualization_msgs__msg__Marker
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Marker {
    pub header: std_msgs::msg::rmw::Header,
    pub ns: rosidl_runtime_rs::String,
    pub id: i32,
    pub type_: i32,
    pub action: i32,
    pub pose: geometry_msgs::msg::rmw::Pose,
    pub scale: geometry_msgs::msg::rmw::Vector3,
    pub color: std_msgs::msg::rmw::ColorRGBA,
    pub lifetime: builtin_interfaces::msg::rmw::Duration,
    pub frame_locked: bool,
    pub points: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,
    pub colors: rosidl_runtime_rs::Sequence<std_msgs::msg::rmw::ColorRGBA>,
    pub texture_resource: rosidl_runtime_rs::String,
    pub texture: sensor_msgs::msg::rmw::CompressedImage,
    pub uv_coordinates: rosidl_runtime_rs::Sequence<crate::msg::rmw::UVCoordinate>,
    pub text: rosidl_runtime_rs::String,
    pub mesh_resource: rosidl_runtime_rs::String,
    pub mesh_file: crate::msg::rmw::MeshFile,
    pub mesh_use_embedded_materials: bool,
}

impl Marker {
    pub const ARROW: i32 = 0;
    pub const CUBE: i32 = 1;
    pub const SPHERE: i32 = 2;
    pub const CYLINDER: i32 = 3;
    pub const LINE_STRIP: i32 = 4;
    pub const LINE_LIST: i32 = 5;
    pub const CUBE_LIST: i32 = 6;
    pub const SPHERE_LIST: i32 = 7;
    pub const POINTS: i32 = 8;
    pub const TEXT_VIEW_FACING: i32 = 9;
    pub const MESH_RESOURCE: i32 = 10;
    pub const TRIANGLE_LIST: i32 = 11;
    pub const ARROW_STRIP: i32 = 12;
    pub const ADD: i32 = 0;
    pub const MODIFY: i32 = 0;
    pub const DELETE: i32 = 2;
    pub const DELETEALL: i32 = 3;
}


impl Default for Marker {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__Marker__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__Marker__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Marker {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__Marker__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__Marker__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__Marker__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Marker {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Marker where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/Marker";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__Marker() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__MarkerArray() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__MarkerArray__init(msg: *mut MarkerArray) -> bool;
    fn visualization_msgs__msg__MarkerArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MarkerArray>, size: usize) -> bool;
    fn visualization_msgs__msg__MarkerArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MarkerArray>);
    fn visualization_msgs__msg__MarkerArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MarkerArray>, out_seq: *mut rosidl_runtime_rs::Sequence<MarkerArray>) -> bool;
}

// Corresponds to visualization_msgs__msg__MarkerArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MarkerArray {
    pub markers: rosidl_runtime_rs::Sequence<crate::msg::rmw::Marker>,
}



impl Default for MarkerArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__MarkerArray__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__MarkerArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MarkerArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MarkerArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MarkerArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MarkerArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MarkerArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MarkerArray where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/MarkerArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__MarkerArray() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__MenuEntry() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__MenuEntry__init(msg: *mut MenuEntry) -> bool;
    fn visualization_msgs__msg__MenuEntry__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MenuEntry>, size: usize) -> bool;
    fn visualization_msgs__msg__MenuEntry__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MenuEntry>);
    fn visualization_msgs__msg__MenuEntry__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MenuEntry>, out_seq: *mut rosidl_runtime_rs::Sequence<MenuEntry>) -> bool;
}

// Corresponds to visualization_msgs__msg__MenuEntry
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MenuEntry {
    pub id: u32,
    pub parent_id: u32,
    pub title: rosidl_runtime_rs::String,
    pub command: rosidl_runtime_rs::String,
    pub command_type: u8,
}

impl MenuEntry {
    /// Command_type stores the type of response desired when this menu
    /// entry is clicked.
    /// FEEDBACK: send an InteractiveMarkerFeedback message with menu_entry_id set to this entry's id.
    /// ROSRUN: execute "rosrun" with arguments given in the command field (above).
    /// ROSLAUNCH: execute "roslaunch" with arguments given in the command field (above).
    pub const FEEDBACK: u8 = 0;
    pub const ROSRUN: u8 = 1;
    pub const ROSLAUNCH: u8 = 2;
}


impl Default for MenuEntry {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__MenuEntry__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__MenuEntry__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MenuEntry {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MenuEntry__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MenuEntry__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MenuEntry__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MenuEntry {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MenuEntry where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/MenuEntry";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__MenuEntry() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__MeshFile() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__MeshFile__init(msg: *mut MeshFile) -> bool;
    fn visualization_msgs__msg__MeshFile__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MeshFile>, size: usize) -> bool;
    fn visualization_msgs__msg__MeshFile__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MeshFile>);
    fn visualization_msgs__msg__MeshFile__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MeshFile>, out_seq: *mut rosidl_runtime_rs::Sequence<MeshFile>) -> bool;
}

// Corresponds to visualization_msgs__msg__MeshFile
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeshFile {
    pub filename: rosidl_runtime_rs::String,
    pub data: rosidl_runtime_rs::Sequence<u8>,
}



impl Default for MeshFile {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__MeshFile__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__MeshFile__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MeshFile {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MeshFile__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MeshFile__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__MeshFile__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MeshFile {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MeshFile where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/MeshFile";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__MeshFile() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__UVCoordinate() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__msg__UVCoordinate__init(msg: *mut UVCoordinate) -> bool;
    fn visualization_msgs__msg__UVCoordinate__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UVCoordinate>, size: usize) -> bool;
    fn visualization_msgs__msg__UVCoordinate__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UVCoordinate>);
    fn visualization_msgs__msg__UVCoordinate__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UVCoordinate>, out_seq: *mut rosidl_runtime_rs::Sequence<UVCoordinate>) -> bool;
}

// Corresponds to visualization_msgs__msg__UVCoordinate
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UVCoordinate {
    pub u: f32,
    pub v: f32,
}



impl Default for UVCoordinate {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__msg__UVCoordinate__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__msg__UVCoordinate__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UVCoordinate {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__UVCoordinate__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__UVCoordinate__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__msg__UVCoordinate__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UVCoordinate {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UVCoordinate where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/msg/UVCoordinate";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__msg__UVCoordinate() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImageMarker {
    pub header: std_msgs::msg::Header,
    pub ns: std::string::String,
    pub id: i32,
    pub type_: i32,
    pub action: i32,
    pub position: geometry_msgs::msg::Point,
    pub scale: f32,
    pub outline_color: std_msgs::msg::ColorRGBA,
    pub filled: u8,
    pub fill_color: std_msgs::msg::ColorRGBA,
    pub lifetime: builtin_interfaces::msg::Duration,
    pub points: Vec<geometry_msgs::msg::Point>,
    pub outline_colors: Vec<std_msgs::msg::ColorRGBA>,
}

impl ImageMarker {
    pub const CIRCLE: i32 = 0;
    pub const LINE_STRIP: i32 = 1;
    pub const LINE_LIST: i32 = 2;
    pub const POLYGON: i32 = 3;
    pub const POINTS: i32 = 4;
    pub const ADD: i32 = 0;
    pub const REMOVE: i32 = 1;
}


impl Default for ImageMarker {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::ImageMarker::default())
  }
}

impl rosidl_runtime_rs::Message for ImageMarker {
  type RmwMsg = crate::msg::rmw::ImageMarker;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ns: msg.ns.as_str().into(),
        id: msg.id,
        type_: msg.type_,
        action: msg.action,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        scale: msg.scale,
        outline_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.outline_color)).into_owned(),
        filled: msg.filled,
        fill_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.fill_color)).into_owned(),
        lifetime: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.lifetime)).into_owned(),
        points: msg.points
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        outline_colors: msg.outline_colors
          .into_iter()
          .map(|elem| std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        ns: msg.ns.as_str().into(),
      id: msg.id,
      type_: msg.type_,
      action: msg.action,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      scale: msg.scale,
        outline_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.outline_color)).into_owned(),
      filled: msg.filled,
        fill_color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.fill_color)).into_owned(),
        lifetime: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.lifetime)).into_owned(),
        points: msg.points
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        outline_colors: msg.outline_colors
          .iter()
          .map(|elem| std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ns: msg.ns.to_string(),
      id: msg.id,
      type_: msg.type_,
      action: msg.action,
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      scale: msg.scale,
      outline_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.outline_color),
      filled: msg.filled,
      fill_color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.fill_color),
      lifetime: builtin_interfaces::msg::Duration::from_rmw_message(msg.lifetime),
      points: msg.points
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      outline_colors: msg.outline_colors
          .into_iter()
          .map(std_msgs::msg::ColorRGBA::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarker {
    pub header: std_msgs::msg::Header,
    pub pose: geometry_msgs::msg::Pose,
    pub name: std::string::String,
    pub description: std::string::String,
    pub scale: f32,
    pub menu_entries: Vec<crate::msg::MenuEntry>,
    pub controls: Vec<crate::msg::InteractiveMarkerControl>,
}



impl Default for InteractiveMarker {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::InteractiveMarker::default())
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarker {
  type RmwMsg = crate::msg::rmw::InteractiveMarker;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        name: msg.name.as_str().into(),
        description: msg.description.as_str().into(),
        scale: msg.scale,
        menu_entries: msg.menu_entries
          .into_iter()
          .map(|elem| crate::msg::MenuEntry::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        controls: msg.controls
          .into_iter()
          .map(|elem| crate::msg::InteractiveMarkerControl::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        name: msg.name.as_str().into(),
        description: msg.description.as_str().into(),
      scale: msg.scale,
        menu_entries: msg.menu_entries
          .iter()
          .map(|elem| crate::msg::MenuEntry::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        controls: msg.controls
          .iter()
          .map(|elem| crate::msg::InteractiveMarkerControl::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      name: msg.name.to_string(),
      description: msg.description.to_string(),
      scale: msg.scale,
      menu_entries: msg.menu_entries
          .into_iter()
          .map(crate::msg::MenuEntry::from_rmw_message)
          .collect(),
      controls: msg.controls
          .into_iter()
          .map(crate::msg::InteractiveMarkerControl::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerControl {
    pub name: std::string::String,
    pub orientation: geometry_msgs::msg::Quaternion,
    pub orientation_mode: u8,
    pub interaction_mode: u8,
    pub always_visible: bool,
    pub markers: Vec<crate::msg::Marker>,
    pub independent_marker_orientation: bool,
    pub description: std::string::String,
}

impl InteractiveMarkerControl {
    /// Orientation mode: controls how orientation changes.
    /// INHERIT: Follow orientation of interactive marker
    /// FIXED: Keep orientation fixed at initial state
    /// VIEW_FACING: Align y-z plane with screen (x: forward, y:left, z:up).
    pub const INHERIT: u8 = 0;
    pub const FIXED: u8 = 1;
    pub const VIEW_FACING: u8 = 2;
    /// Interaction mode for this control
    ///
    /// NONE: This control is only meant for visualization; no context menu.
    /// MENU: Like NONE, but right-click menu is active.
    /// BUTTON: Element can be left-clicked.
    /// MOVE_AXIS: Translate along local x-axis.
    /// MOVE_PLANE: Translate in local y-z plane.
    /// ROTATE_AXIS: Rotate around local x-axis.
    /// MOVE_ROTATE: Combines MOVE_PLANE and ROTATE_AXIS.
    pub const NONE: u8 = 0;
    pub const MENU: u8 = 1;
    pub const BUTTON: u8 = 2;
    pub const MOVE_AXIS: u8 = 3;
    pub const MOVE_PLANE: u8 = 4;
    pub const ROTATE_AXIS: u8 = 5;
    pub const MOVE_ROTATE: u8 = 6;
    /// "3D" interaction modes work with the mouse+SHIFT+CTRL or with 3D cursors.
    /// MOVE_3D: Translate freely in 3D space.
    /// ROTATE_3D: Rotate freely in 3D space about the origin of parent frame.
    /// MOVE_ROTATE_3D: Full 6-DOF freedom of translation and rotation about the cursor origin.
    pub const MOVE_3D: u8 = 7;
    pub const ROTATE_3D: u8 = 8;
    pub const MOVE_ROTATE_3D: u8 = 9;
}


impl Default for InteractiveMarkerControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::InteractiveMarkerControl::default())
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerControl {
  type RmwMsg = crate::msg::rmw::InteractiveMarkerControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.orientation)).into_owned(),
        orientation_mode: msg.orientation_mode,
        interaction_mode: msg.interaction_mode,
        always_visible: msg.always_visible,
        markers: msg.markers
          .into_iter()
          .map(|elem| crate::msg::Marker::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        independent_marker_orientation: msg.independent_marker_orientation,
        description: msg.description.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orientation)).into_owned(),
      orientation_mode: msg.orientation_mode,
      interaction_mode: msg.interaction_mode,
      always_visible: msg.always_visible,
        markers: msg.markers
          .iter()
          .map(|elem| crate::msg::Marker::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      independent_marker_orientation: msg.independent_marker_orientation,
        description: msg.description.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      orientation: geometry_msgs::msg::Quaternion::from_rmw_message(msg.orientation),
      orientation_mode: msg.orientation_mode,
      interaction_mode: msg.interaction_mode,
      always_visible: msg.always_visible,
      markers: msg.markers
          .into_iter()
          .map(crate::msg::Marker::from_rmw_message)
          .collect(),
      independent_marker_orientation: msg.independent_marker_orientation,
      description: msg.description.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerFeedback {
    pub header: std_msgs::msg::Header,
    pub client_id: std::string::String,
    pub marker_name: std::string::String,
    pub control_name: std::string::String,
    pub event_type: u8,
    pub pose: geometry_msgs::msg::Pose,
    pub menu_entry_id: u32,
    pub mouse_point: geometry_msgs::msg::Point,
    pub mouse_point_valid: bool,
}

impl InteractiveMarkerFeedback {
    /// Type of the event
    /// KEEP_ALIVE: sent while dragging to keep up control of the marker
    /// MENU_SELECT: a menu entry has been selected
    /// BUTTON_CLICK: a button control has been clicked
    /// POSE_UPDATE: the pose has been changed using one of the controls
    pub const KEEP_ALIVE: u8 = 0;
    pub const POSE_UPDATE: u8 = 1;
    pub const MENU_SELECT: u8 = 2;
    pub const BUTTON_CLICK: u8 = 3;
    pub const MOUSE_DOWN: u8 = 4;
    pub const MOUSE_UP: u8 = 5;
}


impl Default for InteractiveMarkerFeedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::InteractiveMarkerFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerFeedback {
  type RmwMsg = crate::msg::rmw::InteractiveMarkerFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        client_id: msg.client_id.as_str().into(),
        marker_name: msg.marker_name.as_str().into(),
        control_name: msg.control_name.as_str().into(),
        event_type: msg.event_type,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        menu_entry_id: msg.menu_entry_id,
        mouse_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.mouse_point)).into_owned(),
        mouse_point_valid: msg.mouse_point_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        client_id: msg.client_id.as_str().into(),
        marker_name: msg.marker_name.as_str().into(),
        control_name: msg.control_name.as_str().into(),
      event_type: msg.event_type,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      menu_entry_id: msg.menu_entry_id,
        mouse_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mouse_point)).into_owned(),
      mouse_point_valid: msg.mouse_point_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      client_id: msg.client_id.to_string(),
      marker_name: msg.marker_name.to_string(),
      control_name: msg.control_name.to_string(),
      event_type: msg.event_type,
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      menu_entry_id: msg.menu_entry_id,
      mouse_point: geometry_msgs::msg::Point::from_rmw_message(msg.mouse_point),
      mouse_point_valid: msg.mouse_point_valid,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerInit {
    pub server_id: std::string::String,
    pub seq_num: u64,
    pub markers: Vec<crate::msg::InteractiveMarker>,
}



impl Default for InteractiveMarkerInit {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::InteractiveMarkerInit::default())
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerInit {
  type RmwMsg = crate::msg::rmw::InteractiveMarkerInit;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        server_id: msg.server_id.as_str().into(),
        seq_num: msg.seq_num,
        markers: msg.markers
          .into_iter()
          .map(|elem| crate::msg::InteractiveMarker::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        server_id: msg.server_id.as_str().into(),
      seq_num: msg.seq_num,
        markers: msg.markers
          .iter()
          .map(|elem| crate::msg::InteractiveMarker::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      server_id: msg.server_id.to_string(),
      seq_num: msg.seq_num,
      markers: msg.markers
          .into_iter()
          .map(crate::msg::InteractiveMarker::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerPose {
    pub header: std_msgs::msg::Header,
    pub pose: geometry_msgs::msg::Pose,
    pub name: std::string::String,
}



impl Default for InteractiveMarkerPose {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::InteractiveMarkerPose::default())
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerPose {
  type RmwMsg = crate::msg::rmw::InteractiveMarkerPose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        name: msg.name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        name: msg.name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      name: msg.name.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InteractiveMarkerUpdate {
    pub server_id: std::string::String,
    pub seq_num: u64,
    pub type_: u8,
    pub markers: Vec<crate::msg::InteractiveMarker>,
    pub poses: Vec<crate::msg::InteractiveMarkerPose>,
    pub erases: Vec<std::string::String>,
}

impl InteractiveMarkerUpdate {
    /// Type holds the purpose of this message.  It must be one of UPDATE or KEEP_ALIVE.
    /// UPDATE: Incremental update to previous state.
    ///         The sequence number must be 1 higher than for
    ///         the previous update.
    /// KEEP_ALIVE: Indicates the that the server is still living.
    ///             The sequence number does not increase.
    ///             No payload data should be filled out (markers, poses, or erases).
    pub const KEEP_ALIVE: u8 = 0;
    pub const UPDATE: u8 = 1;
}


impl Default for InteractiveMarkerUpdate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::InteractiveMarkerUpdate::default())
  }
}

impl rosidl_runtime_rs::Message for InteractiveMarkerUpdate {
  type RmwMsg = crate::msg::rmw::InteractiveMarkerUpdate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        server_id: msg.server_id.as_str().into(),
        seq_num: msg.seq_num,
        type_: msg.type_,
        markers: msg.markers
          .into_iter()
          .map(|elem| crate::msg::InteractiveMarker::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        poses: msg.poses
          .into_iter()
          .map(|elem| crate::msg::InteractiveMarkerPose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        erases: msg.erases
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        server_id: msg.server_id.as_str().into(),
      seq_num: msg.seq_num,
      type_: msg.type_,
        markers: msg.markers
          .iter()
          .map(|elem| crate::msg::InteractiveMarker::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        poses: msg.poses
          .iter()
          .map(|elem| crate::msg::InteractiveMarkerPose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        erases: msg.erases
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      server_id: msg.server_id.to_string(),
      seq_num: msg.seq_num,
      type_: msg.type_,
      markers: msg.markers
          .into_iter()
          .map(crate::msg::InteractiveMarker::from_rmw_message)
          .collect(),
      poses: msg.poses
          .into_iter()
          .map(crate::msg::InteractiveMarkerPose::from_rmw_message)
          .collect(),
      erases: msg.erases
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Marker {
    pub header: std_msgs::msg::Header,
    pub ns: std::string::String,
    pub id: i32,
    pub type_: i32,
    pub action: i32,
    pub pose: geometry_msgs::msg::Pose,
    pub scale: geometry_msgs::msg::Vector3,
    pub color: std_msgs::msg::ColorRGBA,
    pub lifetime: builtin_interfaces::msg::Duration,
    pub frame_locked: bool,
    pub points: Vec<geometry_msgs::msg::Point>,
    pub colors: Vec<std_msgs::msg::ColorRGBA>,
    pub texture_resource: std::string::String,
    pub texture: sensor_msgs::msg::CompressedImage,
    pub uv_coordinates: Vec<crate::msg::UVCoordinate>,
    pub text: std::string::String,
    pub mesh_resource: std::string::String,
    pub mesh_file: crate::msg::MeshFile,
    pub mesh_use_embedded_materials: bool,
}

impl Marker {
    pub const ARROW: i32 = 0;
    pub const CUBE: i32 = 1;
    pub const SPHERE: i32 = 2;
    pub const CYLINDER: i32 = 3;
    pub const LINE_STRIP: i32 = 4;
    pub const LINE_LIST: i32 = 5;
    pub const CUBE_LIST: i32 = 6;
    pub const SPHERE_LIST: i32 = 7;
    pub const POINTS: i32 = 8;
    pub const TEXT_VIEW_FACING: i32 = 9;
    pub const MESH_RESOURCE: i32 = 10;
    pub const TRIANGLE_LIST: i32 = 11;
    pub const ARROW_STRIP: i32 = 12;
    pub const ADD: i32 = 0;
    pub const MODIFY: i32 = 0;
    pub const DELETE: i32 = 2;
    pub const DELETEALL: i32 = 3;
}


impl Default for Marker {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Marker::default())
  }
}

impl rosidl_runtime_rs::Message for Marker {
  type RmwMsg = crate::msg::rmw::Marker;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ns: msg.ns.as_str().into(),
        id: msg.id,
        type_: msg.type_,
        action: msg.action,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        scale: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.scale)).into_owned(),
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.color)).into_owned(),
        lifetime: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.lifetime)).into_owned(),
        frame_locked: msg.frame_locked,
        points: msg.points
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        colors: msg.colors
          .into_iter()
          .map(|elem| std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        texture_resource: msg.texture_resource.as_str().into(),
        texture: sensor_msgs::msg::CompressedImage::into_rmw_message(std::borrow::Cow::Owned(msg.texture)).into_owned(),
        uv_coordinates: msg.uv_coordinates
          .into_iter()
          .map(|elem| crate::msg::UVCoordinate::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        text: msg.text.as_str().into(),
        mesh_resource: msg.mesh_resource.as_str().into(),
        mesh_file: crate::msg::MeshFile::into_rmw_message(std::borrow::Cow::Owned(msg.mesh_file)).into_owned(),
        mesh_use_embedded_materials: msg.mesh_use_embedded_materials,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        ns: msg.ns.as_str().into(),
      id: msg.id,
      type_: msg.type_,
      action: msg.action,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        scale: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.scale)).into_owned(),
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color)).into_owned(),
        lifetime: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.lifetime)).into_owned(),
      frame_locked: msg.frame_locked,
        points: msg.points
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        colors: msg.colors
          .iter()
          .map(|elem| std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        texture_resource: msg.texture_resource.as_str().into(),
        texture: sensor_msgs::msg::CompressedImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.texture)).into_owned(),
        uv_coordinates: msg.uv_coordinates
          .iter()
          .map(|elem| crate::msg::UVCoordinate::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        text: msg.text.as_str().into(),
        mesh_resource: msg.mesh_resource.as_str().into(),
        mesh_file: crate::msg::MeshFile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mesh_file)).into_owned(),
      mesh_use_embedded_materials: msg.mesh_use_embedded_materials,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ns: msg.ns.to_string(),
      id: msg.id,
      type_: msg.type_,
      action: msg.action,
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      scale: geometry_msgs::msg::Vector3::from_rmw_message(msg.scale),
      color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.color),
      lifetime: builtin_interfaces::msg::Duration::from_rmw_message(msg.lifetime),
      frame_locked: msg.frame_locked,
      points: msg.points
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      colors: msg.colors
          .into_iter()
          .map(std_msgs::msg::ColorRGBA::from_rmw_message)
          .collect(),
      texture_resource: msg.texture_resource.to_string(),
      texture: sensor_msgs::msg::CompressedImage::from_rmw_message(msg.texture),
      uv_coordinates: msg.uv_coordinates
          .into_iter()
          .map(crate::msg::UVCoordinate::from_rmw_message)
          .collect(),
      text: msg.text.to_string(),
      mesh_resource: msg.mesh_resource.to_string(),
      mesh_file: crate::msg::MeshFile::from_rmw_message(msg.mesh_file),
      mesh_use_embedded_materials: msg.mesh_use_embedded_materials,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MarkerArray {
    pub markers: Vec<crate::msg::Marker>,
}



impl Default for MarkerArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MarkerArray::default())
  }
}

impl rosidl_runtime_rs::Message for MarkerArray {
  type RmwMsg = crate::msg::rmw::MarkerArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        markers: msg.markers
          .into_iter()
          .map(|elem| crate::msg::Marker::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        markers: msg.markers
          .iter()
          .map(|elem| crate::msg::Marker::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      markers: msg.markers
          .into_iter()
          .map(crate::msg::Marker::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MenuEntry {
    pub id: u32,
    pub parent_id: u32,
    pub title: std::string::String,
    pub command: std::string::String,
    pub command_type: u8,
}

impl MenuEntry {
    /// Command_type stores the type of response desired when this menu
    /// entry is clicked.
    /// FEEDBACK: send an InteractiveMarkerFeedback message with menu_entry_id set to this entry's id.
    /// ROSRUN: execute "rosrun" with arguments given in the command field (above).
    /// ROSLAUNCH: execute "roslaunch" with arguments given in the command field (above).
    pub const FEEDBACK: u8 = 0;
    pub const ROSRUN: u8 = 1;
    pub const ROSLAUNCH: u8 = 2;
}


impl Default for MenuEntry {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MenuEntry::default())
  }
}

impl rosidl_runtime_rs::Message for MenuEntry {
  type RmwMsg = crate::msg::rmw::MenuEntry;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        parent_id: msg.parent_id,
        title: msg.title.as_str().into(),
        command: msg.command.as_str().into(),
        command_type: msg.command_type,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      parent_id: msg.parent_id,
        title: msg.title.as_str().into(),
        command: msg.command.as_str().into(),
      command_type: msg.command_type,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      parent_id: msg.parent_id,
      title: msg.title.to_string(),
      command: msg.command.to_string(),
      command_type: msg.command_type,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeshFile {
    pub filename: std::string::String,
    pub data: Vec<u8>,
}



impl Default for MeshFile {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MeshFile::default())
  }
}

impl rosidl_runtime_rs::Message for MeshFile {
  type RmwMsg = crate::msg::rmw::MeshFile;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filename: msg.filename.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filename: msg.filename.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      filename: msg.filename.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UVCoordinate {
    pub u: f32,
    pub v: f32,
}



impl Default for UVCoordinate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UVCoordinate::default())
  }
}

impl rosidl_runtime_rs::Message for UVCoordinate {
  type RmwMsg = crate::msg::rmw::UVCoordinate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        u: msg.u,
        v: msg.v,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      u: msg.u,
      v: msg.v,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      u: msg.u,
      v: msg.v,
    }
  }
}


