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
	result.speaker_mode = (gm_enums::FmodSpeakerMode)(int)speaker_mode;
	result.speaker_mode_channels = (double)speaker_mode_channels;
	result.sample_rate = (double)system_rate;
	result.state = (gm_enums::FmodDriverState)(int)state;
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

// ============================================================
// System - Registry / Version
// ============================================================

double fmod_system_count()
{
	return (double)map_systems.size();
}

double fmod_system_get_version()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	unsigned int version = 0;
	g_fmod_last_result = system->getVersion(&version);
	return (double)version;
}

uint64_t fmod_system_get_master_sound_group()
{
	uint64_t result = 0;

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::SoundGroup* sound_group = nullptr;
	g_fmod_last_result = system->getMasterSoundGroup(&sound_group);

	if (g_fmod_last_result == FMOD_OK && sound_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);
		result = packIndexIntoRef(group_id, GM_FMOD_TYPE_SOUND_GROUP);
	}
	return result;
}

// ============================================================
// System - Advanced Settings
// ============================================================

FmodAdvancedSettings fmod_system_get_advanced_settings()
{
	FmodAdvancedSettings result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD_ADVANCEDSETTINGS settings{};
	settings.cbSize = sizeof(FMOD_ADVANCEDSETTINGS);
	g_fmod_last_result = system->getAdvancedSettings(&settings);
	if (g_fmod_last_result != FMOD_OK)
		return result;

	result.max_mpeg_codecs = (double)settings.maxMPEGCodecs;
	result.max_adpcm_codecs = (double)settings.maxADPCMCodecs;
	result.max_xma_codecs = (double)settings.maxXMACodecs;
	result.max_vorbis_codecs = (double)settings.maxVorbisCodecs;
	result.max_at9_codecs = (double)settings.maxAT9Codecs;
	result.max_fadpcm_codecs = (double)settings.maxFADPCMCodecs;
	result.asio_num_channels = (double)settings.ASIONumChannels;
	result.vol0_virtualvol = (double)settings.vol0virtualvol;
	result.default_decode_buffer_size = (double)settings.defaultDecodeBufferSize;
	result.profile_port = (double)settings.profilePort;
	result.geometry_max_fade_time = (double)settings.geometryMaxFadeTime;
	result.distance_filter_center_freq = (double)settings.distanceFilterCenterFreq;
	result.reverb3d_instance = (double)settings.reverb3Dinstance;
	result.dsp_buffer_pool_size = (double)settings.DSPBufferPoolSize;
	result.resampler_method = (double)settings.resamplerMethod;
	result.random_seed = (double)settings.randomSeed;
	result.max_convolution_threads = (double)settings.maxConvolutionThreads;
	result.max_opus_codecs = (double)settings.maxOpusCodecs;
	return result;
}

double fmod_system_set_advanced_settings(const FmodAdvancedSettings& settings)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD_ADVANCEDSETTINGS native_settings{};
	native_settings.cbSize = sizeof(FMOD_ADVANCEDSETTINGS);
	native_settings.maxMPEGCodecs = (int)settings.max_mpeg_codecs;
	native_settings.maxADPCMCodecs = (int)settings.max_adpcm_codecs;
	native_settings.maxXMACodecs = (int)settings.max_xma_codecs;
	native_settings.maxVorbisCodecs = (int)settings.max_vorbis_codecs;
	native_settings.maxAT9Codecs = (int)settings.max_at9_codecs;
	native_settings.maxFADPCMCodecs = (int)settings.max_fadpcm_codecs;
	native_settings.ASIONumChannels = (int)settings.asio_num_channels;
	native_settings.vol0virtualvol = (float)settings.vol0_virtualvol;
	native_settings.defaultDecodeBufferSize = (unsigned int)settings.default_decode_buffer_size;
	native_settings.profilePort = (unsigned short)settings.profile_port;
	native_settings.geometryMaxFadeTime = (unsigned int)settings.geometry_max_fade_time;
	native_settings.distanceFilterCenterFreq = (float)settings.distance_filter_center_freq;
	native_settings.reverb3Dinstance = (int)settings.reverb3d_instance;
	native_settings.DSPBufferPoolSize = (int)settings.dsp_buffer_pool_size;
	native_settings.resamplerMethod = (FMOD_DSP_RESAMPLER)(int)settings.resampler_method;
	native_settings.randomSeed = (unsigned int)settings.random_seed;
	native_settings.maxConvolutionThreads = (int)settings.max_convolution_threads;
	native_settings.maxOpusCodecs = (int)settings.max_opus_codecs;

	g_fmod_last_result = system->setAdvancedSettings(&native_settings);
	return 0;
}

// ============================================================
// System - Network
// ============================================================

std::string fmod_system_get_network_proxy()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return "";
	}

	char proxy[512]{};
	g_fmod_last_result = system->getNetworkProxy(proxy, sizeof(proxy));
	return std::string(proxy);
}

double fmod_system_set_network_proxy(std::string_view proxy)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	std::string proxy_str(proxy);
	g_fmod_last_result = system->setNetworkProxy(proxy_str.c_str());
	return 0;
}

double fmod_system_get_network_timeout()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	int timeout = 0;
	g_fmod_last_result = system->getNetworkTimeout(&timeout);
	return (double)timeout;
}

double fmod_system_set_network_timeout(double timeout_ms)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->setNetworkTimeout((int)timeout_ms);
	return 0;
}

// ============================================================
// System - Speakers
// ============================================================

double fmod_system_get_speaker_mode_channels(gm_enums::FmodSpeakerMode mode)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	int channels = 0;
	g_fmod_last_result = system->getSpeakerModeChannels((FMOD_SPEAKERMODE)(int)mode, &channels);
	return (double)channels;
}

FmodSpeakerPosition fmod_system_get_speaker_position(double speaker)
{
	FmodSpeakerPosition result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	float x = 0.0f, y = 0.0f;
	bool active = false;
	g_fmod_last_result = system->getSpeakerPosition((FMOD_SPEAKER)(int)speaker, &x, &y, &active);

	result.x = (double)x;
	result.y = (double)y;
	result.active = active ? 1.0 : 0.0;
	return result;
}

double fmod_system_set_speaker_position(double speaker, double x, double y, double active)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->setSpeakerPosition((FMOD_SPEAKER)(int)speaker, (float)x, (float)y, active != 0.0);
	return 0;
}

// ============================================================
// System - Reverb
// ============================================================

FmodReverbProperties fmod_system_get_reverb_properties(double instance)
{
	FmodReverbProperties result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD_REVERB_PROPERTIES props{};
	g_fmod_last_result = system->getReverbProperties((int)instance, &props);
	if (g_fmod_last_result != FMOD_OK)
		return result;

	result.decay_time = (double)props.DecayTime;
	result.early_delay = (double)props.EarlyDelay;
	result.late_delay = (double)props.LateDelay;
	result.hf_reference = (double)props.HFReference;
	result.hf_decay_ratio = (double)props.HFDecayRatio;
	result.diffusion = (double)props.Diffusion;
	result.density = (double)props.Density;
	result.low_shelf_frequency = (double)props.LowShelfFrequency;
	result.low_shelf_gain = (double)props.LowShelfGain;
	result.high_cut = (double)props.HighCut;
	result.early_late_mix = (double)props.EarlyLateMix;
	result.wet_level = (double)props.WetLevel;
	return result;
}

double fmod_system_set_reverb_properties(double instance, const FmodReverbProperties& props)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD_REVERB_PROPERTIES native_props = {};
	native_props.DecayTime = (float)props.decay_time;
	native_props.EarlyDelay = (float)props.early_delay;
	native_props.LateDelay = (float)props.late_delay;
	native_props.HFReference = (float)props.hf_reference;
	native_props.HFDecayRatio = (float)props.hf_decay_ratio;
	native_props.Diffusion = (float)props.diffusion;
	native_props.Density = (float)props.density;
	native_props.LowShelfFrequency = (float)props.low_shelf_frequency;
	native_props.LowShelfGain = (float)props.low_shelf_gain;
	native_props.HighCut = (float)props.high_cut;
	native_props.EarlyLateMix = (float)props.early_late_mix;
	native_props.WetLevel = (float)props.wet_level;

	g_fmod_last_result = system->setReverbProperties((int)instance, &native_props);
	return 0;
}

FmodDSPMixMatrix fmod_system_get_default_mix_matrix(gm_enums::FmodSpeakerMode source_speaker_mode, gm_enums::FmodSpeakerMode target_speaker_mode)
{
	FmodDSPMixMatrix result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	int in_channels = 0, out_channels = 0;
	g_fmod_last_result = system->getSpeakerModeChannels((FMOD_SPEAKERMODE)(int)source_speaker_mode, &in_channels);
	if (g_fmod_last_result != FMOD_OK)
		return result;

	g_fmod_last_result = system->getSpeakerModeChannels((FMOD_SPEAKERMODE)(int)target_speaker_mode, &out_channels);
	if (g_fmod_last_result != FMOD_OK)
		return result;

	// FmodDSPMixMatrix only carries a single scalar "matrix" field over the wire,
	// so a full in x out matrix can't be represented here - report the dimensions
	// (useful on their own) and the top-left cell as a representative sample.
	std::vector<float> matrix((size_t)in_channels * (size_t)out_channels, 0.0f);
	g_fmod_last_result = system->getDefaultMixMatrix((FMOD_SPEAKERMODE)(int)source_speaker_mode, (FMOD_SPEAKERMODE)(int)target_speaker_mode, matrix.data(), out_channels);

	result.in_channels = (double)in_channels;
	result.out_channels = (double)out_channels;
	result.matrix = matrix.empty() ? 0.0 : (double)matrix[0];
	return result;
}

// ============================================================
// System - Usage / Diagnostics
// ============================================================

FmodCPUUsage fmod_system_get_cpu_usage()
{
	FmodCPUUsage result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD_CPU_USAGE usage{};
	g_fmod_last_result = system->getCPUUsage(&usage);
	if (g_fmod_last_result != FMOD_OK)
		return result;

	result.dsp = (double)usage.dsp;
	result.stream = (double)usage.stream;
	result.geometry = (double)usage.geometry;
	result.update = (double)usage.update;
	result.convolution1 = (double)usage.convolution1;
	result.convolution2 = (double)usage.convolution2;
	return result;
}

FmodFileUsage fmod_system_get_file_usage()
{
	FmodFileUsage result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	long long sample_bytes_read = 0, stream_bytes_read = 0, other_bytes_read = 0;
	g_fmod_last_result = system->getFileUsage(&sample_bytes_read, &stream_bytes_read, &other_bytes_read);

	result.sample_bytes_read = (double)sample_bytes_read;
	result.stream_bytes_read = (double)stream_bytes_read;
	result.other_bytes_read = (double)other_bytes_read;
	return result;
}

FmodStreamBufferSize fmod_system_get_stream_buffer_size()
{
	FmodStreamBufferSize result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	unsigned int file_buffer_size = 0;
	FMOD_TIMEUNIT file_buffer_size_type = FMOD_TIMEUNIT(0);
	g_fmod_last_result = system->getStreamBufferSize(&file_buffer_size, &file_buffer_size_type);

	result.file_buffer_size = (double)file_buffer_size;
	result.file_buffer_size_type = (double)file_buffer_size_type;
	return result;
}

// ============================================================
// System - 3D
// ============================================================

double fmod_system_get_3d_num_listeners()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	int num_listeners = 0;
	g_fmod_last_result = system->get3DNumListeners(&num_listeners);
	return (double)num_listeners;
}

double fmod_system_set_3d_num_listeners(double num)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->set3DNumListeners((int)num);
	return 0;
}

double fmod_system_set_3d_rolloff_callback()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	// The spec has no way to pass a custom rolloff function pointer through to GML,
	// so this only supports clearing any previously-set custom rolloff callback.
	g_fmod_last_result = system->set3DRolloffCallback(nullptr);
	return 0;
}

// ============================================================
// System - Mixer / DSP Lock
// ============================================================

double fmod_system_mixer_suspend()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->mixerSuspend();
	return 0;
}

double fmod_system_mixer_resume()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->mixerResume();
	return 0;
}

double fmod_system_lock_dsp()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->lockDSP();
	return 0;
}

double fmod_system_unlock_dsp()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->unlockDSP();
	return 0;
}

// ============================================================
// System - User Data
// ============================================================

double fmod_system_get_user_data()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	return getResourceUserData(system);
}

double fmod_system_set_user_data(double user_data)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	setResourceUserData(system, user_data);
	return 0;
}

// ============================================================
// System - Ports
// ============================================================

double fmod_system_attach_channel_group_to_port(double port_type, double port_index, uint64_t channel_group_ref, double pass_thru)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return 0;

	g_fmod_last_result = system->attachChannelGroupToPort((FMOD_PORT_TYPE)(int)port_type, (FMOD_PORT_INDEX)(unsigned long long)port_index, channel_group, pass_thru != 0.0);
	return 0;
}

double fmod_system_detach_channel_group_from_port(uint64_t channel_group_ref)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return 0;

	g_fmod_last_result = system->detachChannelGroupFromPort(channel_group);
	return 0;
}

// ============================================================
// System - Sound Groups & Geometry
// ============================================================

uint64_t fmod_system_create_sound_group(std::string_view name)
{
	uint64_t result = 0;

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	std::string name_str(name);
	FMOD::SoundGroup* sound_group = nullptr;
	g_fmod_last_result = system->createSoundGroup(name_str.c_str(), &sound_group);

	if (g_fmod_last_result == FMOD_OK && sound_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);
		result = packIndexIntoRef(group_id, GM_FMOD_TYPE_SOUND_GROUP);
	}
	return result;
}

uint64_t fmod_system_create_geometry(double max_polygons, double max_vertices)
{
	uint64_t result = 0;

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::Geometry* geometry = nullptr;
	g_fmod_last_result = system->createGeometry((int)max_polygons, (int)max_vertices, &geometry);

	if (g_fmod_last_result == FMOD_OK && geometry != nullptr)
	{
		uint32_t geometry_id = registerOrFindResource(geometry, index_geometries, map_geometries);
		result = packIndexIntoRef(geometry_id, GM_FMOD_TYPE_GEOMETRY);
	}
	return result;
}

std::optional<uint64_t> fmod_system_load_geometry(gm::wire::GMBuffer data, double data_size)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return std::nullopt;
	}

	const void* buffer = data.data();
	if (buffer == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return std::nullopt;
	}

	uint64_t capacity = data.length();
	uint64_t requested = (data_size > 0.0) ? (uint64_t)data_size : capacity;
	if (requested > capacity)
		requested = capacity;

	FMOD::Geometry* geometry = nullptr;
	g_fmod_last_result = system->loadGeometry(buffer, (int)requested, &geometry);

	if (g_fmod_last_result != FMOD_OK || geometry == nullptr)
		return std::nullopt;

	uint32_t geometry_id = registerOrFindResource(geometry, index_geometries, map_geometries);
	return packIndexIntoRef(geometry_id, GM_FMOD_TYPE_GEOMETRY);
}

FmodOcclusion fmod_system_get_geometry_occlusion(const FmodVec3& listener, const FmodVec3& source)
{
	FmodOcclusion result{};

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD_VECTOR native_listener = { (float)listener.x, (float)listener.y, (float)listener.z };
	FMOD_VECTOR native_source = { (float)source.x, (float)source.y, (float)source.z };
	float direct = 0.0f, reverb = 0.0f;
	g_fmod_last_result = system->getGeometryOcclusion(&native_listener, &native_source, &direct, &reverb);

	result.direct = (double)direct;
	result.reverb = (double)reverb;
	return result;
}

double fmod_system_get_geometry_settings()
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0.0;
	}

	float max_world_size = 0.0f;
	g_fmod_last_result = system->getGeometrySettings(&max_world_size);
	return (double)max_world_size;
}

double fmod_system_set_geometry_settings(double max_world_size)
{
	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}

	g_fmod_last_result = system->setGeometrySettings((float)max_world_size);
	return 0;
}

uint64_t fmod_system_create_reverb_3d()
{
	uint64_t result = 0;

	FMOD::System* system = getCurrentSystem();
	if (system == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::Reverb3D* reverb = nullptr;
	g_fmod_last_result = system->createReverb3D(&reverb);

	if (g_fmod_last_result == FMOD_OK && reverb != nullptr)
	{
		uint32_t reverb_id = registerOrFindResource(reverb, index_reverbs, map_reverbs);
		result = packIndexIntoRef(reverb_id, GM_FMOD_TYPE_REVERB_3D);
	}
	return result;
}
