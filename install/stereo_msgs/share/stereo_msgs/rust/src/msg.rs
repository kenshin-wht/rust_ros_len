pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "stereo_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__stereo_msgs__msg__DisparityImage() -> *const std::ffi::c_void;
}

#[link(name = "stereo_msgs__rosidl_generator_c")]
extern "C" {
    fn stereo_msgs__msg__DisparityImage__init(msg: *mut DisparityImage) -> bool;
    fn stereo_msgs__msg__DisparityImage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DisparityImage>, size: usize) -> bool;
    fn stereo_msgs__msg__DisparityImage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DisparityImage>);
    fn stereo_msgs__msg__DisparityImage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DisparityImage>, out_seq: *mut rosidl_runtime_rs::Sequence<DisparityImage>) -> bool;
}

// Corresponds to stereo_msgs__msg__DisparityImage
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DisparityImage {
    pub header: std_msgs::msg::rmw::Header,
    pub image: sensor_msgs::msg::rmw::Image,
    pub f: f32,
    pub t: f32,
    pub valid_window: sensor_msgs::msg::rmw::RegionOfInterest,
    pub min_disparity: f32,
    pub max_disparity: f32,
    pub delta_d: f32,
}



impl Default for DisparityImage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !stereo_msgs__msg__DisparityImage__init(&mut msg as *mut _) {
        panic!("Call to stereo_msgs__msg__DisparityImage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DisparityImage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { stereo_msgs__msg__DisparityImage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { stereo_msgs__msg__DisparityImage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { stereo_msgs__msg__DisparityImage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DisparityImage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DisparityImage where Self: Sized {
  const TYPE_NAME: &'static str = "stereo_msgs/msg/DisparityImage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__stereo_msgs__msg__DisparityImage() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DisparityImage {
    pub header: std_msgs::msg::Header,
    pub image: sensor_msgs::msg::Image,
    pub f: f32,
    pub t: f32,
    pub valid_window: sensor_msgs::msg::RegionOfInterest,
    pub min_disparity: f32,
    pub max_disparity: f32,
    pub delta_d: f32,
}



impl Default for DisparityImage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::DisparityImage::default())
  }
}

impl rosidl_runtime_rs::Message for DisparityImage {
  type RmwMsg = crate::msg::rmw::DisparityImage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
        f: msg.f,
        t: msg.t,
        valid_window: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Owned(msg.valid_window)).into_owned(),
        min_disparity: msg.min_disparity,
        max_disparity: msg.max_disparity,
        delta_d: msg.delta_d,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
      f: msg.f,
      t: msg.t,
        valid_window: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.valid_window)).into_owned(),
      min_disparity: msg.min_disparity,
      max_disparity: msg.max_disparity,
      delta_d: msg.delta_d,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      image: sensor_msgs::msg::Image::from_rmw_message(msg.image),
      f: msg.f,
      t: msg.t,
      valid_window: sensor_msgs::msg::RegionOfInterest::from_rmw_message(msg.valid_window),
      min_disparity: msg.min_disparity,
      max_disparity: msg.max_disparity,
      delta_d: msg.delta_d,
    }
  }
}


