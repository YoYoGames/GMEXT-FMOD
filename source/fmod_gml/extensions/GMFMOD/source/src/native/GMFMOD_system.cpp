#include "GMFMOD_system.h"

using namespace gm_structs;

// ============================================================
// System - Creation & Initialization
// ============================================================

FmodSystemRef fmod_system_create()
{
	FmodSystemRef result{};
	FMOD::System* system = nullptr;
	g_fmod_last_result = FMOD::System_Create(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result._ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}

double fmod_system_init(double max_channels, double flags)
{
	FMOD::System* system = nullptr;
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	system = map_systems.begin()->second;
	g_fmod_last_result = system->init((int)max_channels, (FMOD_INITFLAGS)(int)flags, nullptr);
	return 0;
}

double fmod_system_release(const FmodSystemRef& system_ref)
{
	FMOD::System* system = nullptr;
	validate_fmod_system(system_ref._ref, system);

	if (system == nullptr)
		return 0;

	g_fmod_last_result = system->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(system, map_systems);
	}
	return 0;
}

double fmod_system_close(const FmodSystemRef& system_ref)
{
	FMOD::System* system = nullptr;
	validate_fmod_system(system_ref._ref, system);

	if (system == nullptr)
		return 0;

	g_fmod_last_result = system->close();
	return 0;
}

double fmod_system_update()
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	g_fmod_last_result = system->update();
	return 0;
}

// ============================================================
// System - Channel Management
// ============================================================

FmodChannelRef fmod_system_get_channel(double index)
{
	FmodChannelRef result{};

	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = map_systems.begin()->second;
	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = system->getChannel((int)index, &channel);

	if (g_fmod_last_result == FMOD_OK && channel != nullptr)
	{
		uint32_t channel_id = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(channel));
		result._ref = packIndexIntoRef(channel_id, GM_FMOD_TYPE_CHANNEL);
	}
	return result;
}

FmodChannelGroupRef fmod_system_get_master_channel_group()
{
	FmodChannelGroupRef result{};

	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = map_systems.begin()->second;
	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = system->getMasterChannelGroup(&channel_group);

	if (g_fmod_last_result == FMOD_OK && channel_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
		result._ref = packIndexIntoRef(group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

// ============================================================
// System - Output & Driver
// ============================================================

double fmod_system_set_output(double output)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	g_fmod_last_result = system->setOutput((FMOD_OUTPUTTYPE)(int)output);
	return 0;
}

double fmod_system_get_output()
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	FMOD::System* system = map_systems.begin()->second;
	FMOD_OUTPUTTYPE output = FMOD_OUTPUTTYPE_AUTODETECT;
	g_fmod_last_result = system->getOutput(&output);
	return (double)output;
}

double fmod_system_get_num_drivers()
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	FMOD::System* system = map_systems.begin()->second;
	int num_drivers = 0;
	g_fmod_last_result = system->getNumDrivers(&num_drivers);
	return (double)num_drivers;
}

double fmod_system_set_driver(double driver)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	g_fmod_last_result = system->setDriver((int)driver);
	return 0;
}

double fmod_system_get_driver()
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	FMOD::System* system = map_systems.begin()->second;
	int driver = 0;
	g_fmod_last_result = system->getDriver(&driver);
	return (double)driver;
}

// ============================================================
// System - Software Channels
// ============================================================

double fmod_system_set_software_channels(double software_channels)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	g_fmod_last_result = system->setSoftwareChannels((int)software_channels);
	return 0;
}

double fmod_system_get_software_channels()
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	FMOD::System* system = map_systems.begin()->second;
	int software_channels = 0;
	g_fmod_last_result = system->getSoftwareChannels(&software_channels);
	return (double)software_channels;
}
