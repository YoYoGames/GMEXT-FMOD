// Structs

/**
 * @struct FmodVector
 * 
 * @member {real} x = 0
 * @member {real} y = 0
 * @member {real} z = 0
 * @struct_end
 */

/**
 * @struct FmodCPUUsage
 * 
 * @member {real} dsp = 0
 * @member {real} stream = 0
 * @member {real} geometry = 0
 * @member {real} update = 0
 * @member {real} convolution1 = 0
 * @member {real} convolution2 = 0
 * @struct_end
 */

/**
 * @struct FmodCPUTimeUsage
 * 
 * @member {real} inclusive = 0
 * @member {real} exclusive = 0
 * @struct_end
 */

/**
 * @struct FmodLoopPoints
 * 
 * @member {real} loop_start = 0
 * @member {real} loop_end = 0
 * @struct_end
 */

/**
 * @struct FmodMinMaxDistance
 * 
 * @member {real} min_distance = 0
 * @member {real} max_distance = 0
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
 * @member {real} inside_cone_angle = 0
 * @member {real} outside_cone_angle = 0
 * @member {real} outside_volume = 0
 * @struct_end
 */

/**
 * @struct Fmod3DAttributes
 * 
 * @member {struct.FmodVector} position = new FmodVector()
 * @member {struct.FmodVector} velocity = new FmodVector()
 * @member {struct.FmodVector} forward = new FmodVector()
 * @member {struct.FmodVector} up = new FmodVector()
 * @struct_end
 */

/**
 * @struct FmodMemoryStats
 * 
 * @member {real} current_alloced = 0
 * @member {real} max_alloced = 0
 * @struct_end
 */

/**
 * @struct FmodSystemCreateSoundExInfo
 * 
 * @member {real} length = 0
 * @member {real} file_offset = 0
 * @member {real} num_channels = 0
 * @member {real} default_frequency = 0
 * @member {real} format = 0
 * @member {real} decode_buffer_size = 0
 * @member {real} initial_subsound = 0
 * @member {real} num_subsounds = 0
 * @member {real} inclusion_list_num = 0
 * @member {pointer} dls_name = pointer_null
 * @member {pointer} encryption_key = pointer_null
 * @member {real} max_polyphony = 64
 * @member {real} suggested_sound_type = 0
 * @member {real} file_buffer_size = 0
 * @member {real} channel_order = 0
 * @member {real} initial_seek_position = 0
 * @member {real} initial_seek_pos_type = 0
 * @member {real} ignore_set_filesystem = 0
 * @member {real} audio_queue_policy = 0
 * @member {real} min_midi_granularity = 512
 * @member {real} non_block_thread_id = 0
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
 * @member {real} sample_rate = 0
 * @member {real} speaker_mode = 0
 * @member {real} num_raw_speakers = 0
 * @struct_end
 */

/**
 * @struct FmodSystemDSPBufferSize
 * 
 * @member {real} buff_size = 0
 * @member {real} num_buffers = 0
 * @struct_end
 */

/**
 * @struct FmodSystemStreamBufferSize
 * 
 * @member {real} file_buffer_size = 0
 * @member {real} file_buffer_size_type = 0
 * @struct_end
 */

/**
 * @struct FmodSystemSpeakerPosition
 * 
 * @member {real} x = 0
 * @member {real} y = 0
 * @member {real} active = false
 * @struct_end
 */

/**
 * @struct FmodSystemChannelsPlaying
 * 
 * @member {real} doppler_scale = 0
 * @member {real} distance_factor = 0
 * @member {real} rolloff_scale = 0
 * @struct_end
 */

/**
 * @struct FmodSystemFileUsage
 * 
 * @member {real} sample_bytes_read = 0
 * @member {real} stream_bytes_read = 0
 * @member {real} other_bytes_read = 0
 * @struct_end
 */

/**
 * @struct FmodSystemRecordNumDrivers
 * 
 * @member {real} num_drivers = 0
 * @member {real} num_connected = 0
 * @struct_end
 */

/**
 * @struct FmodSystemRecordDriverInfo
 * 
 * @member {string} name = ""
 * @member {string} guid = ""
 * @member {real} system_rate = 0
 * @member {real} speaker_mode = 0
 * @member {real} speaker_mode_channels = 0
 * @member {real} state = 0
 * @struct_end
 */

/**
 * @struct FmodSystemGeometryOcclusion
 * 
 * @member {real} direct = 0
 * @member {real} reverb = 0
 * @member {struct.FmodVector} listener = new FmodVector()
 * @member {struct.FmodVector} source = new FmodVector()
 * @struct_end
 */

/**
 * @struct FmodControl3DAttributes
 * 
 * @member {struct.FmodVector} pos = new FmodVector()
 * @member {struct.FmodVector} vel = new FmodVector()
 * @struct_end
 */

/**
 * @struct FmodControl3DDistanceFilter
 * 
 * @member {boolean} custom = false
 * @member {real} custom_level = 0
 * @member {real} center_freq = 0
 * @struct_end
 */

/**
 * @struct FmodControl3DMinMaxDistance
 * 
 * @member {real} min_dist = 0
 * @member {real} max_dist = 0
 * @struct_end
 */

/**
 * @struct FmodControl3DOcclusion
 * 
 * @member {real} direct = 0
 * @member {real} reverb = 0
 * @struct_end
 */

/**
 * @struct FmodControlDSPClock
 * 
 * @member {real} dsp_clock = 0
 * @member {real} parent_clock = 0
 * @struct_end
 */

/**
 * @struct FmodControlDelay
 * 
 * @member {real} dsp_clock_start = 0
 * @member {real} dsp_clock_end = 0
 * @member {boolean} stop_channels = false
 * @struct_end
 */

/**
 * @struct FmodControlFadePoints
 * 
 * @member {real} num_points = 0
 * @member {array} point_dsp_clock = []
 * @member {array} point_volume = []
 * @struct_end
 */

/**
 * @struct FmodDSPConnectionData
 * 
 * @member {real} dsp_ref = 0
 * @member {real} dsp_connection_ref = 0
 * @struct_end
 */

/**
 * @struct FmodDSPChannelFormat
 * 
 * @member {real} channel_mask = 0
 * @member {real} num_channels = 0
 * @member {real} speaker_mode = 0
 * @struct_end
 */

/**
 * @struct FmodDSPMeteringInfo
 * 
 * @member {real} num_samples = 0
 * @member {array} peak_level = []
 * @member {array} rms_level = []
 * @member {real} num_channels = 0
 * @struct_end
 */

/**
 * @struct FmodDSPInOutMeteringInfo
 * 
 * @member {struct.FmodDSPMeteringInfo} in = new FmodDSPMeteringInfo()
 * @member {struct.FmodDSPMeteringInfo} out = new FmodDSPMeteringInfo()
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
 * @member {string} name = ""
 * @member {real} version = 0
 * @member {real} channels = 0
 * @member {real} config_width = 0
 * @member {real} config_height = 0
 * @struct_end
 */

/**
 * @struct FmodGeometryPolygonAttributes
 * 
 * @member {real} direct_occlusion = 0
 * @member {real} reverb_occlusion = 0
 * @member {boolean} double_sided = false
 * @struct_end
 */

/**
 * @struct FmodGeometryRotation
 * 
 * @member {struct.FmodVector} forward = new FmodVector()
 * @member {struct.FmodVector} up = new FmodVector()
 * @struct_end
 */

/**
 * @struct FmodReverb3DAttributes() : FmodMinMaxDistance
 * @member {struct.FmodVector} position = new FmodVector()
 * @struct_end
 */

/**
 * @struct FmodSoundFormat
 * 
 * @member {constant.FMOD_SOUND_TYPE} type = FMOD_SOUND_TYPE.UNKNOWN
 * @member {constant.FMOD_SOUND_FORMAT} format = FMOD_SOUND_FORMAT.NONE
 * @member {real} channels = 0
 * @member {real} bits = 0
 * @struct_end
 */

/**
 * @struct FmodSoundNumTags
 * 
 * @member {real} num_tags = 0
 * @member {real} num_tags_updated = 0
 * @struct_end
 */

/**
 * @struct FmodSoundTag
 * 
 * @member {string} name = ""
 * @member {real} type = 0
 * @member {real} update = 0
 * @member {real} data_len = 0
 * @member {real} data_type = 0
 * @struct_end
 */

/**
 * @struct FmodSoundDefaults
 * 
 * @member {real} frequency = 0
 * @member {real} priority = 0
 * @struct_end
 */

/**
 * @struct FmodSoundOpenState
 * 
 * @member {real} open_state = 0
 * @member {real} percent_buffered = 0
 * @member {boolean} starving = false
 * @member {boolean} disk_busy = false
 * @struct_end
 */

/**
 * @struct FmodSoundLockChunck
 * 
 * @member {real} length = 0
 * @member {pointer} patch_address = pointer_null
 * @struct_end
 */

/**
 * @struct FmodSoundLock
 * 
 * @member {struct.FmodSoundLockChunck} buffer1 = new FmodSoundLockChunck()
 * @member {struct.FmodSoundLockChunck} buffer2 = new FmodSoundLockChunck()
 * @struct_end
 */

/**
 * @struct FmodSyncPoint
 * 
 * @member {string} name = ""
 * @member {real} offset = 0
 * @struct_end
 */

/**
 * @struct FmodStudioMemoryUsage
 * 
 * @member {real} inclusive = 0
 * @member {real} exclusive = 0
 * @member {real} sample_data = 0
 * @struct_end
 */

/**
 * @struct FmodStudioParameter
 * 
 * @member {real} value = 0
 * @member {real} final_value = 0
 * @struct_end
 */

/**
 * @struct FmodStudioParameterId
 * 
 * @member {real} data1 = 0
 * @member {real} data2 = 0
 * @struct_end
 */

/**
 * @struct FmodCommandReplayCurrentCommand
 * 
 * @member {real} command_index = 0
 * @member {real} command_time = 0
 * @struct_end
 */

/**
 * @struct FmodCommandReplayCommandInfo
 * 
 * @member {string} command_name = ""
 * @member {real} parent_command_index = 0
 * @member {real} frame_time = 0
 * @member {real} instance_type = 0
 * @member {real} output_type = 0
 * @member {real} instance_handle = 0
 * @member {real} output_handle = 0
 * @struct_end
 */

/**
 * @struct FmodStudioEventInstanceVolume
 * 
 * @member {real} volume = 0
 * @member {real} final_volume = 0
 * @struct_end
 */

/**
 * @struct FmodStudioListenerAttributes
 * 
 * @member {struct.Fmod3DAttributes} attributes = new Fmod3DAttributes()
 * @member {struct.FmodVector} attenuation = new FmodVector()
 * @struct_end
 */

/**
 * @struct FmodStudioBufferInfo
 * 
 * @member {real} current_usage = 0
 * @member {real} peak_usage = 0
 * @member {real} capacity = 0
 * @member {real} stall_count = 0
 * @member {real} stall_time = 0
 * @struct_end
 */

/**
 * @struct FmodStudioBufferUsage
 * 
 * @member {struct.FmodStudioBufferInfo} command_queue = FmodStudioBufferInfo()
 * @member {struct.FmodStudioBufferInfo} // handle = new FmodStudioBufferInfo()
 * @struct_end
 */

/**
 * @struct FmodStudioCPUUsage
 * 
 * @member {struct.FmodCPUUsage} core = new FmodCPUUsage()
 * @member {struct} studio = { update: 0 }
 * @struct_end
 */

/**
 * @struct FmodStudioSoundInfo
 * 
 * @member {struct.FmodSystemCreateSoundExInfo} ext_info = new FmodSystemCreateSoundExInfo()
 * @member {string} name_or_data = ""
 * @member {real} mode = 0
 * @member {real} sub_sound_index = 0
 * @struct_end
 */

/**
 * @struct FmodStudioStringInfo
 * 
 * @member {string} path = ""
 * @member {string} guid = ""
 * @struct_end
 */

/**
 * @struct FmodStudioParameterDescription
 * 
 * @member {string} name = ""
 * @member {struct.FmodStudioParameterId} parameter_id = new FmodStudioParameterId()
 * @member {real} minimum = 0
 * @member {real} maximum = 0
 * @member {real} default_value = 0
 * @member {real} type = 0
 * @member {real} flags = 0
 * @member {real} guid = 0
 * @struct_end
 */


/**
 * @module structs
 * @title Structs
 * 
 * @section_struct
 * @member FmodVector
 * @member FmodCPUUsage
 * @member FmodCPUTimeUsage
 * @member FmodLoopPoints
 * @member FmodMinMaxDistance
 * @member FmodReverbProperties
 * @member Fmod3DConeSettings
 * @member Fmod3DAttributes
 * @member FmodMemoryStats
 * @member FmodSystemCreateSoundExInfo
 * @member FmodSystemAdvancedSettings
 * @member FmodSystemSoftwareFormat
 * @member FmodSystemDSPBufferSize
 * @member FmodSystemStreamBufferSize
 * @member FmodSystemSpeakerPosition
 * @member FmodSystemChannelsPlaying
 * @member FmodSystemFileUsage
 * @member FmodSystemRecordNumDrivers
 * @member FmodSystemRecordDriverInfo
 * @member FmodSystemGeometryOcclusion
 * @member FmodControl3DAttributes
 * @member FmodControl3DDistanceFilter
 * @member FmodControl3DMinMaxDistance
 * @member FmodControl3DOcclusion
 * @member FmodControlDSPClock
 * @member FmodControlDelay
 * @member FmodControlFadePoints
 * @member FmodDSPConnectionData
 * @member FmodDSPChannelFormat
 * @member FmodDSPMeteringInfo
 * @member FmodDSPInOutMeteringInfo
 * @member FmodDSPMeteringEnableInfo
 * @member FmodDSPInfo
 * @member FmodGeometryPolygonAttributes
 * @member FmodGeometryRotation
 * @member FmodReverb3DAttributes
 * @member FmodSoundFormat
 * @member FmodSoundNumTags
 * @member FmodSoundTag
 * @member FmodSoundDefaults
 * @member FmodSoundOpenState
 * @member FmodSoundLockChunck
 * @member FmodSoundLock
 * @member FmodSyncPoint
 * @member FmodStudioMemoryUsage
 * @member FmodStudioParameter
 * @member FmodStudioParameterId
 * @member FmodCommandReplayCurrentCommand
 * @member FmodCommandReplayCommandInfo
 * @member FmodStudioEventInstanceVolume
 * @member FmodStudioListenerAttributes
 * @member FmodStudioBufferInfo
 * @member FmodStudioBufferUsage
 * @member FmodStudioCPUUsage
 * @member FmodStudioSoundInfo
 * @member FmodStudioStringInfo
 * @member FmodStudioParameterDescription
 * @section_end
 * @module_end
 */
