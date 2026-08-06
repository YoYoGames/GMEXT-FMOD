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

double fmod_system_get_channels_playing()
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	int channels = 0;
	int realchannels = 0;
	g_fmod_last_result = system->getChannelsPlaying(&channels, &realchannels);
	return (double)channels;
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

// ============================================================
// System - 3D Settings
// ============================================================

double fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	g_fmod_last_result = system->set3DSettings((float)doppler_scale, (float)distance_factor, (float)rolloff_scale);
	return 0;
}

FmodSystem3DSettings fmod_system_get_3d_settings()
{
	FmodSystem3DSettings result{};

	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = map_systems.begin()->second;
	float doppler_scale = 0.0f, distance_factor = 0.0f, rolloff_scale = 0.0f;
	g_fmod_last_result = system->get3DSettings(&doppler_scale, &distance_factor, &rolloff_scale);

	result.doppler_scale = (double)doppler_scale;
	result.distance_factor = (double)distance_factor;
	result.rolloff_scale = (double)rolloff_scale;
	return result;
}

// ============================================================
// System - 3D Listeners
// ============================================================

double fmod_system_set_3d_listener_attributes(double listener_index, const gm::wire::GMValue& position, const gm::wire::GMValue& velocity, const gm::wire::GMValue& forward, const gm::wire::GMValue& up)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;

	// Extract position {x, y, z}
	FMOD_VECTOR fmod_position{};
	// Position extraction would need proper struct parsing

	// Extract velocity {x, y, z}
	FMOD_VECTOR fmod_velocity{};
	// Velocity extraction would need proper struct parsing

	// Extract forward {x, y, z}
	FMOD_VECTOR fmod_forward{};
	// Forward extraction would need proper struct parsing

	// Extract up {x, y, z}
	FMOD_VECTOR fmod_up{};
	// Up extraction would need proper struct parsing

	g_fmod_last_result = system->set3DListenerAttributes((int)listener_index, &fmod_position, &fmod_velocity, &fmod_forward, &fmod_up);
	return 0;
}

FmodListener3DAttributes fmod_system_get_3d_listener_attributes(double listener_index)
{
	FmodListener3DAttributes result{};

	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = map_systems.begin()->second;
	FMOD_VECTOR position{}, velocity{}, forward{}, up{};
	g_fmod_last_result = system->get3DListenerAttributes((int)listener_index, &position, &velocity, &forward, &up);

	result.position = (double)(position.x + position.y + position.z);
	result.velocity = (double)(velocity.x + velocity.y + velocity.z);
	result.forward = (double)(forward.x + forward.y + forward.z);
	result.up = (double)(up.x + up.y + up.z);
	return result;
}

// ============================================================
// System - Recording
// ============================================================

double fmod_system_get_record_num_drivers()
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	int num_drivers = 0, num_connected = 0;
	g_fmod_last_result = system->getRecordNumDrivers(&num_drivers, &num_connected);
	return (double)num_drivers;
}

FmodRecordDriverInfo fmod_system_get_record_driver_info(double record_driver_index)
{
	FmodRecordDriverInfo result{};

	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = map_systems.begin()->second;
	char name[512]{};
	FMOD_GUID guid{};
	int system_rate = 0;
	FMOD_SPEAKERMODE speaker_mode = FMOD_SPEAKERMODE_DEFAULT;
	int speaker_mode_channels = 0;
	FMOD_DRIVER_STATE state = FMOD_DRIVER_STATE_CONNECTED;
	g_fmod_last_result = system->getRecordDriverInfo((int)record_driver_index, name, sizeof(name), &guid, &system_rate, &speaker_mode, &speaker_mode_channels, &state);

	result.name = std::string(name);
	result.speaker_mode = (double)speaker_mode;
	result.sample_rate = (double)system_rate;
	return result;
}

double fmod_system_get_record_position(double device_index)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	unsigned int position = 0;
	g_fmod_last_result = system->getRecordPosition((int)device_index, &position);
	return (double)position;
}

double fmod_system_record_start(double device_index, const FmodSoundRef& sound_ref, double loop)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = system->recordStart((int)device_index, sound, loop != 0.0);
	return 0;
}

double fmod_system_record_stop(double device_index)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	g_fmod_last_result = system->recordStop((int)device_index);
	return 0;
}

double fmod_system_is_recording(double device_index)
{
	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = map_systems.begin()->second;
	bool is_recording = false;
	g_fmod_last_result = system->isRecording((int)device_index, &is_recording);
	return is_recording ? 1.0 : 0.0;
}
