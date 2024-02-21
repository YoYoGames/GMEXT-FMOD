
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html

// Playback

func double fmod_channel_control_is_playing(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	bool playing;
	control->isPlaying(&playing);

	return playing ? 1.0 : 0.0;
}

func double fmod_channel_control_stop(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->stop();

	return 0;
}

func double fmod_channel_control_set_paused(double channel_control_ref, double paused)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setPaused(paused >= 0.5);

	return 0;
}

func double fmod_channel_control_get_paused(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	bool paused;

	g_fmod_last_result = control->getPaused(&paused);

	return paused ? 1.0 : 0.0;
}

func double fmod_channel_control_set_mode(double channel_control_ref, double mode)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setMode((FMOD_MODE)mode);

	return 0;
}

func double fmod_channel_control_get_mode(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD_MODE mode;

	g_fmod_last_result = control->getMode(&mode);

	return (double)mode;
}

func double fmod_channel_control_set_pitch(double channel_control_ref, double pitch)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setPitch((float)pitch);

	return 0;
}

func double fmod_channel_control_get_pitch(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float pitch;

	g_fmod_last_result = control->getPitch(&pitch);

	return (double)pitch;
}

// Volume levels

func double fmod_channel_control_get_audibility(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float audibility;

	g_fmod_last_result = control->getAudibility(&audibility);

	return (double)audibility;
}

func double fmod_channel_control_set_volume(double channel_control_ref, double volume)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setVolume((float)volume);

	return 0;
}

func double fmod_channel_control_get_volume(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float volumen;

	g_fmod_last_result = control->getVolume(&volumen);

	return (double)volumen;
}

func double fmod_channel_control_set_volume_ramp(double channel_control_ref, double ramp)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setVolumeRamp(ramp >= 0.5);

	return 0;
}

func double fmod_channel_control_get_volume_ramp(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	bool ramp = false;
	g_fmod_last_result = control->getVolumeRamp(&ramp);

	return ramp;
}

func double fmod_channel_control_set_mute(double channel_control_ref, double mute)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setMute(mute >= 0.5);

	return 0;
}

func double fmod_channel_control_get_mute(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	bool mute;
	g_fmod_last_result = control->getMute(&mute);

	return mute ? 1.0 : 0.0;
}

// Spatialization

func double fmod_channel_control_set_3d_attributes_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_pos = YYGetStruct(args[0]);
	auto map_vel = YYGetStruct(args[1]);

	FMOD_VECTOR vec_pos = FmodVectorFromMap(map_pos);
	FMOD_VECTOR vec_vel = FmodVectorFromMap(map_vel);

	g_fmod_last_result = control->set3DAttributes(&vec_pos, &vec_vel);

	return 0;
}

func double fmod_channel_control_get_3d_attributes_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD_VECTOR vec_pos;
	FMOD_VECTOR vec_vel;

	g_fmod_last_result = control->get3DAttributes(&vec_pos, &vec_vel);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_pos = FmodVectorToGMStruct(vec_pos);
	StructStream map_vel = FmodVectorToGMStruct(vec_vel);

	StructStream map_return = {};
	map_return.addKeyValue("pos", map_pos);
	map_return.addKeyValue("vel", map_vel);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_set_3d_cone_orientation_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_orientation = YYGetStruct(args[0]);

	FMOD_VECTOR vec_orientation = FmodVectorFromMap(map_orientation);

	g_fmod_last_result = control->set3DConeOrientation(&vec_orientation);

	return 0;
}

func double fmod_channel_control_get_3d_cone_orientation_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD_VECTOR vec_orientation;
	g_fmod_last_result = control->get3DConeOrientation(&vec_orientation);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodVectorToGMStruct(vec_orientation);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_set_3d_cone_settings(double channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->set3DConeSettings((float)inside_cone_angle, (float)outside_cone_angle, (float)outside_volume);

	return 0;
}

func double fmod_channel_control_get_3d_cone_settings_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float insideconeangle = 0, outsideconeangle = 0, outsidevolume = 0;
	g_fmod_last_result = control->get3DConeSettings(&insideconeangle, &outsideconeangle, &outsidevolume);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("inside_cone_angle", insideconeangle);
	map_return.addKeyValue("outside_cone_angle", outsideconeangle);
	map_return.addKeyValue("outside_volume", outsidevolume);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_set_3d_custom_rolloff_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto array_points = YYGetArray(args[0]);

	size_t numpoints = array_points.size();

	FMOD_VECTOR points[100]{};
	for (int i = 0; i < numpoints; i++)
	{
		auto map_point = YYGetStruct(array_points[i]);
		points[i] = FmodVectorFromMap(map_point);
	}

	g_fmod_last_result = control->set3DCustomRolloff(points, (int)numpoints);

	return 0;
}

func double fmod_channel_control_get_3d_custom_rolloff_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	// Allocate on stack and create a temporary pointer to the first element of the array
	FMOD_VECTOR* points = nullptr;

	int numpoints = 0;
	g_fmod_last_result = control->get3DCustomRolloff(&points, &numpoints);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_return = {};
	for (int i = 0; i < numpoints; i++)
	{
		vec_return << FmodVectorToGMStruct(points[i]);
	}

	vec_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_set_3d_distance_filter(double channel_control_ref, double custom, double custom_level, double center_freq)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->set3DDistanceFilter(custom >= 0.5, (float)custom_level, (float)center_freq);

	return 0;
}

func double fmod_channel_control_get_3d_distance_filter_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	bool custom = false;
	float customLevel = 0, centerFreq = 0;
	g_fmod_last_result = control->get3DDistanceFilter(&custom, &customLevel, &centerFreq);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("custom", custom);
	map_return.addKeyValue("custom_level", customLevel);
	map_return.addKeyValue("center_freq", centerFreq);
	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_set_3d_doppler_level(double channel_control_ref, double level)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->set3DDopplerLevel((float)level);

	return 0;
}

func double fmod_channel_control_get_3d_doppler_level(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float level;

	g_fmod_last_result = control->get3DDopplerLevel(&level);

	return (double)level;
}

func double fmod_channel_control_set_3d_level(double channel_control_ref, double level)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->set3DLevel((float)level);

	return 0;
}

func double fmod_channel_control_get_3d_level(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float level;
	g_fmod_last_result = control->get3DLevel(&level);

	return (double)level;
}

func double fmod_channel_control_set_3d_min_max_distance(double channel_control_ref, double min, double max)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->set3DMinMaxDistance((float)min, (float)max);

	return 0;
}

func double fmod_channel_control_get_3d_min_max_distance_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float min;
	float max;

	g_fmod_last_result = control->get3DMinMaxDistance(&min, &max);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("min_dist", min);
	map_return.addKeyValue("max_dist", max);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_set_3d_occlusion(double channel_control_ref, double direct_occlusion, double reverb_occlusion)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->set3DOcclusion((float)direct_occlusion, (float)reverb_occlusion);

	return 0;
}

func double fmod_channel_control_get_3d_occlusion_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float directocclusion;
	float reverbocclusion;

	g_fmod_last_result = control->get3DOcclusion(&directocclusion, &reverbocclusion);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("direct", directocclusion);
	map_return.addKeyValue("reverb", reverbocclusion);
	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_set_3d_spread(double channel_control_ref, double angle)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->set3DSpread((float)angle);

	return 0;
}

func double fmod_channel_control_get_3d_spread(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float angle;

	g_fmod_last_result = control->get3DSpread(&angle);

	return (double)angle;
}

// Panning and level adjustment

func double fmod_channel_control_set_pan(double channel_control_ref, double pan)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setPan((float)pan);

	return 0;
}

func double fmod_channel_control_set_mix_levels_input_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto array_levels = YYGetArray(args[0]);

	float levels[100]{};
	size_t numlevels = array_levels.size();
	for (int i = 0; i < numlevels; i++)
	{
		levels[i] = YYGetFloat(array_levels[0]);
	}

	g_fmod_last_result = control->setMixLevelsInput(levels, (int)numlevels);

	return 0;
}

func double fmod_channel_control_set_mix_levels_output(double channel_control_ref,
													   double front_left,
													   double front_right,
													   double center,
													   double lfe,
													   double surround_left,
													   double surround_right,
													   double back_left,
													   double back_right)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setMixLevelsOutput((float)front_left, (float)front_right, (float)center, (float)lfe, (float)surround_left,
												   (float)surround_right, (float)back_left, (float)back_right);

	return 0;
}

func double fmod_channel_control_set_mix_matrix_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto array_matrix = YYGetArray(args[0]);
	auto outchannels = YYGetInt32(args[1]);
	auto inchannels = YYGetInt32(args[2]);
	auto inchannel_hop = YYGetInt32(args[3]);

	float* pMatrix = nullptr;
	float matrix[100]{};

	// Matrix can be optional
	if (array_matrix.size() > 0)
	{
		for (int i = 0; i < array_matrix.size(); i++)
		{
			matrix[i] = YYGetFloat(array_matrix[i]);
		}
		pMatrix = matrix;
	}

	g_fmod_last_result = control->setMixMatrix(pMatrix, outchannels, inchannels, inchannel_hop);

	return 0;
}

func double fmod_channel_control_get_mix_matrix_multiplatform(double channel_control_ref, double in_channel_hop, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	int outchannels;
	int inchannels;
	g_fmod_last_result = control->getMixMatrix(nullptr, &outchannels, &inchannels, (int)in_channel_hop);

	std::vector<float> matrix(outchannels * inchannels);
	g_fmod_last_result = control->getMixMatrix(matrix.data(), &outchannels, &inchannels, (int)in_channel_hop);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_matrix(matrix.size() * sizeof(float));
	for (const auto& value : matrix)
	{
		vec_matrix << value;
	}

	StructStream map_return = {};
	map_return.addKeyValue("matrix", vec_matrix);
	map_return.addKeyValue("out_channels", outchannels);
	map_return.addKeyValue("in_channels", inchannels);
	map_return.writeTo(buff_return);

	return 0;
}

// Filtering

func double fmod_channel_control_set_reverb_properties(double channel_control_ref, double reverb_instance, double wet)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setReverbProperties((int)reverb_instance, (float)wet);

	return 0;
}

func double fmod_channel_control_get_reverb_properties(double channel_control_ref, double reverb_instance)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float wet = 0;
	g_fmod_last_result = control->getReverbProperties((int)reverb_instance, &wet);

	return wet;
}

func double fmod_channel_control_set_low_pass_gain(double channel_control_ref, double gain)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setLowPassGain((float)gain);

	return 0;
}

func double fmod_channel_control_get_low_pass_gain(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	float gain = 0;
	g_fmod_last_result = control->getLowPassGain(&gain);

	return gain;
}

// DSP chain configuration

func double fmod_channel_control_add_dsp(double channel_control_ref, double dsp_chain_offset, double dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = control->addDSP((int)dsp_chain_offset, dsp);

	return 0;
}

func double fmod_channel_control_remove_dsp(double channel_control_ref, double dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = control->removeDSP(dsp);

	return 0;
}

func double fmod_channel_control_get_num_dsps(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	int num;
	g_fmod_last_result = control->getNumDSPs(&num);

	return num;
}

func double fmod_channel_control_get_dsp(double channel_control_ref, double index)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD::DSP* dsp;
	g_fmod_last_result = control->getDSP((int)index, &dsp);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);
	return (double)packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
}

func double fmod_channel_control_set_dsp_index(double channel_control_ref, double dsp_ref, double chain_index)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = control->setDSPIndex(dsp, (int)chain_index);

	return 0;
}

func double fmod_channel_control_get_dsp_index(double channel_control_ref, double dsp_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	auto index = 0;
	control->getDSPIndex(dsp, &index);

	return index;
}

// Sample Accurate Scheduling

func double fmod_channel_control_get_dsp_clock_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	unsigned long long dspclock;
	unsigned long long parentclock;

	g_fmod_last_result = control->getDSPClock(&dspclock, &parentclock);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("dsp_clock", (uint64_t)dspclock);
	map_return.addKeyValue("parent_clock", (uint64_t)parentclock);
	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_set_delay_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto dspclock_start = YYGetUint64(args[0]);
	auto dspclock_end = YYGetUint64(args[1]);
	auto stopchannels = YYGetBool(args[2]);

	g_fmod_last_result = control->setDelay(dspclock_start, dspclock_end, stopchannels);

	return 0;
}

func double fmod_channel_control_get_delay_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	unsigned long long dspclock_start;
	unsigned long long dspclock_end;
	bool stopchannels;

	g_fmod_last_result = control->getDelay(&dspclock_start, &dspclock_end, &stopchannels);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("dsp_clock_start", (uint64_t)dspclock_start);
	map_return.addKeyValue("dsp_clock_end", (uint64_t)dspclock_end);
	map_return.addKeyValue("stop_channels", stopchannels);
	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_channel_control_add_fade_point_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto dspclock = YYGetUint64(args[0]);
	auto volume = YYGetFloat(args[1]);

	g_fmod_last_result = control->addFadePoint(dspclock, (float)volume);

	return 0;
}

func double fmod_channel_control_set_fade_point_ramp_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto dspclock = YYGetUint64(args[0]);
	auto volume = YYGetFloat(args[1]);

	g_fmod_last_result = control->setFadePointRamp(dspclock, (float)volume);

	return 0;
}

func double fmod_channel_control_remove_fade_points_multiplatform(double channel_control_ref, char* buff_args)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto dspclock_start = YYGetUint64(args[0]);
	auto dspclock_end = YYGetUint64(args[1]);

	g_fmod_last_result = control->removeFadePoints(dspclock_start, dspclock_end);

	return 0;
}

func double fmod_channel_control_get_fade_points_multiplatform(double channel_control_ref, char* buff_return)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	uint32_t numpoints;
	g_fmod_last_result = control->getFadePoints(&numpoints, nullptr, nullptr);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_points(numpoints * sizeof(uint64_t));
	ArrayStream vec_volumes(numpoints * sizeof(float));

	float point_volume = 0;
	unsigned long long point_dsp_clock = 0;
	for (uint32_t i = 0; i < numpoints; i++)
	{
		control->getFadePoints(&i, &point_dsp_clock, &point_volume);

		vec_points << (uint64_t)point_dsp_clock;
		vec_volumes << point_volume;
	}

	StructStream map_return = {};
	map_return.addKeyValue("num_points", numpoints);
	map_return.addKeyValue("point_dsp_clock", vec_points);
	map_return.addKeyValue("point_volume", vec_volumes);
	map_return.writeTo(buff_return);

	return 0;
}

// General

FMOD_RESULT CALLBACK_fmod_channel_control(FMOD_CHANNELCONTROL* control,
										  FMOD_CHANNELCONTROL_TYPE controltype,
										  FMOD_CHANNELCONTROL_CALLBACK_TYPE callbacktype,
										  void* commanddata1,
										  void* commanddata2)
{
	FMOD::ChannelControl* channel_control = (FMOD::ChannelControl*)control;

	StructStream async_map = {};
	async_map.addKeyValue("type", "fmod_channel_control_set_callback");
	async_map.addKeyValue("kind", (int)callbacktype);

	switch (controltype)
	{
		case FMOD_CHANNELCONTROL_CHANNEL:
		{
			uint64_t channel_control_ref = packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(channel_control), GM_FMOD_TYPE_CHANNEL);
			async_map.addKeyValue("channel_ref", channel_control_ref);
			break;
		}
		case FMOD_CHANNELCONTROL_CHANNELGROUP:
		{
			FMOD::ChannelGroup* channel_group = (FMOD::ChannelGroup*)channel_control;
			auto channel_group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
			async_map.addKeyValue("channel_group_ref", packIndexIntoRef(channel_group_id, GM_FMOD_TYPE_CHANNEL_GROUP));
			break;
		}
		default:
			break;
	}

	switch (callbacktype)
	{
		case FMOD_CHANNELCONTROL_CALLBACK_END:
			break;
		case FMOD_CHANNELCONTROL_CALLBACK_VIRTUALVOICE:
			break;
		case FMOD_CHANNELCONTROL_CALLBACK_SYNCPOINT:
		{
			async_map.addKeyValue("point_index", (int)(intptr_t)commanddata1);
			break;
		}
		case FMOD_CHANNELCONTROL_CALLBACK_OCCLUSION:
			async_map.addKeyValue("direct_occlusion", *(float*)commanddata1);
			async_map.addKeyValue("reverb_occlusion", *(float*)commanddata2);
			break;
		default:
			break;
	}

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_channel_control_set_callback(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	g_fmod_last_result = control->setCallback(CALLBACK_fmod_channel_control);
	return 0;
}

func double fmod_channel_control_get_system_object(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	FMOD::System* fmod_system = nullptr;
	g_fmod_last_result = control->getSystemObject(&fmod_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto system_id = registerOrFindResource(fmod_system, index_systems, map_systems);

	return (double)packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
}

func double fmod_channel_control_set_user_data(double channel_control_ref, double data)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	uint32_t ref_type = ((uint64_t)channel_control_ref >> 32) & 0xFF;
	if (ref_type == GM_FMOD_TYPE_CHANNEL_GROUP)
	{
		setCustomUserData(control, data);
	}
	else
		control->setUserData((void*)(uint64_t)data);
	return 0;
}

func double fmod_channel_control_get_user_data(double channel_control_ref)
{
	FMOD::ChannelControl* control = nullptr;
	validate_fmod_channel_control(channel_control_ref, control);

	uint32_t ref_type = ((uint64_t)channel_control_ref >> 32) & 0xFF;
	if (ref_type == GM_FMOD_TYPE_CHANNEL_GROUP)
	{
		return getCustomUserData(control);
	}

	void* userData = nullptr;
	control->getUserData(&userData);
	return userData ? (double)(uint64_t)userData : NAN;
}
