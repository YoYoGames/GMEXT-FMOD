
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.03/api/core-api-dsp.html

// Playback control

func double fmod_channel_set_frequency(double channel_ref, double frequency)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	g_fmod_last_result = channel->setFrequency((float)frequency);

	return 0;
}

func double fmod_channel_get_frequency(double channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	float frequency;
	g_fmod_last_result = channel->getFrequency(&frequency);

	return frequency;
}

func double fmod_channel_set_priority(double channel_ref, double priority)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	g_fmod_last_result = channel->setPriority((int)priority);

	return 0;
}

func double fmod_channel_get_priority(double channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	int priority;
	g_fmod_last_result = channel->getPriority(&priority);

	return (double)priority;
}

func double fmod_channel_set_position(double channel_ref, double position, double time_unit)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	g_fmod_last_result = channel->setPosition((unsigned int)position, (FMOD_TIMEUNIT)time_unit);

	return 0;
}

func double fmod_channel_get_position(double channel_ref, double time_unit)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	unsigned int position;
	g_fmod_last_result = channel->getPosition(&position, (FMOD_TIMEUNIT)time_unit);

	return (double)(int)position;
}

func double fmod_channel_set_channel_group(double channel_ref, double channel_group_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group((uint64_t)channel_group_ref, channel_group);

	g_fmod_last_result = channel->setChannelGroup(channel_group);

	return 0;
}

func double fmod_channel_get_channel_group(double channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	FMOD::ChannelGroup* channel_group;
	g_fmod_last_result = channel->getChannelGroup(&channel_group);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto channel_group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
	return (double)packIndexIntoRef(channel_group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
}

func double fmod_channel_set_loop_count(double channel_ref, double loop_count)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	g_fmod_last_result = channel->setLoopCount((int)loop_count);

	return 0;
}

func double fmod_channel_get_loop_count(double channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	int loop_count;
	g_fmod_last_result = channel->getLoopCount(&loop_count);

	return loop_count;
}

func double fmod_channel_set_loop_points(double channel_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	g_fmod_last_result = channel->setLoopPoints((uint32_t)loop_start, (FMOD_TIMEUNIT)loop_start_type, (uint32_t)loop_end, (FMOD_TIMEUNIT)loop_end_type);

	return 0;
}

func double fmod_channel_get_loop_points_multiplatform(double channel_ref, double loop_start_type, double loop_end_type, char* buff_return)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	uint32_t loopstart;
	uint32_t loopend;
	g_fmod_last_result = channel->getLoopPoints(&loopstart, (FMOD_TIMEUNIT)loop_start_type, &loopend, (FMOD_TIMEUNIT)loop_end_type);
	
	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("loop_start", loopstart);
	map_return.addKeyValue("loop_end", loopend);

	map_return.writeTo(buff_return);

	return 0;
}

// Information

func double fmod_channel_is_virtual(double channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	bool isvirtual;
	g_fmod_last_result = channel->isVirtual(&isvirtual);

	return isvirtual ? 1.0 : 0.0;
}

func double fmod_channel_get_current_sound(double channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = channel->getCurrentSound(&sound);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
	return (double)packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
}

func double fmod_channel_get_index(double channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	int index;
	g_fmod_last_result = channel->getIndex(&index);

	return index;
}

// General

func double fmod_channel_get_system_object(double channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	FMOD::System* fmod_system = nullptr;
	g_fmod_last_result = channel->getSystemObject(&fmod_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto system_id = registerOrFindResource(fmod_system, index_systems, map_systems);

	return (double)packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
}