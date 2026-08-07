#include "GMFMOD_channel.h"

using namespace gm_structs;

// ============================================================
// Channel - Frequency
// ============================================================

double fmod_channel_set_frequency(uint64_t channel_ref, double frequency)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setFrequency((float)frequency);
	return 0;
}

double fmod_channel_get_frequency(uint64_t channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0.0;

	float frequency = 0.0f;
	g_fmod_last_result = channel->getFrequency(&frequency);
	return (double)frequency;
}

// ============================================================
// Channel - Priority
// ============================================================

double fmod_channel_set_priority(uint64_t channel_ref, double priority)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setPriority((int)priority);
	return 0;
}

double fmod_channel_get_priority(uint64_t channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0.0;

	int priority = 0;
	g_fmod_last_result = channel->getPriority(&priority);
	return (double)priority;
}

// ============================================================
// Channel - Position
// ============================================================

double fmod_channel_set_position(uint64_t channel_ref, double position, double time_unit)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setPosition((unsigned int)position, (FMOD_TIMEUNIT)(int)time_unit);
	return 0;
}

double fmod_channel_get_position(uint64_t channel_ref, double time_unit)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0.0;

	unsigned int position = 0;
	g_fmod_last_result = channel->getPosition(&position, (FMOD_TIMEUNIT)(int)time_unit);
	return (double)position;
}

// ============================================================
// Channel - Channel Group
// ============================================================

double fmod_channel_set_channel_group(uint64_t channel_ref, uint64_t channel_group_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return 0;

	g_fmod_last_result = channel->setChannelGroup(channel_group);
	return 0;
}

uint64_t fmod_channel_get_channel_group(uint64_t channel_ref)
{
	uint64_t result = 0;

	uint64_t _ref = (uint64_t)channel_ref;
	uint32_t _ref_id = _ref & 0xFFFFFFFF;
	FMOD::Channel* channel = reinterpret_cast<FMOD::Channel*>(static_cast<uintptr_t>(_ref_id));

	if (channel == nullptr)
		return result;

	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = channel->getChannelGroup(&channel_group);

	if (g_fmod_last_result == FMOD_OK && channel_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
		result = packIndexIntoRef(group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

// ============================================================
// Channel - Loop
// ============================================================

double fmod_channel_set_loop_count(uint64_t channel_ref, double loop_count)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setLoopCount((int)loop_count);
	return 0;
}

double fmod_channel_get_loop_count(uint64_t channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0.0;

	int loop_count = 0;
	g_fmod_last_result = channel->getLoopCount(&loop_count);
	return (double)loop_count;
}

double fmod_channel_set_loop_points(uint64_t channel_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setLoopPoints(
		(unsigned int)loop_start, (FMOD_TIMEUNIT)(int)loop_start_type,
		(unsigned int)loop_end, (FMOD_TIMEUNIT)(int)loop_end_type
	);
	return 0;
}

// ============================================================
// Channel - Status
// ============================================================

double fmod_channel_is_virtual(uint64_t channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0.0;

	bool is_virtual = false;
	g_fmod_last_result = channel->isVirtual(&is_virtual);
	return is_virtual ? 1.0 : 0.0;
}

double fmod_channel_get_index(uint64_t channel_ref)
{
	FMOD::Channel* channel = nullptr;
	validate_fmod_channel(channel_ref, channel);

	if (channel == nullptr)
		return 0.0;

	int index = 0;
	g_fmod_last_result = channel->getIndex(&index);
	return (double)index;
}

// ============================================================
// Channel - Sound and System
// ============================================================

uint64_t fmod_channel_get_current_sound(uint64_t channel_ref)
{
	uint64_t result = 0;

	uint64_t _ref = (uint64_t)channel_ref;
	uint32_t _ref_id = _ref & 0xFFFFFFFF;
	FMOD::Channel* channel = reinterpret_cast<FMOD::Channel*>(static_cast<uintptr_t>(_ref_id));

	if (channel == nullptr)
		return result;

	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = channel->getCurrentSound(&sound);

	if (g_fmod_last_result == FMOD_OK && sound != nullptr)
	{
		uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
		result = packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
	}
	return result;
}

uint64_t fmod_channel_get_system_object(uint64_t channel_ref)
{
	uint64_t result = 0;

	uint64_t _ref = (uint64_t)channel_ref;
	uint32_t _ref_id = _ref & 0xFFFFFFFF;
	FMOD::Channel* channel = reinterpret_cast<FMOD::Channel*>(static_cast<uintptr_t>(_ref_id));

	if (channel == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = channel->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}
