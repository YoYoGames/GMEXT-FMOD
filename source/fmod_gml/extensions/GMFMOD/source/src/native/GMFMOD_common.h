#pragma once

#include "fmod.hpp"
#include "fmod_studio.hpp"
#include <cstdint>
#include <map>
#include <string>
#include <optional>
#include <native/GMFMODInternal_native.h>

// ============================================================
// Global State
// ============================================================

extern FMOD_RESULT g_fmod_last_result;
extern enum gm_enums::FmodResult fmod_last_result();
extern void fmod_debug_initialize(enum gm_enums::FmodDebugFlags flags, enum gm_enums::FmodDebugMode mode);
extern std::string fmod_path_bundle(std::string_view filename);
extern std::string fmod_path_user(std::string_view filename);

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

// The system every "systemless" API call operates on. Defaults to the first
// registered system; fmod_system_select() overrides it.
FMOD::System* getCurrentSystem();
void setCurrentSystem(FMOD::System* system);

template <typename T>
uint32_t registerOrFindResource(T resource, uint32_t& index, std::map<uint32_t, T>& map);

template <typename T>
uint32_t unregisterResource(T resource, std::map<uint32_t, T>& map);

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

#define validate_fmod_channel(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		output = reinterpret_cast<FMOD::Channel*>(static_cast<uintptr_t>(_ref_id)); \
	}

#define validate_fmod_channel_group(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		if (auto search = map_channel_groups.find(_ref_id); search != map_channel_groups.end()) \
		{ \
			output = (FMOD::ChannelGroup*)search->second; \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

#define validate_fmod_sound(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		if (auto search = map_sounds.find(_ref_id); search != map_sounds.end()) \
		{ \
			output = (FMOD::Sound*)search->second; \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

#define validate_fmod_system(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		if (auto search = map_systems.find(_ref_id); search != map_systems.end()) \
		{ \
			output = (FMOD::System*)search->second; \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

#define validate_fmod_sound_group(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		if (auto search = map_sound_groups.find(_ref_id); search != map_sound_groups.end()) \
		{ \
			output = (FMOD::SoundGroup*)search->second; \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

#define validate_fmod_reverb_3d(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		if (auto search = map_reverbs.find(_ref_id); search != map_reverbs.end()) \
		{ \
			output = (FMOD::Reverb3D*)search->second; \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

#define validate_fmod_dsp(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		if (auto search = map_dsps.find(_ref_id); search != map_dsps.end()) \
		{ \
			output = (FMOD::DSP*)search->second; \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

#define validate_fmod_dsp_connection(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		if (auto search = map_dsp_connections.find(_ref_id); search != map_dsp_connections.end()) \
		{ \
			output = (FMOD::DSPConnection*)search->second; \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

#define validate_fmod_geometry(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		if (auto search = map_geometries.find(_ref_id); search != map_geometries.end()) \
		{ \
			output = (FMOD::Geometry*)search->second; \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

#define validate_fmod_channel_control(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		uint32_t _ref_type = (_ref >> 32) & 0xFF; \
		if (_ref_type == GM_FMOD_TYPE_CHANNEL) \
		{ \
			output = reinterpret_cast<FMOD::ChannelControl*>(static_cast<uintptr_t>(_ref_id)); \
		} \
		else if (_ref_type == GM_FMOD_TYPE_CHANNEL_GROUP) \
		{ \
			if (auto search = map_channel_groups.find(_ref_id); search != map_channel_groups.end()) \
			{ \
				output = (FMOD::ChannelControl*)search->second; \
			} \
			else \
			{ \
				g_fmod_last_result = (FMOD_RESULT)-2; \
				output = nullptr; \
			} \
		} \
		else \
		{ \
			g_fmod_last_result = (FMOD_RESULT)-2; \
			output = nullptr; \
		} \
	}

// ============================================================
// Studio Validation Macros
// ============================================================

#define validate_fmod_studio_system(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		output = reinterpret_cast<FMOD::Studio::System*>(static_cast<uintptr_t>(_ref_id)); \
	}

#define validate_fmod_studio_bank(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		output = reinterpret_cast<FMOD::Studio::Bank*>(static_cast<uintptr_t>(_ref_id)); \
	}

#define validate_fmod_studio_bus(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		output = reinterpret_cast<FMOD::Studio::Bus*>(static_cast<uintptr_t>(_ref_id)); \
	}

#define validate_fmod_studio_event_instance(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		output = reinterpret_cast<FMOD::Studio::EventInstance*>(static_cast<uintptr_t>(_ref_id)); \
	}

#define validate_fmod_studio_event_description(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		output = reinterpret_cast<FMOD::Studio::EventDescription*>(static_cast<uintptr_t>(_ref_id)); \
	}

#define validate_fmod_studio_vca(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		output = reinterpret_cast<FMOD::Studio::VCA*>(static_cast<uintptr_t>(_ref_id)); \
	}

#define validate_fmod_studio_command_replay(ref, output) \
	{ \
		uint64_t _ref = (uint64_t)ref; \
		uint32_t _ref_id = _ref & 0xFFFFFFFF; \
		output = reinterpret_cast<FMOD::Studio::CommandReplay*>(static_cast<uintptr_t>(_ref_id)); \
	}

// ============================================================
// Reference Type Using Declarations
// ============================================================

using FmodSystemRef = gm_structs::FmodSystemRef;
using FmodChannelRef = gm_structs::FmodChannelRef;
using FmodChannelGroupRef = gm_structs::FmodChannelGroupRef;
using FmodSoundRef = gm_structs::FmodSoundRef;
using FmodDSPRef = gm_structs::FmodDSPRef;
using FmodDSPConnectionRef = gm_structs::FmodDSPConnectionRef;
using FmodSoundGroupRef = gm_structs::FmodSoundGroupRef;
using FmodReverb3DRef = gm_structs::FmodReverb3DRef;
using FmodGeometryRef = gm_structs::FmodGeometryRef;
using FmodStudioSystemRef = gm_structs::FmodStudioSystemRef;
using FmodStudioBankRef = gm_structs::FmodStudioBankRef;
using FmodStudioBusRef = gm_structs::FmodStudioBusRef;
using FmodStudioEventInstanceRef = gm_structs::FmodStudioEventInstanceRef;
using FmodStudioEventDescriptionRef = gm_structs::FmodStudioEventDescriptionRef;
using FmodStudioVCARef = gm_structs::FmodStudioVCARef;
using FmodStudioCommandReplayRef = gm_structs::FmodStudioCommandReplayRef;

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
