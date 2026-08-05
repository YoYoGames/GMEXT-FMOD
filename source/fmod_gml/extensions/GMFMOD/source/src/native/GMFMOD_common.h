#pragma once

#include "fmod.hpp"
#include <cstdint>
#include <map>

// ============================================================
// Global State
// ============================================================

extern FMOD_RESULT g_fmod_last_result;

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
