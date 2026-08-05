#include "GMFMOD_channel_group.h"
#include <string>

using namespace gm_structs;

// ============================================================
// ChannelGroup - Channel Management
// ============================================================

double fmod_channel_group_get_num_channels(const FmodChannelGroupRef& channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return 0.0;

	int num_channels = 0;
	g_fmod_last_result = channel_group->getNumChannels(&num_channels);
	return (double)num_channels;
}

FmodChannelRef fmod_channel_group_get_channel(const FmodChannelGroupRef& channel_group_ref, double index)
{
	FmodChannelRef result{};

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = channel_group->getChannel((int)index, &channel);

	if (g_fmod_last_result == FMOD_OK && channel != nullptr)
	{
		uint32_t channel_id = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(channel));
		result._ref = packIndexIntoRef(channel_id, GM_FMOD_TYPE_CHANNEL);
	}
	return result;
}

// ============================================================
// ChannelGroup - Group Management
// ============================================================

FmodDSPConnectionRef fmod_channel_group_add_group(const FmodChannelGroupRef& channel_group_ref, const FmodChannelGroupRef& child_channel_group_ref, double propagate_dsp_clock)
{
	FmodDSPConnectionRef result{};

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* child_channel_group = nullptr;
	validate_fmod_channel_group(child_channel_group_ref._ref, child_channel_group);

	if (child_channel_group == nullptr)
		return result;

	FMOD::DSPConnection* dsp_connection = nullptr;
	g_fmod_last_result = channel_group->addGroup(child_channel_group, propagate_dsp_clock != 0.0, &dsp_connection);

	if (g_fmod_last_result == FMOD_OK && dsp_connection != nullptr)
	{
		uint32_t dsp_connection_id = registerOrFindResource(dsp_connection, index_dsp_connections, map_dsp_connections);
		result._ref = packIndexIntoRef(dsp_connection_id, GM_FMOD_TYPE_DSP_CONNECTION);
	}
	return result;
}

double fmod_channel_group_get_num_groups(const FmodChannelGroupRef& channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return 0.0;

	int num_groups = 0;
	g_fmod_last_result = channel_group->getNumGroups(&num_groups);
	return (double)num_groups;
}

FmodChannelGroupRef fmod_channel_group_get_group(const FmodChannelGroupRef& channel_group_ref, double group_index)
{
	FmodChannelGroupRef result{};

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* child_group = nullptr;
	g_fmod_last_result = channel_group->getGroup((int)group_index, &child_group);

	if (g_fmod_last_result == FMOD_OK && child_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(child_group, index_channel_groups, map_channel_groups);
		result._ref = packIndexIntoRef(group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

FmodChannelGroupRef fmod_channel_group_get_parent_group(const FmodChannelGroupRef& channel_group_ref)
{
	FmodChannelGroupRef result{};

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* parent_group = nullptr;
	g_fmod_last_result = channel_group->getParentGroup(&parent_group);

	if (g_fmod_last_result == FMOD_OK && parent_group != nullptr)
	{
		uint32_t parent_id = registerOrFindResource(parent_group, index_channel_groups, map_channel_groups);
		result._ref = packIndexIntoRef(parent_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

// ============================================================
// ChannelGroup - General
// ============================================================

std::string fmod_channel_group_get_name(const FmodChannelGroupRef& channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return "";

	char buffer[256] = {};
	g_fmod_last_result = channel_group->getName(buffer, sizeof(buffer));
	return std::string(buffer);
}

double fmod_channel_group_release(const FmodChannelGroupRef& channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return 0;

	g_fmod_last_result = channel_group->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(channel_group, map_channel_groups);
	}
	return 0;
}

FmodSystemRef fmod_channel_group_get_system_object(const FmodChannelGroupRef& channel_group_ref)
{
	FmodSystemRef result{};

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = channel_group->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result._ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}
