
#include "Fmod_Tools.h"
#include <mutex>

char gStringBuffer[1024]{};

FMOD_RESULT g_fmod_last_result = FMOD_RESULT::FMOD_OK;

#define yy_cpp_callbacks

std::mutex callbacksMutex;
ArrayStream callbacks(2048);

uint64_t packIndexIntoRef(uint32_t index, uint8_t type)
{
	uint64_t packedValue = 0;
	packedValue |= static_cast<uint64_t>(GM_FMOD_EXT) << (8 + 32);
	packedValue |= static_cast<uint64_t>(type) << 32;
	packedValue |= index;

	return packedValue;
}

void unregisterMasterGroups(FMOD::System* fmod_system) {
	// Remove the master channel group
	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = fmod_system->getMasterChannelGroup(&channel_group);
	if (g_fmod_last_result == FMOD_OK)
		unregisterResource(channel_group, map_channel_groups);

	// Remove the master sound group
	FMOD::SoundGroup* sound_group = nullptr;
	g_fmod_last_result = fmod_system->getMasterSoundGroup(&sound_group);
	if (g_fmod_last_result == FMOD_OK)
		unregisterResource(sound_group, map_sound_groups);
}

void registerMasterGroups(FMOD::System* fmod_system) {
	// Adding the master channel group
	FMOD::ChannelGroup* channel_group;
	g_fmod_last_result = fmod_system->getMasterChannelGroup(&channel_group);
	registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);

	// Adding the master sound group
	FMOD::SoundGroup* sound_group;
	g_fmod_last_result = fmod_system->getMasterSoundGroup(&sound_group);
	registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);
}

func double fmod_fetch_callbacks(char* buffer, double length)
{
	// Lock the mutex to protect the shared resource
	std::lock_guard<std::mutex> lock(callbacksMutex);

	// This is a signal for the GM runner to resize the buffer
	size_t size = callbacks.getBuffer().size();
	if (size > length) {
		return -(double)size;
	}

	// Write to the buffer & clear stream
	callbacks.writeTo(buffer);
	callbacks.clear();
	
	// Return size
	return (double)size;
}

void async_create_event(const StructStream& async_map)
{
	// Lock the mutex to protect the shared resource
	std::lock_guard<std::mutex> lock(callbacksMutex);
	callbacks << async_map;
}

func double fmod_last_result()
{
	return (double)g_fmod_last_result;
}

const char* fmodResultToString(FMOD_RESULT result)
{
	switch (result)
	{
		case FMOD_OK:
			return "No errors.";
		case FMOD_ERR_BADCOMMAND:
			return "Tried to call a function on a data type that does not allow this type of functionality (ie calling Sound::lock on a streaming Sound).";
		case FMOD_ERR_CHANNEL_ALLOC:
			return "Error trying to allocate a Channel.";
		case FMOD_ERR_CHANNEL_STOLEN:
			return "The specified Channel has been reused to play another Sound.";
		case FMOD_ERR_DMA:
			return "DMA Failure. See debug output for more information.";
		case FMOD_ERR_DSP_CONNECTION:
			return "DSP connection error. Connection possibly caused a cyclic dependency or connected dsps with incompatible buffer counts.";
		case FMOD_ERR_DSP_DONTPROCESS:
			return "DSP return code from a DSP process query callback. Tells mixer not to call the process callback and therefore not consume CPU. Use this to optimize the DSP graph.";
		case FMOD_ERR_DSP_FORMAT:
			return "DSP Format error. A DSP unit may have attempted to connect to this network with the wrong format, or a matrix may have been set with the wrong size if the target unit has a specified channel map.";
		case FMOD_ERR_DSP_INUSE:
			return "DSP is already in the mixer's DSP network. It must be removed before being reinserted or released.";
		case FMOD_ERR_DSP_NOTFOUND:
			return "DSP connection error. Couldn't find the DSP unit specified.";
		case FMOD_ERR_DSP_RESERVED:
			return "DSP operation error. Cannot perform operation on this DSP as it is reserved by the system.";
		case FMOD_ERR_DSP_SILENCE:
			return "DSP return code from a DSP process query callback. Tells mixer silence would be produced from read, so go idle and not consume CPU. Use this to optimize the DSP graph.";
		case FMOD_ERR_DSP_TYPE:
			return "DSP operation cannot be performed on a DSP of this type.";
		case FMOD_ERR_FILE_BAD:
			return "Error loading file.";
		case FMOD_ERR_FILE_COULDNOTSEEK:
			return "Couldn't perform seek operation. This is a limitation of the medium (ie netstreams) or the file format.";
		case FMOD_ERR_FILE_DISKEJECTED:
			return "Media was ejected while reading.";
		case FMOD_ERR_FILE_EOF:
			return "End of file unexpectedly reached while trying to read essential data (truncated?).";
		case FMOD_ERR_FILE_ENDOFDATA:
			return "End of current chunk reached while trying to read data.";
		case FMOD_ERR_FILE_NOTFOUND:
			return "File not found.";
		case FMOD_ERR_FORMAT:
			return "Unsupported file or audio format.";
		case FMOD_ERR_HEADER_MISMATCH:
			return "There is a version mismatch between the FMOD header and either the FMOD Studio library or the FMOD Core library.";
		case FMOD_ERR_HTTP:
			return "A HTTP error occurred. This is a catch-all for HTTP errors not listed elsewhere.";
		case FMOD_ERR_HTTP_ACCESS:
			return "The specified resource requires authentication or is forbidden.";
		case FMOD_ERR_HTTP_PROXY_AUTH:
			return "Proxy authentication is required to access the specified resource.";
		case FMOD_ERR_HTTP_SERVER_ERROR:
			return "A HTTP server error occurred.";
		case FMOD_ERR_HTTP_TIMEOUT:
			return "The HTTP request timed out.";
		case FMOD_ERR_INITIALIZATION:
			return "FMOD was not initialized correctly to support this function.";
		case FMOD_ERR_INITIALIZED:
			return "Cannot call this command after System::init.";
		case FMOD_ERR_INTERNAL:
			return "An error occurred that wasn't supposed to. Contact support.";
		case FMOD_ERR_INVALID_FLOAT:
			return "Value passed in was a NaN, Inf or denormalized float.";
		case FMOD_ERR_INVALID_HANDLE:
			return "An invalid object handle was used.";
		case FMOD_ERR_INVALID_PARAM:
			return "An invalid parameter was passed to this function.";
		case FMOD_ERR_INVALID_POSITION:
			return "An invalid seek position was passed to this function.";
		case FMOD_ERR_INVALID_SPEAKER:
			return "An invalid speaker was passed to this function based on the current speaker mode.";
		case FMOD_ERR_INVALID_SYNCPOINT:
			return "The syncpoint did not come from this Sound handle.";
		case FMOD_ERR_INVALID_THREAD:
			return "Tried to call a function on a thread that is not supported.";
		case FMOD_ERR_INVALID_VECTOR:
			return "The vectors passed in are not unit length, or perpendicular.";
		case FMOD_ERR_MAXAUDIBLE:
			return "Reached maximum audible playback count for this Sound's SoundGroup.";
		case FMOD_ERR_MEMORY:
			return "Not enough memory or resources.";
		case FMOD_ERR_MEMORY_CANTPOINT:
			return "Can't use FMOD_OPENMEMORY_POINT on non PCM source data, or non mp3/xma/adpcm data if FMOD_CREATECOMPRESSEDSAMPLE was used.";
		case FMOD_ERR_NEEDS3D:
			return "Tried to call a command on a 2D Sound when the command was meant for 3D Sound.";
		case FMOD_ERR_NEEDSHARDWARE:
			return "Tried to use a feature that requires hardware support.";
		case FMOD_ERR_NET_CONNECT:
			return "Couldn't connect to the specified host.";
		case FMOD_ERR_NET_SOCKET_ERROR:
			return "A socket error occurred. This is a catch-all for socket-related errors not listed elsewhere.";
		case FMOD_ERR_NET_URL:
			return "The specified URL couldn't be resolved.";
		case FMOD_ERR_NET_WOULD_BLOCK:
			return "Operation on a non-blocking socket could not complete immediately.";
		case FMOD_ERR_NOTREADY:
			return "Operation could not be performed because specified Sound/DSP connection is not ready.";
		case FMOD_ERR_OUTPUT_ALLOCATED:
			return "Error initializing output device, but more specifically, the output device is already in use and cannot be reused.";
		case FMOD_ERR_OUTPUT_CREATEBUFFER:
			return "Error creating hardware sound buffer.";
		case FMOD_ERR_OUTPUT_DRIVERCALL:
			return "A call to a standard soundcard driver failed, which could possibly mean a bug in the driver or resources were missing or exhausted.";
		case FMOD_ERR_OUTPUT_FORMAT:
			return "Soundcard does not support the specified format.";
		case FMOD_ERR_OUTPUT_INIT:
			return "Error initializing output device.";
		case FMOD_ERR_OUTPUT_NODRIVERS:
			return "The output device has no drivers installed. If pre-init, FMOD_OUTPUT_NOSOUND is selected as the output mode. If post-init, the function just fails.";
		case FMOD_ERR_PLUGIN:
			return "An unspecified error has been returned from a plugin.";
		case FMOD_ERR_PLUGIN_MISSING:
			return "A requested output, dsp unit type or codec was not available.";
		case FMOD_ERR_PLUGIN_RESOURCE:
			return "A resource that the plugin requires cannot be allocated or found. (ie the DLS file for MIDI playback)";
		case FMOD_ERR_PLUGIN_VERSION:
			return "A plugin was built with an unsupported SDK version.";
		case FMOD_ERR_RECORD:
			return "An error occurred trying to initialize the recording device.";
		case FMOD_ERR_REVERB_CHANNELGROUP:
			return "Reverb properties cannot be set on this Channel because a parent ChannelGroup owns the reverb connection.";
		case FMOD_ERR_REVERB_INSTANCE:
			return "Specified instance in FMOD_REVERB_PROPERTIES couldn't be set. Most likely because it is an invalid instance number or the reverb doesn't exist.";
		case FMOD_ERR_SUBSOUNDS:
			return "The error occurred because the Sound referenced contains subsounds when it shouldn't have, or it doesn't contain subsounds when it should have. The operation may also not be able to be performed on a parent Sound.";
		case FMOD_ERR_SUBSOUND_ALLOCATED:
			return "This subsound is already being used by another Sound, you cannot have more than one parent to a Sound. Null out the other parent's entry first.";
		case FMOD_ERR_SUBSOUND_CANTMOVE:
			return "Shared subsounds cannot be replaced or moved from their parent stream, such as when the parent stream is an FSB file.";
		case FMOD_ERR_TAGNOTFOUND:
			return "The specified tag could not be found or there are no tags.";
		case FMOD_ERR_TOOMANYCHANNELS:
			return "The Sound created exceeds the allowable input channel count. This can be increased using the 'maxinputchannels' parameter in System::setSoftwareFormat.";
		case FMOD_ERR_TRUNCATED:
			return "The retrieved string is too long to fit in the supplied buffer and has been truncated.";
		case FMOD_ERR_UNIMPLEMENTED:
			return "Something in FMOD hasn't been implemented when it should be! contact support!";
		case FMOD_ERR_UNINITIALIZED:
			return "This command failed because System::init or System::setDriver was not called.";
		case FMOD_ERR_UNSUPPORTED:
			return "A command issued was not supported by this object. Possibly a plugin without certain callbacks specified.";
		case FMOD_ERR_VERSION:
			return "The version number of this file format is not supported.";
		case FMOD_ERR_EVENT_ALREADY_LOADED:
			return "The specified bank has already been loaded.";
		case FMOD_ERR_EVENT_LIVEUPDATE_BUSY:
			return "The live update connection failed due to the game already being connected.";
		case FMOD_ERR_EVENT_LIVEUPDATE_MISMATCH:
			return "The live update connection failed due to the game data being out of sync with the tool.";
		case FMOD_ERR_EVENT_LIVEUPDATE_TIMEOUT:
			return "The live update connection timed out.";
		case FMOD_ERR_EVENT_NOTFOUND:
			return "The requested event, parameter, bus or vca could not be found.";
		case FMOD_ERR_STUDIO_UNINITIALIZED:
			return "The Studio::System object is not yet initialized.";
		case FMOD_ERR_STUDIO_NOT_LOADED:
			return "The specified resource is not loaded, so it can't be unloaded.";
		case FMOD_ERR_INVALID_STRING:
			return "An invalid string was passed to this function.";
		case FMOD_ERR_ALREADY_LOCKED:
			return "The specified resource is already locked.";
		case FMOD_ERR_NOT_LOCKED:
			return "The specified resource is not locked, so it can't be unlocked.";
		case FMOD_ERR_RECORD_DISCONNECTED:
			return "The specified recording driver has been disconnected.";
		case FMOD_ERR_TOOMANYSAMPLES:
			return "The length provided exceeds the allowable limit.";
		default:
			return "Unknown error.";
	}
}

std::string GUIDtoString(const FMOD_GUID& guid)
{
	char str[37];  // UUID is 37 characters including null-terminator
	snprintf(str, sizeof(str), "%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X", guid.Data1, guid.Data2, guid.Data3, guid.Data4[0], guid.Data4[1], guid.Data4[2],
			guid.Data4[3], guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);

	return str;
}

FMOD_GUID StringToGUID(const char* str)
{
	FMOD_GUID guid{};

	unsigned int p0;
	int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;

	sscanf_s(str, "%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X", &p0, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10);

	guid.Data1 = p0;
	guid.Data2 = p1;
	guid.Data3 = p2;
	guid.Data4[0] = p3;
	guid.Data4[1] = p4;
	guid.Data4[2] = p5;
	guid.Data4[3] = p6;
	guid.Data4[4] = p7;
	guid.Data4[5] = p8;
	guid.Data4[6] = p9;
	guid.Data4[7] = p10;

	return guid;
}

FMOD_VECTOR FmodVectorFromMap(const std::map<std::string, const uint8_t*>& map_vector)
{
	float x = 0.0, y = 0.0, z = 0.0;

	if (auto search = map_vector.find("x"); search != map_vector.end())
	{
		x = YYGetFloat(search->second);
	}
	if (auto search = map_vector.find("y"); search != map_vector.end())
	{
		y = YYGetFloat(search->second);
	}
	if (auto search = map_vector.find("z"); search != map_vector.end())
	{
		z = YYGetFloat(search->second);
	}

	FMOD_VECTOR vec_pos = {x, y, z};

	return vec_pos;
}

StructStream FmodVectorToGMStruct(const FMOD_VECTOR& vector)
{
	StructStream map = {};
	map.addKeyValue("x", vector.x);
	map.addKeyValue("y", vector.y); 
	map.addKeyValue("z", vector.z);
	return map;
}

FMOD_3D_ATTRIBUTES Fmod3DAttributesFromMap(const std::map<std::string, const uint8_t*>& map)
{
	auto map_position = YYGetStruct(map.at("position"));
	auto map_velocity = YYGetStruct(map.at("velocity"));
	auto map_forward = YYGetStruct(map.at("forward"));
	auto map_up = YYGetStruct(map.at("up"));

	FMOD_VECTOR vec_position = FmodVectorFromMap(map_position);
	FMOD_VECTOR vec_velocity = FmodVectorFromMap(map_velocity);
	FMOD_VECTOR vec_forward = FmodVectorFromMap(map_forward);
	FMOD_VECTOR vec_up = FmodVectorFromMap(map_up);

	FMOD_3D_ATTRIBUTES attributes = {0};

	attributes.position = vec_position;
	attributes.velocity = vec_velocity;
	attributes.forward = vec_forward;
	attributes.up = vec_up;

	return attributes;
}

StructStream Fmod3DAttributesToGMStruct(const FMOD_3D_ATTRIBUTES& attributes)
{
	StructStream map_forward = FmodVectorToGMStruct(attributes.forward);
	StructStream map_position = FmodVectorToGMStruct(attributes.position);
	StructStream map_up = FmodVectorToGMStruct(attributes.up);
	StructStream map_velocity = FmodVectorToGMStruct(attributes.velocity);

	StructStream map = {};
	map.addKeyValue("forward", map_forward);
	map.addKeyValue("position", map_position);
	map.addKeyValue("up", map_up);
	map.addKeyValue("velocity", map_velocity);

	return map;
}

FMOD_STUDIO_PARAMETER_ID FmodParamaterIdFromMap(const std::map<std::string, const uint8_t*>& map_parameter)
{
	FMOD_STUDIO_PARAMETER_ID parameter_id = {0};

	if (auto search = map_parameter.find("data1"); search != map_parameter.end())
	{
		parameter_id.data1 = YYGetUint32(search->second);
	}
	if (auto search = map_parameter.find("data2"); search != map_parameter.end())
	{
		parameter_id.data2 = YYGetUint32(search->second);
	}

	return parameter_id;
}

StructStream FmodParamaterIdToGMStruct(const FMOD_STUDIO_PARAMETER_ID& parameter)
{
	StructStream map = {};
	map.addKeyValue("data1", parameter.data1);
	map.addKeyValue("data2", parameter.data2);
	return map;
}

StructStream FmodStudioBufferInfoToGMStruct(const FMOD_STUDIO_BUFFER_INFO& buffer_info)
{
	StructStream map = {};
	map.addKeyValue("current_usage", buffer_info.currentusage);
	map.addKeyValue("peak_usage ", buffer_info.peakusage);
	map.addKeyValue("capacity", buffer_info.capacity);
	map.addKeyValue("stall_count", buffer_info.stallcount);
	map.addKeyValue("stall_time", buffer_info.stalltime);
	return map;
}

StructStream FmodStudioBufferUsageToGMStruct(const FMOD_STUDIO_BUFFER_USAGE& buffer_usage)
{
	StructStream map_commandqueue = FmodStudioBufferInfoToGMStruct(buffer_usage.studiocommandqueue);
	StructStream map_handle = FmodStudioBufferInfoToGMStruct(buffer_usage.studiohandle);

	StructStream map = {};
	map.addKeyValue("command_queue", map_commandqueue);
	map.addKeyValue("handle", map_handle);

	return map;
}

StructStream FmodStudioMemoryUsageToGMStruct(const FMOD_STUDIO_MEMORY_USAGE& memory_usage)
{
	StructStream map_return = {};
	map_return.addKeyValue("exclusive", memory_usage.exclusive);
	map_return.addKeyValue("inclusive", memory_usage.inclusive);
	map_return.addKeyValue("sample_data", memory_usage.sampledata);

	return map_return;
}

StructStream FmodStudioParamaterDescriptionToGMStruct(const FMOD_STUDIO_PARAMETER_DESCRIPTION& paramater_description)
{
	StructStream map_return = {};

	map_return.addKeyValue("name", paramater_description.name);
	map_return.addKeyValue("parameter_id", FmodParamaterIdToGMStruct(paramater_description.id));
	map_return.addKeyValue("minimum", paramater_description.minimum);
	map_return.addKeyValue("maximum", paramater_description.maximum);
	map_return.addKeyValue("default_value", paramater_description.defaultvalue);
	map_return.addKeyValue("type", (int)paramater_description.type);
	map_return.addKeyValue("flags", (int)paramater_description.flags);
	map_return.addKeyValue("guid", GUIDtoString(paramater_description.guid));

	return map_return;
}

FMOD_CREATESOUNDEXINFO FmodCreateSoundExInfoFromMap(const std::map<std::string, const uint8_t*>& map_extra)
{
	FMOD_CREATESOUNDEXINFO exinfo{};
	exinfo.cbsize = sizeof(FMOD_CREATESOUNDEXINFO);

	if (auto search = map_extra.find("length"); search != map_extra.end())
	{
		exinfo.length = YYGetUint32(search->second);
	}
	if (auto search = map_extra.find("file_offset"); search != map_extra.end())
	{
		exinfo.fileoffset = YYGetUint32(search->second);
	}
	if (auto search = map_extra.find("num_channels"); search != map_extra.end())
	{
		exinfo.numchannels = YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("default_frequency"); search != map_extra.end())
	{
		exinfo.defaultfrequency = YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("format"); search != map_extra.end())
	{
		exinfo.format = (FMOD_SOUND_FORMAT)YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("decode_buffer_size"); search != map_extra.end())
	{
		exinfo.decodebuffersize = YYGetUint32(search->second);
	}
	if (auto search = map_extra.find("initial_subsound"); search != map_extra.end())
	{
		exinfo.initialsubsound = YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("num_sub_sounds"); search != map_extra.end())
	{
		exinfo.numsubsounds = YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("inclusion_list_num"); search != map_extra.end())
	{
		exinfo.inclusionlistnum = YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("dls_name"); search != map_extra.end())
	{
		exinfo.dlsname = YYGetString(search->second);
	}
	if (auto search = map_extra.find("encryption_key"); search != map_extra.end())
	{
		exinfo.encryptionkey = YYGetString(search->second);
	}
	if (auto search = map_extra.find("max_polyphony"); search != map_extra.end())
	{
		exinfo.maxpolyphony = YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("suggested_sound_type"); search != map_extra.end())
	{
		exinfo.suggestedsoundtype = (FMOD_SOUND_TYPE)YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("file_buffer_size"); search != map_extra.end())
	{
		exinfo.filebuffersize = YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("channel_order"); search != map_extra.end())
	{
		exinfo.channelorder = (FMOD_CHANNELORDER)YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("initial_sound_group"); search != map_extra.end())
	{
		auto value = YYGetUint64(search->second);
		uint16_t extension_code = (value >> 40) & 0x3FF;
		uint8_t ref_type = (value >> 32) & 0xFF;
		uint32_t sound_group_id = value & 0xFFFFFFFF;

		auto sound_group_search = map_sound_groups.find(sound_group_id);
		if (extension_code == GM_FMOD_EXT && ref_type == GM_FMOD_TYPE_SOUND_GROUP && sound_group_search == map_sound_groups.end()) {
			LOG_INFO("Invalid 'initial_sound_group' for created sound|stream");
		}
		else {
			exinfo.initialsoundgroup = (FMOD_SOUNDGROUP*)sound_group_search->second;
		}
	}
	if (auto search = map_extra.find("initial_seek_position"); search != map_extra.end())
	{
		exinfo.initialseekposition = YYGetUint32(search->second);
	}
	if (auto search = map_extra.find("initial_seek_pos_type"); search != map_extra.end())
	{
		exinfo.initialseekpostype = (FMOD_TIMEUNIT)YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("ignore_set_filesystem"); search != map_extra.end())
	{
		exinfo.ignoresetfilesystem = YYGetInt32(search->second);
	}
	if (auto search = map_extra.find("audio_queue_policy"); search != map_extra.end())
	{
		exinfo.audioqueuepolicy = YYGetUint32(search->second);
	}
	if (auto search = map_extra.find("min_midi_granularity"); search != map_extra.end())
	{
		exinfo.minmidigranularity = YYGetUint32(search->second);
	}
	if (auto search = map_extra.find("non_block_thread_id"); search != map_extra.end())
	{
		exinfo.nonblockthreadid = YYGetInt32(search->second);
	}

	return exinfo;
}

StructStream FmodCreateSoundExInfoToGMStruct(const FMOD_CREATESOUNDEXINFO& ext_info)
{
	StructStream map_bus = {};

	map_bus.addKeyValue("length", ext_info.length);
	map_bus.addKeyValue("file_offset", ext_info.fileoffset);
	map_bus.addKeyValue("num_channels", ext_info.numchannels);
	map_bus.addKeyValue("default_frequency", ext_info.defaultfrequency);
	map_bus.addKeyValue("format", (int)ext_info.format);
	map_bus.addKeyValue("decode_buffer_size", ext_info.decodebuffersize);
	map_bus.addKeyValue("initial_subsound", ext_info.initialsubsound);
	map_bus.addKeyValue("num_subsounds", ext_info.numsubsounds);
	map_bus.addKeyValue("inclusion_list_num", ext_info.inclusionlistnum);
	map_bus.addKeyValue("dls_name", ext_info.dlsname);
	map_bus.addKeyValue("encryption_key",ext_info.encryptionkey);
	map_bus.addKeyValue("max_polyphony", ext_info.maxpolyphony);
	map_bus.addKeyValue("suggested_sound_type", (int)ext_info.suggestedsoundtype);
	map_bus.addKeyValue("file_buffer_size", ext_info.filebuffersize);
	map_bus.addKeyValue("channel_order", (int)ext_info.channelorder);

	FMOD::SoundGroup* sound_group = (FMOD::SoundGroup*)ext_info.initialsoundgroup;
	if (sound_group != nullptr) {
		auto sound_group_id = registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);
		map_bus.addKeyValue("initial_sound_group", packIndexIntoRef(sound_group_id, GM_FMOD_TYPE_SOUND_GROUP));
	}

	map_bus.addKeyValue("initial_seek_position", ext_info.initialseekposition);
	map_bus.addKeyValue("initial_seek_pos_type", (int)ext_info.initialseekpostype);
	map_bus.addKeyValue("ignore_set_filesystem", ext_info.ignoresetfilesystem);
	map_bus.addKeyValue("audio_queue_policy", ext_info.audioqueuepolicy);
	map_bus.addKeyValue("min_midi_granularity", ext_info.minmidigranularity);
	map_bus.addKeyValue("non_block_thread_id", ext_info.nonblockthreadid);
	//map_bus.addKeyValue("fsb_guid", std::string(GUIDtoString(*ext_info.fsbguid)));

	return map_bus;
}
