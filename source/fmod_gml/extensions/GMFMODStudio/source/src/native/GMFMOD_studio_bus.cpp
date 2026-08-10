#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_bus.h"
#include <string>
#include <optional>
#include <cstdio>

using namespace gm_structs;

static std::string format_guid(const FMOD_GUID& guid)
{
	char buffer[64]{};
	std::snprintf(buffer, sizeof(buffer),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
	return std::string(buffer);
}

std::string fmod_studio_bus_get_path(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return "";
	char path[256] = {};
	int capacity = sizeof(path);
	g_fmod_last_result = bus->getPath(path, capacity, nullptr);
	return std::string(path);
}

double fmod_studio_bus_get_volume(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_last_result = bus->getVolume(&volume);
	return (double)volume;
}

double fmod_studio_bus_set_volume(uint64_t bus_ref, double volume)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;
	g_fmod_last_result = bus->setVolume((float)volume);
	return 0;
}

double fmod_studio_bus_get_paused(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0.0;
	bool paused = false;
	g_fmod_last_result = bus->getPaused(&paused);
	return paused ? 1.0 : 0.0;
}

double fmod_studio_bus_set_paused(uint64_t bus_ref, double paused)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;
	g_fmod_last_result = bus->setPaused(paused != 0.0);
	return 0;
}

double fmod_studio_bus_stop_all_events(uint64_t bus_ref, double stop_mode)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;
	g_fmod_last_result = bus->stopAllEvents((FMOD_STUDIO_STOP_MODE)(int)stop_mode);
	return 0;
}

std::optional<uint64_t> fmod_studio_bus_get_master_bus()
{
	// This is a static/global operation, handled at system level
	// Use fmod_studio_system_get_master_bus instead
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}

std::string fmod_studio_bus_get_id(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return std::string();

	FMOD_GUID guid{};
	g_fmod_last_result = bus->getID(&guid);
	if (g_fmod_last_result != FMOD_OK) return std::string();

	return format_guid(guid);
}

double fmod_studio_bus_is_valid(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0.0;

	return bus->isValid() ? 1.0 : 0.0;
}

uint64_t fmod_studio_bus_get_channel_group(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;

	FMOD::ChannelGroup* group = nullptr;
	g_fmod_last_result = bus->getChannelGroup(&group);
	if (g_fmod_last_result != FMOD_OK || group == nullptr) return 0;

	uint32_t group_id = registerOrFindResource(group, index_channel_groups, map_channel_groups);
	return packIndexIntoRef(group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
}

double fmod_studio_bus_lock_channel_group(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;

	g_fmod_last_result = bus->lockChannelGroup();
	return 0;
}

double fmod_studio_bus_unlock_channel_group(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;

	g_fmod_last_result = bus->unlockChannelGroup();
	return 0;
}

FmodStudioCPUUsage fmod_studio_bus_get_cpu_usage(uint64_t bus_ref)
{
	FmodStudioCPUUsage result{};
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return result;

	unsigned int exclusive = 0, inclusive = 0;
	g_fmod_last_result = bus->getCPUUsage(&exclusive, &inclusive);
	result.exclusive = (double)exclusive;
	result.inclusive = (double)inclusive;
	return result;
}

FmodStudioMemoryUsage fmod_studio_bus_get_memory_usage(uint64_t bus_ref)
{
	FmodStudioMemoryUsage result{};
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return result;

	FMOD_STUDIO_MEMORY_USAGE usage{};
	g_fmod_last_result = bus->getMemoryUsage(&usage);
	result.exclusive = (double)usage.exclusive;
	result.inclusive = (double)usage.inclusive;
	result.sample_data = (double)usage.sampledata;
	return result;
}

double fmod_studio_bus_get_mute(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0.0;

	bool mute = false;
	g_fmod_last_result = bus->getMute(&mute);
	return mute ? 1.0 : 0.0;
}

double fmod_studio_bus_set_mute(uint64_t bus_ref, double mute)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;

	g_fmod_last_result = bus->setMute(mute != 0.0);
	return 0;
}

uint64_t fmod_studio_bus_get_port_index(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;

	FMOD_PORT_INDEX index = 0;
	g_fmod_last_result = bus->getPortIndex(&index);
	return (uint64_t)index;
}

double fmod_studio_bus_set_port_index(uint64_t bus_ref, uint64_t port_index)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);
	if (bus == nullptr) return 0;

	g_fmod_last_result = bus->setPortIndex((FMOD_PORT_INDEX)port_index);
	return 0;
}
