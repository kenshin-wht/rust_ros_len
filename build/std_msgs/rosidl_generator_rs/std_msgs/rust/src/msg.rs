pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Bool() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Bool__init(msg: *mut Bool) -> bool;
    fn std_msgs__msg__Bool__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Bool>, size: usize) -> bool;
    fn std_msgs__msg__Bool__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Bool>);
    fn std_msgs__msg__Bool__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Bool>, out_seq: *mut rosidl_runtime_rs::Sequence<Bool>) -> bool;
}

// Corresponds to std_msgs__msg__Bool
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bool {
    pub data: bool,
}



impl Default for Bool {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Bool__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Bool__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Bool {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Bool__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Bool__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Bool__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Bool {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Bool where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Bool";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Bool() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Byte() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Byte__init(msg: *mut Byte) -> bool;
    fn std_msgs__msg__Byte__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Byte>, size: usize) -> bool;
    fn std_msgs__msg__Byte__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Byte>);
    fn std_msgs__msg__Byte__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Byte>, out_seq: *mut rosidl_runtime_rs::Sequence<Byte>) -> bool;
}

// Corresponds to std_msgs__msg__Byte
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Byte {
    pub data: u8,
}



impl Default for Byte {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Byte__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Byte__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Byte {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Byte__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Byte__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Byte__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Byte {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Byte where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Byte";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Byte() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__ByteMultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__ByteMultiArray__init(msg: *mut ByteMultiArray) -> bool;
    fn std_msgs__msg__ByteMultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ByteMultiArray>, size: usize) -> bool;
    fn std_msgs__msg__ByteMultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ByteMultiArray>);
    fn std_msgs__msg__ByteMultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ByteMultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ByteMultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__ByteMultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ByteMultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<u8>,
}



impl Default for ByteMultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__ByteMultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__ByteMultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ByteMultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__ByteMultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__ByteMultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__ByteMultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ByteMultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ByteMultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/ByteMultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__ByteMultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Char() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Char__init(msg: *mut Char) -> bool;
    fn std_msgs__msg__Char__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Char>, size: usize) -> bool;
    fn std_msgs__msg__Char__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Char>);
    fn std_msgs__msg__Char__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Char>, out_seq: *mut rosidl_runtime_rs::Sequence<Char>) -> bool;
}

// Corresponds to std_msgs__msg__Char
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Char {
    pub data: u8,
}



impl Default for Char {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Char__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Char__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Char {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Char__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Char__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Char__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Char {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Char where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Char";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Char() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__ColorRGBA() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__ColorRGBA__init(msg: *mut ColorRGBA) -> bool;
    fn std_msgs__msg__ColorRGBA__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ColorRGBA>, size: usize) -> bool;
    fn std_msgs__msg__ColorRGBA__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ColorRGBA>);
    fn std_msgs__msg__ColorRGBA__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ColorRGBA>, out_seq: *mut rosidl_runtime_rs::Sequence<ColorRGBA>) -> bool;
}

// Corresponds to std_msgs__msg__ColorRGBA
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ColorRGBA {
    pub r: f32,
    pub g: f32,
    pub b: f32,
    pub a: f32,
}



impl Default for ColorRGBA {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__ColorRGBA__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__ColorRGBA__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ColorRGBA {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__ColorRGBA__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__ColorRGBA__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__ColorRGBA__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ColorRGBA {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ColorRGBA where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/ColorRGBA";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__ColorRGBA() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Empty() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Empty__init(msg: *mut Empty) -> bool;
    fn std_msgs__msg__Empty__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Empty>, size: usize) -> bool;
    fn std_msgs__msg__Empty__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Empty>);
    fn std_msgs__msg__Empty__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Empty>, out_seq: *mut rosidl_runtime_rs::Sequence<Empty>) -> bool;
}

// Corresponds to std_msgs__msg__Empty
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Empty {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for Empty {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Empty__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Empty__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Empty {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Empty__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Empty__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Empty__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Empty {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Empty where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Empty";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Empty() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Float32() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Float32__init(msg: *mut Float32) -> bool;
    fn std_msgs__msg__Float32__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Float32>, size: usize) -> bool;
    fn std_msgs__msg__Float32__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Float32>);
    fn std_msgs__msg__Float32__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Float32>, out_seq: *mut rosidl_runtime_rs::Sequence<Float32>) -> bool;
}

// Corresponds to std_msgs__msg__Float32
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32 {
    pub data: f32,
}



impl Default for Float32 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Float32__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Float32__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Float32 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float32__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float32__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float32__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Float32 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Float32 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Float32";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Float32() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Float32MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Float32MultiArray__init(msg: *mut Float32MultiArray) -> bool;
    fn std_msgs__msg__Float32MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Float32MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__Float32MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Float32MultiArray>);
    fn std_msgs__msg__Float32MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Float32MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<Float32MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__Float32MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<f32>,
}



impl Default for Float32MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Float32MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Float32MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Float32MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float32MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float32MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float32MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Float32MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Float32MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Float32MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Float32MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Float64() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Float64__init(msg: *mut Float64) -> bool;
    fn std_msgs__msg__Float64__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Float64>, size: usize) -> bool;
    fn std_msgs__msg__Float64__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Float64>);
    fn std_msgs__msg__Float64__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Float64>, out_seq: *mut rosidl_runtime_rs::Sequence<Float64>) -> bool;
}

// Corresponds to std_msgs__msg__Float64
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64 {
    pub data: f64,
}



impl Default for Float64 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Float64__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Float64__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Float64 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float64__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float64__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float64__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Float64 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Float64 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Float64";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Float64() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Float64MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Float64MultiArray__init(msg: *mut Float64MultiArray) -> bool;
    fn std_msgs__msg__Float64MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Float64MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__Float64MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Float64MultiArray>);
    fn std_msgs__msg__Float64MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Float64MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<Float64MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__Float64MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<f64>,
}



impl Default for Float64MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Float64MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Float64MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Float64MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float64MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float64MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Float64MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Float64MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Float64MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Float64MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Float64MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Header() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Header__init(msg: *mut Header) -> bool;
    fn std_msgs__msg__Header__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Header>, size: usize) -> bool;
    fn std_msgs__msg__Header__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Header>);
    fn std_msgs__msg__Header__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Header>, out_seq: *mut rosidl_runtime_rs::Sequence<Header>) -> bool;
}

// Corresponds to std_msgs__msg__Header
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Header {
    pub stamp: builtin_interfaces::msg::rmw::Time,
    pub frame_id: rosidl_runtime_rs::String,
}



impl Default for Header {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Header__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Header__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Header {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Header__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Header__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Header__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Header {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Header where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Header";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Header() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int16() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Int16__init(msg: *mut Int16) -> bool;
    fn std_msgs__msg__Int16__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int16>, size: usize) -> bool;
    fn std_msgs__msg__Int16__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int16>);
    fn std_msgs__msg__Int16__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int16>, out_seq: *mut rosidl_runtime_rs::Sequence<Int16>) -> bool;
}

// Corresponds to std_msgs__msg__Int16
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int16 {
    pub data: i16,
}



impl Default for Int16 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Int16__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Int16__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int16 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int16__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int16__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int16__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int16 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int16 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Int16";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int16() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int16MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Int16MultiArray__init(msg: *mut Int16MultiArray) -> bool;
    fn std_msgs__msg__Int16MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int16MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__Int16MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int16MultiArray>);
    fn std_msgs__msg__Int16MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int16MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<Int16MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__Int16MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int16MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<i16>,
}



impl Default for Int16MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Int16MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Int16MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int16MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int16MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int16MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int16MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int16MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int16MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Int16MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int16MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int32() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Int32__init(msg: *mut Int32) -> bool;
    fn std_msgs__msg__Int32__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int32>, size: usize) -> bool;
    fn std_msgs__msg__Int32__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int32>);
    fn std_msgs__msg__Int32__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int32>, out_seq: *mut rosidl_runtime_rs::Sequence<Int32>) -> bool;
}

// Corresponds to std_msgs__msg__Int32
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32 {
    pub data: i32,
}



impl Default for Int32 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Int32__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Int32__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int32 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int32__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int32__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int32__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int32 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int32 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Int32";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int32() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int32MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Int32MultiArray__init(msg: *mut Int32MultiArray) -> bool;
    fn std_msgs__msg__Int32MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int32MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__Int32MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int32MultiArray>);
    fn std_msgs__msg__Int32MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int32MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<Int32MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__Int32MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<i32>,
}



impl Default for Int32MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Int32MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Int32MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int32MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int32MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int32MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int32MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int32MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int32MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Int32MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int32MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int64() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Int64__init(msg: *mut Int64) -> bool;
    fn std_msgs__msg__Int64__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int64>, size: usize) -> bool;
    fn std_msgs__msg__Int64__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int64>);
    fn std_msgs__msg__Int64__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int64>, out_seq: *mut rosidl_runtime_rs::Sequence<Int64>) -> bool;
}

// Corresponds to std_msgs__msg__Int64
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64 {
    pub data: i64,
}



impl Default for Int64 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Int64__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Int64__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int64 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int64__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int64__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int64__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int64 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int64 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Int64";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int64() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int64MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Int64MultiArray__init(msg: *mut Int64MultiArray) -> bool;
    fn std_msgs__msg__Int64MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int64MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__Int64MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int64MultiArray>);
    fn std_msgs__msg__Int64MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int64MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<Int64MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__Int64MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<i64>,
}



impl Default for Int64MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Int64MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Int64MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int64MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int64MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int64MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int64MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int64MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int64MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Int64MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int64MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int8() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Int8__init(msg: *mut Int8) -> bool;
    fn std_msgs__msg__Int8__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int8>, size: usize) -> bool;
    fn std_msgs__msg__Int8__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int8>);
    fn std_msgs__msg__Int8__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int8>, out_seq: *mut rosidl_runtime_rs::Sequence<Int8>) -> bool;
}

// Corresponds to std_msgs__msg__Int8
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int8 {
    pub data: i8,
}



impl Default for Int8 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Int8__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Int8__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int8 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int8__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int8__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int8__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int8 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int8 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Int8";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int8() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int8MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__Int8MultiArray__init(msg: *mut Int8MultiArray) -> bool;
    fn std_msgs__msg__Int8MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int8MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__Int8MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int8MultiArray>);
    fn std_msgs__msg__Int8MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int8MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<Int8MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__Int8MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int8MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<i8>,
}



impl Default for Int8MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__Int8MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__Int8MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int8MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int8MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int8MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__Int8MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int8MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int8MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/Int8MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__Int8MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__MultiArrayDimension() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__MultiArrayDimension__init(msg: *mut MultiArrayDimension) -> bool;
    fn std_msgs__msg__MultiArrayDimension__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MultiArrayDimension>, size: usize) -> bool;
    fn std_msgs__msg__MultiArrayDimension__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MultiArrayDimension>);
    fn std_msgs__msg__MultiArrayDimension__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MultiArrayDimension>, out_seq: *mut rosidl_runtime_rs::Sequence<MultiArrayDimension>) -> bool;
}

// Corresponds to std_msgs__msg__MultiArrayDimension
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiArrayDimension {
    pub label: rosidl_runtime_rs::String,
    pub size: u32,
    pub stride: u32,
}



impl Default for MultiArrayDimension {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__MultiArrayDimension__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__MultiArrayDimension__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MultiArrayDimension {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__MultiArrayDimension__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__MultiArrayDimension__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__MultiArrayDimension__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MultiArrayDimension {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MultiArrayDimension where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/MultiArrayDimension";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__MultiArrayDimension() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__MultiArrayLayout() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__MultiArrayLayout__init(msg: *mut MultiArrayLayout) -> bool;
    fn std_msgs__msg__MultiArrayLayout__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MultiArrayLayout>, size: usize) -> bool;
    fn std_msgs__msg__MultiArrayLayout__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MultiArrayLayout>);
    fn std_msgs__msg__MultiArrayLayout__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MultiArrayLayout>, out_seq: *mut rosidl_runtime_rs::Sequence<MultiArrayLayout>) -> bool;
}

// Corresponds to std_msgs__msg__MultiArrayLayout
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiArrayLayout {
    pub dim: rosidl_runtime_rs::Sequence<crate::msg::rmw::MultiArrayDimension>,
    pub data_offset: u32,
}



impl Default for MultiArrayLayout {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__MultiArrayLayout__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__MultiArrayLayout__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MultiArrayLayout {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__MultiArrayLayout__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__MultiArrayLayout__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__MultiArrayLayout__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MultiArrayLayout {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MultiArrayLayout where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/MultiArrayLayout";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__MultiArrayLayout() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__String() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__String__init(msg: *mut String) -> bool;
    fn std_msgs__msg__String__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<String>, size: usize) -> bool;
    fn std_msgs__msg__String__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<String>);
    fn std_msgs__msg__String__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<String>, out_seq: *mut rosidl_runtime_rs::Sequence<String>) -> bool;
}

// Corresponds to std_msgs__msg__String
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct String {
    pub data: rosidl_runtime_rs::String,
}



impl Default for String {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__String__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__String__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for String {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__String__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__String__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__String__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for String {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for String where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/String";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__String() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt16() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__UInt16__init(msg: *mut UInt16) -> bool;
    fn std_msgs__msg__UInt16__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UInt16>, size: usize) -> bool;
    fn std_msgs__msg__UInt16__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UInt16>);
    fn std_msgs__msg__UInt16__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UInt16>, out_seq: *mut rosidl_runtime_rs::Sequence<UInt16>) -> bool;
}

// Corresponds to std_msgs__msg__UInt16
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt16 {
    pub data: u16,
}



impl Default for UInt16 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__UInt16__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__UInt16__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UInt16 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt16__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt16__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt16__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UInt16 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UInt16 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/UInt16";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt16() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt16MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__UInt16MultiArray__init(msg: *mut UInt16MultiArray) -> bool;
    fn std_msgs__msg__UInt16MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UInt16MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__UInt16MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UInt16MultiArray>);
    fn std_msgs__msg__UInt16MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UInt16MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UInt16MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__UInt16MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt16MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<u16>,
}



impl Default for UInt16MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__UInt16MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__UInt16MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UInt16MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt16MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt16MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt16MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UInt16MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UInt16MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/UInt16MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt16MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt32() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__UInt32__init(msg: *mut UInt32) -> bool;
    fn std_msgs__msg__UInt32__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UInt32>, size: usize) -> bool;
    fn std_msgs__msg__UInt32__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UInt32>);
    fn std_msgs__msg__UInt32__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UInt32>, out_seq: *mut rosidl_runtime_rs::Sequence<UInt32>) -> bool;
}

// Corresponds to std_msgs__msg__UInt32
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt32 {
    pub data: u32,
}



impl Default for UInt32 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__UInt32__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__UInt32__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UInt32 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt32__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt32__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt32__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UInt32 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UInt32 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/UInt32";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt32() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt32MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__UInt32MultiArray__init(msg: *mut UInt32MultiArray) -> bool;
    fn std_msgs__msg__UInt32MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UInt32MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__UInt32MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UInt32MultiArray>);
    fn std_msgs__msg__UInt32MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UInt32MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UInt32MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__UInt32MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt32MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<u32>,
}



impl Default for UInt32MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__UInt32MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__UInt32MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UInt32MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt32MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt32MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt32MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UInt32MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UInt32MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/UInt32MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt32MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt64() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__UInt64__init(msg: *mut UInt64) -> bool;
    fn std_msgs__msg__UInt64__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UInt64>, size: usize) -> bool;
    fn std_msgs__msg__UInt64__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UInt64>);
    fn std_msgs__msg__UInt64__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UInt64>, out_seq: *mut rosidl_runtime_rs::Sequence<UInt64>) -> bool;
}

// Corresponds to std_msgs__msg__UInt64
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt64 {
    pub data: u64,
}



impl Default for UInt64 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__UInt64__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__UInt64__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UInt64 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt64__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt64__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt64__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UInt64 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UInt64 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/UInt64";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt64() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt64MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__UInt64MultiArray__init(msg: *mut UInt64MultiArray) -> bool;
    fn std_msgs__msg__UInt64MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UInt64MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__UInt64MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UInt64MultiArray>);
    fn std_msgs__msg__UInt64MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UInt64MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UInt64MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__UInt64MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt64MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<u64>,
}



impl Default for UInt64MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__UInt64MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__UInt64MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UInt64MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt64MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt64MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt64MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UInt64MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UInt64MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/UInt64MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt64MultiArray() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt8() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__UInt8__init(msg: *mut UInt8) -> bool;
    fn std_msgs__msg__UInt8__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UInt8>, size: usize) -> bool;
    fn std_msgs__msg__UInt8__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UInt8>);
    fn std_msgs__msg__UInt8__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UInt8>, out_seq: *mut rosidl_runtime_rs::Sequence<UInt8>) -> bool;
}

// Corresponds to std_msgs__msg__UInt8
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt8 {
    pub data: u8,
}



impl Default for UInt8 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__UInt8__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__UInt8__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UInt8 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt8__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt8__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt8__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UInt8 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UInt8 where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/UInt8";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt8() }
  }
}


#[link(name = "std_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt8MultiArray() -> *const std::ffi::c_void;
}

#[link(name = "std_msgs__rosidl_generator_c")]
extern "C" {
    fn std_msgs__msg__UInt8MultiArray__init(msg: *mut UInt8MultiArray) -> bool;
    fn std_msgs__msg__UInt8MultiArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UInt8MultiArray>, size: usize) -> bool;
    fn std_msgs__msg__UInt8MultiArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UInt8MultiArray>);
    fn std_msgs__msg__UInt8MultiArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UInt8MultiArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UInt8MultiArray>) -> bool;
}

// Corresponds to std_msgs__msg__UInt8MultiArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt8MultiArray {
    pub layout: crate::msg::rmw::MultiArrayLayout,
    pub data: rosidl_runtime_rs::Sequence<u8>,
}



impl Default for UInt8MultiArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !std_msgs__msg__UInt8MultiArray__init(&mut msg as *mut _) {
        panic!("Call to std_msgs__msg__UInt8MultiArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UInt8MultiArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt8MultiArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt8MultiArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { std_msgs__msg__UInt8MultiArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UInt8MultiArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UInt8MultiArray where Self: Sized {
  const TYPE_NAME: &'static str = "std_msgs/msg/UInt8MultiArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__std_msgs__msg__UInt8MultiArray() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bool {
    pub data: bool,
}



impl Default for Bool {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Bool::default())
  }
}

impl rosidl_runtime_rs::Message for Bool {
  type RmwMsg = crate::msg::rmw::Bool;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Byte {
    pub data: u8,
}



impl Default for Byte {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Byte::default())
  }
}

impl rosidl_runtime_rs::Message for Byte {
  type RmwMsg = crate::msg::rmw::Byte;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ByteMultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<u8>,
}



impl Default for ByteMultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::ByteMultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for ByteMultiArray {
  type RmwMsg = crate::msg::rmw::ByteMultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Char {
    pub data: u8,
}



impl Default for Char {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Char::default())
  }
}

impl rosidl_runtime_rs::Message for Char {
  type RmwMsg = crate::msg::rmw::Char;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ColorRGBA {
    pub r: f32,
    pub g: f32,
    pub b: f32,
    pub a: f32,
}



impl Default for ColorRGBA {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::ColorRGBA::default())
  }
}

impl rosidl_runtime_rs::Message for ColorRGBA {
  type RmwMsg = crate::msg::rmw::ColorRGBA;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        r: msg.r,
        g: msg.g,
        b: msg.b,
        a: msg.a,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      r: msg.r,
      g: msg.g,
      b: msg.b,
      a: msg.a,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      r: msg.r,
      g: msg.g,
      b: msg.b,
      a: msg.a,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Empty {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for Empty {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Empty::default())
  }
}

impl rosidl_runtime_rs::Message for Empty {
  type RmwMsg = crate::msg::rmw::Empty;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32 {
    pub data: f32,
}



impl Default for Float32 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Float32::default())
  }
}

impl rosidl_runtime_rs::Message for Float32 {
  type RmwMsg = crate::msg::rmw::Float32;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<f32>,
}



impl Default for Float32MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Float32MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Float32MultiArray {
  type RmwMsg = crate::msg::rmw::Float32MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64 {
    pub data: f64,
}



impl Default for Float64 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Float64::default())
  }
}

impl rosidl_runtime_rs::Message for Float64 {
  type RmwMsg = crate::msg::rmw::Float64;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<f64>,
}



impl Default for Float64MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Float64MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Float64MultiArray {
  type RmwMsg = crate::msg::rmw::Float64MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Header {
    pub stamp: builtin_interfaces::msg::Time,
    pub frame_id: std::string::String,
}



impl Default for Header {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Header::default())
  }
}

impl rosidl_runtime_rs::Message for Header {
  type RmwMsg = crate::msg::rmw::Header;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        frame_id: msg.frame_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        frame_id: msg.frame_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      frame_id: msg.frame_id.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int16 {
    pub data: i16,
}



impl Default for Int16 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Int16::default())
  }
}

impl rosidl_runtime_rs::Message for Int16 {
  type RmwMsg = crate::msg::rmw::Int16;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int16MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<i16>,
}



impl Default for Int16MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Int16MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Int16MultiArray {
  type RmwMsg = crate::msg::rmw::Int16MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32 {
    pub data: i32,
}



impl Default for Int32 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Int32::default())
  }
}

impl rosidl_runtime_rs::Message for Int32 {
  type RmwMsg = crate::msg::rmw::Int32;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<i32>,
}



impl Default for Int32MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Int32MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Int32MultiArray {
  type RmwMsg = crate::msg::rmw::Int32MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64 {
    pub data: i64,
}



impl Default for Int64 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Int64::default())
  }
}

impl rosidl_runtime_rs::Message for Int64 {
  type RmwMsg = crate::msg::rmw::Int64;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<i64>,
}



impl Default for Int64MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Int64MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Int64MultiArray {
  type RmwMsg = crate::msg::rmw::Int64MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int8 {
    pub data: i8,
}



impl Default for Int8 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Int8::default())
  }
}

impl rosidl_runtime_rs::Message for Int8 {
  type RmwMsg = crate::msg::rmw::Int8;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int8MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<i8>,
}



impl Default for Int8MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Int8MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for Int8MultiArray {
  type RmwMsg = crate::msg::rmw::Int8MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiArrayDimension {
    pub label: std::string::String,
    pub size: u32,
    pub stride: u32,
}



impl Default for MultiArrayDimension {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MultiArrayDimension::default())
  }
}

impl rosidl_runtime_rs::Message for MultiArrayDimension {
  type RmwMsg = crate::msg::rmw::MultiArrayDimension;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        label: msg.label.as_str().into(),
        size: msg.size,
        stride: msg.stride,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        label: msg.label.as_str().into(),
      size: msg.size,
      stride: msg.stride,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      label: msg.label.to_string(),
      size: msg.size,
      stride: msg.stride,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiArrayLayout {
    pub dim: Vec<crate::msg::MultiArrayDimension>,
    pub data_offset: u32,
}



impl Default for MultiArrayLayout {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MultiArrayLayout::default())
  }
}

impl rosidl_runtime_rs::Message for MultiArrayLayout {
  type RmwMsg = crate::msg::rmw::MultiArrayLayout;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dim: msg.dim
          .into_iter()
          .map(|elem| crate::msg::MultiArrayDimension::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        data_offset: msg.data_offset,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dim: msg.dim
          .iter()
          .map(|elem| crate::msg::MultiArrayDimension::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      data_offset: msg.data_offset,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      dim: msg.dim
          .into_iter()
          .map(crate::msg::MultiArrayDimension::from_rmw_message)
          .collect(),
      data_offset: msg.data_offset,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct String {
    pub data: std::string::String,
}



impl Default for String {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::String::default())
  }
}

impl rosidl_runtime_rs::Message for String {
  type RmwMsg = crate::msg::rmw::String;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt16 {
    pub data: u16,
}



impl Default for UInt16 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UInt16::default())
  }
}

impl rosidl_runtime_rs::Message for UInt16 {
  type RmwMsg = crate::msg::rmw::UInt16;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt16MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<u16>,
}



impl Default for UInt16MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UInt16MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for UInt16MultiArray {
  type RmwMsg = crate::msg::rmw::UInt16MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt32 {
    pub data: u32,
}



impl Default for UInt32 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UInt32::default())
  }
}

impl rosidl_runtime_rs::Message for UInt32 {
  type RmwMsg = crate::msg::rmw::UInt32;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt32MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<u32>,
}



impl Default for UInt32MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UInt32MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for UInt32MultiArray {
  type RmwMsg = crate::msg::rmw::UInt32MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt64 {
    pub data: u64,
}



impl Default for UInt64 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UInt64::default())
  }
}

impl rosidl_runtime_rs::Message for UInt64 {
  type RmwMsg = crate::msg::rmw::UInt64;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt64MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<u64>,
}



impl Default for UInt64MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UInt64MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for UInt64MultiArray {
  type RmwMsg = crate::msg::rmw::UInt64MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt8 {
    pub data: u8,
}



impl Default for UInt8 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UInt8::default())
  }
}

impl rosidl_runtime_rs::Message for UInt8 {
  type RmwMsg = crate::msg::rmw::UInt8;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UInt8MultiArray {
    pub layout: crate::msg::MultiArrayLayout,
    pub data: Vec<u8>,
}



impl Default for UInt8MultiArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UInt8MultiArray::default())
  }
}

impl rosidl_runtime_rs::Message for UInt8MultiArray {
  type RmwMsg = crate::msg::rmw::UInt8MultiArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        layout: crate::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      layout: crate::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


