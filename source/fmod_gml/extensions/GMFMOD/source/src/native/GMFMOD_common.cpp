#include "GMFMOD_common.h"

// ============================================================
// Global State Definitions
// ============================================================

std::atomic<FMOD_RESULT> g_fmod_last_result{ FMOD_OK };

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

uint64_t packPointerIntoRef(const void* pointer, uint8_t type)
{
	uintptr_t address = reinterpret_cast<uintptr_t>(pointer);
	if ((uint64_t)address > 0xFFFFFFFFull)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}
	return packIndexIntoRef((uint32_t)address, type);
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

// The registry used to keep its index in FMOD's user-data slot; that slot is
// the developer's now, so the lookup by object lives here instead. One map per
// type: a freed object's address can be reused by an object of another type,
// and a shared map would hand the new object the old id.
template <typename T>
static std::map<T, uint32_t>& registryIdsOf()
{
	static std::map<T, uint32_t> ids;
	return ids;
}

template <typename T>
uint32_t registerOrFindResource(T resource, uint32_t& index, std::map<uint32_t, T>& map)
{
	std::map<T, uint32_t>& ids = registryIdsOf<T>();
	auto found = ids.find(resource);
	if (found != ids.end())
		return found->second;

	map.insert({ ++index, resource });
	ids.insert({ resource, index });
	return index;
}

template <typename T>
uint32_t unregisterResource(T resource, std::map<uint32_t, T>& map)
{
	std::map<T, uint32_t>& ids = registryIdsOf<T>();
	auto found = ids.find(resource);
	if (found == ids.end())
		return 0;

	uint32_t resource_id = found->second;
	ids.erase(found);
	map.erase(resource_id);
	return resource_id;
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
// Teardown
// ============================================================

void fmod_registry_clear_all()
{
	// System::release() has already freed everything its systems owned, so the
	// registries are cleared rather than walked - every pointer in them is dead
	// by this point.
	registryIdsOf<FMOD::System*>().clear();
	registryIdsOf<FMOD::Sound*>().clear();
	registryIdsOf<FMOD::ChannelGroup*>().clear();
	registryIdsOf<FMOD::SoundGroup*>().clear();
	registryIdsOf<FMOD::DSP*>().clear();
	registryIdsOf<FMOD::DSPConnection*>().clear();
	registryIdsOf<FMOD::Reverb3D*>().clear();
	registryIdsOf<FMOD::Geometry*>().clear();

	map_systems.clear();
	map_sounds.clear();
	map_channel_groups.clear();
	map_dsps.clear();
	map_sound_groups.clear();
	map_dsp_connections.clear();
	map_reverbs.clear();
	map_geometries.clear();

	index_systems = 0;
	index_sounds = 0;
	index_channel_groups = 0;
	index_dsps = 0;
	index_sound_groups = 0;
	index_dsp_connections = 0;
	index_reverbs = 0;
	index_geometries = 0;
}
