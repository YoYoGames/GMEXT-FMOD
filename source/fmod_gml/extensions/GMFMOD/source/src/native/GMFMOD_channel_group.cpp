#include "GMFMOD_channel_group.h"
#include <string>
#include <set>

using namespace gm_structs;

// ============================================================
// ChannelGroup - Channel Management
// ============================================================

double fmod_channel_group_get_num_channels(uint64_t channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return 0.0;

	int num_channels = 0;
	g_fmod_last_result = channel_group->getNumChannels(&num_channels);
	return (double)num_channels;
}

uint64_t fmod_channel_group_get_channel(uint64_t channel_group_ref, double index)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return result;

	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = channel_group->getChannel((int)index, &channel);

	if (g_fmod_last_result == FMOD_OK && channel != nullptr)
	{
			result = fmod_pointer_ref(channel, gmfmod::RefType::Channel);
	}
	return result;
}

// ============================================================
// ChannelGroup - Group Management
// ============================================================

uint64_t fmod_channel_group_add_group(uint64_t channel_group_ref, uint64_t child_channel_group_ref, bool propagate_dsp_clock)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* child_channel_group = resolve_fmod_channel_group(child_channel_group_ref);

	if (child_channel_group == nullptr)
		return result;

	FMOD::DSPConnection* dsp_connection = nullptr;
	g_fmod_last_result = channel_group->addGroup(child_channel_group, propagate_dsp_clock, &dsp_connection);

	if (g_fmod_last_result == FMOD_OK && dsp_connection != nullptr)
	{
		result = fmod_dsp_connection_ref(dsp_connection,
			(FMOD::System*)g_registries.channelGroups.ownerOf(channel_group));
	}
	return result;
}

double fmod_channel_group_get_num_groups(uint64_t channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return 0.0;

	int num_groups = 0;
	g_fmod_last_result = channel_group->getNumGroups(&num_groups);
	return (double)num_groups;
}

uint64_t fmod_channel_group_get_group(uint64_t channel_group_ref, double group_index)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* child_group = nullptr;
	g_fmod_last_result = channel_group->getGroup((int)group_index, &child_group);

	if (g_fmod_last_result == FMOD_OK && child_group != nullptr)
	{
		result = fmod_channel_group_ref(child_group);
	}
	return result;
}

uint64_t fmod_channel_group_get_parent_group(uint64_t channel_group_ref)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return result;

	FMOD::ChannelGroup* parent_group = nullptr;
	g_fmod_last_result = channel_group->getParentGroup(&parent_group);

	if (g_fmod_last_result == FMOD_OK && parent_group != nullptr)
	{
		result = fmod_channel_group_ref(parent_group);
	}
	return result;
}

// ============================================================
// ChannelGroup - General
// ============================================================

std::string fmod_channel_group_get_name(uint64_t channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return "";

	char buffer[256] = {};
	g_fmod_last_result = channel_group->getName(buffer, sizeof(buffer));
	return std::string(buffer);
}

// Channel groups handed to us by another extension (see
// fmod_channel_group_adopt). They are registered in our map so the core API can
// reach them, but their lifetime belongs to whoever created them.
static std::set<FMOD::ChannelGroup*> g_adopted_channel_groups;

void fmod_channel_group_forget_adopted(const void* group)
{
	g_adopted_channel_groups.erase(static_cast<FMOD::ChannelGroup*>(const_cast<void*>(group)));
}

// Registers a group created by GMFMODStudio, whose own ref indexes a registry
// this DLL cannot see.
uint64_t fmod_channel_group_adopt(uint64_t channel_group_ptr)
{
	if (channel_group_ptr == 0)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0;
	}

	FMOD::ChannelGroup* channel_group =
		reinterpret_cast<FMOD::ChannelGroup*>(static_cast<uintptr_t>(channel_group_ptr));

	uint64_t ref = fmod_channel_group_ref(channel_group);
	if (ref == 0)
		return 0;
	g_adopted_channel_groups.insert(channel_group);

	g_fmod_last_result = FMOD_OK;
	return ref;
}

double fmod_channel_group_release(uint64_t channel_group_ref)
{
	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return 0;

	g_registries.channelGroups.unregister(channel_group);
	// A ChannelGroup never gets FMOD_CHANNELCONTROL_CALLBACK_END, so this is the
	// only point at which a custom rolloff copy it owns can be reclaimed - and
	// the only point its callback entry is dropped.
	fmod_channel_control_forget_rolloff(channel_group);
	fmod_channel_control_forget_callback(channel_group);

	// Adopted groups are owned elsewhere (Studio releases the bus or event
	// instance that owns them), so releasing here would double-free.
	if (g_adopted_channel_groups.count(channel_group) != 0)
	{
		g_adopted_channel_groups.erase(channel_group);
		g_fmod_last_result = FMOD_OK;
		return 0;
	}

	g_fmod_last_result = channel_group->release();
	return 0;
}

uint64_t fmod_channel_group_get_system_object(uint64_t channel_group_ref)
{
	uint64_t result = 0;

	FMOD::ChannelGroup* channel_group = resolve_fmod_channel_group(channel_group_ref);

	if (channel_group == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = channel_group->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		result = fmod_system_ref(system);
	}
	return result;
}
