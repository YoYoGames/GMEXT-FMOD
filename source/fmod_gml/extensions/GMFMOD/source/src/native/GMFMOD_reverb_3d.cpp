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

// ============================================================
// Reverb3D - General
// ============================================================

double fmod_reverb_3d_release(uint64_t reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	if (reverb_3d == nullptr)
		return 0;

	g_fmod_last_result = reverb_3d->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(reverb_3d, map_reverbs);
	}
	return 0;
}
