#include <native/GMFMODInternal_native.h>
#include "GMFMOD_studio_bus.h"
#include <string>
#include <optional>

using namespace gm_structs;

std::string fmod_studio_bus_get_path(const FmodStudioBusRef& bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref._ref, bus);
	if (bus == nullptr) return "";
	char path[256] = {};
	int capacity = sizeof(path);
	g_fmod_last_result = bus->getPath(path, capacity, nullptr);
	return std::string(path);
}

double fmod_studio_bus_get_volume(const FmodStudioBusRef& bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref._ref, bus);
	if (bus == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_last_result = bus->getVolume(&volume);
	return (double)volume;
}

double fmod_studio_bus_set_volume(const FmodStudioBusRef& bus_ref, double volume)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref._ref, bus);
	if (bus == nullptr) return 0;
	g_fmod_last_result = bus->setVolume((float)volume);
	return 0;
}

double fmod_studio_bus_get_paused(const FmodStudioBusRef& bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref._ref, bus);
	if (bus == nullptr) return 0.0;
	bool paused = false;
	g_fmod_last_result = bus->getPaused(&paused);
	return paused ? 1.0 : 0.0;
}

double fmod_studio_bus_set_paused(const FmodStudioBusRef& bus_ref, double paused)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref._ref, bus);
	if (bus == nullptr) return 0;
	g_fmod_last_result = bus->setPaused(paused != 0.0);
	return 0;
}

double fmod_studio_bus_stop_all_events(const FmodStudioBusRef& bus_ref, double stop_mode)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref._ref, bus);
	if (bus == nullptr) return 0;
	g_fmod_last_result = bus->stopAllEvents((FMOD_STUDIO_STOP_MODE)(int)stop_mode);
	return 0;
}

std::optional<FmodStudioBusRef> fmod_studio_bus_get_master_bus()
{
	// This is a static/global operation, handled at system level
	// Use fmod_studio_system_get_master_bus instead
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}
