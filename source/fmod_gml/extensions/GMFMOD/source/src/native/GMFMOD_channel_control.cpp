#include "GMFMOD_channel_control.h"
#include <cstring>
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
	g_fmod_last_result = control->setMode((FMOD_MODE)fmod_flag_word(mode));
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

// set3DCustomRolloff stores the FMOD_VECTOR* it is handed verbatim -
// get3DCustomRolloff gives the very same address back - so a GML buffer can
// never be passed through: the mixer thread would read freed memory the moment
// GML resized or freed it. Each control that has a curve owns a copy here.
// Keys are the truncated pointer the GML refs carry, matching the callback
// table below so CALLBACK_END can reclaim both in one pass.
static std::mutex g_channel_rolloff_mutex;
static std::map<uintptr_t, std::vector<FMOD_VECTOR>> g_channel_rolloff;

void fmod_channel_control_forget_rolloff(const void* control)
{
	std::lock_guard<std::mutex> lock(g_channel_rolloff_mutex);
	g_channel_rolloff.erase(reinterpret_cast<uintptr_t>(control) & 0xFFFFFFFFu);
}

double fmod_channel_control_set_3d_custom_rolloff(uint64_t channel_control_ref, gm::wire::GMBuffer points, double num_points)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	const uintptr_t control_ptr = reinterpret_cast<uintptr_t>(control) & 0xFFFFFFFFu;
	const int count = (int)num_points;

	// Disabling: point FMOD away from our copy before reclaiming it, never the
	// other way round.
	if (count <= 0 || points.data() == nullptr)
	{
		g_fmod_last_result = control->set3DCustomRolloff(nullptr, 0);
		if (g_fmod_last_result == FMOD_OK)
			fmod_channel_control_forget_rolloff(control);
		return 0;
	}

	// A GML buffer holds num_points packed FMOD_VECTOR (3 x f32).
	if (points.length() < (uint64_t)count * sizeof(FMOD_VECTOR))
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0;
	}

	const FMOD_VECTOR* src = reinterpret_cast<const FMOD_VECTOR*>(points.data());
	std::vector<FMOD_VECTOR> owned(src, src + count);

	// Swap the previous curve out into a local instead of overwriting in place:
	// FMOD still points at it until set3DCustomRolloff returns, so it must not be
	// freed before then. The local dies at the end of this function, by which
	// point FMOD points at the new copy - or has been restored to the old one.
	std::vector<FMOD_VECTOR> previous;
	FMOD_VECTOR* data = nullptr;
	{
		std::lock_guard<std::mutex> lock(g_channel_rolloff_mutex);
		std::vector<FMOD_VECTOR>& slot = g_channel_rolloff[control_ptr];
		previous.swap(slot);
		slot.swap(owned);
		data = slot.data();
	}

	g_fmod_last_result = control->set3DCustomRolloff(data, count);

	if (g_fmod_last_result != FMOD_OK)
	{
		// The new pointer was rejected, so FMOD is still pointing at the previous
		// curve. Put that buffer back - swapping a vector preserves its address,
		// which is the address FMOD holds - and let the new copy die instead.
		std::lock_guard<std::mutex> lock(g_channel_rolloff_mutex);
		if (previous.empty())
			g_channel_rolloff.erase(control_ptr);
		else
			g_channel_rolloff[control_ptr].swap(previous);
		return 0;
	}

	// A Channel has no other end-of-life signal, so arm the trampoline that
	// CALLBACK_END arrives on. A ChannelGroup never gets CALLBACK_END;
	// fmod_channel_group_release calls fmod_channel_control_forget_rolloff
	// instead. If arming fails the entry is deliberately kept rather than freed,
	// because FMOD is pointing at it - fmod_channel_control_reset_state() is the
	// backstop.
	if (gm_fmod_ref_type(channel_control_ref) != GM_FMOD_TYPE_CHANNEL_GROUP)
		fmod_channel_control_arm_end_hook(control);
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

double fmod_channel_control_get_3d_custom_rolloff(uint64_t channel_control_ref, gm::wire::GMBuffer points)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0.0;

	FMOD_VECTOR* curve = nullptr;
	int num_points = 0;
	g_fmod_last_result = control->get3DCustomRolloff(&curve, &num_points);
	if (g_fmod_last_result != FMOD_OK || curve == nullptr || num_points <= 0)
		return 0.0;

	const uint64_t required = (uint64_t)num_points * sizeof(FMOD_VECTOR);

	// Nothing is written unless the whole curve fits; the caller resizes to the
	// returned byte count and calls again.
	if (points.data() != nullptr && points.length() >= required)
		std::memcpy(points.data(), curve, (size_t)required);

	return (double)required;
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

double fmod_channel_control_set_mix_levels_input(uint64_t channel_control_ref, gm::wire::GMBuffer levels, double num_levels)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	const int count = (int)num_levels;
	if (count <= 0 || levels.data() == nullptr || levels.length() < (uint64_t)count * sizeof(float))
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0;
	}

	// setMixLevelsInput feeds the same FMOD-owned matrix setMixMatrix writes into
	// (fmod.hpp:291), so nothing here has to outlive the call.
	g_fmod_last_result = control->setMixLevelsInput((float*)levels.data(), count);
	return 0;
}

double fmod_channel_control_set_mix_matrix(uint64_t channel_control_ref, gm::wire::GMBuffer matrix, double out_channels, double in_channels, double in_channel_hop)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	int out = (int)out_channels;
	int in = (int)in_channels;
	int hop = (int)in_channel_hop;

	// FMOD reads a null matrix as "drop back to the default mix". The generated
	// GML wrapper rejects anything that is not an existing buffer, so this branch
	// is unreachable from GML today - a GML caller that wants the default back
	// writes an identity matrix. It is kept because the check costs nothing and
	// the alternative is dereferencing a null pointer if that ever changes.
	if (matrix.data() == nullptr)
	{
		g_fmod_last_result = control->setMixMatrix(nullptr, out, in, hop);
		return 0;
	}

	if (out <= 0 || in <= 0)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0;
	}

	// FMOD indexes the caller's storage as matrix[t * hop + s], so the hop -
	// not in_channels - is what decides how far the last row reaches.
	uint64_t required = (uint64_t)out * (uint64_t)(hop > 0 ? hop : in) * sizeof(float);
	if (matrix.length() < required)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0;
	}

	// setMixMatrix copies into FMOD's own matrix, so the GML buffer may be freed
	// the moment this returns.
	g_fmod_last_result = control->setMixMatrix((float*)matrix.data(), out, in, hop);
	return 0;
}

gm_structs::FmodDSPMixMatrix fmod_channel_control_get_mix_matrix(uint64_t channel_control_ref, gm::wire::GMBuffer matrix, double in_channel_hop)
{
	FmodDSPMixMatrix result{};
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return result;

	int out_channels = 0, in_channels = 0;
	int hop = (int)in_channel_hop;
	g_fmod_last_result = control->getMixMatrix(nullptr, &out_channels, &in_channels, hop);

	result.out_channels = (double)out_channels;
	result.in_channels = (double)in_channels;
	if (g_fmod_last_result != FMOD_OK)
		return result;

	// FMOD indexes the caller's storage as matrix[t * hop + s], so the hop -
	// not in_channels - is what decides the size needed.
	uint64_t required = (uint64_t)out_channels * (uint64_t)(hop > 0 ? hop : in_channels) * sizeof(float);
	result.required_bytes = (double)required;

	// Nothing is written unless the whole matrix fits. The caller resizes to
	// required_bytes and calls again.
	if (required == 0 || matrix.data() == nullptr || matrix.length() < required)
		return result;

	g_fmod_last_result = control->getMixMatrix((float*)matrix.data(), &out_channels, &in_channels, hop);
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

// The value lives in FMOD's slot on the channel itself, so a stolen or ended
// channel takes it with it and setUserData reports the dead handle.
double fmod_channel_control_set_user_data(uint64_t channel_control_ref, int64_t user_data)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	setResourceUserData(control, user_data);
	return 0;
}

int64_t fmod_channel_control_get_user_data(uint64_t channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);
	if (control == nullptr) return 0;

	return getResourceUserData(control);
}

// ============================================================
// Callbacks
// ============================================================

// FMOD Core dispatches ChannelControl callbacks from System::update() on the
// calling thread, so contention here is unlikely - but that is a property of
// how FMOD schedules rather than anything this code enforces, and the map is
// reachable from fmod_channel_control_set_callback on the game thread either
// way. Lock it, and fire the GML callback only after the lock is released.
static std::mutex g_channel_callback_mutex;
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
	const bool ended = (callbacktype == FMOD_CHANNELCONTROL_CALLBACK_END);

	std::optional<gm::wire::GMFunction> callback;
	{
		std::lock_guard<std::mutex> lock(g_channel_callback_mutex);
		auto it = g_channel_callbacks.find(control_ptr);
		if (it != g_channel_callbacks.end())
		{
			callback = it->second;

			// The channel handle dies once playback ends; drop the entry so a
			// recycled pointer does not inherit this callback.
			if (ended)
				g_channel_callbacks.erase(it);
		}
	}

	// Runs whether or not GML registered a callback - set_3d_custom_rolloff arms
	// this hook precisely so the rolloff copy gets an end-of-life signal.
	if (ended)
	{
		// The channel is gone, so FMOD is no longer reading the rolloff copy.
		std::lock_guard<std::mutex> lock(g_channel_rolloff_mutex);
		g_channel_rolloff.erase(control_ptr);
	}

	if (callback.has_value())
	{
		uint64_t channel_ref = packIndexIntoRef((uint32_t)control_ptr, GM_FMOD_TYPE_CHANNEL);
		callback.value().call(channel_ref, (double)(int)callbacktype);
	}
	return FMOD_OK;
}

FMOD_RESULT fmod_channel_control_arm_end_hook(FMOD::ChannelControl* control)
{
	if (control == nullptr) return FMOD_ERR_INVALID_HANDLE;
	return control->setCallback(CALLBACK_fmod_channel_control);
}

void fmod_channel_control_reset_state()
{
	{
		std::lock_guard<std::mutex> lock(g_channel_callback_mutex);
		g_channel_callbacks.clear();
	}
	std::lock_guard<std::mutex> lock(g_channel_rolloff_mutex);
	g_channel_rolloff.clear();
}

double fmod_channel_control_set_callback(uint64_t channel_ref, const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);
	if (channel == nullptr) return 0;

	uintptr_t control_ptr = reinterpret_cast<uintptr_t>(channel) & 0xFFFFFFFFu;

	if (!callback.has_value())
	{
		{
			std::lock_guard<std::mutex> lock(g_channel_callback_mutex);
			g_channel_callbacks.erase(control_ptr);
		}

		// Keep the trampoline installed while this channel still has a rolloff
		// copy to reclaim; clearing it would strip the only CALLBACK_END we get,
		// and the rolloff copy is memory FMOD is actively reading.
		bool keep_hook = false;
		{
			std::lock_guard<std::mutex> lock(g_channel_rolloff_mutex);
			keep_hook = g_channel_rolloff.count(control_ptr) != 0;
		}
		g_fmod_last_result = channel->setCallback(keep_hook ? CALLBACK_fmod_channel_control : nullptr);
		return 0;
	}

	{
		std::lock_guard<std::mutex> lock(g_channel_callback_mutex);
		g_channel_callbacks.insert_or_assign(control_ptr, callback.value());
	}
	g_fmod_last_result = channel->setCallback(CALLBACK_fmod_channel_control);
	if (g_fmod_last_result != FMOD_OK)
	{
		std::lock_guard<std::mutex> lock(g_channel_callback_mutex);
		g_channel_callbacks.erase(control_ptr);
	}
	return 0;
}
