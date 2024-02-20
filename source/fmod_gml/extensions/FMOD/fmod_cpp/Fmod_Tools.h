#pragma once

#if defined(OS_Windows) || defined(OS_Linux) || defined(OS_MacOs)
#include "pch.h"
#endif

#include "fmod.hpp"
#include "fmod_studio.hpp"

#include <list>
#include <map>
#include <string>
#include <vector>

// Check if NAN is already defined
#ifndef NAN 
	// Include the cmath header if NAN is not defined
#include <cmath>
#endif

#include "ExtBufferIO.h"

extern FMOD_RESULT g_fmod_last_result;

void async_create_event(const StructStream& async_map);

#if defined(OS_Windows) || defined(OS_PS4) || defined(OS_PS5) || defined(OS_GDK)
#define func extern "C" __declspec(dllexport)
#else
#define func extern "C"
#define strncpy_s strncpy
#define sscanf_s sscanf
#endif

extern char gStringBuffer[1024];

extern ArrayStream callbacks;
extern uint64_t system_selected_ref;

extern std::map<uint32_t, FMOD::System*> map_systems;
extern uint32_t index_systems;
extern std::map<uint32_t, FMOD::DSP*> map_dsps;
extern uint32_t index_dsps;
extern std::map<uint32_t, FMOD::Sound*> map_sounds;
extern uint32_t index_sounds;
extern std::map<uint32_t, FMOD::Reverb3D*> map_reverbs;
extern uint32_t index_reverbs;
extern std::map<uint32_t, FMOD::Geometry*> map_geometries;
extern uint32_t index_geometries;
extern std::map<uint32_t, FMOD::SoundGroup*> map_sound_groups;
extern uint32_t index_sound_groups;
extern std::map<uint32_t, FMOD::ChannelGroup*> map_channel_groups;
extern uint32_t index_channel_groups;
extern std::map<uint32_t, FMOD::DSPConnection*> map_dsp_connections;
extern uint32_t index_dsp_connections;

StructStream FmodStudioParamaterDescriptionToGMStruct(const FMOD_STUDIO_PARAMETER_DESCRIPTION& paramater_description);

extern FMOD_STUDIO_PARAMETER_ID FmodParamaterIdFromMap(const std::map<std::string, const uint8_t*>& map);
extern StructStream FmodParamaterIdToGMStruct(const FMOD_STUDIO_PARAMETER_ID& parameter);

std::string GUIDtoString(const FMOD_GUID& guid);
FMOD_GUID StringToGUID(const char* str);

FMOD_VECTOR FmodVectorFromMap(const std::map<std::string, const uint8_t*>& map);
StructStream FmodVectorToGMStruct(const FMOD_VECTOR& vector);

FMOD_3D_ATTRIBUTES Fmod3DAttributesFromMap(const std::map<std::string, const uint8_t*>& map);
StructStream Fmod3DAttributesToGMStruct(const FMOD_3D_ATTRIBUTES& attributes);

StructStream FmodStudioBufferInfoToGMStruct(const FMOD_STUDIO_BUFFER_INFO& buffer_info);
StructStream FmodStudioBufferUsageToGMStruct(const FMOD_STUDIO_BUFFER_USAGE& buffer_usage);
StructStream FmodStudioMemoryUsageToGMStruct(const FMOD_STUDIO_MEMORY_USAGE& map);

FMOD_CREATESOUNDEXINFO FmodCreateSoundExInfoFromMap(const std::map<std::string, const uint8_t*>& map_extra);
StructStream FmodCreateSoundExInfoToGMStruct(const FMOD_CREATESOUNDEXINFO& ext_info);

const char* fmodResultToString(FMOD_RESULT result);

// Extension code
#define GM_FMOD_EXT 0x01

// Type codes
#define GM_FMOD_TYPE_CHANNEL 0x01
#define GM_FMOD_TYPE_CHANNEL_GROUP 0x02
#define GM_FMOD_TYPE_SOUND 0x03
#define GM_FMOD_TYPE_SOUND_GROUP 0x04
#define GM_FMOD_TYPE_DSP 0x05
#define GM_FMOD_TYPE_DSP_CONNECTION 0x06
#define GM_FMOD_TYPE_REVERB_3D 0x07
#define GM_FMOD_TYPE_GEOMETRY 0x08
#define GM_FMOD_TYPE_SYSTEM 0x09

#define GM_FMOD_STUDIO_TYPE_BANK 0x10
#define GM_FMOD_STUDIO_TYPE_BUS 0x11
#define GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY 0x12
#define GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION 0x13
#define GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE 0x14
#define GM_FMOD_STUDIO_TYPE_VCA 0x15
#define GM_FMOD_STUDIO_TYPE_SYSTEM 0x16

// ...

//     10bit      |     8bit      |      32bit
//   extension    |     type      |       ref
//

uint64_t packIndexIntoRef(uint32_t index, uint8_t type);


// ERROR
#define FMOD_ERROR_BUFFER_OVERFLOW -10




struct CustomUserData
{
	uint32_t id = 0;
	uint64_t internal = 0;
	double data = NAN;
};

template <typename T>
double getCustomUserData(T resource)
{
	void* userData = nullptr;
	resource->getUserData(&userData);
	if (userData == nullptr)
		return NAN;
	return static_cast<CustomUserData*>(userData)->data;
}

template <typename T>
void setCustomUserData(T resource, double data) 
{
	void* userData = nullptr;
	resource->getUserData(&userData);
	if (userData == nullptr)
	{
		CustomUserData* customUserData = new CustomUserData();
		resource->setUserData(static_cast<void*>(customUserData));
		customUserData->data = data;
	}
	else
	{
		auto customUserData = static_cast<CustomUserData*>(userData);
		customUserData->data = data;
	}
}

template <typename T>
uint32_t registerOrFindResource(T resource, uint32_t& index, std::map<uint32_t, T>& map)
{
	void* userData;
	resource->getUserData(&userData);
	if (userData == nullptr)
	{
		map.insert({ ++index, resource });
		CustomUserData* customUserData = new CustomUserData();
		customUserData->id = index;

		resource->setUserData(static_cast<void*>(customUserData));
		return index;
	}
	return static_cast<CustomUserData*>(userData)->id;
}

template <typename T>
uint32_t unregisterResource(T resource, std::map<uint32_t, T>& map)
{
	void* userData;
	resource->getUserData(&userData);
	if (userData != nullptr)
	{
		uint32_t resource_id = static_cast<CustomUserData*>(userData)->id;
		delete (CustomUserData*)userData;

		map.erase(resource_id);
		return resource_id;
	}
	return 0;
}

void unregisterMasterGroups(FMOD::System* fmod_system);
void registerMasterGroups(FMOD::System* fmod_system);

#define validate_fmod_ext(ref, output)                                                \
	{                                                                                 \
		output = (uint64_t)ref;                                                       \
		uint32_t _ext_id = (output >> 40) & 0x3FF;                                    \
		if (_ext_id != GM_FMOD_EXT)                                                   \
		{                                                                             \
			g_fmod_last_result = (FMOD_RESULT)-1;                                       \
			LOG_ERROR("Invalid fmod type, type not compatible with extension call."); \
			return 0;                                                                 \
		}                                                                             \
	}

#define validate_fmod_channel(ref, output)                                              \
	{                                                                                   \
		uint64_t _ref = 0;                                                              \
		validate_fmod_ext(ref, _ref);                                                   \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                        \
		uint64_t _ref_id = _ref & 0xFFFFFFFF;                                           \
		if (_ref_type == GM_FMOD_TYPE_CHANNEL)                                          \
		{                                                                               \
			output = reinterpret_cast<FMOD::Channel*>(static_cast<uintptr_t>(_ref_id)); \
		}                                                                               \
		else                                                                            \
		{                                                                               \
			g_fmod_last_result = (FMOD_RESULT)-2;                                         \
			LOG_ERROR("Invalid fmod channel type.");                                    \
			return 0;                                                                   \
		}                                                                               \
	}

#define validate_fmod_channel_group(ref, output)                                                    \
	{                                                                                               \
		uint64_t _ref = 0;                                                                          \
		validate_fmod_ext(ref, _ref);                                                               \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                                    \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                                       \
		if (_ref_type == GM_FMOD_TYPE_CHANNEL_GROUP)                                                \
		{                                                                                           \
			if (auto search = map_channel_groups.find(_ref_id); search != map_channel_groups.end()) \
			{                                                                                       \
				output = (FMOD::ChannelGroup*)search->second;                                       \
			}                                                                                       \
			else                                                                                    \
			{                                                                                       \
				LOG_ERROR("Invalid fmod channel group reference.");                                 \
				return 0;                                                                           \
			}                                                                                       \
		}                                                                                           \
		else                                                                                        \
		{                                                                                           \
			g_fmod_last_result = (FMOD_RESULT)-2;                                                     \
			LOG_ERROR("Invalid argument type, expecting a fmod channel group.");                    \
			return 0;                                                                               \
		}                                                                                           \
	}

#define validate_fmod_channel_control(ref, output)                                                  \
	{                                                                                               \
		uint64_t _ref = 0;                                                                          \
		validate_fmod_ext(ref, _ref);                                                               \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                                    \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                                       \
		if (_ref_type == GM_FMOD_TYPE_CHANNEL)                                                      \
		{                                                                                           \
			output = reinterpret_cast<FMOD::ChannelControl*>(static_cast<uintptr_t>(_ref_id));      \
		}                                                                                           \
		else if (_ref_type == GM_FMOD_TYPE_CHANNEL_GROUP)                                           \
		{                                                                                           \
			if (auto search = map_channel_groups.find(_ref_id); search != map_channel_groups.end()) \
			{                                                                                       \
				output = (FMOD::ChannelControl*)search->second;                                     \
			}                                                                                       \
			else                                                                                    \
			{                                                                                       \
				LOG_ERROR("Invalid fmod channel control reference.");                               \
				return 0;                                                                           \
			}                                                                                       \
		}                                                                                           \
		else                                                                                        \
		{                                                                                           \
			g_fmod_last_result = (FMOD_RESULT)-2;                                                     \
			LOG_ERROR("Invalid argument type, expecting a fmod channel control.");                  \
			return 0;                                                                               \
		}                                                                                           \
	}

#define validate_fmod_sound(ref, output)                                            \
	{                                                                               \
		uint64_t _ref = 0;                                                          \
		validate_fmod_ext(ref, _ref);                                               \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                    \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                       \
		if (_ref_type == GM_FMOD_TYPE_SOUND)                                        \
		{                                                                           \
			if (auto search = map_sounds.find(_ref_id); search != map_sounds.end()) \
			{                                                                       \
				output = (FMOD::Sound*)search->second;                              \
			}                                                                       \
			else                                                                    \
			{                                                                       \
				LOG_ERROR("Invalid fmod fmod sound reference.");                    \
				return 0;                                                           \
			}                                                                       \
		}                                                                           \
		else                                                                        \
		{                                                                           \
			g_fmod_last_result = (FMOD_RESULT)-2;                                     \
			LOG_ERROR("Invalid argument type, expecting a fmod sound.");            \
			return 0;                                                               \
		}                                                                           \
	}

#define validate_fmod_sound_group(ref, output)                                                  \
	{                                                                                           \
		uint64_t _ref = 0;                                                                      \
		validate_fmod_ext(ref, _ref);                                                           \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                                \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                                   \
		if (_ref_type == GM_FMOD_TYPE_SOUND_GROUP)                                              \
		{                                                                                       \
			if (auto search = map_sound_groups.find(_ref_id); search != map_sound_groups.end()) \
			{                                                                                   \
				output = (FMOD::SoundGroup*)search->second;                                     \
			}                                                                                   \
			else                                                                                \
			{                                                                                   \
				LOG_ERROR("Invalid fmod sound group reference.");                               \
				return 0;                                                                       \
			}                                                                                   \
		}                                                                                       \
		else                                                                                    \
		{                                                                                       \
			g_fmod_last_result = (FMOD_RESULT)-2;                                                 \
			LOG_ERROR("Invalid argument type, expecting a fmod sound group.");                  \
			return 0;                                                                           \
		}                                                                                       \
	}

#define validate_fmod_dsp(ref, output)                                          \
	{                                                                           \
		uint64_t _ref = 0;                                                      \
		validate_fmod_ext(ref, _ref);                                           \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                   \
		if (_ref_type == GM_FMOD_TYPE_DSP)                                      \
		{                                                                       \
			if (auto search = map_dsps.find(_ref_id); search != map_dsps.end()) \
			{                                                                   \
				output = (FMOD::DSP*)search->second;                            \
			}                                                                   \
			else                                                                \
			{                                                                   \
				LOG_ERROR("Invalid fmod dsp reference.");                       \
				return 0;                                                       \
			}                                                                   \
		}                                                                       \
		else                                                                    \
		{                                                                       \
			g_fmod_last_result = (FMOD_RESULT)-2;                                 \
			LOG_ERROR("Invalid argument type, expecting a fmod dsp.");          \
			return 0;                                                           \
		}                                                                       \
	}

#define validate_fmod_dsp_connection(ref, output)                                                     \
	{                                                                                                 \
		uint64_t _ref = 0;                                                                            \
		validate_fmod_ext(ref, _ref);                                                                 \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                                      \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                                         \
		if (_ref_type == GM_FMOD_TYPE_DSP_CONNECTION)                                                 \
		{                                                                                             \
			if (auto search = map_dsp_connections.find(_ref_id); search != map_dsp_connections.end()) \
			{                                                                                         \
				output = (FMOD::DSPConnection*)search->second;                                        \
			}                                                                                         \
			else                                                                                      \
			{                                                                                         \
				LOG_ERROR("Invalid fmod dsp connection reference.");                                  \
				return 0;                                                                             \
			}                                                                                         \
		}                                                                                             \
		else                                                                                          \
		{                                                                                             \
			g_fmod_last_result = (FMOD_RESULT)-2;                                                       \
			LOG_ERROR("Invalid argument type, expecting a fmod dsp connection.");                     \
			return 0;                                                                                 \
		}                                                                                             \
	}

#define validate_fmod_reverb_3d(ref, output)                                          \
	{                                                                                 \
		uint64_t _ref = 0;                                                            \
		validate_fmod_ext(ref, _ref);                                                 \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                      \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                         \
		if (_ref_type == GM_FMOD_TYPE_DSP)                                            \
		{                                                                             \
			if (auto search = map_reverbs.find(_ref_id); search != map_reverbs.end()) \
			{                                                                         \
				output = (FMOD::Reverb3D*)search->second;                             \
			}                                                                         \
			else                                                                      \
			{                                                                         \
				LOG_ERROR("Invalid fmod reverb 3d reference.");                       \
				return 0;                                                             \
			}                                                                         \
		}                                                                             \
		else                                                                          \
		{                                                                             \
			g_fmod_last_result = (FMOD_RESULT)-2;                                       \
			LOG_ERROR("Invalid argument type, expecting a fmod reverb 3d.");          \
			return 0;                                                                 \
		}                                                                             \
	}

#define validate_fmod_geometry(ref, output)                                                 \
	{                                                                                       \
		uint64_t _ref = 0;                                                                  \
		validate_fmod_ext(ref, _ref);                                                       \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                            \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                               \
		if (_ref_type == GM_FMOD_TYPE_DSP)                                                  \
		{                                                                                   \
			if (auto search = map_geometries.find(_ref_id); search != map_geometries.end()) \
			{                                                                               \
				output = (FMOD::Geometry*)search->second;                                   \
			}                                                                               \
			else                                                                            \
			{                                                                               \
				LOG_ERROR("Invalid fmod geometry reference.");                              \
				return 0;                                                                   \
			}                                                                               \
		}                                                                                   \
		else                                                                                \
		{                                                                                   \
			g_fmod_last_result = (FMOD_RESULT)-2;                                             \
			LOG_ERROR("Invalid argument type, expecting a fmod geometry.");                 \
			return 0;                                                                       \
		}                                                                                   \
	}

#define validate_fmod_system(ref, output)                                             \
	{                                                                                 \
		uint64_t _ref = 0;                                                            \
		validate_fmod_ext(ref, _ref);                                                 \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                      \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                         \
		if (_ref_type == GM_FMOD_TYPE_SYSTEM)                                         \
		{                                                                             \
			if (auto search = map_systems.find(_ref_id); search != map_systems.end()) \
			{                                                                         \
				output = (FMOD::System*)search->second;                               \
			}                                                                         \
			else                                                                      \
			{                                                                         \
				LOG_ERROR("Invalid fmod system reference.");                          \
				return 0;                                                             \
			}                                                                         \
		}                                                                             \
		else                                                                          \
		{                                                                             \
			g_fmod_last_result = (FMOD_RESULT)-2;                                       \
			LOG_ERROR("Invalid argument type, expecting a fmod system.");             \
			return 0;                                                                 \
		}                                                                             \
	}

#define validate_fmod_studio_bank(ref, output)                                               \
	{                                                                                        \
		uint64_t _ref = 0;                                                                   \
		validate_fmod_ext(ref, _ref);                                                        \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                             \
		uint64_t _ref_id = _ref & 0xFFFFFFFF;                                                \
		if (_ref_type == GM_FMOD_STUDIO_TYPE_BANK)                                           \
		{                                                                                    \
			output = reinterpret_cast<FMOD::Studio::Bank*>(static_cast<uintptr_t>(_ref_id)); \
		}                                                                                    \
		else                                                                                 \
		{                                                                                    \
			g_fmod_last_result = (FMOD_RESULT)-2;                                              \
			LOG_ERROR("Invalid fmod bank type.");                                            \
			return 0;                                                                        \
		}                                                                                    \
	}

#define validate_fmod_studio_bus(ref, output)                                               \
	{                                                                                       \
		uint64_t _ref = 0;                                                                  \
		validate_fmod_ext(ref, _ref);                                                       \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                            \
		uint64_t _ref_id = _ref & 0xFFFFFFFF;                                               \
		if (_ref_type == GM_FMOD_STUDIO_TYPE_BUS)                                           \
		{                                                                                   \
			output = reinterpret_cast<FMOD::Studio::Bus*>(static_cast<uintptr_t>(_ref_id)); \
		}                                                                                   \
		else                                                                                \
		{                                                                                   \
			g_fmod_last_result = (FMOD_RESULT)-2;                                             \
			LOG_ERROR("Invalid fmod bus type.");                                            \
			return 0;                                                                       \
		}                                                                                   \
	}

#define validate_fmod_studio_command_replay(ref, output)                                              \
	{                                                                                                 \
		uint64_t _ref = 0;                                                                            \
		validate_fmod_ext(ref, _ref);                                                                 \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                                      \
		uint64_t _ref_id = _ref & 0xFFFFFFFF;                                                         \
		if (_ref_type == GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY)                                          \
		{                                                                                             \
			output = reinterpret_cast<FMOD::Studio::CommandReplay*>(static_cast<uintptr_t>(_ref_id)); \
		}                                                                                             \
		else                                                                                          \
		{                                                                                             \
			g_fmod_last_result = (FMOD_RESULT)-2;                                                       \
			LOG_ERROR("Invalid fmod command replay type.");                                           \
			return 0;                                                                                 \
		}                                                                                             \
	}

#define validate_fmod_studio_event_description(ref, output)                                              \
	{                                                                                                    \
		uint64_t _ref = 0;                                                                               \
		validate_fmod_ext(ref, _ref);                                                                    \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                                         \
		uint64_t _ref_id = _ref & 0xFFFFFFFF;                                                            \
		if (_ref_type == GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION)                                          \
		{                                                                                                \
			output = reinterpret_cast<FMOD::Studio::EventDescription*>(static_cast<uintptr_t>(_ref_id)); \
		}                                                                                                \
		else                                                                                             \
		{                                                                                                \
			g_fmod_last_result = (FMOD_RESULT)-2;                                                          \
			LOG_ERROR("Invalid fmod event description type.");                                           \
			return 0;                                                                                    \
		}                                                                                                \
	}

#define validate_fmod_studio_event_instance(ref, output)                                              \
	{                                                                                                 \
		uint64_t _ref = 0;                                                                            \
		validate_fmod_ext(ref, _ref);                                                                 \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                                      \
		uint64_t _ref_id = _ref & 0xFFFFFFFF;                                                         \
		if (_ref_type == GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE)                                          \
		{                                                                                             \
			output = reinterpret_cast<FMOD::Studio::EventInstance*>(static_cast<uintptr_t>(_ref_id)); \
		}                                                                                             \
		else                                                                                          \
		{                                                                                             \
			g_fmod_last_result = (FMOD_RESULT)-2;                                                       \
			LOG_ERROR("Invalid fmod event instance type.");                                           \
			return 0;                                                                                 \
		}                                                                                             \
	}

#define validate_fmod_studio_vca(ref, output)                                               \
	{                                                                                       \
		uint64_t _ref = 0;                                                                  \
		validate_fmod_ext(ref, _ref);                                                       \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                            \
		uint64_t _ref_id = _ref & 0xFFFFFFFF;                                               \
		if (_ref_type == GM_FMOD_STUDIO_TYPE_VCA)                                           \
		{                                                                                   \
			output = reinterpret_cast<FMOD::Studio::VCA*>(static_cast<uintptr_t>(_ref_id)); \
		}                                                                                   \
		else                                                                                \
		{                                                                                   \
			g_fmod_last_result = (FMOD_RESULT)-2;                                             \
			LOG_ERROR("Invalid fmod vca type.");                                            \
			return 0;                                                                       \
		}                                                                                   \
	}

#define validate_fmod_studio_system(ref, output)                                               \
	{                                                                                          \
		uint64_t _ref = 0;                                                                     \
		validate_fmod_ext(ref, _ref);                                                          \
		uint8_t _ref_type = (_ref >> 32) & 0xFF;                                               \
		uint32_t _ref_id = _ref & 0xFFFFFFFF;                                                  \
		if (_ref_type == GM_FMOD_STUDIO_TYPE_SYSTEM)                                           \
		{                                                                                      \
			output = reinterpret_cast<FMOD::Studio::System*>(static_cast<uintptr_t>(_ref_id)); \
		}                                                                                      \
		else                                                                                   \
		{                                                                                      \
			g_fmod_last_result = (FMOD_RESULT)-2;                                                \
			LOG_ERROR("Invalid call, no fmod studio system found.");                           \
			return 0;                                                                          \
		}                                                                                      \
	}
