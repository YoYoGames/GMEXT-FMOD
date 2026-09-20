#include "GMFMOD_common.h"

// ============================================================
// Global State Definitions
// ============================================================

std::atomic<FMOD_RESULT> g_fmod_last_result{ FMOD_OK };

FmodRegistries g_registries;

void FmodRegistries::clear()
{
	systems.clear();
	sounds.clear();
	channelGroups.clear();
	dsps.clear();
	soundGroups.clear();
	dspConnections.clear();
	reverbs.clear();
	geometries.clear();
}

// ============================================================
// Current System
// ============================================================

static FMOD::System* g_selected_system = nullptr;

FMOD::System* getCurrentSystem()
{
	if (g_selected_system != nullptr)
		return g_selected_system;
	return g_registries.systems.first();
}

void setCurrentSystem(FMOD::System* system)
{
	g_selected_system = system;
}

// ============================================================
// Refs
// ============================================================

FMOD::ChannelControl* resolve_fmod_channel_control(uint64_t ref)
{
	if (gmfmod::refIs(ref, gmfmod::RefType::Channel))
		return reinterpret_cast<FMOD::ChannelControl*>(static_cast<uintptr_t>(gmfmod::refId(ref)));

	if (gmfmod::refIs(ref, gmfmod::RefType::ChannelGroup))
	{
		FMOD::ChannelGroup* group = g_registries.channelGroups.find(gmfmod::refId(ref));
		if (group != nullptr)
			return group;
	}

	g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
	return nullptr;
}
