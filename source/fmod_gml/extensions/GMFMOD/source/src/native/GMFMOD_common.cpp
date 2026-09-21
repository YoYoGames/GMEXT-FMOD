#include "GMFMOD_common.h"

// ============================================================
// Global State Definitions
// ============================================================

std::atomic<FMOD_RESULT> g_fmod_last_result{ FMOD_OK };

FmodRegistries g_registries;

void FmodRegistries::evictOwnedBy(FMOD::System* system)
{
	// Each hook does what the object's own release would have done beside the
	// registry. The objects are dead or about to be, so nothing here asks FMOD
	// anything about them - the channel sweep at the end is the one exception,
	// and it runs on live handles before the SDK call.
	for (FMOD::Sound* sound : sounds.unregisterOwnedBy(system))
	{
		fmod_sound_forget_lock(sound);
		fmod_sound_forget_rolloff(sound);
	}
	for (FMOD::ChannelGroup* group : channelGroups.unregisterOwnedBy(system))
	{
		fmod_channel_control_forget_rolloff(group);
		fmod_channel_control_forget_callback(group);
		fmod_channel_group_forget_adopted(group);
	}
	for (FMOD::DSP* dsp : dsps.unregisterOwnedBy(system))
		fmod_dsp_forget_callback(dsp);
	soundGroups.unregisterOwnedBy(system);
	dspConnections.unregisterOwnedBy(system);
	reverbs.unregisterOwnedBy(system);
	geometries.unregisterOwnedBy(system);

	fmod_channel_control_forget_owned_by(system);
}

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

// The owner query only runs for an object the registry has not seen: a
// re-registration answers from the map, and a first registration pays one
// getSystemObject. On failure nothing is registered and FMOD's result stays
// in the slot for the caller to report.
template <typename T>
static uint64_t register_self_owned(T* object, gmfmod::Registry<T>& registry, gmfmod::RefType type)
{
	if (object == nullptr)
		return 0;

	const void* owner = registry.ownerOf(object);
	if (owner == nullptr)
	{
		FMOD::System* system = nullptr;
		const FMOD_RESULT result = object->getSystemObject(&system);
		if (result != FMOD_OK || system == nullptr)
		{
			g_fmod_last_result = result != FMOD_OK ? result : FMOD_ERR_INVALID_HANDLE;
			return 0;
		}
		owner = system;
	}
	return gmfmod::packRef(registry.registerOrFind(object, owner), type);
}

template <typename T>
static uint64_t register_owned_by(T* object, FMOD::System* owner, gmfmod::Registry<T>& registry, gmfmod::RefType type)
{
	if (object == nullptr)
		return 0;
	if (owner == nullptr && registry.ownerOf(object) == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}
	return gmfmod::packRef(registry.registerOrFind(object, owner), type);
}

uint64_t fmod_system_ref(FMOD::System* system)
{
	if (system == nullptr)
		return 0;
	// A system owns; nothing owns it.
	return gmfmod::packRef(g_registries.systems.registerOrFind(system, nullptr), gmfmod::RefType::System);
}

uint64_t fmod_sound_ref(FMOD::Sound* sound)
{
	return register_self_owned(sound, g_registries.sounds, gmfmod::RefType::Sound);
}

uint64_t fmod_channel_group_ref(FMOD::ChannelGroup* group)
{
	return register_self_owned(group, g_registries.channelGroups, gmfmod::RefType::ChannelGroup);
}

uint64_t fmod_sound_group_ref(FMOD::SoundGroup* group)
{
	return register_self_owned(group, g_registries.soundGroups, gmfmod::RefType::SoundGroup);
}

uint64_t fmod_dsp_ref(FMOD::DSP* dsp)
{
	return register_self_owned(dsp, g_registries.dsps, gmfmod::RefType::Dsp);
}

uint64_t fmod_dsp_connection_ref(FMOD::DSPConnection* connection, FMOD::System* owner)
{
	return register_owned_by(connection, owner, g_registries.dspConnections, gmfmod::RefType::DspConnection);
}

uint64_t fmod_geometry_ref(FMOD::Geometry* geometry, FMOD::System* owner)
{
	return register_owned_by(geometry, owner, g_registries.geometries, gmfmod::RefType::Geometry);
}

uint64_t fmod_reverb_3d_ref(FMOD::Reverb3D* reverb, FMOD::System* owner)
{
	return register_owned_by(reverb, owner, g_registries.reverbs, gmfmod::RefType::Reverb3D);
}

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
