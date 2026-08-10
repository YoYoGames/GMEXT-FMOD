#include "GMFMOD_channel_control.h"
#include <vector>

using namespace gm_structs;

// ============================================================
// Playback
// ============================================================

double fmod_channel_control_is_playing(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	bool playing = false;
	g_fmod_last_result = control->isPlaying(&playing);
	return playing ? 1.0 : 0.0;
}

double fmod_channel_control_stop(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->stop();
	return 0;
}

double fmod_channel_control_set_paused(uint64_t channel_control_ref, double paused)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setPaused(paused != 0.0);
	return 0;
}

double fmod_channel_control_get_paused(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	bool paused = false;
	g_fmod_last_result = control->getPaused(&paused);
	return paused ? 1.0 : 0.0;
}

double fmod_channel_control_set_mode(uint64_t channel_control_ref, double mode)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setMode((FMOD_MODE)(int)mode);
	return 0;
}

double fmod_channel_control_get_mode(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	FMOD_MODE mode = FMOD_MODE(0);
	g_fmod_last_result = control->getMode(&mode);
	return (double)mode;
}

double fmod_channel_control_set_pitch(uint64_t channel_control_ref, double pitch)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setPitch((float)pitch);
	return 0;
}

double fmod_channel_control_get_pitch(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float pitch = 0.0f;
	g_fmod_last_result = control->getPitch(&pitch);
	return (double)pitch;
}

// ============================================================
// Volume & Mute
// ============================================================

double fmod_channel_control_get_audibility(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float audibility = 0.0f;
	g_fmod_last_result = control->getAudibility(&audibility);
	return (double)audibility;
}

double fmod_channel_control_set_volume(uint64_t channel_control_ref, double volume)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setVolume((float)volume);
	return 0;
}

double fmod_channel_control_get_volume(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_last_result = control->getVolume(&volume);
	return (double)volume;
}

double fmod_channel_control_set_volume_ramp(uint64_t channel_control_ref, double ramp)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setVolumeRamp(ramp != 0.0);
	return 0;
}

double fmod_channel_control_get_volume_ramp(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	bool ramp = false;
	g_fmod_last_result = control->getVolumeRamp(&ramp);
	return ramp ? 1.0 : 0.0;
}

double fmod_channel_control_set_mute(uint64_t channel_control_ref, double mute)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setMute(mute != 0.0);
	return 0;
}

double fmod_channel_control_get_mute(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	bool mute = false;
	g_fmod_last_result = control->getMute(&mute);
	return mute ? 1.0 : 0.0;
}

// ============================================================
// 3D Attributes
// ============================================================

double fmod_channel_control_set_3d_doppler_level(uint64_t channel_control_ref, double level)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DDopplerLevel((float)level);
	return 0;
}

double fmod_channel_control_get_3d_doppler_level(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float level = 0.0f;
	g_fmod_last_result = control->get3DDopplerLevel(&level);
	return (double)level;
}

double fmod_channel_control_set_3d_level(uint64_t channel_control_ref, double level)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DLevel((float)level);
	return 0;
}

double fmod_channel_control_get_3d_level(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float level = 0.0f;
	g_fmod_last_result = control->get3DLevel(&level);
	return (double)level;
}

double fmod_channel_control_set_3d_min_max_distance(uint64_t channel_control_ref, double min_dist, double max_dist)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DMinMaxDistance((float)min_dist, (float)max_dist);
	return 0;
}

double fmod_channel_control_set_3d_cone_settings(uint64_t channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DConeSettings((float)inside_cone_angle, (float)outside_cone_angle, (float)outside_volume);
	return 0;
}

double fmod_channel_control_set_3d_occlusion(uint64_t channel_control_ref, double direct_occlusion, double reverb_occlusion)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DOcclusion((float)direct_occlusion, (float)reverb_occlusion);
	return 0;
}

double fmod_channel_control_set_3d_spread(uint64_t channel_control_ref, double angle)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DSpread((float)angle);
	return 0;
}

double fmod_channel_control_get_3d_spread(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float angle = 0.0f;
	g_fmod_last_result = control->get3DSpread(&angle);
	return (double)angle;
}

double fmod_channel_control_set_3d_distance_filter(uint64_t channel_control_ref, double custom, double custom_level, double center_freq)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DDistanceFilter(custom != 0.0, (float)custom_level, (float)center_freq);
	return 0;
}

gm_structs::FmodMinMaxDistance fmod_channel_control_get_3d_min_max_distance(uint64_t channel_control_ref)
{
	FmodMinMaxDistance result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	float min_dist = 0.0f, max_dist = 0.0f;
	g_fmod_last_result = control->get3DMinMaxDistance(&min_dist, &max_dist);
	result.min_distance = (double)min_dist;
	result.max_distance = (double)max_dist;
	return result;
}

gm_structs::FmodConeSettings fmod_channel_control_get_3d_cone_settings(uint64_t channel_control_ref)
{
	FmodConeSettings result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	float inside_cone_angle = 0.0f, outside_cone_angle = 0.0f, outside_volume = 0.0f;
	g_fmod_last_result = control->get3DConeSettings(&inside_cone_angle, &outside_cone_angle, &outside_volume);
	result.inside_cone_angle = (double)inside_cone_angle;
	result.outside_cone_angle = (double)outside_cone_angle;
	result.outside_volume = (double)outside_volume;
	return result;
}

double fmod_channel_control_set_3d_cone_orientation(uint64_t channel_control_ref, const gm_structs::FmodVec3& orientation)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	FMOD_VECTOR fmod_orientation = {(float)orientation.x, (float)orientation.y, (float)orientation.z};
	g_fmod_last_result = control->set3DConeOrientation(&fmod_orientation);
	return 0;
}

gm_structs::FmodVec3 fmod_channel_control_get_3d_cone_orientation(uint64_t channel_control_ref)
{
	FmodVec3 result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	FMOD_VECTOR orientation{};
	g_fmod_last_result = control->get3DConeOrientation(&orientation);
	result.x = (double)orientation.x;
	result.y = (double)orientation.y;
	result.z = (double)orientation.z;
	return result;
}

gm_structs::FmodOcclusion fmod_channel_control_get_3d_occlusion(uint64_t channel_control_ref)
{
	FmodOcclusion result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	float direct = 0.0f, reverb = 0.0f;
	g_fmod_last_result = control->get3DOcclusion(&direct, &reverb);
	result.direct = (double)direct;
	result.reverb = (double)reverb;
	return result;
}

gm_structs::FmodDistanceFilter fmod_channel_control_get_3d_distance_filter(uint64_t channel_control_ref)
{
	FmodDistanceFilter result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	bool custom = false;
	float custom_level = 0.0f, center_freq = 0.0f;
	g_fmod_last_result = control->get3DDistanceFilter(&custom, &custom_level, &center_freq);
	result.custom = custom ? 1.0 : 0.0;
	result.custom_level = (double)custom_level;
	result.center_freq = (double)center_freq;
	return result;
}

double fmod_channel_control_set_3d_custom_rolloff(uint64_t channel_control_ref, const gm::wire::GMValue& points, double num_points)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	// The wire format for an array of struct elements (FmodVec3 points) has no
	// decoder in this codebase yet - every other GMValue-typed buffer parameter
	// (Sound::set3DCustomRolloff, DSP::set/getParameterData, DSPConnection's mix
	// matrix below) is likewise left unsupported pending real array/struct wire
	// support.
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0;
}

double fmod_channel_control_get_3d_custom_rolloff_count(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	FMOD_VECTOR* points = nullptr;
	int num_points = 0;
	g_fmod_last_result = control->get3DCustomRolloff(&points, &num_points);
	return (double)num_points;
}

gm_structs::FmodVec3 fmod_channel_control_get_3d_custom_rolloff_at(uint64_t channel_control_ref, double index)
{
	FmodVec3 result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	FMOD_VECTOR* points = nullptr;
	int num_points = 0;
	g_fmod_last_result = control->get3DCustomRolloff(&points, &num_points);
	if (g_fmod_last_result != FMOD_OK || points == nullptr || (int)index < 0 || (int)index >= num_points)
		return result;
	result.x = (double)points[(int)index].x;
	result.y = (double)points[(int)index].y;
	result.z = (double)points[(int)index].z;
	return result;
}

// ============================================================
// Panning & Mixing
// ============================================================

double fmod_channel_control_set_pan(uint64_t channel_control_ref, double pan)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setPan((float)pan);
	return 0;
}

double fmod_channel_control_set_mix_levels_output(uint64_t channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setMixLevelsOutput((float)front_left, (float)front_right, (float)center, (float)lfe, (float)surround_left, (float)surround_right, (float)back_left, (float)back_right);
	return 0;
}

double fmod_channel_control_set_mix_levels_input(uint64_t channel_control_ref, double levels, double num_levels)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	// levels is a scalar in the generated signature (the spec did not attach an
	// array/buffer hint to this parameter), so there is no way to pass the real
	// per-channel level array - same structural limit as set_mix_matrix below.
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0;
}

double fmod_channel_control_set_mix_matrix(uint64_t channel_control_ref, double matrix, double out_channels, double in_channels, double in_channel_hop)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	// matrix is a scalar in the generated signature - same limitation already
	// present in DSPConnection::setMixMatrix (GMFMOD_dsp_connection.cpp).
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0;
}

gm_structs::FmodDSPMixMatrix fmod_channel_control_get_mix_matrix(uint64_t channel_control_ref, double in_channel_hop)
{
	FmodDSPMixMatrix result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;

	int out_channels = 0, in_channels = 0;
	g_fmod_last_result = control->getMixMatrix(nullptr, &out_channels, &in_channels, (int)in_channel_hop);

	result.out_channels = (double)out_channels;
	result.in_channels = (double)in_channels;
	result.matrix = 0.0;
	return result;
}

// ============================================================
// Filtering
// ============================================================

double fmod_channel_control_set_reverb_properties(uint64_t channel_control_ref, double reverb_instance, double wet)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setReverbProperties((int)reverb_instance, (float)wet);
	return 0;
}

double fmod_channel_control_get_reverb_properties(uint64_t channel_control_ref, double reverb_instance)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float wet = 0.0f;
	g_fmod_last_result = control->getReverbProperties((int)reverb_instance, &wet);
	return (double)wet;
}

double fmod_channel_control_set_low_pass_gain(uint64_t channel_control_ref, double gain)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setLowPassGain((float)gain);
	return 0;
}

double fmod_channel_control_get_low_pass_gain(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float gain = 0.0f;
	g_fmod_last_result = control->getLowPassGain(&gain);
	return (double)gain;
}

// ============================================================
// DSP Chain
// ============================================================

double fmod_channel_control_add_dsp(uint64_t channel_control_ref, double dsp_chain_offset, uint64_t dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = control->addDSP((int)dsp_chain_offset, dsp);
	return 0;
}

double fmod_channel_control_remove_dsp(uint64_t channel_control_ref, uint64_t dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = control->removeDSP(dsp);
	return 0;
}

double fmod_channel_control_get_num_dsps(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	int num = 0;
	g_fmod_last_result = control->getNumDSPs(&num);
	return (double)num;
}

uint64_t fmod_channel_control_get_dsp(uint64_t channel_control_ref, double index)
{
	uint64_t result = 0;
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	FMOD::DSP* dsp = nullptr;
	g_fmod_last_result = control->getDSP((int)index, &dsp);
	if (g_fmod_last_result == FMOD_OK && dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);
		result = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

double fmod_channel_control_set_dsp_index(uint64_t channel_control_ref, uint64_t dsp_ref, double chain_index)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = control->setDSPIndex(dsp, (int)chain_index);
	return 0;
}

double fmod_channel_control_get_dsp_index(uint64_t channel_control_ref, uint64_t dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);
	if (dsp == nullptr) return 0.0;
	int index = 0;
	g_fmod_last_result = control->getDSPIndex(dsp, &index);
	return (double)index;
}

// ============================================================
// General
// ============================================================

uint64_t fmod_channel_control_get_system_object(uint64_t channel_control_ref)
{
	uint64_t result = 0;
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	FMOD::System* system = nullptr;
	g_fmod_last_result = control->getSystemObject(&system);
	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}

double fmod_channel_control_set_3d_attributes(uint64_t channel_control_ref, const gm_structs::FmodVec3& position, const gm_structs::FmodVec3& velocity)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	FMOD_VECTOR fmod_position = {(float)position.x, (float)position.y, (float)position.z};
	FMOD_VECTOR fmod_velocity = {(float)velocity.x, (float)velocity.y, (float)velocity.z};

	g_fmod_last_result = control->set3DAttributes(&fmod_position, &fmod_velocity);
	return 0;
}

FmodChannelControl3DAttributes fmod_channel_control_get_3d_attributes(uint64_t channel_control_ref)
{
	FmodChannelControl3DAttributes result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;

	FMOD_VECTOR position{}, velocity{};
	g_fmod_last_result = control->get3DAttributes(&position, &velocity);

	result.position.x = (double)position.x;
	result.position.y = (double)position.y;
	result.position.z = (double)position.z;

	result.velocity.x = (double)velocity.x;
	result.velocity.y = (double)velocity.y;
	result.velocity.z = (double)velocity.z;

	return result;
}

// ============================================================
// Delay & DSP Clock
// ============================================================

FmodDelay fmod_channel_control_get_delay(uint64_t channel_ref)
{
	FmodDelay result{};
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);
	if (channel == nullptr) return result;

	unsigned long long dspclock_start = 0, dspclock_end = 0;
	bool stop_channels = false;
	g_fmod_last_result = channel->getDelay(&dspclock_start, &dspclock_end, &stop_channels);

	result.dspclock_start = (double)dspclock_start;
	result.dspclock_end = (double)dspclock_end;
	result.stop_channels = stop_channels ? 1.0 : 0.0;
	return result;
}

double fmod_channel_control_set_delay(uint64_t channel_ref, double dspclock_start, double dspclock_end, double stop_channels)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);
	if (channel == nullptr) return 0;

	g_fmod_last_result = channel->setDelay(
		(unsigned long long)dspclock_start,
		(unsigned long long)dspclock_end,
		stop_channels != 0.0);
	return 0;
}

FmodDSPClock fmod_channel_control_get_dsp_clock(uint64_t channel_ref)
{
	FmodDSPClock result{};
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);
	if (channel == nullptr) return result;

	unsigned long long dspclock = 0, parent_clock = 0;
	g_fmod_last_result = channel->getDSPClock(&dspclock, &parent_clock);

	result.dspclock = (double)dspclock;
	result.parent_clock = (double)parent_clock;
	return result;
}

// ============================================================
// Fade Points
// ============================================================

double fmod_channel_control_add_fade_point(uint64_t channel_control_ref, double dsp_clock, double volume)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->addFadePoint((unsigned long long)dsp_clock, (float)volume);
	return 0;
}

double fmod_channel_control_remove_fade_points(uint64_t channel_control_ref, double dsp_clock_start, double dsp_clock_end)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->removeFadePoints((unsigned long long)dsp_clock_start, (unsigned long long)dsp_clock_end);
	return 0;
}

double fmod_channel_control_set_fade_point_ramp(uint64_t channel_control_ref, double dsp_clock, double volume)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setFadePointRamp((unsigned long long)dsp_clock, (float)volume);
	return 0;
}

double fmod_channel_control_get_fade_point_count(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	unsigned int num_points = 0;
	g_fmod_last_result = control->getFadePoints(&num_points, nullptr, nullptr);
	return (double)num_points;
}

FmodFadePoint fmod_channel_control_get_fade_point_at(uint64_t channel_control_ref, double index)
{
	FmodFadePoint result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;

	unsigned int num_points = 0;
	g_fmod_last_result = control->getFadePoints(&num_points, nullptr, nullptr);
	if (g_fmod_last_result != FMOD_OK || (int)index < 0 || (unsigned int)index >= num_points)
		return result;

	std::vector<unsigned long long> dspclocks(num_points);
	std::vector<float> volumes(num_points);
	g_fmod_last_result = control->getFadePoints(&num_points, dspclocks.data(), volumes.data());
	if (g_fmod_last_result != FMOD_OK)
		return result;

	result.dsp_clock = (double)dspclocks[(size_t)index];
	result.volume = (double)volumes[(size_t)index];
	return result;
}

// ============================================================
// User Data
// ============================================================

double fmod_channel_control_set_user_data(uint64_t channel_control_ref, double user_data)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_user_data[reinterpret_cast<uintptr_t>(control)] = user_data;
	return 0;
}

double fmod_channel_control_get_user_data(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	auto it = g_user_data.find(reinterpret_cast<uintptr_t>(control));
	if (it == g_user_data.end()) return 0.0;
	return it->second;
}

// ============================================================
// Callbacks
// ============================================================

// ChannelControl callbacks are dispatched from System::update() on the thread
// that calls it, so this map needs no locking.
static std::map<uintptr_t, gm::wire::GMFunction> g_channel_callbacks;

static FMOD_RESULT F_CALL CALLBACK_fmod_channel_control(
	FMOD_CHANNELCONTROL* channelcontrol,
	FMOD_CHANNELCONTROL_TYPE controltype,
	FMOD_CHANNELCONTROL_CALLBACK_TYPE callbacktype,
	void* commanddata1,
	void* commanddata2)
{
	if (channelcontrol == nullptr)
		return FMOD_OK;

	// Keys are the truncated pointer the GML refs carry, so mask to match.
	uintptr_t control_ptr = reinterpret_cast<uintptr_t>(channelcontrol) & 0xFFFFFFFFu;
	auto it = g_channel_callbacks.find(control_ptr);
	if (it != g_channel_callbacks.end())
	{
		uint64_t channel_ref = 0;
		channel_ref = packIndexIntoRef((uint32_t)control_ptr, GM_FMOD_TYPE_CHANNEL);

		it->second.call(channel_ref, (double)(int)callbacktype);

		// The channel handle dies once playback ends; drop the entry so a
		// recycled pointer does not inherit this callback.
		if (callbacktype == FMOD_CHANNELCONTROL_CALLBACK_END)
			g_channel_callbacks.erase(it);
	}
	return FMOD_OK;
}

double fmod_channel_control_set_callback(uint64_t channel_ref, const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);
	if (channel == nullptr) return 0;

	uintptr_t control_ptr = reinterpret_cast<uintptr_t>(channel) & 0xFFFFFFFFu;

	if (!callback.has_value())
	{
		g_channel_callbacks.erase(control_ptr);
		g_fmod_last_result = channel->setCallback(nullptr);
		return 0;
	}

	g_channel_callbacks.insert_or_assign(control_ptr, callback.value());
	g_fmod_last_result = channel->setCallback(CALLBACK_fmod_channel_control);
	if (g_fmod_last_result != FMOD_OK)
		g_channel_callbacks.erase(control_ptr);
	return 0;
}
