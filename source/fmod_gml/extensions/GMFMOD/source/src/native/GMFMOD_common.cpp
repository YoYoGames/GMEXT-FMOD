#include "GMFMOD_common.h"

// ============================================================
// Global State Definitions
// ============================================================

FMOD_RESULT g_fmod_last_result = FMOD_OK;

std::map<uint32_t, FMOD::System*> map_systems;
uint32_t index_systems = 0;

std::map<uint32_t, FMOD::Sound*> map_sounds;
uint32_t index_sounds = 0;

std::map<uint32_t, FMOD::ChannelGroup*> map_channel_groups;
uint32_t index_channel_groups = 0;

std::map<uint32_t, FMOD::DSP*> map_dsps;
uint32_t index_dsps = 0;

std::map<uint32_t, FMOD::SoundGroup*> map_sound_groups;
uint32_t index_sound_groups = 0;

std::map<uint32_t, FMOD::DSPConnection*> map_dsp_connections;
uint32_t index_dsp_connections = 0;

std::map<uint32_t, FMOD::Reverb3D*> map_reverbs;
uint32_t index_reverbs = 0;

std::map<uint32_t, FMOD::Geometry*> map_geometries;
uint32_t index_geometries = 0;

// ============================================================
// Helper Functions
// ============================================================

//     10bit      |     8bit      |      32bit
//   extension    |     type      |       ref
//

uint64_t packIndexIntoRef(uint32_t index, uint8_t type)
{
	uint64_t ext_id = 0x01;  // GM_FMOD_EXT
	uint64_t packed = (ext_id << 40) | ((uint64_t)type << 32) | index;
	return packed;
}

static FMOD::System* g_selected_system = nullptr;

FMOD::System* getCurrentSystem()
{
	if (g_selected_system != nullptr)
		return g_selected_system;
	if (map_systems.empty())
		return nullptr;
	return map_systems.begin()->second;
}

void setCurrentSystem(FMOD::System* system)
{
	g_selected_system = system;
}

struct CustomUserData
{
	uint32_t id = 0;
	uint64_t internal = 0;
	double data = 0.0;
};

template <typename T>
uint32_t registerOrFindResource(T resource, uint32_t& index, std::map<uint32_t, T>& map)
{
	void* userData = nullptr;
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
	void* userData = nullptr;
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

// ============================================================
// Explicit Template Instantiations
// ============================================================

template uint32_t registerOrFindResource<FMOD::System*>(FMOD::System*, uint32_t&, std::map<uint32_t, FMOD::System*>&);
template uint32_t registerOrFindResource<FMOD::Sound*>(FMOD::Sound*, uint32_t&, std::map<uint32_t, FMOD::Sound*>&);
template uint32_t registerOrFindResource<FMOD::ChannelGroup*>(FMOD::ChannelGroup*, uint32_t&, std::map<uint32_t, FMOD::ChannelGroup*>&);
template uint32_t registerOrFindResource<FMOD::SoundGroup*>(FMOD::SoundGroup*, uint32_t&, std::map<uint32_t, FMOD::SoundGroup*>&);
template uint32_t registerOrFindResource<FMOD::DSP*>(FMOD::DSP*, uint32_t&, std::map<uint32_t, FMOD::DSP*>&);
template uint32_t registerOrFindResource<FMOD::DSPConnection*>(FMOD::DSPConnection*, uint32_t&, std::map<uint32_t, FMOD::DSPConnection*>&);
template uint32_t registerOrFindResource<FMOD::Reverb3D*>(FMOD::Reverb3D*, uint32_t&, std::map<uint32_t, FMOD::Reverb3D*>&);
template uint32_t registerOrFindResource<FMOD::Geometry*>(FMOD::Geometry*, uint32_t&, std::map<uint32_t, FMOD::Geometry*>&);

template uint32_t unregisterResource<FMOD::System*>(FMOD::System*, std::map<uint32_t, FMOD::System*>&);
template uint32_t unregisterResource<FMOD::Sound*>(FMOD::Sound*, std::map<uint32_t, FMOD::Sound*>&);
template uint32_t unregisterResource<FMOD::ChannelGroup*>(FMOD::ChannelGroup*, std::map<uint32_t, FMOD::ChannelGroup*>&);
template uint32_t unregisterResource<FMOD::SoundGroup*>(FMOD::SoundGroup*, std::map<uint32_t, FMOD::SoundGroup*>&);
template uint32_t unregisterResource<FMOD::DSP*>(FMOD::DSP*, std::map<uint32_t, FMOD::DSP*>&);
template uint32_t unregisterResource<FMOD::DSPConnection*>(FMOD::DSPConnection*, std::map<uint32_t, FMOD::DSPConnection*>&);
template uint32_t unregisterResource<FMOD::Reverb3D*>(FMOD::Reverb3D*, std::map<uint32_t, FMOD::Reverb3D*>&);
template uint32_t unregisterResource<FMOD::Geometry*>(FMOD::Geometry*, std::map<uint32_t, FMOD::Geometry*>&);

// ============================================================
// User Data (map-registered resources)
// ============================================================

template <typename T>
double getResourceUserData(T resource)
{
	if (resource == nullptr) return 0.0;
	void* userData = nullptr;
	resource->getUserData(&userData);
	if (userData == nullptr) return 0.0;
	return static_cast<CustomUserData*>(userData)->data;
}

template <typename T>
void setResourceUserData(T resource, double data)
{
	if (resource == nullptr) return;
	void* userData = nullptr;
	resource->getUserData(&userData);
	if (userData != nullptr)
		static_cast<CustomUserData*>(userData)->data = data;
}

template double getResourceUserData<FMOD::DSP*>(FMOD::DSP*);
template void setResourceUserData<FMOD::DSP*>(FMOD::DSP*, double);
template double getResourceUserData<FMOD::DSPConnection*>(FMOD::DSPConnection*);
template void setResourceUserData<FMOD::DSPConnection*>(FMOD::DSPConnection*, double);
template double getResourceUserData<FMOD::System*>(FMOD::System*);
template void setResourceUserData<FMOD::System*>(FMOD::System*, double);
template double getResourceUserData<FMOD::Sound*>(FMOD::Sound*);
template void setResourceUserData<FMOD::Sound*>(FMOD::Sound*, double);
template double getResourceUserData<FMOD::SoundGroup*>(FMOD::SoundGroup*);
template void setResourceUserData<FMOD::SoundGroup*>(FMOD::SoundGroup*, double);
template double getResourceUserData<FMOD::Reverb3D*>(FMOD::Reverb3D*);
template void setResourceUserData<FMOD::Reverb3D*>(FMOD::Reverb3D*, double);
template double getResourceUserData<FMOD::Geometry*>(FMOD::Geometry*);
template void setResourceUserData<FMOD::Geometry*>(FMOD::Geometry*, double);

// ============================================================
// User Data (pointer-identified resources)
// ============================================================

std::map<uintptr_t, double> g_user_data;

std::atomic<uint64_t> g_fmod_callback_count{ 0 };
