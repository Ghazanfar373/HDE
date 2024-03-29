#ifndef JSBSIMSPLTYPES_H
#define JSBSIMSPLTYPES_H

#include "ccpp_JSBSim.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __JSBSim_JSBSim__load (c_base base);

extern c_metaObject __JSBSim_position__load (c_base base);
extern const char * __JSBSim_position__keys (void);
extern const char * __JSBSim_position__name (void);
struct _JSBSim_position ;
extern  c_bool __JSBSim_position__copyIn(c_base base, struct JSBSim::position *from, struct _JSBSim_position *to);
extern  void __JSBSim_position__copyOut(void *_from, void *_to);
struct _JSBSim_position {
    c_long ID;
    c_double epa_rad;
    c_double h_sl_ft;
    c_double h_sl_meters;
    c_double lat_gc_rad;
    c_double long_gc_rad;
    c_double lat_gc_deg;
    c_double long_gc_deg;
    c_double lat_geod_rad;
    c_double lat_geod_deg;
    c_double geod_alt_ft;
    c_double h_agl_ft;
    c_double radius_to_vehicle_ft;
    c_double terrain_elevation_asl_ft;
    c_double distance_from_start_lon_mt;
    c_double distance_from_start_lat_mt;
    c_double distance_from_start_mag_mt;
};

extern c_metaObject __JSBSim_accelerations__load (c_base base);
extern const char * __JSBSim_accelerations__keys (void);
extern const char * __JSBSim_accelerations__name (void);
struct _JSBSim_accelerations ;
extern  c_bool __JSBSim_accelerations__copyIn(c_base base, struct JSBSim::accelerations *from, struct _JSBSim_accelerations *to);
extern  void __JSBSim_accelerations__copyOut(void *_from, void *_to);
struct _JSBSim_accelerations {
    c_long ID;
    c_double pdot_rad_sec2;
    c_double qdot_rad_sec2;
    c_double rdot_rad_sec2;
    c_double udot_ft_sec2;
    c_double vdot_ft_sec2;
    c_double wdot_ft_sec2;
    c_double a_pilot_x_ft_sec2;
    c_double a_pilot_y_ft_sec2;
    c_double a_pilot_z_ft_sec2;
    c_double n_pilot_x_norm;
    c_double n_pilot_y_norm;
    c_double n_pilot_z_norm;
    c_double Nz;
};

extern c_metaObject __JSBSim_atitude__load (c_base base);
extern const char * __JSBSim_atitude__keys (void);
extern const char * __JSBSim_atitude__name (void);
struct _JSBSim_atitude ;
extern  c_bool __JSBSim_atitude__copyIn(c_base base, struct JSBSim::atitude *from, struct _JSBSim_atitude *to);
extern  void __JSBSim_atitude__copyOut(void *_from, void *_to);
struct _JSBSim_atitude {
    c_long ID;
    c_double phi_rad;
    c_double theta_rad;
    c_double psi_rad;
    c_double roll_rad;
    c_double pitch_rad;
    c_double heading_true_rad;
};

extern c_metaObject __JSBSim_simulation__load (c_base base);
extern const char * __JSBSim_simulation__keys (void);
extern const char * __JSBSim_simulation__name (void);
struct _JSBSim_simulation ;
extern  c_bool __JSBSim_simulation__copyIn(c_base base, struct JSBSim::simulation *from, struct _JSBSim_simulation *to);
extern  void __JSBSim_simulation__copyOut(void *_from, void *_to);
struct _JSBSim_simulation {
    c_long ID;
    c_double integrator_rate_rotational;
    c_double integrator_rate_translational;
    c_double integrator_position_rotational;
    c_double integrator_position_translational;
    c_double write_state_file;
    c_double do_simple_trim;
    c_double reset;
    c_double terminate;
    c_double frame_start_time;
    c_double cycle_duration;
    c_double flight_path_gamma_rad;
    c_double flight_path_psi_gt_rad;
};

extern c_metaObject __JSBSim_velocities__load (c_base base);
extern const char * __JSBSim_velocities__keys (void);
extern const char * __JSBSim_velocities__name (void);
struct _JSBSim_velocities ;
extern  c_bool __JSBSim_velocities__copyIn(c_base base, struct JSBSim::velocities *from, struct _JSBSim_velocities *to);
extern  void __JSBSim_velocities__copyOut(void *_from, void *_to);
struct _JSBSim_velocities {
    c_long ID;
    c_double h_dot_fps;
    c_double v_north_fps;
    c_double v_east_fps;
    c_double v_down_fps;
    c_double u_fps;
    c_double v_fps;
    c_double w_fps;
    c_double p_rad_sec;
    c_double q_rad_sec;
    c_double r_rad_sec;
    c_double pi_rad_sec;
    c_double qi_rad_sec;
    c_double ri_rad_sec;
    c_double eci_velocity_mag_fps;
    c_double vc_fps;
    c_double vc_kts;
    c_double ve_fps;
    c_double ve_kts;
    c_double machU;
    c_double p_aero_rad_sec;
    c_double q_aero_rad_sec;
    c_double r_aero_rad_sec;
    c_double phidot_rad_sec;
    c_double thetadot_rad_sec;
    c_double psidot_rad_sec;
    c_double u_aero_fps;
    c_double v_aero_fps;
    c_double w_aero_fps;
    c_double vt_fps;
    c_double mach;
    c_double vg_fps;
};

extern c_metaObject __JSBSim_atmosphere__load (c_base base);
extern const char * __JSBSim_atmosphere__keys (void);
extern const char * __JSBSim_atmosphere__name (void);
struct _JSBSim_atmosphere ;
extern  c_bool __JSBSim_atmosphere__copyIn(c_base base, struct JSBSim::atmosphere *from, struct _JSBSim_atmosphere *to);
extern  void __JSBSim_atmosphere__copyOut(void *_from, void *_to);
struct _JSBSim_atmosphere {
    c_long ID;
    c_double T_R;
    c_double rho_slugs_ft3;
    c_double P_psf;
    c_double a_fps;
    c_double T_sl_R;
    c_double rho_sl_slugs_ft3;
    c_double P_sl_psf;
    c_double a_sl_fps;
    c_double theta;
    c_double sigma;
    c_double delta;
    c_double a_ratio;
    c_double psiw_rad;
    c_double delta_T;
    c_double T_sl_dev_F;
    c_double density_altitude;
    c_double wind_north_fps;
    c_double wind_east_fps;
    c_double wind_down_fps;
    c_double wind_mag_fps;
    c_double total_wind_north_fps;
    c_double total_wind_east_fps;
    c_double total_wind_down_fps;
    c_double gust_north_fps;
    c_double gust_east_fps;
    c_double gust_down_fps;
    c_double p_turb_rad_sec;
    c_double q_turb_rad_sec;
    c_double r_turb_rad_sec;
    c_double turb_rate;
    c_double turb_gain;
    c_double turb_rhythmicity;
};

extern c_metaObject __JSBSim_aerosurfaces__load (c_base base);
extern const char * __JSBSim_aerosurfaces__keys (void);
extern const char * __JSBSim_aerosurfaces__name (void);
struct _JSBSim_aerosurfaces ;
extern  c_bool __JSBSim_aerosurfaces__copyIn(c_base base, struct JSBSim::aerosurfaces *from, struct _JSBSim_aerosurfaces *to);
extern  void __JSBSim_aerosurfaces__copyOut(void *_from, void *_to);
struct _JSBSim_aerosurfaces {
    c_long ID;
    c_double aileron_cmd_norm;
    c_double elevator_cmd_norm;
    c_double rudder_cmd_norm;
    c_double flap_cmd_norm;
    c_double speedbrake_cmd_norm;
    c_double spoiler_cmd_norm;
    c_double pitch_trim_cmd_norm;
    c_double roll_trim_cmd_norm;
    c_double yaw_trim_cmd_norm;
    c_double left_aileron_pos_rad;
    c_double left_aileron_pos_deg;
    c_double left_aileron_pos_norm;
    c_double mag_left_aileron_pos_rad;
    c_double right_aileron_pos_rad;
    c_double right_aileron_pos_deg;
    c_double right_aileron_pos_norm;
    c_double mag_right_aileron_pos_rad;
    c_double elevator_pos_rad;
    c_double elevator_pos_deg;
    c_double elevator_pos_norm;
    c_double mag_elevator_pos_rad;
    c_double rudder_pos_rad;
    c_double rudder_pos_deg;
    c_double rudder_pos_norm;
    c_double mag_rudder_pos_rad;
    c_double flap_pos_rad;
    c_double flap_pos_deg;
    c_double flap_pos_norm;
    c_double speedbrake_pos_rad;
    c_double speedbrake_pos_deg;
    c_double speedbrake_pos_norm;
    c_double mag_speedbrake_pos_rad;
    c_double spoiler_pos_rad;
    c_double spoiler_pos_deg;
    c_double spoiler_pos_norm;
    c_double mag_spoiler_pos_rad;
    c_double left_brake_cmd_norm;
    c_double right_brake_cmd_norm;
    c_double center_brake_cmd_norm;
    c_double steer_cmd_norm;
    c_double wing_fold_pos_norm;
    c_double throttle_cmd_norm;
    c_double throttle_pos_norm;
    c_double mixture_cmd_norm;
    c_double mixture_pos_norm;
    c_double advance_cmd_norm;
    c_double advance_pos_norm;
    c_double feather_cmd_norm;
    c_double feather_pos_norm;
    c_double steer_pos_deg;
    c_double alpha_norm;
    c_double elevator_cmd_limiter;
    c_double g_load_norm;
    c_double alpha_limiter;
    c_double g_load_error;
    c_double g_load_p;
    c_double g_load_i;
    c_double g_load_d;
    c_double g_load_command;
    c_double elevator_control;
    c_double roll_rate_norm;
    c_double roll_trim_error;
    c_double roll_rate_p;
    c_double roll_rate_i;
    c_double roll_rate_d;
    c_double roll_rate_command;
    c_double left_aileron_control;
    c_double right_aileron_control;
    c_double yaw_rate_norm;
    c_double yaw_trim_error;
    c_double yaw_rate_p;
    c_double yaw_rate_i;
    c_double yaw_rate_d;
    c_double yaw_command;
    c_double rudder_control;
    c_double alpha_norm_gain;
    c_double lef_pos_deg;
    c_double lef_pos_norm;
    c_double throttle1;
    c_double flap_command;
    c_double flaps_control;
    c_double flap_position_normalizer;
    c_double speedbrake_control;
    c_double gear_control;
    c_double scheduled_steer_pos_deg;
};

extern c_metaObject __JSBSim_gears__load (c_base base);
extern const char * __JSBSim_gears__keys (void);
extern const char * __JSBSim_gears__name (void);
struct _JSBSim_gears ;
extern  c_bool __JSBSim_gears__copyIn(c_base base, struct JSBSim::gears *from, struct _JSBSim_gears *to);
extern  void __JSBSim_gears__copyOut(void *_from, void *_to);
struct _JSBSim_gears {
    c_long ID;
    c_double gear_pos_norm;
    c_double gear_cmd_norm;
    c_double tailhook_pos_norm;
    c_double num_units;
    c_double slip_angle_deg[3];
    c_double WOW[3];
    c_double wheel_speed_fps[3];
    c_double z_position[3];
    c_double compression_ft[3];
    c_double side_friction_coeff[3];
    c_double pos_norm[3];
};

extern c_metaObject __JSBSim_inertia__load (c_base base);
extern const char * __JSBSim_inertia__keys (void);
extern const char * __JSBSim_inertia__name (void);
struct _JSBSim_inertia ;
extern  c_bool __JSBSim_inertia__copyIn(c_base base, struct JSBSim::inertia *from, struct _JSBSim_inertia *to);
extern  void __JSBSim_inertia__copyOut(void *_from, void *_to);
struct _JSBSim_inertia {
    c_long ID;
    c_double mass_slugs;
    c_double weight_lbs;
    c_double empty_weight_lbs;
    c_double cg_x_in;
    c_double cg_y_in;
    c_double cg_z_in;
    c_double pointmass_weight_lbs;
    c_double pointmass_location_X_inches;
    c_double pointmass_location_Y_inches;
    c_double pointmass_location_Z_inches;
    c_double bx_aero_lbs;
    c_double by_aero_lbs;
    c_double bz_aero_lbs;
    c_double wx_aero_lbs;
    c_double wy_aero_lbs;
    c_double wz_aero_lbs;
    c_double od_norm;
    c_double bx_gear_lbs;
    c_double by_gear_lbs;
    c_double bz_gear_lbs;
    c_double bx_total_lbs;
    c_double by_total_lbs;
    c_double bz_total_lbs;
    c_double oad_factor;
    c_double old_down;
    c_double bx_prop_lbs;
    c_double by_prop_lbs;
    c_double bz_prop_lbs;
    c_double l_aero_lbsft;
    c_double m_aero_lbsft;
    c_double n_aero_lbsft;
    c_double l_gear_lbsft;
    c_double m_gear_lbsft;
    c_double n_gear_lbsft;
    c_double l_total_lbsft;
    c_double m_total_lbsft;
    c_double n_total_lbsft;
    c_double l_prop_lbsft;
    c_double m_prop_lbsft;
    c_double n_prop_lbsft;
};

extern c_metaObject __JSBSim_aero__load (c_base base);
extern const char * __JSBSim_aero__keys (void);
extern const char * __JSBSim_aero__name (void);
struct _JSBSim_aero ;
extern  c_bool __JSBSim_aero__copyIn(c_base base, struct JSBSim::aero *from, struct _JSBSim_aero *to);
extern  void __JSBSim_aero__copyOut(void *_from, void *_to);
struct _JSBSim_aero {
    c_long ID;
    c_double cl_squared;
    c_double qbar_area;
    c_double alpha_max_rad;
    c_double alpha_min_rad;
    c_double bi2vel;
    c_double ci2vel;
    c_double alpha_wing_rad;
    c_double stall_hyst_norm;
    c_double alpha_rad;
    c_double beta_rad;
    c_double mag_beta_rad;
    c_double alpha_deg;
    c_double beta_deg;
    c_double mag_beta_deg;
    c_double Re;
    c_double qbar_psf;
    c_double qbarUW_psf;
    c_double qbarUV_psf;
    c_double alphadot_rad_sec;
    c_double betadot_rad_sec;
    c_double alphadot_deg_sec;
    c_double betadot_deg_sec;
    c_double h_b_cg_ft;
    c_double h_b_mac_ft;
    c_double kCLge;
    c_double stall_warn_norm;
};

extern c_metaObject __JSBSim_aerocoefficient__load (c_base base);
extern const char * __JSBSim_aerocoefficient__keys (void);
extern const char * __JSBSim_aerocoefficient__name (void);
struct _JSBSim_aerocoefficient ;
extern  c_bool __JSBSim_aerocoefficient__copyIn(c_base base, struct JSBSim::aerocoefficient *from, struct _JSBSim_aerocoefficient *to);
extern  void __JSBSim_aerocoefficient__copyOut(void *_from, void *_to);
struct _JSBSim_aerocoefficient {
    c_long ID;
    c_double CDDh;
    c_double CDmach;
    c_double CDDlef;
    c_double CDDflaps;
    c_double CDgear;
    c_double CDDsb;
    c_double CDq;
    c_double CDq_Dlef;
    c_double CYb;
    c_double CYb_M;
    c_double CYDa;
    c_double CYdr;
    c_double CYp;
    c_double CYr;
    c_double CLDh;
    c_double CLDlef;
    c_double CLDflaps;
    c_double CLDsb;
    c_double CLq;
    c_double CLq_Dsb;
    c_double Clb;
    c_double Clb_M;
    c_double Clp;
    c_double Clr;
    c_double Clda;
    c_double Clda_M;
    c_double Cldr_M;
    c_double Cldr;
    c_double CmDh;
    c_double Cma_M;
    c_double Cmq;
    c_double Cnb;
    c_double Cnb_M;
    c_double Cnp;
    c_double Cnr;
    c_double Cnda_M;
    c_double Cnda;
    c_double Cndr;
    c_double Cndr_M;
};

extern c_metaObject __JSBSim_geometric__load (c_base base);
extern const char * __JSBSim_geometric__keys (void);
extern const char * __JSBSim_geometric__name (void);
struct _JSBSim_geometric ;
extern  c_bool __JSBSim_geometric__copyIn(c_base base, struct JSBSim::geometric *from, struct _JSBSim_geometric *to);
extern  void __JSBSim_geometric__copyOut(void *_from, void *_to);
struct _JSBSim_geometric {
    c_long ID;
    c_double Sw_sqft;
    c_double bw_ft;
    c_double cbarw_ft;
    c_double iw_rad;
    c_double iw_deg;
    c_double Sh_sqft;
    c_double lh_ft;
    c_double Sv_sqft;
    c_double lv_ft;
    c_double lh_norm;
    c_double lv_norm;
    c_double vbarh_norm;
    c_double vbarv_norm;
    c_double aero_rp_x_in;
    c_double aero_rp_y_in;
    c_double aero_rp_z_in;
    c_double eyepoint_x_in;
    c_double eyepoint_y_in;
    c_double eyepoint_z_in;
    c_double visualrefpoint_x_in;
    c_double visualrefpoint_y_in;
    c_double visualrefpoint_z_in;
    c_double terrain_radius;
};

extern c_metaObject __JSBSim_propulsion__load (c_base base);
extern const char * __JSBSim_propulsion__keys (void);
extern const char * __JSBSim_propulsion__name (void);
struct _JSBSim_propulsion ;
extern  c_bool __JSBSim_propulsion__copyIn(c_base base, struct JSBSim::propulsion *from, struct _JSBSim_propulsion *to);
extern  void __JSBSim_propulsion__copyOut(void *_from, void *_to);
struct _JSBSim_propulsion {
    c_long ID;
    c_double tat_r;
    c_double tat_c;
    c_double pt_lbs_sqft;
    c_double set_running;
    c_double starter_cmd;
    c_double cutoff_cmd;
    c_double active_engine;
    c_double total_fuel_lbs;
    c_double refuel;
    c_double fuel_dump;
    c_double pitch_angle_rad;
    c_double yaw_angle_rad;
    c_double reverser_angle_rad;
    c_double thrust_lbs;
    c_double fuel_flow_rate_pps;
    c_double IdleThrust;
    c_double MilThrust;
    c_double AugThrust;
    c_double WindMilRPM;
    c_double n1;
    c_double n2;
    c_double injection_cmd;
    c_double phase;
    c_double RPM;
    c_double EmergencyThrottlePosition;
    c_double EmergencyNozzleSwitch;
    c_double FuelDipperSwitch;
    c_double AugmentationSwitch;
    c_double EGT_degC;
    c_double RelightSwitch;
    c_double AugmentationLight;
    c_double tank_contents_lbs[3];
};

extern c_metaObject __JSBSim_initialConditions__load (c_base base);
extern const char * __JSBSim_initialConditions__keys (void);
extern const char * __JSBSim_initialConditions__name (void);
struct _JSBSim_initialConditions ;
extern  c_bool __JSBSim_initialConditions__copyIn(c_base base, struct JSBSim::initialConditions *from, struct _JSBSim_initialConditions *to);
extern  void __JSBSim_initialConditions__copyOut(void *_from, void *_to);
struct _JSBSim_initialConditions {
    c_long ID;
    c_double vc_kts;
    c_double ve_kts;
    c_double vg_kts;
    c_double vt_kts;
    c_double mach;
    c_double roc_fpm;
    c_double gamma_deg;
    c_double alpha_deg;
    c_double beta_deg;
    c_double theta_deg;
    c_double phi_deg;
    c_double psi_true_deg;
    c_double lat_gc_deg;
    c_double long_gc_deg;
    c_double h_sl_ft;
    c_double h_agl_ft;
    c_double sea_level_radius_ft;
    c_double terrain_elevation_ft;
    c_double vg_fps;
    c_double vt_fps;
    c_double vw_bx_fps;
    c_double vw_by_fps;
    c_double vw_bz_fps;
    c_double vw_north_fps;
    c_double vw_east_fps;
    c_double vw_down_fps;
    c_double vw_mag_fps;
    c_double vw_dir_deg;
    c_double roc_fps;
    c_double u_fps;
    c_double v_fps;
    c_double w_fps;
    c_double vn_fps;
    c_double ve_fps;
    c_double vd_fps;
    c_double gamma_rad;
    c_double alpha_rad;
    c_double theta_rad;
    c_double beta_rad;
    c_double phi_rad;
    c_double psi_true_rad;
    c_double lat_gc_rad;
    c_double long_gc_rad;
    c_double p_rad_sec;
    c_double q_rad_sec;
    c_double r_rad_sec;
    c_double CDdHT;
};

extern c_metaObject __JSBSim_subSystems__load (c_base base);
extern const char * __JSBSim_subSystems__keys (void);
extern const char * __JSBSim_subSystems__name (void);
struct _JSBSim_subSystems ;
extern  c_bool __JSBSim_subSystems__copyIn(c_base base, struct JSBSim::subSystems *from, struct _JSBSim_subSystems *to);
extern  void __JSBSim_subSystems__copyOut(void *_from, void *_to);
struct _JSBSim_subSystems {
    c_long ID;
    c_bool electrical_GPU;
    c_bool electrical_BatteryBus;
    c_bool electrical_BatterySwitch;
    c_bool electrical_ManualLoadShed;
    c_bool electrical_GeneratorSwitch;
    c_bool electrical_InverterSwitch;
    c_bool electrical_AlternatorSwitch;
    c_double electrical_MainFailLightSwitch;
    c_bool electrical_EmergencyParkingBrakeSwitch;
    c_double hydraulic_HydraulicPumpPressure;
    c_bool hydraulic_ServoAccumulator;
    c_bool hydraulic_EmergencyHydPumpSwitch;
    c_bool hydraulic_EmergencyPump;
    c_double hydraulic_Hydraulic2PumpPressure;
    c_bool hydraulic_PreservoHyd2;
    c_double hydraulic_HydraulicResservoir;
    c_bool armament_MasterArmamentSwitch;
    c_bool armament_NormalManual;
    c_bool armament_BombsSelection;
    c_bool armament_GunsSelection;
    c_bool armament_MissilesSelection;
    c_bool armament_RocketsSelection;
    c_bool armament_GunTrigger;
    c_bool armament_BRMTrigger;
    c_bool armament_FuelDipper;
    c_bool fuel_WingTankDropSwitch;
    c_bool fuel_FuseLageTankDropSwitch;
    c_bool fuel_ExTankDropSwitch;
    c_bool fuel_FuelDumpSwitch;
    c_bool fuel_MainLPPump;
    c_bool fuel_LPPumpRight;
    c_bool fuel_LPPumpLeft;
    c_bool fuel_CrossfeedCock;
    c_bool fuel_GaugeTest;
    c_double fuel_RPM;
    c_double fuel_FuelConsumptionRate;
};

extern c_metaObject __JSBSim_subSystemOut__load (c_base base);
extern const char * __JSBSim_subSystemOut__keys (void);
extern const char * __JSBSim_subSystemOut__name (void);
struct _JSBSim_subSystemOut ;
extern  c_bool __JSBSim_subSystemOut__copyIn(c_base base, struct JSBSim::subSystemOut *from, struct _JSBSim_subSystemOut *to);
extern  void __JSBSim_subSystemOut__copyOut(void *_from, void *_to);
struct _JSBSim_subSystemOut {
    c_long ID;
    c_bool output_BatteryBusOut;
    c_bool output_DC;
    c_bool output_Inverter;
    c_bool output_ALternator;
    c_bool output_AutoLoadSheddingAC;
    c_bool output_AlternatorWarningLight;
    c_bool output_GenernatorWarningLight;
    c_bool output_BatteryWarningLight;
    c_double output_UnderCarriageExtension;
    c_double output_WheelBrake;
    c_double output_SpeedBrake;
    c_double output_ParkingBrake;
    c_double output_OscarDashpot;
    c_double output_LeftElevonControl;
    c_double output_RightElevonControl;
    c_double output_PreservoControl;
    c_double output_PitchDamper;
    c_bool output_HydraulicIndicatorLight;
    c_bool output_Hydraulic2IndicatorLight;
    c_bool output_EmergencyHydraulicIndicator;
    c_double output_DualHydGuage1;
    c_double output_DualHydGuage2;
    c_double output_FuelTotalizer;
    c_bool output_LeftWingTankWarningLight;
    c_bool output_CenterLineTankWarningLight;
    c_bool output_InternalWingTankWarningLight;
    c_bool output_UpperBayWarningLight;
    c_bool output_RightWingTankWarningLight;
    c_bool output_LitreWarningLight600;
    c_bool output_LitreWarningLight400;
    c_double output_DFGLeft;
    c_double output_DFGRight;
    c_double output_MainFailLight;
    c_double output_WarningHorn;
    c_bool output_BombIndication;
    c_bool output_GunIndication;
    c_bool output_MissileIndication;
    c_bool output_RocketIndication;
    c_double output_RPMIncrease;
};

#endif
