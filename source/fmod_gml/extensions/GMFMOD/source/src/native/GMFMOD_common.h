#pragma once

#include "fmod.hpp"
#include <cstdint>
#include <map>
#include <set>
#include <string>
#include <optional>
#include <atomic>
#include <mutex>
#include <native/GMFMODInternal_native.h>

// ============================================================
// Global State
// ============================================================

// Written by every exported function and by the callback trampolines, which
// on the Studio side run on Studio's own worker thread - so the store has to
// be atomic. (That makes the race safe; it does not make "the last result"
// meaningful when a background callback can land between a call and the read.
// Returning the code per-call instead is an API change, left to the owner.)
extern std::atomic<FMOD_RESULT> g_fmod_last_result;
extern enum gm_enums::FmodResult fmod_last_result();
extern void fmod_debug_initialize(enum gm_enums::FmodDebugFlags flags, enum gm_enums::FmodDebugMode mode);

extern std::map<uint32_t, FMOD::System*> map_systems;
extern uint32_t index_systems;

extern std::map<uint32_t, FMOD::Sound*> map_sounds;
extern uint32_t index_sounds;

extern std::map<uint32_t, FMOD::ChannelGroup*> map_channel_groups;
extern uint32_t index_channel_groups;

extern std::map<uint32_t, FMOD::DSP*> map_dsps;
extern uint32_t index_dsps;

extern std::map<uint32_t, FMOD::SoundGroup*> map_sound_groups;
extern uint32_t index_sound_groups;

extern std::map<uint32_t, FMOD::DSPConnection*> map_dsp_connections;
extern uint32_t index_dsp_connections;

extern std::map<uint32_t, FMOD::Reverb3D*> map_reverbs;
extern uint32_t index_reverbs;

extern std::map<uint32_t, FMOD::Geometry*> map_geometries;
extern uint32_t index_geometries;

// ============================================================
// Helper Functions
// ============================================================

uint64_t packIndexIntoRef(uint32_t index, uint8_t type);

// Pointer-backed handles (Channel, ChannelControl and every Studio type) carry
// the object address in the low 32 bits. FMOD's opaque handles fit there by
// construction, but if a future SDK ever widens one, two objects would silently
// alias onto the same ref - so fail loudly instead of quietly.
uint64_t packPointerIntoRef(const void* pointer, uint8_t type);

// A GML double carrying a 32-bit flag word. Converting one through a signed int
// is undefined at or above 0x80000000, and FMOD_VIRTUAL_PLAYFROMSTART,
// FMOD_SYSTEM_CALLBACK_ALL and FMOD_STUDIO_EVENT_CALLBACK_ALL all sit there.
// Out-of-range values clamp rather than wrap.
uint32_t fmod_flag_word(double value);

// The system every "systemless" API call operates on. Defaults to the first
// registered system; fmod_system_select() overrides it.
FMOD::System* getCurrentSystem();
void setCurrentSystem(FMOD::System* system);

template <typename T>
uint32_t registerOrFindResource(T resource, uint32_t& index, std::map<uint32_t, T>& map);

template <typename T>
uint32_t unregisterResource(T resource, std::map<uint32_t, T>& map);

// Reads/writes the `data` field of a map-registered resource's existing
// CustomUserData (allocated by registerOrFindResource). Never calls the
// resource's native setUserData directly - that slot is already owned by the
// registry bookkeeping.
template <typename T>
double getResourceUserData(T resource);

template <typename T>
void setResourceUserData(T resource, double data);

// user_data storage for pointer-identified types (Channel, ChannelControl,
// and Studio objects) which have no registry-owned CustomUserData slot.
extern std::mutex g_user_data_mutex;
extern std::map<uintptr_t, double> g_user_data;

// Shared counter for the mask-only callback stubs (event description /
// studio system callbacks currently have no GMFunction parameter, so there
// is no path to deliver payloads to GML). Each callback-owning file's own
// trampoline increments this on every fired event; fmod_fetch_callbacks()
// (GMFMOD_utility.cpp) drains and returns the count.
extern std::atomic<uint64_t> g_fmod_callback_count;

// ============================================================
// Per-module state hooks
// ============================================================

// Each file owning a file-local map exposes a reset entry point rather than
// promoting the map to a global. fmod_shutdown() drives them all.
FMOD_RESULT fmod_channel_control_arm_end_hook(FMOD::ChannelControl* control);
void fmod_channel_control_reset_state();
void fmod_sound_forget_lock(const void* sound);
void fmod_sound_reset_state();
void fmod_registry_clear_all();

// ============================================================
// Reference Layout
// ============================================================

// Every handle handed to GML is a plain 64-bit integer packed by
// packIndexIntoRef():
//
//     10bit      |     8bit      |      32bit
//   extension    |     type      |       ref
//
// The extension code rejects handles minted by some other GM extension; the
// type code rejects passing e.g. a sound ref to a channel call. The low 32
// bits are either a registry index (map-backed types) or the truncated
// pointer itself (pointer-backed types).

#define GM_FMOD_EXT 0x01

#define gm_fmod_ref_ext(ref) ((uint32_t)(((uint64_t)(ref) >> 40) & 0x3FF))
#define gm_fmod_ref_type(ref) ((uint8_t)(((uint64_t)(ref) >> 32) & 0xFF))
#define gm_fmod_ref_id(ref) ((uint32_t)((uint64_t)(ref) & 0xFFFFFFFF))

// ============================================================
// Type Codes
// ============================================================

#define GM_FMOD_TYPE_CHANNEL 0x01
#define GM_FMOD_TYPE_CHANNEL_GROUP 0x02
#define GM_FMOD_TYPE_SOUND 0x03
#define GM_FMOD_TYPE_SOUND_GROUP 0x04
#define GM_FMOD_TYPE_DSP 0x05
#define GM_FMOD_TYPE_DSP_CONNECTION 0x06
#define GM_FMOD_TYPE_REVERB_3D 0x07
#define GM_FMOD_TYPE_GEOMETRY 0x08
#define GM_FMOD_TYPE_SYSTEM 0x09

// ============================================================
// Studio Type Codes
// ============================================================

#define GM_FMOD_STUDIO_TYPE_SYSTEM 0x10
#define GM_FMOD_STUDIO_TYPE_BANK 0x11
#define GM_FMOD_STUDIO_TYPE_BUS 0x12
#define GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE 0x13
#define GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION 0x14
#define GM_FMOD_STUDIO_TYPE_VCA 0x15
#define GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY 0x16

// ============================================================
// Validation Macros
// ============================================================

// A rejected ref leaves `output` null and sets g_fmod_last_result; every
// call site already null-checks before touching the handle.
#define gm_fmod_ref_reject(output) \
	{ \
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE; \
		output = nullptr; \
	}

// Payload is the truncated pointer itself.
#define validate_fmod_ref_ptr(ref, type_code, cpp_type, output) \
	{ \
		if (gm_fmod_ref_ext(ref) == GM_FMOD_EXT && gm_fmod_ref_type(ref) == (type_code)) \
		{ \
			output = reinterpret_cast<cpp_type*>(static_cast<uintptr_t>(gm_fmod_ref_id(ref))); \
		} \
		else gm_fmod_ref_reject(output) \
	}

// Payload is an index into a registry map.
#define validate_fmod_ref_map(ref, type_code, cpp_type, map, output) \
	{ \
		auto _search = (map).find(gm_fmod_ref_id(ref)); \
		if (gm_fmod_ref_ext(ref) == GM_FMOD_EXT && gm_fmod_ref_type(ref) == (type_code) \
			&& _search != (map).end()) \
		{ \
			output = (cpp_type*)_search->second; \
		} \
		else gm_fmod_ref_reject(output) \
	}

#define validate_fmod_channel(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_TYPE_CHANNEL, FMOD::Channel, output)

#define validate_fmod_studio_system(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_SYSTEM, FMOD::Studio::System, output)

#define validate_fmod_studio_bank(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_BANK, FMOD::Studio::Bank, output)

#define validate_fmod_studio_bus(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_BUS, FMOD::Studio::Bus, output)

#define validate_fmod_studio_event_instance(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE, FMOD::Studio::EventInstance, output)

#define validate_fmod_studio_event_description(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION, FMOD::Studio::EventDescription, output)

#define validate_fmod_studio_vca(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_VCA, FMOD::Studio::VCA, output)

#define validate_fmod_studio_command_replay(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY, FMOD::Studio::CommandReplay, output)

#define validate_fmod_channel_group(ref, output) \
	validate_fmod_ref_map(ref, GM_FMOD_TYPE_CHANNEL_GROUP, FMOD::ChannelGroup, map_channel_groups, output)

#define validate_fmod_sound(ref, output) \
	validate_fmod_ref_map(ref, GM_FMOD_TYPE_SOUND, FMOD::Sound, map_sounds, output)

#define validate_fmod_system(ref, output) \
	validate_fmod_ref_map(ref, GM_FMOD_TYPE_SYSTEM, FMOD::System, map_systems, output)

#define validate_fmod_sound_group(ref, output) \
	validate_fmod_ref_map(ref, GM_FMOD_TYPE_SOUND_GROUP, FMOD::SoundGroup, map_sound_groups, output)

#define validate_fmod_reverb_3d(ref, output) \
	validate_fmod_ref_map(ref, GM_FMOD_TYPE_REVERB_3D, FMOD::Reverb3D, map_reverbs, output)

#define validate_fmod_dsp(ref, output) \
	validate_fmod_ref_map(ref, GM_FMOD_TYPE_DSP, FMOD::DSP, map_dsps, output)

#define validate_fmod_dsp_connection(ref, output) \
	validate_fmod_ref_map(ref, GM_FMOD_TYPE_DSP_CONNECTION, FMOD::DSPConnection, map_dsp_connections, output)

#define validate_fmod_geometry(ref, output) \
	validate_fmod_ref_map(ref, GM_FMOD_TYPE_GEOMETRY, FMOD::Geometry, map_geometries, output)

// ChannelControl is the common base: a channel ref or a channel group ref
// are both acceptable here.
#define validate_fmod_channel_control(ref, output) \
	{ \
		if (gm_fmod_ref_ext(ref) != GM_FMOD_EXT) gm_fmod_ref_reject(output) \
		else if (gm_fmod_ref_type(ref) == GM_FMOD_TYPE_CHANNEL) \
		{ \
			output = reinterpret_cast<FMOD::ChannelControl*>(static_cast<uintptr_t>(gm_fmod_ref_id(ref))); \
		} \
		else if (gm_fmod_ref_type(ref) == GM_FMOD_TYPE_CHANNEL_GROUP) \
		{ \
			auto _search = map_channel_groups.find(gm_fmod_ref_id(ref)); \
			if (_search != map_channel_groups.end()) \
				output = (FMOD::ChannelControl*)_search->second; \
			else gm_fmod_ref_reject(output) \
		} \
		else gm_fmod_ref_reject(output) \
	}

// ============================================================
// Callback Contexts
// ============================================================

struct FmodCommandReplayCallbackContext
{
	std::optional<gm::wire::GMFunction> frame_callback;
	std::optional<gm::wire::GMFunction> create_instance_callback;
	std::optional<gm::wire::GMFunction> load_bank_callback;
};

extern std::map<uintptr_t, FmodCommandReplayCallbackContext> g_command_replay_callbacks;
