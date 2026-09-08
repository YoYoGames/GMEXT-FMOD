#include "GMFMOD_reverb_3d.h"

using namespace gm_structs;

// ============================================================
// Reverb3D - Configuration
// ============================================================

double fmod_reverb_3d_set_active(uint64_t reverb_3d_ref, double active)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	if (reverb_3d == nullptr)
		return 0;

	g_fmod_last_result = reverb_3d->setActive(active != 0.0);
	return 0;
}

double fmod_reverb_3d_get_active(uint64_t reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	if (reverb_3d == nullptr)
		return 0.0;

	bool active = false;
	g_fmod_last_result = reverb_3d->getActive(&active);
	return active ? 1.0 : 0.0;
}

double fmod_reverb_3d_set_properties(uint64_t reverb_3d_ref, double decay_time, double early_delay, double late_delay, double hf_reference, double hf_decay_ratio, double diffusion, double density, double low_shelf_frequency, double low_shelf_gain, double high_cut, double early_late_mix, double wet_level)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	if (reverb_3d == nullptr)
		return 0;

	FMOD_REVERB_PROPERTIES props = {};
	props.DecayTime = (float)decay_time;
	props.EarlyDelay = (float)early_delay;
	props.LateDelay = (float)late_delay;
	props.HFReference = (float)hf_reference;
	props.HFDecayRatio = (float)hf_decay_ratio;
	props.Diffusion = (float)diffusion;
	props.Density = (float)density;
	props.LowShelfFrequency = (float)low_shelf_frequency;
	props.LowShelfGain = (float)low_shelf_gain;
	props.HighCut = (float)high_cut;
	props.EarlyLateMix = (float)early_late_mix;
	props.WetLevel = (float)wet_level;

	g_fmod_last_result = reverb_3d->setProperties(&props);
	return 0;
}

FmodReverbProperties fmod_reverb_3d_get_properties(uint64_t reverb_3d_ref)
{
	FmodReverbProperties result{};
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);
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
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);
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
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);
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

double fmod_reverb_3d_set_user_data(uint64_t reverb_3d_ref, double user_data)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);
	if (reverb_3d == nullptr) return 0;

	setResourceUserData(reverb_3d, user_data);
	return 0;
}

double fmod_reverb_3d_get_user_data(uint64_t reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);
	if (reverb_3d == nullptr) return 0.0;

	return getResourceUserData(reverb_3d);
}

// ============================================================
// Reverb3D - General
// ============================================================

double fmod_reverb_3d_release(uint64_t reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	if (reverb_3d == nullptr)
		return 0;

	// Unregister first: unregisterResource reads the object's user-data slot,
	// which is gone once release() has run.
	unregisterResource(reverb_3d, map_reverbs);
	g_fmod_last_result = reverb_3d->release();
	return 0;
}
