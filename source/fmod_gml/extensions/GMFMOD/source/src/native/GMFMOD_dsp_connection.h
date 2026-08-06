#pragma once

struct FmodDSPConnectionRef;

// Mix Control
double fmod_dsp_connection_set_mix(const FmodDSPConnectionRef& connection_ref, double volume);
double fmod_dsp_connection_get_mix(const FmodDSPConnectionRef& connection_ref);
double fmod_dsp_connection_set_mix_matrix(
	const FmodDSPConnectionRef& connection_ref,
	double matrix,
	double out_channels,
	double in_channels,
	double in_channel_hop);
gmval fmod_dsp_connection_get_mix_matrix(
	const FmodDSPConnectionRef& connection_ref,
	double in_channel_hop);

// Input/Output Access
struct FmodDSPRef;
FmodDSPRef fmod_dsp_connection_get_input(const FmodDSPConnectionRef& connection_ref);
FmodDSPRef fmod_dsp_connection_get_output(const FmodDSPConnectionRef& connection_ref);

// Properties
double fmod_dsp_connection_get_type(const FmodDSPConnectionRef& connection_ref);

// User Data
double fmod_dsp_connection_set_user_data(const FmodDSPConnectionRef& connection_ref, double user_data);
double fmod_dsp_connection_get_user_data(const FmodDSPConnectionRef& connection_ref);
