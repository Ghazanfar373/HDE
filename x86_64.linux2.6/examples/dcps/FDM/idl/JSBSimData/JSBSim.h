//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: JSBSim.h
//  Source: JSBSim.idl
//  Generated: Mon Nov 26 12:02:28 2012
//  OpenSplice V5.5.1OSS
//  
//******************************************************************
#ifndef _JSBSIM_H_
#define _JSBSIM_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"

namespace JSBSim
{
   struct position;
   struct accelerations;
   struct atitude;
   struct simulation;
   struct velocities;
   struct atmosphere;
   struct aerosurfaces;
   struct gears;
   struct inertia;
   struct aero;
   struct aerocoefficient;
   struct geometric;
   struct propulsion;
   struct initialConditions;
   struct subSystems;
   struct subSystemOut;

   struct position
   {
      DDS::Long ID;
      DDS::Double epa_rad;
      DDS::Double h_sl_ft;
      DDS::Double h_sl_meters;
      DDS::Double lat_gc_rad;
      DDS::Double long_gc_rad;
      DDS::Double lat_gc_deg;
      DDS::Double long_gc_deg;
      DDS::Double lat_geod_rad;
      DDS::Double lat_geod_deg;
      DDS::Double geod_alt_ft;
      DDS::Double h_agl_ft;
      DDS::Double radius_to_vehicle_ft;
      DDS::Double terrain_elevation_asl_ft;
      DDS::Double distance_from_start_lon_mt;
      DDS::Double distance_from_start_lat_mt;
      DDS::Double distance_from_start_mag_mt;
   };

   typedef DDS_DCPSStruct_var < position> position_var;
   typedef position&position_out;

   struct accelerations
   {
      DDS::Long ID;
      DDS::Double pdot_rad_sec2;
      DDS::Double qdot_rad_sec2;
      DDS::Double rdot_rad_sec2;
      DDS::Double udot_ft_sec2;
      DDS::Double vdot_ft_sec2;
      DDS::Double wdot_ft_sec2;
      DDS::Double a_pilot_x_ft_sec2;
      DDS::Double a_pilot_y_ft_sec2;
      DDS::Double a_pilot_z_ft_sec2;
      DDS::Double n_pilot_x_norm;
      DDS::Double n_pilot_y_norm;
      DDS::Double n_pilot_z_norm;
      DDS::Double Nz;
   };

   typedef DDS_DCPSStruct_var < accelerations> accelerations_var;
   typedef accelerations&accelerations_out;

   struct atitude
   {
      DDS::Long ID;
      DDS::Double phi_rad;
      DDS::Double theta_rad;
      DDS::Double psi_rad;
      DDS::Double roll_rad;
      DDS::Double pitch_rad;
      DDS::Double heading_true_rad;
   };

   typedef DDS_DCPSStruct_var < atitude> atitude_var;
   typedef atitude&atitude_out;

   struct simulation
   {
      DDS::Long ID;
      DDS::Double integrator_rate_rotational;
      DDS::Double integrator_rate_translational;
      DDS::Double integrator_position_rotational;
      DDS::Double integrator_position_translational;
      DDS::Double write_state_file;
      DDS::Double do_simple_trim;
      DDS::Double reset;
      DDS::Double terminate;
      DDS::Double frame_start_time;
      DDS::Double cycle_duration;
      DDS::Double flight_path_gamma_rad;
      DDS::Double flight_path_psi_gt_rad;
   };

   typedef DDS_DCPSStruct_var < simulation> simulation_var;
   typedef simulation&simulation_out;

   struct velocities
   {
      DDS::Long ID;
      DDS::Double h_dot_fps;
      DDS::Double v_north_fps;
      DDS::Double v_east_fps;
      DDS::Double v_down_fps;
      DDS::Double u_fps;
      DDS::Double v_fps;
      DDS::Double w_fps;
      DDS::Double p_rad_sec;
      DDS::Double q_rad_sec;
      DDS::Double r_rad_sec;
      DDS::Double pi_rad_sec;
      DDS::Double qi_rad_sec;
      DDS::Double ri_rad_sec;
      DDS::Double eci_velocity_mag_fps;
      DDS::Double vc_fps;
      DDS::Double vc_kts;
      DDS::Double ve_fps;
      DDS::Double ve_kts;
      DDS::Double machU;
      DDS::Double p_aero_rad_sec;
      DDS::Double q_aero_rad_sec;
      DDS::Double r_aero_rad_sec;
      DDS::Double phidot_rad_sec;
      DDS::Double thetadot_rad_sec;
      DDS::Double psidot_rad_sec;
      DDS::Double u_aero_fps;
      DDS::Double v_aero_fps;
      DDS::Double w_aero_fps;
      DDS::Double vt_fps;
      DDS::Double mach;
      DDS::Double vg_fps;
   };

   typedef DDS_DCPSStruct_var < velocities> velocities_var;
   typedef velocities&velocities_out;

   struct atmosphere
   {
      DDS::Long ID;
      DDS::Double T_R;
      DDS::Double rho_slugs_ft3;
      DDS::Double P_psf;
      DDS::Double a_fps;
      DDS::Double T_sl_R;
      DDS::Double rho_sl_slugs_ft3;
      DDS::Double P_sl_psf;
      DDS::Double a_sl_fps;
      DDS::Double theta;
      DDS::Double sigma;
      DDS::Double delta;
      DDS::Double a_ratio;
      DDS::Double psiw_rad;
      DDS::Double delta_T;
      DDS::Double T_sl_dev_F;
      DDS::Double density_altitude;
      DDS::Double wind_north_fps;
      DDS::Double wind_east_fps;
      DDS::Double wind_down_fps;
      DDS::Double wind_mag_fps;
      DDS::Double total_wind_north_fps;
      DDS::Double total_wind_east_fps;
      DDS::Double total_wind_down_fps;
      DDS::Double gust_north_fps;
      DDS::Double gust_east_fps;
      DDS::Double gust_down_fps;
      DDS::Double p_turb_rad_sec;
      DDS::Double q_turb_rad_sec;
      DDS::Double r_turb_rad_sec;
      DDS::Double turb_rate;
      DDS::Double turb_gain;
      DDS::Double turb_rhythmicity;
   };

   typedef DDS_DCPSStruct_var < atmosphere> atmosphere_var;
   typedef atmosphere&atmosphere_out;

   struct aerosurfaces
   {
      DDS::Long ID;
      DDS::Double aileron_cmd_norm;
      DDS::Double elevator_cmd_norm;
      DDS::Double rudder_cmd_norm;
      DDS::Double flap_cmd_norm;
      DDS::Double speedbrake_cmd_norm;
      DDS::Double spoiler_cmd_norm;
      DDS::Double pitch_trim_cmd_norm;
      DDS::Double roll_trim_cmd_norm;
      DDS::Double yaw_trim_cmd_norm;
      DDS::Double left_aileron_pos_rad;
      DDS::Double left_aileron_pos_deg;
      DDS::Double left_aileron_pos_norm;
      DDS::Double mag_left_aileron_pos_rad;
      DDS::Double right_aileron_pos_rad;
      DDS::Double right_aileron_pos_deg;
      DDS::Double right_aileron_pos_norm;
      DDS::Double mag_right_aileron_pos_rad;
      DDS::Double elevator_pos_rad;
      DDS::Double elevator_pos_deg;
      DDS::Double elevator_pos_norm;
      DDS::Double mag_elevator_pos_rad;
      DDS::Double rudder_pos_rad;
      DDS::Double rudder_pos_deg;
      DDS::Double rudder_pos_norm;
      DDS::Double mag_rudder_pos_rad;
      DDS::Double flap_pos_rad;
      DDS::Double flap_pos_deg;
      DDS::Double flap_pos_norm;
      DDS::Double speedbrake_pos_rad;
      DDS::Double speedbrake_pos_deg;
      DDS::Double speedbrake_pos_norm;
      DDS::Double mag_speedbrake_pos_rad;
      DDS::Double spoiler_pos_rad;
      DDS::Double spoiler_pos_deg;
      DDS::Double spoiler_pos_norm;
      DDS::Double mag_spoiler_pos_rad;
      DDS::Double left_brake_cmd_norm;
      DDS::Double right_brake_cmd_norm;
      DDS::Double center_brake_cmd_norm;
      DDS::Double steer_cmd_norm;
      DDS::Double wing_fold_pos_norm;
      DDS::Double throttle_cmd_norm;
      DDS::Double throttle_pos_norm;
      DDS::Double mixture_cmd_norm;
      DDS::Double mixture_pos_norm;
      DDS::Double advance_cmd_norm;
      DDS::Double advance_pos_norm;
      DDS::Double feather_cmd_norm;
      DDS::Double feather_pos_norm;
      DDS::Double steer_pos_deg;
      DDS::Double alpha_norm;
      DDS::Double elevator_cmd_limiter;
      DDS::Double g_load_norm;
      DDS::Double alpha_limiter;
      DDS::Double g_load_error;
      DDS::Double g_load_p;
      DDS::Double g_load_i;
      DDS::Double g_load_d;
      DDS::Double g_load_command;
      DDS::Double elevator_control;
      DDS::Double roll_rate_norm;
      DDS::Double roll_trim_error;
      DDS::Double roll_rate_p;
      DDS::Double roll_rate_i;
      DDS::Double roll_rate_d;
      DDS::Double roll_rate_command;
      DDS::Double left_aileron_control;
      DDS::Double right_aileron_control;
      DDS::Double yaw_rate_norm;
      DDS::Double yaw_trim_error;
      DDS::Double yaw_rate_p;
      DDS::Double yaw_rate_i;
      DDS::Double yaw_rate_d;
      DDS::Double yaw_command;
      DDS::Double rudder_control;
      DDS::Double alpha_norm_gain;
      DDS::Double lef_pos_deg;
      DDS::Double lef_pos_norm;
      DDS::Double throttle1;
      DDS::Double flap_command;
      DDS::Double flaps_control;
      DDS::Double flap_position_normalizer;
      DDS::Double speedbrake_control;
      DDS::Double gear_control;
      DDS::Double scheduled_steer_pos_deg;
   };

   typedef DDS_DCPSStruct_var < aerosurfaces> aerosurfaces_var;
   typedef aerosurfaces&aerosurfaces_out;

   struct gears
   {
      typedef DDS::Double _slip_angle_deg_array_slice;
      typedef DDS::Double _slip_angle_deg_array[3];
      typedef _slip_angle_deg_array _slip_angle_deg_array_out;
      static _slip_angle_deg_array_slice * _slip_angle_deg_array_alloc ();
      static void _slip_angle_deg_array_free (_slip_angle_deg_array_slice *);
      static void _slip_angle_deg_array_copy (_slip_angle_deg_array_slice* to, const _slip_angle_deg_array_slice* from);
      static _slip_angle_deg_array_slice *_slip_angle_deg_array_dup (const _slip_angle_deg_array_slice* from);

      struct _slip_angle_deg_array_uniq_ {};
      typedef DDS_DCPS_FArray_var< _slip_angle_deg_array, _slip_angle_deg_array_slice, struct _slip_angle_deg_array_uniq_> _slip_angle_deg_array_var;
      typedef DDS_DCPS_Array_forany< _slip_angle_deg_array, _slip_angle_deg_array_slice, struct _slip_angle_deg_array_uniq_> _slip_angle_deg_array_forany;
      typedef DDS::Double _WOW_array_slice;
      typedef DDS::Double _WOW_array[3];
      typedef _WOW_array _WOW_array_out;
      static _WOW_array_slice * _WOW_array_alloc ();
      static void _WOW_array_free (_WOW_array_slice *);
      static void _WOW_array_copy (_WOW_array_slice* to, const _WOW_array_slice* from);
      static _WOW_array_slice *_WOW_array_dup (const _WOW_array_slice* from);

      struct _WOW_array_uniq_ {};
      typedef DDS_DCPS_FArray_var< _WOW_array, _WOW_array_slice, struct _WOW_array_uniq_> _WOW_array_var;
      typedef DDS_DCPS_Array_forany< _WOW_array, _WOW_array_slice, struct _WOW_array_uniq_> _WOW_array_forany;
      typedef DDS::Double _wheel_speed_fps_array_slice;
      typedef DDS::Double _wheel_speed_fps_array[3];
      typedef _wheel_speed_fps_array _wheel_speed_fps_array_out;
      static _wheel_speed_fps_array_slice * _wheel_speed_fps_array_alloc ();
      static void _wheel_speed_fps_array_free (_wheel_speed_fps_array_slice *);
      static void _wheel_speed_fps_array_copy (_wheel_speed_fps_array_slice* to, const _wheel_speed_fps_array_slice* from);
      static _wheel_speed_fps_array_slice *_wheel_speed_fps_array_dup (const _wheel_speed_fps_array_slice* from);

      struct _wheel_speed_fps_array_uniq_ {};
      typedef DDS_DCPS_FArray_var< _wheel_speed_fps_array, _wheel_speed_fps_array_slice, struct _wheel_speed_fps_array_uniq_> _wheel_speed_fps_array_var;
      typedef DDS_DCPS_Array_forany< _wheel_speed_fps_array, _wheel_speed_fps_array_slice, struct _wheel_speed_fps_array_uniq_> _wheel_speed_fps_array_forany;
      typedef DDS::Double _z_position_array_slice;
      typedef DDS::Double _z_position_array[3];
      typedef _z_position_array _z_position_array_out;
      static _z_position_array_slice * _z_position_array_alloc ();
      static void _z_position_array_free (_z_position_array_slice *);
      static void _z_position_array_copy (_z_position_array_slice* to, const _z_position_array_slice* from);
      static _z_position_array_slice *_z_position_array_dup (const _z_position_array_slice* from);

      struct _z_position_array_uniq_ {};
      typedef DDS_DCPS_FArray_var< _z_position_array, _z_position_array_slice, struct _z_position_array_uniq_> _z_position_array_var;
      typedef DDS_DCPS_Array_forany< _z_position_array, _z_position_array_slice, struct _z_position_array_uniq_> _z_position_array_forany;
      typedef DDS::Double _compression_ft_array_slice;
      typedef DDS::Double _compression_ft_array[3];
      typedef _compression_ft_array _compression_ft_array_out;
      static _compression_ft_array_slice * _compression_ft_array_alloc ();
      static void _compression_ft_array_free (_compression_ft_array_slice *);
      static void _compression_ft_array_copy (_compression_ft_array_slice* to, const _compression_ft_array_slice* from);
      static _compression_ft_array_slice *_compression_ft_array_dup (const _compression_ft_array_slice* from);

      struct _compression_ft_array_uniq_ {};
      typedef DDS_DCPS_FArray_var< _compression_ft_array, _compression_ft_array_slice, struct _compression_ft_array_uniq_> _compression_ft_array_var;
      typedef DDS_DCPS_Array_forany< _compression_ft_array, _compression_ft_array_slice, struct _compression_ft_array_uniq_> _compression_ft_array_forany;
      typedef DDS::Double _side_friction_coeff_array_slice;
      typedef DDS::Double _side_friction_coeff_array[3];
      typedef _side_friction_coeff_array _side_friction_coeff_array_out;
      static _side_friction_coeff_array_slice * _side_friction_coeff_array_alloc ();
      static void _side_friction_coeff_array_free (_side_friction_coeff_array_slice *);
      static void _side_friction_coeff_array_copy (_side_friction_coeff_array_slice* to, const _side_friction_coeff_array_slice* from);
      static _side_friction_coeff_array_slice *_side_friction_coeff_array_dup (const _side_friction_coeff_array_slice* from);

      struct _side_friction_coeff_array_uniq_ {};
      typedef DDS_DCPS_FArray_var< _side_friction_coeff_array, _side_friction_coeff_array_slice, struct _side_friction_coeff_array_uniq_> _side_friction_coeff_array_var;
      typedef DDS_DCPS_Array_forany< _side_friction_coeff_array, _side_friction_coeff_array_slice, struct _side_friction_coeff_array_uniq_> _side_friction_coeff_array_forany;
      typedef DDS::Double _pos_norm_array_slice;
      typedef DDS::Double _pos_norm_array[3];
      typedef _pos_norm_array _pos_norm_array_out;
      static _pos_norm_array_slice * _pos_norm_array_alloc ();
      static void _pos_norm_array_free (_pos_norm_array_slice *);
      static void _pos_norm_array_copy (_pos_norm_array_slice* to, const _pos_norm_array_slice* from);
      static _pos_norm_array_slice *_pos_norm_array_dup (const _pos_norm_array_slice* from);

      struct _pos_norm_array_uniq_ {};
      typedef DDS_DCPS_FArray_var< _pos_norm_array, _pos_norm_array_slice, struct _pos_norm_array_uniq_> _pos_norm_array_var;
      typedef DDS_DCPS_Array_forany< _pos_norm_array, _pos_norm_array_slice, struct _pos_norm_array_uniq_> _pos_norm_array_forany;
      DDS::Long ID;
      DDS::Double gear_pos_norm;
      DDS::Double gear_cmd_norm;
      DDS::Double tailhook_pos_norm;
      DDS::Double num_units;
      _slip_angle_deg_array slip_angle_deg;
      _WOW_array WOW;
      _wheel_speed_fps_array wheel_speed_fps;
      _z_position_array z_position;
      _compression_ft_array compression_ft;
      _side_friction_coeff_array side_friction_coeff;
      _pos_norm_array pos_norm;
   };

   typedef DDS_DCPSStruct_var < gears> gears_var;
   typedef gears&gears_out;

   struct inertia
   {
      DDS::Long ID;
      DDS::Double mass_slugs;
      DDS::Double weight_lbs;
      DDS::Double empty_weight_lbs;
      DDS::Double cg_x_in;
      DDS::Double cg_y_in;
      DDS::Double cg_z_in;
      DDS::Double pointmass_weight_lbs;
      DDS::Double pointmass_location_X_inches;
      DDS::Double pointmass_location_Y_inches;
      DDS::Double pointmass_location_Z_inches;
      DDS::Double bx_aero_lbs;
      DDS::Double by_aero_lbs;
      DDS::Double bz_aero_lbs;
      DDS::Double wx_aero_lbs;
      DDS::Double wy_aero_lbs;
      DDS::Double wz_aero_lbs;
      DDS::Double od_norm;
      DDS::Double bx_gear_lbs;
      DDS::Double by_gear_lbs;
      DDS::Double bz_gear_lbs;
      DDS::Double bx_total_lbs;
      DDS::Double by_total_lbs;
      DDS::Double bz_total_lbs;
      DDS::Double oad_factor;
      DDS::Double old_down;
      DDS::Double bx_prop_lbs;
      DDS::Double by_prop_lbs;
      DDS::Double bz_prop_lbs;
      DDS::Double l_aero_lbsft;
      DDS::Double m_aero_lbsft;
      DDS::Double n_aero_lbsft;
      DDS::Double l_gear_lbsft;
      DDS::Double m_gear_lbsft;
      DDS::Double n_gear_lbsft;
      DDS::Double l_total_lbsft;
      DDS::Double m_total_lbsft;
      DDS::Double n_total_lbsft;
      DDS::Double l_prop_lbsft;
      DDS::Double m_prop_lbsft;
      DDS::Double n_prop_lbsft;
   };

   typedef DDS_DCPSStruct_var < inertia> inertia_var;
   typedef inertia&inertia_out;

   struct aero
   {
      DDS::Long ID;
      DDS::Double cl_squared;
      DDS::Double qbar_area;
      DDS::Double alpha_max_rad;
      DDS::Double alpha_min_rad;
      DDS::Double bi2vel;
      DDS::Double ci2vel;
      DDS::Double alpha_wing_rad;
      DDS::Double stall_hyst_norm;
      DDS::Double alpha_rad;
      DDS::Double beta_rad;
      DDS::Double mag_beta_rad;
      DDS::Double alpha_deg;
      DDS::Double beta_deg;
      DDS::Double mag_beta_deg;
      DDS::Double Re;
      DDS::Double qbar_psf;
      DDS::Double qbarUW_psf;
      DDS::Double qbarUV_psf;
      DDS::Double alphadot_rad_sec;
      DDS::Double betadot_rad_sec;
      DDS::Double alphadot_deg_sec;
      DDS::Double betadot_deg_sec;
      DDS::Double h_b_cg_ft;
      DDS::Double h_b_mac_ft;
      DDS::Double kCLge;
      DDS::Double stall_warn_norm;
   };

   typedef DDS_DCPSStruct_var < aero> aero_var;
   typedef aero&aero_out;

   struct aerocoefficient
   {
      DDS::Long ID;
      DDS::Double CDDh;
      DDS::Double CDmach;
      DDS::Double CDDlef;
      DDS::Double CDDflaps;
      DDS::Double CDgear;
      DDS::Double CDDsb;
      DDS::Double CDq;
      DDS::Double CDq_Dlef;
      DDS::Double CYb;
      DDS::Double CYb_M;
      DDS::Double CYDa;
      DDS::Double CYdr;
      DDS::Double CYp;
      DDS::Double CYr;
      DDS::Double CLDh;
      DDS::Double CLDlef;
      DDS::Double CLDflaps;
      DDS::Double CLDsb;
      DDS::Double CLq;
      DDS::Double CLq_Dsb;
      DDS::Double Clb;
      DDS::Double Clb_M;
      DDS::Double Clp;
      DDS::Double Clr;
      DDS::Double Clda;
      DDS::Double Clda_M;
      DDS::Double Cldr_M;
      DDS::Double Cldr;
      DDS::Double CmDh;
      DDS::Double Cma_M;
      DDS::Double Cmq;
      DDS::Double Cnb;
      DDS::Double Cnb_M;
      DDS::Double Cnp;
      DDS::Double Cnr;
      DDS::Double Cnda_M;
      DDS::Double Cnda;
      DDS::Double Cndr;
      DDS::Double Cndr_M;
   };

   typedef DDS_DCPSStruct_var < aerocoefficient> aerocoefficient_var;
   typedef aerocoefficient&aerocoefficient_out;

   struct geometric
   {
      DDS::Long ID;
      DDS::Double Sw_sqft;
      DDS::Double bw_ft;
      DDS::Double cbarw_ft;
      DDS::Double iw_rad;
      DDS::Double iw_deg;
      DDS::Double Sh_sqft;
      DDS::Double lh_ft;
      DDS::Double Sv_sqft;
      DDS::Double lv_ft;
      DDS::Double lh_norm;
      DDS::Double lv_norm;
      DDS::Double vbarh_norm;
      DDS::Double vbarv_norm;
      DDS::Double aero_rp_x_in;
      DDS::Double aero_rp_y_in;
      DDS::Double aero_rp_z_in;
      DDS::Double eyepoint_x_in;
      DDS::Double eyepoint_y_in;
      DDS::Double eyepoint_z_in;
      DDS::Double visualrefpoint_x_in;
      DDS::Double visualrefpoint_y_in;
      DDS::Double visualrefpoint_z_in;
      DDS::Double terrain_radius;
   };

   typedef DDS_DCPSStruct_var < geometric> geometric_var;
   typedef geometric&geometric_out;

   struct propulsion
   {
      typedef DDS::Double _tank_contents_lbs_array_slice;
      typedef DDS::Double _tank_contents_lbs_array[3];
      typedef _tank_contents_lbs_array _tank_contents_lbs_array_out;
      static _tank_contents_lbs_array_slice * _tank_contents_lbs_array_alloc ();
      static void _tank_contents_lbs_array_free (_tank_contents_lbs_array_slice *);
      static void _tank_contents_lbs_array_copy (_tank_contents_lbs_array_slice* to, const _tank_contents_lbs_array_slice* from);
      static _tank_contents_lbs_array_slice *_tank_contents_lbs_array_dup (const _tank_contents_lbs_array_slice* from);

      struct _tank_contents_lbs_array_uniq_ {};
      typedef DDS_DCPS_FArray_var< _tank_contents_lbs_array, _tank_contents_lbs_array_slice, struct _tank_contents_lbs_array_uniq_> _tank_contents_lbs_array_var;
      typedef DDS_DCPS_Array_forany< _tank_contents_lbs_array, _tank_contents_lbs_array_slice, struct _tank_contents_lbs_array_uniq_> _tank_contents_lbs_array_forany;
      DDS::Long ID;
      DDS::Double tat_r;
      DDS::Double tat_c;
      DDS::Double pt_lbs_sqft;
      DDS::Double set_running;
      DDS::Double starter_cmd;
      DDS::Double cutoff_cmd;
      DDS::Double active_engine;
      DDS::Double total_fuel_lbs;
      DDS::Double refuel;
      DDS::Double fuel_dump;
      DDS::Double pitch_angle_rad;
      DDS::Double yaw_angle_rad;
      DDS::Double reverser_angle_rad;
      DDS::Double thrust_lbs;
      DDS::Double fuel_flow_rate_pps;
      DDS::Double IdleThrust;
      DDS::Double MilThrust;
      DDS::Double AugThrust;
      DDS::Double WindMilRPM;
      DDS::Double n1;
      DDS::Double n2;
      DDS::Double injection_cmd;
      DDS::Double phase;
      DDS::Double RPM;
      DDS::Double EmergencyThrottlePosition;
      DDS::Double EmergencyNozzleSwitch;
      DDS::Double FuelDipperSwitch;
      DDS::Double AugmentationSwitch;
      DDS::Double EGT_degC;
      DDS::Double RelightSwitch;
      DDS::Double AugmentationLight;
      _tank_contents_lbs_array tank_contents_lbs;
   };

   typedef DDS_DCPSStruct_var < propulsion> propulsion_var;
   typedef propulsion&propulsion_out;

   struct initialConditions
   {
      DDS::Long ID;
      DDS::Double vc_kts;
      DDS::Double ve_kts;
      DDS::Double vg_kts;
      DDS::Double vt_kts;
      DDS::Double mach;
      DDS::Double roc_fpm;
      DDS::Double gamma_deg;
      DDS::Double alpha_deg;
      DDS::Double beta_deg;
      DDS::Double theta_deg;
      DDS::Double phi_deg;
      DDS::Double psi_true_deg;
      DDS::Double lat_gc_deg;
      DDS::Double long_gc_deg;
      DDS::Double h_sl_ft;
      DDS::Double h_agl_ft;
      DDS::Double sea_level_radius_ft;
      DDS::Double terrain_elevation_ft;
      DDS::Double vg_fps;
      DDS::Double vt_fps;
      DDS::Double vw_bx_fps;
      DDS::Double vw_by_fps;
      DDS::Double vw_bz_fps;
      DDS::Double vw_north_fps;
      DDS::Double vw_east_fps;
      DDS::Double vw_down_fps;
      DDS::Double vw_mag_fps;
      DDS::Double vw_dir_deg;
      DDS::Double roc_fps;
      DDS::Double u_fps;
      DDS::Double v_fps;
      DDS::Double w_fps;
      DDS::Double vn_fps;
      DDS::Double ve_fps;
      DDS::Double vd_fps;
      DDS::Double gamma_rad;
      DDS::Double alpha_rad;
      DDS::Double theta_rad;
      DDS::Double beta_rad;
      DDS::Double phi_rad;
      DDS::Double psi_true_rad;
      DDS::Double lat_gc_rad;
      DDS::Double long_gc_rad;
      DDS::Double p_rad_sec;
      DDS::Double q_rad_sec;
      DDS::Double r_rad_sec;
      DDS::Double CDdHT;
   };

   typedef DDS_DCPSStruct_var < initialConditions> initialConditions_var;
   typedef initialConditions&initialConditions_out;

   struct subSystems
   {
      DDS::Long ID;
      DDS::Boolean electrical_GPU;
      DDS::Boolean electrical_BatteryBus;
      DDS::Boolean electrical_BatterySwitch;
      DDS::Boolean electrical_ManualLoadShed;
      DDS::Boolean electrical_GeneratorSwitch;
      DDS::Boolean electrical_InverterSwitch;
      DDS::Boolean electrical_AlternatorSwitch;
      DDS::Double electrical_MainFailLightSwitch;
      DDS::Boolean electrical_EmergencyParkingBrakeSwitch;
      DDS::Double hydraulic_HydraulicPumpPressure;
      DDS::Boolean hydraulic_ServoAccumulator;
      DDS::Boolean hydraulic_EmergencyHydPumpSwitch;
      DDS::Boolean hydraulic_EmergencyPump;
      DDS::Double hydraulic_Hydraulic2PumpPressure;
      DDS::Boolean hydraulic_PreservoHyd2;
      DDS::Double hydraulic_HydraulicResservoir;
      DDS::Boolean armament_MasterArmamentSwitch;
      DDS::Boolean armament_NormalManual;
      DDS::Boolean armament_BombsSelection;
      DDS::Boolean armament_GunsSelection;
      DDS::Boolean armament_MissilesSelection;
      DDS::Boolean armament_RocketsSelection;
      DDS::Boolean armament_GunTrigger;
      DDS::Boolean armament_BRMTrigger;
      DDS::Boolean armament_FuelDipper;
      DDS::Boolean fuel_WingTankDropSwitch;
      DDS::Boolean fuel_FuseLageTankDropSwitch;
      DDS::Boolean fuel_ExTankDropSwitch;
      DDS::Boolean fuel_FuelDumpSwitch;
      DDS::Boolean fuel_MainLPPump;
      DDS::Boolean fuel_LPPumpRight;
      DDS::Boolean fuel_LPPumpLeft;
      DDS::Boolean fuel_CrossfeedCock;
      DDS::Boolean fuel_GaugeTest;
      DDS::Double fuel_RPM;
      DDS::Double fuel_FuelConsumptionRate;
   };

   typedef DDS_DCPSStruct_var < subSystems> subSystems_var;
   typedef subSystems&subSystems_out;

   struct subSystemOut
   {
      DDS::Long ID;
      DDS::Boolean output_BatteryBusOut;
      DDS::Boolean output_DC;
      DDS::Boolean output_Inverter;
      DDS::Boolean output_ALternator;
      DDS::Boolean output_AutoLoadSheddingAC;
      DDS::Boolean output_AlternatorWarningLight;
      DDS::Boolean output_GenernatorWarningLight;
      DDS::Boolean output_BatteryWarningLight;
      DDS::Double output_UnderCarriageExtension;
      DDS::Double output_WheelBrake;
      DDS::Double output_SpeedBrake;
      DDS::Double output_ParkingBrake;
      DDS::Double output_OscarDashpot;
      DDS::Double output_LeftElevonControl;
      DDS::Double output_RightElevonControl;
      DDS::Double output_PreservoControl;
      DDS::Double output_PitchDamper;
      DDS::Boolean output_HydraulicIndicatorLight;
      DDS::Boolean output_Hydraulic2IndicatorLight;
      DDS::Boolean output_EmergencyHydraulicIndicator;
      DDS::Double output_DualHydGuage1;
      DDS::Double output_DualHydGuage2;
      DDS::Double output_FuelTotalizer;
      DDS::Boolean output_LeftWingTankWarningLight;
      DDS::Boolean output_CenterLineTankWarningLight;
      DDS::Boolean output_InternalWingTankWarningLight;
      DDS::Boolean output_UpperBayWarningLight;
      DDS::Boolean output_RightWingTankWarningLight;
      DDS::Boolean output_LitreWarningLight600;
      DDS::Boolean output_LitreWarningLight400;
      DDS::Double output_DFGLeft;
      DDS::Double output_DFGRight;
      DDS::Double output_MainFailLight;
      DDS::Double output_WarningHorn;
      DDS::Boolean output_BombIndication;
      DDS::Boolean output_GunIndication;
      DDS::Boolean output_MissileIndication;
      DDS::Boolean output_RocketIndication;
      DDS::Double output_RPMIncrease;
   };

   typedef DDS_DCPSStruct_var < subSystemOut> subSystemOut_var;
   typedef subSystemOut&subSystemOut_out;
}
template <>
JSBSim::gears::_slip_angle_deg_array_slice* DDS_DCPS_ArrayHelper < JSBSim::gears::_slip_angle_deg_array, JSBSim::gears::_slip_angle_deg_array_slice, JSBSim::gears::_slip_angle_deg_array_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_slip_angle_deg_array, JSBSim::gears::_slip_angle_deg_array_slice, JSBSim::gears::_slip_angle_deg_array_uniq_>::copy (JSBSim::gears::_slip_angle_deg_array_slice *to, const JSBSim::gears::_slip_angle_deg_array_slice* from);
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_slip_angle_deg_array, JSBSim::gears::_slip_angle_deg_array_slice, JSBSim::gears::_slip_angle_deg_array_uniq_>::free (JSBSim::gears::_slip_angle_deg_array_slice *ptr);
template <>
JSBSim::gears::_WOW_array_slice* DDS_DCPS_ArrayHelper < JSBSim::gears::_WOW_array, JSBSim::gears::_WOW_array_slice, JSBSim::gears::_WOW_array_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_WOW_array, JSBSim::gears::_WOW_array_slice, JSBSim::gears::_WOW_array_uniq_>::copy (JSBSim::gears::_WOW_array_slice *to, const JSBSim::gears::_WOW_array_slice* from);
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_WOW_array, JSBSim::gears::_WOW_array_slice, JSBSim::gears::_WOW_array_uniq_>::free (JSBSim::gears::_WOW_array_slice *ptr);
template <>
JSBSim::gears::_wheel_speed_fps_array_slice* DDS_DCPS_ArrayHelper < JSBSim::gears::_wheel_speed_fps_array, JSBSim::gears::_wheel_speed_fps_array_slice, JSBSim::gears::_wheel_speed_fps_array_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_wheel_speed_fps_array, JSBSim::gears::_wheel_speed_fps_array_slice, JSBSim::gears::_wheel_speed_fps_array_uniq_>::copy (JSBSim::gears::_wheel_speed_fps_array_slice *to, const JSBSim::gears::_wheel_speed_fps_array_slice* from);
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_wheel_speed_fps_array, JSBSim::gears::_wheel_speed_fps_array_slice, JSBSim::gears::_wheel_speed_fps_array_uniq_>::free (JSBSim::gears::_wheel_speed_fps_array_slice *ptr);
template <>
JSBSim::gears::_z_position_array_slice* DDS_DCPS_ArrayHelper < JSBSim::gears::_z_position_array, JSBSim::gears::_z_position_array_slice, JSBSim::gears::_z_position_array_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_z_position_array, JSBSim::gears::_z_position_array_slice, JSBSim::gears::_z_position_array_uniq_>::copy (JSBSim::gears::_z_position_array_slice *to, const JSBSim::gears::_z_position_array_slice* from);
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_z_position_array, JSBSim::gears::_z_position_array_slice, JSBSim::gears::_z_position_array_uniq_>::free (JSBSim::gears::_z_position_array_slice *ptr);
template <>
JSBSim::gears::_compression_ft_array_slice* DDS_DCPS_ArrayHelper < JSBSim::gears::_compression_ft_array, JSBSim::gears::_compression_ft_array_slice, JSBSim::gears::_compression_ft_array_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_compression_ft_array, JSBSim::gears::_compression_ft_array_slice, JSBSim::gears::_compression_ft_array_uniq_>::copy (JSBSim::gears::_compression_ft_array_slice *to, const JSBSim::gears::_compression_ft_array_slice* from);
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_compression_ft_array, JSBSim::gears::_compression_ft_array_slice, JSBSim::gears::_compression_ft_array_uniq_>::free (JSBSim::gears::_compression_ft_array_slice *ptr);
template <>
JSBSim::gears::_side_friction_coeff_array_slice* DDS_DCPS_ArrayHelper < JSBSim::gears::_side_friction_coeff_array, JSBSim::gears::_side_friction_coeff_array_slice, JSBSim::gears::_side_friction_coeff_array_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_side_friction_coeff_array, JSBSim::gears::_side_friction_coeff_array_slice, JSBSim::gears::_side_friction_coeff_array_uniq_>::copy (JSBSim::gears::_side_friction_coeff_array_slice *to, const JSBSim::gears::_side_friction_coeff_array_slice* from);
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_side_friction_coeff_array, JSBSim::gears::_side_friction_coeff_array_slice, JSBSim::gears::_side_friction_coeff_array_uniq_>::free (JSBSim::gears::_side_friction_coeff_array_slice *ptr);
template <>
JSBSim::gears::_pos_norm_array_slice* DDS_DCPS_ArrayHelper < JSBSim::gears::_pos_norm_array, JSBSim::gears::_pos_norm_array_slice, JSBSim::gears::_pos_norm_array_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_pos_norm_array, JSBSim::gears::_pos_norm_array_slice, JSBSim::gears::_pos_norm_array_uniq_>::copy (JSBSim::gears::_pos_norm_array_slice *to, const JSBSim::gears::_pos_norm_array_slice* from);
template <>
void DDS_DCPS_ArrayHelper < JSBSim::gears::_pos_norm_array, JSBSim::gears::_pos_norm_array_slice, JSBSim::gears::_pos_norm_array_uniq_>::free (JSBSim::gears::_pos_norm_array_slice *ptr);
template <>
JSBSim::propulsion::_tank_contents_lbs_array_slice* DDS_DCPS_ArrayHelper < JSBSim::propulsion::_tank_contents_lbs_array, JSBSim::propulsion::_tank_contents_lbs_array_slice, JSBSim::propulsion::_tank_contents_lbs_array_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < JSBSim::propulsion::_tank_contents_lbs_array, JSBSim::propulsion::_tank_contents_lbs_array_slice, JSBSim::propulsion::_tank_contents_lbs_array_uniq_>::copy (JSBSim::propulsion::_tank_contents_lbs_array_slice *to, const JSBSim::propulsion::_tank_contents_lbs_array_slice* from);
template <>
void DDS_DCPS_ArrayHelper < JSBSim::propulsion::_tank_contents_lbs_array, JSBSim::propulsion::_tank_contents_lbs_array_slice, JSBSim::propulsion::_tank_contents_lbs_array_uniq_>::free (JSBSim::propulsion::_tank_contents_lbs_array_slice *ptr);




#endif 
