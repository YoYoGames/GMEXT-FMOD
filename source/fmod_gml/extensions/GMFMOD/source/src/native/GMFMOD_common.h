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

	// System::release() has already freed everything its systems owned, so
	// the registries are cleared rather than walked - every pointer in them
	// is dead by this point.
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

// Each file owning a file-local map exposes a reset entry point rather than
// promoting the map to a global. fmod_shutdown() drives them all.
FMOD_RESULT fmod_channel_control_arm_end_hook(FMOD::ChannelControl* control);
void fmod_channel_control_forget_rolloff(const void* control);
void fmod_channel_control_forget_callback(const void* control);
void fmod_channel_control_reset_state();
void fmod_sound_forget_lock(const void* sound);
void fmod_sound_reset_state();
void fmod_dsp_forget_callback(const void* dsp);
void fmod_dsp_reset_state();
