//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: JSBSim.cpp
//  Source: JSBSim.idl
//  Generated: Wed Dec 12 08:16:00 2012
//  OpenSplice V5.5.1OSS
//  
//******************************************************************

#include "JSBSim.h"


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< JSBSim::fdmdata::_tank_contents_lbs_array, JSBSim::fdmdata::_tank_contents_lbs_array_slice, struct JSBSim::fdmdata::_tank_contents_lbs_array_uniq_>;
template class DDS_DCPS_Array_forany< JSBSim::fdmdata::_tank_contents_lbs_array, JSBSim::fdmdata::_tank_contents_lbs_array_slice, struct JSBSim::fdmdata::_tank_contents_lbs_array_uniq_>;
#endif

template <>
JSBSim::fdmdata::_tank_contents_lbs_array_slice* DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_tank_contents_lbs_array, JSBSim::fdmdata::_tank_contents_lbs_array_slice, JSBSim::fdmdata::_tank_contents_lbs_array_uniq_>::alloc ()
{
   return JSBSim::fdmdata::_tank_contents_lbs_array_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_tank_contents_lbs_array, JSBSim::fdmdata::_tank_contents_lbs_array_slice, JSBSim::fdmdata::_tank_contents_lbs_array_uniq_>::copy (JSBSim::fdmdata::_tank_contents_lbs_array_slice *to, const JSBSim::fdmdata::_tank_contents_lbs_array_slice* from)
{
   JSBSim::fdmdata::_tank_contents_lbs_array_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_tank_contents_lbs_array, JSBSim::fdmdata::_tank_contents_lbs_array_slice, JSBSim::fdmdata::_tank_contents_lbs_array_uniq_>::free (JSBSim::fdmdata::_tank_contents_lbs_array_slice *ptr)
{
   JSBSim::fdmdata::_tank_contents_lbs_array_free (ptr);
}

JSBSim::fdmdata::_tank_contents_lbs_array_slice * JSBSim::fdmdata::_tank_contents_lbs_array_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [3];
   return (_tank_contents_lbs_array_slice *) ret;
}

void JSBSim::fdmdata::_tank_contents_lbs_array_free (_tank_contents_lbs_array_slice * s)
{
   delete [] s;
}

void JSBSim::fdmdata::_tank_contents_lbs_array_copy
(
   _tank_contents_lbs_array_slice * to,
   const _tank_contents_lbs_array_slice * from
)
{
   DDS::Double* sv = (DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 3; i++) tv[i] = sv[i];
}

JSBSim::fdmdata::_tank_contents_lbs_array_slice * JSBSim::fdmdata::_tank_contents_lbs_array_dup
   (const _tank_contents_lbs_array_slice * from)
{
   _tank_contents_lbs_array_slice * to = _tank_contents_lbs_array_alloc ();
   _tank_contents_lbs_array_copy (to, from);
   return to;
}


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< JSBSim::fdmdata::_pos_norm_array, JSBSim::fdmdata::_pos_norm_array_slice, struct JSBSim::fdmdata::_pos_norm_array_uniq_>;
template class DDS_DCPS_Array_forany< JSBSim::fdmdata::_pos_norm_array, JSBSim::fdmdata::_pos_norm_array_slice, struct JSBSim::fdmdata::_pos_norm_array_uniq_>;
#endif

template <>
JSBSim::fdmdata::_pos_norm_array_slice* DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_pos_norm_array, JSBSim::fdmdata::_pos_norm_array_slice, JSBSim::fdmdata::_pos_norm_array_uniq_>::alloc ()
{
   return JSBSim::fdmdata::_pos_norm_array_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_pos_norm_array, JSBSim::fdmdata::_pos_norm_array_slice, JSBSim::fdmdata::_pos_norm_array_uniq_>::copy (JSBSim::fdmdata::_pos_norm_array_slice *to, const JSBSim::fdmdata::_pos_norm_array_slice* from)
{
   JSBSim::fdmdata::_pos_norm_array_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_pos_norm_array, JSBSim::fdmdata::_pos_norm_array_slice, JSBSim::fdmdata::_pos_norm_array_uniq_>::free (JSBSim::fdmdata::_pos_norm_array_slice *ptr)
{
   JSBSim::fdmdata::_pos_norm_array_free (ptr);
}

JSBSim::fdmdata::_pos_norm_array_slice * JSBSim::fdmdata::_pos_norm_array_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [3];
   return (_pos_norm_array_slice *) ret;
}

void JSBSim::fdmdata::_pos_norm_array_free (_pos_norm_array_slice * s)
{
   delete [] s;
}

void JSBSim::fdmdata::_pos_norm_array_copy
(
   _pos_norm_array_slice * to,
   const _pos_norm_array_slice * from
)
{
   DDS::Double* sv = (DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 3; i++) tv[i] = sv[i];
}

JSBSim::fdmdata::_pos_norm_array_slice * JSBSim::fdmdata::_pos_norm_array_dup
   (const _pos_norm_array_slice * from)
{
   _pos_norm_array_slice * to = _pos_norm_array_alloc ();
   _pos_norm_array_copy (to, from);
   return to;
}


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< JSBSim::fdmdata::_side_friction_coeff_array, JSBSim::fdmdata::_side_friction_coeff_array_slice, struct JSBSim::fdmdata::_side_friction_coeff_array_uniq_>;
template class DDS_DCPS_Array_forany< JSBSim::fdmdata::_side_friction_coeff_array, JSBSim::fdmdata::_side_friction_coeff_array_slice, struct JSBSim::fdmdata::_side_friction_coeff_array_uniq_>;
#endif

template <>
JSBSim::fdmdata::_side_friction_coeff_array_slice* DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_side_friction_coeff_array, JSBSim::fdmdata::_side_friction_coeff_array_slice, JSBSim::fdmdata::_side_friction_coeff_array_uniq_>::alloc ()
{
   return JSBSim::fdmdata::_side_friction_coeff_array_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_side_friction_coeff_array, JSBSim::fdmdata::_side_friction_coeff_array_slice, JSBSim::fdmdata::_side_friction_coeff_array_uniq_>::copy (JSBSim::fdmdata::_side_friction_coeff_array_slice *to, const JSBSim::fdmdata::_side_friction_coeff_array_slice* from)
{
   JSBSim::fdmdata::_side_friction_coeff_array_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_side_friction_coeff_array, JSBSim::fdmdata::_side_friction_coeff_array_slice, JSBSim::fdmdata::_side_friction_coeff_array_uniq_>::free (JSBSim::fdmdata::_side_friction_coeff_array_slice *ptr)
{
   JSBSim::fdmdata::_side_friction_coeff_array_free (ptr);
}

JSBSim::fdmdata::_side_friction_coeff_array_slice * JSBSim::fdmdata::_side_friction_coeff_array_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [3];
   return (_side_friction_coeff_array_slice *) ret;
}

void JSBSim::fdmdata::_side_friction_coeff_array_free (_side_friction_coeff_array_slice * s)
{
   delete [] s;
}

void JSBSim::fdmdata::_side_friction_coeff_array_copy
(
   _side_friction_coeff_array_slice * to,
   const _side_friction_coeff_array_slice * from
)
{
   DDS::Double* sv = (DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 3; i++) tv[i] = sv[i];
}

JSBSim::fdmdata::_side_friction_coeff_array_slice * JSBSim::fdmdata::_side_friction_coeff_array_dup
   (const _side_friction_coeff_array_slice * from)
{
   _side_friction_coeff_array_slice * to = _side_friction_coeff_array_alloc ();
   _side_friction_coeff_array_copy (to, from);
   return to;
}


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< JSBSim::fdmdata::_compression_ft_array, JSBSim::fdmdata::_compression_ft_array_slice, struct JSBSim::fdmdata::_compression_ft_array_uniq_>;
template class DDS_DCPS_Array_forany< JSBSim::fdmdata::_compression_ft_array, JSBSim::fdmdata::_compression_ft_array_slice, struct JSBSim::fdmdata::_compression_ft_array_uniq_>;
#endif

template <>
JSBSim::fdmdata::_compression_ft_array_slice* DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_compression_ft_array, JSBSim::fdmdata::_compression_ft_array_slice, JSBSim::fdmdata::_compression_ft_array_uniq_>::alloc ()
{
   return JSBSim::fdmdata::_compression_ft_array_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_compression_ft_array, JSBSim::fdmdata::_compression_ft_array_slice, JSBSim::fdmdata::_compression_ft_array_uniq_>::copy (JSBSim::fdmdata::_compression_ft_array_slice *to, const JSBSim::fdmdata::_compression_ft_array_slice* from)
{
   JSBSim::fdmdata::_compression_ft_array_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_compression_ft_array, JSBSim::fdmdata::_compression_ft_array_slice, JSBSim::fdmdata::_compression_ft_array_uniq_>::free (JSBSim::fdmdata::_compression_ft_array_slice *ptr)
{
   JSBSim::fdmdata::_compression_ft_array_free (ptr);
}

JSBSim::fdmdata::_compression_ft_array_slice * JSBSim::fdmdata::_compression_ft_array_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [3];
   return (_compression_ft_array_slice *) ret;
}

void JSBSim::fdmdata::_compression_ft_array_free (_compression_ft_array_slice * s)
{
   delete [] s;
}

void JSBSim::fdmdata::_compression_ft_array_copy
(
   _compression_ft_array_slice * to,
   const _compression_ft_array_slice * from
)
{
   DDS::Double* sv = (DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 3; i++) tv[i] = sv[i];
}

JSBSim::fdmdata::_compression_ft_array_slice * JSBSim::fdmdata::_compression_ft_array_dup
   (const _compression_ft_array_slice * from)
{
   _compression_ft_array_slice * to = _compression_ft_array_alloc ();
   _compression_ft_array_copy (to, from);
   return to;
}


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< JSBSim::fdmdata::_z_position_array, JSBSim::fdmdata::_z_position_array_slice, struct JSBSim::fdmdata::_z_position_array_uniq_>;
template class DDS_DCPS_Array_forany< JSBSim::fdmdata::_z_position_array, JSBSim::fdmdata::_z_position_array_slice, struct JSBSim::fdmdata::_z_position_array_uniq_>;
#endif

template <>
JSBSim::fdmdata::_z_position_array_slice* DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_z_position_array, JSBSim::fdmdata::_z_position_array_slice, JSBSim::fdmdata::_z_position_array_uniq_>::alloc ()
{
   return JSBSim::fdmdata::_z_position_array_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_z_position_array, JSBSim::fdmdata::_z_position_array_slice, JSBSim::fdmdata::_z_position_array_uniq_>::copy (JSBSim::fdmdata::_z_position_array_slice *to, const JSBSim::fdmdata::_z_position_array_slice* from)
{
   JSBSim::fdmdata::_z_position_array_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_z_position_array, JSBSim::fdmdata::_z_position_array_slice, JSBSim::fdmdata::_z_position_array_uniq_>::free (JSBSim::fdmdata::_z_position_array_slice *ptr)
{
   JSBSim::fdmdata::_z_position_array_free (ptr);
}

JSBSim::fdmdata::_z_position_array_slice * JSBSim::fdmdata::_z_position_array_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [3];
   return (_z_position_array_slice *) ret;
}

void JSBSim::fdmdata::_z_position_array_free (_z_position_array_slice * s)
{
   delete [] s;
}

void JSBSim::fdmdata::_z_position_array_copy
(
   _z_position_array_slice * to,
   const _z_position_array_slice * from
)
{
   DDS::Double* sv = (DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 3; i++) tv[i] = sv[i];
}

JSBSim::fdmdata::_z_position_array_slice * JSBSim::fdmdata::_z_position_array_dup
   (const _z_position_array_slice * from)
{
   _z_position_array_slice * to = _z_position_array_alloc ();
   _z_position_array_copy (to, from);
   return to;
}


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< JSBSim::fdmdata::_wheel_speed_fps_array, JSBSim::fdmdata::_wheel_speed_fps_array_slice, struct JSBSim::fdmdata::_wheel_speed_fps_array_uniq_>;
template class DDS_DCPS_Array_forany< JSBSim::fdmdata::_wheel_speed_fps_array, JSBSim::fdmdata::_wheel_speed_fps_array_slice, struct JSBSim::fdmdata::_wheel_speed_fps_array_uniq_>;
#endif

template <>
JSBSim::fdmdata::_wheel_speed_fps_array_slice* DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_wheel_speed_fps_array, JSBSim::fdmdata::_wheel_speed_fps_array_slice, JSBSim::fdmdata::_wheel_speed_fps_array_uniq_>::alloc ()
{
   return JSBSim::fdmdata::_wheel_speed_fps_array_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_wheel_speed_fps_array, JSBSim::fdmdata::_wheel_speed_fps_array_slice, JSBSim::fdmdata::_wheel_speed_fps_array_uniq_>::copy (JSBSim::fdmdata::_wheel_speed_fps_array_slice *to, const JSBSim::fdmdata::_wheel_speed_fps_array_slice* from)
{
   JSBSim::fdmdata::_wheel_speed_fps_array_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_wheel_speed_fps_array, JSBSim::fdmdata::_wheel_speed_fps_array_slice, JSBSim::fdmdata::_wheel_speed_fps_array_uniq_>::free (JSBSim::fdmdata::_wheel_speed_fps_array_slice *ptr)
{
   JSBSim::fdmdata::_wheel_speed_fps_array_free (ptr);
}

JSBSim::fdmdata::_wheel_speed_fps_array_slice * JSBSim::fdmdata::_wheel_speed_fps_array_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [3];
   return (_wheel_speed_fps_array_slice *) ret;
}

void JSBSim::fdmdata::_wheel_speed_fps_array_free (_wheel_speed_fps_array_slice * s)
{
   delete [] s;
}

void JSBSim::fdmdata::_wheel_speed_fps_array_copy
(
   _wheel_speed_fps_array_slice * to,
   const _wheel_speed_fps_array_slice * from
)
{
   DDS::Double* sv = (DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 3; i++) tv[i] = sv[i];
}

JSBSim::fdmdata::_wheel_speed_fps_array_slice * JSBSim::fdmdata::_wheel_speed_fps_array_dup
   (const _wheel_speed_fps_array_slice * from)
{
   _wheel_speed_fps_array_slice * to = _wheel_speed_fps_array_alloc ();
   _wheel_speed_fps_array_copy (to, from);
   return to;
}


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< JSBSim::fdmdata::_WOW_array, JSBSim::fdmdata::_WOW_array_slice, struct JSBSim::fdmdata::_WOW_array_uniq_>;
template class DDS_DCPS_Array_forany< JSBSim::fdmdata::_WOW_array, JSBSim::fdmdata::_WOW_array_slice, struct JSBSim::fdmdata::_WOW_array_uniq_>;
#endif

template <>
JSBSim::fdmdata::_WOW_array_slice* DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_WOW_array, JSBSim::fdmdata::_WOW_array_slice, JSBSim::fdmdata::_WOW_array_uniq_>::alloc ()
{
   return JSBSim::fdmdata::_WOW_array_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_WOW_array, JSBSim::fdmdata::_WOW_array_slice, JSBSim::fdmdata::_WOW_array_uniq_>::copy (JSBSim::fdmdata::_WOW_array_slice *to, const JSBSim::fdmdata::_WOW_array_slice* from)
{
   JSBSim::fdmdata::_WOW_array_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_WOW_array, JSBSim::fdmdata::_WOW_array_slice, JSBSim::fdmdata::_WOW_array_uniq_>::free (JSBSim::fdmdata::_WOW_array_slice *ptr)
{
   JSBSim::fdmdata::_WOW_array_free (ptr);
}

JSBSim::fdmdata::_WOW_array_slice * JSBSim::fdmdata::_WOW_array_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [3];
   return (_WOW_array_slice *) ret;
}

void JSBSim::fdmdata::_WOW_array_free (_WOW_array_slice * s)
{
   delete [] s;
}

void JSBSim::fdmdata::_WOW_array_copy
(
   _WOW_array_slice * to,
   const _WOW_array_slice * from
)
{
   DDS::Double* sv = (DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 3; i++) tv[i] = sv[i];
}

JSBSim::fdmdata::_WOW_array_slice * JSBSim::fdmdata::_WOW_array_dup
   (const _WOW_array_slice * from)
{
   _WOW_array_slice * to = _WOW_array_alloc ();
   _WOW_array_copy (to, from);
   return to;
}


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< JSBSim::fdmdata::_slip_angle_deg_array, JSBSim::fdmdata::_slip_angle_deg_array_slice, struct JSBSim::fdmdata::_slip_angle_deg_array_uniq_>;
template class DDS_DCPS_Array_forany< JSBSim::fdmdata::_slip_angle_deg_array, JSBSim::fdmdata::_slip_angle_deg_array_slice, struct JSBSim::fdmdata::_slip_angle_deg_array_uniq_>;
#endif

template <>
JSBSim::fdmdata::_slip_angle_deg_array_slice* DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_slip_angle_deg_array, JSBSim::fdmdata::_slip_angle_deg_array_slice, JSBSim::fdmdata::_slip_angle_deg_array_uniq_>::alloc ()
{
   return JSBSim::fdmdata::_slip_angle_deg_array_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_slip_angle_deg_array, JSBSim::fdmdata::_slip_angle_deg_array_slice, JSBSim::fdmdata::_slip_angle_deg_array_uniq_>::copy (JSBSim::fdmdata::_slip_angle_deg_array_slice *to, const JSBSim::fdmdata::_slip_angle_deg_array_slice* from)
{
   JSBSim::fdmdata::_slip_angle_deg_array_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < JSBSim::fdmdata::_slip_angle_deg_array, JSBSim::fdmdata::_slip_angle_deg_array_slice, JSBSim::fdmdata::_slip_angle_deg_array_uniq_>::free (JSBSim::fdmdata::_slip_angle_deg_array_slice *ptr)
{
   JSBSim::fdmdata::_slip_angle_deg_array_free (ptr);
}

JSBSim::fdmdata::_slip_angle_deg_array_slice * JSBSim::fdmdata::_slip_angle_deg_array_alloc ()
{
   DDS::Double * ret = (DDS::Double*) new DDS::Double [3];
   return (_slip_angle_deg_array_slice *) ret;
}

void JSBSim::fdmdata::_slip_angle_deg_array_free (_slip_angle_deg_array_slice * s)
{
   delete [] s;
}

void JSBSim::fdmdata::_slip_angle_deg_array_copy
(
   _slip_angle_deg_array_slice * to,
   const _slip_angle_deg_array_slice * from
)
{
   DDS::Double* sv = (DDS::Double*) from;
   DDS::Double* tv = (DDS::Double*) to;
   for (DDS::ULong i = 0; i < 3; i++) tv[i] = sv[i];
}

JSBSim::fdmdata::_slip_angle_deg_array_slice * JSBSim::fdmdata::_slip_angle_deg_array_dup
   (const _slip_angle_deg_array_slice * from)
{
   _slip_angle_deg_array_slice * to = _slip_angle_deg_array_alloc ();
   _slip_angle_deg_array_copy (to, from);
   return to;
}




