pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__Field() -> *const std::ffi::c_void;
}

#[link(name = "type_description_interfaces__rosidl_generator_c")]
extern "C" {
    fn type_description_interfaces__msg__Field__init(msg: *mut Field) -> bool;
    fn type_description_interfaces__msg__Field__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Field>, size: usize) -> bool;
    fn type_description_interfaces__msg__Field__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Field>);
    fn type_description_interfaces__msg__Field__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Field>, out_seq: *mut rosidl_runtime_rs::Sequence<Field>) -> bool;
}

// Corresponds to type_description_interfaces__msg__Field
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Field {
    pub name: rosidl_runtime_rs::String,
    pub type_: crate::msg::rmw::FieldType,
    pub default_value: rosidl_runtime_rs::String,
}



impl Default for Field {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !type_description_interfaces__msg__Field__init(&mut msg as *mut _) {
        panic!("Call to type_description_interfaces__msg__Field__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Field {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__Field__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__Field__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__Field__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Field {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Field where Self: Sized {
  const TYPE_NAME: &'static str = "type_description_interfaces/msg/Field";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__Field() }
  }
}


#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__FieldType() -> *const std::ffi::c_void;
}

#[link(name = "type_description_interfaces__rosidl_generator_c")]
extern "C" {
    fn type_description_interfaces__msg__FieldType__init(msg: *mut FieldType) -> bool;
    fn type_description_interfaces__msg__FieldType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FieldType>, size: usize) -> bool;
    fn type_description_interfaces__msg__FieldType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FieldType>);
    fn type_description_interfaces__msg__FieldType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FieldType>, out_seq: *mut rosidl_runtime_rs::Sequence<FieldType>) -> bool;
}

// Corresponds to type_description_interfaces__msg__FieldType
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FieldType {
    pub type_id: u8,
    pub capacity: u64,
    pub string_capacity: u64,
    pub nested_type_name: rosidl_runtime_rs::BoundedString<255>,
}

impl FieldType {
    /// A constant for each type supported according to:
    ///   http://design.ros2.org/articles/legacy_interface_definition.html
    /// and:
    ///   http://design.ros2.org/articles/idl_interface_definition.html
    /// Order is loosely coupled to the order of appearance in the IDL 4.2 spec:
    ///  https://www.omg.org/spec/IDL/4.2
    /// Layout of constants across the 0-255 decimal values in the uint8:
    ///
    /// - 000    : Reserved for "not set"
    /// - 001-048: Primitive types, strings, and reserved space for future primitive types
    /// - 049-096: Fixed sized array of primitive and string types
    /// - 097-144: Bounded Sequences of primitive and string types
    /// - 145-192: Unbounded Sequences of primitive and string types
    /// - 193-255: Reserved space for future array/sequence-like types
    pub const FIELD_TYPE_NOT_SET: u8 = 0;
    /// Nested type defined in other .msg/.idl files.
    pub const FIELD_TYPE_NESTED_TYPE: u8 = 1;
    /// Integer Types
    pub const FIELD_TYPE_INT8: u8 = 2;
    pub const FIELD_TYPE_UINT8: u8 = 3;
    pub const FIELD_TYPE_INT16: u8 = 4;
    pub const FIELD_TYPE_UINT16: u8 = 5;
    pub const FIELD_TYPE_INT32: u8 = 6;
    pub const FIELD_TYPE_UINT32: u8 = 7;
    pub const FIELD_TYPE_INT64: u8 = 8;
    pub const FIELD_TYPE_UINT64: u8 = 9;
    /// Floating-Point Types
    pub const FIELD_TYPE_FLOAT: u8 = 10;
    pub const FIELD_TYPE_DOUBLE: u8 = 11;
    pub const FIELD_TYPE_LONG_DOUBLE: u8 = 12;
    /// Char and WChar Types
    pub const FIELD_TYPE_CHAR: u8 = 13;
    pub const FIELD_TYPE_WCHAR: u8 = 14;
    /// Boolean Type
    pub const FIELD_TYPE_BOOLEAN: u8 = 15;
    /// Byte/Octet Type
    pub const FIELD_TYPE_BYTE: u8 = 16;
    /// String Types
    pub const FIELD_TYPE_STRING: u8 = 17;
    pub const FIELD_TYPE_WSTRING: u8 = 18;
    /// Fixed String Types
    pub const FIELD_TYPE_FIXED_STRING: u8 = 19;
    pub const FIELD_TYPE_FIXED_WSTRING: u8 = 20;
    /// Bounded String Types
    pub const FIELD_TYPE_BOUNDED_STRING: u8 = 21;
    pub const FIELD_TYPE_BOUNDED_WSTRING: u8 = 22;
    /// Fixed Sized Array Types
    pub const FIELD_TYPE_NESTED_TYPE_ARRAY: u8 = 49;
    pub const FIELD_TYPE_INT8_ARRAY: u8 = 50;
    pub const FIELD_TYPE_UINT8_ARRAY: u8 = 51;
    pub const FIELD_TYPE_INT16_ARRAY: u8 = 52;
    pub const FIELD_TYPE_UINT16_ARRAY: u8 = 53;
    pub const FIELD_TYPE_INT32_ARRAY: u8 = 54;
    pub const FIELD_TYPE_UINT32_ARRAY: u8 = 55;
    pub const FIELD_TYPE_INT64_ARRAY: u8 = 56;
    pub const FIELD_TYPE_UINT64_ARRAY: u8 = 57;
    pub const FIELD_TYPE_FLOAT_ARRAY: u8 = 58;
    pub const FIELD_TYPE_DOUBLE_ARRAY: u8 = 59;
    pub const FIELD_TYPE_LONG_DOUBLE_ARRAY: u8 = 60;
    pub const FIELD_TYPE_CHAR_ARRAY: u8 = 61;
    pub const FIELD_TYPE_WCHAR_ARRAY: u8 = 62;
    pub const FIELD_TYPE_BOOLEAN_ARRAY: u8 = 63;
    pub const FIELD_TYPE_BYTE_ARRAY: u8 = 64;
    pub const FIELD_TYPE_STRING_ARRAY: u8 = 65;
    pub const FIELD_TYPE_WSTRING_ARRAY: u8 = 66;
    pub const FIELD_TYPE_FIXED_STRING_ARRAY: u8 = 67;
    pub const FIELD_TYPE_FIXED_WSTRING_ARRAY: u8 = 68;
    pub const FIELD_TYPE_BOUNDED_STRING_ARRAY: u8 = 69;
    pub const FIELD_TYPE_BOUNDED_WSTRING_ARRAY: u8 = 70;
    /// Bounded Sequence Types
    pub const FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE: u8 = 97;
    pub const FIELD_TYPE_INT8_BOUNDED_SEQUENCE: u8 = 98;
    pub const FIELD_TYPE_UINT8_BOUNDED_SEQUENCE: u8 = 99;
    pub const FIELD_TYPE_INT16_BOUNDED_SEQUENCE: u8 = 100;
    pub const FIELD_TYPE_UINT16_BOUNDED_SEQUENCE: u8 = 101;
    pub const FIELD_TYPE_INT32_BOUNDED_SEQUENCE: u8 = 102;
    pub const FIELD_TYPE_UINT32_BOUNDED_SEQUENCE: u8 = 103;
    pub const FIELD_TYPE_INT64_BOUNDED_SEQUENCE: u8 = 104;
    pub const FIELD_TYPE_UINT64_BOUNDED_SEQUENCE: u8 = 105;
    pub const FIELD_TYPE_FLOAT_BOUNDED_SEQUENCE: u8 = 106;
    pub const FIELD_TYPE_DOUBLE_BOUNDED_SEQUENCE: u8 = 107;
    pub const FIELD_TYPE_LONG_DOUBLE_BOUNDED_SEQUENCE: u8 = 108;
    pub const FIELD_TYPE_CHAR_BOUNDED_SEQUENCE: u8 = 109;
    pub const FIELD_TYPE_WCHAR_BOUNDED_SEQUENCE: u8 = 110;
    pub const FIELD_TYPE_BOOLEAN_BOUNDED_SEQUENCE: u8 = 111;
    pub const FIELD_TYPE_BYTE_BOUNDED_SEQUENCE: u8 = 112;
    pub const FIELD_TYPE_STRING_BOUNDED_SEQUENCE: u8 = 113;
    pub const FIELD_TYPE_WSTRING_BOUNDED_SEQUENCE: u8 = 114;
    pub const FIELD_TYPE_FIXED_STRING_BOUNDED_SEQUENCE: u8 = 115;
    pub const FIELD_TYPE_FIXED_WSTRING_BOUNDED_SEQUENCE: u8 = 116;
    pub const FIELD_TYPE_BOUNDED_STRING_BOUNDED_SEQUENCE: u8 = 117;
    pub const FIELD_TYPE_BOUNDED_WSTRING_BOUNDED_SEQUENCE: u8 = 118;
    /// Unbounded Sequence Types
    pub const FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE: u8 = 145;
    pub const FIELD_TYPE_INT8_UNBOUNDED_SEQUENCE: u8 = 146;
    pub const FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE: u8 = 147;
    pub const FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE: u8 = 148;
    pub const FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE: u8 = 149;
    pub const FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE: u8 = 150;
    pub const FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE: u8 = 151;
    pub const FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE: u8 = 152;
    pub const FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE: u8 = 153;
    pub const FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE: u8 = 154;
    pub const FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE: u8 = 155;
    pub const FIELD_TYPE_LONG_DOUBLE_UNBOUNDED_SEQUENCE: u8 = 156;
    pub const FIELD_TYPE_CHAR_UNBOUNDED_SEQUENCE: u8 = 157;
    pub const FIELD_TYPE_WCHAR_UNBOUNDED_SEQUENCE: u8 = 158;
    pub const FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE: u8 = 159;
    pub const FIELD_TYPE_BYTE_UNBOUNDED_SEQUENCE: u8 = 160;
    pub const FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE: u8 = 161;
    pub const FIELD_TYPE_WSTRING_UNBOUNDED_SEQUENCE: u8 = 162;
    pub const FIELD_TYPE_FIXED_STRING_UNBOUNDED_SEQUENCE: u8 = 163;
    pub const FIELD_TYPE_FIXED_WSTRING_UNBOUNDED_SEQUENCE: u8 = 164;
    pub const FIELD_TYPE_BOUNDED_STRING_UNBOUNDED_SEQUENCE: u8 = 165;
    pub const FIELD_TYPE_BOUNDED_WSTRING_UNBOUNDED_SEQUENCE: u8 = 166;
}


impl Default for FieldType {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !type_description_interfaces__msg__FieldType__init(&mut msg as *mut _) {
        panic!("Call to type_description_interfaces__msg__FieldType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FieldType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__FieldType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__FieldType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__FieldType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FieldType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FieldType where Self: Sized {
  const TYPE_NAME: &'static str = "type_description_interfaces/msg/FieldType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__FieldType() }
  }
}


#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__IndividualTypeDescription() -> *const std::ffi::c_void;
}

#[link(name = "type_description_interfaces__rosidl_generator_c")]
extern "C" {
    fn type_description_interfaces__msg__IndividualTypeDescription__init(msg: *mut IndividualTypeDescription) -> bool;
    fn type_description_interfaces__msg__IndividualTypeDescription__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IndividualTypeDescription>, size: usize) -> bool;
    fn type_description_interfaces__msg__IndividualTypeDescription__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IndividualTypeDescription>);
    fn type_description_interfaces__msg__IndividualTypeDescription__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IndividualTypeDescription>, out_seq: *mut rosidl_runtime_rs::Sequence<IndividualTypeDescription>) -> bool;
}

// Corresponds to type_description_interfaces__msg__IndividualTypeDescription
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IndividualTypeDescription {
    pub type_name: rosidl_runtime_rs::BoundedString<255>,
    pub fields: rosidl_runtime_rs::Sequence<crate::msg::rmw::Field>,
}



impl Default for IndividualTypeDescription {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !type_description_interfaces__msg__IndividualTypeDescription__init(&mut msg as *mut _) {
        panic!("Call to type_description_interfaces__msg__IndividualTypeDescription__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IndividualTypeDescription {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__IndividualTypeDescription__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__IndividualTypeDescription__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__IndividualTypeDescription__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IndividualTypeDescription {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IndividualTypeDescription where Self: Sized {
  const TYPE_NAME: &'static str = "type_description_interfaces/msg/IndividualTypeDescription";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__IndividualTypeDescription() }
  }
}


#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__KeyValue() -> *const std::ffi::c_void;
}

#[link(name = "type_description_interfaces__rosidl_generator_c")]
extern "C" {
    fn type_description_interfaces__msg__KeyValue__init(msg: *mut KeyValue) -> bool;
    fn type_description_interfaces__msg__KeyValue__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KeyValue>, size: usize) -> bool;
    fn type_description_interfaces__msg__KeyValue__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KeyValue>);
    fn type_description_interfaces__msg__KeyValue__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KeyValue>, out_seq: *mut rosidl_runtime_rs::Sequence<KeyValue>) -> bool;
}

// Corresponds to type_description_interfaces__msg__KeyValue
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyValue {
    pub key: rosidl_runtime_rs::String,
    pub value: rosidl_runtime_rs::String,
}



impl Default for KeyValue {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !type_description_interfaces__msg__KeyValue__init(&mut msg as *mut _) {
        panic!("Call to type_description_interfaces__msg__KeyValue__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KeyValue {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__KeyValue__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__KeyValue__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__KeyValue__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KeyValue {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KeyValue where Self: Sized {
  const TYPE_NAME: &'static str = "type_description_interfaces/msg/KeyValue";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__KeyValue() }
  }
}


#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__TypeDescription() -> *const std::ffi::c_void;
}

#[link(name = "type_description_interfaces__rosidl_generator_c")]
extern "C" {
    fn type_description_interfaces__msg__TypeDescription__init(msg: *mut TypeDescription) -> bool;
    fn type_description_interfaces__msg__TypeDescription__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TypeDescription>, size: usize) -> bool;
    fn type_description_interfaces__msg__TypeDescription__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TypeDescription>);
    fn type_description_interfaces__msg__TypeDescription__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TypeDescription>, out_seq: *mut rosidl_runtime_rs::Sequence<TypeDescription>) -> bool;
}

// Corresponds to type_description_interfaces__msg__TypeDescription
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeDescription {
    pub type_description: crate::msg::rmw::IndividualTypeDescription,
    pub referenced_type_descriptions: rosidl_runtime_rs::Sequence<crate::msg::rmw::IndividualTypeDescription>,
}



impl Default for TypeDescription {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !type_description_interfaces__msg__TypeDescription__init(&mut msg as *mut _) {
        panic!("Call to type_description_interfaces__msg__TypeDescription__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TypeDescription {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__TypeDescription__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__TypeDescription__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__TypeDescription__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TypeDescription {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TypeDescription where Self: Sized {
  const TYPE_NAME: &'static str = "type_description_interfaces/msg/TypeDescription";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__TypeDescription() }
  }
}


#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__TypeSource() -> *const std::ffi::c_void;
}

#[link(name = "type_description_interfaces__rosidl_generator_c")]
extern "C" {
    fn type_description_interfaces__msg__TypeSource__init(msg: *mut TypeSource) -> bool;
    fn type_description_interfaces__msg__TypeSource__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TypeSource>, size: usize) -> bool;
    fn type_description_interfaces__msg__TypeSource__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TypeSource>);
    fn type_description_interfaces__msg__TypeSource__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TypeSource>, out_seq: *mut rosidl_runtime_rs::Sequence<TypeSource>) -> bool;
}

// Corresponds to type_description_interfaces__msg__TypeSource
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeSource {
    pub type_name: rosidl_runtime_rs::String,
    pub encoding: rosidl_runtime_rs::String,
    pub raw_file_contents: rosidl_runtime_rs::String,
}



impl Default for TypeSource {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !type_description_interfaces__msg__TypeSource__init(&mut msg as *mut _) {
        panic!("Call to type_description_interfaces__msg__TypeSource__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TypeSource {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__TypeSource__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__TypeSource__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__msg__TypeSource__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TypeSource {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TypeSource where Self: Sized {
  const TYPE_NAME: &'static str = "type_description_interfaces/msg/TypeSource";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__msg__TypeSource() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Field {
    pub name: std::string::String,
    pub type_: crate::msg::FieldType,
    pub default_value: std::string::String,
}



impl Default for Field {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Field::default())
  }
}

impl rosidl_runtime_rs::Message for Field {
  type RmwMsg = crate::msg::rmw::Field;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        type_: crate::msg::FieldType::into_rmw_message(std::borrow::Cow::Owned(msg.type_)).into_owned(),
        default_value: msg.default_value.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        type_: crate::msg::FieldType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.type_)).into_owned(),
        default_value: msg.default_value.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      type_: crate::msg::FieldType::from_rmw_message(msg.type_),
      default_value: msg.default_value.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FieldType {
    pub type_id: u8,
    pub capacity: u64,
    pub string_capacity: u64,
    pub nested_type_name: rosidl_runtime_rs::BoundedString<255>,
}

impl FieldType {
    /// A constant for each type supported according to:
    ///   http://design.ros2.org/articles/legacy_interface_definition.html
    /// and:
    ///   http://design.ros2.org/articles/idl_interface_definition.html
    /// Order is loosely coupled to the order of appearance in the IDL 4.2 spec:
    ///  https://www.omg.org/spec/IDL/4.2
    /// Layout of constants across the 0-255 decimal values in the uint8:
    ///
    /// - 000    : Reserved for "not set"
    /// - 001-048: Primitive types, strings, and reserved space for future primitive types
    /// - 049-096: Fixed sized array of primitive and string types
    /// - 097-144: Bounded Sequences of primitive and string types
    /// - 145-192: Unbounded Sequences of primitive and string types
    /// - 193-255: Reserved space for future array/sequence-like types
    pub const FIELD_TYPE_NOT_SET: u8 = 0;
    /// Nested type defined in other .msg/.idl files.
    pub const FIELD_TYPE_NESTED_TYPE: u8 = 1;
    /// Integer Types
    pub const FIELD_TYPE_INT8: u8 = 2;
    pub const FIELD_TYPE_UINT8: u8 = 3;
    pub const FIELD_TYPE_INT16: u8 = 4;
    pub const FIELD_TYPE_UINT16: u8 = 5;
    pub const FIELD_TYPE_INT32: u8 = 6;
    pub const FIELD_TYPE_UINT32: u8 = 7;
    pub const FIELD_TYPE_INT64: u8 = 8;
    pub const FIELD_TYPE_UINT64: u8 = 9;
    /// Floating-Point Types
    pub const FIELD_TYPE_FLOAT: u8 = 10;
    pub const FIELD_TYPE_DOUBLE: u8 = 11;
    pub const FIELD_TYPE_LONG_DOUBLE: u8 = 12;
    /// Char and WChar Types
    pub const FIELD_TYPE_CHAR: u8 = 13;
    pub const FIELD_TYPE_WCHAR: u8 = 14;
    /// Boolean Type
    pub const FIELD_TYPE_BOOLEAN: u8 = 15;
    /// Byte/Octet Type
    pub const FIELD_TYPE_BYTE: u8 = 16;
    /// String Types
    pub const FIELD_TYPE_STRING: u8 = 17;
    pub const FIELD_TYPE_WSTRING: u8 = 18;
    /// Fixed String Types
    pub const FIELD_TYPE_FIXED_STRING: u8 = 19;
    pub const FIELD_TYPE_FIXED_WSTRING: u8 = 20;
    /// Bounded String Types
    pub const FIELD_TYPE_BOUNDED_STRING: u8 = 21;
    pub const FIELD_TYPE_BOUNDED_WSTRING: u8 = 22;
    /// Fixed Sized Array Types
    pub const FIELD_TYPE_NESTED_TYPE_ARRAY: u8 = 49;
    pub const FIELD_TYPE_INT8_ARRAY: u8 = 50;
    pub const FIELD_TYPE_UINT8_ARRAY: u8 = 51;
    pub const FIELD_TYPE_INT16_ARRAY: u8 = 52;
    pub const FIELD_TYPE_UINT16_ARRAY: u8 = 53;
    pub const FIELD_TYPE_INT32_ARRAY: u8 = 54;
    pub const FIELD_TYPE_UINT32_ARRAY: u8 = 55;
    pub const FIELD_TYPE_INT64_ARRAY: u8 = 56;
    pub const FIELD_TYPE_UINT64_ARRAY: u8 = 57;
    pub const FIELD_TYPE_FLOAT_ARRAY: u8 = 58;
    pub const FIELD_TYPE_DOUBLE_ARRAY: u8 = 59;
    pub const FIELD_TYPE_LONG_DOUBLE_ARRAY: u8 = 60;
    pub const FIELD_TYPE_CHAR_ARRAY: u8 = 61;
    pub const FIELD_TYPE_WCHAR_ARRAY: u8 = 62;
    pub const FIELD_TYPE_BOOLEAN_ARRAY: u8 = 63;
    pub const FIELD_TYPE_BYTE_ARRAY: u8 = 64;
    pub const FIELD_TYPE_STRING_ARRAY: u8 = 65;
    pub const FIELD_TYPE_WSTRING_ARRAY: u8 = 66;
    pub const FIELD_TYPE_FIXED_STRING_ARRAY: u8 = 67;
    pub const FIELD_TYPE_FIXED_WSTRING_ARRAY: u8 = 68;
    pub const FIELD_TYPE_BOUNDED_STRING_ARRAY: u8 = 69;
    pub const FIELD_TYPE_BOUNDED_WSTRING_ARRAY: u8 = 70;
    /// Bounded Sequence Types
    pub const FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE: u8 = 97;
    pub const FIELD_TYPE_INT8_BOUNDED_SEQUENCE: u8 = 98;
    pub const FIELD_TYPE_UINT8_BOUNDED_SEQUENCE: u8 = 99;
    pub const FIELD_TYPE_INT16_BOUNDED_SEQUENCE: u8 = 100;
    pub const FIELD_TYPE_UINT16_BOUNDED_SEQUENCE: u8 = 101;
    pub const FIELD_TYPE_INT32_BOUNDED_SEQUENCE: u8 = 102;
    pub const FIELD_TYPE_UINT32_BOUNDED_SEQUENCE: u8 = 103;
    pub const FIELD_TYPE_INT64_BOUNDED_SEQUENCE: u8 = 104;
    pub const FIELD_TYPE_UINT64_BOUNDED_SEQUENCE: u8 = 105;
    pub const FIELD_TYPE_FLOAT_BOUNDED_SEQUENCE: u8 = 106;
    pub const FIELD_TYPE_DOUBLE_BOUNDED_SEQUENCE: u8 = 107;
    pub const FIELD_TYPE_LONG_DOUBLE_BOUNDED_SEQUENCE: u8 = 108;
    pub const FIELD_TYPE_CHAR_BOUNDED_SEQUENCE: u8 = 109;
    pub const FIELD_TYPE_WCHAR_BOUNDED_SEQUENCE: u8 = 110;
    pub const FIELD_TYPE_BOOLEAN_BOUNDED_SEQUENCE: u8 = 111;
    pub const FIELD_TYPE_BYTE_BOUNDED_SEQUENCE: u8 = 112;
    pub const FIELD_TYPE_STRING_BOUNDED_SEQUENCE: u8 = 113;
    pub const FIELD_TYPE_WSTRING_BOUNDED_SEQUENCE: u8 = 114;
    pub const FIELD_TYPE_FIXED_STRING_BOUNDED_SEQUENCE: u8 = 115;
    pub const FIELD_TYPE_FIXED_WSTRING_BOUNDED_SEQUENCE: u8 = 116;
    pub const FIELD_TYPE_BOUNDED_STRING_BOUNDED_SEQUENCE: u8 = 117;
    pub const FIELD_TYPE_BOUNDED_WSTRING_BOUNDED_SEQUENCE: u8 = 118;
    /// Unbounded Sequence Types
    pub const FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE: u8 = 145;
    pub const FIELD_TYPE_INT8_UNBOUNDED_SEQUENCE: u8 = 146;
    pub const FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE: u8 = 147;
    pub const FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE: u8 = 148;
    pub const FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE: u8 = 149;
    pub const FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE: u8 = 150;
    pub const FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE: u8 = 151;
    pub const FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE: u8 = 152;
    pub const FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE: u8 = 153;
    pub const FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE: u8 = 154;
    pub const FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE: u8 = 155;
    pub const FIELD_TYPE_LONG_DOUBLE_UNBOUNDED_SEQUENCE: u8 = 156;
    pub const FIELD_TYPE_CHAR_UNBOUNDED_SEQUENCE: u8 = 157;
    pub const FIELD_TYPE_WCHAR_UNBOUNDED_SEQUENCE: u8 = 158;
    pub const FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE: u8 = 159;
    pub const FIELD_TYPE_BYTE_UNBOUNDED_SEQUENCE: u8 = 160;
    pub const FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE: u8 = 161;
    pub const FIELD_TYPE_WSTRING_UNBOUNDED_SEQUENCE: u8 = 162;
    pub const FIELD_TYPE_FIXED_STRING_UNBOUNDED_SEQUENCE: u8 = 163;
    pub const FIELD_TYPE_FIXED_WSTRING_UNBOUNDED_SEQUENCE: u8 = 164;
    pub const FIELD_TYPE_BOUNDED_STRING_UNBOUNDED_SEQUENCE: u8 = 165;
    pub const FIELD_TYPE_BOUNDED_WSTRING_UNBOUNDED_SEQUENCE: u8 = 166;
}


impl Default for FieldType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::FieldType::default())
  }
}

impl rosidl_runtime_rs::Message for FieldType {
  type RmwMsg = crate::msg::rmw::FieldType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_id: msg.type_id,
        capacity: msg.capacity,
        string_capacity: msg.string_capacity,
        nested_type_name: msg.nested_type_name,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_id: msg.type_id,
      capacity: msg.capacity,
      string_capacity: msg.string_capacity,
        nested_type_name: msg.nested_type_name.clone(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_id: msg.type_id,
      capacity: msg.capacity,
      string_capacity: msg.string_capacity,
      nested_type_name: msg.nested_type_name,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IndividualTypeDescription {
    pub type_name: rosidl_runtime_rs::BoundedString<255>,
    pub fields: Vec<crate::msg::Field>,
}



impl Default for IndividualTypeDescription {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::IndividualTypeDescription::default())
  }
}

impl rosidl_runtime_rs::Message for IndividualTypeDescription {
  type RmwMsg = crate::msg::rmw::IndividualTypeDescription;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_name: msg.type_name,
        fields: msg.fields
          .into_iter()
          .map(|elem| crate::msg::Field::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_name: msg.type_name.clone(),
        fields: msg.fields
          .iter()
          .map(|elem| crate::msg::Field::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_name: msg.type_name,
      fields: msg.fields
          .into_iter()
          .map(crate::msg::Field::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyValue {
    pub key: std::string::String,
    pub value: std::string::String,
}



impl Default for KeyValue {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::KeyValue::default())
  }
}

impl rosidl_runtime_rs::Message for KeyValue {
  type RmwMsg = crate::msg::rmw::KeyValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        value: msg.value.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        value: msg.value.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key: msg.key.to_string(),
      value: msg.value.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeDescription {
    pub type_description: crate::msg::IndividualTypeDescription,
    pub referenced_type_descriptions: Vec<crate::msg::IndividualTypeDescription>,
}



impl Default for TypeDescription {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::TypeDescription::default())
  }
}

impl rosidl_runtime_rs::Message for TypeDescription {
  type RmwMsg = crate::msg::rmw::TypeDescription;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_description: crate::msg::IndividualTypeDescription::into_rmw_message(std::borrow::Cow::Owned(msg.type_description)).into_owned(),
        referenced_type_descriptions: msg.referenced_type_descriptions
          .into_iter()
          .map(|elem| crate::msg::IndividualTypeDescription::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_description: crate::msg::IndividualTypeDescription::into_rmw_message(std::borrow::Cow::Borrowed(&msg.type_description)).into_owned(),
        referenced_type_descriptions: msg.referenced_type_descriptions
          .iter()
          .map(|elem| crate::msg::IndividualTypeDescription::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_description: crate::msg::IndividualTypeDescription::from_rmw_message(msg.type_description),
      referenced_type_descriptions: msg.referenced_type_descriptions
          .into_iter()
          .map(crate::msg::IndividualTypeDescription::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeSource {
    pub type_name: std::string::String,
    pub encoding: std::string::String,
    pub raw_file_contents: std::string::String,
}



impl Default for TypeSource {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::TypeSource::default())
  }
}

impl rosidl_runtime_rs::Message for TypeSource {
  type RmwMsg = crate::msg::rmw::TypeSource;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_name: msg.type_name.as_str().into(),
        encoding: msg.encoding.as_str().into(),
        raw_file_contents: msg.raw_file_contents.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_name: msg.type_name.as_str().into(),
        encoding: msg.encoding.as_str().into(),
        raw_file_contents: msg.raw_file_contents.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_name: msg.type_name.to_string(),
      encoding: msg.encoding.to_string(),
      raw_file_contents: msg.raw_file_contents.to_string(),
    }
  }
}


