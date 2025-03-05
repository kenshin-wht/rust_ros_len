

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTypeDescription_Request {
    pub type_name: std::string::String,
    pub type_hash: std::string::String,
    pub include_type_sources: bool,
}



impl Default for GetTypeDescription_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetTypeDescription_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetTypeDescription_Request {
  type RmwMsg = crate::srv::rmw::GetTypeDescription_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_name: msg.type_name.as_str().into(),
        type_hash: msg.type_hash.as_str().into(),
        include_type_sources: msg.include_type_sources,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_name: msg.type_name.as_str().into(),
        type_hash: msg.type_hash.as_str().into(),
      include_type_sources: msg.include_type_sources,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_name: msg.type_name.to_string(),
      type_hash: msg.type_hash.to_string(),
      include_type_sources: msg.include_type_sources,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTypeDescription_Response {
    pub successful: bool,
    pub failure_reason: std::string::String,
    pub type_description: crate::msg::TypeDescription,
    pub type_sources: Vec<crate::msg::TypeSource>,
    pub extra_information: Vec<crate::msg::KeyValue>,
}



impl Default for GetTypeDescription_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetTypeDescription_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetTypeDescription_Response {
  type RmwMsg = crate::srv::rmw::GetTypeDescription_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        successful: msg.successful,
        failure_reason: msg.failure_reason.as_str().into(),
        type_description: crate::msg::TypeDescription::into_rmw_message(std::borrow::Cow::Owned(msg.type_description)).into_owned(),
        type_sources: msg.type_sources
          .into_iter()
          .map(|elem| crate::msg::TypeSource::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        extra_information: msg.extra_information
          .into_iter()
          .map(|elem| crate::msg::KeyValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      successful: msg.successful,
        failure_reason: msg.failure_reason.as_str().into(),
        type_description: crate::msg::TypeDescription::into_rmw_message(std::borrow::Cow::Borrowed(&msg.type_description)).into_owned(),
        type_sources: msg.type_sources
          .iter()
          .map(|elem| crate::msg::TypeSource::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        extra_information: msg.extra_information
          .iter()
          .map(|elem| crate::msg::KeyValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      successful: msg.successful,
      failure_reason: msg.failure_reason.to_string(),
      type_description: crate::msg::TypeDescription::from_rmw_message(msg.type_description),
      type_sources: msg.type_sources
          .into_iter()
          .map(crate::msg::TypeSource::from_rmw_message)
          .collect(),
      extra_information: msg.extra_information
          .into_iter()
          .map(crate::msg::KeyValue::from_rmw_message)
          .collect(),
    }
  }
}






#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__type_description_interfaces__srv__GetTypeDescription() -> *const std::ffi::c_void;
}

// Corresponds to type_description_interfaces__srv__GetTypeDescription
pub struct GetTypeDescription;

impl rosidl_runtime_rs::Service for GetTypeDescription {
  type Request = crate::srv::GetTypeDescription_Request;
  type Response = crate::srv::GetTypeDescription_Response;

  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__type_description_interfaces__srv__GetTypeDescription() }
  }
}




pub mod rmw {

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__srv__GetTypeDescription_Request() -> *const std::ffi::c_void;
}

#[link(name = "type_description_interfaces__rosidl_generator_c")]
extern "C" {
    fn type_description_interfaces__srv__GetTypeDescription_Request__init(msg: *mut GetTypeDescription_Request) -> bool;
    fn type_description_interfaces__srv__GetTypeDescription_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTypeDescription_Request>, size: usize) -> bool;
    fn type_description_interfaces__srv__GetTypeDescription_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTypeDescription_Request>);
    fn type_description_interfaces__srv__GetTypeDescription_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTypeDescription_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTypeDescription_Request>) -> bool;
}

// Corresponds to type_description_interfaces__srv__GetTypeDescription_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTypeDescription_Request {
    pub type_name: rosidl_runtime_rs::String,
    pub type_hash: rosidl_runtime_rs::String,
    pub include_type_sources: bool,
}



impl Default for GetTypeDescription_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !type_description_interfaces__srv__GetTypeDescription_Request__init(&mut msg as *mut _) {
        panic!("Call to type_description_interfaces__srv__GetTypeDescription_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTypeDescription_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__srv__GetTypeDescription_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__srv__GetTypeDescription_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__srv__GetTypeDescription_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTypeDescription_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTypeDescription_Request where Self: Sized {
  const TYPE_NAME: &'static str = "type_description_interfaces/srv/GetTypeDescription_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__srv__GetTypeDescription_Request() }
  }
}


#[link(name = "type_description_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__srv__GetTypeDescription_Response() -> *const std::ffi::c_void;
}

#[link(name = "type_description_interfaces__rosidl_generator_c")]
extern "C" {
    fn type_description_interfaces__srv__GetTypeDescription_Response__init(msg: *mut GetTypeDescription_Response) -> bool;
    fn type_description_interfaces__srv__GetTypeDescription_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTypeDescription_Response>, size: usize) -> bool;
    fn type_description_interfaces__srv__GetTypeDescription_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTypeDescription_Response>);
    fn type_description_interfaces__srv__GetTypeDescription_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTypeDescription_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTypeDescription_Response>) -> bool;
}

// Corresponds to type_description_interfaces__srv__GetTypeDescription_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTypeDescription_Response {
    pub successful: bool,
    pub failure_reason: rosidl_runtime_rs::String,
    pub type_description: crate::msg::rmw::TypeDescription,
    pub type_sources: rosidl_runtime_rs::Sequence<crate::msg::rmw::TypeSource>,
    pub extra_information: rosidl_runtime_rs::Sequence<crate::msg::rmw::KeyValue>,
}



impl Default for GetTypeDescription_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !type_description_interfaces__srv__GetTypeDescription_Response__init(&mut msg as *mut _) {
        panic!("Call to type_description_interfaces__srv__GetTypeDescription_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTypeDescription_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__srv__GetTypeDescription_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__srv__GetTypeDescription_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { type_description_interfaces__srv__GetTypeDescription_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTypeDescription_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTypeDescription_Response where Self: Sized {
  const TYPE_NAME: &'static str = "type_description_interfaces/srv/GetTypeDescription_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__type_description_interfaces__srv__GetTypeDescription_Response() }
  }
}






  #[link(name = "type_description_interfaces__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__type_description_interfaces__srv__GetTypeDescription() -> *const std::ffi::c_void;
  }

  // Corresponds to type_description_interfaces__srv__GetTypeDescription
  pub struct GetTypeDescription;

  impl rosidl_runtime_rs::Service for GetTypeDescription {
    type Request = crate::srv::rmw::GetTypeDescription_Request;
    type Response = crate::srv::rmw::GetTypeDescription_Response;

    fn get_type_support() -> *const std::ffi::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__type_description_interfaces__srv__GetTypeDescription() }
    }
  }


}  // mod rmw
