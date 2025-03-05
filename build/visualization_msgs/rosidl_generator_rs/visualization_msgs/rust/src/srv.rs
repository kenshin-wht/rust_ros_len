

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInteractiveMarkers_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for GetInteractiveMarkers_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetInteractiveMarkers_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetInteractiveMarkers_Request {
  type RmwMsg = crate::srv::rmw::GetInteractiveMarkers_Request;

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
pub struct GetInteractiveMarkers_Response {
    pub sequence_number: u64,
    pub markers: Vec<crate::msg::InteractiveMarker>,
}



impl Default for GetInteractiveMarkers_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetInteractiveMarkers_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetInteractiveMarkers_Response {
  type RmwMsg = crate::srv::rmw::GetInteractiveMarkers_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sequence_number: msg.sequence_number,
        markers: msg.markers
          .into_iter()
          .map(|elem| crate::msg::InteractiveMarker::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sequence_number: msg.sequence_number,
        markers: msg.markers
          .iter()
          .map(|elem| crate::msg::InteractiveMarker::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sequence_number: msg.sequence_number,
      markers: msg.markers
          .into_iter()
          .map(crate::msg::InteractiveMarker::from_rmw_message)
          .collect(),
    }
  }
}






#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__visualization_msgs__srv__GetInteractiveMarkers() -> *const std::ffi::c_void;
}

// Corresponds to visualization_msgs__srv__GetInteractiveMarkers
pub struct GetInteractiveMarkers;

impl rosidl_runtime_rs::Service for GetInteractiveMarkers {
  type Request = crate::srv::GetInteractiveMarkers_Request;
  type Response = crate::srv::GetInteractiveMarkers_Response;

  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__visualization_msgs__srv__GetInteractiveMarkers() }
  }
}




pub mod rmw {

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__srv__GetInteractiveMarkers_Request() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__srv__GetInteractiveMarkers_Request__init(msg: *mut GetInteractiveMarkers_Request) -> bool;
    fn visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInteractiveMarkers_Request>, size: usize) -> bool;
    fn visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInteractiveMarkers_Request>);
    fn visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInteractiveMarkers_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInteractiveMarkers_Request>) -> bool;
}

// Corresponds to visualization_msgs__srv__GetInteractiveMarkers_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInteractiveMarkers_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for GetInteractiveMarkers_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__srv__GetInteractiveMarkers_Request__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__srv__GetInteractiveMarkers_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInteractiveMarkers_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInteractiveMarkers_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInteractiveMarkers_Request where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/srv/GetInteractiveMarkers_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__srv__GetInteractiveMarkers_Request() }
  }
}


#[link(name = "visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__srv__GetInteractiveMarkers_Response() -> *const std::ffi::c_void;
}

#[link(name = "visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn visualization_msgs__srv__GetInteractiveMarkers_Response__init(msg: *mut GetInteractiveMarkers_Response) -> bool;
    fn visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetInteractiveMarkers_Response>, size: usize) -> bool;
    fn visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetInteractiveMarkers_Response>);
    fn visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetInteractiveMarkers_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetInteractiveMarkers_Response>) -> bool;
}

// Corresponds to visualization_msgs__srv__GetInteractiveMarkers_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetInteractiveMarkers_Response {
    pub sequence_number: u64,
    pub markers: rosidl_runtime_rs::Sequence<crate::msg::rmw::InteractiveMarker>,
}



impl Default for GetInteractiveMarkers_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !visualization_msgs__srv__GetInteractiveMarkers_Response__init(&mut msg as *mut _) {
        panic!("Call to visualization_msgs__srv__GetInteractiveMarkers_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetInteractiveMarkers_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetInteractiveMarkers_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetInteractiveMarkers_Response where Self: Sized {
  const TYPE_NAME: &'static str = "visualization_msgs/srv/GetInteractiveMarkers_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__visualization_msgs__srv__GetInteractiveMarkers_Response() }
  }
}






  #[link(name = "visualization_msgs__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__visualization_msgs__srv__GetInteractiveMarkers() -> *const std::ffi::c_void;
  }

  // Corresponds to visualization_msgs__srv__GetInteractiveMarkers
  pub struct GetInteractiveMarkers;

  impl rosidl_runtime_rs::Service for GetInteractiveMarkers {
    type Request = crate::srv::rmw::GetInteractiveMarkers_Request;
    type Response = crate::srv::rmw::GetInteractiveMarkers_Response;

    fn get_type_support() -> *const std::ffi::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__visualization_msgs__srv__GetInteractiveMarkers() }
    }
  }


}  // mod rmw
