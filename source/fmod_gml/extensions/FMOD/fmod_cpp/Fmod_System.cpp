
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.02/api/core-api-system.html

// Lifetime management

uint64_t system_selected_ref = 0;

std::map<uint32_t, FMOD::System*> map_systems = {};
uint32_t index_systems = 0;

func double fmod_system_create()
{
	FMOD::System* fmod_system = nullptr;
	g_fmod_last_result = FMOD::System_Create(&fmod_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t system_id = registerOrFindResource(fmod_system, index_systems, map_systems);

	system_selected_ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	return (double)system_selected_ref;
}

func double fmod_system_select(double system_ref)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_ref, fmod_system);

	system_selected_ref = (uint64_t)system_ref;
	return 0;
}

func double fmod_system_count()
{
	return (double)map_systems.size();
}

func double fmod_system_init(double max_channels, double flags)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	void* extradriverdata = 0;
	g_fmod_last_result = fmod_system->init((int)max_channels, (FMOD_INITFLAGS)flags, extradriverdata);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	// Adding the master channel group
	FMOD::ChannelGroup* channel_group;
	g_fmod_last_result = fmod_system->getMasterChannelGroup(&channel_group);
	registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);

	// Adding the master sound group
	FMOD::SoundGroup* sound_group;
	g_fmod_last_result = fmod_system->getMasterSoundGroup(&sound_group);
	registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);

	return 0;
}

func double fmod_system_release(double system_ref)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_ref, fmod_system);

	// Unregister master channel & sound groups
	unregisterMasterGroups(fmod_system);

	unregisterResource(fmod_system, map_systems);
	g_fmod_last_result = fmod_system->release();

	return 0;
}

func double fmod_system_close(double system_ref)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_ref, fmod_system);

	unregisterMasterGroups(fmod_system);

	fmod_system->close();

	return 0;
}

func double fmod_system_update_multiplatform()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->update();
	return 0;
}

func double fmod_system_mixer_suspend()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->mixerSuspend();

	return 0;
}

func double fmod_system_mixer_resume()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->mixerResume();

	return 0;
}

// Device selection

func double fmod_system_set_output(double output)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setOutput((FMOD_OUTPUTTYPE)output);
	return 0;
}

func double fmod_system_get_output()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD_OUTPUTTYPE output;
	g_fmod_last_result = fmod_system->getOutput(&output);

	return (double)output;
}

func double fmod_system_get_num_drivers()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int num;
	g_fmod_last_result = fmod_system->getNumDrivers(&num);
	return (double)num;
}

func double fmod_system_get_driver_info_multiplatform(double driver_index, char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	char name[128];
	FMOD_GUID guid;
	int system_rate;
	FMOD_SPEAKERMODE speaker_mode;
	int speaker_mode_channels;

	g_fmod_last_result = fmod_system->getDriverInfo((int)driver_index, name, 128, &guid, &system_rate, &speaker_mode, &speaker_mode_channels);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("index", (int)driver_index);
	map_return.addKeyValue("name", (const char*)name);
	map_return.addKeyValue("guid", GUIDtoString(guid));
	map_return.addKeyValue("system_rate", system_rate);
	map_return.addKeyValue("speaker_mode", (int)speaker_mode);
	map_return.addKeyValue("speaker_mode_channels", speaker_mode_channels);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_set_driver(double driver)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setDriver((int)driver);
	return 0;
}

func double fmod_system_get_driver()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int driver;
	g_fmod_last_result = fmod_system->getDriver(&driver);

	return (double)driver;
}

// Setup

func double fmod_system_set_software_channels(double software_channels)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setSoftwareChannels((int)software_channels);
	return 0;
}

func double fmod_system_get_software_channels()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int software_channels;
	g_fmod_last_result = fmod_system->getSoftwareChannels(&software_channels);
	return software_channels;
}

func double fmod_system_set_software_format(double sample_rate, double speaker_mode, double num_raw_speakers)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setSoftwareFormat((int)sample_rate, (FMOD_SPEAKERMODE)speaker_mode, (int)num_raw_speakers);
	return 0;
}

func double fmod_system_get_software_format_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int sample_rate;
	FMOD_SPEAKERMODE speaker_mode;
	int num_raw_speakers;

	g_fmod_last_result = fmod_system->getSoftwareFormat(&sample_rate, &speaker_mode, &num_raw_speakers);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("sample_rate", sample_rate);
	map_return.addKeyValue("speaker_mode", (int)speaker_mode);
	map_return.addKeyValue("num_raw_speakers", num_raw_speakers);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_set_dsp_buffer_size(double buff_size, double num_buffers)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setDSPBufferSize((uint32_t)buff_size, (int32_t)num_buffers);

	return 0;
}

func double fmod_system_get_dsp_buffer_size_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	unsigned int buff_size;
	int num_buffers;
	g_fmod_last_result = fmod_system->getDSPBufferSize(&buff_size, &num_buffers);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("buff_size", (int)buff_size);
	map_return.addKeyValue("num_buffers", num_buffers);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_set_stream_buffer_size(double file_buffer_size, double file_buffer_size_type)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setStreamBufferSize((uint32_t)file_buffer_size, (FMOD_TIMEUNIT)file_buffer_size_type);
	return 0;
}

func double fmod_system_get_stream_buffer_size_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	unsigned int file_buffer_size;
	FMOD_TIMEUNIT file_buffer_size_type;

	g_fmod_last_result = fmod_system->getStreamBufferSize(&file_buffer_size, &file_buffer_size_type);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("file_buffer_size", (int)file_buffer_size);
	map_return.addKeyValue("file_buffer_size_type", (int)file_buffer_size_type);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_set_advanced_settings_multiplatform(char* buff_args)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto settings = YYGetStruct(args[0]);

	FMOD_ADVANCEDSETTINGS exinfo = {0};
	exinfo.cbSize = sizeof(FMOD_ADVANCEDSETTINGS);

	if (auto search = settings.find("max_mpeg_codecs"); search != settings.end())
	{
		exinfo.maxMPEGCodecs = YYGetInt32(search->second);
	};
	if (auto search = settings.find("max_adpcm_codecs"); search != settings.end())
	{
		exinfo.maxADPCMCodecs = YYGetInt32(search->second);
	};
	if (auto search = settings.find("max_xma_codecs"); search != settings.end())
	{
		exinfo.maxXMACodecs = YYGetInt32(search->second);
	};
	if (auto search = settings.find("max_vorbis_codecs"); search != settings.end())
	{
		exinfo.maxVorbisCodecs = YYGetInt32(search->second);
	};
	if (auto search = settings.find("max_at9_codecs"); search != settings.end())
	{
		exinfo.maxAT9Codecs = YYGetInt32(search->second);
	};
	if (auto search = settings.find("max_fadpcm_codecs"); search != settings.end())
	{
		exinfo.maxFADPCMCodecs = YYGetInt32(search->second);
	};
	if (auto search = settings.find("max_pcm_codecs"); search != settings.end())
	{
		exinfo.maxPCMCodecs = YYGetInt32(search->second);
	};
	if (auto search = settings.find("asio_num_channels"); search != settings.end())
	{
		exinfo.ASIONumChannels = YYGetInt32(search->second);
	};
	if (auto search = settings.find("vol0_virtual_vol"); search != settings.end())
	{
		exinfo.vol0virtualvol = YYGetFloat(search->second);
	};
	if (auto search = settings.find("default_decode_buffer_size"); search != settings.end())
	{
		exinfo.defaultDecodeBufferSize = YYGetUint32(search->second);
	};
	if (auto search = settings.find("profile_port"); search != settings.end())
	{
		exinfo.profilePort = YYGetUint16(search->second);
	};
	if (auto search = settings.find("geometry_max_fade_time"); search != settings.end())
	{
		exinfo.geometryMaxFadeTime = YYGetUint32(search->second);
	};
	if (auto search = settings.find("distance_filter_center_freq"); search != settings.end())
	{
		exinfo.distanceFilterCenterFreq = YYGetFloat(search->second);
	};
	if (auto search = settings.find("reverb_3d_instance"); search != settings.end())
	{
		exinfo.reverb3Dinstance = YYGetInt32(search->second);
	};
	if (auto search = settings.find("dsp_buffer_pool_size"); search != settings.end())
	{
		exinfo.DSPBufferPoolSize = YYGetInt32(search->second);
	};
	if (auto search = settings.find("resampler_method"); search != settings.end())
	{
		exinfo.resamplerMethod = (FMOD_DSP_RESAMPLER)YYGetInt32(search->second);
	};
	if (auto search = settings.find("random_seed"); search != settings.end())
	{
		exinfo.randomSeed = YYGetUint32(search->second);
	};
	if (auto search = settings.find("max_convolution_threads"); search != settings.end())
	{
		exinfo.maxConvolutionThreads = YYGetInt32(search->second);
	};
	if (auto search = settings.find("max_opus_codecs"); search != settings.end())
	{
		exinfo.maxOpusCodecs = YYGetInt32(search->second);
	};

	g_fmod_last_result = fmod_system->setAdvancedSettings(&exinfo);

	return 0;
}

func double fmod_system_get_advanced_settings_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD_ADVANCEDSETTINGS exinfo;
	g_fmod_last_result = fmod_system->getAdvancedSettings(&exinfo);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("max_mpeg_codecs", exinfo.maxMPEGCodecs);
	map_return.addKeyValue("max_adpcm_codecs", exinfo.maxADPCMCodecs);
	map_return.addKeyValue("max_xma_codecs", exinfo.maxXMACodecs);
	map_return.addKeyValue("max_vorbis_codecs", exinfo.maxVorbisCodecs);
	map_return.addKeyValue("max_at9_codecs", exinfo.maxAT9Codecs);
	map_return.addKeyValue("max_fadpcm_codecs", exinfo.maxFADPCMCodecs);
	map_return.addKeyValue("max_pcm_codecs", exinfo.maxPCMCodecs);
	map_return.addKeyValue("asio_num_channels", exinfo.ASIONumChannels);
	map_return.addKeyValue("vol0_virtual_vol", exinfo.vol0virtualvol);
	map_return.addKeyValue("default_decode_buffer_size", exinfo.defaultDecodeBufferSize);
	map_return.addKeyValue("profile_port", exinfo.profilePort);
	map_return.addKeyValue("geometry_max_fade_time", exinfo.geometryMaxFadeTime);
	map_return.addKeyValue("distance_filter_center_freq", exinfo.distanceFilterCenterFreq);
	map_return.addKeyValue("reverb_3d_instance", exinfo.reverb3Dinstance);
	map_return.addKeyValue("dsp_buffer_pool_size", exinfo.DSPBufferPoolSize);
	map_return.addKeyValue("resampler_method", (int)exinfo.resamplerMethod);
	map_return.addKeyValue("random_seed", exinfo.randomSeed);
	map_return.addKeyValue("max_convolution_threads", exinfo.maxConvolutionThreads);
	map_return.addKeyValue("max_opus_codecs", exinfo.maxOpusCodecs);
	// char** ASIOChannelList;
	// FMOD_SPEAKER* ASIOSpeakerList;

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_set_speaker_position(double speaker, double x, double y, double active)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setSpeakerPosition((FMOD_SPEAKER)speaker, (float)x, (float)y, active >= 0.5);
	return 0;
}

func double fmod_system_get_speaker_position_multiplatform(double speaker, char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	float x;
	float y;
	bool active;
	g_fmod_last_result = fmod_system->getSpeakerPosition((FMOD_SPEAKER)speaker, &x, &y, &active);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("x", x);
	map_return.addKeyValue("y", y);
	map_return.addKeyValue("active", active);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->set3DSettings((float)doppler_scale, (float)distance_factor, (float)rolloff_scale);
	return 0;
}

func double fmod_system_get_3d_settings_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	float doppler_scale;
	float distance_factor;
	float rolloff_scale;

	g_fmod_last_result = fmod_system->get3DSettings(&doppler_scale, &distance_factor, &rolloff_scale);
	
	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("doppler_scale", (double)doppler_scale);
	map_return.addKeyValue("distance_factor", (double)distance_factor);
	map_return.addKeyValue("rolloff_scale", (double)rolloff_scale);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_set_3d_num_listeners(double num)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->set3DNumListeners((int)num);
	return 0;
}

func double fmod_system_get_3d_num_listeners()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int num;
	g_fmod_last_result = fmod_system->get3DNumListeners(&num);
	return (double)num;
}

static float CALLBACK_fmod_system_3d_rolloff(FMOD_CHANNELCONTROL* control, float distance)
{
	// Argument 'control' is always of type FMOD::Channel
	// https://www.fmod.com/docs/2.00/api/core-api-system.html#fmod_3d_rolloff_callback

	FMOD::Channel* channel = (FMOD::Channel*)control;

	StructStream async_map = {};

	async_map.addKeyValue("type", "fmod_system_set_3d_rolloff_callback");
	async_map.addKeyValue("distance", distance);

	async_map.addKeyValue( "channel_ref", packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(channel), GM_FMOD_TYPE_CHANNEL) );

	async_create_event(async_map);

	return distance;
}

func double fmod_system_set_3d_rolloff_callback()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->set3DRolloffCallback(CALLBACK_fmod_system_3d_rolloff);
	return 0;
}

// File system setup
//
// filesystem it's necesary?... ignore for this version
// FMOD_RESULT CALLBACK_fmod_file_open(const char* name, unsigned int* filesize, void** handle, void* userdata)
//{
//     return FMOD_OK;
// }
// FMOD_RESULT CALLBACK_fmod_file_close(void* handle, void* userdata)
//{
//     return FMOD_OK;
// }
//
// FMOD_RESULT CALLBACK_fmod_file_read(void* handle, void* buffer, unsigned int sizebytes, unsigned int* bytesread, void* userdata)
//{
//     return FMOD_OK;
// }
//
// FMOD_RESULT CALLBACK_fmod_file_seek(void* handle, unsigned int pos, void* userdata)
//{
//     return FMOD_OK;
// }
//
// FMOD_RESULT CALLBACK_fmod_file_asyncread(FMOD_ASYNCREADINFO* info, void* userdata)
//{
//     return FMOD_OK;
// }
//
// FMOD_RESULT CALLBACK_fmod_file_asynccancel(FMOD_ASYNCREADINFO* info, void* userdata)
//{
//     return FMOD_OK;
// }
//
// func double fmod_system_set_file_system(double blockalign)
//{
//     g_fmod_last_result = map_system.at(system_selected_ref)->setFileSystem(CALLBACK_fmod_file_open, CALLBACK_fmod_file_close, CALLBACK_fmod_file_read,
//     CALLBACK_fmod_file_seek, CALLBACK_fmod_file_asyncread, CALLBACK_fmod_file_asynccancel,(int)blockalign); return 0;
// }
//
// FMOD_RESULT CALLBACK_fmod_file_open_attach(const char* name, unsigned int* filesize, void** handle, void* userdata)
//{
//
//     return FMOD_OK;
// }
// FMOD_RESULT CALLBACK_fmod_file_close_attach(void* handle, void* userdata)
//{
//     return FMOD_OK;
// }
//
// FMOD_RESULT CALLBACK_fmod_file_read_attach(void* handle, void* buffer, unsigned int sizebytes, unsigned int* bytesread, void* userdata)
//{
//     return FMOD_OK;
// }
//
// FMOD_RESULT CALLBACK_fmod_file_seek_attach(void* handle, unsigned int pos, void* userdata)
//{
//     return FMOD_OK;
// }
// func double fmod_system_attach_file_system()
//{
//     g_fmod_last_result = map_system.at(system_selected_ref)->attachFileSystem(CALLBACK_fmod_file_open_attach, CALLBACK_fmod_file_close_attach,
//     CALLBACK_fmod_file_read_attach, CALLBACK_fmod_file_seek_attach); return 0;
// }

// Plugin support
//
// Plugin support it's necesary?... ignore for this version
// func double fmod_system_set_plugin_path(char* path)
//{
//     g_fmod_last_result = map_system.at(system_selected_ref)->setPluginPath(path);
//     return 0;
// }
//
// func double fmod_system_load_plugin(char* filename, double priority_)
//{
//     unsigned int priority = (unsigned int)priority_;
//     unsigned int handle;
//
//     g_fmod_last_result = map_system.at(system_selected_ref)->loadPlugin(filename, &handle, priority);
//
//     return (double)handle;
// }
//
// func double fmod_system_unload_plugin(double handle)
//{
//     g_fmod_last_result = map_system.at(system_selected_ref)->unloadPlugin((unsigned int)handle);
//     return 0;
// }
//
// func double fmod_system_get_num_nested_plugins(double handle)
//{
//     int num;
//     g_fmod_last_result = map_system.at(system_selected_ref)->getNumNestedPlugins((unsigned int)handle,&num);
//     return (double)num;
// }
//
// func double fmod_system_get_nested_plugin(double type_, double index_)
//{
//     FMOD_PLUGINTYPE type = (FMOD_PLUGINTYPE)type_;
//     int index = (int)index_;
//
//     unsigned int handle;
//
//     int num;
//     g_fmod_last_result = map_system.at(system_selected_ref)->getNestedPlugin(type, index, &handle);
//
//     return (double)handle;
// }
//
// func double fmod_system_get_num_plugins(double type_)
//{
//     FMOD_PLUGINTYPE type = (FMOD_PLUGINTYPE)type_;
//
//     int num;
//     g_fmod_last_result = map_system.at(system_selected_ref)->getNumPlugins(type, &num);
//     return (double)num;
// }
//
// func double fmod_system_get_plugin_handle(double type_, double index_)
//{
//     FMOD_PLUGINTYPE type = (FMOD_PLUGINTYPE)type_;
//     int index = index_;
//
//     unsigned int handle;
//
//     int num;
//     g_fmod_last_result = map_system.at(system_selected_ref)->getPluginHandle(type, index,&handle);
//
//     return (double) handle;
// }
//
// func double fmod_system_get_plugin_info_multiplatform(double handle_, double type_, char* buff_return_)
//{
//     unsigned int handle = (unsigned int) handle_;
//
//     FMOD_PLUGINTYPE type = (FMOD_PLUGINTYPE)type_;
//
//     char name[100];
//
//     unsigned int version;
//
//     int num;
//     g_fmod_last_result = map_system.at(system_selected_ref)->getPluginInfo(handle, &type, name, 100, &version);
//
//     StructStream map_return = { };
//     map_return.addKeyValue( "type", (int)type );
//     map_return.addKeyValue( "version", (int)version );
//     map_return.addKeyValue( "name", name );
//
//     size_t buff_index = 0;
//     uint8_t* buff_return = (uint8_t*)buff_return_;
//     map_return.writeTo(buff_return);
//
//     return 0;
// }
//
// func double fmod_system_set_output_by_plugin(double type_)
//{
//     FMOD_OUTPUTTYPE type = (FMOD_OUTPUTTYPE)type_;
//
//     g_fmod_last_result = map_system.at(system_selected_ref)->setOutput(type);
//
//     return 0;
// }
//
// func double fmod_system_get_output_by_plugin()
//{
//     unsigned int handle;
//
//     g_fmod_last_result = map_system.at(system_selected_ref)->getOutputByPlugin(&handle);
//
//     return (double)handle;
// }
//
// func double fmod_system_create_dsp_by_plugin()
//{
//     return 0;
// }
//
// func double fmod_system_get_dsp_info_by_plugin()
//{
//     return 0;
// }
//
// func double fmod_system_register_codec()
//{
//     return 0;
// }
//
// func double fmod_system_register_dsp()
//{
//     return 0;
// }
//
// func double fmod_system_register_output()
//{
//     return 0;
// }

// Network configuration

func double fmod_system_set_network_proxy(char* proxy)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setNetworkProxy(proxy);

	return 0;
}

func char* fmod_system_get_network_proxy()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->getNetworkProxy(gStringBuffer, sizeof(gStringBuffer));

	return gStringBuffer;
}

func double fmod_system_set_network_timeout(double timeout)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setNetworkTimeout((int)timeout);

	return 0;
}

func double fmod_system_get_network_timeout()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int timeout;

	g_fmod_last_result = fmod_system->getNetworkTimeout(&timeout);

	return timeout;
}

// Information

func double fmod_system_get_version()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	unsigned int version;

	g_fmod_last_result = fmod_system->getVersion(&version);

	return version;
}

// func double fmod_system_get_output_handle()
//{
//     //g_fmod_last_result = map_system.at(system_selected_ref)->getOutputHandle(double index_);
//
//     //return 0;
//     return 0;
// }

func double fmod_system_get_channels_playing_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int channels;
	int real_channels;

	g_fmod_last_result = fmod_system->getChannelsPlaying(&channels, &real_channels);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("channels", channels);
	map_return.addKeyValue("real_channels", real_channels);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_get_cpu_usage_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD_CPU_USAGE cpu_usage_struct;

	g_fmod_last_result = fmod_system->getCPUUsage(&cpu_usage_struct);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("dsp", (double)cpu_usage_struct.dsp);
	map_return.addKeyValue("stream", (double)cpu_usage_struct.stream);
	map_return.addKeyValue("geometry", (double)cpu_usage_struct.geometry);
	map_return.addKeyValue("update", (double)cpu_usage_struct.update);
	map_return.addKeyValue("convolution1", (double)cpu_usage_struct.convolution1);
	map_return.addKeyValue("convolution2", (double)cpu_usage_struct.convolution2);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_get_file_usage_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	long long sample_bytes_read;
	long long stream_bytes_read;
	long long other_bytes_read;

	g_fmod_last_result = fmod_system->getFileUsage(&sample_bytes_read, &stream_bytes_read, &other_bytes_read);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("sample_bytes_read", (uint64_t)sample_bytes_read);
	map_return.addKeyValue("stream_bytes_read", (uint64_t)stream_bytes_read);
	map_return.addKeyValue("other_bytes_read", (uint64_t)other_bytes_read);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_get_default_mix_matrix_multiplatform(double source_speaker_mode, double target_speaker_mode, double matrix_hop, char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int num_source_channels = static_cast<int>(matrix_hop);
	if (num_source_channels == 0) {
		fmod_system->getSpeakerModeChannels((FMOD_SPEAKERMODE)source_speaker_mode, &num_source_channels);
	}
	int num_target_channels = 0;
	fmod_system->getSpeakerModeChannels((FMOD_SPEAKERMODE)target_speaker_mode, &num_target_channels);

	int size = num_source_channels * num_target_channels;
	std::vector<float> matrix(size);

	g_fmod_last_result = fmod_system->getDefaultMixMatrix((FMOD_SPEAKERMODE)source_speaker_mode, (FMOD_SPEAKERMODE)target_speaker_mode, matrix.data(), (int)matrix_hop);

	ArrayStream return_array;
	for (const auto& f : matrix) {
		return_array << f;
	}
	return_array.writeTo(buff_return);

	return 0;
}

func double fmod_system_get_speaker_mode_channels(double mode)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int channels;
	g_fmod_last_result = fmod_system->getSpeakerModeChannels((FMOD_SPEAKERMODE)mode, &channels);

	return (double)channels;
}

// Creation and Retrieval

func double fmod_system_create_sound_multiplatform(char* name_or_data, double mode, char* buff_extra)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	auto args = buffer_unpack((uint8_t*)buff_extra);
	auto map_extra = YYGetStruct(args[0]);

	FMOD_CREATESOUNDEXINFO exinfo = FmodCreateSoundExInfoFromMap(map_extra);

	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = fmod_system->createSound(name_or_data, (FMOD_MODE)mode, &exinfo, &sound);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
	return (double)packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
}

func double fmod_system_create_stream_multiplatform(char* name_or_data, double mode, char* buff_extra)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	auto args = buffer_unpack((uint8_t*)buff_extra);
	auto map_extra = YYGetStruct(args[0]);

	FMOD_CREATESOUNDEXINFO exinfo = FmodCreateSoundExInfoFromMap(map_extra);

	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = fmod_system->createStream(name_or_data, (FMOD_MODE)mode, &exinfo, &sound);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
	return (double)packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
}

func double fmod_system_create_dsp()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD_DSP_DESCRIPTION description{};
	FMOD::DSP* dsp;

	g_fmod_last_result = fmod_system->createDSP(&description, &dsp);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);
	return (double)packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
}

func double fmod_system_create_dsp_by_type(double type)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::DSP* dsp;
	g_fmod_last_result = fmod_system->createDSPByType((FMOD_DSP_TYPE)type, &dsp);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);
	return (double)packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
}

func double fmod_system_create_channel_group(char* name)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = fmod_system->createChannelGroup(name, &channel_group);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t channel_group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
	return (double)packIndexIntoRef(channel_group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
}

func double fmod_system_create_sound_group(char* name)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::SoundGroup* sound_group;
	g_fmod_last_result = fmod_system->createSoundGroup(name, &sound_group);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t sound_group_id = registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);
	return (double)packIndexIntoRef(sound_group_id, GM_FMOD_TYPE_SOUND_GROUP);
}

func double fmod_system_create_reverb_3d()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::Reverb3D* reverb_3d;
	g_fmod_last_result = fmod_system->createReverb3D(&reverb_3d);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t reverb_3d_id = registerOrFindResource(reverb_3d, index_reverbs, map_reverbs);
	return (double)packIndexIntoRef(reverb_3d_id, GM_FMOD_TYPE_REVERB_3D);
}

func double fmod_system_play_sound_multiplatform(double sound_ref, double channel_group_ref, double pause)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	FMOD::Channel* channel;
	g_fmod_last_result = fmod_system->playSound(sound, channel_group, pause >= 0.5, &channel);

	if (g_fmod_last_result != FMOD_OK) {
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(channel), GM_FMOD_TYPE_CHANNEL);
}

func double fmod_system_play_dsp_multiplatform(double dsp_ref, double channel_group_ref, double pause)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::DSP* dsp;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	FMOD::Channel* channel;
	g_fmod_last_result = fmod_system->playDSP(dsp, channel_group, pause >= 0.5, &channel);

	if (g_fmod_last_result != FMOD_OK) {
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(channel), GM_FMOD_TYPE_CHANNEL);
}

func double fmod_system_get_channel(double index)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::Channel* channel;
	g_fmod_last_result = fmod_system->getChannel((int)index, &channel);

	if (g_fmod_last_result != FMOD_OK) {
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(channel), GM_FMOD_TYPE_CHANNEL);
}

// func double fmod_system_get_dsp_info_by_type_multiplatform(double dsp_type_, char* buff_return_) // FIXME

func double fmod_system_get_master_channel_group()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::ChannelGroup* channel_group;
	g_fmod_last_result = fmod_system->getMasterChannelGroup(&channel_group);

	if (g_fmod_last_result != FMOD_OK) {
		return 0;
	}

	auto channel_group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);

	return (double)packIndexIntoRef(channel_group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
}

func double fmod_system_get_master_sound_group()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::SoundGroup* sound_group;
	g_fmod_last_result = fmod_system->getMasterSoundGroup(&sound_group);

	if (g_fmod_last_result != FMOD_OK) {
		return 0;
	}

	auto sound_group_id = registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);

	return (double)packIndexIntoRef(sound_group_id, GM_FMOD_TYPE_SOUND_GROUP);
}

// Runtime control

func double fmod_system_set_3d_listener_attributes_multiplatform(double listener_index, char* buff_args)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_pos = YYGetStruct(args[0]);
	auto map_vel = YYGetStruct(args[1]);
	auto map_forward = YYGetStruct(args[2]);
	auto map_up = YYGetStruct(args[3]);

	FMOD_VECTOR vec_pos = FmodVectorFromMap(map_pos);
	FMOD_VECTOR vec_vel = FmodVectorFromMap(map_vel);
	FMOD_VECTOR vec_forward = FmodVectorFromMap(map_forward);
	FMOD_VECTOR vec_up = FmodVectorFromMap(map_up);

	g_fmod_last_result = fmod_system->set3DListenerAttributes((int)listener_index, &vec_pos, &vec_vel, &vec_forward, &vec_up);

	return 0;
}

func double fmod_system_get_3d_listener_attributes_multiplatform(double listener_index, char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD_VECTOR vec_pos;
	FMOD_VECTOR vec_vel;
	FMOD_VECTOR vec_forward;
	FMOD_VECTOR vec_up;

	g_fmod_last_result = fmod_system->get3DListenerAttributes((int)listener_index, &vec_pos, &vec_vel, &vec_forward, &vec_up);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_pos = FmodVectorToGMStruct(vec_pos);
	StructStream map_vel = FmodVectorToGMStruct(vec_vel);
	StructStream map_forward = FmodVectorToGMStruct(vec_forward);
	StructStream map_up = FmodVectorToGMStruct(vec_up);

	StructStream map_return = {};
	map_return.addKeyValue("pos", map_pos);
	map_return.addKeyValue("vel", map_vel);
	map_return.addKeyValue("forward", map_forward);
	map_return.addKeyValue("up", map_up);
	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_set_reverb_properties_multiplatform(double instance_index, char* buff_args)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto properties_map = YYGetStruct(args[0]);

	FMOD_REVERB_PROPERTIES prop{};

	if (auto search = properties_map.find("decay_time"); search != properties_map.end())
	{
		prop.DecayTime = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("early_delay"); search != properties_map.end())
	{
		prop.EarlyDelay = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("late_delay"); search != properties_map.end())
	{
		prop.LateDelay = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("hf_reference"); search != properties_map.end())
	{
		prop.HFReference = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("hf_decay_ratio"); search != properties_map.end())
	{
		prop.HFDecayRatio = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("diffusion"); search != properties_map.end())
	{
		prop.Diffusion = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("density"); search != properties_map.end())
	{
		prop.Density = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("low_shelf_frequency"); search != properties_map.end())
	{
		prop.LowShelfFrequency = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("low_shelf_gain"); search != properties_map.end())
	{
		prop.LowShelfGain = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("high_cut"); search != properties_map.end())
	{
		prop.HighCut = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("early_late_mix"); search != properties_map.end())
	{
		prop.EarlyLateMix = YYGetFloat(search->second);
	}
	if (auto search = properties_map.find("wet_level"); search != properties_map.end())
	{
		prop.WetLevel = YYGetFloat(search->second);
	}

	g_fmod_last_result = fmod_system->setReverbProperties((int)instance_index, &prop);

	return 0;
}

func double fmod_system_get_reverb_properties_multiplatform(double instance_index, char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD_REVERB_PROPERTIES prop{};
	g_fmod_last_result = fmod_system->getReverbProperties((int)instance_index, &prop);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("decay_time", prop.DecayTime);
	map_return.addKeyValue("early_delay", prop.EarlyDelay);
	map_return.addKeyValue("late_delay", prop.LateDelay);
	map_return.addKeyValue("hf_reference", prop.HFReference);
	map_return.addKeyValue("hf_decay_ratio", prop.HFDecayRatio);
	map_return.addKeyValue("diffusion", prop.Diffusion);
	map_return.addKeyValue("density", prop.Density);
	map_return.addKeyValue("low_shelf_frequency", prop.LowShelfFrequency);
	map_return.addKeyValue("low_shelf_gain", prop.LowShelfGain);
	map_return.addKeyValue("high_cut", prop.HighCut);
	map_return.addKeyValue("early_late_mix", prop.EarlyLateMix);
	map_return.addKeyValue("wet_level", prop.WetLevel);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_attach_channel_group_to_port_multiplatform(char* buff_args)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	FMOD_PORT_TYPE portType = (FMOD_PORT_TYPE)YYGetInt32(args[0]);
	FMOD_PORT_INDEX portIndex = YYGetUint64(args[1]);
	uint64_t channel_group_ref = YYGetUint64(args[2]);
	bool pass_thru = YYGetBool(args[3]);

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	g_fmod_last_result = fmod_system->attachChannelGroupToPort(portType, portIndex, channel_group, pass_thru);

	return 0;
}

func double fmod_system_detach_channel_group_from_port(double channel_group_ref)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	g_fmod_last_result = fmod_system->detachChannelGroupFromPort(channel_group);

	return 0;
}

// Recording

func double fmod_system_get_record_num_drivers_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	int num_drivers;
	int num_connected;
	g_fmod_last_result = fmod_system->getRecordNumDrivers(&num_drivers, &num_connected);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("num_drivers", num_drivers);
	map_return.addKeyValue("num_connected", num_connected);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_get_record_driver_info_multiplatform(double recording_device_index, char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	char name[100]{};
	FMOD_GUID guid{};
	int systemrate;
	FMOD_SPEAKERMODE speakermode;
	int speakermodechannels;
	FMOD_DRIVER_STATE state;

	g_fmod_last_result = fmod_system->getRecordDriverInfo((int)recording_device_index, name, 100, &guid, &systemrate, &speakermode, &speakermodechannels, &state);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("name", (const char*)name);
	map_return.addKeyValue("guid", GUIDtoString(guid));
	map_return.addKeyValue("system_rate", (int)systemrate);
	map_return.addKeyValue("speaker_mode", (int)speakermode);
	map_return.addKeyValue("speaker_mode_channels", (int)speakermodechannels);
	map_return.addKeyValue("state", (int)state);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_system_get_record_position(double device_index)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	uint32_t position;
	g_fmod_last_result = fmod_system->getRecordPosition((int)device_index, &position);

	return (double)position;
}

func double fmod_system_record_start(double device_index, double sound_ref, double loop)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = fmod_system->recordStart((int)device_index, sound, loop >= 0.5);

	return 0;
}

func double fmod_system_record_stop(double device_index)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->recordStop((int)device_index);

	return 0;
}

func double fmod_system_is_recording(double device_index)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	bool recording;
	g_fmod_last_result = fmod_system->isRecording((int)device_index, &recording);

	return recording ? 1.0 : 0.0;
}

// Geometry Management

func double fmod_system_create_geometry(double max_polygons, double max_vertices)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD::Geometry* geometry = nullptr;
	g_fmod_last_result = fmod_system->createGeometry((int)max_polygons, (int)max_vertices, &geometry);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t geometry_id = registerOrFindResource(geometry, index_geometries, map_geometries);
	return (double)packIndexIntoRef(geometry_id, GM_FMOD_TYPE_GEOMETRY);
}

func double fmod_system_set_geometry_settings(double max_world_size)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setGeometrySettings((float)max_world_size);
	return 0;
}

func double fmod_system_get_geometry_settings()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	float max_world_size;
	g_fmod_last_result = fmod_system->getGeometrySettings(&max_world_size);

	return (double)max_world_size;
}

func double fmod_system_load_geometry_multiplatform(char* buff_args, double length)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	uint32_t size = 0;
	void* buff = YYGetBuffer(args[0], size);

	if (size < length) {
		g_fmod_last_result = (FMOD_RESULT)FMOD_ERROR_BUFFER_OVERFLOW;
		LOG_WARNING("buffer size is smaller than provided length argument");
	}


	FMOD::Geometry* geometry = nullptr;
	g_fmod_last_result = fmod_system->loadGeometry(buff, (int)length, &geometry);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t geometry_id = registerOrFindResource(geometry, index_geometries, map_geometries);
	return (double)packIndexIntoRef(geometry_id, GM_FMOD_TYPE_GEOMETRY);
}

func double fmod_system_get_geometry_occlusion_multiplatform(char* buff_return)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	FMOD_VECTOR listener{}, source{};
	float direct = 0, reverb = 0;

	g_fmod_last_result = fmod_system->getGeometryOcclusion(&listener, &source, &direct, &reverb);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_listener = FmodVectorToGMStruct(listener);
	StructStream map_source = FmodVectorToGMStruct(source);

	StructStream map_return = {};
	map_return.addKeyValue("direct", direct);
	map_return.addKeyValue("reverb", reverb);
	map_return.addKeyValue("listener", map_listener);
	map_return.addKeyValue("source", map_source);

	map_return.writeTo(buff_return);

	return 0;
}

// General

func double fmod_system_lock_dsp()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->lockDSP();
	return 0;
}

func double fmod_system_unlock_dsp()
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->unlockDSP();
	return 0;
}

static FMOD_RESULT CALLBACK_fmod_system(FMOD_SYSTEM* system, FMOD_SYSTEM_CALLBACK_TYPE type, void* commanddata1, void* commanddata2, void* userdata)
{
	// All types unused?!
	StructStream async_map = {};

	async_map.addKeyValue("type", "fmod_system_set_callback");
	async_map.addKeyValue("kind", (int)type);

	switch (type)
	{
		case FMOD_SYSTEM_CALLBACK_DEVICELISTCHANGED:
			break;
		case FMOD_SYSTEM_CALLBACK_DEVICELOST:
			break;
		case FMOD_SYSTEM_CALLBACK_MEMORYALLOCATIONFAILED:
			break;
		case FMOD_SYSTEM_CALLBACK_THREADCREATED:
			break;
		case FMOD_SYSTEM_CALLBACK_BADDSPCONNECTION:
			break;
		case FMOD_SYSTEM_CALLBACK_PREMIX:
			break;
		case FMOD_SYSTEM_CALLBACK_POSTMIX:
			break;
		case FMOD_SYSTEM_CALLBACK_ERROR:
			break;
		case FMOD_SYSTEM_CALLBACK_MIDMIX:
			break;
		case FMOD_SYSTEM_CALLBACK_THREADDESTROYED:
			break;
		case FMOD_SYSTEM_CALLBACK_PREUPDATE:
			break;
		case FMOD_SYSTEM_CALLBACK_POSTUPDATE:
			break;
		case FMOD_SYSTEM_CALLBACK_RECORDLISTCHANGED:
			break;
		case FMOD_SYSTEM_CALLBACK_BUFFEREDNOMIX:
			break;
		case FMOD_SYSTEM_CALLBACK_DEVICEREINITIALIZE:
			break;
		case FMOD_SYSTEM_CALLBACK_OUTPUTUNDERRUN:
			break;
		case FMOD_SYSTEM_CALLBACK_RECORDPOSITIONCHANGED:
			break;
		case FMOD_SYSTEM_CALLBACK_ALL:
			break;
	}

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_system_set_callback(double type)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	g_fmod_last_result = fmod_system->setCallback(CALLBACK_fmod_system, (FMOD_SYSTEM_CALLBACK_TYPE)type);

	return 0;
}

func double fmod_system_set_user_data(double channel_control_ref, double data)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	setCustomUserData(fmod_system, data);
	return 0;
}

func double fmod_system_get_user_data(double channel_control_ref)
{
	FMOD::System* fmod_system = nullptr;
	validate_fmod_system(system_selected_ref, fmod_system);

	return getCustomUserData(fmod_system);
}
