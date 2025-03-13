
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.03/api/studio-api-bus.html

// Playback Control

func double fmod_studio_bus_set_paused(double bus_ref, double pause)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	g_fmod_last_result = bus->setPaused(pause >= 0.5);
	return 0;
}

func double fmod_studio_bus_get_paused(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	bool pause = false;
	g_fmod_last_result = bus->getPaused(&pause);

	return pause ? 1.0 : 0.0;
}

func double fmod_studio_bus_stop_all_events(double bus_ref, double stop_mode)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	g_fmod_last_result = bus->stopAllEvents((FMOD_STUDIO_STOP_MODE)stop_mode);
	return 0;
}

// Playback Properties

func double fmod_studio_bus_set_volume(double bus_ref, double volumen)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	g_fmod_last_result = bus->setVolume((float)volumen);

	return 0;
}

func double fmod_studio_bus_get_volume(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	float volume;
	g_fmod_last_result = bus->getVolume(&volume);

	return (double)volume;
}

func double fmod_studio_bus_set_mute(double bus_ref, double mute)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	g_fmod_last_result = bus->setMute(mute >= 0.5);

	return 0;
}

func double fmod_studio_bus_get_mute(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	bool mute;
	g_fmod_last_result = bus->getMute(&mute);

	return mute ? 1.0 : 0.0;
}

func double fmod_studio_bus_set_port_index_multiplatform(double bus_ref, char* buff_args)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto port_index = YYGetUint64(args[0]);

	g_fmod_last_result = bus->setPortIndex((FMOD_PORT_INDEX)port_index);
	return 0;
}

func double fmod_studio_bus_get_port_index_multiplatform(double bus_ref, char* buff_return)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	FMOD_PORT_INDEX port_index;

	g_fmod_last_result = bus->getPortIndex(&port_index);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	DataStream output_stream = {};
	output_stream << (uint64_t)port_index;
	output_stream.writeTo(buff_return);

	return 0;
}

// Core

func double fmod_studio_bus_get_channel_group(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	FMOD::ChannelGroup* channel_group;
	g_fmod_last_result = bus->getChannelGroup(&channel_group);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t channel_group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
	return (double)packIndexIntoRef(channel_group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
}

func double fmod_studio_bus_lock_channel_group(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	g_fmod_last_result = bus->lockChannelGroup();

	return 0;
}

func double fmod_studio_bus_unlock_channel_group(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	g_fmod_last_result = bus->unlockChannelGroup();

	return 0;
}

// Profiling

func double fmod_studio_bus_get_cpu_usage_multiplatform(double bus_ref, char* buff_return)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	unsigned int exclusive;
	unsigned int inclusive;
	g_fmod_last_result = bus->getCPUUsage(&exclusive, &inclusive);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("exclusive", (uint64_t)exclusive);
	map_return.addKeyValue("inclusive", (uint64_t)inclusive);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_bus_get_memory_usage_multiplatform(double bus_ref, char* buff_return)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	FMOD_STUDIO_MEMORY_USAGE memory_usage{};
	g_fmod_last_result = bus->getMemoryUsage(&memory_usage);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("exclusive", memory_usage.exclusive);
	map_return.addKeyValue("inclusive", memory_usage.inclusive);
	map_return.addKeyValue("sample_data", memory_usage.sampledata);

	map_return.writeTo(buff_return);

	return 0;
}

// General

func char* fmod_studio_bus_get_id(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	FMOD_GUID id{};
	g_fmod_last_result = bus->getID(&id);

	gStringBuffer[0] = '\0';
	if (g_fmod_last_result != FMOD_OK)
	{
		return gStringBuffer;
	}

	strncpy_s(gStringBuffer, GUIDtoString(id).c_str(), sizeof(gStringBuffer) - 1);
	gStringBuffer[sizeof(gStringBuffer) - 1] = '\0';  // Ensure null termination

	return gStringBuffer;
}

func char* fmod_studio_bus_get_path(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	int retrieved;
	gStringBuffer[0] = '\0';
	g_fmod_last_result = bus->getPath(gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

func double fmod_studio_bus_is_valid(double bus_ref)
{
	FMOD::Studio::Bus* bus = nullptr;
	validate_fmod_studio_bus(bus_ref, bus);

	bool valid = bus->isValid();
	return valid ? 1.0 : 0.0;
}
