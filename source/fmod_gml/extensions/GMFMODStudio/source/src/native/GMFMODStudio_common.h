#pragma once

#include "fmod.hpp"
#include "fmod_studio.hpp"
#include <cstdint>
#include <map>
#include <optional>
#include <atomic>
#include <mutex>
#include <native/GMFMODStudioInternal_native.h>
#include "gmfmod_ref.h"
#include "gmfmod_user_data.h"
#include "gmfmod_string.h"

// ============================================================
// Global State
// ============================================================

// Written by every exported function. The callback trampolines never touch
// it, but they run on Studio's own worker thread and read state beside it, so
// the store is atomic rather than relying on that staying true. (Returning
// the code per-call instead is an API change across the whole surface, left
// alone.) Named apart from GMFMOD's slot: on iOS both extensions are static
// libraries in one app, and a shared name would be one symbol twice.
extern std::atomic<FMOD_RESULT> g_fmod_studio_last_result;

// ============================================================
// Refs
// ============================================================

// Every Studio type is pointer-backed - see gmfmod_ref.h for the layout. The
// refs are bound to this extension's status slot here.
inline uint64_t fmod_pointer_ref(const void* pointer, gmfmod::RefType type)
{
	return gmfmod::packPointerRef(pointer, type, g_fmod_studio_last_result);
}

// A rejected ref sets g_fmod_studio_last_result and yields nullptr; every
// call site null-checks before touching the handle.
inline FMOD::Studio::System* resolve_fmod_studio_system(uint64_t ref)
{
	return gmfmod::resolvePointerRef<FMOD::Studio::System>(ref, gmfmod::RefType::StudioSystem, g_fmod_studio_last_result);
}

inline FMOD::Studio::Bank* resolve_fmod_studio_bank(uint64_t ref)
{
	return gmfmod::resolvePointerRef<FMOD::Studio::Bank>(ref, gmfmod::RefType::StudioBank, g_fmod_studio_last_result);
}

inline FMOD::Studio::Bus* resolve_fmod_studio_bus(uint64_t ref)
{
	return gmfmod::resolvePointerRef<FMOD::Studio::Bus>(ref, gmfmod::RefType::StudioBus, g_fmod_studio_last_result);
}

inline FMOD::Studio::EventInstance* resolve_fmod_studio_event_instance(uint64_t ref)
{
	return gmfmod::resolvePointerRef<FMOD::Studio::EventInstance>(ref, gmfmod::RefType::StudioEventInstance, g_fmod_studio_last_result);
}

inline FMOD::Studio::EventDescription* resolve_fmod_studio_event_description(uint64_t ref)
{
	return gmfmod::resolvePointerRef<FMOD::Studio::EventDescription>(ref, gmfmod::RefType::StudioEventDescription, g_fmod_studio_last_result);
}

inline FMOD::Studio::VCA* resolve_fmod_studio_vca(uint64_t ref)
{
	return gmfmod::resolvePointerRef<FMOD::Studio::VCA>(ref, gmfmod::RefType::StudioVca, g_fmod_studio_last_result);
}

inline FMOD::Studio::CommandReplay* resolve_fmod_studio_command_replay(uint64_t ref)
{
	return gmfmod::resolvePointerRef<FMOD::Studio::CommandReplay>(ref, gmfmod::RefType::StudioCommandReplay, g_fmod_studio_last_result);
}

// ============================================================
// Callback Contexts
// ============================================================

// A GML event callback and the mask it asked for. FMOD is sometimes asked for
// more types than that - the instance trampoline needs DESTROYED to reclaim its
// entry and the programmer-sound pair to answer a registered key - so the mask
// is what decides which types reach GML.
struct FmodEventCallback
{
	gm::wire::GMFunction callback;
	FMOD_STUDIO_EVENT_CALLBACK_TYPE mask;
};

struct FmodCommandReplayCallbackContext
{
	std::optional<gm::wire::GMFunction> frame_callback;
	std::optional<gm::wire::GMFunction> create_instance_callback;
	std::optional<gm::wire::GMFunction> load_bank_callback;
};

extern std::mutex g_command_replay_callback_mutex;
extern std::map<uintptr_t, FmodCommandReplayCallbackContext> g_command_replay_callbacks;

// ============================================================
// Per-module state hooks
// ============================================================

// The one Studio system this extension drives (fmod_studio_system_create
// refuses a second), or nullptr. Game thread only - a trampoline that needs
// it takes a copy at registration time instead. It exists because the
// vendored Switch SDK is 2.02.19, where EventInstance has no getSystem.
FMOD::Studio::System* fmod_studio_current_system();

// Each file owning a file-local map exposes a reset entry point rather than
// promoting the map to a global. fmod_studio_shutdown() drives them all.
void fmod_studio_event_instance_reset_state();
void fmod_studio_command_replay_reset_state();
void fmod_studio_event_description_reset_state();

// A description lives as long as its bank and gets no DESTROYED callback, so
// the description-keyed callback map is swept here instead.
void fmod_studio_event_description_forget_bank(FMOD::Studio::Bank* bank);

// The callback registered on a description, if any - what an instance created
// from it inherits. An instance that takes a callback slot of its own copies
// this in first, the way FMOD itself does at createInstance.
std::optional<FmodEventCallback> fmod_studio_event_description_get_callback(
	FMOD::Studio::EventDescription* event_desc);

// Shared by both event trampolines: turns FMOD's (type, event, parameters)
// into the (event_instance_ref, type, properties) call GML sees. One decoder
// so the description and instance paths cannot drift apart. `result` is what
// the extension's own answer to a programmer-sound callback came to; only
// that pair of types carries it.
void fmod_studio_event_call(
	const gm::wire::GMFunction& callback,
	FMOD_STUDIO_EVENT_CALLBACK_TYPE type,
	FMOD_STUDIO_EVENTINSTANCE* event,
	void* parameters,
	FMOD_RESULT result = FMOD_OK);
