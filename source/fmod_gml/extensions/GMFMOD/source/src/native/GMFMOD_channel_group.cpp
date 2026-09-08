#include "GMFMOD_channel_group.h"
#include <string>

using namespace gm_structs;

// ============================================================
// ChannelGroup - Channel Management
// ============================================================

double fmod_channel_group_get_num_channels(uint64_t channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return 0.0;

	int num_channels = 0;
	g_fmod_last_result = channel_group->getNumChannels(&num_channels);
	return (double)num_channels;
}

uint64_t fmod_channel_group_get_channel(uint64_t channel_group_ref, double index)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = channel_group->getChannel((int)index, &channel);

	if (g_fmod_last_result == FMOD_OK && channel != nullptr)
	{
			result = packPointerIntoRef(channel, GM_FMOD_TYPE_CHANNEL);
	}
	return result;
}

// ============================================================
// ChannelGroup - Group Management
// ============================================================

uint64_t fmod_channel_group_add_group(uint64_t channel_group_ref, uint64_t child_channel_group_ref, double propagate_dsp_clock)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* child_channel_group = nullptr;
	validate_fmod_channel_group(child_channel_group_ref, child_channel_group);

	if (child_channel_group == nullptr)
		return result;

	FMOD::DSPConnection* dsp_connection = nullptr;
	g_fmod_last_result = channel_group->addGroup(child_channel_group, propagate_dsp_clock != 0.0, &dsp_connection);

	if (g_fmod_last_result == FMOD_OK && dsp_connection != nullptr)
	{
		uint32_t dsp_connection_id = registerOrFindResource(dsp_connection, index_dsp_connections, map_dsp_connections);
		result = packIndexIntoRef(dsp_connection_id, GM_FMOD_TYPE_DSP_CONNECTION);
	}
	return result;
}

double fmod_channel_group_get_num_groups(uint64_t channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return 0.0;

	int num_groups = 0;
	g_fmod_last_result = channel_group->getNumGroups(&num_groups);
	return (double)num_groups;
}

uint64_t fmod_channel_group_get_group(uint64_t channel_group_ref, double group_index)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* child_group = nullptr;
	g_fmod_last_result = channel_group->getGroup((int)group_index, &child_group);

	if (g_fmod_last_result == FMOD_OK && child_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(child_group, index_channel_groups, map_channel_groups);
		result = packIndexIntoRef(group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

uint64_t fmod_channel_group_get_parent_group(uint64_t channel_group_ref)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* parent_group = nullptr;
	g_fmod_last_result = channel_group->getParentGroup(&parent_group);

	if (g_fmod_last_result == FMOD_OK && parent_group != nullptr)
	{
		uint32_t parent_id = registerOrFindResource(parent_group, index_channel_groups, map_channel_groups);
		result = packIndexIntoRef(parent_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

// ============================================================
// ChannelGroup - General
// ============================================================

std::string fmod_channel_group_get_name(uint64_t channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return "";

	char buffer[256] = {};
	g_fmod_last_result = channel_group->getName(buffer, sizeof(buffer));
	return std::string(buffer);
}

double fmod_channel_group_release(uint64_t channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return 0;

	// Unregister first: unregisterResource reads the object's user-data slot,
	// which is gone once release() has run.
	unregisterResource(channel_group, map_channel_groups);
	g_fmod_last_result = channel_group->release();
	return 0;
}

uint64_t fmod_channel_group_get_system_object(uint64_t channel_group_ref)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = channel_group->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}
