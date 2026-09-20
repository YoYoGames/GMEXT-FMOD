#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_bus.h"
#include <string>
#include <optional>
#include <cstdio>

using namespace gm_structs;

std::string fmod_studio_bus_get_path(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return "";
	return gmfmod::readString([bus](char* buf, int size, int* got) {
		return bus->getPath(buf, size, got);
	}, g_fmod_studio_last_result);
}

double fmod_studio_bus_get_volume(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_studio_last_result = bus->getVolume(&volume);
	return (double)volume;
}

double fmod_studio_bus_set_volume(uint64_t bus_ref, double volume)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;
	g_fmod_studio_last_result = bus->setVolume((float)volume);
	return 0;
}

bool fmod_studio_bus_get_paused(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return false;
	bool paused = false;
	g_fmod_studio_last_result = bus->getPaused(&paused);
	return paused;
}

double fmod_studio_bus_set_paused(uint64_t bus_ref, bool paused)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;
	g_fmod_studio_last_result = bus->setPaused(paused);
	return 0;
}

double fmod_studio_bus_stop_all_events(uint64_t bus_ref, gm_enums::FmodStudioStopMode stop_mode)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;
	g_fmod_studio_last_result = bus->stopAllEvents((FMOD_STUDIO_STOP_MODE)(int)stop_mode);
	return 0;
}

std::optional<uint64_t> fmod_studio_bus_get_master_bus()
{
	// The master bus is a property of the Studio system, not of any one bus, so this is the same
	// lookup fmod_studio_system_get_master_bus does. Delegating keeps one implementation.
	return fmod_studio_system_get_master_bus();
}

std::string fmod_studio_bus_get_id(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return std::string();

	FMOD_GUID guid{};
	g_fmod_studio_last_result = bus->getID(&guid);
	if (g_fmod_studio_last_result != FMOD_OK) return std::string();

	return gmfmod::formatGuid(guid);
}

bool fmod_studio_bus_is_valid(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return false;

	return bus->isValid();
}

// The raw pointer is what crosses the DLL boundary. A ref minted here would
// index this extension's own registry and, because both extensions pack refs
// identically, resolve against GMFMOD's map instead of failing. The caller
// hands this pointer to GMFMOD's fmod_channel_group_adopt().
uint64_t fmod_studio_bus_get_channel_group_ptr(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;

	FMOD::ChannelGroup* group = nullptr;
	g_fmod_studio_last_result = bus->getChannelGroup(&group);
	if (g_fmod_studio_last_result != FMOD_OK || group == nullptr) return 0;

	return static_cast<uint64_t>(reinterpret_cast<uintptr_t>(group));
}

double fmod_studio_bus_lock_channel_group(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;

	g_fmod_studio_last_result = bus->lockChannelGroup();
	return 0;
}

double fmod_studio_bus_unlock_channel_group(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;

	g_fmod_studio_last_result = bus->unlockChannelGroup();
	return 0;
}

FmodStudioCPUUsage fmod_studio_bus_get_cpu_usage(uint64_t bus_ref)
{
	FmodStudioCPUUsage result{};
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return result;

	unsigned int exclusive = 0, inclusive = 0;
	g_fmod_studio_last_result = bus->getCPUUsage(&exclusive, &inclusive);
	result.exclusive = (double)exclusive;
	result.inclusive = (double)inclusive;
	return result;
}

FmodStudioMemoryUsage fmod_studio_bus_get_memory_usage(uint64_t bus_ref)
{
	FmodStudioMemoryUsage result{};
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return result;

	FMOD_STUDIO_MEMORY_USAGE usage{};
	g_fmod_studio_last_result = bus->getMemoryUsage(&usage);
	result.exclusive = (double)usage.exclusive;
	result.inclusive = (double)usage.inclusive;
	result.sample_data = (double)usage.sampledata;
	return result;
}

bool fmod_studio_bus_get_mute(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return false;

	bool mute = false;
	g_fmod_studio_last_result = bus->getMute(&mute);
	return mute;
}

double fmod_studio_bus_set_mute(uint64_t bus_ref, bool mute)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;

	g_fmod_studio_last_result = bus->setMute(mute);
	return 0;
}

uint64_t fmod_studio_bus_get_port_index(uint64_t bus_ref)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;

	FMOD_PORT_INDEX index = 0;
	g_fmod_studio_last_result = bus->getPortIndex(&index);
	return (uint64_t)index;
}

double fmod_studio_bus_set_port_index(uint64_t bus_ref, uint64_t port_index)
{
	FMOD::Studio::Bus* bus = resolve_fmod_studio_bus(bus_ref);
	if (bus == nullptr) return 0;

	g_fmod_studio_last_result = bus->setPortIndex((FMOD_PORT_INDEX)port_index);
	return 0;
}
