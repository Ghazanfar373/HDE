#include "JSBSimSplDcps.h"
#include "ccpp_JSBSim.h"

const char *
__JSBSim_position__name(void)
{
    return (const char*)"JSBSim::position";
}

const char *
__JSBSim_position__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_accelerations__name(void)
{
    return (const char*)"JSBSim::accelerations";
}

const char *
__JSBSim_accelerations__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_atitude__name(void)
{
    return (const char*)"JSBSim::atitude";
}

const char *
__JSBSim_atitude__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_simulation__name(void)
{
    return (const char*)"JSBSim::simulation";
}

const char *
__JSBSim_simulation__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_velocities__name(void)
{
    return (const char*)"JSBSim::velocities";
}

const char *
__JSBSim_velocities__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_atmosphere__name(void)
{
    return (const char*)"JSBSim::atmosphere";
}

const char *
__JSBSim_atmosphere__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_aerosurfaces__name(void)
{
    return (const char*)"JSBSim::aerosurfaces";
}

const char *
__JSBSim_aerosurfaces__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_gears__name(void)
{
    return (const char*)"JSBSim::gears";
}

const char *
__JSBSim_gears__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_inertia__name(void)
{
    return (const char*)"JSBSim::inertia";
}

const char *
__JSBSim_inertia__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_aero__name(void)
{
    return (const char*)"JSBSim::aero";
}

const char *
__JSBSim_aero__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_aerocoefficient__name(void)
{
    return (const char*)"JSBSim::aerocoefficient";
}

const char *
__JSBSim_aerocoefficient__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_geometric__name(void)
{
    return (const char*)"JSBSim::geometric";
}

const char *
__JSBSim_geometric__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_propulsion__name(void)
{
    return (const char*)"JSBSim::propulsion";
}

const char *
__JSBSim_propulsion__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_initialConditions__name(void)
{
    return (const char*)"JSBSim::initialConditions";
}

const char *
__JSBSim_initialConditions__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_subSystems__name(void)
{
    return (const char*)"JSBSim::subSystems";
}

const char *
__JSBSim_subSystems__keys(void)
{
    return (const char*)"ID";
}

const char *
__JSBSim_subSystemOut__name(void)
{
    return (const char*)"JSBSim::subSystemOut";
}

const char *
__JSBSim_subSystemOut__keys(void)
{
    return (const char*)"ID";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>

c_bool
__JSBSim_position__copyIn(
    c_base base,
    struct ::JSBSim::position *from,
    struct _JSBSim_position *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->epa_rad = (c_double)from->epa_rad;
    to->h_sl_ft = (c_double)from->h_sl_ft;
    to->h_sl_meters = (c_double)from->h_sl_meters;
    to->lat_gc_rad = (c_double)from->lat_gc_rad;
    to->long_gc_rad = (c_double)from->long_gc_rad;
    to->lat_gc_deg = (c_double)from->lat_gc_deg;
    to->long_gc_deg = (c_double)from->long_gc_deg;
    to->lat_geod_rad = (c_double)from->lat_geod_rad;
    to->lat_geod_deg = (c_double)from->lat_geod_deg;
    to->geod_alt_ft = (c_double)from->geod_alt_ft;
    to->h_agl_ft = (c_double)from->h_agl_ft;
    to->radius_to_vehicle_ft = (c_double)from->radius_to_vehicle_ft;
    to->terrain_elevation_asl_ft = (c_double)from->terrain_elevation_asl_ft;
    to->distance_from_start_lon_mt = (c_double)from->distance_from_start_lon_mt;
    to->distance_from_start_lat_mt = (c_double)from->distance_from_start_lat_mt;
    to->distance_from_start_mag_mt = (c_double)from->distance_from_start_mag_mt;
    return result;
}

c_bool
__JSBSim_accelerations__copyIn(
    c_base base,
    struct ::JSBSim::accelerations *from,
    struct _JSBSim_accelerations *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->pdot_rad_sec2 = (c_double)from->pdot_rad_sec2;
    to->qdot_rad_sec2 = (c_double)from->qdot_rad_sec2;
    to->rdot_rad_sec2 = (c_double)from->rdot_rad_sec2;
    to->udot_ft_sec2 = (c_double)from->udot_ft_sec2;
    to->vdot_ft_sec2 = (c_double)from->vdot_ft_sec2;
    to->wdot_ft_sec2 = (c_double)from->wdot_ft_sec2;
    to->a_pilot_x_ft_sec2 = (c_double)from->a_pilot_x_ft_sec2;
    to->a_pilot_y_ft_sec2 = (c_double)from->a_pilot_y_ft_sec2;
    to->a_pilot_z_ft_sec2 = (c_double)from->a_pilot_z_ft_sec2;
    to->n_pilot_x_norm = (c_double)from->n_pilot_x_norm;
    to->n_pilot_y_norm = (c_double)from->n_pilot_y_norm;
    to->n_pilot_z_norm = (c_double)from->n_pilot_z_norm;
    to->Nz = (c_double)from->Nz;
    return result;
}

c_bool
__JSBSim_atitude__copyIn(
    c_base base,
    struct ::JSBSim::atitude *from,
    struct _JSBSim_atitude *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->phi_rad = (c_double)from->phi_rad;
    to->theta_rad = (c_double)from->theta_rad;
    to->psi_rad = (c_double)from->psi_rad;
    to->roll_rad = (c_double)from->roll_rad;
    to->pitch_rad = (c_double)from->pitch_rad;
    to->heading_true_rad = (c_double)from->heading_true_rad;
    return result;
}

c_bool
__JSBSim_simulation__copyIn(
    c_base base,
    struct ::JSBSim::simulation *from,
    struct _JSBSim_simulation *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->integrator_rate_rotational = (c_double)from->integrator_rate_rotational;
    to->integrator_rate_translational = (c_double)from->integrator_rate_translational;
    to->integrator_position_rotational = (c_double)from->integrator_position_rotational;
    to->integrator_position_translational = (c_double)from->integrator_position_translational;
    to->write_state_file = (c_double)from->write_state_file;
    to->do_simple_trim = (c_double)from->do_simple_trim;
    to->reset = (c_double)from->reset;
    to->terminate = (c_double)from->terminate;
    to->frame_start_time = (c_double)from->frame_start_time;
    to->cycle_duration = (c_double)from->cycle_duration;
    to->flight_path_gamma_rad = (c_double)from->flight_path_gamma_rad;
    to->flight_path_psi_gt_rad = (c_double)from->flight_path_psi_gt_rad;
    return result;
}

c_bool
__JSBSim_velocities__copyIn(
    c_base base,
    struct ::JSBSim::velocities *from,
    struct _JSBSim_velocities *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->h_dot_fps = (c_double)from->h_dot_fps;
    to->v_north_fps = (c_double)from->v_north_fps;
    to->v_east_fps = (c_double)from->v_east_fps;
    to->v_down_fps = (c_double)from->v_down_fps;
    to->u_fps = (c_double)from->u_fps;
    to->v_fps = (c_double)from->v_fps;
    to->w_fps = (c_double)from->w_fps;
    to->p_rad_sec = (c_double)from->p_rad_sec;
    to->q_rad_sec = (c_double)from->q_rad_sec;
    to->r_rad_sec = (c_double)from->r_rad_sec;
    to->pi_rad_sec = (c_double)from->pi_rad_sec;
    to->qi_rad_sec = (c_double)from->qi_rad_sec;
    to->ri_rad_sec = (c_double)from->ri_rad_sec;
    to->eci_velocity_mag_fps = (c_double)from->eci_velocity_mag_fps;
    to->vc_fps = (c_double)from->vc_fps;
    to->vc_kts = (c_double)from->vc_kts;
    to->ve_fps = (c_double)from->ve_fps;
    to->ve_kts = (c_double)from->ve_kts;
    to->machU = (c_double)from->machU;
    to->p_aero_rad_sec = (c_double)from->p_aero_rad_sec;
    to->q_aero_rad_sec = (c_double)from->q_aero_rad_sec;
    to->r_aero_rad_sec = (c_double)from->r_aero_rad_sec;
    to->phidot_rad_sec = (c_double)from->phidot_rad_sec;
    to->thetadot_rad_sec = (c_double)from->thetadot_rad_sec;
    to->psidot_rad_sec = (c_double)from->psidot_rad_sec;
    to->u_aero_fps = (c_double)from->u_aero_fps;
    to->v_aero_fps = (c_double)from->v_aero_fps;
    to->w_aero_fps = (c_double)from->w_aero_fps;
    to->vt_fps = (c_double)from->vt_fps;
    to->mach = (c_double)from->mach;
    to->vg_fps = (c_double)from->vg_fps;
    return result;
}

c_bool
__JSBSim_atmosphere__copyIn(
    c_base base,
    struct ::JSBSim::atmosphere *from,
    struct _JSBSim_atmosphere *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->T_R = (c_double)from->T_R;
    to->rho_slugs_ft3 = (c_double)from->rho_slugs_ft3;
    to->P_psf = (c_double)from->P_psf;
    to->a_fps = (c_double)from->a_fps;
    to->T_sl_R = (c_double)from->T_sl_R;
    to->rho_sl_slugs_ft3 = (c_double)from->rho_sl_slugs_ft3;
    to->P_sl_psf = (c_double)from->P_sl_psf;
    to->a_sl_fps = (c_double)from->a_sl_fps;
    to->theta = (c_double)from->theta;
    to->sigma = (c_double)from->sigma;
    to->delta = (c_double)from->delta;
    to->a_ratio = (c_double)from->a_ratio;
    to->psiw_rad = (c_double)from->psiw_rad;
    to->delta_T = (c_double)from->delta_T;
    to->T_sl_dev_F = (c_double)from->T_sl_dev_F;
    to->density_altitude = (c_double)from->density_altitude;
    to->wind_north_fps = (c_double)from->wind_north_fps;
    to->wind_east_fps = (c_double)from->wind_east_fps;
    to->wind_down_fps = (c_double)from->wind_down_fps;
    to->wind_mag_fps = (c_double)from->wind_mag_fps;
    to->total_wind_north_fps = (c_double)from->total_wind_north_fps;
    to->total_wind_east_fps = (c_double)from->total_wind_east_fps;
    to->total_wind_down_fps = (c_double)from->total_wind_down_fps;
    to->gust_north_fps = (c_double)from->gust_north_fps;
    to->gust_east_fps = (c_double)from->gust_east_fps;
    to->gust_down_fps = (c_double)from->gust_down_fps;
    to->p_turb_rad_sec = (c_double)from->p_turb_rad_sec;
    to->q_turb_rad_sec = (c_double)from->q_turb_rad_sec;
    to->r_turb_rad_sec = (c_double)from->r_turb_rad_sec;
    to->turb_rate = (c_double)from->turb_rate;
    to->turb_gain = (c_double)from->turb_gain;
    to->turb_rhythmicity = (c_double)from->turb_rhythmicity;
    return result;
}

c_bool
__JSBSim_aerosurfaces__copyIn(
    c_base base,
    struct ::JSBSim::aerosurfaces *from,
    struct _JSBSim_aerosurfaces *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->aileron_cmd_norm = (c_double)from->aileron_cmd_norm;
    to->elevator_cmd_norm = (c_double)from->elevator_cmd_norm;
    to->rudder_cmd_norm = (c_double)from->rudder_cmd_norm;
    to->flap_cmd_norm = (c_double)from->flap_cmd_norm;
    to->speedbrake_cmd_norm = (c_double)from->speedbrake_cmd_norm;
    to->spoiler_cmd_norm = (c_double)from->spoiler_cmd_norm;
    to->pitch_trim_cmd_norm = (c_double)from->pitch_trim_cmd_norm;
    to->roll_trim_cmd_norm = (c_double)from->roll_trim_cmd_norm;
    to->yaw_trim_cmd_norm = (c_double)from->yaw_trim_cmd_norm;
    to->left_aileron_pos_rad = (c_double)from->left_aileron_pos_rad;
    to->left_aileron_pos_deg = (c_double)from->left_aileron_pos_deg;
    to->left_aileron_pos_norm = (c_double)from->left_aileron_pos_norm;
    to->mag_left_aileron_pos_rad = (c_double)from->mag_left_aileron_pos_rad;
    to->right_aileron_pos_rad = (c_double)from->right_aileron_pos_rad;
    to->right_aileron_pos_deg = (c_double)from->right_aileron_pos_deg;
    to->right_aileron_pos_norm = (c_double)from->right_aileron_pos_norm;
    to->mag_right_aileron_pos_rad = (c_double)from->mag_right_aileron_pos_rad;
    to->elevator_pos_rad = (c_double)from->elevator_pos_rad;
    to->elevator_pos_deg = (c_double)from->elevator_pos_deg;
    to->elevator_pos_norm = (c_double)from->elevator_pos_norm;
    to->mag_elevator_pos_rad = (c_double)from->mag_elevator_pos_rad;
    to->rudder_pos_rad = (c_double)from->rudder_pos_rad;
    to->rudder_pos_deg = (c_double)from->rudder_pos_deg;
    to->rudder_pos_norm = (c_double)from->rudder_pos_norm;
    to->mag_rudder_pos_rad = (c_double)from->mag_rudder_pos_rad;
    to->flap_pos_rad = (c_double)from->flap_pos_rad;
    to->flap_pos_deg = (c_double)from->flap_pos_deg;
    to->flap_pos_norm = (c_double)from->flap_pos_norm;
    to->speedbrake_pos_rad = (c_double)from->speedbrake_pos_rad;
    to->speedbrake_pos_deg = (c_double)from->speedbrake_pos_deg;
    to->speedbrake_pos_norm = (c_double)from->speedbrake_pos_norm;
    to->mag_speedbrake_pos_rad = (c_double)from->mag_speedbrake_pos_rad;
    to->spoiler_pos_rad = (c_double)from->spoiler_pos_rad;
    to->spoiler_pos_deg = (c_double)from->spoiler_pos_deg;
    to->spoiler_pos_norm = (c_double)from->spoiler_pos_norm;
    to->mag_spoiler_pos_rad = (c_double)from->mag_spoiler_pos_rad;
    to->left_brake_cmd_norm = (c_double)from->left_brake_cmd_norm;
    to->right_brake_cmd_norm = (c_double)from->right_brake_cmd_norm;
    to->center_brake_cmd_norm = (c_double)from->center_brake_cmd_norm;
    to->steer_cmd_norm = (c_double)from->steer_cmd_norm;
    to->wing_fold_pos_norm = (c_double)from->wing_fold_pos_norm;
    to->throttle_cmd_norm = (c_double)from->throttle_cmd_norm;
    to->throttle_pos_norm = (c_double)from->throttle_pos_norm;
    to->mixture_cmd_norm = (c_double)from->mixture_cmd_norm;
    to->mixture_pos_norm = (c_double)from->mixture_pos_norm;
    to->advance_cmd_norm = (c_double)from->advance_cmd_norm;
    to->advance_pos_norm = (c_double)from->advance_pos_norm;
    to->feather_cmd_norm = (c_double)from->feather_cmd_norm;
    to->feather_pos_norm = (c_double)from->feather_pos_norm;
    to->steer_pos_deg = (c_double)from->steer_pos_deg;
    to->alpha_norm = (c_double)from->alpha_norm;
    to->elevator_cmd_limiter = (c_double)from->elevator_cmd_limiter;
    to->g_load_norm = (c_double)from->g_load_norm;
    to->alpha_limiter = (c_double)from->alpha_limiter;
    to->g_load_error = (c_double)from->g_load_error;
    to->g_load_p = (c_double)from->g_load_p;
    to->g_load_i = (c_double)from->g_load_i;
    to->g_load_d = (c_double)from->g_load_d;
    to->g_load_command = (c_double)from->g_load_command;
    to->elevator_control = (c_double)from->elevator_control;
    to->roll_rate_norm = (c_double)from->roll_rate_norm;
    to->roll_trim_error = (c_double)from->roll_trim_error;
    to->roll_rate_p = (c_double)from->roll_rate_p;
    to->roll_rate_i = (c_double)from->roll_rate_i;
    to->roll_rate_d = (c_double)from->roll_rate_d;
    to->roll_rate_command = (c_double)from->roll_rate_command;
    to->left_aileron_control = (c_double)from->left_aileron_control;
    to->right_aileron_control = (c_double)from->right_aileron_control;
    to->yaw_rate_norm = (c_double)from->yaw_rate_norm;
    to->yaw_trim_error = (c_double)from->yaw_trim_error;
    to->yaw_rate_p = (c_double)from->yaw_rate_p;
    to->yaw_rate_i = (c_double)from->yaw_rate_i;
    to->yaw_rate_d = (c_double)from->yaw_rate_d;
    to->yaw_command = (c_double)from->yaw_command;
    to->rudder_control = (c_double)from->rudder_control;
    to->alpha_norm_gain = (c_double)from->alpha_norm_gain;
    to->lef_pos_deg = (c_double)from->lef_pos_deg;
    to->lef_pos_norm = (c_double)from->lef_pos_norm;
    to->throttle1 = (c_double)from->throttle1;
    to->flap_command = (c_double)from->flap_command;
    to->flaps_control = (c_double)from->flaps_control;
    to->flap_position_normalizer = (c_double)from->flap_position_normalizer;
    to->speedbrake_control = (c_double)from->speedbrake_control;
    to->gear_control = (c_double)from->gear_control;
    to->scheduled_steer_pos_deg = (c_double)from->scheduled_steer_pos_deg;
    return result;
}

c_bool
__JSBSim_gears__copyIn(
    c_base base,
    struct ::JSBSim::gears *from,
    struct _JSBSim_gears *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->gear_pos_norm = (c_double)from->gear_pos_norm;
    to->gear_cmd_norm = (c_double)from->gear_cmd_norm;
    to->tailhook_pos_norm = (c_double)from->tailhook_pos_norm;
    to->num_units = (c_double)from->num_units;
    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->slip_angle_deg;
        memcpy (dest, from->slip_angle_deg, sizeof (*dest));
    }
    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->WOW;
        memcpy (dest, from->WOW, sizeof (*dest));
    }
    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->wheel_speed_fps;
        memcpy (dest, from->wheel_speed_fps, sizeof (*dest));
    }
    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->z_position;
        memcpy (dest, from->z_position, sizeof (*dest));
    }
    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->compression_ft;
        memcpy (dest, from->compression_ft, sizeof (*dest));
    }
    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->side_friction_coeff;
        memcpy (dest, from->side_friction_coeff, sizeof (*dest));
    }
    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->pos_norm;
        memcpy (dest, from->pos_norm, sizeof (*dest));
    }
    return result;
}

c_bool
__JSBSim_inertia__copyIn(
    c_base base,
    struct ::JSBSim::inertia *from,
    struct _JSBSim_inertia *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->mass_slugs = (c_double)from->mass_slugs;
    to->weight_lbs = (c_double)from->weight_lbs;
    to->empty_weight_lbs = (c_double)from->empty_weight_lbs;
    to->cg_x_in = (c_double)from->cg_x_in;
    to->cg_y_in = (c_double)from->cg_y_in;
    to->cg_z_in = (c_double)from->cg_z_in;
    to->pointmass_weight_lbs = (c_double)from->pointmass_weight_lbs;
    to->pointmass_location_X_inches = (c_double)from->pointmass_location_X_inches;
    to->pointmass_location_Y_inches = (c_double)from->pointmass_location_Y_inches;
    to->pointmass_location_Z_inches = (c_double)from->pointmass_location_Z_inches;
    to->bx_aero_lbs = (c_double)from->bx_aero_lbs;
    to->by_aero_lbs = (c_double)from->by_aero_lbs;
    to->bz_aero_lbs = (c_double)from->bz_aero_lbs;
    to->wx_aero_lbs = (c_double)from->wx_aero_lbs;
    to->wy_aero_lbs = (c_double)from->wy_aero_lbs;
    to->wz_aero_lbs = (c_double)from->wz_aero_lbs;
    to->od_norm = (c_double)from->od_norm;
    to->bx_gear_lbs = (c_double)from->bx_gear_lbs;
    to->by_gear_lbs = (c_double)from->by_gear_lbs;
    to->bz_gear_lbs = (c_double)from->bz_gear_lbs;
    to->bx_total_lbs = (c_double)from->bx_total_lbs;
    to->by_total_lbs = (c_double)from->by_total_lbs;
    to->bz_total_lbs = (c_double)from->bz_total_lbs;
    to->oad_factor = (c_double)from->oad_factor;
    to->old_down = (c_double)from->old_down;
    to->bx_prop_lbs = (c_double)from->bx_prop_lbs;
    to->by_prop_lbs = (c_double)from->by_prop_lbs;
    to->bz_prop_lbs = (c_double)from->bz_prop_lbs;
    to->l_aero_lbsft = (c_double)from->l_aero_lbsft;
    to->m_aero_lbsft = (c_double)from->m_aero_lbsft;
    to->n_aero_lbsft = (c_double)from->n_aero_lbsft;
    to->l_gear_lbsft = (c_double)from->l_gear_lbsft;
    to->m_gear_lbsft = (c_double)from->m_gear_lbsft;
    to->n_gear_lbsft = (c_double)from->n_gear_lbsft;
    to->l_total_lbsft = (c_double)from->l_total_lbsft;
    to->m_total_lbsft = (c_double)from->m_total_lbsft;
    to->n_total_lbsft = (c_double)from->n_total_lbsft;
    to->l_prop_lbsft = (c_double)from->l_prop_lbsft;
    to->m_prop_lbsft = (c_double)from->m_prop_lbsft;
    to->n_prop_lbsft = (c_double)from->n_prop_lbsft;
    return result;
}

c_bool
__JSBSim_aero__copyIn(
    c_base base,
    struct ::JSBSim::aero *from,
    struct _JSBSim_aero *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->cl_squared = (c_double)from->cl_squared;
    to->qbar_area = (c_double)from->qbar_area;
    to->alpha_max_rad = (c_double)from->alpha_max_rad;
    to->alpha_min_rad = (c_double)from->alpha_min_rad;
    to->bi2vel = (c_double)from->bi2vel;
    to->ci2vel = (c_double)from->ci2vel;
    to->alpha_wing_rad = (c_double)from->alpha_wing_rad;
    to->stall_hyst_norm = (c_double)from->stall_hyst_norm;
    to->alpha_rad = (c_double)from->alpha_rad;
    to->beta_rad = (c_double)from->beta_rad;
    to->mag_beta_rad = (c_double)from->mag_beta_rad;
    to->alpha_deg = (c_double)from->alpha_deg;
    to->beta_deg = (c_double)from->beta_deg;
    to->mag_beta_deg = (c_double)from->mag_beta_deg;
    to->Re = (c_double)from->Re;
    to->qbar_psf = (c_double)from->qbar_psf;
    to->qbarUW_psf = (c_double)from->qbarUW_psf;
    to->qbarUV_psf = (c_double)from->qbarUV_psf;
    to->alphadot_rad_sec = (c_double)from->alphadot_rad_sec;
    to->betadot_rad_sec = (c_double)from->betadot_rad_sec;
    to->alphadot_deg_sec = (c_double)from->alphadot_deg_sec;
    to->betadot_deg_sec = (c_double)from->betadot_deg_sec;
    to->h_b_cg_ft = (c_double)from->h_b_cg_ft;
    to->h_b_mac_ft = (c_double)from->h_b_mac_ft;
    to->kCLge = (c_double)from->kCLge;
    to->stall_warn_norm = (c_double)from->stall_warn_norm;
    return result;
}

c_bool
__JSBSim_aerocoefficient__copyIn(
    c_base base,
    struct ::JSBSim::aerocoefficient *from,
    struct _JSBSim_aerocoefficient *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->CDDh = (c_double)from->CDDh;
    to->CDmach = (c_double)from->CDmach;
    to->CDDlef = (c_double)from->CDDlef;
    to->CDDflaps = (c_double)from->CDDflaps;
    to->CDgear = (c_double)from->CDgear;
    to->CDDsb = (c_double)from->CDDsb;
    to->CDq = (c_double)from->CDq;
    to->CDq_Dlef = (c_double)from->CDq_Dlef;
    to->CYb = (c_double)from->CYb;
    to->CYb_M = (c_double)from->CYb_M;
    to->CYDa = (c_double)from->CYDa;
    to->CYdr = (c_double)from->CYdr;
    to->CYp = (c_double)from->CYp;
    to->CYr = (c_double)from->CYr;
    to->CLDh = (c_double)from->CLDh;
    to->CLDlef = (c_double)from->CLDlef;
    to->CLDflaps = (c_double)from->CLDflaps;
    to->CLDsb = (c_double)from->CLDsb;
    to->CLq = (c_double)from->CLq;
    to->CLq_Dsb = (c_double)from->CLq_Dsb;
    to->Clb = (c_double)from->Clb;
    to->Clb_M = (c_double)from->Clb_M;
    to->Clp = (c_double)from->Clp;
    to->Clr = (c_double)from->Clr;
    to->Clda = (c_double)from->Clda;
    to->Clda_M = (c_double)from->Clda_M;
    to->Cldr_M = (c_double)from->Cldr_M;
    to->Cldr = (c_double)from->Cldr;
    to->CmDh = (c_double)from->CmDh;
    to->Cma_M = (c_double)from->Cma_M;
    to->Cmq = (c_double)from->Cmq;
    to->Cnb = (c_double)from->Cnb;
    to->Cnb_M = (c_double)from->Cnb_M;
    to->Cnp = (c_double)from->Cnp;
    to->Cnr = (c_double)from->Cnr;
    to->Cnda_M = (c_double)from->Cnda_M;
    to->Cnda = (c_double)from->Cnda;
    to->Cndr = (c_double)from->Cndr;
    to->Cndr_M = (c_double)from->Cndr_M;
    return result;
}

c_bool
__JSBSim_geometric__copyIn(
    c_base base,
    struct ::JSBSim::geometric *from,
    struct _JSBSim_geometric *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->Sw_sqft = (c_double)from->Sw_sqft;
    to->bw_ft = (c_double)from->bw_ft;
    to->cbarw_ft = (c_double)from->cbarw_ft;
    to->iw_rad = (c_double)from->iw_rad;
    to->iw_deg = (c_double)from->iw_deg;
    to->Sh_sqft = (c_double)from->Sh_sqft;
    to->lh_ft = (c_double)from->lh_ft;
    to->Sv_sqft = (c_double)from->Sv_sqft;
    to->lv_ft = (c_double)from->lv_ft;
    to->lh_norm = (c_double)from->lh_norm;
    to->lv_norm = (c_double)from->lv_norm;
    to->vbarh_norm = (c_double)from->vbarh_norm;
    to->vbarv_norm = (c_double)from->vbarv_norm;
    to->aero_rp_x_in = (c_double)from->aero_rp_x_in;
    to->aero_rp_y_in = (c_double)from->aero_rp_y_in;
    to->aero_rp_z_in = (c_double)from->aero_rp_z_in;
    to->eyepoint_x_in = (c_double)from->eyepoint_x_in;
    to->eyepoint_y_in = (c_double)from->eyepoint_y_in;
    to->eyepoint_z_in = (c_double)from->eyepoint_z_in;
    to->visualrefpoint_x_in = (c_double)from->visualrefpoint_x_in;
    to->visualrefpoint_y_in = (c_double)from->visualrefpoint_y_in;
    to->visualrefpoint_z_in = (c_double)from->visualrefpoint_z_in;
    to->terrain_radius = (c_double)from->terrain_radius;
    return result;
}

c_bool
__JSBSim_propulsion__copyIn(
    c_base base,
    struct ::JSBSim::propulsion *from,
    struct _JSBSim_propulsion *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->tat_r = (c_double)from->tat_r;
    to->tat_c = (c_double)from->tat_c;
    to->pt_lbs_sqft = (c_double)from->pt_lbs_sqft;
    to->set_running = (c_double)from->set_running;
    to->starter_cmd = (c_double)from->starter_cmd;
    to->cutoff_cmd = (c_double)from->cutoff_cmd;
    to->active_engine = (c_double)from->active_engine;
    to->total_fuel_lbs = (c_double)from->total_fuel_lbs;
    to->refuel = (c_double)from->refuel;
    to->fuel_dump = (c_double)from->fuel_dump;
    to->pitch_angle_rad = (c_double)from->pitch_angle_rad;
    to->yaw_angle_rad = (c_double)from->yaw_angle_rad;
    to->reverser_angle_rad = (c_double)from->reverser_angle_rad;
    to->thrust_lbs = (c_double)from->thrust_lbs;
    to->fuel_flow_rate_pps = (c_double)from->fuel_flow_rate_pps;
    to->IdleThrust = (c_double)from->IdleThrust;
    to->MilThrust = (c_double)from->MilThrust;
    to->AugThrust = (c_double)from->AugThrust;
    to->WindMilRPM = (c_double)from->WindMilRPM;
    to->n1 = (c_double)from->n1;
    to->n2 = (c_double)from->n2;
    to->injection_cmd = (c_double)from->injection_cmd;
    to->phase = (c_double)from->phase;
    to->RPM = (c_double)from->RPM;
    to->EmergencyThrottlePosition = (c_double)from->EmergencyThrottlePosition;
    to->EmergencyNozzleSwitch = (c_double)from->EmergencyNozzleSwitch;
    to->FuelDipperSwitch = (c_double)from->FuelDipperSwitch;
    to->AugmentationSwitch = (c_double)from->AugmentationSwitch;
    to->EGT_degC = (c_double)from->EGT_degC;
    to->RelightSwitch = (c_double)from->RelightSwitch;
    to->AugmentationLight = (c_double)from->AugmentationLight;
    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->tank_contents_lbs;
        memcpy (dest, from->tank_contents_lbs, sizeof (*dest));
    }
    return result;
}

c_bool
__JSBSim_initialConditions__copyIn(
    c_base base,
    struct ::JSBSim::initialConditions *from,
    struct _JSBSim_initialConditions *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->vc_kts = (c_double)from->vc_kts;
    to->ve_kts = (c_double)from->ve_kts;
    to->vg_kts = (c_double)from->vg_kts;
    to->vt_kts = (c_double)from->vt_kts;
    to->mach = (c_double)from->mach;
    to->roc_fpm = (c_double)from->roc_fpm;
    to->gamma_deg = (c_double)from->gamma_deg;
    to->alpha_deg = (c_double)from->alpha_deg;
    to->beta_deg = (c_double)from->beta_deg;
    to->theta_deg = (c_double)from->theta_deg;
    to->phi_deg = (c_double)from->phi_deg;
    to->psi_true_deg = (c_double)from->psi_true_deg;
    to->lat_gc_deg = (c_double)from->lat_gc_deg;
    to->long_gc_deg = (c_double)from->long_gc_deg;
    to->h_sl_ft = (c_double)from->h_sl_ft;
    to->h_agl_ft = (c_double)from->h_agl_ft;
    to->sea_level_radius_ft = (c_double)from->sea_level_radius_ft;
    to->terrain_elevation_ft = (c_double)from->terrain_elevation_ft;
    to->vg_fps = (c_double)from->vg_fps;
    to->vt_fps = (c_double)from->vt_fps;
    to->vw_bx_fps = (c_double)from->vw_bx_fps;
    to->vw_by_fps = (c_double)from->vw_by_fps;
    to->vw_bz_fps = (c_double)from->vw_bz_fps;
    to->vw_north_fps = (c_double)from->vw_north_fps;
    to->vw_east_fps = (c_double)from->vw_east_fps;
    to->vw_down_fps = (c_double)from->vw_down_fps;
    to->vw_mag_fps = (c_double)from->vw_mag_fps;
    to->vw_dir_deg = (c_double)from->vw_dir_deg;
    to->roc_fps = (c_double)from->roc_fps;
    to->u_fps = (c_double)from->u_fps;
    to->v_fps = (c_double)from->v_fps;
    to->w_fps = (c_double)from->w_fps;
    to->vn_fps = (c_double)from->vn_fps;
    to->ve_fps = (c_double)from->ve_fps;
    to->vd_fps = (c_double)from->vd_fps;
    to->gamma_rad = (c_double)from->gamma_rad;
    to->alpha_rad = (c_double)from->alpha_rad;
    to->theta_rad = (c_double)from->theta_rad;
    to->beta_rad = (c_double)from->beta_rad;
    to->phi_rad = (c_double)from->phi_rad;
    to->psi_true_rad = (c_double)from->psi_true_rad;
    to->lat_gc_rad = (c_double)from->lat_gc_rad;
    to->long_gc_rad = (c_double)from->long_gc_rad;
    to->p_rad_sec = (c_double)from->p_rad_sec;
    to->q_rad_sec = (c_double)from->q_rad_sec;
    to->r_rad_sec = (c_double)from->r_rad_sec;
    to->CDdHT = (c_double)from->CDdHT;
    return result;
}

c_bool
__JSBSim_subSystems__copyIn(
    c_base base,
    struct ::JSBSim::subSystems *from,
    struct _JSBSim_subSystems *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->electrical_GPU = (c_bool)from->electrical_GPU;
    to->electrical_BatteryBus = (c_bool)from->electrical_BatteryBus;
    to->electrical_BatterySwitch = (c_bool)from->electrical_BatterySwitch;
    to->electrical_ManualLoadShed = (c_bool)from->electrical_ManualLoadShed;
    to->electrical_GeneratorSwitch = (c_bool)from->electrical_GeneratorSwitch;
    to->electrical_InverterSwitch = (c_bool)from->electrical_InverterSwitch;
    to->electrical_AlternatorSwitch = (c_bool)from->electrical_AlternatorSwitch;
    to->electrical_MainFailLightSwitch = (c_double)from->electrical_MainFailLightSwitch;
    to->electrical_EmergencyParkingBrakeSwitch = (c_bool)from->electrical_EmergencyParkingBrakeSwitch;
    to->hydraulic_HydraulicPumpPressure = (c_double)from->hydraulic_HydraulicPumpPressure;
    to->hydraulic_ServoAccumulator = (c_bool)from->hydraulic_ServoAccumulator;
    to->hydraulic_EmergencyHydPumpSwitch = (c_bool)from->hydraulic_EmergencyHydPumpSwitch;
    to->hydraulic_EmergencyPump = (c_bool)from->hydraulic_EmergencyPump;
    to->hydraulic_Hydraulic2PumpPressure = (c_double)from->hydraulic_Hydraulic2PumpPressure;
    to->hydraulic_PreservoHyd2 = (c_bool)from->hydraulic_PreservoHyd2;
    to->hydraulic_HydraulicResservoir = (c_double)from->hydraulic_HydraulicResservoir;
    to->armament_MasterArmamentSwitch = (c_bool)from->armament_MasterArmamentSwitch;
    to->armament_NormalManual = (c_bool)from->armament_NormalManual;
    to->armament_BombsSelection = (c_bool)from->armament_BombsSelection;
    to->armament_GunsSelection = (c_bool)from->armament_GunsSelection;
    to->armament_MissilesSelection = (c_bool)from->armament_MissilesSelection;
    to->armament_RocketsSelection = (c_bool)from->armament_RocketsSelection;
    to->armament_GunTrigger = (c_bool)from->armament_GunTrigger;
    to->armament_BRMTrigger = (c_bool)from->armament_BRMTrigger;
    to->armament_FuelDipper = (c_bool)from->armament_FuelDipper;
    to->fuel_WingTankDropSwitch = (c_bool)from->fuel_WingTankDropSwitch;
    to->fuel_FuseLageTankDropSwitch = (c_bool)from->fuel_FuseLageTankDropSwitch;
    to->fuel_ExTankDropSwitch = (c_bool)from->fuel_ExTankDropSwitch;
    to->fuel_FuelDumpSwitch = (c_bool)from->fuel_FuelDumpSwitch;
    to->fuel_MainLPPump = (c_bool)from->fuel_MainLPPump;
    to->fuel_LPPumpRight = (c_bool)from->fuel_LPPumpRight;
    to->fuel_LPPumpLeft = (c_bool)from->fuel_LPPumpLeft;
    to->fuel_CrossfeedCock = (c_bool)from->fuel_CrossfeedCock;
    to->fuel_GaugeTest = (c_bool)from->fuel_GaugeTest;
    to->fuel_RPM = (c_double)from->fuel_RPM;
    to->fuel_FuelConsumptionRate = (c_double)from->fuel_FuelConsumptionRate;
    return result;
}

c_bool
__JSBSim_subSystemOut__copyIn(
    c_base base,
    struct ::JSBSim::subSystemOut *from,
    struct _JSBSim_subSystemOut *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->output_BatteryBusOut = (c_bool)from->output_BatteryBusOut;
    to->output_DC = (c_bool)from->output_DC;
    to->output_Inverter = (c_bool)from->output_Inverter;
    to->output_ALternator = (c_bool)from->output_ALternator;
    to->output_AutoLoadSheddingAC = (c_bool)from->output_AutoLoadSheddingAC;
    to->output_AlternatorWarningLight = (c_bool)from->output_AlternatorWarningLight;
    to->output_GenernatorWarningLight = (c_bool)from->output_GenernatorWarningLight;
    to->output_BatteryWarningLight = (c_bool)from->output_BatteryWarningLight;
    to->output_UnderCarriageExtension = (c_double)from->output_UnderCarriageExtension;
    to->output_WheelBrake = (c_double)from->output_WheelBrake;
    to->output_SpeedBrake = (c_double)from->output_SpeedBrake;
    to->output_ParkingBrake = (c_double)from->output_ParkingBrake;
    to->output_OscarDashpot = (c_double)from->output_OscarDashpot;
    to->output_LeftElevonControl = (c_double)from->output_LeftElevonControl;
    to->output_RightElevonControl = (c_double)from->output_RightElevonControl;
    to->output_PreservoControl = (c_double)from->output_PreservoControl;
    to->output_PitchDamper = (c_double)from->output_PitchDamper;
    to->output_HydraulicIndicatorLight = (c_bool)from->output_HydraulicIndicatorLight;
    to->output_Hydraulic2IndicatorLight = (c_bool)from->output_Hydraulic2IndicatorLight;
    to->output_EmergencyHydraulicIndicator = (c_bool)from->output_EmergencyHydraulicIndicator;
    to->output_DualHydGuage1 = (c_double)from->output_DualHydGuage1;
    to->output_DualHydGuage2 = (c_double)from->output_DualHydGuage2;
    to->output_FuelTotalizer = (c_double)from->output_FuelTotalizer;
    to->output_LeftWingTankWarningLight = (c_bool)from->output_LeftWingTankWarningLight;
    to->output_CenterLineTankWarningLight = (c_bool)from->output_CenterLineTankWarningLight;
    to->output_InternalWingTankWarningLight = (c_bool)from->output_InternalWingTankWarningLight;
    to->output_UpperBayWarningLight = (c_bool)from->output_UpperBayWarningLight;
    to->output_RightWingTankWarningLight = (c_bool)from->output_RightWingTankWarningLight;
    to->output_LitreWarningLight600 = (c_bool)from->output_LitreWarningLight600;
    to->output_LitreWarningLight400 = (c_bool)from->output_LitreWarningLight400;
    to->output_DFGLeft = (c_double)from->output_DFGLeft;
    to->output_DFGRight = (c_double)from->output_DFGRight;
    to->output_MainFailLight = (c_double)from->output_MainFailLight;
    to->output_WarningHorn = (c_double)from->output_WarningHorn;
    to->output_BombIndication = (c_bool)from->output_BombIndication;
    to->output_GunIndication = (c_bool)from->output_GunIndication;
    to->output_MissileIndication = (c_bool)from->output_MissileIndication;
    to->output_RocketIndication = (c_bool)from->output_RocketIndication;
    to->output_RPMIncrease = (c_double)from->output_RPMIncrease;
    return result;
}

void
__JSBSim_position__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_position *from = (struct _JSBSim_position *)_from;
    struct ::JSBSim::position *to = (struct ::JSBSim::position *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->epa_rad = (::DDS::Double)from->epa_rad;
    to->h_sl_ft = (::DDS::Double)from->h_sl_ft;
    to->h_sl_meters = (::DDS::Double)from->h_sl_meters;
    to->lat_gc_rad = (::DDS::Double)from->lat_gc_rad;
    to->long_gc_rad = (::DDS::Double)from->long_gc_rad;
    to->lat_gc_deg = (::DDS::Double)from->lat_gc_deg;
    to->long_gc_deg = (::DDS::Double)from->long_gc_deg;
    to->lat_geod_rad = (::DDS::Double)from->lat_geod_rad;
    to->lat_geod_deg = (::DDS::Double)from->lat_geod_deg;
    to->geod_alt_ft = (::DDS::Double)from->geod_alt_ft;
    to->h_agl_ft = (::DDS::Double)from->h_agl_ft;
    to->radius_to_vehicle_ft = (::DDS::Double)from->radius_to_vehicle_ft;
    to->terrain_elevation_asl_ft = (::DDS::Double)from->terrain_elevation_asl_ft;
    to->distance_from_start_lon_mt = (::DDS::Double)from->distance_from_start_lon_mt;
    to->distance_from_start_lat_mt = (::DDS::Double)from->distance_from_start_lat_mt;
    to->distance_from_start_mag_mt = (::DDS::Double)from->distance_from_start_mag_mt;
}

void
__JSBSim_accelerations__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_accelerations *from = (struct _JSBSim_accelerations *)_from;
    struct ::JSBSim::accelerations *to = (struct ::JSBSim::accelerations *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->pdot_rad_sec2 = (::DDS::Double)from->pdot_rad_sec2;
    to->qdot_rad_sec2 = (::DDS::Double)from->qdot_rad_sec2;
    to->rdot_rad_sec2 = (::DDS::Double)from->rdot_rad_sec2;
    to->udot_ft_sec2 = (::DDS::Double)from->udot_ft_sec2;
    to->vdot_ft_sec2 = (::DDS::Double)from->vdot_ft_sec2;
    to->wdot_ft_sec2 = (::DDS::Double)from->wdot_ft_sec2;
    to->a_pilot_x_ft_sec2 = (::DDS::Double)from->a_pilot_x_ft_sec2;
    to->a_pilot_y_ft_sec2 = (::DDS::Double)from->a_pilot_y_ft_sec2;
    to->a_pilot_z_ft_sec2 = (::DDS::Double)from->a_pilot_z_ft_sec2;
    to->n_pilot_x_norm = (::DDS::Double)from->n_pilot_x_norm;
    to->n_pilot_y_norm = (::DDS::Double)from->n_pilot_y_norm;
    to->n_pilot_z_norm = (::DDS::Double)from->n_pilot_z_norm;
    to->Nz = (::DDS::Double)from->Nz;
}

void
__JSBSim_atitude__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_atitude *from = (struct _JSBSim_atitude *)_from;
    struct ::JSBSim::atitude *to = (struct ::JSBSim::atitude *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->phi_rad = (::DDS::Double)from->phi_rad;
    to->theta_rad = (::DDS::Double)from->theta_rad;
    to->psi_rad = (::DDS::Double)from->psi_rad;
    to->roll_rad = (::DDS::Double)from->roll_rad;
    to->pitch_rad = (::DDS::Double)from->pitch_rad;
    to->heading_true_rad = (::DDS::Double)from->heading_true_rad;
}

void
__JSBSim_simulation__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_simulation *from = (struct _JSBSim_simulation *)_from;
    struct ::JSBSim::simulation *to = (struct ::JSBSim::simulation *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->integrator_rate_rotational = (::DDS::Double)from->integrator_rate_rotational;
    to->integrator_rate_translational = (::DDS::Double)from->integrator_rate_translational;
    to->integrator_position_rotational = (::DDS::Double)from->integrator_position_rotational;
    to->integrator_position_translational = (::DDS::Double)from->integrator_position_translational;
    to->write_state_file = (::DDS::Double)from->write_state_file;
    to->do_simple_trim = (::DDS::Double)from->do_simple_trim;
    to->reset = (::DDS::Double)from->reset;
    to->terminate = (::DDS::Double)from->terminate;
    to->frame_start_time = (::DDS::Double)from->frame_start_time;
    to->cycle_duration = (::DDS::Double)from->cycle_duration;
    to->flight_path_gamma_rad = (::DDS::Double)from->flight_path_gamma_rad;
    to->flight_path_psi_gt_rad = (::DDS::Double)from->flight_path_psi_gt_rad;
}

void
__JSBSim_velocities__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_velocities *from = (struct _JSBSim_velocities *)_from;
    struct ::JSBSim::velocities *to = (struct ::JSBSim::velocities *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->h_dot_fps = (::DDS::Double)from->h_dot_fps;
    to->v_north_fps = (::DDS::Double)from->v_north_fps;
    to->v_east_fps = (::DDS::Double)from->v_east_fps;
    to->v_down_fps = (::DDS::Double)from->v_down_fps;
    to->u_fps = (::DDS::Double)from->u_fps;
    to->v_fps = (::DDS::Double)from->v_fps;
    to->w_fps = (::DDS::Double)from->w_fps;
    to->p_rad_sec = (::DDS::Double)from->p_rad_sec;
    to->q_rad_sec = (::DDS::Double)from->q_rad_sec;
    to->r_rad_sec = (::DDS::Double)from->r_rad_sec;
    to->pi_rad_sec = (::DDS::Double)from->pi_rad_sec;
    to->qi_rad_sec = (::DDS::Double)from->qi_rad_sec;
    to->ri_rad_sec = (::DDS::Double)from->ri_rad_sec;
    to->eci_velocity_mag_fps = (::DDS::Double)from->eci_velocity_mag_fps;
    to->vc_fps = (::DDS::Double)from->vc_fps;
    to->vc_kts = (::DDS::Double)from->vc_kts;
    to->ve_fps = (::DDS::Double)from->ve_fps;
    to->ve_kts = (::DDS::Double)from->ve_kts;
    to->machU = (::DDS::Double)from->machU;
    to->p_aero_rad_sec = (::DDS::Double)from->p_aero_rad_sec;
    to->q_aero_rad_sec = (::DDS::Double)from->q_aero_rad_sec;
    to->r_aero_rad_sec = (::DDS::Double)from->r_aero_rad_sec;
    to->phidot_rad_sec = (::DDS::Double)from->phidot_rad_sec;
    to->thetadot_rad_sec = (::DDS::Double)from->thetadot_rad_sec;
    to->psidot_rad_sec = (::DDS::Double)from->psidot_rad_sec;
    to->u_aero_fps = (::DDS::Double)from->u_aero_fps;
    to->v_aero_fps = (::DDS::Double)from->v_aero_fps;
    to->w_aero_fps = (::DDS::Double)from->w_aero_fps;
    to->vt_fps = (::DDS::Double)from->vt_fps;
    to->mach = (::DDS::Double)from->mach;
    to->vg_fps = (::DDS::Double)from->vg_fps;
}

void
__JSBSim_atmosphere__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_atmosphere *from = (struct _JSBSim_atmosphere *)_from;
    struct ::JSBSim::atmosphere *to = (struct ::JSBSim::atmosphere *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->T_R = (::DDS::Double)from->T_R;
    to->rho_slugs_ft3 = (::DDS::Double)from->rho_slugs_ft3;
    to->P_psf = (::DDS::Double)from->P_psf;
    to->a_fps = (::DDS::Double)from->a_fps;
    to->T_sl_R = (::DDS::Double)from->T_sl_R;
    to->rho_sl_slugs_ft3 = (::DDS::Double)from->rho_sl_slugs_ft3;
    to->P_sl_psf = (::DDS::Double)from->P_sl_psf;
    to->a_sl_fps = (::DDS::Double)from->a_sl_fps;
    to->theta = (::DDS::Double)from->theta;
    to->sigma = (::DDS::Double)from->sigma;
    to->delta = (::DDS::Double)from->delta;
    to->a_ratio = (::DDS::Double)from->a_ratio;
    to->psiw_rad = (::DDS::Double)from->psiw_rad;
    to->delta_T = (::DDS::Double)from->delta_T;
    to->T_sl_dev_F = (::DDS::Double)from->T_sl_dev_F;
    to->density_altitude = (::DDS::Double)from->density_altitude;
    to->wind_north_fps = (::DDS::Double)from->wind_north_fps;
    to->wind_east_fps = (::DDS::Double)from->wind_east_fps;
    to->wind_down_fps = (::DDS::Double)from->wind_down_fps;
    to->wind_mag_fps = (::DDS::Double)from->wind_mag_fps;
    to->total_wind_north_fps = (::DDS::Double)from->total_wind_north_fps;
    to->total_wind_east_fps = (::DDS::Double)from->total_wind_east_fps;
    to->total_wind_down_fps = (::DDS::Double)from->total_wind_down_fps;
    to->gust_north_fps = (::DDS::Double)from->gust_north_fps;
    to->gust_east_fps = (::DDS::Double)from->gust_east_fps;
    to->gust_down_fps = (::DDS::Double)from->gust_down_fps;
    to->p_turb_rad_sec = (::DDS::Double)from->p_turb_rad_sec;
    to->q_turb_rad_sec = (::DDS::Double)from->q_turb_rad_sec;
    to->r_turb_rad_sec = (::DDS::Double)from->r_turb_rad_sec;
    to->turb_rate = (::DDS::Double)from->turb_rate;
    to->turb_gain = (::DDS::Double)from->turb_gain;
    to->turb_rhythmicity = (::DDS::Double)from->turb_rhythmicity;
}

void
__JSBSim_aerosurfaces__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_aerosurfaces *from = (struct _JSBSim_aerosurfaces *)_from;
    struct ::JSBSim::aerosurfaces *to = (struct ::JSBSim::aerosurfaces *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->aileron_cmd_norm = (::DDS::Double)from->aileron_cmd_norm;
    to->elevator_cmd_norm = (::DDS::Double)from->elevator_cmd_norm;
    to->rudder_cmd_norm = (::DDS::Double)from->rudder_cmd_norm;
    to->flap_cmd_norm = (::DDS::Double)from->flap_cmd_norm;
    to->speedbrake_cmd_norm = (::DDS::Double)from->speedbrake_cmd_norm;
    to->spoiler_cmd_norm = (::DDS::Double)from->spoiler_cmd_norm;
    to->pitch_trim_cmd_norm = (::DDS::Double)from->pitch_trim_cmd_norm;
    to->roll_trim_cmd_norm = (::DDS::Double)from->roll_trim_cmd_norm;
    to->yaw_trim_cmd_norm = (::DDS::Double)from->yaw_trim_cmd_norm;
    to->left_aileron_pos_rad = (::DDS::Double)from->left_aileron_pos_rad;
    to->left_aileron_pos_deg = (::DDS::Double)from->left_aileron_pos_deg;
    to->left_aileron_pos_norm = (::DDS::Double)from->left_aileron_pos_norm;
    to->mag_left_aileron_pos_rad = (::DDS::Double)from->mag_left_aileron_pos_rad;
    to->right_aileron_pos_rad = (::DDS::Double)from->right_aileron_pos_rad;
    to->right_aileron_pos_deg = (::DDS::Double)from->right_aileron_pos_deg;
    to->right_aileron_pos_norm = (::DDS::Double)from->right_aileron_pos_norm;
    to->mag_right_aileron_pos_rad = (::DDS::Double)from->mag_right_aileron_pos_rad;
    to->elevator_pos_rad = (::DDS::Double)from->elevator_pos_rad;
    to->elevator_pos_deg = (::DDS::Double)from->elevator_pos_deg;
    to->elevator_pos_norm = (::DDS::Double)from->elevator_pos_norm;
    to->mag_elevator_pos_rad = (::DDS::Double)from->mag_elevator_pos_rad;
    to->rudder_pos_rad = (::DDS::Double)from->rudder_pos_rad;
    to->rudder_pos_deg = (::DDS::Double)from->rudder_pos_deg;
    to->rudder_pos_norm = (::DDS::Double)from->rudder_pos_norm;
    to->mag_rudder_pos_rad = (::DDS::Double)from->mag_rudder_pos_rad;
    to->flap_pos_rad = (::DDS::Double)from->flap_pos_rad;
    to->flap_pos_deg = (::DDS::Double)from->flap_pos_deg;
    to->flap_pos_norm = (::DDS::Double)from->flap_pos_norm;
    to->speedbrake_pos_rad = (::DDS::Double)from->speedbrake_pos_rad;
    to->speedbrake_pos_deg = (::DDS::Double)from->speedbrake_pos_deg;
    to->speedbrake_pos_norm = (::DDS::Double)from->speedbrake_pos_norm;
    to->mag_speedbrake_pos_rad = (::DDS::Double)from->mag_speedbrake_pos_rad;
    to->spoiler_pos_rad = (::DDS::Double)from->spoiler_pos_rad;
    to->spoiler_pos_deg = (::DDS::Double)from->spoiler_pos_deg;
    to->spoiler_pos_norm = (::DDS::Double)from->spoiler_pos_norm;
    to->mag_spoiler_pos_rad = (::DDS::Double)from->mag_spoiler_pos_rad;
    to->left_brake_cmd_norm = (::DDS::Double)from->left_brake_cmd_norm;
    to->right_brake_cmd_norm = (::DDS::Double)from->right_brake_cmd_norm;
    to->center_brake_cmd_norm = (::DDS::Double)from->center_brake_cmd_norm;
    to->steer_cmd_norm = (::DDS::Double)from->steer_cmd_norm;
    to->wing_fold_pos_norm = (::DDS::Double)from->wing_fold_pos_norm;
    to->throttle_cmd_norm = (::DDS::Double)from->throttle_cmd_norm;
    to->throttle_pos_norm = (::DDS::Double)from->throttle_pos_norm;
    to->mixture_cmd_norm = (::DDS::Double)from->mixture_cmd_norm;
    to->mixture_pos_norm = (::DDS::Double)from->mixture_pos_norm;
    to->advance_cmd_norm = (::DDS::Double)from->advance_cmd_norm;
    to->advance_pos_norm = (::DDS::Double)from->advance_pos_norm;
    to->feather_cmd_norm = (::DDS::Double)from->feather_cmd_norm;
    to->feather_pos_norm = (::DDS::Double)from->feather_pos_norm;
    to->steer_pos_deg = (::DDS::Double)from->steer_pos_deg;
    to->alpha_norm = (::DDS::Double)from->alpha_norm;
    to->elevator_cmd_limiter = (::DDS::Double)from->elevator_cmd_limiter;
    to->g_load_norm = (::DDS::Double)from->g_load_norm;
    to->alpha_limiter = (::DDS::Double)from->alpha_limiter;
    to->g_load_error = (::DDS::Double)from->g_load_error;
    to->g_load_p = (::DDS::Double)from->g_load_p;
    to->g_load_i = (::DDS::Double)from->g_load_i;
    to->g_load_d = (::DDS::Double)from->g_load_d;
    to->g_load_command = (::DDS::Double)from->g_load_command;
    to->elevator_control = (::DDS::Double)from->elevator_control;
    to->roll_rate_norm = (::DDS::Double)from->roll_rate_norm;
    to->roll_trim_error = (::DDS::Double)from->roll_trim_error;
    to->roll_rate_p = (::DDS::Double)from->roll_rate_p;
    to->roll_rate_i = (::DDS::Double)from->roll_rate_i;
    to->roll_rate_d = (::DDS::Double)from->roll_rate_d;
    to->roll_rate_command = (::DDS::Double)from->roll_rate_command;
    to->left_aileron_control = (::DDS::Double)from->left_aileron_control;
    to->right_aileron_control = (::DDS::Double)from->right_aileron_control;
    to->yaw_rate_norm = (::DDS::Double)from->yaw_rate_norm;
    to->yaw_trim_error = (::DDS::Double)from->yaw_trim_error;
    to->yaw_rate_p = (::DDS::Double)from->yaw_rate_p;
    to->yaw_rate_i = (::DDS::Double)from->yaw_rate_i;
    to->yaw_rate_d = (::DDS::Double)from->yaw_rate_d;
    to->yaw_command = (::DDS::Double)from->yaw_command;
    to->rudder_control = (::DDS::Double)from->rudder_control;
    to->alpha_norm_gain = (::DDS::Double)from->alpha_norm_gain;
    to->lef_pos_deg = (::DDS::Double)from->lef_pos_deg;
    to->lef_pos_norm = (::DDS::Double)from->lef_pos_norm;
    to->throttle1 = (::DDS::Double)from->throttle1;
    to->flap_command = (::DDS::Double)from->flap_command;
    to->flaps_control = (::DDS::Double)from->flaps_control;
    to->flap_position_normalizer = (::DDS::Double)from->flap_position_normalizer;
    to->speedbrake_control = (::DDS::Double)from->speedbrake_control;
    to->gear_control = (::DDS::Double)from->gear_control;
    to->scheduled_steer_pos_deg = (::DDS::Double)from->scheduled_steer_pos_deg;
}

void
__JSBSim_gears__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_gears *from = (struct _JSBSim_gears *)_from;
    struct ::JSBSim::gears *to = (struct ::JSBSim::gears *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->gear_pos_norm = (::DDS::Double)from->gear_pos_norm;
    to->gear_cmd_norm = (::DDS::Double)from->gear_cmd_norm;
    to->tailhook_pos_norm = (::DDS::Double)from->tailhook_pos_norm;
    to->num_units = (::DDS::Double)from->num_units;
    {
        typedef c_double _DestType[3];
        _DestType *src = &from->slip_angle_deg;

        memcpy (to->slip_angle_deg, src, sizeof (*src));
    }
    {
        typedef c_double _DestType[3];
        _DestType *src = &from->WOW;

        memcpy (to->WOW, src, sizeof (*src));
    }
    {
        typedef c_double _DestType[3];
        _DestType *src = &from->wheel_speed_fps;

        memcpy (to->wheel_speed_fps, src, sizeof (*src));
    }
    {
        typedef c_double _DestType[3];
        _DestType *src = &from->z_position;

        memcpy (to->z_position, src, sizeof (*src));
    }
    {
        typedef c_double _DestType[3];
        _DestType *src = &from->compression_ft;

        memcpy (to->compression_ft, src, sizeof (*src));
    }
    {
        typedef c_double _DestType[3];
        _DestType *src = &from->side_friction_coeff;

        memcpy (to->side_friction_coeff, src, sizeof (*src));
    }
    {
        typedef c_double _DestType[3];
        _DestType *src = &from->pos_norm;

        memcpy (to->pos_norm, src, sizeof (*src));
    }
}

void
__JSBSim_inertia__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_inertia *from = (struct _JSBSim_inertia *)_from;
    struct ::JSBSim::inertia *to = (struct ::JSBSim::inertia *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->mass_slugs = (::DDS::Double)from->mass_slugs;
    to->weight_lbs = (::DDS::Double)from->weight_lbs;
    to->empty_weight_lbs = (::DDS::Double)from->empty_weight_lbs;
    to->cg_x_in = (::DDS::Double)from->cg_x_in;
    to->cg_y_in = (::DDS::Double)from->cg_y_in;
    to->cg_z_in = (::DDS::Double)from->cg_z_in;
    to->pointmass_weight_lbs = (::DDS::Double)from->pointmass_weight_lbs;
    to->pointmass_location_X_inches = (::DDS::Double)from->pointmass_location_X_inches;
    to->pointmass_location_Y_inches = (::DDS::Double)from->pointmass_location_Y_inches;
    to->pointmass_location_Z_inches = (::DDS::Double)from->pointmass_location_Z_inches;
    to->bx_aero_lbs = (::DDS::Double)from->bx_aero_lbs;
    to->by_aero_lbs = (::DDS::Double)from->by_aero_lbs;
    to->bz_aero_lbs = (::DDS::Double)from->bz_aero_lbs;
    to->wx_aero_lbs = (::DDS::Double)from->wx_aero_lbs;
    to->wy_aero_lbs = (::DDS::Double)from->wy_aero_lbs;
    to->wz_aero_lbs = (::DDS::Double)from->wz_aero_lbs;
    to->od_norm = (::DDS::Double)from->od_norm;
    to->bx_gear_lbs = (::DDS::Double)from->bx_gear_lbs;
    to->by_gear_lbs = (::DDS::Double)from->by_gear_lbs;
    to->bz_gear_lbs = (::DDS::Double)from->bz_gear_lbs;
    to->bx_total_lbs = (::DDS::Double)from->bx_total_lbs;
    to->by_total_lbs = (::DDS::Double)from->by_total_lbs;
    to->bz_total_lbs = (::DDS::Double)from->bz_total_lbs;
    to->oad_factor = (::DDS::Double)from->oad_factor;
    to->old_down = (::DDS::Double)from->old_down;
    to->bx_prop_lbs = (::DDS::Double)from->bx_prop_lbs;
    to->by_prop_lbs = (::DDS::Double)from->by_prop_lbs;
    to->bz_prop_lbs = (::DDS::Double)from->bz_prop_lbs;
    to->l_aero_lbsft = (::DDS::Double)from->l_aero_lbsft;
    to->m_aero_lbsft = (::DDS::Double)from->m_aero_lbsft;
    to->n_aero_lbsft = (::DDS::Double)from->n_aero_lbsft;
    to->l_gear_lbsft = (::DDS::Double)from->l_gear_lbsft;
    to->m_gear_lbsft = (::DDS::Double)from->m_gear_lbsft;
    to->n_gear_lbsft = (::DDS::Double)from->n_gear_lbsft;
    to->l_total_lbsft = (::DDS::Double)from->l_total_lbsft;
    to->m_total_lbsft = (::DDS::Double)from->m_total_lbsft;
    to->n_total_lbsft = (::DDS::Double)from->n_total_lbsft;
    to->l_prop_lbsft = (::DDS::Double)from->l_prop_lbsft;
    to->m_prop_lbsft = (::DDS::Double)from->m_prop_lbsft;
    to->n_prop_lbsft = (::DDS::Double)from->n_prop_lbsft;
}

void
__JSBSim_aero__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_aero *from = (struct _JSBSim_aero *)_from;
    struct ::JSBSim::aero *to = (struct ::JSBSim::aero *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->cl_squared = (::DDS::Double)from->cl_squared;
    to->qbar_area = (::DDS::Double)from->qbar_area;
    to->alpha_max_rad = (::DDS::Double)from->alpha_max_rad;
    to->alpha_min_rad = (::DDS::Double)from->alpha_min_rad;
    to->bi2vel = (::DDS::Double)from->bi2vel;
    to->ci2vel = (::DDS::Double)from->ci2vel;
    to->alpha_wing_rad = (::DDS::Double)from->alpha_wing_rad;
    to->stall_hyst_norm = (::DDS::Double)from->stall_hyst_norm;
    to->alpha_rad = (::DDS::Double)from->alpha_rad;
    to->beta_rad = (::DDS::Double)from->beta_rad;
    to->mag_beta_rad = (::DDS::Double)from->mag_beta_rad;
    to->alpha_deg = (::DDS::Double)from->alpha_deg;
    to->beta_deg = (::DDS::Double)from->beta_deg;
    to->mag_beta_deg = (::DDS::Double)from->mag_beta_deg;
    to->Re = (::DDS::Double)from->Re;
    to->qbar_psf = (::DDS::Double)from->qbar_psf;
    to->qbarUW_psf = (::DDS::Double)from->qbarUW_psf;
    to->qbarUV_psf = (::DDS::Double)from->qbarUV_psf;
    to->alphadot_rad_sec = (::DDS::Double)from->alphadot_rad_sec;
    to->betadot_rad_sec = (::DDS::Double)from->betadot_rad_sec;
    to->alphadot_deg_sec = (::DDS::Double)from->alphadot_deg_sec;
    to->betadot_deg_sec = (::DDS::Double)from->betadot_deg_sec;
    to->h_b_cg_ft = (::DDS::Double)from->h_b_cg_ft;
    to->h_b_mac_ft = (::DDS::Double)from->h_b_mac_ft;
    to->kCLge = (::DDS::Double)from->kCLge;
    to->stall_warn_norm = (::DDS::Double)from->stall_warn_norm;
}

void
__JSBSim_aerocoefficient__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_aerocoefficient *from = (struct _JSBSim_aerocoefficient *)_from;
    struct ::JSBSim::aerocoefficient *to = (struct ::JSBSim::aerocoefficient *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->CDDh = (::DDS::Double)from->CDDh;
    to->CDmach = (::DDS::Double)from->CDmach;
    to->CDDlef = (::DDS::Double)from->CDDlef;
    to->CDDflaps = (::DDS::Double)from->CDDflaps;
    to->CDgear = (::DDS::Double)from->CDgear;
    to->CDDsb = (::DDS::Double)from->CDDsb;
    to->CDq = (::DDS::Double)from->CDq;
    to->CDq_Dlef = (::DDS::Double)from->CDq_Dlef;
    to->CYb = (::DDS::Double)from->CYb;
    to->CYb_M = (::DDS::Double)from->CYb_M;
    to->CYDa = (::DDS::Double)from->CYDa;
    to->CYdr = (::DDS::Double)from->CYdr;
    to->CYp = (::DDS::Double)from->CYp;
    to->CYr = (::DDS::Double)from->CYr;
    to->CLDh = (::DDS::Double)from->CLDh;
    to->CLDlef = (::DDS::Double)from->CLDlef;
    to->CLDflaps = (::DDS::Double)from->CLDflaps;
    to->CLDsb = (::DDS::Double)from->CLDsb;
    to->CLq = (::DDS::Double)from->CLq;
    to->CLq_Dsb = (::DDS::Double)from->CLq_Dsb;
    to->Clb = (::DDS::Double)from->Clb;
    to->Clb_M = (::DDS::Double)from->Clb_M;
    to->Clp = (::DDS::Double)from->Clp;
    to->Clr = (::DDS::Double)from->Clr;
    to->Clda = (::DDS::Double)from->Clda;
    to->Clda_M = (::DDS::Double)from->Clda_M;
    to->Cldr_M = (::DDS::Double)from->Cldr_M;
    to->Cldr = (::DDS::Double)from->Cldr;
    to->CmDh = (::DDS::Double)from->CmDh;
    to->Cma_M = (::DDS::Double)from->Cma_M;
    to->Cmq = (::DDS::Double)from->Cmq;
    to->Cnb = (::DDS::Double)from->Cnb;
    to->Cnb_M = (::DDS::Double)from->Cnb_M;
    to->Cnp = (::DDS::Double)from->Cnp;
    to->Cnr = (::DDS::Double)from->Cnr;
    to->Cnda_M = (::DDS::Double)from->Cnda_M;
    to->Cnda = (::DDS::Double)from->Cnda;
    to->Cndr = (::DDS::Double)from->Cndr;
    to->Cndr_M = (::DDS::Double)from->Cndr_M;
}

void
__JSBSim_geometric__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_geometric *from = (struct _JSBSim_geometric *)_from;
    struct ::JSBSim::geometric *to = (struct ::JSBSim::geometric *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->Sw_sqft = (::DDS::Double)from->Sw_sqft;
    to->bw_ft = (::DDS::Double)from->bw_ft;
    to->cbarw_ft = (::DDS::Double)from->cbarw_ft;
    to->iw_rad = (::DDS::Double)from->iw_rad;
    to->iw_deg = (::DDS::Double)from->iw_deg;
    to->Sh_sqft = (::DDS::Double)from->Sh_sqft;
    to->lh_ft = (::DDS::Double)from->lh_ft;
    to->Sv_sqft = (::DDS::Double)from->Sv_sqft;
    to->lv_ft = (::DDS::Double)from->lv_ft;
    to->lh_norm = (::DDS::Double)from->lh_norm;
    to->lv_norm = (::DDS::Double)from->lv_norm;
    to->vbarh_norm = (::DDS::Double)from->vbarh_norm;
    to->vbarv_norm = (::DDS::Double)from->vbarv_norm;
    to->aero_rp_x_in = (::DDS::Double)from->aero_rp_x_in;
    to->aero_rp_y_in = (::DDS::Double)from->aero_rp_y_in;
    to->aero_rp_z_in = (::DDS::Double)from->aero_rp_z_in;
    to->eyepoint_x_in = (::DDS::Double)from->eyepoint_x_in;
    to->eyepoint_y_in = (::DDS::Double)from->eyepoint_y_in;
    to->eyepoint_z_in = (::DDS::Double)from->eyepoint_z_in;
    to->visualrefpoint_x_in = (::DDS::Double)from->visualrefpoint_x_in;
    to->visualrefpoint_y_in = (::DDS::Double)from->visualrefpoint_y_in;
    to->visualrefpoint_z_in = (::DDS::Double)from->visualrefpoint_z_in;
    to->terrain_radius = (::DDS::Double)from->terrain_radius;
}

void
__JSBSim_propulsion__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_propulsion *from = (struct _JSBSim_propulsion *)_from;
    struct ::JSBSim::propulsion *to = (struct ::JSBSim::propulsion *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->tat_r = (::DDS::Double)from->tat_r;
    to->tat_c = (::DDS::Double)from->tat_c;
    to->pt_lbs_sqft = (::DDS::Double)from->pt_lbs_sqft;
    to->set_running = (::DDS::Double)from->set_running;
    to->starter_cmd = (::DDS::Double)from->starter_cmd;
    to->cutoff_cmd = (::DDS::Double)from->cutoff_cmd;
    to->active_engine = (::DDS::Double)from->active_engine;
    to->total_fuel_lbs = (::DDS::Double)from->total_fuel_lbs;
    to->refuel = (::DDS::Double)from->refuel;
    to->fuel_dump = (::DDS::Double)from->fuel_dump;
    to->pitch_angle_rad = (::DDS::Double)from->pitch_angle_rad;
    to->yaw_angle_rad = (::DDS::Double)from->yaw_angle_rad;
    to->reverser_angle_rad = (::DDS::Double)from->reverser_angle_rad;
    to->thrust_lbs = (::DDS::Double)from->thrust_lbs;
    to->fuel_flow_rate_pps = (::DDS::Double)from->fuel_flow_rate_pps;
    to->IdleThrust = (::DDS::Double)from->IdleThrust;
    to->MilThrust = (::DDS::Double)from->MilThrust;
    to->AugThrust = (::DDS::Double)from->AugThrust;
    to->WindMilRPM = (::DDS::Double)from->WindMilRPM;
    to->n1 = (::DDS::Double)from->n1;
    to->n2 = (::DDS::Double)from->n2;
    to->injection_cmd = (::DDS::Double)from->injection_cmd;
    to->phase = (::DDS::Double)from->phase;
    to->RPM = (::DDS::Double)from->RPM;
    to->EmergencyThrottlePosition = (::DDS::Double)from->EmergencyThrottlePosition;
    to->EmergencyNozzleSwitch = (::DDS::Double)from->EmergencyNozzleSwitch;
    to->FuelDipperSwitch = (::DDS::Double)from->FuelDipperSwitch;
    to->AugmentationSwitch = (::DDS::Double)from->AugmentationSwitch;
    to->EGT_degC = (::DDS::Double)from->EGT_degC;
    to->RelightSwitch = (::DDS::Double)from->RelightSwitch;
    to->AugmentationLight = (::DDS::Double)from->AugmentationLight;
    {
        typedef c_double _DestType[3];
        _DestType *src = &from->tank_contents_lbs;

        memcpy (to->tank_contents_lbs, src, sizeof (*src));
    }
}

void
__JSBSim_initialConditions__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_initialConditions *from = (struct _JSBSim_initialConditions *)_from;
    struct ::JSBSim::initialConditions *to = (struct ::JSBSim::initialConditions *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->vc_kts = (::DDS::Double)from->vc_kts;
    to->ve_kts = (::DDS::Double)from->ve_kts;
    to->vg_kts = (::DDS::Double)from->vg_kts;
    to->vt_kts = (::DDS::Double)from->vt_kts;
    to->mach = (::DDS::Double)from->mach;
    to->roc_fpm = (::DDS::Double)from->roc_fpm;
    to->gamma_deg = (::DDS::Double)from->gamma_deg;
    to->alpha_deg = (::DDS::Double)from->alpha_deg;
    to->beta_deg = (::DDS::Double)from->beta_deg;
    to->theta_deg = (::DDS::Double)from->theta_deg;
    to->phi_deg = (::DDS::Double)from->phi_deg;
    to->psi_true_deg = (::DDS::Double)from->psi_true_deg;
    to->lat_gc_deg = (::DDS::Double)from->lat_gc_deg;
    to->long_gc_deg = (::DDS::Double)from->long_gc_deg;
    to->h_sl_ft = (::DDS::Double)from->h_sl_ft;
    to->h_agl_ft = (::DDS::Double)from->h_agl_ft;
    to->sea_level_radius_ft = (::DDS::Double)from->sea_level_radius_ft;
    to->terrain_elevation_ft = (::DDS::Double)from->terrain_elevation_ft;
    to->vg_fps = (::DDS::Double)from->vg_fps;
    to->vt_fps = (::DDS::Double)from->vt_fps;
    to->vw_bx_fps = (::DDS::Double)from->vw_bx_fps;
    to->vw_by_fps = (::DDS::Double)from->vw_by_fps;
    to->vw_bz_fps = (::DDS::Double)from->vw_bz_fps;
    to->vw_north_fps = (::DDS::Double)from->vw_north_fps;
    to->vw_east_fps = (::DDS::Double)from->vw_east_fps;
    to->vw_down_fps = (::DDS::Double)from->vw_down_fps;
    to->vw_mag_fps = (::DDS::Double)from->vw_mag_fps;
    to->vw_dir_deg = (::DDS::Double)from->vw_dir_deg;
    to->roc_fps = (::DDS::Double)from->roc_fps;
    to->u_fps = (::DDS::Double)from->u_fps;
    to->v_fps = (::DDS::Double)from->v_fps;
    to->w_fps = (::DDS::Double)from->w_fps;
    to->vn_fps = (::DDS::Double)from->vn_fps;
    to->ve_fps = (::DDS::Double)from->ve_fps;
    to->vd_fps = (::DDS::Double)from->vd_fps;
    to->gamma_rad = (::DDS::Double)from->gamma_rad;
    to->alpha_rad = (::DDS::Double)from->alpha_rad;
    to->theta_rad = (::DDS::Double)from->theta_rad;
    to->beta_rad = (::DDS::Double)from->beta_rad;
    to->phi_rad = (::DDS::Double)from->phi_rad;
    to->psi_true_rad = (::DDS::Double)from->psi_true_rad;
    to->lat_gc_rad = (::DDS::Double)from->lat_gc_rad;
    to->long_gc_rad = (::DDS::Double)from->long_gc_rad;
    to->p_rad_sec = (::DDS::Double)from->p_rad_sec;
    to->q_rad_sec = (::DDS::Double)from->q_rad_sec;
    to->r_rad_sec = (::DDS::Double)from->r_rad_sec;
    to->CDdHT = (::DDS::Double)from->CDdHT;
}

void
__JSBSim_subSystems__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_subSystems *from = (struct _JSBSim_subSystems *)_from;
    struct ::JSBSim::subSystems *to = (struct ::JSBSim::subSystems *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->electrical_GPU = (::DDS::Boolean)from->electrical_GPU;
    to->electrical_BatteryBus = (::DDS::Boolean)from->electrical_BatteryBus;
    to->electrical_BatterySwitch = (::DDS::Boolean)from->electrical_BatterySwitch;
    to->electrical_ManualLoadShed = (::DDS::Boolean)from->electrical_ManualLoadShed;
    to->electrical_GeneratorSwitch = (::DDS::Boolean)from->electrical_GeneratorSwitch;
    to->electrical_InverterSwitch = (::DDS::Boolean)from->electrical_InverterSwitch;
    to->electrical_AlternatorSwitch = (::DDS::Boolean)from->electrical_AlternatorSwitch;
    to->electrical_MainFailLightSwitch = (::DDS::Double)from->electrical_MainFailLightSwitch;
    to->electrical_EmergencyParkingBrakeSwitch = (::DDS::Boolean)from->electrical_EmergencyParkingBrakeSwitch;
    to->hydraulic_HydraulicPumpPressure = (::DDS::Double)from->hydraulic_HydraulicPumpPressure;
    to->hydraulic_ServoAccumulator = (::DDS::Boolean)from->hydraulic_ServoAccumulator;
    to->hydraulic_EmergencyHydPumpSwitch = (::DDS::Boolean)from->hydraulic_EmergencyHydPumpSwitch;
    to->hydraulic_EmergencyPump = (::DDS::Boolean)from->hydraulic_EmergencyPump;
    to->hydraulic_Hydraulic2PumpPressure = (::DDS::Double)from->hydraulic_Hydraulic2PumpPressure;
    to->hydraulic_PreservoHyd2 = (::DDS::Boolean)from->hydraulic_PreservoHyd2;
    to->hydraulic_HydraulicResservoir = (::DDS::Double)from->hydraulic_HydraulicResservoir;
    to->armament_MasterArmamentSwitch = (::DDS::Boolean)from->armament_MasterArmamentSwitch;
    to->armament_NormalManual = (::DDS::Boolean)from->armament_NormalManual;
    to->armament_BombsSelection = (::DDS::Boolean)from->armament_BombsSelection;
    to->armament_GunsSelection = (::DDS::Boolean)from->armament_GunsSelection;
    to->armament_MissilesSelection = (::DDS::Boolean)from->armament_MissilesSelection;
    to->armament_RocketsSelection = (::DDS::Boolean)from->armament_RocketsSelection;
    to->armament_GunTrigger = (::DDS::Boolean)from->armament_GunTrigger;
    to->armament_BRMTrigger = (::DDS::Boolean)from->armament_BRMTrigger;
    to->armament_FuelDipper = (::DDS::Boolean)from->armament_FuelDipper;
    to->fuel_WingTankDropSwitch = (::DDS::Boolean)from->fuel_WingTankDropSwitch;
    to->fuel_FuseLageTankDropSwitch = (::DDS::Boolean)from->fuel_FuseLageTankDropSwitch;
    to->fuel_ExTankDropSwitch = (::DDS::Boolean)from->fuel_ExTankDropSwitch;
    to->fuel_FuelDumpSwitch = (::DDS::Boolean)from->fuel_FuelDumpSwitch;
    to->fuel_MainLPPump = (::DDS::Boolean)from->fuel_MainLPPump;
    to->fuel_LPPumpRight = (::DDS::Boolean)from->fuel_LPPumpRight;
    to->fuel_LPPumpLeft = (::DDS::Boolean)from->fuel_LPPumpLeft;
    to->fuel_CrossfeedCock = (::DDS::Boolean)from->fuel_CrossfeedCock;
    to->fuel_GaugeTest = (::DDS::Boolean)from->fuel_GaugeTest;
    to->fuel_RPM = (::DDS::Double)from->fuel_RPM;
    to->fuel_FuelConsumptionRate = (::DDS::Double)from->fuel_FuelConsumptionRate;
}

void
__JSBSim_subSystemOut__copyOut(
    void *_from,
    void *_to)
{
    struct _JSBSim_subSystemOut *from = (struct _JSBSim_subSystemOut *)_from;
    struct ::JSBSim::subSystemOut *to = (struct ::JSBSim::subSystemOut *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->output_BatteryBusOut = (::DDS::Boolean)from->output_BatteryBusOut;
    to->output_DC = (::DDS::Boolean)from->output_DC;
    to->output_Inverter = (::DDS::Boolean)from->output_Inverter;
    to->output_ALternator = (::DDS::Boolean)from->output_ALternator;
    to->output_AutoLoadSheddingAC = (::DDS::Boolean)from->output_AutoLoadSheddingAC;
    to->output_AlternatorWarningLight = (::DDS::Boolean)from->output_AlternatorWarningLight;
    to->output_GenernatorWarningLight = (::DDS::Boolean)from->output_GenernatorWarningLight;
    to->output_BatteryWarningLight = (::DDS::Boolean)from->output_BatteryWarningLight;
    to->output_UnderCarriageExtension = (::DDS::Double)from->output_UnderCarriageExtension;
    to->output_WheelBrake = (::DDS::Double)from->output_WheelBrake;
    to->output_SpeedBrake = (::DDS::Double)from->output_SpeedBrake;
    to->output_ParkingBrake = (::DDS::Double)from->output_ParkingBrake;
    to->output_OscarDashpot = (::DDS::Double)from->output_OscarDashpot;
    to->output_LeftElevonControl = (::DDS::Double)from->output_LeftElevonControl;
    to->output_RightElevonControl = (::DDS::Double)from->output_RightElevonControl;
    to->output_PreservoControl = (::DDS::Double)from->output_PreservoControl;
    to->output_PitchDamper = (::DDS::Double)from->output_PitchDamper;
    to->output_HydraulicIndicatorLight = (::DDS::Boolean)from->output_HydraulicIndicatorLight;
    to->output_Hydraulic2IndicatorLight = (::DDS::Boolean)from->output_Hydraulic2IndicatorLight;
    to->output_EmergencyHydraulicIndicator = (::DDS::Boolean)from->output_EmergencyHydraulicIndicator;
    to->output_DualHydGuage1 = (::DDS::Double)from->output_DualHydGuage1;
    to->output_DualHydGuage2 = (::DDS::Double)from->output_DualHydGuage2;
    to->output_FuelTotalizer = (::DDS::Double)from->output_FuelTotalizer;
    to->output_LeftWingTankWarningLight = (::DDS::Boolean)from->output_LeftWingTankWarningLight;
    to->output_CenterLineTankWarningLight = (::DDS::Boolean)from->output_CenterLineTankWarningLight;
    to->output_InternalWingTankWarningLight = (::DDS::Boolean)from->output_InternalWingTankWarningLight;
    to->output_UpperBayWarningLight = (::DDS::Boolean)from->output_UpperBayWarningLight;
    to->output_RightWingTankWarningLight = (::DDS::Boolean)from->output_RightWingTankWarningLight;
    to->output_LitreWarningLight600 = (::DDS::Boolean)from->output_LitreWarningLight600;
    to->output_LitreWarningLight400 = (::DDS::Boolean)from->output_LitreWarningLight400;
    to->output_DFGLeft = (::DDS::Double)from->output_DFGLeft;
    to->output_DFGRight = (::DDS::Double)from->output_DFGRight;
    to->output_MainFailLight = (::DDS::Double)from->output_MainFailLight;
    to->output_WarningHorn = (::DDS::Double)from->output_WarningHorn;
    to->output_BombIndication = (::DDS::Boolean)from->output_BombIndication;
    to->output_GunIndication = (::DDS::Boolean)from->output_GunIndication;
    to->output_MissileIndication = (::DDS::Boolean)from->output_MissileIndication;
    to->output_RocketIndication = (::DDS::Boolean)from->output_RocketIndication;
    to->output_RPMIncrease = (::DDS::Double)from->output_RPMIncrease;
}

