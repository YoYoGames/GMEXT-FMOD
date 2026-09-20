#include "GMFMOD_channel.h"

using namespace gm_structs;

// ============================================================
// Channel - Frequency
// ============================================================

double fmod_channel_set_frequency(uint64_t channel_ref, double frequency)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setFrequency((float)frequency);
	return 0;
}

double fmod_channel_get_frequency(uint64_t channel_ref)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

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
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setPriority((int)priority);
	return 0;
}

double fmod_channel_get_priority(uint64_t channel_ref)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0.0;

	int priority = 0;
	g_fmod_last_result = channel->getPriority(&priority);
	return (double)priority;
}

// ============================================================
// Channel - Position
// ============================================================

double fmod_channel_set_position(uint64_t channel_ref, double position, gm_enums::FmodTimeUnit time_unit)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setPosition((unsigned int)position, (FMOD_TIMEUNIT)(std::uint64_t)time_unit);
	return 0;
}

double fmod_channel_get_position(uint64_t channel_ref, gm_enums::FmodTimeUnit time_unit)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0.0;

	unsigned int position = 0;
	g_fmod_last_result = channel->getPosition(&position, (FMOD_TIMEUNIT)(std::uint64_t)time_unit);
	return (double)position;
}

// ============================================================
// Channel - Channel Group
// ============================================================

double fmod_channel_set_channel_group(uint64_t channel_ref, uint64_t channel_group_ref)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0;

	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return 0;

	g_fmod_last_result = channel->setChannelGroup(channel_group);
	return 0;
}

uint64_t fmod_channel_get_channel_group(uint64_t channel_ref)
{
	uint64_t result = 0;

	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return result;

	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = channel->getChannelGroup(&channel_group);

	if (g_fmod_last_result == FMOD_OK && channel_group != nullptr)
	{
		uint32_t group_id = g_registries.channelGroups.registerOrFind(channel_group);
		result = gmfmod::packRef(group_id, gmfmod::RefType::ChannelGroup);
	}
	return result;
}

// ============================================================
// Channel - Loop
// ============================================================

double fmod_channel_set_loop_count(uint64_t channel_ref, double loop_count)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setLoopCount((int)loop_count);
	return 0;
}

double fmod_channel_get_loop_count(uint64_t channel_ref)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0.0;

	int loop_count = 0;
	g_fmod_last_result = channel->getLoopCount(&loop_count);
	return (double)loop_count;
}

double fmod_channel_set_loop_points(uint64_t channel_ref, double loop_start, gm_enums::FmodTimeUnit loop_start_type, double loop_end, gm_enums::FmodTimeUnit loop_end_type)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return 0;

	g_fmod_last_result = channel->setLoopPoints(
		(unsigned int)loop_start, (FMOD_TIMEUNIT)(std::uint64_t)loop_start_type,
		(unsigned int)loop_end, (FMOD_TIMEUNIT)(std::uint64_t)loop_end_type
	);
	return 0;
}

FmodLoopPoints fmod_channel_get_loop_points(uint64_t channel_ref, gm_enums::FmodTimeUnit start_type, gm_enums::FmodTimeUnit end_type)
{
	FmodLoopPoints result{};
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);
	if (channel == nullptr) return result;

	unsigned int loop_start = 0, loop_end = 0;
	g_fmod_last_result = channel->getLoopPoints(
		&loop_start, (FMOD_TIMEUNIT)(std::uint64_t)start_type,
		&loop_end, (FMOD_TIMEUNIT)(std::uint64_t)end_type
	);

	result.loop_start = (double)loop_start;
	result.loop_end = (double)loop_end;
	return result;
}

// ============================================================
// Channel - Status
// ============================================================

bool fmod_channel_is_virtual(uint64_t channel_ref)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return false;

	bool is_virtual = false;
	g_fmod_last_result = channel->isVirtual(&is_virtual);
	return is_virtual;
}

double fmod_channel_get_index(uint64_t channel_ref)
{
	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

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

	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return result;

	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = channel->getCurrentSound(&sound);

	if (g_fmod_last_result == FMOD_OK && sound != nullptr)
	{
		uint32_t sound_id = g_registries.sounds.registerOrFind(sound);
		result = gmfmod::packRef(sound_id, gmfmod::RefType::Sound);
	}
	return result;
}

uint64_t fmod_channel_get_system_object(uint64_t channel_ref)
{
	uint64_t result = 0;

	FMOD::Channel* channel = resolve_fmod_channel(channel_ref);

	if (channel == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = channel->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = g_registries.systems.registerOrFind(system);
		result = gmfmod::packRef(system_id, gmfmod::RefType::System);
	}
	return result;
}
