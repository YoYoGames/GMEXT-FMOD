// Structs

/**
 * @struct FmodVector
 * @desc This struct describes a point in 3D space.
 * @member {real} x The x coordinate of the 3D vector.
 * @member {real} y The y coordinate of the 3D vector.
 * @member {real} z The z coordinate of the 3D vector.
 * @struct_end
 */

/**
 * @struct FmodCPUUsage
 * @desc This struct stores performance information for FMOD's Core API functionality.
 * @member {real} dsp The DSP mixing engine CPU usage. A percentage of `FMOD_THREAD_TYPE.MIXER`, or main thread if `FMOD_INIT.MIX_FROM_UPDATE` flag is used with ${func.fmod_system_init}.
 * @member {real} stream The streaming engine CPU usage. A percentage of `FMOD_THREAD_TYPE.STREAM`, or main thread if `FMOD_INIT.STREAM_FROM_UPDATE` flag is used with ${func.fmod_system_init}.
 * @member {real} geometry The geometry engine CPU usage. A percentage of `FMOD_THREAD_TYPE.GEOMETRY`.
 * @member {real} update The ${func.fmod_system_update} CPU usage. A percentage of the main thread.
 * @member {real} convolution1 The convolution reverb processing thread #1 CPU usage. A percentage of `FMOD_THREAD_TYPE.CONVOLUTION1`.
 * @member {real} convolution2 The convolution reverb processing thread #2 CPU usage. A percentage of `FMOD_THREAD_TYPE.CONVOLUTION2`.
 * @struct_end
 */

/**
 * @struct FmodCPUTimeUsage
 * 
 * @member {real} inclusive 
 * @member {real} exclusive 
 * @struct_end
 */

/**
 * @struct FmodLoopPoints
 * 
 * @member {real} loop_start 
 * @member {real} loop_end 
 * @struct_end
 */

/**
 * @struct FmodMinMaxDistance
 * 
 * @member {real} min_distance 
 * @member {real} max_distance 
 * @struct_end
 */

/**
 * @struct FmodReverbProperties
 * 
 * @member {real} decay_time = 1500
 * @member {real} early_delay = 7
 * @member {real} late_delay = 11
 * @member {real} hf_reference = 5000
 * @member {real} hf_decay_ratio = 50
 * @member {real} diffusion = 50
 * @member {real} density = 100
 * @member {real} low_shelf_frequency = 250
 * @member {real} low_shelf_gain = 0
 * @member {real} high_cut = 200000
 * @member {real} early_late_mix = 0
 * @member {real} wet_level = -6
 * @struct_end
 */

/**
 * @struct Fmod3DConeSettings
 * 
 * @member {real} inside_cone_angle 
 * @member {real} outside_cone_angle 
 * @member {real} outside_volume 
 * @struct_end
 */

/**
 * @struct Fmod3DAttributes
 * 
 * @member {struct.FmodVector} position The position in 3D space used for panning and attenuation.
 * @member {struct.FmodVector} velocity The velocity in 3D space used for doppler.
 * @member {struct.FmodVector} forward The "forward" vector as the first vector that defines orientation in 3D space.
 * @member {struct.FmodVector} up The "up" vector as the second vector that defines orientation in 3D space.
 * @struct_end
 */

/**
 * @struct FmodMemoryStats
 * 
 * @member {real} current_alloced The currently allocated memory at the time of the call.
 * @member {real} max_alloced The maximum allocated memory since ${func.fmod_system_init} or Memory_Initialize.
 * @struct_end
 */

/**
 * @struct FmodSystemCreateSoundExInfo
 * @desc This struct holds additional options for creating a Sound.
 * @member {real} length The number of bytes to read starting at `fileoffset`, or the length of the Sound to create for `FMOD_MODE.OPENUSER`, or the length of `name_or_data` for `FMOD_MODE.OPENMEMORY` / `FMOD_MODE.OPENMEMORY_POINT`.
 * @member {real} file_offset The file offset (in bytes) to start reading from.
 * @member {real} num_channels The number of channels in sound data for `FMOD_MODE.OPENUSER` / `FMOD_MODE.OPENRAW`. A value in the range [0, `FMOD_MAX_CHANNEL_WIDTH`].
 * @member {real} default_frequency The default frequency (in Hertz) of sound data for `FMOD_MODE.OPENUSER` / `FMOD_MODE.OPENRAW`.
 * @member {constant.FMOD_SOUND_FORMAT} format The format of sound data for `FMOD_MODE.OPENUSER` / `FMOD_MODE.OPENRAW`.
 * @member {real} decode_buffer_size The size (in samples) of the decoded buffer for `FMOD_MODE.CREATESTREAM`, or the block size used with `pcmreadcallback` for `FMOD_MODE.OPENUSER`.
 * @member {real} initial_subsound The initial subsound to seek to for `FMOD_MODE.CREATESTREAM`.
 * @member {real} num_subsounds Number of subsounds available for `FMOD_MODE.OPENUSER`, or the maximum subsounds to load from file.
 * @member {real} inclusion_list_num The list of subsound indices to load from file.
 * @member {string} dls_name The file path to a `FMOD_SOUND_TYPE.DLS` sample set to use when loading a `FMOD_SOUND_TYPE.MIDI` file, see the description for defaults.
 * @member {string} encryption_key Key for encrypted `FMOD_SOUND_TYPE.FSB` file, cannot be used in conjunction with `FMOD_MODE.OPENMEMORY_POINT`.
 * @member {real} max_polyphony The maximum voice count for `FMOD_SOUND_TYPE.MIDI` / `FMOD_SOUND_TYPE.IT`. Default is 64.
 * @member {constant.FMOD_SOUND_TYPE} suggested_sound_type Attempt to load using the specified type first instead of loading in codec priority order.
 * @member {real} file_buffer_size The buffer size for reading the file, use -1 to disable buffering.
 * @member {constant.FMOD_CHANNELORDER} channel_order Custom ordering of speakers for this sound data.
 * @member {real} initial_seek_position The initial position to seek to for `FMOD_MODE.CREATESTREAM`.
 * @member {constant.FMOD_TIMEUNIT} initial_seek_pos_type The time units for `initial_seek_position`.
 * @member {boolean} ignore_set_filesystem Ignore System::setFileSystem and `FMOD_CREATESOUNDEXINFO` file callbacks.
 * @member {real} audio_queue_policy The hardware / software decoding policy for `FMOD_SOUND_TYPE.AUDIOQUEUE`, see `FMOD_AUDIOQUEUE_CODECPOLICY`.
 * @member {real} min_midi_granularity The mixer granularity for `FMOD_SOUND_TYPE.MIDI` sounds, smaller numbers give a more accurate reproduction at the cost of higher CPU usage.
 * @member {real} non_block_thread_id The thread index to execute `FMOD_MODE.NONBLOCKING` loads on for parallel Sound loading.
 * @struct_end
 */

/**
 * @struct FmodSystemAdvancedSettings
 * 
 * @member {real} max_mpeg_codecs = 32
 * @member {real} max_adpcm_codecs = 32
 * @member {real} max_xma_codecs = 32
 * @member {real} max_vorbis_codecs = 32
 * @member {real} max_at9_codecs = 32
 * @member {real} max_fadpcm_codecs = 32
 * @member {real} max_pcm_codecs = 32
 * @member {real} asio_num_channels = 0
 * @member {real} vol0_virtual_vol = 0
 * @member {real} default_decode_buffer_size = 400
 * @member {real} profile_port = 9264
 * @member {real} geometry_max_fade_time = 500
 * @member {real} distance_filter_center_freq = 1500
 * @member {real} reverb_3d_instance = 0
 * @member {real} dsp_buffer_pool_size = 8
 * @member {real} resampler_method = 0
 * @member {real} random_seed = 0
 * @member {real} max_convolution_threads = 3
 * @member {real} max_opus_codecs = 32
 * @struct_end
 */

/**
 * @struct FmodSystemSoftwareFormat
 * 
 * @member {real} sample_rate 
 * @member {real} speaker_mode 
 * @member {real} num_raw_speakers 
 * @struct_end
 */

/**
 * @struct FmodSystemDSPBufferSize
 * 
 * @member {real} buff_size 
 * @member {real} num_buffers 
 * @struct_end
 */

/**
 * @struct FmodSystemStreamBufferSize
 * 
 * @member {real} file_buffer_size 
 * @member {real} file_buffer_size_type 
 * @struct_end
 */

/**
 * @struct FmodSystemSpeakerPosition
 * 
 * @member {real} x 
 * @member {real} y 
 * @member {real} active 
 * @struct_end
 */

/**
 * @struct FmodSystemChannelsPlaying
 * 
 * @member {real} channels The number of playing Channels (both real and virtual).
 * @member {real} real_channels The number of playing real (non-virtual) Channels.
 * @struct_end
 */

/**
 * @struct FmodSystemFileUsage
 * 
 * @member {real} sample_bytes_read 
 * @member {real} stream_bytes_read 
 * @member {real} other_bytes_read 
 * @struct_end
 */

/**
 * @struct FmodSystemRecordNumDrivers
 * 
 * @member {real} num_drivers 
 * @member {real} num_connected 
 * @struct_end
 */

/**
 * @struct FmodSystemRecordDriverInfo
 * 
 * @member {string} name 
 * @member {string} guid 
 * @member {real} system_rate 
 * @member {real} speaker_mode 
 * @member {real} speaker_mode_channels 
 * @member {real} state 
 * @struct_end
 */

/**
 * @struct FmodSystemGeometryOcclusion
 * 
 * @member {real} direct 
 * @member {real} reverb 
 * @member {struct.FmodVector} listener 
 * @member {struct.FmodVector} source 
 * @struct_end
 */

/**
 * @struct FmodControl3DAttributes
 * 
 * @member {struct.FmodVector} pos 
 * @member {struct.FmodVector} vel 
 * @struct_end
 */

/**
 * @struct FmodControl3DDistanceFilter
 * 
 * @member {boolean} custom Whether to override automatic distance filtering and use `customLevel` instead.
 * @member {real} custom_level The attenuation factor where 1 represents no attenuation and 0 represents complete attenuation.
 * @member {real} center_freq The center frequency of the band-pass filter used to simulate distance attenuation, 0 for default of FMOD_ADVANCEDSETTINGS::distanceFilterCenterFreq.
 * @struct_end
 */

/**
 * @struct FmodControl3DMinMaxDistance
 * 
 * @member {real} min_dist 
 * @member {real} max_dist 
 * @struct_end
 */

/**
 * @struct FmodControl3DOcclusion
 * 
 * @member {real} direct 
 * @member {real} reverb 
 * @struct_end
 */

/**
 * @struct FmodControlDSPClock
 * 
 * @member {real} dsp_clock 
 * @member {real} parent_clock 
 * @struct_end
 */

/**
 * @struct FmodControlDelay
 * 
 * @member {real} dsp_clock_start 
 * @member {real} dsp_clock_end 
 * @member {boolean} stop_channels 
 * @struct_end
 */

/**
 * @struct FmodControlFadePoints
 * 
 * @member {real} num_points 
 * @member {array} point_dsp_clock 
 * @member {array} point_volume 
 * @struct_end
 */

/**
 * @struct FmodDSPConnectionData
 * 
 * @member {real} dsp_ref 
 * @member {real} dsp_connection_ref 
 * @struct_end
 */

/**
 * @struct FmodDSPChannelFormat
 * 
 * @member {real} channel_mask 
 * @member {real} num_channels 
 * @member {real} speaker_mode 
 * @struct_end
 */

/**
 * @struct FmodDSPMeteringInfo
 * 
 * @member {real} num_samples 
 * @member {array} peak_level 
 * @member {array} rms_level 
 * @member {real} num_channels 
 * @struct_end
 */

/**
 * @struct FmodDSPInOutMeteringInfo
 * 
 * @member {struct.FmodDSPMeteringInfo} in 
 * @member {struct.FmodDSPMeteringInfo} out 
 * @struct_end
 */

/**
 * @struct FmodDSPMeteringEnableInfo
 * 
 * @member {boolean} enabled_in = false
 * @member {boolean} enabled_out = false
 * @struct_end
 */

/**
 * @struct FmodDSPInfo
 * 
 * @member {string} name 
 * @member {real} version 
 * @member {real} channels 
 * @member {real} config_width 
 * @member {real} config_height 
 * @struct_end
 */

/**
 * @struct FmodGeometryPolygonAttributes
 * 
 * @member {real} direct_occlusion 
 * @member {real} reverb_occlusion 
 * @member {boolean} double_sided 
 * @struct_end
 */

/**
 * @struct FmodGeometryRotation
 * 
 * @member {struct.FmodVector} forward The "forward" vector as the first vector that defines orientation in 3D space.
 * @member {struct.FmodVector} up The "up" vector as the second vector that defines orientation in 3D space.
 * @struct_end
 */

/**
 * @struct FmodReverb3DAttributes() : FmodMinMaxDistance
 * @member {struct.FmodVector} position 
 * @struct_end
 */

/**
 * @struct FmodSoundFormat
 * 
 * @member {constant.FMOD_SOUND_TYPE} type 
 * @member {constant.FMOD_SOUND_FORMAT} format 
 * @member {real} channels 
 * @member {real} bits 
 * @struct_end
 */

/**
 * @struct FmodSoundNumTags
 * 
 * @member {real} num_tags 
 * @member {real} num_tags_updated 
 * @struct_end
 */

/**
 * @struct FmodSoundTag
 * 
 * @member {string} name 
 * @member {real} type 
 * @member {real} update 
 * @member {real} data_len 
 * @member {real} data_type 
 * @struct_end
 */

/**
 * @struct FmodSoundDefaults
 * 
 * @member {real} frequency 
 * @member {real} priority 
 * @struct_end
 */

/**
 * @struct FmodSoundOpenState
 * 
 * @member {real} open_state 
 * @member {real} percent_buffered 
 * @member {boolean} starving 
 * @member {boolean} disk_busy 
 * @struct_end
 */

/**
 * @struct FmodSoundLockChunck
 * 
 * @member {real} length 
 * @member {pointer} patch_address 
 * @struct_end
 */

/**
 * @struct FmodSoundLock
 * 
 * @member {struct.FmodSoundLockChunck} buffer1 
 * @member {struct.FmodSoundLockChunck} buffer2 
 * @struct_end
 */

/**
 * @struct FmodSyncPoint
 * 
 * @member {string} name 
 * @member {real} offset 
 * @struct_end
 */

/**
 * @struct FmodStudioMemoryUsage
 * 
 * @member {real} inclusive 
 * @member {real} exclusive 
 * @member {real} sample_data 
 * @struct_end
 */

/**
 * @struct FmodStudioParameter
 * 
 * @member {real} value 
 * @member {real} final_value 
 * @struct_end
 */

/**
 * @struct FmodStudioParameterId
 * 
 * @member {real} data1 
 * @member {real} data2 
 * @struct_end
 */

/**
 * @struct FmodCommandReplayCurrentCommand
 * 
 * @member {real} command_index 
 * @member {real} command_time 
 * @struct_end
 */

/**
 * @struct FmodCommandReplayCommandInfo
 * 
 * @member {string} command_name 
 * @member {real} parent_command_index 
 * @member {real} frame_time 
 * @member {real} instance_type 
 * @member {real} output_type 
 * @member {real} instance_handle 
 * @member {real} output_handle 
 * @struct_end
 */

/**
 * @struct FmodStudioEventInstanceVolume
 * 
 * @member {real} volume 
 * @member {real} final_volume 
 * @struct_end
 */

/**
 * @struct FmodStudioListenerAttributes
 * 
 * @member {struct.Fmod3DAttributes} attributes 
 * @member {struct.FmodVector} attenuation 
 * @struct_end
 */

/**
 * @struct FmodStudioBufferInfo
 * 
 * @member {real} current_usage 
 * @member {real} peak_usage 
 * @member {real} capacity 
 * @member {real} stall_count 
 * @member {real} stall_time 
 * @struct_end
 */

/**
 * @struct FmodStudioBufferUsage
 * 
 * @member {struct.FmodStudioBufferInfo} command_queue 
 * @member {struct.FmodStudioBufferInfo} handle 
 * @struct_end
 */

/**
 * @struct FmodStudioCPUUsage
 * 
 * @member {struct.FmodCPUUsage} core The CPU usage of FMOD Core
 * @member {struct} studio The CPU usage of FMOD Studio
 * @struct_end
 */

/**
 * @struct FmodStudioSoundInfo
 * 
 * @member {struct.FmodSystemCreateSoundExInfo} ext_info 
 * @member {string} name_or_data 
 * @member {real} mode 
 * @member {real} sub_sound_index 
 * @struct_end
 */

/**
 * @struct FmodStudioStringInfo
 * 
 * @member {string} path 
 * @member {string} guid 
 * @struct_end
 */

/**
 * @struct FmodStudioParameterDescription
 * 
 * @member {string} name 
 * @member {struct.FmodStudioParameterId} parameter_id 
 * @member {real} minimum 
 * @member {real} maximum 
 * @member {real} default_value 
 * @member {real} type 
 * @member {real} flags 
 * @member {real} guid 
 * @struct_end
 */


/**
 * @module structs
 * @title Structs
 * 
 * @section_struct
 * @ref FmodVector
 * @ref FmodCPUUsage
 * @ref FmodCPUTimeUsage
 * @ref FmodLoopPoints
 * @ref FmodMinMaxDistance
 * @ref FmodReverbProperties
 * @ref Fmod3DConeSettings
 * @ref Fmod3DAttributes
 * @ref FmodMemoryStats
 * @ref FmodSystemCreateSoundExInfo
 * @ref FmodSystemAdvancedSettings
 * @ref FmodSystemSoftwareFormat
 * @ref FmodSystemDSPBufferSize
 * @ref FmodSystemStreamBufferSize
 * @ref FmodSystemSpeakerPosition
 * @ref FmodSystemChannelsPlaying
 * @ref FmodSystemFileUsage
 * @ref FmodSystemRecordNumDrivers
 * @ref FmodSystemRecordDriverInfo
 * @ref FmodSystemGeometryOcclusion
 * @ref FmodControl3DAttributes
 * @ref FmodControl3DDistanceFilter
 * @ref FmodControl3DMinMaxDistance
 * @ref FmodControl3DOcclusion
 * @ref FmodControlDSPClock
 * @ref FmodControlDelay
 * @ref FmodControlFadePoints
 * @ref FmodDSPConnectionData
 * @ref FmodDSPChannelFormat
 * @ref FmodDSPMeteringInfo
 * @ref FmodDSPInOutMeteringInfo
 * @ref FmodDSPMeteringEnableInfo
 * @ref FmodDSPInfo
 * @ref FmodGeometryPolygonAttributes
 * @ref FmodGeometryRotation
 * @ref FmodReverb3DAttributes
 * @ref FmodSoundFormat
 * @ref FmodSoundNumTags
 * @ref FmodSoundTag
 * @ref FmodSoundDefaults
 * @ref FmodSoundOpenState
 * @ref FmodSoundLockChunck
 * @ref FmodSoundLock
 * @ref FmodSyncPoint
 * @ref FmodStudioMemoryUsage
 * @ref FmodStudioParameter
 * @ref FmodStudioParameterId
 * @ref FmodCommandReplayCurrentCommand
 * @ref FmodCommandReplayCommandInfo
 * @ref FmodStudioEventInstanceVolume
 * @ref FmodStudioListenerAttributes
 * @ref FmodStudioBufferInfo
 * @ref FmodStudioBufferUsage
 * @ref FmodStudioCPUUsage
 * @ref FmodStudioSoundInfo
 * @ref FmodStudioStringInfo
 * @ref FmodStudioParameterDescription
 * @section_end
 * @module_end
 */
