// feather ignore GM1041
// feather ignore GM1042

/// @param {string} file
/// @returns {string}
function fmod_path_bundle(_file)
{
	static is_gmrt = -1;
	
	// First time around lets try to get the runtime type.
	if (is_gmrt < 0) {
		try {
			// Try to use builtin constant (this might not exist)
			is_gmrt = GM_runtime_type == "gmrt";
		}
		catch(_e) {
			// Catch this by using the runtime version
			var _version_parts = string_split(GM_runtime_version, ".");
			is_gmrt = (array_length(_version_parts) == 4) && (real(_version_parts[0]) < 2020);
		}
	}

	
	if (is_gmrt && os_type == os_windows) {
		return $"{working_directory}/assets/{_file}";
	}
		
	if (os_type == os_switch)
	{
		if (GM_build_type == "exe")
			return $"rom:/{working_directory}{_file}";
		else
			return $"host:/{working_directory}{_file}";
	}
	else if (os_type == os_android) {
		return $"file:///android_asset/{_file}";
	}
	
	return $"{working_directory}{_file}"
}

/// @param {string} file
/// @returns {string}
function fmod_path_user(_file) {
	return $"{game_save_id}{_file}";
}

/// @param {enum.FMOD_RESULT} error_code
function fmod_error_string(_error_code = fmod_last_result())
{
    switch (_error_code)
    {
        case FMOD_RESULT.OK:                            return "No errors.";
        case FMOD_RESULT.ERR_BADCOMMAND:                return "Tried to call a function on a data type that does not allow this type of functionality (ie calling Sound::lock on a streaming sound).";
        case FMOD_RESULT.ERR_CHANNEL_ALLOC:             return "Error trying to allocate a channel.";
        case FMOD_RESULT.ERR_CHANNEL_STOLEN:            return "The specified channel has been reused to play another sound.";
        case FMOD_RESULT.ERR_DMA:                       return "DMA Failure.  See debug output for more information.";
        case FMOD_RESULT.ERR_DSP_CONNECTION:            return "DSP connection error.  Connection possibly caused a cyclic dependency or connected dsps with incompatible buffer counts.";
        case FMOD_RESULT.ERR_DSP_DONTPROCESS:           return "DSP return code from a DSP process query callback.  Tells mixer not to call the process callback and therefore not consume CPU.  Use this to optimize the DSP graph.";
        case FMOD_RESULT.ERR_DSP_FORMAT:                return "DSP Format error.  A DSP unit may have attempted to connect to this network with the wrong format, or a matrix may have been set with the wrong size if the target unit has a specified channel map.";
        case FMOD_RESULT.ERR_DSP_INUSE:                 return "DSP is already in the mixer's DSP network. It must be removed before being reinserted or released.";
        case FMOD_RESULT.ERR_DSP_NOTFOUND:              return "DSP connection error.  Couldn't find the DSP unit specified.";
        case FMOD_RESULT.ERR_DSP_RESERVED:              return "DSP operation error.  Cannot perform operation on this DSP as it is reserved by the system.";
        case FMOD_RESULT.ERR_DSP_SILENCE:               return "DSP return code from a DSP process query callback.  Tells mixer silence would be produced from read, so go idle and not consume CPU.  Use this to optimize the DSP graph.";
        case FMOD_RESULT.ERR_DSP_TYPE:                  return "DSP operation cannot be performed on a DSP of this type.";
        case FMOD_RESULT.ERR_FILE_BAD:                  return "Error loading file.";
        case FMOD_RESULT.ERR_FILE_COULDNOTSEEK:         return "Couldn't perform seek operation.  This is a limitation of the medium (ie netstreams) or the file format.";
        case FMOD_RESULT.ERR_FILE_DISKEJECTED:          return "Media was ejected while reading.";
        case FMOD_RESULT.ERR_FILE_EOF:                  return "End of file unexpectedly reached while trying to read essential data (truncated?).";
        case FMOD_RESULT.ERR_FILE_ENDOFDATA:            return "End of current chunk reached while trying to read data.";
        case FMOD_RESULT.ERR_FILE_NOTFOUND:             return "File not found.";
        case FMOD_RESULT.ERR_FORMAT:                    return "Unsupported file or audio format.";
        case FMOD_RESULT.ERR_HEADER_MISMATCH:           return "There is a version mismatch between the FMOD header and either the FMOD Studio library or the FMOD Low Level library.";
        case FMOD_RESULT.ERR_HTTP:                      return "A HTTP error occurred. This is a catch-all for HTTP errors not listed elsewhere.";
        case FMOD_RESULT.ERR_HTTP_ACCESS:               return "The specified resource requires authentication or is forbidden.";
        case FMOD_RESULT.ERR_HTTP_PROXY_AUTH:           return "Proxy authentication is required to access the specified resource.";
        case FMOD_RESULT.ERR_HTTP_SERVER_ERROR:         return "A HTTP server error occurred.";
        case FMOD_RESULT.ERR_HTTP_TIMEOUT:              return "The HTTP request timed out.";
        case FMOD_RESULT.ERR_INITIALIZATION:            return "FMOD was not initialized correctly to support this function.";
        case FMOD_RESULT.ERR_INITIALIZED:               return "Cannot call this command after System::init.";
        case FMOD_RESULT.ERR_INTERNAL:                  return "An error occurred that wasn't supposed to.  Contact support.";
        case FMOD_RESULT.ERR_INVALID_FLOAT:             return "Value passed in was a NaN, Inf or denormalized float.";
        case FMOD_RESULT.ERR_INVALID_HANDLE:            return "An invalid object handle was used.";
        case FMOD_RESULT.ERR_INVALID_PARAM:             return "An invalid parameter was passed to this function.";
        case FMOD_RESULT.ERR_INVALID_POSITION:          return "An invalid seek position was passed to this function.";
        case FMOD_RESULT.ERR_INVALID_SPEAKER:           return "An invalid speaker was passed to this function based on the current speaker mode.";
        case FMOD_RESULT.ERR_INVALID_SYNCPOINT:         return "The syncpoint did not come from this sound handle.";
        case FMOD_RESULT.ERR_INVALID_THREAD:            return "Tried to call a function on a thread that is not supported.";
        case FMOD_RESULT.ERR_INVALID_VECTOR:            return "The vectors passed in are not unit length, or perpendicular.";
        case FMOD_RESULT.ERR_MAXAUDIBLE:                return "Reached maximum audible playback count for this sound's soundgroup.";
        case FMOD_RESULT.ERR_MEMORY:                    return "Not enough memory or resources.";
        case FMOD_RESULT.ERR_MEMORY_CANTPOINT:          return "Can't use FMOD_RESULT.OPENMEMORY_POINT on non PCM source data, or non mp3/xma/adpcm data if FMOD_RESULT.CREATECOMPRESSEDSAMPLE was used.";
        case FMOD_RESULT.ERR_NEEDS3D:                   return "Tried to call a command on a 2d sound when the command was meant for 3d sound.";
        case FMOD_RESULT.ERR_NEEDSHARDWARE:             return "Tried to use a feature that requires hardware support.";
        case FMOD_RESULT.ERR_NET_CONNECT:               return "Couldn't connect to the specified host.";
        case FMOD_RESULT.ERR_NET_SOCKET_ERROR:          return "A socket error occurred.  This is a catch-all for socket-related errors not listed elsewhere.";
        case FMOD_RESULT.ERR_NET_URL:                   return "The specified URL couldn't be resolved.";
        case FMOD_RESULT.ERR_NET_WOULD_BLOCK:           return "Operation on a non-blocking socket could not complete immediately.";
        case FMOD_RESULT.ERR_NOTREADY:                  return "Operation could not be performed because specified sound/DSP connection is not ready.";
        case FMOD_RESULT.ERR_OUTPUT_ALLOCATED:          return "Error initializing output device, but more specifically, the output device is already in use and cannot be reused.";
        case FMOD_RESULT.ERR_OUTPUT_CREATEBUFFER:       return "Error creating hardware sound buffer.";
        case FMOD_RESULT.ERR_OUTPUT_DRIVERCALL:         return "A call to a standard soundcard driver failed, which could possibly mean a bug in the driver or resources were missing or exhausted.";
        case FMOD_RESULT.ERR_OUTPUT_FORMAT:             return "Soundcard does not support the specified format.";
        case FMOD_RESULT.ERR_OUTPUT_INIT:               return "Error initializing output device.";
        case FMOD_RESULT.ERR_OUTPUT_NODRIVERS:          return "The output device has no drivers installed.  If pre-init, FMOD_RESULT.OUTPUT_NOSOUND is selected as the output mode.  If post-init, the function just fails.";
        case FMOD_RESULT.ERR_PLUGIN:                    return "An unspecified error has been returned from a plugin.";
        case FMOD_RESULT.ERR_PLUGIN_MISSING:            return "A requested output, dsp unit type or codec was not available.";
        case FMOD_RESULT.ERR_PLUGIN_RESOURCE:           return "A resource that the plugin requires cannot be allocated or found. (ie the DLS file for MIDI playback)";
        case FMOD_RESULT.ERR_PLUGIN_VERSION:            return "A plugin was built with an unsupported SDK version.";
        case FMOD_RESULT.ERR_RECORD:                    return "An error occurred trying to initialize the recording device.";
        case FMOD_RESULT.ERR_REVERB_CHANNELGROUP:       return "Reverb properties cannot be set on this channel because a parent channelgroup owns the reverb connection.";
        case FMOD_RESULT.ERR_REVERB_INSTANCE:           return "Specified instance in FMOD_RESULT.REVERB_PROPERTIES couldn't be set. Most likely because it is an invalid instance number or the reverb doesn't exist.";
        case FMOD_RESULT.ERR_SUBSOUNDS:                 return "The error occurred because the sound referenced contains subsounds when it shouldn't have, or it doesn't contain subsounds when it should have.  The operation may also not be able to be performed on a parent sound.";
        case FMOD_RESULT.ERR_SUBSOUND_ALLOCATED:        return "This subsound is already being used by another sound, you cannot have more than one parent to a sound.  Null out the other parent's entry first.";
        case FMOD_RESULT.ERR_SUBSOUND_CANTMOVE:         return "Shared subsounds cannot be replaced or moved from their parent stream, such as when the parent stream is an FSB file.";
        case FMOD_RESULT.ERR_TAGNOTFOUND:               return "The specified tag could not be found or there are no tags.";
        case FMOD_RESULT.ERR_TOOMANYCHANNELS:           return "The sound created exceeds the allowable input channel count.  This can be increased using the 'maxinputchannels' parameter in System::setSoftwareFormat.";
        case FMOD_RESULT.ERR_TRUNCATED:                 return "The retrieved string is too long to fit in the supplied buffer and has been truncated.";
        case FMOD_RESULT.ERR_UNIMPLEMENTED:             return "Something in FMOD hasn't been implemented when it should be! contact support!";
        case FMOD_RESULT.ERR_UNINITIALIZED:             return "This command failed because System::init or System::setDriver was not called.";
        case FMOD_RESULT.ERR_UNSUPPORTED:               return "A command issued was not supported by this object.  Possibly a plugin without certain callbacks specified.";
        case FMOD_RESULT.ERR_VERSION:                   return "The version number of this file format is not supported.";
        case FMOD_RESULT.ERR_EVENT_ALREADY_LOADED:      return "The specified bank has already been loaded.";
        case FMOD_RESULT.ERR_EVENT_LIVEUPDATE_BUSY:     return "The live update connection failed due to the game already being connected.";
        case FMOD_RESULT.ERR_EVENT_LIVEUPDATE_MISMATCH: return "The live update connection failed due to the game data being out of sync with the tool.";
        case FMOD_RESULT.ERR_EVENT_LIVEUPDATE_TIMEOUT:  return "The live update connection timed out.";
        case FMOD_RESULT.ERR_EVENT_NOTFOUND:            return "The requested event, parameter, bus or vca could not be found.";
        case FMOD_RESULT.ERR_STUDIO_UNINITIALIZED:      return "The Studio::System object is not yet initialized.";
        case FMOD_RESULT.ERR_STUDIO_NOT_LOADED:         return "The specified resource is not loaded, so it can't be unloaded.";
        case FMOD_RESULT.ERR_INVALID_STRING:            return "An invalid string was passed to this function.";
        case FMOD_RESULT.ERR_ALREADY_LOCKED:            return "The specified resource is already locked.";
        case FMOD_RESULT.ERR_NOT_LOCKED:                return "The specified resource is not locked, so it can't be unlocked.";
        case FMOD_RESULT.ERR_RECORD_DISCONNECTED:       return "The specified recording driver has been disconnected.";
        case FMOD_RESULT.ERR_TOOMANYSAMPLES:            return "The length provided exceeds the allowable limit.";
        default :										return "Unknown error.";
    };
}

/// @ignore
function fmod_handle_async_events() 
{
	static _async_buffer = buffer_create(2024, buffer_grow, 1);
	
	var _buffer_address = buffer_get_address(_async_buffer);
	var _buffer_size = buffer_get_size(_async_buffer);
	
	var _size = fmod_fetch_callbacks(_buffer_address, _buffer_size);
	
	// This is a special case that signals the runner that the buffer size needs to be increased.
	if (_size < 0) {
		// Scale by a factor of 2
		return buffer_resize(_async_buffer, -_size * 2);
	}
	
	buffer_seek(_async_buffer, buffer_seek_start, 0);
	var _map_array = ext_buffer_unpack(_async_buffer, true);
	
	var _array_size = array_length(_map_array);
	for (var _i = 0; _i < _array_size; _i++) {
		event_perform_async(ev_async_social, _map_array[_i]);
	}
}

#region Common

function FmodVector() constructor {
	x = 0;
	y = 0;
	z = 0;
}

function FmodCPUUsage() constructor {
	dsp = 0;
	stream = 0;
	geometry = 0;
	update = 0;
	convolution1 = 0;
	convolution2 = 0;
}

function FmodCPUTimeUsage() constructor {
	inclusive = 0;
	exclusive = 0;
}

function FmodLoopPoints() constructor {
	loop_start = 0;
	loop_end = 0;
}

function FmodMinMaxDistance() constructor {
	min_distance = 0;
	max_distance = 0;
}

function FmodReverbProperties() constructor {
	decay_time = 1500;
	early_delay = 7;
	late_delay = 11;
	hf_reference = 5000;
	hf_decay_ratio = 50;
	diffusion = 50;
	density = 100;
	low_shelf_frequency = 250;
	low_shelf_gain = 0;
	high_cut = 200000;
	early_late_mix = 0;
	wet_level = -6;
}

function Fmod3DConeSettings() constructor {
	inside_cone_angle = 0;
	outside_cone_angle = 0;
	outside_volume = 0;
}

function Fmod3DAttributes() constructor {
	position = new FmodVector();
	velocity = new FmodVector();
	forward = new FmodVector();
	up = new FmodVector();
}

function FmodMemoryStats() constructor {
	current_alloced = 0;
	max_alloced = 0;
}

/// @returns {struct.FmodMemoryStats}
function fmod_memory_get_stats(_blocking)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_memory_get_stats_multiplatform(_blocking, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {enum.FMOD_DEBUG_FLAGS} flags 
/// @param {enum.FMOD_DEBUG_MODE} mode 
/// @param {string|pointer} filename 
/// @returns {real}
function fmod_debug_initialize(_flags, _mode = FMOD_DEBUG_MODE.TTY, _filename = pointer_null)
{
	return fmod_debug_initialize_multiplatform(_flags, _mode, _filename);
}

#endregion

#region System

function FmodSystemCreateSoundExInfo() constructor {
	length = 0;
	file_offset = 0;
	num_channels = 0;
	default_frequency = 0;
	format = 0;
	decode_buffer_size = 0;
	initial_subsound = 0;
	num_subsounds = 0;
	inclusion_list_num = 0;
	dls_name = pointer_null;
	encryption_key = pointer_null;
	max_polyphony = 64;
	suggested_sound_type = 0;
	file_buffer_size = 0;
	channel_order = 0;
	initial_seek_position = 0;
	initial_seek_pos_type = 0;
	ignore_set_filesystem = 0;
	audio_queue_policy = 0;
	min_midi_granularity = 512;
	non_block_thread_id = 0;
}

/// @param {string|Id.Buffer} name_or_buff
/// @param {enum.FMOD_MODE} mode
/// @param {struct.FmodSystemCreateSoundExInfo} extra
function fmod_system_create_sound(_name_or_buff, _mode, _extra = {})
{
	var _args = [
		// [ value, forced_type ]
		[ _extra, undefined ] // struct
	]
	
	if(!is_string(_name_or_buff)) {
		_name_or_buff = buffer_get_address(_name_or_buff);
	}
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_system_create_sound_multiplatform(_name_or_buff, _mode, _args_buffer_address);
}

/// @param {string|Id.Buffer} name_or_buff
/// @param {enum.FMOD_MODE} mode
/// @param {struct.FmodSystemCreateSoundExInfo} extra
function fmod_system_create_stream(_name_or_buff, _mode, _extra = {})
{
	var _args = [
		// [ value, forced_type ]
		[ _extra, undefined ] // struct
	]
	
	if(!is_string(_name_or_buff)) {
		_name_or_buff = buffer_get_address(_name_or_buff);
	}
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_system_create_stream_multiplatform(_name_or_buff, _mode, _args_buffer_address);
}

function FmodSystemAdvancedSettings() constructor {
	max_mpeg_codecs = 32;
	max_adpcm_codecs = 32;
	max_xma_codecs = 32;
	max_vorbis_codecs = 32;
	max_at9_codecs = 32;
	max_fadpcm_codecs = 32;
	max_pcm_codecs = 32;
	asio_num_channels = 0;
	vol0_virtual_vol = 0;
	default_decode_buffer_size = 400;
	profile_port = 9264;
	geometry_max_fade_time = 500;
	distance_filter_center_freq = 1500;
	reverb_3d_instance = 0;
	dsp_buffer_pool_size = 8;
	resampler_method = 0;
	random_seed = 0;
	max_convolution_threads = 3;
	max_opus_codecs = 32;
}

/// @param {struct.FmodSystemAdvancedSettings} settings
function fmod_system_set_advanced_settings(_settings)
{
	var _args = [
		// [ value, forced_type ]
		[ _settings, undefined ] // struct
	]
		
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_system_set_advanced_settings_multiplatform(_args_buffer_address);
}

/// @returns {struct.FmodSystemAdvancedSettings}
function fmod_system_get_advanced_settings()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_advanced_settings_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} sound_ref
/// @param {bool} pause
/// @param {real} channel_group_ref
/// @returns {real}
function fmod_system_play_sound(_sound_ref, _pause, _channel_group_ref = undefined)
{
	_channel_group_ref ??= fmod_system_get_master_channel_group();
	return fmod_system_play_sound_multiplatform(_sound_ref, _channel_group_ref, _pause);
}

/// @param {real} dsp_ref
/// @param {bool} pause
/// @param {real} channel_group_ref
/// @returns {real}
function fmod_system_play_dsp(_dsp_ref, _pause, _channel_group_ref = undefined)
{
	_channel_group_ref ??= fmod_system_get_master_channel_group();
	return fmod_system_play_dsp_multiplatform(_dsp_ref, _channel_group_ref, _pause);
}

/// @param {enum.FMOD_SPEAKERMODE} source_speaker_mode 
/// @param {enum.FMOD_SPEAKERMODE} target_speaker_mode 
/// @param {real} matrix_hop
/// @returns {Array<real>}
function fmod_system_get_default_mix_matrix(_source_speaker_mode, _target_speaker_mode, _matrix_hop) {

	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_default_mix_matrix_multiplatform(_source_speaker_mode, _target_speaker_mode, _matrix_hop, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;

}

function FmodSystemDriverInfo() constructor {
	index = 0;
	name = "";
	guid = "";
	system_rate = 0;
	speaker_mode = 0;
	speaker_mode_channels = 0;
}

/// @param {real} driver_index
/// @returns {struct.FmodSystemDriverInfo}
function fmod_system_get_driver_info(_driver_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_driver_info_multiplatform(_driver_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodSystemSoftwareFormat() constructor {
	sample_rate = 0;
	speaker_mode = 0;
	num_raw_speakers = 0;
}

/// @returns {struct.FmodSystemSoftwareFormat}
function fmod_system_get_software_format()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_software_format_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodSystemDSPBufferSize() constructor {
	buff_size = 0;
	num_buffers = 0;
}

/// @returns {struct.FmodSystemDSPBufferSize}
function fmod_system_get_dsp_buffer_size()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_dsp_buffer_size_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodSystemStreamBufferSize() constructor {
	file_buffer_size = 0;
	file_buffer_size_type = 0;
}

/// @returns {struct.FmodSystemStreamBufferSize}
function fmod_system_get_stream_buffer_size()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_stream_buffer_size_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodSystemSpeakerPosition() constructor {
	x = 0;
	y = 0;
	active = false;
}

/// @param {enum.FMOD_SPEAKER} speaker
/// @returns {struct.FmodSystemSpeakerPosition}
function fmod_system_get_speaker_position(_speaker)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_speaker_position_multiplatform(_speaker, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodSystem3DSettings() constructor {
	doppler_scale = 0;
	distance_factor = 0;
	rolloff_scale = 0;
}

/// @returns {struct.FmodSystem3DSettings}
function fmod_system_get_3d_settings()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_3d_settings_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

//function fmod_system_get_plugin_info(handle,type)
//{
//	var buff_return = buffer_create(512,buffer_fixed,1)
//	fmod_system_get_plugin_info_multiplatform(handle,type,buffer_get_address(buff_return))
//	var struct = ext_buffer_unpack(buff_return)
//	buffer_delete(buff_return)
//	return struct
//}

function FmodSystemChannelsPlaying() constructor {
	doppler_scale = 0;
	distance_factor = 0;
	rolloff_scale = 0;
}

/// @returns {struct.FmodSystemChannelsPlaying}
function fmod_system_get_channels_playing()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_channels_playing_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @returns {struct.FmodCPUUsage}
function fmod_system_get_cpu_usage()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_cpu_usage_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodSystemFileUsage() constructor {
	sample_bytes_read = 0;
	stream_bytes_read = 0;
	other_bytes_read = 0;
}

/// @returns {struct.FmodSystemFileUsage}
function fmod_system_get_file_usage()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_file_usage_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
}

//function fmod_system_get_dsp_info_by_type()
//{
//	var buff_return = buffer_create(512,buffer_fixed,1)
//	fmod_system_get_dsp_info_by_type_multiplatform( buffer_get_address(buff_return))
//	var struct = ext_buffer_unpack(buff_return)
//	buffer_delete(buff_return)
//	return struct
//}

/// @param {real} listener_index
/// @param {struct.FmodVector} position
/// @param {struct.FmodVector} velocity
/// @param {struct.FmodVector} forward
/// @param {struct.FmodVector} up
function fmod_system_set_3d_listener_attributes(_listener_index, _position, _velocity, _forward, _up)
{
	var _args = [
		// [ value, forced_type ]
		[ _position, buffer_f32 ], // struct<float>
		[ _velocity, buffer_f32 ], // struct<float>
		[ _forward,	 buffer_f32 ], // struct<float>
		[ _up,		 buffer_f32 ], // struct<float>
	]
		
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_system_set_3d_listener_attributes_multiplatform(_listener_index, _args_buffer_address);
}

/// @param {real} listener_index
/// @returns {struct.Fmod3DAttributes}
function fmod_system_get_3d_listener_attributes(_listener_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_3d_listener_attributes_multiplatform(_listener_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} port_type
/// @param {real} port_index
/// @param {real} channel_group_ref
/// @param {bool} pass_thru
function fmod_system_attach_channel_group_to_port(_port_type, _port_index, _channel_group_ref, _pass_thru = true)
{
	var _args = [
		// [ value, forced_type ]
		[ _port_type, buffer_s32 ], 
		[ _port_index, buffer_u64 ],
		[ _channel_group_ref, buffer_u64 ], 
		[ _pass_thru, buffer_bool ],
	]
		
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_system_attach_channel_group_to_port_multiplatform(_args_buffer_address);
}

function FmodSystemRecordNumDrivers() constructor {
	num_drivers = 0;
	num_connected = 0;
}

/// @returns {struct.FmodSystemRecordNumDrivers}
function fmod_system_get_record_num_drivers()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_record_num_drivers_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodSystemRecordDriverInfo() constructor {
	name = "";
	guid = "";
	system_rate = 0;
	speaker_mode = 0;
	speaker_mode_channels = 0;
	state = 0;
}

/// @param {real} record_driver_index
/// @returns {struct.FmodSystemRecordDriverInfo}
function fmod_system_get_record_driver_info(_record_driver_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_record_driver_info_multiplatform(_record_driver_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodSystemGeometryOcclusion() constructor {
	direct = 0;
	reverb = 0;
	listener = new FmodVector();
	source = new FmodVector();
}

/// @returns {struct.FmodSystemGeometryOcclusion}
function fmod_system_get_geometry_occlusion()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_geometry_occlusion_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} reverb_instance_index
/// @param {struct.FmodReverbProperties} properties
function fmod_system_set_reverb_properties(_reverb_instance_index, _properties) {

	var _args = [
		// [ value, forced_type ]
		[ _properties, buffer_f32 ], // struct<float>
	]
		
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_system_set_reverb_properties_multiplatform(_reverb_instance_index, _args_buffer_address);

}

/// @param {real} reverb_instance_index
/// @returns {struct.FmodReverbProperties}
function fmod_system_get_reverb_properties(_reverb_instance_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_system_get_reverb_properties_multiplatform(_reverb_instance_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {Id.Buffer} buffer_id
/// @param {real} length
function fmod_system_load_geometry(_buffer_id, _length) {
	
	var _args = [
		// [ value, forced_type ]
		[ _buffer_id, BUFFER_BUFFER ], // buffer
	]
		
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_system_load_geometry_multiplatform(_args_buffer_address, _length);
}

function fmod_system_update() {
	fmod_handle_async_events();
	return fmod_system_update_multiplatform();
}

#endregion

#region Channel

/// @param {real}_channel_ref
/// @param {enum.FMOD_TIMEUNIT} loop_start_type
/// @param {enum.FMOD_TIMEUNIT} loop_end_type
/// @returns {struct.FmodLoopPoints}
function fmod_channel_get_loop_points(_channel_ref, _loop_start_type, _loop_end_type)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_get_loop_points_multiplatform(_channel_ref, _loop_start_type, _loop_end_type, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
	
}

#endregion

#region Channel Group

/// @param {real} channel_group_ref
/// @param {real} child_channel_group_ref
/// @param {bool} propagate_dsp_clock
function fmod_channel_group_add_group(_channel_group_ref, _child_channel_group_ref, _propagate_dsp_clock = true) {
	return fmod_channel_group_add_group_multiplatform(_channel_group_ref, _child_channel_group_ref, _propagate_dsp_clock);
}

#endregion

#region Channel Control

/// @param {real} control_ref
/// @param {struct.FmodVector} pos
/// @param {struct.FmodVector} vel
function fmod_channel_control_set_3d_attributes(_control_ref, _pos, _vel)
{
	var _args = [
		// [ value, forced_type ]
		[ _pos, buffer_f32 ], // struct (x, y, z)
		[ _vel, buffer_f32 ], // struct (z, y, z)
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_set_3d_attributes_multiplatform(_control_ref, _args_buffer_address);
}

function FmodControl3DAttributes() constructor {
	pos = new FmodVector();
	vel = new FmodVector();
}

/// @param {real} control_ref
/// @returns {struct.FmodControl3DAttributes}
function fmod_channel_control_get_3d_attributes(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_3d_attributes_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} control_ref
/// @param {struct.FmodVector} orientation
function fmod_channel_control_set_3d_cone_orientation(_control_ref, _orientation)
{
	var _args = [
		// [ value, forced_type ]
		[ _orientation, buffer_f32 ], // struct (x, y, z)
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_set_3d_cone_orientation_multiplatform(_control_ref, _args_buffer_address);
}

/// @param {real} control_ref
/// @returns {struct.FmodVector}
function fmod_channel_control_get_3d_cone_orientation(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_3d_cone_orientation_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} control_ref
/// @returns {struct.Fmod3DConeSettings}
function fmod_channel_control_get_3d_cone_settings(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_3d_cone_settings_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} control_ref
/// @param {array[struct.FmodVector]} points
function fmod_channel_control_set_3d_custom_rolloff(_control_ref, _points)
{
	var _args = [
		// [ value, forced_type ]
		[ _points, buffer_f32 ], // array<struct<float>>
	]
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_set_3d_custom_rolloff_multiplatform(_control_ref, _args_buffer_address);
}

/// @param {real} control_ref
/// @returns {array[struct.FmodVector]}
function fmod_channel_control_get_3d_custom_rolloff(_control_ref)
{	
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_3d_custom_rolloff_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? [];
}

function FmodControl3DDistanceFilter() constructor {
	custom = false;
	custom_level = 0;
	center_freq = 0;
}

/// @param {real} control_ref
/// @returns {struct.FmodControl3DDistanceFilter}
function fmod_channel_control_get_3d_distance_filter(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_3d_distance_filter_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodControl3DMinMaxDistance() constructor {
	min_dist = 0;
	max_dist = 0;
}

/// @param {real} control_ref
/// @returns {struct.FmodControl3DMinMaxDistance}
function fmod_channel_control_get_3d_min_max_distance(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_3d_min_max_distance_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodControl3DOcclusion() constructor {
	direct = 0;
	reverb = 0;
}

/// @param {real} control_ref
/// @returns {struct.FmodControl3DOcclusion}
function fmod_channel_control_get_3d_occlusion(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_3d_occlusion_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} control_ref
/// @param {array<real>} levels
function fmod_channel_control_set_mix_levels_input(_control_ref, _levels)
{
	var _args = [
		// [ value, forced_type ]
		[ _levels, buffer_f32 ], // array<float>
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_set_mix_levels_input_multiplatform(_control_ref, _args_buffer_address);
}

/// @param {real} control_ref
/// @param {array<real>} matrix
/// @param {real} out_channels
/// @param {real} in_channels
/// @param {real} in_channel_hop
function fmod_channel_control_set_mix_matrix(_control_ref, _matrix, _out_channels, _in_channels, _in_channel_hop = 0)
{
	var _args = [
		// [ value, forced_type ]
		[ _matrix ?? [], buffer_f32 ],		// array<float>
		[ _out_channels, buffer_s32 ],		// s32
		[ _in_channels, buffer_s32 ],		// s32
		[ _in_channel_hop, buffer_s32 ],	// s32
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_set_mix_matrix_multiplatform(_control_ref, _args_buffer_address);
}

function FmodControlMixMatrix() constructor {
	matrix = [];
	out_channels = 0;
	in_channels = 0;
}

/// @param {real} control_ref
/// @returns {struct.FmodControlMixMatrix}
function fmod_channel_control_get_mix_matrix(_control_ref, _in_channel_hop)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_mix_matrix_multiplatform(_control_ref, _in_channel_hop, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

function FmodControlDSPClock() constructor {
	dsp_clock = 0;
	parent_clock = 0;
}

/// @param {real} control_ref
/// @returns {struct.FmodControlDSPClock}
function fmod_channel_control_get_dsp_clock(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_dsp_clock_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} control_ref
/// @param {real} dsp_clock_start
/// @param {real} dsp_clock_end
/// @param {bool} stop_channels
function fmod_channel_control_set_delay(_control_ref, _dsp_clock_start = 0, _dsp_clock_end = 0, _stop_channels = true)
{
	var _args = [
		// [ value, forced_type ]
		[ _dsp_clock_start, buffer_u64 ],
		[ _dsp_clock_end, buffer_u64 ],
		[ _stop_channels, buffer_bool ],
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_set_delay_multiplatform(_control_ref, _args_buffer_address);
}

function FmodControlDelay() constructor {
	dsp_clock_start = 0;
	dsp_clock_end = 0;
	stop_channels = false;
}

/// @param {real} control_ref
/// @returns {struct.FmodControlDelay}
function fmod_channel_control_get_delay(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_delay_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} control_ref
/// @param {real} dsp_clock
/// @param {real} volume
function fmod_channel_control_add_fade_point(_control_ref, _dsp_clock, _volume)
{
	var _args = [
		// [ value, forced_type ]
		[ _dsp_clock, buffer_u64 ],
		[ clamp(_volume, 0, infinity), buffer_f32 ],
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_add_fade_point_multiplatform(_control_ref, _args_buffer_address);
}

/// @param {real} control_ref
/// @param {real} dsp_clock
/// @param {real} volume
function fmod_channel_control_set_fade_point_ramp(_control_ref, _dsp_clock, _volume)
{
	var _args = [
		// [ value, forced_type ]
		[ _dsp_clock, buffer_u64 ],
		[ clamp(_volume, 0, infinity), buffer_f32 ],
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_set_fade_point_ramp_multiplatform(_control_ref, _args_buffer_address);
}

/// @param {real} control_ref
/// @param {real} dsp_clock_start
/// @param {real} dsp_clock_end
function fmod_channel_control_remove_fade_points(_control_ref, _dsp_clock_start, _dsp_clock_end)
{
	var _args = [
		// [ value, forced_type ]
		[ _dsp_clock_start, buffer_u64 ],
		[ _dsp_clock_end, buffer_u64 ],
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_channel_control_remove_fade_points_multiplatform(_control_ref, _args_buffer_address);
}

function FmodControlFadePoints() constructor {
	num_points = 0;
	point_dsp_clock = [];
	point_volume = [];
}

/// @param {real} control_ref
/// @returns {struct.FmodControlFadePoints}
function fmod_channel_control_get_fade_points(_control_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_channel_control_get_fade_points_multiplatform(_control_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());

	return _return_value;
}

#endregion

#region DSP

/// @param {real} dsp_ref
/// @param {real} dsp_input_ref
/// @param {enum.FMOD_DSPCONNECTION_TYPE} dsp_connection_type
function fmod_dsp_add_input(_dsp_ref, _dsp_input_ref, _dsp_connection_type = FMOD_DSPCONNECTION_TYPE.STANDARD)
{
	return fmod_dsp_add_input_multiplatform(_dsp_ref, _dsp_input_ref, _dsp_connection_type);
}

function FmodDSPConnectionData() constructor {
	dsp_ref = 0;
	dsp_connection_ref = 0;
}

/// @param {real} dsp_ref
/// @returns {struct.FmodDSPConnectionData}
function fmod_dsp_get_input(_dsp_ref, _dsp_chain_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_input_multiplatform(_dsp_ref, _dsp_chain_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} dsp_ref
/// @returns {struct.FmodDSPConnectionData}
function fmod_dsp_get_output(_dsp_ref, _dsp_chain_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_output_multiplatform(_dsp_ref, _dsp_chain_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} dsp_ref
/// @param {real} parameter_index
/// @param {Id.Buffer} buffer
/// @param {real} length
function fmod_dsp_set_parameter_data(_dsp_ref, _parameter_index, _buffer, _length = undefined)
{
	_length ??= buffer_get_size(_buffer);
	fmod_dsp_set_parameter_data_multiplatform(_dsp_ref, _parameter_index, buffer_get_address(_buffer), _length);
}

/// @param {real} dsp_ref
/// @param {real} parameter_index
/// @param {Id.Buffer} buffer
/// @param {real} length
function fmod_dsp_get_parameter_data(_dsp_ref, _parameter_index, _buffer, _length = undefined)
{
	_length ??= buffer_get_size(_buffer);
	return fmod_dsp_get_parameter_data_multiplatform(_dsp_ref, _parameter_index, buffer_get_address(_buffer), _length);
}

function FmodDspParameterDescValue() constructor {
	default_val = 0;
	maximum = 0;
	minimum = 0;
}

function FmodDspParameterDesc() constructor {
	type = 0;
	name = "";
	label = "";
	description = "";
	int_value = new FmodDspParameterDescValue();
	float_value = new FmodDspParameterDescValue();
	bool_value = new FmodDspParameterDescValue();
}

/// @param {real} dsp_ref
/// @returns {struct.FmodDspParameterDesc}
function fmod_dsp_get_parameter_info(_dsp_ref, _parameter_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_parameter_info_multiplatform(_dsp_ref, _parameter_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodDspParameterDesc(); 
}

function FmodDSPChannelFormat() constructor {
	channel_mask = 0;
	num_channels = 0;
	speaker_mode = 0;
}

/// @param {real} dsp_ref
/// @returns {struct.FmodDSPChannelFormat}
function fmod_dsp_get_channel_format(_dsp_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_channel_format_multiplatform(_dsp_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodDSPChannelFormat();
}

/// @param {real} dsp_ref
/// @param {enum.FMOD_CHANNELMASK} channel_mask_in
/// @param {real} num_channels_in
/// @param {enum.FMOD_SPEAKERMODE} speaker_mode_in
/// @returns {struct.FmodDSPChannelFormat}
function fmod_dsp_get_output_channel_format(_dsp_ref, _channel_mask_in, _num_channels_in, _speaker_mode_in)
{
	var _args = [
		// [ value, forced_type ]
		[ _channel_mask_in, buffer_u32 ],
		[ _num_channels_in, buffer_s32 ],
		[ _speaker_mode_in, buffer_u32 ],
	];
	
	// Get arguments and return buffer addresses
	var _args_buffer_address = ext_pack_args(_args);
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_output_channel_format_multiplatform(_dsp_ref, _args_buffer_address, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodDSPChannelFormat();
}

function FmodDSPMeteringInfo() constructor {
	num_samples = 0;
	peak_level = [];
	rms_level = [];
	num_channels = 0;
}

function FmodDSPInOutMeteringInfo() constructor {
	in = new FmodDSPMeteringInfo();
	out = new FmodDSPMeteringInfo();
}

/// @param {real} dsp_ref
/// @returns {struct.FmodDSPInOutMeteringInfo}
function fmod_dsp_get_metering_info(_dsp_ref)
{	
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_metering_info_multiplatform(_dsp_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodDSPInOutMeteringInfo();
}

function FmodDSPMeteringEnableInfo() constructor {
	enabled_in = false;
	enabled_out = false;
}

/// @param {real} dsp_ref
/// @returns {struct.FmodDSPMeteringEnableInfo}
function fmod_dsp_get_metering_enabled(_dsp_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_metering_enabled_multiplatform(_dsp_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodDSPMeteringEnableInfo();
}

function FmodDSPWetDryMixInfo() constructor {
	pre_wet = 0;
	post_wet = 0;
	dry = 0;
}

/// @param {real} dsp_ref
/// @returns {struct.FmodDSPWetDryMixInfo}
function fmod_dsp_get_wet_dry_mix(_dsp_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_wet_dry_mix_multiplatform(_dsp_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? FmodDSPWetDryMixInfo();
}

function FmodDSPInfo() constructor {
	name = "";
	version = 0;
	channels = 0;
	config_width = 0;
	config_height = 0;
}

/// @param {real} dsp_ref
/// @returns {struct.FmodDSPInfo}
function fmod_dsp_get_info(_dsp_ref)
{	
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_info_multiplatform(_dsp_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodDSPInfo();
}

/// @param {real} dsp_ref
/// @returns {struct.FmodCPUTimeUsage}
function fmod_dsp_get_cpu_usage(_dsp_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_get_cpu_usage_multiplatform(_dsp_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodCPUTimeUsage();
}

/// @param {real} dsp_ref
/// @param {real} dsp_other_ref
/// @param {real} dsp_connection_ref
/// @returns {real}
function fmod_dsp_disconnect_from(_dsp_ref, _dsp_other_ref = 0, _dsp_connection_ref = 0) {
	return fmod_dsp_disconnect_from_mutliplatform(_dsp_ref, _dsp_other_ref, _dsp_connection_ref);
}

#endregion

#region DSP Connection

/// @param {real} dsp_connection_ref
/// @param {array<real>} matrix
/// @param {real} out_channels
/// @param {real} in_channels
/// @param {real} in_channel_hop
function fmod_dsp_connection_set_mix_matrix(_dsp_connection_ref, _matrix, _out_channels, _in_channels, _in_channel_hop = 0)
{
	var _args = [
		// [ value, forced_type ]
		[ _matrix, buffer_f32 ],
		[ _out_channels, buffer_s32 ],
		[ _in_channels, buffer_s32 ],
		[ _in_channel_hop, buffer_s32 ],
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_dsp_connection_set_mix_matrix_multiplatform(_dsp_connection_ref, _args_buffer_address);
}

function FmodDSPConnectionMixMatrix() constructor {
	matrix = [];
	out_channels = 0;
	in_channels = 0;
}

/// @param {real} dsp_connection_ref
/// @param {real} in_channel_hop
/// @returns {struct.FmodDSPConnectionMixMatrix}
function fmod_dsp_connection_get_mix_matrix(_dsp_ref, _in_channel_hop)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_dsp_connection_get_mix_matrix_multiplatform(_dsp_ref, _in_channel_hop, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodDSPConnectionMixMatrix();
}

#endregion

#region Geometry

function FmodGeometryPolygonAttributes() constructor {
	direct_occlusion = 0;
	reverb_occlusion = 0;
	double_sided = false;
}

/// @param {real} geometry_ref
/// @param {real} polygon_index
/// @returns {struct.FmodGeometryPolygonAttributes}
function fmod_geometry_get_polygon_attributes(_geometry_ref, _polygon_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_geometry_get_polygon_attributes_multiplatform(_geometry_ref, _polygon_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodGeometryPolygonAttributes();
}

/// @param {real} geometry_ref
/// @param {real} polygon_index
/// @param {real} vertex_index
/// @param {struct.FmodVector} position
function fmod_geometry_set_polygon_vertex(_geometry_ref, _polygon_index, _vertex_index, _position)
{
	var _args = [
		// [ value, forced_type ]
		[ _position, buffer_f32 ], // struct<float>
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_geometry_set_polygon_vertex_multiplatform(_geometry_ref, _polygon_index, _vertex_index, _args_buffer_address);
}

/// @param {real} geometry_ref
/// @param {real} polygon_index
/// @param {real} vertex_index
/// @returns {struct.FmodVector}
function fmod_geometry_get_polygon_vertex(_geometry_ref,_polygon_index,_vertex_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_geometry_get_polygon_vertex_multiplatform(_geometry_ref, _polygon_index, _vertex_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodVector();
}

/// @param {real} geometry_ref
/// @param {struct.FmodVector} position
function fmod_geometry_set_position(_geometry_ref, _position)
{
	var _args = [
		// [ value, forced_type ]
		[ _position, buffer_f32 ], // struct<float>
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_geometry_set_position_multiplatform(_geometry_ref, _args_buffer_address);
}

/// @param {real} geometry_ref
/// @returns {struct.FmodVector}
function fmod_geometry_get_position(_geometry_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_geometry_get_position_multiplatform(_geometry_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodVector();
}

/// @param {real} geometry_ref
/// @param {struct.FmodVector} forward
/// @param {struct.FmodVector} up
function fmod_geometry_set_rotation(_geometry_ref, _forward, _up)
{
	var _args = [
		// [ value, forced_type ]
		[ _forward, buffer_f32 ],	// struct<float>
		[ _up, buffer_f32 ],		// struct<float>
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_geometry_set_rotation_multiplatform(_geometry_ref, _args_buffer_address);
}

function FmodGeometryRotation() constructor {
	forward = new FmodVector();
	up = new FmodVector();
}

/// @param {real} geometry_ref
/// @returns {struct.FmodGeometryRotation} position
function fmod_geometry_get_rotation(_geometry_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_geometry_get_rotation_multiplatform(_geometry_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodGeometryRotation();
}

/// @param {real} geometry_ref
/// @param {struct.FmodVector} scale
function fmod_geometry_set_scale(_geometry_ref, _scale)
{
	var _args = [
		// [ value, forced_type ]
		[ _scale, buffer_f32 ],	// struct<float>
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_geometry_set_scale_multiplatform(_geometry_ref, _args_buffer_address);
}

/// @param {real} geometry_ref
/// @returns {struct.FmodVector}
function fmod_geometry_get_scale(_geometry_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_geometry_get_scale_multiplatform(_geometry_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodVector();
}

/// @param {real} geometry_ref
/// @param {real} direct_occlusion
/// @param {real} reverb_occlusion
/// @param {bool} double_sided
/// @param {array<struct.FmodVector>} vertices
function fmod_geometry_add_polygon(_geometry_ref, _direct_occlusion, _reverb_occlusion, _double_sided, _vertices)
{
	var _args = [
		// [ value, forced_type ]
		[ _direct_occlusion, buffer_f32 ],	// float
		[ _reverb_occlusion, buffer_f32 ],	// float
		[ _double_sided, buffer_bool ],		// bool
		[ _vertices, buffer_f32 ],			// array<struct<float>>
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_geometry_add_polygon_multiplatform(_geometry_ref, _args_buffer_address);
}

function FmodMaxPolygonsInfo() constructor {
	max_polygons = 0;
	max_vertices = 0;
}

/// @param {real} geometry_ref
/// @returns {struct.FmodMaxPolygonsInfo}
function fmod_geometry_get_max_polygons(_geometry_ref) {
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_geometry_get_max_polygons_multiplatform(_geometry_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodMaxPolygonsInfo();
}

/// @param {real} geometry_ref
/// @param {Id.Buffer} buffer_id
/// @returns {real}
function fmod_geometry_save(_geometry_ref, _buffer_id) {

	var _args = [
		// [ value, forced_type ]
		[ _buffer_id, BUFFER_BUFFER ],
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_geometry_save_multiplatform(_geometry_ref, _args_buffer_address);
}


#endregion

#region Reverb 3D

/// @param {real} reverb_3d_ref
/// @param {struct.FmodVector} position
/// @param {real} min_distance
/// @param {real} max_distance
function fmod_reverb_3d_set_3d_attributes(_reverb_3d_ref, _position, _min_distance, _max_distance)
{
	var _args = [
		// [ value, forced_type ]
		[ _position, buffer_f32 ],	// struct<float>
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_reverb_3d_set_3d_attributes_multiplatform(_reverb_3d_ref, _args_buffer_address, _min_distance, _max_distance);
}

function FmodReverb3DAttributes() : FmodMinMaxDistance() constructor {
	position = new FmodVector();
}

/// @param {real} reverb_3d_ref
/// @returns {struct.FmodReverb3DAttributes}
function fmod_reverb_3d_get_3d_attributes(_reverb_3d_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_reverb_3d_get_3d_attributes_multiplatform(_reverb_3d_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodReverb3DAttributes();
}

/// @param {real} reverb_3d_ref
/// @returns {struct.FmodReverbProperties}
function fmod_reverb_3d_get_properties(_reverb_3d_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_reverb_3d_get_properties_multiplatform(_reverb_3d_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodReverbProperties();
}

#endregion

#region Sound

function FmodSoundFormat() constructor {
	type = FMOD_SOUND_TYPE.UNKNOWN;
	format = FMOD_SOUND_FORMAT.NONE;
	channels = 0;
	bits = 0;
}

/// @param {real} sound_ref
/// @returns {struct.FmodSoundFormat}
function fmod_sound_get_format(_sound_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_format_multiplatform(_sound_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodSoundFormat();
}

function FmodSoundNumTags() constructor {
	num_tags = 0;
	num_tags_updated = 0;
}

/// @param {real} sound_ref
/// @returns {struct.FmodSoundNumTags}
function fmod_sound_get_num_tags(_sound_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_num_tags_multiplatform(_sound_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodSoundNumTags();
}

function FmodSoundTag() constructor {
	name = "";
	type = 0;
	update = 0;
	data_len = 0;
	data_type = 0;
}

/// @param {real} sound_ref
/// @param {real} tag_index
/// @param {Id.Buffer} data_buffer
/// @returns {struct.FmodSoundTag}
function fmod_sound_get_tag(_sound_ref, _tag_index, _data_buffer)
{
	var _args = [
		// [ value, forced_type ]
		[ _data_buffer, BUFFER_BUFFER ], // Id.Buffer
	];
	
	// Get args buffer and return buffer address
	var _args_buffer_address = ext_pack_args(_args);
	var _return_buffer_address = ext_return_buffer_address();
	
	fmod_sound_get_tag_multiplatform(_sound_ref, _tag_index, _args_buffer_address, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodSoundTag();
}

/// @param {real} sound_ref
/// @returns {struct.Fmod3DConeSettings}
function fmod_sound_get_3d_cone_settings(_sound_ref)
{	
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_3d_cone_settings_multiplatform(_sound_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new Fmod3DConeSettings();
}

/// @param {real} sound_ref
/// @param {array<struct.FmodVector>} points
function fmod_sound_set_3d_custom_rolloff(_sound_ref, _points)
{
	var _args = [
		// [ value, forced_type ]
		[ _points, buffer_f32 ], // struct<float>
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_sound_set_3d_custom_rolloff_multiplatform(_sound_ref, _args_buffer_address);
}

/// @param {real} sound_ref
/// @returns {array<struct.FmodVector>}
function fmod_sound_get_3d_custom_rolloff(_sound_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_3d_custom_rolloff_multiplatform(_sound_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? [];
}

/// @param {real} sound_ref
/// @returns {struct.FmodMinMaxDistance}
function fmod_sound_get_3d_min_max_distance(_sound_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_3d_min_max_distance_multiplatform(_sound_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodMinMaxDistance();
}

function FmodSoundDefaults() constructor {
	frequency = 0;
	priority = 0;
}

/// @param {real} sound_ref
/// @returns {struct.FmodSoundDefaults}
function fmod_sound_get_defaults(_sound_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_defaults_multiplatform(_sound_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodSoundDefaults();
}

/// @param {real} sound_ref
/// @param {real} loop_start_type
/// @param {real} loop_end_type
/// @returns {struct.FmodLoopPoints}
function fmod_sound_get_loop_points(_sound_ref, _loop_start_type, _loop_end_type)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_loop_points_multiplatform(_sound_ref, _loop_start_type, _loop_end_type, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodLoopPoints();
}

function FmodSoundOpenState() constructor {
	open_state = 0;
	percent_buffered = 0;
	starving = false;
	disk_busy = false;
}

/// @param {real} sound_ref
/// @returns {struct.FmodSoundOpenState}
function fmod_sound_get_open_state(_sound_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_open_state_multiplatform(_sound_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodSoundOpenState();
}

/// @param {real} sound_ref
/// @param {Id.Buffer} buff
/// @param {real} length
/// @param {real} offset
function fmod_sound_read_data(_sound_ref, _buff, _length, _offset)
{
	var _args = [
		// [ value, forced_type ]
		[ _buff, BUFFER_BUFFER ],
		[ _length, buffer_u32 ], 
		[ _offset, buffer_u32 ],
	];
	
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_sound_read_data_multiplatform(_sound_ref, _args_buffer_address);
}

function FmodSoundLockChunck() constructor {
	length = 0;
	patch_address = pointer_null;
}

function FmodSoundLock() constructor {
	buffer1 = new FmodSoundLockChunck();
	buffer2 = new FmodSoundLockChunck();
}

/// @param {real} sound_ref
/// @param {real} offset
/// @param {real} length
/// @param {Id.Buffer} buff1
/// @param {Id.Buffer} buff2
/// @returns {struct.FmodSoundLock}
function fmod_sound_lock(_sound_ref, _offset, _length, _buff1, _buff2)
{
	var _args = [
		// [ value, forced_type ]
		[ _offset, buffer_u32 ],
		[ _length, buffer_u32 ], 
		[ _buff1, BUFFER_BUFFER ],
		[ _buff2, BUFFER_BUFFER ],
	];
	
	// Get args buffer and return buffer address
	var _args_buffer_address = ext_pack_args(_args);
	var _return_buffer_address = ext_return_buffer_address();
	
	fmod_sound_lock_multiplatform(_sound_ref, _args_buffer_address, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodSoundLock();
}

/// @param {real} sound_ref
/// @param {real} buff1
/// @param {real} len1
/// @param {real} address1
/// @param {real} buff2
/// @param {real} len2
/// @param {real} address2
function fmod_sound_unlock(_sound_ref, _buff1, _len1, _address1, _buff2 = undefined, _len2 = undefined, _address2 = undefined)
{
	var _args = [
		// [ value, forced_type ]
		[ _buff1, BUFFER_BUFFER ],
		[ _len1, buffer_u32 ],
		[ _address1, BUFFER_POINTER ],
		[ _buff2, BUFFER_BUFFER ],
		[ _len2, buffer_u32 ],
		[ _address2, BUFFER_POINTER ],
	];
	
	// Get args buffer and return buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_sound_unlock_multiplatform(_sound_ref, _args_buffer_address);
}

function FmodSyncPoint() constructor {
	name = "";
	offset = 0;
}

/// @param {real} sound_ref
/// @param {real} point_index
/// @param {enum.FMOD_TIMEUNIT} offset_type
/// @returns {struct.FmodSyncPoint}
function fmod_sound_get_sync_point(_sound_ref, _point_index, _offset_type)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_sound_get_sync_point_multiplatform(_sound_ref, _point_index, _offset_type, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodSyncPoint();
}

#endregion

#region Studio Common

function FmodStudioMemoryUsage() constructor {
	inclusive = 0;
	exclusive = 0;
	sample_data = 0;
}

function FmodStudioParameter() constructor {
	value = 0;
	final_value = 0;
}

function FmodStudioParameterId() constructor {
	data1 = 0;
	data2 = 0;
}

#endregion

#region Studio Bus

/// @param {real} bus_ref
/// @param {real} port_index
function fmod_studio_bus_set_port_index(_bus_ref, _port_index)
{
	var _args = [
		// [ value, forced_type ]
		[ _port_index, buffer_u64 ],
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_bus_set_port_index_multiplatform(_bus_ref, _args_buffer_address);
}

/// @param {real} bus_ref
/// @returns {real} port_index
function fmod_studio_bus_get_port_index(_bus_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_bus_get_port_index_multiplatform(_bus_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {real} bus_ref
/// @returns {struct.FmodCPUUsage}
function fmod_studio_bus_get_cpu_usage(_bus_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_bus_get_cpu_usage_multiplatform(_bus_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());

	return _return_value ?? new FmodCPUUsage();
}

/// @param {real} bus_ref
/// @returns {struct.FmodStudioMemoryUsage}
function fmod_studio_bus_get_memory_usage(_bus_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_bus_get_memory_usage_multiplatform(_bus_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());

	return _return_value ?? new FmodStudioMemoryUsage();
}

#endregion

#region Studio Command Replay

function FmodCommandReplayCurrentCommand() constructor {
	command_index = 0;
	command_time = 0;
}

/// @param {real} command_replay_ref
/// @returns {struct.FmodCommandReplayCurrentCommand}
function fmod_studio_command_replay_get_current_command(_command_replay_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_command_replay_get_current_command_multiplatform(_command_replay_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());

	return _return_value ?? new FmodCommandReplayCurrentCommand();
}

function FmodCommandReplayCommandInfo() constructor {
	command_name = "";
	parent_command_index = 0;
	frame_time = 0;
	instance_type = 0;
	output_type = 0;
	instance_handle = 0;
	output_handle = 0;
}

/// @param {real} command_replay_ref
/// @param {real} command_index
/// @returns {struct.FmodCommandReplayCommandInfo}
function fmod_studio_command_replay_get_command_info(_command_replay_ref, _command_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_command_replay_get_command_info_multiplatform(_command_replay_ref, _command_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodCommandReplayCommandInfo();
}

#endregion

#region Studio Event Description

/// @param {real} event_description_ref
/// @returns {struct.FmodMinMaxDistance}
function fmod_studio_event_description_get_min_max_distance(_event_description_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_description_get_min_max_distance_multiplatform(_event_description_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodMinMaxDistance();
}


function FmodStudioUserProperty() constructor {
	name = "";
	type = FMOD_STUDIO_USER_PROPERTY_TYPE.BOOLEAN;
	string_value = "";
	int_value = 0;
	bool_value = false;
	float_value = 1.0
}


/// @param {real} event_description_ref
/// @param {string} name
function fmod_studio_event_description_get_user_property(_event_description_ref, _name) {
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_description_get_user_property_multiplatform(_event_description_ref, _name, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioUserProperty();
}

/// @param {real} event_description_ref
/// @param {real} index
function fmod_studio_event_description_get_user_property_by_index(_event_description_ref, _index) {
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_description_get_user_property_by_index_multiplatform(_event_description_ref, _index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioUserProperty();
}

#endregion

#region Studio Event Instance

function FmodStudioEventInstanceVolume() constructor {
	volume = 0;
	final_volume = 0;
}

/// @param {real} event_instance_ref
/// @returns {struct.FmodStudioEventInstanceVolume}
function fmod_studio_event_instance_get_volume(_event_instance_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_instance_get_volume_multiplatform(_event_instance_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioEventInstanceVolume();
}

/// @param {real} event_instance_ref
/// @param {struct.Fmod3DAttributes} attributes
function fmod_studio_event_instance_set_3d_attributes(_event_instance_ref, _attributes)
{
	var _args = [
		// [ value, forced_type ]
		[ _attributes, buffer_f32 ],
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_event_instance_set_3d_attributes_multiplatform(_event_instance_ref, _args_buffer_address);
}

/// @param {real} event_instance_ref
/// @returns {struct.Fmod3DAttributes}
function fmod_studio_event_instance_get_3d_attributes(_event_instance_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_instance_get_3d_attributes_multiplatform(_event_instance_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new Fmod3DAttributes();
}

/// @param {real} event_instance_ref
/// @returns {struct.FmodMinMaxDistance}
function fmod_studio_event_instance_get_min_max_distance(_event_instance_ref)
{	
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_instance_get_min_max_distance_multiplatform(_event_instance_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodMinMaxDistance();
}

/// @param {real} event_instance_ref
/// @param {string} name
/// @returns {struct.FmodStudioParameter}
function fmod_studio_event_instance_get_parameter_by_name(_event_instance_ref, _name)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_instance_get_parameter_by_name_multiplatform(_event_instance_ref, _name, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioParameter();
}

/// @param {real} event_instance_ref
/// @param {string} name
/// @param {real} value
/// @param {bool} ignore_seek_speed
function fmod_studio_event_instance_set_parameter_by_name(_event_instance_ref, _name, _value, _ignore_seek_speed = false) {
	return fmod_studio_event_instance_set_parameter_by_name_multiplatform(_event_instance_ref, _name, _value, _ignore_seek_speed);
}

/// @param {real} event_instance_ref
/// @param {struct.FmodStudioParameterId} parameter_id
/// @param {real} value
/// @param {bool} ignore_seek_speed
function fmod_studio_event_instance_set_parameter_by_id(_event_instance_ref, _paramater_id, _value, _ignore_seek_speed = false)
{
	var _args = [
		// [ value, forced_type ]
		[ _paramater_id, buffer_u32 ],
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_event_instance_set_parameter_by_id_multiplatform(_event_instance_ref, _args_buffer_address, _value, _ignore_seek_speed);
}

/// @param {real} event_instance_ref
/// @param {struct.FmodStudioParameterId} parameter_id
/// @param {string} label
/// @param {bool} ignore_seek_speed
function fmod_studio_event_instance_set_parameter_by_id_with_label(_event_instance_ref, _parameter_id, _label, _ignore_seek_speed = false)
{
	var _args = [
		// [ value, forced_type ]
		[ _paramater_id, buffer_u32 ],
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(_event_instance_ref, _args_buffer_address, _label, _ignore_seek_speed);
}

/// @param {real} event_instance_ref
/// @param {struct.FmodStudioParameterId} parameter_id
/// @returns {struct.FmodStudioParameter}
function fmod_studio_event_instance_get_parameter_by_id(_event_instance_ref, _paramater_id)
{
	var _args = [
		// [ value, forced_type ]
		[ _paramater_id, buffer_u32 ],
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	var _return_buffer_address = ext_return_buffer_address();
	
	fmod_studio_event_instance_get_parameter_by_id_multiplatform(_event_instance_ref, _args_buffer_address, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioParameter();
}

/// @param {real} event_instance_ref
/// @returns {struct.FmodCPUUsage}
function fmod_studio_event_instance_get_cpu_usage(_event_instance_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_instance_get_cpu_usage_multiplatform(_event_instance_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodCPUUsage();
}

/// @param {real} event_instance_ref
/// @returns {struct.FmodStudioMemoryUsage}
function fmod_studio_event_instance_get_memory_usage(_event_instance_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_instance_get_memory_usage_multiplatform(_event_instance_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioMemoryUsage();
}

#endregion

#region Studio System

/// @param {real} buff_data
/// @param {real} length
/// @param {enum.FMOD_STUDIO_LOAD_MEMORY_MODE} mode
/// @param {enum.FMOD_STUDIO_LOAD_BANK} flags
/// @returns {real}
function fmod_studio_system_load_bank_memory(_buff_data, _length, _mode, _flags)
{
	return fmod_studio_system_load_bank_memory_multiplatform(buffer_get_address(_buff_data), _length, _mode, _flags);
}

/// @param {real} listener_index
/// @param {struct.Fmod3DAttributes} attributes
/// @param {struct.FmodVector} [attenuation=undefined]
function fmod_studio_system_set_listener_attributes(_listener_index, _attributes, _attenuation = undefined)
{
	var _args = [
		// [ value, forced_type ]
		[ _attributes, buffer_f32 ],	// struct<struct<<float>>
	];
	
	// Options argument
	if (!is_undefined(_attenuation)) {
		array_push(_args, [
			_attenuation, buffer_f32,	// struct<float>
		])
	}
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_system_set_listener_attributes_multiplatform(_listener_index, _args_buffer_address);
}

function FmodStudioListenerAttributes() constructor {
	attributes = new Fmod3DAttributes();
	attenuation = new FmodVector();
}

/// @param {real} listener_index
/// @returns {struct.FmodStudioListenerAttributes}
function fmod_studio_system_get_listener_attributes(_listener_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_listener_attributes_multiplatform(_listener_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioListenerAttributes();
}

/// @param {struct.FmodStudioParameterId} parameter_id
/// @param {struct.FmodStudioParameter}
function fmod_studio_system_get_parameter_by_id(_parameter_id)
{
	var _args = [
		// [ value, forced_type ]
		[ _parameter_id, buffer_u32 ],	// struct<u32>
	];
	
	// Get args and return buffer address
	var _args_buffer_address = ext_pack_args(_args);
	var _return_buffer_address = ext_return_buffer_address();
	
	fmod_studio_system_get_parameter_by_id_multiplatform(_args_buffer_address, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value;
}

/// @param {struct.FmodStudioParameterId} parameter_id
/// @param {real} value
/// @param {bool} ignore_seek_speed
function fmod_studio_system_set_parameter_by_id(_parameter_id, _value, _ignore_seek_speed)
{
	var _args = [
		// [ value, forced_type ]
		[ _parameter_id, buffer_u32 ],	// struct<u32>
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_system_set_parameter_by_id_multiplatform(_args_buffer_address, _value, _ignore_seek_speed);
}

/// @param {struct.FmodStudioParameterId} parameter_id
/// @param {string} label
/// @param {bool} ignore_seek_speed
function fmod_studio_system_set_parameter_by_id_with_label(_parameter_id, _label, _ignore_seek_speed = false)
{
	var _args = [
		// [ value, forced_type ]
		[ _parameter_id, buffer_u32 ],	// struct<u32>
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_system_set_parameter_by_id_with_label_multiplatform(_args_buffer_address, _label, _ignore_seek_speed);
}

/// @param {string} name
/// @returns {struct.FmodStudioParameter}
function fmod_studio_system_get_parameter_by_name(_name)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();
	
	fmod_studio_system_get_parameter_by_name_multiplatform(_name, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioParameter();
}

/// @param {struct.FmodStudioParameterId} parameter_id
/// @param {real} label_index
/// @returns {string}
function fmod_studio_system_get_parameter_label_by_id(_parameter_id, _label_index)
{
	var _args = [
		// [ value, forced_type ]
		[ _parameter_id, buffer_u32 ],	// struct<u32>
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_system_get_parameter_label_by_id_multiplatform(_args_buffer_address, _label_index);
}

function FmodStudioBufferInfo() constructor {
	current_usage = 0;
	peak_usage = 0;
	capacity = 0;
	stall_count = 0;
	stall_time = 0;
}

function FmodStudioBufferUsage() constructor {
	command_queue = FmodStudioBufferInfo();
	// handle = new FmodStudioBufferInfo();
}


/// @returns {struct.FmodStudioBufferUsage}
function fmod_studio_system_get_buffer_usage()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_buffer_usage_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioBufferUsage();
}

/// @returns {struct.FmodStudioMemoryUsage}
function fmod_studio_system_get_memory_usage()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_memory_usage_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioMemoryUsage();
}

function FmodStudioCPUUsage() constructor {
	core = new FmodCPUUsage();
	studio = { update: 0 };
}

/// @returns {struct.FmodStudioCPUUsage}
function fmod_studio_system_get_cpu_usage()
{
	
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_cpu_usage_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioCPUUsage();
}

/// @returns {array<real>}
function fmod_studio_system_get_bank_list()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_bank_list_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? [];
}

/// @param {string} name
/// @returns {struct.FmodStudioParameterDescription}
function fmod_studio_system_get_parameter_description_by_name(_name)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_parameter_description_by_name_multiplatform(_name, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioParameterDescription();
}

/// @param {struct.FmodStudioParameterId} parameter_id
/// @returns {struct.FmodStudioParameterDescription}
function fmod_studio_system_get_parameter_description_by_id(_parameter_id)
{
	var _args = [
		// [ value, forced_type ]
		[ _parameter_id, buffer_u32 ],	// struct<u32>
	];
	
	// Get args and return buffer address
	var _args_buffer_address = ext_pack_args(_args);
	var _return_buffer_address = ext_return_buffer_address();
	
	fmod_studio_system_get_parameter_description_by_id_multiplatform(_args_buffer_address, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioParameterDescription();
}

/// @returns {array<struct.FmodStudioParameterDescription>}
function fmod_studio_system_get_parameter_description_list()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_parameter_description_list_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? [];
}

function FmodStudioAdvancedSettings() constructor {
	command_queue_size = 32768;
	handle_initial_size = 8192 * 8;
	studio_update_period = 20;
	idle_sampledata_pool_size = 262144;
	streaming_schedule_delay = 8192
	encryption_key = pointer_null;
}

/// @param {struct.FmodStudioAdvancedSettings} settings
function fmod_studio_system_set_advanced_settings(_settings)
{
	var _args = [
		// [ value, forced_type ]
		[ _settings.command_queue_size, buffer_u32 ],
		[ _settings.handle_initial_size, buffer_u32 ],
		[ _settings.studio_update_period, buffer_s32 ],
		[ _settings.idle_sample_data_pool_size, buffer_s32 ],
		[ _settings.streaming_schedule_delay, buffer_u32 ],
		[ _settings.encryption_key, buffer_string ],
	];
	
	// Get args buffer address
	var _args_buffer_address = ext_pack_args(_args);
	
	return fmod_studio_system_set_advanced_settings_multiplatform(_args_buffer_address);
}

/// @returns {struct.FmodStudioAdvancedSettings}
function fmod_studio_system_get_advanced_settings()
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_advanced_settings_multiplatform(_return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioAdvancedSettings();
}

function FmodStudioSoundInfo() constructor {
	ext_info = new FmodSystemCreateSoundExInfo();
	name_or_data = ""
	mode = 0;
	sub_sound_index = 0;
}

/// @param {string} key
/// @returns {struct.FmodStudioSoundInfo}
function fmod_studio_system_get_sound_info(_key)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_system_get_sound_info_multiplatform(_key, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioSoundInfo();
}

/// @param {string} name
/// @param {real} value
/// @param {bool} ignore_seek_speed
function fmod_studio_system_set_parameter_by_name(_name, _value, _ignore_seek_speed = false)
{
	return fmod_studio_system_set_parameter_by_name_multiplatform(_name, _value, _ignore_seek_speed)
}

/// @param {string} name
/// @param {string} label
/// @param {bool} ignore_seek_speed
function fmod_studio_system_set_parameter_by_name_with_label(_name, _label, _ignore_seek_speed = false)
{
	return fmod_studio_system_set_parameter_by_name_with_label_multiplatform(_name, _label, _ignore_seek_speed)
}

function fmod_studio_system_update() {
	fmod_handle_async_events();
	return fmod_studio_system_update_multiplatform();
}



#endregion

#region Studio Bank

/// @param {real} bank_ref
/// @returns {array<real>}
function fmod_studio_bank_get_event_description_list(_bank_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_bank_get_event_description_list_multiplatform(_bank_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? [];
}

/// @param {real} bank_ref
/// @returns {array<real>}
function fmod_studio_bank_get_bus_list(_bank_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_bank_get_bus_list_multiplatform(_bank_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? [];
}

/// @param {real} bank_ref
/// @returns {array<real>}
function fmod_studio_bank_get_vca_list(_bank_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_bank_get_vca_list_multiplatform(_bank_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? [];
}

function FmodStudioStringInfo() constructor {
	path = "";
	guid = "";
}

/// @param {real} bank_ref
/// @param {real} string_index
/// @returns {struct.FmodStudioStringInfo}
function fmod_studio_bank_get_string_info(_bank_ref, _string_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_bank_get_string_info_multiplatform(_bank_ref, _string_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioStringInfo();
}

#endregion

#region Studio Event Description

function FmodStudioParameterDescription() constructor {
	name = "";
	parameter_id = new FmodStudioParameterId();
	minimum = 0;
	maximum = 0;
	default_value = 0;
	type = 0;
	flags = 0;
	guid = 0;
}

/// @param {real} event_descriptor_ref
/// @returns {array<real>}
function fmod_studio_event_description_get_instance_list(_event_descriptor_ref)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_description_get_instance_list_multiplatform(_event_descriptor_ref, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? [];
}

/// @param {real} event_descriptor_ref
/// @param {struct.FmodStudioParameterId} parameter_id
/// @returns {struct.FmodStudioParameterDescription}
function fmod_studio_event_description_get_parameter_description_by_id(_event_descriptor_ref, _parameter_id)
{	
	var _args = [
		// [ value, forced_type ]
		[ _parameter_id, buffer_u32 ], // struct<u32>
	];
	
	// Get args and return buffer address
	var _args_buffer_address = ext_pack_args(_args);
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_description_get_parameter_description_by_id_multiplatform(_event_descriptor_ref, _args_buffer_address, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioParameterDescription();
}

/// @param {real} event_descriptor_ref
/// @param {struct.FmodStudioParameterId} parameter_id
/// @param {real} label_index
/// @returns {string}
function fmod_studio_event_description_get_parameter_label_by_id(_event_descriptor_ref, _parameter_id, _label_index)
{
	var _args = [
		// [ value, forced_type ]
		[ _parameter_id, buffer_u32 ], // struct<u32>
	];
	
	// Get args and return buffer address
	var _args_buffer_address = ext_pack_args(_args);

	// Call to fmod extensions
	return fmod_studio_event_description_get_parameter_label_by_id_multiplatform(_event_descriptor_ref, _args_buffer_address, _label_index);
}

/// @param {real} event_descriptor_ref
/// @param {real} parameter_index
/// @returns {struct.FmodStudioParameterDescription}
function fmod_studio_event_description_get_parameter_description_by_index(_event_descriptor_ref, _parameter_index)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_description_get_parameter_description_by_index_multiplatform(_event_descriptor_ref, _parameter_index, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioParameterDescription();
}

/// @param {real} event_descriptor_ref
/// @param {string} name
/// @returns {struct.FmodStudioParameterDescription}
function fmod_studio_event_description_get_parameter_description_by_name(_event_descriptor_ref, _name)
{
	// Get return buffer address
	var _return_buffer_address = ext_return_buffer_address();

	// Call to fmod extensions
	fmod_studio_event_description_get_parameter_description_by_name_multiplatform(_event_descriptor_ref, _name, _return_buffer_address);
	
	// Unpack return value
	var _return_value = ext_buffer_unpack(ext_return_buffer());
	
	return _return_value ?? new FmodStudioParameterDescription();
}

#endregion
