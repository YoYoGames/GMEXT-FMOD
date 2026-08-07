#include "GMFMOD_system.h"

using namespace gm_structs;

// ============================================================
// System - Creation & Initialization
// ============================================================

uint64_t fmod_system_create()
{
	uint64_t result = 0;
	FMOD::System* system = nullptr;
	g_fmod_last_result = FMOD::System_Create(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}

double fmod_system_init(double max_channels, double flags)
{
	FMOD::System* system = nullptr;
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	system = getCurrentSystem();
	g_fmod_last_result = system->init((int)max_channels, (FMOD_INITFLAGS)(int)flags, nullptr);
	return 0;
}

double fmod_system_release(uint64_t system_ref)
{
	FMOD::System* system = nullptr;
	validate_fmod_system(system_ref, system);

	if (system == nullptr)
		return 0;

	g_fmod_last_result = system->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		if (getCurrentSystem() == system)
			setCurrentSystem(nullptr);
		unregisterResource(system, map_systems);
	}
	return 0;
}

double fmod_system_select(uint64_t system_ref)
{
	FMOD::System* system = nullptr;
	validate_fmod_system(system_ref, system);

	if (system == nullptr)
		return 0;

	setCurrentSystem(system);
	g_fmod_last_result = FMOD_OK;
	return 0;
}

double fmod_system_close(uint64_t system_ref)
{
	FMOD::System* system = nullptr;
	validate_fmod_system(system_ref, system);

	if (system == nullptr)
		return 0;

	g_fmod_last_result = system->close();
	return 0;
}

double fmod_system_update()
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	g_fmod_last_result = system->update();
	return 0;
}

double fmod_system_get_channels_playing()
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	int channels = 0;
	int realchannels = 0;
	g_fmod_last_result = system->getChannelsPlaying(&channels, &realchannels);
	return (double)channels;
}

// ============================================================
// System - Channel Management
// ============================================================

uint64_t fmod_system_get_channel(double index)
{
	uint64_t result = 0;

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = system->getChannel((int)index, &channel);

	if (g_fmod_last_result == FMOD_OK && channel != nullptr)
	{
		uint32_t channel_id = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(channel));
		result = packIndexIntoRef(channel_id, GM_FMOD_TYPE_CHANNEL);
	}
	return result;
}

uint64_t fmod_system_get_master_channel_group()
{
	uint64_t result = 0;

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = system->getMasterChannelGroup(&channel_group);

	if (g_fmod_last_result == FMOD_OK && channel_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
		result = packIndexIntoRef(group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

// ============================================================
// System - Output & Driver
// ============================================================

double fmod_system_set_output(double output)
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	g_fmod_last_result = system->setOutput((FMOD_OUTPUTTYPE)(int)output);
	return 0;
}

double fmod_system_get_output()
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD_OUTPUTTYPE output = FMOD_OUTPUTTYPE_AUTODETECT;
	g_fmod_last_result = system->getOutput(&output);
	return (double)output;
}

double fmod_system_get_num_drivers()
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	FMOD::System* system = getCurrentSystem();
	int num_drivers = 0;
	g_fmod_last_result = system->getNumDrivers(&num_drivers);
	return (double)num_drivers;
}

double fmod_system_set_driver(double driver)
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	g_fmod_last_result = system->setDriver((int)driver);
	return 0;
}

double fmod_system_get_driver()
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	FMOD::System* system = getCurrentSystem();
	int driver = 0;
	g_fmod_last_result = system->getDriver(&driver);
	return (double)driver;
}

// ============================================================
// System - Software Channels
// ============================================================

double fmod_system_set_software_channels(double software_channels)
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	g_fmod_last_result = system->setSoftwareChannels((int)software_channels);
	return 0;
}

double fmod_system_get_software_channels()
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	FMOD::System* system = getCurrentSystem();
	int software_channels = 0;
	g_fmod_last_result = system->getSoftwareChannels(&software_channels);
	return (double)software_channels;
}

// ============================================================
// System - 3D Settings
// ============================================================

double fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale)
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	g_fmod_last_result = system->set3DSettings((float)doppler_scale, (float)distance_factor, (float)rolloff_scale);
	return 0;
}

FmodSystem3DSettings fmod_system_get_3d_settings()
{
	FmodSystem3DSettings result{};

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
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

double fmod_system_set_3d_listener_attributes(double listener_index, const gm_structs::FmodVec3& position, const gm_structs::FmodVec3& velocity, const gm_structs::FmodVec3& forward, const gm_structs::FmodVec3& up)
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();

	FMOD_VECTOR fmod_position = {(float)position.x, (float)position.y, (float)position.z};
	FMOD_VECTOR fmod_velocity = {(float)velocity.x, (float)velocity.y, (float)velocity.z};
	FMOD_VECTOR fmod_forward = {(float)forward.x, (float)forward.y, (float)forward.z};
	FMOD_VECTOR fmod_up = {(float)up.x, (float)up.y, (float)up.z};

	g_fmod_last_result = system->set3DListenerAttributes((int)listener_index, &fmod_position, &fmod_velocity, &fmod_forward, &fmod_up);
	return 0;
}

FmodListener3DAttributes fmod_system_get_3d_listener_attributes(double listener_index)
{
	FmodListener3DAttributes result{};

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD_VECTOR position{}, velocity{}, forward{}, up{};
	g_fmod_last_result = system->get3DListenerAttributes((int)listener_index, &position, &velocity, &forward, &up);

	// Create FmodVec3 for position
	gm_structs::FmodVec3 pos_struct;
	pos_struct.x = (double)position.x;
	pos_struct.y = (double)position.y;
	pos_struct.z = (double)position.z;

	// Create FmodVec3 for velocity
	gm_structs::FmodVec3 vel_struct;
	vel_struct.x = (double)velocity.x;
	vel_struct.y = (double)velocity.y;
	vel_struct.z = (double)velocity.z;

	// Create FmodVec3 for forward
	gm_structs::FmodVec3 fwd_struct;
	fwd_struct.x = (double)forward.x;
	fwd_struct.y = (double)forward.y;
	fwd_struct.z = (double)forward.z;

	// Create FmodVec3 for up
	gm_structs::FmodVec3 up_struct;
	up_struct.x = (double)up.x;
	up_struct.y = (double)up.y;
	up_struct.z = (double)up.z;

	result.position = pos_struct;
	result.velocity = vel_struct;
	result.forward = fwd_struct;
	result.up = up_struct;
	return result;
}

// ============================================================
// System - Recording
// ============================================================

double fmod_system_get_record_num_drivers()
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	int num_drivers = 0, num_connected = 0;
	g_fmod_last_result = system->getRecordNumDrivers(&num_drivers, &num_connected);
	return (double)num_drivers;
}

FmodRecordDriverInfo fmod_system_get_record_driver_info(double record_driver_index)
{
	FmodRecordDriverInfo result{};

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
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
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	unsigned int position = 0;
	g_fmod_last_result = system->getRecordPosition((int)device_index, &position);
	return (double)position;
}

double fmod_system_record_start(double device_index, uint64_t sound_ref, double loop)
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = system->recordStart((int)device_index, sound, loop != 0.0);
	return 0;
}

double fmod_system_record_stop(double device_index)
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	g_fmod_last_result = system->recordStop((int)device_index);
	return 0;
}

double fmod_system_is_recording(double device_index)
{
	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::System* system = getCurrentSystem();
	bool is_recording = false;
	g_fmod_last_result = system->isRecording((int)device_index, &is_recording);
	return is_recording ? 1.0 : 0.0;
}

// ============================================================
// System - DSP
// ============================================================

uint64_t fmod_system_create_dsp()
{
	uint64_t result = 0;

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD::DSP* dsp = nullptr;
	g_fmod_last_result = system->createDSP(nullptr, &dsp);

	if (g_fmod_last_result == FMOD_OK && dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);
		result = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

uint64_t fmod_system_create_dsp_by_type(gm_enums::FmodDspType dsp_type)
{
	uint64_t result = 0;

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD::DSP* dsp = nullptr;
	g_fmod_last_result = system->createDSPByType((FMOD_DSP_TYPE)(int)dsp_type, &dsp);

	if (g_fmod_last_result == FMOD_OK && dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);
		result = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

FmodDSPBufferSize fmod_system_get_dsp_buffer_size()
{
	FmodDSPBufferSize result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	unsigned int buff_size = 0;
	int num_buffers = 0;
	g_fmod_last_result = system->getDSPBufferSize(&buff_size, &num_buffers);

	result.buff_size = (double)buff_size;
	result.num_buffers = (double)num_buffers;
	return result;
}

double fmod_system_set_dsp_buffer_size(double buff_size, double num_buffers)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->setDSPBufferSize((unsigned int)buff_size, (int)num_buffers);
	return 0;
}

// ============================================================
// System - Software Format
// ============================================================

FmodSoftwareFormat fmod_system_get_software_format()
{
	FmodSoftwareFormat result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	int sample_rate = 0;
	FMOD_SPEAKERMODE speaker_mode = FMOD_SPEAKERMODE_DEFAULT;
	int num_raw_speakers = 0;
	g_fmod_last_result = system->getSoftwareFormat(&sample_rate, &speaker_mode, &num_raw_speakers);

	result.sample_rate = (double)sample_rate;
	result.speaker_mode = (gm_enums::FmodSpeakerMode)(int)speaker_mode;
	result.num_raw_speakers = (double)num_raw_speakers;
	return result;
}

double fmod_system_set_software_format(double sample_rate, gm_enums::FmodSpeakerMode speaker_mode, double num_raw_speakers)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->setSoftwareFormat((int)sample_rate, (FMOD_SPEAKERMODE)(int)speaker_mode, (int)num_raw_speakers);
	return 0;
}

double fmod_system_set_stream_buffer_size(double file_buffer_size, double file_buffer_size_type)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->setStreamBufferSize((unsigned int)file_buffer_size, (FMOD_TIMEUNIT)(int)file_buffer_size_type);
	return 0;
}

FmodDriverInfo fmod_system_get_driver_info(double driver_id)
{
	FmodDriverInfo result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	char name[512]{};
	FMOD_GUID guid{};
	int sample_rate = 0;
	FMOD_SPEAKERMODE speaker_mode = FMOD_SPEAKERMODE_DEFAULT;
	int speaker_mode_channels = 0;
	g_fmod_last_result = system->getDriverInfo((int)driver_id, name, sizeof(name), &guid, &sample_rate, &speaker_mode, &speaker_mode_channels);

	result.name = std::string(name);
	result.speaker_mode = (gm_enums::FmodSpeakerMode)(int)speaker_mode;
	result.sample_rate = (double)sample_rate;
	result.speaker_mode_channels = (double)speaker_mode_channels;
	return result;
}

// ============================================================
// System - Channel Groups
// ============================================================

uint64_t fmod_system_create_channel_group(std::string_view name)
{
	uint64_t result = 0;

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	std::string name_str(name);
	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = system->createChannelGroup(name_str.c_str(), &channel_group);

	if (g_fmod_last_result == FMOD_OK && channel_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
		result = packIndexIntoRef(group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

uint64_t fmod_system_play_dsp(uint64_t dsp_ref, uint64_t channel_group_ref, double paused)
{
	uint64_t result = 0;

	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	if (dsp == nullptr)
		return result;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return result;

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = system->playDSP(dsp, channel_group, (paused != 0.0), &channel);

	if (g_fmod_last_result == FMOD_OK && channel != nullptr)
	{
		uint32_t channel_id = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(channel));
		result = packIndexIntoRef(channel_id, GM_FMOD_TYPE_CHANNEL);
	}
	return result;
}
