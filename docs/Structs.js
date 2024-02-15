// Structs

/**
 * @struct FmodVector
 * @desc > **FMOD Struct:** [FMOD_VECTOR](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_vector)
 * 
 * This struct describes a vector in 3D space.
 * 
 * [[Important: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.02/api/glossary.html#handedness).]]
 * 
 * @member {real} x The x coordinate of the 3D vector.
 * @member {real} y The y coordinate of the 3D vector.
 * @member {real} z The z coordinate of the 3D vector.
 * @struct_end
 */

/**
 * @struct FmodCPUUsage
 * @desc > **FMOD Struct:** [FMOD_CPU_USAGE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_cpu_usage)
 * 
 * This struct stores performance information for FMOD's Core API functionality.
 * 
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
 * @desc This struct stores information about CPU time spent.
 * @member {real} inclusive The CPU time spent processing just this unit during the last mixer update. Expressed in microseconds.
 * @member {real} exclusive The CPU time spent processing this unit and all of its input during the last mixer update. Expressed in microseconds.
 * @struct_end
 */

/**
 * @struct FmodLoopPoints
 * @desc This struct stores a loop start and end point.
 * @member {real} loop_start The loop start point. A value in the range [0, {function.fmod_sound_get_length} - 1].
 * @member {real} loop_end The loop end point. A value in the range [0, {function.fmod_sound_get_length} - 1].
 * @struct_end
 */

/**
 * @struct FmodMinMaxDistance
 * @desc This struct stores a minimum and maximum volume distance.
 * @member {real} min_distance The minimum volume distance for the sound.
 * @member {real} max_distance The maximum volume distance for the sound.
 * @struct_end
 */

/**
 * @struct FmodReverbProperties
 * @desc > **FMOD Struct:** [FMOD_REVERB_PROPERTIES](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_reverb_properties)
 * 
 * This struct defines a reverb environment.
 * 
 * [[Note: Several presets for these properties are defined as [macros](manual.gamemaker.io/monthly/en/GameMaker_Language/GML_Overview/Variables/Constants.htm#macros) in GameMaker, which you can find under ${constant.FMOD_REVERB_PRESETS}.]]
 * 
 * [[Note: the default reverb properties are the same as the `FMOD_PRESET_GENERIC` preset.]]
 * 
 * @member {real} decay_time The reverberation decay time, in milliseconds. A value in the range [0, 20000].
 * @member {real} early_delay The initial reflection delay time, in milliseconds. A value in the range [0, 300].
 * @member {real} late_delay The late reverberation delay time relative to initial reflection, in milliseconds. A value in the range [0, 100].
 * @member {real} hf_reference The reference high frequency, in Hertz. A value in the range [20, 20000].
 * @member {real} hf_decay_ratio The high-frequency to mid-frequency decay time ratio, in percent. A value in the range [10, 100].Value that controls the modal density in the late reverberation decay.
 * @member {real} diffusion A (percent) value that controls the echo density in the late reverberation decay. A value in the range [10, 100].
 * @member {real} density A (percent) value that controls the modal density in the late reverberation decay. A value in the range [0, 100].
 * @member {real} low_shelf_frequency The reference low frequency, in Hertz. A value in the range [20, 1000].
 * @member {real} low_shelf_gain The relative room effect level at low frequencies, in decibels (dB). A value in the range [-36, 12].
 * @member {real} high_cut The relative room effect level at high frequencies, in Hertz. A value in the range [0, 20000].
 * @member {real} early_late_mix The early reflections level relative to room effect, as a percentage. A value in the range [0, 100].
 * @member {real} wet_level The room effect level at mid frequencies, in decibels (dB). A value in the range [-80, 20].
 * @struct_end
 */

/**
 * @struct Fmod3DConeSettings
 * @desc This struct stores the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * @member {real} inside_cone_angle The inside cone angle, in degrees. This is the angle spread within which the sound is unattenuated. Default is 360.
 * @member {real} outside_cone_angle The outside cone angle, in degrees. This is the angle spread outside of which the sound is attenuated to its `outsidevolume`. Default is 360.
 * @member {real} outside_volume The cone outside volume. A value in the range [0, 1]. Default is 1.
 * @struct_end
 */

/**
 * @struct Fmod3DAttributes
 * @desc > **FMOD Struct:** [FMOD_3D_ATTRIBUTES](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_3d_attributes)
 * 
 * This structure describes a position, velocity and orientation.
 * 
 * [[Important: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.02/api/glossary.html#handedness).]]
 * 
 * @member {struct.FmodVector} position The position in 3D space used for panning and attenuation.
 * @member {struct.FmodVector} velocity The velocity in 3D space used for doppler.
 * @member {struct.FmodVector} forward The "forward" vector as the first vector that defines orientation in 3D space. Must be of unit length (1.0) and perpendicular to `up`.
 * @member {struct.FmodVector} up The "up" vector as the second vector that defines orientation in 3D space. Must be of unit length (1.0) and perpendicular to `forward`.
 * @struct_end
 */

/**
 * @struct FmodMemoryStats
 * @desc This struct stores on the memory usage of FMOD.
 * @member {real} current_alloced The currently allocated memory at the time of the call.
 * @member {real} max_alloced The maximum allocated memory since ${func.fmod_system_init} or Memory_Initialize.
 * @struct_end
 */

/**
 * @struct FmodSystemCreateSoundExInfo
 * @desc > **FMOD Struct:** [FMOD_CREATESOUNDEXINFO](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_createsoundexinfo)
 * 
 * This struct holds additional options for creating a Sound.
 * 
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
 * @desc > **FMOD Struct:** [FMOD_ADVANCEDSETTINGS](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_advancedsettings)
 * 
 * This struct stores advanced configuration settings.
 * 
 * This is a structure to allow configuration of lesser used system level settings. These tweaks generally allow the user to set resource limits and customize settings to better fit their application.
 * 
 * Specifying one of the codec maximums will help determine the maximum CPU usage of playing `FMOD_MODE.CREATECOMPRESSEDSAMPLE` Sounds of that type as well as the memory requirements. Memory will be allocated for 'up front' (during ${func.fmod_system_init}) if these values are specified as non zero. If any are zero, it allocates memory for the codec whenever a file of the type in question is loaded. So if `maxMPEGCodecs` is 0 for example, it will allocate memory for the MPEG codecs the first time an MP3 is loaded or an MP3 based .FSB file is loaded.
 * 
 * Setting `dsp_buffer_pool_size` will pre-allocate memory for the FMOD DSP network. See [DSP architecture guide](https://www.fmod.com/docs/2.02/api/white-papers-dsp-architecture.html). By default 8 buffers are created up front. A large network might require more if the aim is to avoid real-time allocations from the FMOD mixer thread.
 * 
 * @member {real} max_mpeg_codecs The maximum number of MPEG Sounds created as `FMOD_MODE.CREATECOMPRESSEDSAMPLE`. A value in the range [0, 256].
 * @member {real} max_adpcm_codecs The maximum number of IMA-ADPCM Sounds created as `FMOD_MODE.CREATECOMPRESSEDSAMPLE`. A value in the range [0, 256].
 * @member {real} max_xma_codecs The maximum number of XMA Sounds created as `FMOD_MODE.CREATECOMPRESSEDSAMPLE`. A value in the range [0, 256].
 * @member {real} max_vorbis_codecs The maximum number of Vorbis Sounds created as `FMOD_MODE.CREATECOMPRESSEDSAMPLE`. A value in the range [0, 256].
 * @member {real} max_at9_codecs The maximum number of AT9 Sounds created as `FMOD_MODE.CREATECOMPRESSEDSAMPLE`. A value in the range [0, 256].
 * @member {real} max_fadpcm_codecs The maximum number of FADPCM Sounds created as `FMOD_MODE.CREATECOMPRESSEDSAMPLE`. A value in the range [0, 256].
 * @member {real} max_pcm_codecs Deprecated.
 * @member {real} asio_num_channels The number of elements in the `ASIOSpeakerList` on input, the number of elements in `ASIOChannelList` on output. A value in the range [0, ${constant.FMOD_MAX_CHANNEL_WIDTH}].
 * @member {real} vol0_virtual_vol For use with `FMOD_INIT.VOL0_BECOMES_VIRTUAL`, Channels with audibility below this will become virtual. See the [Virtual Voices](https://www.fmod.com/docs/2.02/api/white-papers-virtual-voices.html) guide for more information.
 * @member {real} default_decode_buffer_size For use with Streams, the default size of the double buffer. A value in the range [0, 30000].
 * @member {real} profile_port For use with `FMOD_INIT.PROFILE_ENABLE`, specify the port to listen on for connections by FMOD Studio or FMOD Profiler.
 * @member {real} geometry_max_fade_time For use with [Geometry](https://www.fmod.com/docs/2.02/api/core-api-geometry.html), the maximum time it takes for a [Channel](https://www.fmod.com/docs/2.02/api/core-api-channel.html) to fade to the new volume level when its occlusion changes.
 * @member {real} distance_filter_center_freq For use with `FMOD_INIT.CHANNEL_DISTANCEFILTER`, the default center frequency for the distance filtering effect. A value in the range [10, 22050].
 * @member {real} reverb_3d_instance For use with [Reverb3D](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html), selects which global reverb instance to use. A value in the range [0, ${constant.FMOD_REVERB_MAXINSTANCES}].
 * @member {real} dsp_buffer_pool_size The number of intermediate mixing buffers in the 'DSP buffer pool'. Each buffer in bytes will be `bufferlength` (See ${function.fmod_system_get_dsp_buffer_size}) * sizeof(float) * output mode speaker count (See [FMOD_SPEAKERMODE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_speakermode)). ie 7.1 @ 1024 DSP block size = 1024 * 4 * 8 = 32KB.
 * @member {constant.FMOD_DSP_RESAMPLER} resampler_method The resampling method used by [Channels](https://www.fmod.com/docs/2.02/api/core-api-channel.html).
 * @member {real} random_seed The seed value to initialize the internal random number generator.
 * @member {real} max_convolution_threads The maximum number of CPU threads to use for `FMOD_DSP_TYPE.CONVOLUTIONREVERB` effect. 1 = effect is entirely processed inside the `FMOD_THREAD_TYPE.MIXER` thread. 2 and 3 offloads different parts of the convolution processing into different threads (`FMOD_THREAD_TYPE.CONVOLUTION1` and `FMOD_THREAD_TYPE.CONVOLUTION2` to increase throughput. A value in the range [0, 3].
 * @member {real} max_opus_codecs The maximum number of Opus Sounds created as `FMOD_MODE.CREATECOMPRESSEDSAMPLE`. A value in the range [0, 256].
 * @struct_end
 */

/**
 * @struct FmodSystemSoftwareFormat
 * @desc This struct stores the output format for the software mixer.
 * @member {real} sample_rate The sample rate of the mixer.
 * @member {constant.FMOD_SPEAKERMODE} speaker_mode The speaker setup of the mixer.
 * @member {real} num_raw_speakers The number of speakers for `FMOD_SPEAKERMODE.RAW` mode.
 * @struct_end
 */

/**
 * @struct FmodSystemDSPBufferSize
 * @desc This struct stores the buffer size settings for the FMOD software mixing engine.
 * @member {real} buff_size The mixer engine block size, in samples. The default value is 1024.
 * @member {real} num_buffers The number of buffers used by the mixer engine. The default value is 4.
 * @struct_end
 */

/**
 * @struct FmodSystemStreamBufferSize
 * @desc This struct stores the default file buffer size for newly opened streams.
 * @member {real} file_buffer_size The buffer size.
 * @member {FMOD_TIMEUNIT} file_buffer_size_type The type of units for `file_buffer_size`. The default is `FMOD_TIMEUNIT.RAWBYTES`.
 * @struct_end
 */

/**
 * @struct FmodSystemSpeakerPosition
 * @desc This struct stores the position of a speaker and its active state.
 * @member {real} x The speaker's 2D X position relative to the listener. -1 = left, 0 = middle, +1 = right.
 * @member {real} y The speaker's 2D Y position relative to the listener. -1 = back, 0 = middle, +1 = front.
 * @member {boolean} active The active state of the speaker. True = included in 3D calculations, False = ignored.
 * @struct_end
 */

/**
 * @struct FmodSystemChannelsPlaying
 * @desc This struct holds information on the number of playing [Channels](https://www.fmod.com/docs/2.02/api/core-api-channel.html).
 * 
 * For differences between real and virtual voices see the [Virtual Voices](https://www.fmod.com/docs/2.02/api/white-papers-virtual-voices.html) guide for more information.
 * 
 * @member {real} channels The number of playing Channels (both real and virtual).
 * @member {real} real_channels The number of playing real (non-virtual) Channels.
 * @struct_end
 */

/**
 * @struct FmodSystemFileUsage
 * @desc This struct holds information about file reads.
 * 
 * @member {real} sample_bytes_read Total bytes read from file for loading sample data.
 * @member {real} stream_bytes_read Total bytes read from file for streaming sounds.
 * @member {real} other_bytes_read Total bytes read for non-audio data such as FMOD Studio banks.
 * @struct_end
 */

/**
 * @struct FmodSystemRecordNumDrivers
 * @desc This struct holds the number of recording devices available in a certain output mode.
 * @member {real} num_drivers The number of recording drivers available for this output mode.
 * @member {real} num_connected The number of recording drivers currently plugged in.
 * @struct_end
 */

/**
 * @struct FmodSystemRecordDriverInfo
 * @desc This struct holds identification information about an audio device, specific to an output mode.
 * @member {string} name The name of the device.
 * @member {string} guid A GUID that uniquely identifies the device.
 * @member {real} system_rate The sample rate the device operates at.
 * @member {constant.FMOD_SPEAKERMODE} speaker_mode The speaker configuration the device is currently using.
 * @member {real} speaker_mode_channels The number of channels in the current speaker setup.
 * @member {constant.FMOD_DRIVER_STATE} state Flags that provide additional information about the driver.
 * @struct_end
 */

/**
 * @struct FmodSystemGeometryOcclusion
 * @desc This struct stores geometry occlusion values between a listener and a sound source.
 * @member {real} direct The direct occlusion value. 0 = not occluded at all / full volume, 1 = fully occluded / silent.
 * @member {real} reverb The reverb occlusion value. 0 = not occluded at all / wet, 1 = fully occluded / dry.
 * @member {struct.FmodVector} listener The listener position.
 * @member {struct.FmodVector} source The source position.
 * @struct_end
 */

/**
 * @struct FmodControl3DAttributes
 * @desc This struct stores the 3D position and velocity used to apply panning, attenuation and doppler.
 * 
 * @member {struct.FmodVector} pos The position in 3D space used for panning and attenuation. Expressed in [Distance units](https://www.fmod.com/docs/2.02/api/glossary.html#distance-units).
 * @member {struct.FmodVector} vel The velocity in 3D space used for doppler. Expressed in [Distance units](https://www.fmod.com/docs/2.02/api/glossary.html#distance-units) per second.
 * @struct_end
 */

/**
 * @struct FmodControl3DDistanceFilter
 * @desc This struct holds override values for the 3D distance filter.
 * @member {boolean} custom Whether to override automatic distance filtering and use `customLevel` instead.
 * @member {real} custom_level The attenuation factor where 1 represents no attenuation and 0 represents complete attenuation.
 * @member {real} center_freq The center frequency of the band-pass filter used to simulate distance attenuation. A value in the range [10, 22050]. 0 for default of `FmodSystemAdvancedSettings.distance_filter_center_freq`.
 * @struct_end
 */

/**
 * @struct FmodControl3DMinMaxDistance
 * @desc This struct holds the minimum and maximum distances used to calculate the 3D roll-off attenuation.
 * @member {real} min_dist The distance from the source where attenuation begins, expressed in [Distance units](https://www.fmod.com/docs/2.02/api/glossary.html#distance-units). A value in the range [0, `infinity`]. Default is 1.
 * @member {real} max_dist The distance from the source where attenuation ends, expressed in [Distance units](https://www.fmod.com/docs/2.02/api/glossary.html#distance-units). A value in the range [`min`, `infinity`]. Default is 1.
 * @struct_end
 */

/**
 * @struct FmodControl3DOcclusion
 * @desc This struct stores 3D attenuation factors for the direct and reverb paths.
 * @member {real} direct The occlusion factor for the direct path where 0 represents no occlusion and 1 represents full occlusion. Default is 0.
 * @member {real} reverb The occlusion factor for the reverb path where 0 represents no occlusion and 1 represents full occlusion. Default is 0.
 * @struct_end
 */

/**
 * @struct FmodControlMixMatrix
 * @desc This struct stores a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * 
 * [[Note: Matrix element values can be below 0 to invert a signal and above 1 to amplify the signal. Note that increasing the signal level too far may cause audible distortion.]]
 * 
 * @member matrix A two-dimensional array of volume levels in row-major order. Each row represents an output speaker, each column represents an input channel.
 * @member out_channels The number of valid output channels (rows) in `matrix`. A value in the range [0, ${constant.FMOD_MAX_CHANNEL_WIDTH}].
 * @member in_channels Number of valid input channels (columns) in `matrix`. A value in the range [0, ${constant.FMOD_MAX_CHANNEL_WIDTH}].
 * @struct_end
 */

/**
 * @struct FmodControlDSPClock
 * @desc This struct holds the [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) clock values at a point in time.
 * @member {real} dsp_clock The DSP clock value for the tail DSP (`FMOD_CHANNELCONTROL_DSP_TAIL`) node. Expressed in samples.
 * @member {real} parent_clock DSP clock value for the tail DSP (`FMOD_CHANNELCONTROL_DSP_TAIL`) node of the parent ChannelGroup. Expressed in samples.
 * @struct_end
 */

/**
 * @struct FmodControlDelay
 * @desc This struct holds a sample accurate start (and/or stop) time relative to the parent ChannelGroup DSP clock.
 * @member {real} dsp_clock_start [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) clock of the parent [ChannelGroup](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html) to audibly start playing sound at, expressed in samples.
 * @member {real} dsp_clock_end DSP clock of the parent ChannelGroup to audibly stop playing sound at, expressed in samples.
 * @member {boolean} stop_channels True: When `dspclock_end` is reached, behaves like ${function.fmod_channel_control_stop} has been called.
False: When `dspclock_end` is reached, behaves like ${function.fmod_channel_control_set_paused} has been called, a subsequent `dspclock_start` allows it to resume.
 * @struct_end
 */

/**
 * @struct FmodControlFadePoints
 * @desc This struct holds information about stored fade points.
 * @member {real} num_points The number of fade points.
 * @member {array} point_dsp_clock An array of [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) clock values that represent the fade point times. Expressed in samples.
 * @member {array} point_volume An array of volume levels that represent the fade point values.
 * @struct_end
 */

/**
 * @struct FmodDSPConnectionData
 * @desc This struct holds the DSP unit at a specified index in a DSP's input list and the DSPConnection to it.
 * @member {real} dsp_ref The DSP unit at a specific index in a DSP's input list.
 * @member {real} dsp_connection_ref The [DSPConnection](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html) through which the two are connected.
 * @struct_end
 */

/**
 * @struct FmodDSPChannelFormat
 * @desc This struct holds the PCM input format a DSP will receive when processing.
 * @member {real} channel_mask Deprecated.
 * @member {constant.FMOD_CHANNELMASK} num_channels The number of channels to be processed.
 * @member {constant.FMOD_SPEAKERMODE} speaker_mode The speaker mode to describe the channel mapping.
 * @struct_end
 */

/**
 * @struct FmodDSPMeteringInfo
 * @desc > **FMOD Struct:** [FMOD_DSP_METERING_INFO](https://www.fmod.com/docs/2.02/api/plugin-api-dsp.html#fmod_dsp_metering_info)
 * 
 * This struct stores DSP metering information.
 * 
 * @member {real} num_samples The number of samples considered for this metering info.
 * @member {array} peak_level The peak level per channel.
 * @member {array} rms_level The RMS level per channel.
 * @member {real} num_channels The number of channels.
 * @struct_end
 */

/**
 * @struct FmodDSPInOutMeteringInfo
 * @desc This struct stores input and output signal metering information.
 * @member {struct.FmodDSPMeteringInfo} in Input metering information before the DSP has processed.
 * @member {struct.FmodDSPMeteringInfo} out Output metering information after the DSP has processed.
 * @struct_end
 */

/**
 * @struct FmodDSPMeteringEnableInfo
 * @desc This struct holds information on whether input/output signal metering is enabled for a given [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html).
 * @member {boolean} enabled_in Whether metering is enabled for the input signal.
 * @member {boolean} enabled_out Whether metering is enabled for the output signal.
 * @struct_end
 */

/**
 * @struct FmodDSPInfo
 * @desc This struct stores information about a DSP unit.
 * @member {string} name The name of this unit will be written (null terminated) to the provided 32 byte buffer.
 * @member {real} version The version number of this unit, usually formated as hex AAAABBBB where the AAAA is the major version number and the BBBB is the minor version number.
 * @member {real} channels The number of channels this unit processes where 0 represents "any".
 * @member {real} config_width The configuration dialog box width where 0 represents "no dialog box".
 * @member {real} config_height The configuration dialog box height where 0 represents "no dialog box".
 * @struct_end
 */

/**
 * @struct FmodGeometryPolygonAttributes
 * @desc This struct stores the attributes for a polygon.
 * @member {real} direct_occlusion The occlusion factor for the direct path where 0 represents no occlusion and 1 represents full occlusion.
 * @member {real} reverb_occlusion The occlusion factor for the reverb path where 0 represents no occlusion and 1 represents full occlusion.
 * @member {boolean} double_sided Whether the polygon is double-sided. True: Polygon is double-sided.
False: Polygon is single-sided, and the winding of the polygon (which determines the polygon's normal) determines which side of the polygon will cause occlusion.
 * @struct_end
 */

/**
 * @struct FmodGeometryRotation
 * @desc This struct stores the 3D orientation of and FMOD object, as a forward and up vector.
 * @member {struct.FmodVector} forward The "forward" vector as the first vector that defines orientation in 3D space. This vector must be of unit length and perpendicular to the up vector.
 * @member {struct.FmodVector} up The "up" vector as the second vector that defines orientation in 3D space.This vector must be of unit length and perpendicular to the forward vector.
 * @struct_end
 */

/**
 * @struct FmodReverb3DAttributes
 * @desc This struct stores the 3D attributes of a reverb sphere.
 * 
 * See the [3D Reverb](https://www.fmod.com/docs/2.02/api/white-papers-3d-reverb.html) guide for more information.
 * 
 * @member {struct.FmodVector} position The position in 3D space representing the center of the reverb.
 * @member {real} min_distance The distance from the centerpoint within which the reverb will have full effect.
 * @member {real} max_distance The distance from the centerpoint beyond which the reverb will have no effect.
 * @struct_end
 */

/**
 * @struct FmodSoundFormat
 * @desc This struct stores format information about a [Sound](https://www.fmod.com/docs/2.02/api/core-api-sound.html).
 * 
 * @member {constant.FMOD_SOUND_TYPE} type The type of sound.
 * @member {constant.FMOD_SOUND_FORMAT} format The format of the sound.
 * @member {real} channels The number of channels.
 * @member {real} bits The number of bits per sample, corresponding to `format`.
 * @struct_end
 */

/**
 * @struct FmodSoundNumTags
 * @desc This struct stores the number of metadata tags of a particular [Sound](https://www.fmod.com/docs/2.02/api/core-api-sound.html).
 * 
 * [[Note: 'Tags' are metadata stored within a sound file. These can be things like a song's name, composer, etc.]]
 * 
 * @member {real} num_tags The number of tags.
 * @member {real} num_tags_updated The number of tags updated since this function was last called.
 * @struct_end
 */

/**
 * @struct FmodSoundTag
 * @desc > **FMOD Struct:** [FMOD_TAG](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_tag)
 * 
 * This struct holds tag data / metadata description.
 * @member {string} name Name.
 * @member {constant.FMOD_TAGTYPE} type Tag type.
 * @member {real} update True if this tag has been updated since last being accessed with ${function.fmod_sound_get_tag}.
 * @member {real} data_len Size of `data`, in bytes.
 * @member {constant.FMOD_TAGDATATYPE} data_type Tag data type.
 * @struct_end
 */

/**
 * @struct FmodSoundDefaults
 * @desc This struct stores a sound's default playback attributes.
 * @member {real} frequency The default playback frequency, in Hertz. Default is 48000.
 * @member {real} priority The default priority where 0 is the highest priority. A value in the range [0, 256]. Default is 128.
 * @struct_end
 */

/**
 * @struct FmodSoundOpenState
 * @desc This struct holds the state a sound is in after being opened with the non blocking flag, or the current state of the streaming buffer.
 * @member {constant.FMOD_OPENSTATE} open_state The open state of a sound.
 * @member {real} percent_buffered The filled percentage of a stream's file buffer.
 * @member {boolean} starving The starving state. `true` if a stream has decoded more than the stream file buffer has ready.
 * @member {boolean} disk_busy The disk is currently being accessed for this sound.
 * @struct_end
 */

/**
 * @struct FmodSoundLockChunck
 * @desc 
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
 * @desc > **FMOD Struct:** [FMOD_SYNCPOINT](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_syncpoint)
 * 
 * This struct stores information about a sync point.
 * 
 * @member {string} name The name of the sync point.
 * @member {real} offset The offset of the sync point (expressed in the units as passed to ${function.fmod_sound_get_sync_point})
 * @struct_end
 */

/**
 * @struct FmodStudioMemoryUsage
 * @desc > **FMOD Struct:** [FMOD_STUDIO_MEMORY_USAGE](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_memory_usage)
 * 
 * This struct stores FMOD Studio memory usage statistics.
 * 
 * [[Note: Memory usage `exclusive` and `inclusive` values do not include sample data loaded in memory because sample data is a shared resource. Streaming sample data is not a shared resource and is included in the `exclusive` and `inclusive` values.]]
 * 
 * @member {real} inclusive The size of memory belonging exclusively to the bus or event plus the inclusive memory sizes of all buses and event instances which route into it.
 * @member {real} exclusive The size of memory belonging to the bus or event instance.
 * @member {real} sample_data The size of shared sample memory referenced by the bus or event instance, inclusive of all sample memory referenced by all buses and event instances which route into it.
 * @struct_end
 */

/**
 * @struct FmodStudioParameter
 * @desc This struct stores an FMOD Studio parameter value.
 * 
 * [[Note: [Automatic parameters](https://www.fmod.com/docs/2.02/api/glossary.html#automatic-parameter) always return value as 0 since they can never have their value set from the public API.]]
 * 
 * [[Note: `final_value` is the final value of the parameter after applying adjustments due to automation, modulation, seek speed, and parameter velocity to `value`. This is calculated asynchronously when the Studio system updates.]]
 * 
 * @member {real} value The parameter value as set from the public API.
 * @member {real} final_value The final combined parameter value.
 * @struct_end
 */

/**
 * @struct FmodStudioParameterId
 * @desc > **FMOD Struct:** [FMOD_STUDIO_PARAMETER_ID](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_parameter_id)
 * 
 * This struct holds an event parameter identifier.
 * 
 * @member {real} data1 The first half of the ID.
 * @member {real} data2 The second half of the ID.
 * @struct_end
 */

/**
 * @struct FmodCommandReplayCurrentCommand
 * @desc This struct stores the progress through a command replay.
 * @member {real} command_index The current command index.
 * @member {real} command_time The current playback time.
 * @struct_end
 */

/**
 * @struct FmodCommandReplayCommandInfo
 * @desc > **FMOD Struct:** [FMOD_STUDIO_COMMAND_INFO](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#fmod_studio_command_info)
 * 
 * This struct describes a command replay command.
 * 
 * [[Note: The handle values in the `instance_handle` and `output_handle` are from the recorded session and are not valid handles during playback.]]
 * 
 * @member {string} command_name The fully qualified C++ name of the API function for this command.
 * @member {real} parent_command_index The index of the command that created the instance this command operates on, or -1 if the command does not operate on any instance.
 * @member {real} frame_time The playback time at which this command will be executed.
 * @member {constant.FMOD_STUDIO_INSTANCETYPE} instance_type The type of object that this command uses as an instance.
 * @member {constant.FMOD_STUDIO_INSTANCETYPE} output_type The type of object that this command outputs.
 * @member {real} instance_handle The original handle value of the instance.
 * @member {real} output_handle The original handle value of the command output.
 * @struct_end
 */

/**
 * @struct FmodStudioEventInstanceVolume
 * @desc This struct stores a volume level.
 * 
 * [[Note: The final combined value returned in `final_volume` combines the volume set using the public API with the result of any automation or modulation. The final combined volume is calculated asynchronously when the Studio system updates.]]
 * 
 * @member {real} volume The volume as set from the public API.
 * @member {real} final_volume The final combined volume.
 * @struct_end
 */

/**
 * @struct FmodStudioListenerAttributes
 * @desc This struct stores listener 3D attributes.
 * @member {struct.Fmod3DAttributes} attributes The 3D attributes.
 * @member {struct.FmodVector} attenuation The position used for calculating attenuation.
 * @struct_end
 */

/**
 * @struct FmodStudioBufferInfo
 * @desc > **FMOD Struct:** [FMOD_STUDIO_BUFFER_INFO](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_buffer_info)
 * 
 * This struct stores information for a single buffer in FMOD Studio.
 * 
 * @member {real} current_usage The current buffer usage in bytes.
 * @member {real} peak_usage The peak buffer usage in bytes.
 * @member {real} capacity The buffer capacity in bytes.
 * @member {real} stall_count The cumulative number of stalls due to buffer overflow.
 * @member {real} stall_time The cumulative amount of time stalled due to buffer overflow, in seconds.
 * @struct_end
 */

/**
 * @struct FmodStudioBufferUsage
 * @desc > **FMOD Struct:** [FMOD_STUDIO_BUFFER_USAGE](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_buffer_usage)
 * 
 * This struct stores information for FMOD Studio buffer usage.
 * 
 * @member {struct.FmodStudioBufferInfo} command_queue Information for the Studio Async Command buffer.
 * @member {struct.FmodStudioBufferInfo} handle Information for the Studio handle table.
 * @struct_end
 */

/**
 * @struct FmodStudioCPUUsage
 * @desc > **FMOD Struct:** [FMOD_STUDIO_CPU_USAGE](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_cpu_usage)
 * 
 * This struct stores performance information for Studio API functionality.
 * 
 * @member {struct.FmodCPUUsage} core The CPU usage of FMOD Core.
 * @member {struct} studio The CPU usage of FMOD Studio. A struct that contains a single variable `update`. This is the ${function.fmod_studio_system_update} CPU usage. Percentage of main thread, or main thread if `FMOD_STUDIO_INIT.SYNCHRONOUS_UPDATE` flag is used with ${function.fmod_studio_system_init}.
 * @struct_end
 */

/**
 * @struct FmodStudioSoundInfo
 * @desc > **FMOD Struct:** [FMOD_STUDIO_SOUND_INFO](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_sound_info)
 * 
 * This struct describes a sound in the audio table.
 * 
 * @member {struct.FmodSystemCreateSoundExInfo} ext_info Extra information required for loading the sound.
 * @member {string} name_or_data The filename or memory buffer that contains the sound.
 * @member {constant.FMOD_MODE} mode The mode flags required for loading the sound. Default is `FMOD_MODE.DEFAULT`.
 * @member {real} sub_sound_index The subsound index for loading the sound.
 * @struct_end
 */

/**
 * @struct FmodStudioStringInfo
 * @desc This struct stores a string table entry.
 * @member {string} path The [Path](https://www.fmod.com/docs/2.02/api/glossary.html#studio-guids-and-paths) to an object.
 * @member {string} guid The [GUID](https://www.fmod.com/docs/2.02/api/glossary.html#studio-guids-and-paths) of an object.
 * @struct_end
 */

/**
 * @struct FmodStudioParameterDescription
 * @desc > **FMOD Struct:** [FMOD_STUDIO_PARAMETER_DESCRIPTION](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_parameter_description)
 * 
 * This struct describes an event parameter.
 * 
 * @member {string} name The parameter name.
 * @member {struct.FmodStudioParameterId} parameter_id The parameter ID.
 * @member {real} minimum The minimum parameter value.
 * @member {real} maximum The maximum parameter value.
 * @member {real} default_value The default parameter value.
 * @member {constant.FMOD_STUDIO_PARAMETER_TYPE} type The parameter type.
 * @member {constant.FMOD_STUDIO_PARAMETER_FLAGS} flags The parameter behavior flags.
 * @member {string} guid The parameter GUID.
 * @struct_end
 */

/**
 * @struct FmodStudioUserProperty
 * @desc > **FMOD Struct:** [FMOD_STUDIO_USER_PROPERTY](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#fmod_studio_user_property)
 * 
 * This struct describes a user property object.
 * 
 * @member {string} name The parameter name.
 * @member {constant.FMOD_STUDIO_USER_PROPERTY_TYPE} type The user property type.
 * @member {string} string_value String value. Only valid when type is `FMOD_STUDIO_USER_PROPERTY_TYPE.STRING`.
 * @member {real} int_value Integer (real) value. Only valid when type is `FMOD_STUDIO_USER_PROPERTY_TYPE.INTEGER`.
 * @member {boolean} bool_value Boolean value. Only valid when type is `FMOD_STUDIO_USER_PROPERTY_TYPE.BOOLEAN`.
 * @member {real} float_value Float (real) value. Only valid when type is `FMOD_STUDIO_USER_PROPERTY_TYPE.FLOAT`.
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
 * @ref FmodStudioUserProperty
 * @section_end
 * @module_end
 */
