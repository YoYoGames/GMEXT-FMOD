#include "GMFMOD_channel_control.h"

using namespace gm_structs;

// ============================================================
// Playback
// ============================================================

double fmod_channel_control_is_playing(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	bool playing = false;
	g_fmod_last_result = control->isPlaying(&playing);
	return playing ? 1.0 : 0.0;
}

double fmod_channel_control_stop(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->stop();
	return 0;
}

double fmod_channel_control_set_paused(double channel_control_ref, double paused)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setPaused(paused != 0.0);
	return 0;
}

double fmod_channel_control_get_paused(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	bool paused = false;
	g_fmod_last_result = control->getPaused(&paused);
	return paused ? 1.0 : 0.0;
}

double fmod_channel_control_set_mode(double channel_control_ref, double mode)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setMode((FMOD_MODE)(int)mode);
	return 0;
}

double fmod_channel_control_get_mode(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	FMOD_MODE mode = FMOD_MODE(0);
	g_fmod_last_result = control->getMode(&mode);
	return (double)mode;
}

double fmod_channel_control_set_pitch(double channel_control_ref, double pitch)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setPitch((float)pitch);
	return 0;
}

double fmod_channel_control_get_pitch(double channel_control_ref)
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

double fmod_channel_control_get_audibility(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float audibility = 0.0f;
	g_fmod_last_result = control->getAudibility(&audibility);
	return (double)audibility;
}

double fmod_channel_control_set_volume(double channel_control_ref, double volume)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setVolume((float)volume);
	return 0;
}

double fmod_channel_control_get_volume(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_last_result = control->getVolume(&volume);
	return (double)volume;
}

double fmod_channel_control_set_volume_ramp(double channel_control_ref, double ramp)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setVolumeRamp(ramp != 0.0);
	return 0;
}

double fmod_channel_control_get_volume_ramp(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	bool ramp = false;
	g_fmod_last_result = control->getVolumeRamp(&ramp);
	return ramp ? 1.0 : 0.0;
}

double fmod_channel_control_set_mute(double channel_control_ref, double mute)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setMute(mute != 0.0);
	return 0;
}

double fmod_channel_control_get_mute(double channel_control_ref)
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

double fmod_channel_control_set_3d_doppler_level(double channel_control_ref, double level)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DDopplerLevel((float)level);
	return 0;
}

double fmod_channel_control_get_3d_doppler_level(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float level = 0.0f;
	g_fmod_last_result = control->get3DDopplerLevel(&level);
	return (double)level;
}

double fmod_channel_control_set_3d_level(double channel_control_ref, double level)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DLevel((float)level);
	return 0;
}

double fmod_channel_control_get_3d_level(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float level = 0.0f;
	g_fmod_last_result = control->get3DLevel(&level);
	return (double)level;
}

double fmod_channel_control_set_3d_min_max_distance(double channel_control_ref, double min_dist, double max_dist)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DMinMaxDistance((float)min_dist, (float)max_dist);
	return 0;
}

double fmod_channel_control_set_3d_cone_settings(double channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DConeSettings((float)inside_cone_angle, (float)outside_cone_angle, (float)outside_volume);
	return 0;
}

double fmod_channel_control_set_3d_occlusion(double channel_control_ref, double direct_occlusion, double reverb_occlusion)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DOcclusion((float)direct_occlusion, (float)reverb_occlusion);
	return 0;
}

double fmod_channel_control_set_3d_spread(double channel_control_ref, double angle)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DSpread((float)angle);
	return 0;
}

double fmod_channel_control_get_3d_spread(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float angle = 0.0f;
	g_fmod_last_result = control->get3DSpread(&angle);
	return (double)angle;
}

double fmod_channel_control_set_3d_distance_filter(double channel_control_ref, double custom, double custom_level, double center_freq)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->set3DDistanceFilter(custom != 0.0, (float)custom_level, (float)center_freq);
	return 0;
}

// ============================================================
// Panning & Mixing
// ============================================================

double fmod_channel_control_set_pan(double channel_control_ref, double pan)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setPan((float)pan);
	return 0;
}

double fmod_channel_control_set_mix_levels_output(double channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setMixLevelsOutput((float)front_left, (float)front_right, (float)center, (float)lfe, (float)surround_left, (float)surround_right, (float)back_left, (float)back_right);
	return 0;
}

// ============================================================
// Filtering
// ============================================================

double fmod_channel_control_set_reverb_properties(double channel_control_ref, double reverb_instance, double wet)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setReverbProperties((int)reverb_instance, (float)wet);
	return 0;
}

double fmod_channel_control_get_reverb_properties(double channel_control_ref, double reverb_instance)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	float wet = 0.0f;
	g_fmod_last_result = control->getReverbProperties((int)reverb_instance, &wet);
	return (double)wet;
}

double fmod_channel_control_set_low_pass_gain(double channel_control_ref, double gain)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	g_fmod_last_result = control->setLowPassGain((float)gain);
	return 0;
}

double fmod_channel_control_get_low_pass_gain(double channel_control_ref)
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

double fmod_channel_control_add_dsp(double channel_control_ref, double dsp_chain_offset, const FmodDSPRef& dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = control->addDSP((int)dsp_chain_offset, dsp);
	return 0;
}

double fmod_channel_control_remove_dsp(double channel_control_ref, const FmodDSPRef& dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = control->removeDSP(dsp);
	return 0;
}

double fmod_channel_control_get_num_dsps(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	int num = 0;
	g_fmod_last_result = control->getNumDSPs(&num);
	return (double)num;
}

FmodDSPRef fmod_channel_control_get_dsp(double channel_control_ref, double index)
{
	FmodDSPRef result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	FMOD::DSP* dsp = nullptr;
	g_fmod_last_result = control->getDSP((int)index, &dsp);
	if (g_fmod_last_result == FMOD_OK && dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);
		result._ref = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

double fmod_channel_control_set_dsp_index(double channel_control_ref, const FmodDSPRef& dsp_ref, double chain_index)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = control->setDSPIndex(dsp, (int)chain_index);
	return 0;
}

double fmod_channel_control_get_dsp_index(double channel_control_ref, const FmodDSPRef& dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;
	int index = 0;
	g_fmod_last_result = control->getDSPIndex(dsp, &index);
	return (double)index;
}

// ============================================================
// General
// ============================================================

FmodSystemRef fmod_channel_control_get_system_object(double channel_control_ref)
{
	FmodSystemRef result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;
	FMOD::System* system = nullptr;
	g_fmod_last_result = control->getSystemObject(&system);
	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result._ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}
