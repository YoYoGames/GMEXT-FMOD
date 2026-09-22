#include "GMFMOD_reverb_3d.h"

using namespace gm_structs;

// ============================================================
// Reverb3D - Configuration
// ============================================================

double fmod_reverb_3d_set_active(uint64_t reverb_3d_ref, bool active)
{
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);

	if (reverb_3d == nullptr)
		return 0;

	g_fmod_last_result = reverb_3d->setActive(active);
	return 0;
}

bool fmod_reverb_3d_get_active(uint64_t reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);

	if (reverb_3d == nullptr)
		return false;

	bool active = false;
	g_fmod_last_result = reverb_3d->getActive(&active);
	return active;
}

double fmod_reverb_3d_set_properties(uint64_t reverb_3d_ref, const FmodReverbProperties& props)
{
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);

	if (reverb_3d == nullptr)
		return 0;

	FMOD_REVERB_PROPERTIES native_props = {};
	native_props.DecayTime = (float)props.decay_time;
	native_props.EarlyDelay = (float)props.early_delay;
	native_props.LateDelay = (float)props.late_delay;
	native_props.HFReference = (float)props.hf_reference;
	native_props.HFDecayRatio = (float)props.hf_decay_ratio;
	native_props.Diffusion = (float)props.diffusion;
	native_props.Density = (float)props.density;
	native_props.LowShelfFrequency = (float)props.low_shelf_frequency;
	native_props.LowShelfGain = (float)props.low_shelf_gain;
	native_props.HighCut = (float)props.high_cut;
	native_props.EarlyLateMix = (float)props.early_late_mix;
	native_props.WetLevel = (float)props.wet_level;

	g_fmod_last_result = reverb_3d->setProperties(&native_props);
	return 0;
}

FmodReverbProperties fmod_reverb_3d_get_properties(uint64_t reverb_3d_ref)
{
	FmodReverbProperties result{};
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);
	if (reverb_3d == nullptr) return result;

	FMOD_REVERB_PROPERTIES props{};
	g_fmod_last_result = reverb_3d->getProperties(&props);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.decay_time = (double)props.DecayTime;
	result.early_delay = (double)props.EarlyDelay;
	result.late_delay = (double)props.LateDelay;
	result.hf_reference = (double)props.HFReference;
	result.hf_decay_ratio = (double)props.HFDecayRatio;
	result.diffusion = (double)props.Diffusion;
	result.density = (double)props.Density;
	result.low_shelf_frequency = (double)props.LowShelfFrequency;
	result.low_shelf_gain = (double)props.LowShelfGain;
	result.high_cut = (double)props.HighCut;
	result.early_late_mix = (double)props.EarlyLateMix;
	result.wet_level = (double)props.WetLevel;
	return result;
}

double fmod_reverb_3d_set_3d_attributes(uint64_t reverb_3d_ref, const FmodVec3& position, double min_distance, double max_distance)
{
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);
	if (reverb_3d == nullptr) return 0;

	FMOD_VECTOR pos{};
	pos.x = (float)position.x;
	pos.y = (float)position.y;
	pos.z = (float)position.z;

	g_fmod_last_result = reverb_3d->set3DAttributes(&pos, (float)min_distance, (float)max_distance);
	return 0;
}

FmodReverb3DAttributes fmod_reverb_3d_get_3d_attributes(uint64_t reverb_3d_ref)
{
	FmodReverb3DAttributes result{};
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);
	if (reverb_3d == nullptr) return result;

	FMOD_VECTOR pos{};
	float min_distance = 0.0f, max_distance = 0.0f;
	g_fmod_last_result = reverb_3d->get3DAttributes(&pos, &min_distance, &max_distance);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.position.x = (double)pos.x;
	result.position.y = (double)pos.y;
	result.position.z = (double)pos.z;
	result.min_distance = (double)min_distance;
	result.max_distance = (double)max_distance;
	return result;
}

double fmod_reverb_3d_set_user_data(uint64_t reverb_3d_ref, int64_t user_data)
{
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);
	if (reverb_3d == nullptr) return 0;

	gmfmod::setUserData(reverb_3d, user_data, g_fmod_last_result);
	return 0;
}

int64_t fmod_reverb_3d_get_user_data(uint64_t reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);
	if (reverb_3d == nullptr) return 0;

	return gmfmod::getUserData(reverb_3d, g_fmod_last_result);
}

// ============================================================
// Reverb3D - General
// ============================================================

double fmod_reverb_3d_release(uint64_t reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = resolve_fmod_reverb_3d(reverb_3d_ref);

	if (reverb_3d == nullptr)
		return 0;

	g_registries.reverbs.unregister(reverb_3d);
	g_fmod_last_result = reverb_3d->release();
	return 0;
}
