
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html

std::map<uint32_t, FMOD::Reverb3D*> map_reverbs = {};
uint32_t index_reverbs = 0;

// General

func double fmod_reverb_3d_set_3d_attributes_multiplatform(double reverb_3d_ref, char* buff_args, double min_distance, double max_distance)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_position = YYGetStruct(args[0]);

	FMOD_VECTOR vec_position = FmodVectorFromMap(map_position);
	g_fmod_last_result = reverb_3d->set3DAttributes(&vec_position, (float)min_distance, (float)max_distance);

	return 0;
}

func double fmod_reverb_3d_get_3d_attributes_multiplatform(double reverb_3d_ref, char* buff_return)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	FMOD_VECTOR vec_position;
	float mindistance;
	float maxdistance;
	g_fmod_last_result = reverb_3d->get3DAttributes(&vec_position, &mindistance, &maxdistance);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_position = FmodVectorToGMStruct(vec_position);

	StructStream map_return = {};
	map_return.addKeyValue("min_distance", mindistance);
	map_return.addKeyValue("max_distance", maxdistance);
	map_return.addKeyValue("position", map_position);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_reverb_3d_set_properties(double reverb_3d_ref,
										  double decay_time,
										  double early_delay,
										  double late_delay,
										  double hf_reference,
										  double hf_decay_ratio,
										  double diffusion,
										  double density,
										  double low_shelf_frequency,
										  double low_shelf_gain,
										  double high_cut,
										  double early_late_mix,
										  double wet_level)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	FMOD_REVERB_PROPERTIES exinfo = {0};
	exinfo.DecayTime = (float)decay_time;
	exinfo.EarlyDelay = (float)early_delay;
	exinfo.LateDelay = (float)late_delay;
	exinfo.HFReference = (float)hf_reference;
	exinfo.HFDecayRatio = (float)hf_decay_ratio;
	exinfo.Diffusion = (float)diffusion;
	exinfo.Density = (float)density;
	exinfo.LowShelfFrequency = (float)low_shelf_frequency;
	exinfo.LowShelfGain = (float)low_shelf_gain;
	exinfo.HighCut = (float)high_cut;
	exinfo.EarlyLateMix = (float)early_late_mix;
	exinfo.WetLevel = (float)wet_level;

	g_fmod_last_result = reverb_3d->setProperties(&exinfo);

	return 0;
}

func double fmod_reverb_3d_get_properties_multiplatform(double reverb_3d_ref, char* buff_return)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	FMOD_REVERB_PROPERTIES exinfo = {0};
	g_fmod_last_result = reverb_3d->getProperties(&exinfo);

	StructStream map_return = {};
	map_return.addKeyValue("decay_time", exinfo.DecayTime);
	map_return.addKeyValue("early_delay", exinfo.EarlyDelay);
	map_return.addKeyValue("late_delay", exinfo.LateDelay);
	map_return.addKeyValue("hf_reference", exinfo.HFReference);
	map_return.addKeyValue("hf_decay_ratio", exinfo.HFDecayRatio);
	map_return.addKeyValue("diffusion", exinfo.Diffusion);
	map_return.addKeyValue("density", exinfo.Density);
	map_return.addKeyValue("low_shelf_frequency", exinfo.LowShelfFrequency);
	map_return.addKeyValue("low_shelf_gain", exinfo.LowShelfGain);
	map_return.addKeyValue("high_cut", exinfo.HighCut);
	map_return.addKeyValue("early_late_mix", exinfo.EarlyLateMix);
	map_return.addKeyValue("wet_level", exinfo.WetLevel);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_reverb_3d_set_active(double reverb_3d_ref, double active)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	g_fmod_last_result = reverb_3d->setActive(active >= 0.5);

	return 0;
}

func double fmod_reverb_3d_get_active(double reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	bool active;
	g_fmod_last_result = reverb_3d->getActive(&active);

	return active;
}

func double fmod_reverb_3d_release(double reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	unregisterResource(reverb_3d, map_reverbs);

	g_fmod_last_result = reverb_3d->release();

	return 0;
}

func double fmod_reverb_3d_set_user_data(double reverb_3d_ref, double data)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	setCustomUserData(reverb_3d, data);
	return 0;
}

func double fmod_reverb_3d_get_user_data(double reverb_3d_ref)
{
	FMOD::Reverb3D* reverb_3d = nullptr;
	validate_fmod_reverb_3d(reverb_3d_ref, reverb_3d);

	return getCustomUserData(reverb_3d);
}
