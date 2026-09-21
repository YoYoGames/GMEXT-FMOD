#pragma once

#include "fmod.hpp"
#include <cstdint>
#include <atomic>
#include <native/GMFMODInternal_native.h>
#include "gmfmod_ref.h"
#include "gmfmod_registry.h"
#include "gmfmod_user_data.h"
#include "gmfmod_string.h"

// ============================================================
// Global State
// ============================================================

// Written by every exported function. The callback trampolines never touch
// it, but they run on FMOD's threads and read state beside it, so the store
// is atomic rather than relying on that staying true. (Returning the code
// per-call instead is an API change across the whole surface, left alone.)
extern std::atomic<FMOD_RESULT> g_fmod_last_result;

// One registry per registry-backed type. Channel is pointer-backed and has
// none; see gmfmod_ref.h for the two backing strategies.
struct FmodRegistries
{
	gmfmod::Registry<FMOD::System> systems;
	gmfmod::Registry<FMOD::Sound> sounds;
	gmfmod::Registry<FMOD::ChannelGroup> channelGroups;
	gmfmod::Registry<FMOD::DSP> dsps;
	gmfmod::Registry<FMOD::SoundGroup> soundGroups;
	gmfmod::Registry<FMOD::DSPConnection> dspConnections;
	gmfmod::Registry<FMOD::Reverb3D> reverbs;
	gmfmod::Registry<FMOD::Geometry> geometries;

	// System::release() and System::close() free or invalidate every object the
	// system created, so everything registered under it goes first - the
	// registry entries and the per-module state each object's own release
	// would have dropped. Never calls into FMOD on the evicted objects.
	void evictOwnedBy(FMOD::System* system);

	// Drops every entry without touching the objects - fmod_shutdown() has
	// already released, or evicted, everything by this point.
	void clear();
};

extern FmodRegistries g_registries;

// The system every "systemless" API call operates on. Defaults to the first
// registered system; fmod_system_select() overrides it.
FMOD::System* getCurrentSystem();
void setCurrentSystem(FMOD::System* system);

// ============================================================
// Refs
// ============================================================

// Registers `object` under the system that owns it and packs its ref; 0 for
// a null object. Sound, ChannelGroup, SoundGroup and DSP answer
// getSystemObject, asked once on first registration. DSPConnection, Geometry
// and Reverb3D have no such call, so their owner comes from the caller - the
// system that created them, or the registered DSP or group a connection was
// reached through. An object whose owner cannot be determined is not
// registered: the helper returns 0 and leaves FMOD's result in the slot.
uint64_t fmod_system_ref(FMOD::System* system);
uint64_t fmod_sound_ref(FMOD::Sound* sound);
uint64_t fmod_channel_group_ref(FMOD::ChannelGroup* group);
uint64_t fmod_sound_group_ref(FMOD::SoundGroup* group);
uint64_t fmod_dsp_ref(FMOD::DSP* dsp);
uint64_t fmod_dsp_connection_ref(FMOD::DSPConnection* connection, FMOD::System* owner);
uint64_t fmod_geometry_ref(FMOD::Geometry* geometry, FMOD::System* owner);
uint64_t fmod_reverb_3d_ref(FMOD::Reverb3D* reverb, FMOD::System* owner);

// Pointer-backed ref for a Channel, bound to this extension's status slot.
inline uint64_t fmod_pointer_ref(const void* pointer, gmfmod::RefType type)
{
	return gmfmod::packPointerRef(pointer, type, g_fmod_last_result);
}

// A rejected ref sets g_fmod_last_result and yields nullptr; every call site
// null-checks before touching the handle.
inline FMOD::Channel* resolve_fmod_channel(uint64_t ref)
{
	return gmfmod::resolvePointerRef<FMOD::Channel>(ref, gmfmod::RefType::Channel, g_fmod_last_result);
}

inline FMOD::System* resolve_fmod_system(uint64_t ref)
{
	return gmfmod::resolveRegistryRef(ref, gmfmod::RefType::System, g_registries.systems, g_fmod_last_result);
}

inline FMOD::Sound* resolve_fmod_sound(uint64_t ref)
{
	return gmfmod::resolveRegistryRef(ref, gmfmod::RefType::Sound, g_registries.sounds, g_fmod_last_result);
}

inline FMOD::ChannelGroup* resolve_fmod_channel_group(uint64_t ref)
{
	return gmfmod::resolveRegistryRef(ref, gmfmod::RefType::ChannelGroup, g_registries.channelGroups, g_fmod_last_result);
}

inline FMOD::DSP* resolve_fmod_dsp(uint64_t ref)
{
	return gmfmod::resolveRegistryRef(ref, gmfmod::RefType::Dsp, g_registries.dsps, g_fmod_last_result);
}

inline FMOD::SoundGroup* resolve_fmod_sound_group(uint64_t ref)
{
	return gmfmod::resolveRegistryRef(ref, gmfmod::RefType::SoundGroup, g_registries.soundGroups, g_fmod_last_result);
}

inline FMOD::DSPConnection* resolve_fmod_dsp_connection(uint64_t ref)
{
	return gmfmod::resolveRegistryRef(ref, gmfmod::RefType::DspConnection, g_registries.dspConnections, g_fmod_last_result);
}

inline FMOD::Reverb3D* resolve_fmod_reverb_3d(uint64_t ref)
{
	return gmfmod::resolveRegistryRef(ref, gmfmod::RefType::Reverb3D, g_registries.reverbs, g_fmod_last_result);
}

inline FMOD::Geometry* resolve_fmod_geometry(uint64_t ref)
{
	return gmfmod::resolveRegistryRef(ref, gmfmod::RefType::Geometry, g_registries.geometries, g_fmod_last_result);
}

// ChannelControl is the common base: a channel ref or a channel group ref
// are both acceptable here.
FMOD::ChannelControl* resolve_fmod_channel_control(uint64_t ref);

// ============================================================
// Per-module state hooks
// ============================================================

// Each file owning a file-local map exposes forget and reset entry points
// rather than promoting the map to a global. The per-object forgets run from
// that object's release and from FmodRegistries::evictOwnedBy; the resets from
// fmod_shutdown().
FMOD_RESULT fmod_channel_control_arm_end_hook(FMOD::ChannelControl* control);
void fmod_channel_control_forget_rolloff(const void* control);
void fmod_channel_control_forget_callback(const void* control);
// Channels are pointer-backed and have no registry entry to evict through, so
// the channel-side maps are swept by asking each live handle for its system.
// Runs before the SDK call that would invalidate the handles.
void fmod_channel_control_forget_owned_by(FMOD::System* system);
void fmod_channel_control_reset_state();
void fmod_channel_group_forget_adopted(const void* group);
void fmod_sound_forget_lock(const void* sound);
void fmod_sound_forget_rolloff(const void* sound);
void fmod_sound_reset_state();
void fmod_dsp_forget_callback(const void* dsp);
// Drops the refs of the connections FMOD is about to free with a release,
// a disconnect or a chain removal; `only_with` narrows to one neighbour.
void fmod_dsp_forget_connections(FMOD::DSP* dsp, FMOD::DSP* only_with, bool inputs, bool outputs);
void fmod_dsp_reset_state();
void fmod_system_forget_callback(const void* system);
void fmod_system_reset_callbacks();
