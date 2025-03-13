
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html

std::map<uint32_t, FMOD::ChannelGroup*> map_channel_groups = {};
uint32_t index_channel_groups = 0;

// Channel management

func double fmod_channel_group_get_num_channels(double channel_group_ref)
{
	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	int num_channels;

	g_fmod_last_result = group->getNumChannels(&num_channels);

	return (double)num_channels;
}

func double fmod_channel_group_get_channel(double channel_group_ref, double index) {
	
	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = group->getChannel((int)index, &channel);

	return (double)packIndexIntoRef((uint32_t)reinterpret_cast<intptr_t>(channel), GM_FMOD_TYPE_CHANNEL);

}

// ChannelGroup management

func double fmod_channel_group_add_group_multiplatform(double channel_group_ref, double child_channel_group_ref, double propagate_dsp_clock)
{
	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	FMOD::ChannelGroup* child_group = nullptr;
	validate_fmod_channel_group(child_channel_group_ref, child_group);

	FMOD::DSPConnection* dsp_connection = nullptr;
	g_fmod_last_result = group->addGroup(child_group, propagate_dsp_clock >= 0.5, &dsp_connection);

	if (g_fmod_last_result != FMOD_OK || dsp_connection == nullptr)
	{
		return 0;
	}

	uint32_t dsp_connection_id = registerOrFindResource(dsp_connection, index_dsp_connections, map_dsp_connections);
	return (double)packIndexIntoRef(dsp_connection_id, GM_FMOD_TYPE_DSP_CONNECTION);
}

func double fmod_channel_group_get_num_groups(double channel_group_ref)
{
	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	int num_groups;
	g_fmod_last_result = group->getNumGroups(&num_groups);
	return num_groups;
}

func double fmod_channel_group_get_group(double channel_group_ref, double group_index)
{
	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = group->getGroup((int)group_index, &channel_group);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t channel_group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
	return (double)packIndexIntoRef(channel_group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
}

func double fmod_channel_group_get_parent_group(double channel_group_ref)
{
	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	FMOD::ChannelGroup* parent_group;
	g_fmod_last_result = group->getParentGroup(&parent_group);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto channel_group_id = registerOrFindResource(parent_group, index_channel_groups, map_channel_groups);
	return (double)packIndexIntoRef(channel_group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
}

// General

func char* fmod_channel_group_get_name(double channel_group_ref)
{
	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	gStringBuffer[0] = '\0';
	g_fmod_last_result = group->getName(gStringBuffer, sizeof(gStringBuffer));

	return gStringBuffer;
}

func double fmod_channel_group_release(double channel_group_ref)
{
	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	unregisterResource(group, map_channel_groups);

	g_fmod_last_result = group->release();

	return 0;
}


func double fmod_channel_group_get_system_object(double channel_group_ref) {

	FMOD::ChannelGroup* group = nullptr;
	validate_fmod_channel_group(channel_group_ref, group);

	FMOD::System* fmod_system = nullptr;
	g_fmod_last_result = group->getSystemObject(&fmod_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto system_id = registerOrFindResource(fmod_system, index_systems, map_systems);
	
	return (double)packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
}

