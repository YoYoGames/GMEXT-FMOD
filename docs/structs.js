// Structs

/**
 * @struct FmodStudioVec3
 * @desc > **FMOD Struct:** [FMOD_VECTOR](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_vector)
 * 
 * This struct describes a vector in 3D space.
 * 
 * [[Important: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.03/api/glossary.html#handedness).]]
 * 
 * @member {Real} x The x coordinate of the 3D vector.
 * @member {Real} y The y coordinate of the 3D vector.
 * @member {Real} z The z coordinate of the 3D vector.
 * @struct_end
 * *//**
 * @struct FmodVec3
 * @desc > **FMOD Struct:** [FMOD_VECTOR](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_vector)
 * 
 * This struct describes a vector in 3D space.
 * 
 * [[Important: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.03/api/glossary.html#handedness).]]
 * 
 * @member {Real} x The x coordinate of the 3D vector.
 * @member {Real} y The y coordinate of the 3D vector.
 * @member {Real} z The z coordinate of the 3D vector.
 * @struct_end
 * */

/**
 * @struct FmodCPUUsage
 * @desc > **FMOD Struct:** [FMOD_CPU_USAGE](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_cpu_usage)
 * 
 * This struct stores performance information for FMOD's Core API functionality.
 * 
 * @member {Real} dsp The DSP mixing engine CPU usage. A percentage of `FMOD_THREAD_TYPE.MIXER`, or main thread if `FmodInitFlags.MixFromUpdate` flag is used with ${function.fmod_system_init}.
 * @member {Real} stream The streaming engine CPU usage. A percentage of `FMOD_THREAD_TYPE.STREAM`, or main thread if `FmodInitFlags.StreamFromUpdate` flag is used with ${function.fmod_system_init}.
 * @member {Real} geometry The geometry engine CPU usage. A percentage of `FMOD_THREAD_TYPE.GEOMETRY`.
 * @member {Real} update The ${function.fmod_system_update} CPU usage. A percentage of the main thread.
 * @member {Real} convolution1 The convolution reverb processing thread #1 CPU usage. A percentage of `FMOD_THREAD_TYPE.CONVOLUTION1`.
 * @member {Real} convolution2 The convolution reverb processing thread #2 CPU usage. A percentage of `FMOD_THREAD_TYPE.CONVOLUTION2`.
 * @struct_end
 * */

/**
 * @struct FmodDSPCPUUsage
 * @desc This struct stores information about CPU time spent.
 * @member {Real} exclusive The CPU time spent processing this unit and all of its input during the last mixer update. Expressed in microseconds.
 * @member {Real} inclusive The CPU time spent processing just this unit during the last mixer update. Expressed in microseconds.
 * @struct_end
 * */

/**
 * @struct FmodLoopPoints
 * @desc This struct stores a loop start and end point.
 * @member {Real} loop_start The loop start point. A value in the range [0, ${function.fmod_sound_get_length} - 1].
 * @member {Real} loop_end The loop end point. A value in the range [0, ${function.fmod_sound_get_length} - 1].
 * @struct_end
 * */

/**
 * @struct FmodMinMaxDistance
 * @desc This struct stores a minimum and maximum volume distance.
 * @member {Real} min_distance The minimum volume distance for the sound.
 * @member {Real} max_distance The maximum volume distance for the sound.
 * @struct_end
 * */

/**
 * @struct FmodReverbProperties
 * @desc > **FMOD Struct:** [FMOD_REVERB_PROPERTIES](https://www.fmod.com/docs/2.03/api/core-api-system.html#fmod_reverb_properties)
 * 
 * This struct defines a reverb environment.
 * 
 * [[Note: Several presets for these properties are defined as [macros](https://manual.gamemaker.io/monthly/en/GameMaker_Language/GML_Overview/Variables/Constants.htm#macros) in GameMaker, which you can find under `FMOD_REVERB_PRESETS`.]]
 * 
 * [[Note: the default reverb properties are the same as the `FMOD_PRESET_GENERIC` preset.]]
 * 
 * @member {Real} decay_time The reverberation decay time, in milliseconds. A value in the range [0, 20000].
 * @member {Real} early_delay The initial reflection delay time, in milliseconds. A value in the range [0, 300].
 * @member {Real} late_delay The late reverberation delay time relative to initial reflection, in milliseconds. A value in the range [0, 100].
 * @member {Real} hf_reference The reference high frequency, in Hertz. A value in the range [20, 20000].
 * @member {Real} hf_decay_ratio The high-frequency to mid-frequency decay time ratio, in percent. A value in the range [10, 100].Value that controls the modal density in the late reverberation decay.
 * @member {Real} diffusion A (percent) value that controls the echo density in the late reverberation decay. A value in the range [10, 100].
 * @member {Real} density A (percent) value that controls the modal density in the late reverberation decay. A value in the range [0, 100].
 * @member {Real} low_shelf_frequency The reference low frequency, in Hertz. A value in the range [20, 1000].
 * @member {Real} low_shelf_gain The relative room effect level at low frequencies, in decibels (dB). A value in the range [-36, 12].
 * @member {Real} high_cut The relative room effect level at high frequencies, in Hertz. A value in the range [0, 20000].
 * @member {Real} early_late_mix The early reflections level relative to room effect, as a percentage. A value in the range [0, 100].
 * @member {Real} wet_level The room effect level at mid frequencies, in decibels (dB). A value in the range [-80, 20].
 * @struct_end
 * */

/**
 * @struct FmodConeSettings
 * @desc This struct stores the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * @member {Real} inside_cone_angle The inside cone angle, in degrees. This is the angle spread within which the sound is unattenuated. Default is 360.
 * @member {Real} outside_cone_angle The outside cone angle, in degrees. This is the angle spread outside of which the sound is attenuated to its `outsidevolume`. Default is 360.
 * @member {Real} outside_volume The cone outside volume. A value in the range [0, 1]. Default is 1.
 * @struct_end
 * */

/**
 * @struct FmodListener3DAttributes
 * @desc > **FMOD Struct:** [FMOD_3D_ATTRIBUTES](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_3d_attributes)
 * 
 * This structure describes a position, velocity and orientation.
 * 
 * [[Important: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.03/api/glossary.html#handedness).]]
 * 
 * @member {Struct.FmodVec3} position The position in 3D space used for panning and attenuation.
 * @member {Struct.FmodVec3} velocity The velocity in 3D space used for doppler.
 * @member {Struct.FmodVec3} forward The "forward" vector as the first vector that defines orientation in 3D space. Must be of unit length (1.0) and perpendicular to `up`.
 * @member {Struct.FmodVec3} up The "up" vector as the second vector that defines orientation in 3D space. Must be of unit length (1.0) and perpendicular to `forward`.
 * @struct_end
 * *//**
 * @struct FmodStudioListener3DAttributes
 * @desc > **FMOD Struct:** [FMOD_3D_ATTRIBUTES](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_3d_attributes)
 * 
 * This structure describes a position, velocity and orientation.
 * 
 * [[Important: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.03/api/glossary.html#handedness).]]
 * 
 * @member {Struct.FmodStudioVec3} position The position in 3D space used for panning and attenuation.
 * @member {Struct.FmodStudioVec3} velocity The velocity in 3D space used for doppler.
 * @member {Struct.FmodStudioVec3} forward The "forward" vector as the first vector that defines orientation in 3D space. Must be of unit length (1.0) and perpendicular to `up`.
 * @member {Struct.FmodStudioVec3} up The "up" vector as the second vector that defines orientation in 3D space. Must be of unit length (1.0) and perpendicular to `forward`.
 * @struct_end
 * */

/**
 * @struct FmodMemoryStats
 * @desc This struct stores on the memory usage of FMOD.
 * @member {Real} current_alloced The currently allocated memory at the time of the call.
 * @member {Real} max_alloced The maximum allocated memory since ${function.fmod_system_init}.
 * @struct_end
 * */

/**
 * @struct FmodCreateSoundExInfo
 * @desc > **FMOD Struct:** [FMOD_CREATESOUNDEXINFO](https://www.fmod.com/docs/2.03/api/core-api-system.html#fmod_createsoundexinfo)
 * 
 * This struct holds additional options for creating a Sound.
 * 
 * @member {Real} length The number of bytes to read starting at `file_offset`, or the length of the Sound to create for `FmodStudioMode.OpenUser`, or the length of `name_or_buff` for `FmodStudioMode.OpenMemory` / `FmodStudioMode.OpenMemoryPoint`.
 * @member {Real} file_offset The file offset (in bytes) to start reading from.
 * @member {Real} num_channels The number of channels in sound data for `FmodStudioMode.OpenUser` / `FmodStudioMode.OpenRaw`. A value in the range [0, `FMOD_MAX_CHANNEL_WIDTH`].
 * @member {Real} default_frequency The default frequency (in Hertz) of sound data for `FmodStudioMode.OpenUser` / `FmodStudioMode.OpenRaw`.
 * @member {Enum.FmodSoundFormat} format The format of sound data for `FmodStudioMode.OpenUser` / `FmodStudioMode.OpenRaw`.
 * @member {Real} decode_buffer_size The size (in samples) of the decoded buffer for `FmodStudioMode.CreateStream`, or the block size used for `FmodStudioMode.OpenUser`.
 * @member {Real} initial_subsound The initial subsound to seek to for `FmodStudioMode.CreateStream`.
 * @member {Real} num_subsounds Number of subsounds available for `FmodStudioMode.OpenUser`, or the maximum subsounds to load from file.
 * @member {Real} inclusion_list_num The list of subsound indices to load from file.
 * @member {String} dls_name The file path to a `FMOD_SOUND_TYPE.DLS` sample set to use when loading a `FmodSoundType.Midi` file, see the description for defaults.
 * @member {String} encryption_key Key for encrypted `FmodSoundType.Fsb` file, cannot be used in conjunction with `FmodStudioMode.OpenMemoryPoint`.
 * @member {Real} max_polyphony The maximum voice count for `FmodSoundType.Midi` / `FmodSoundType.It`. Default is 64.
 * @member {Real} suggested_sound_type Attempt to load using the specified type first instead of loading in codec priority order.
 * @member {Real} file_buffer_size The buffer size for reading the file, use -1 to disable buffering.
 * @member {Real} channel_order Custom ordering of speakers for this sound data.
 * @member {Real} initial_sound_group A reference to the sound group the new sound joins, or 0 for the master sound group.
 * @member {Real} initial_seek_position The initial position to seek to for `FmodStudioMode.CreateStream`.
 * @member {Real} initial_seek_pos_type The time units for `initial_seek_position`.
 * @member {Real} ignore_set_filesystem Ignore [System::setFileSystem](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setfilesystem) and `FMOD_CREATESOUNDEXINFO` file callbacks. Not implemented.
 * @member {Real} audio_queue_policy The hardware / software decoding policy for `FMOD_SOUND_TYPE.AUDIOQUEUE`, see `FMOD_AUDIOQUEUE_CODECPOLICY`.
 * @member {Real} min_midi_granularity The mixer granularity for `FmodSoundType.Midi` sounds, smaller numbers give a more accurate reproduction at the cost of higher CPU usage.
 * @member {Real} non_block_thread_id The thread index to execute `FmodStudioMode.NonBlocking` loads on for parallel Sound loading.
 * @struct_end
 * *//**
 * @struct FmodStudioCreateSoundExInfo
 * @desc > **FMOD Struct:** [FMOD_CREATESOUNDEXINFO](https://www.fmod.com/docs/2.03/api/core-api-system.html#fmod_createsoundexinfo)
 * 
 * This struct holds additional options for creating a Sound.
 * 
 * @member {Real} length The number of bytes to read starting at `file_offset`, or the length of the Sound to create for `FmodStudioMode.OpenUser`, or the length of `name_or_buff` for `FmodStudioMode.OpenMemory` / `FmodStudioMode.OpenMemoryPoint`.
 * @member {Real} file_offset The file offset (in bytes) to start reading from.
 * @member {Real} num_channels The number of channels in sound data for `FmodStudioMode.OpenUser` / `FmodStudioMode.OpenRaw`. A value in the range [0, `FMOD_MAX_CHANNEL_WIDTH`].
 * @member {Real} default_frequency The default frequency (in Hertz) of sound data for `FmodStudioMode.OpenUser` / `FmodStudioMode.OpenRaw`.
 * @member {Enum.FmodStudioSoundFormat} format The format of sound data for `FmodStudioMode.OpenUser` / `FmodStudioMode.OpenRaw`.
 * @member {Real} decode_buffer_size The size (in samples) of the decoded buffer for `FmodStudioMode.CreateStream`, or the block size used for `FmodStudioMode.OpenUser`.
 * @member {Real} initial_subsound The initial subsound to seek to for `FmodStudioMode.CreateStream`.
 * @member {Real} num_subsounds Number of subsounds available for `FmodStudioMode.OpenUser`, or the maximum subsounds to load from file.
 * @member {Real} inclusion_list_num The list of subsound indices to load from file.
 * @member {String} dls_name The file path to a `FMOD_SOUND_TYPE.DLS` sample set to use when loading a `FmodSoundType.Midi` file, see the description for defaults.
 * @member {String} encryption_key Key for encrypted `FmodSoundType.Fsb` file, cannot be used in conjunction with `FmodStudioMode.OpenMemoryPoint`.
 * @member {Real} max_polyphony The maximum voice count for `FmodSoundType.Midi` / `FmodSoundType.It`. Default is 64.
 * @member {Real} suggested_sound_type Attempt to load using the specified type first instead of loading in codec priority order.
 * @member {Real} file_buffer_size The buffer size for reading the file, use -1 to disable buffering.
 * @member {Real} channel_order Custom ordering of speakers for this sound data.
 * @member {Real} initial_sound_group A reference to the sound group the new sound joins, or 0 for the master sound group.
 * @member {Real} initial_seek_position The initial position to seek to for `FmodStudioMode.CreateStream`.
 * @member {Real} initial_seek_pos_type The time units for `initial_seek_position`.
 * @member {Real} ignore_set_filesystem Ignore [System::setFileSystem](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setfilesystem) and `FMOD_CREATESOUNDEXINFO` file callbacks. Not implemented.
 * @member {Real} audio_queue_policy The hardware / software decoding policy for `FMOD_SOUND_TYPE.AUDIOQUEUE`, see `FMOD_AUDIOQUEUE_CODECPOLICY`.
 * @member {Real} min_midi_granularity The mixer granularity for `FmodSoundType.Midi` sounds, smaller numbers give a more accurate reproduction at the cost of higher CPU usage.
 * @member {Real} non_block_thread_id The thread index to execute `FmodStudioMode.NonBlocking` loads on for parallel Sound loading.
 * @struct_end
 * */

/**
 * @struct FmodAdvancedSettings
 * @desc > **FMOD Struct:** [FMOD_ADVANCEDSETTINGS](https://www.fmod.com/docs/2.03/api/core-api-system.html#fmod_advancedsettings)
 * 
 * This struct stores advanced configuration settings.
 * 
 * This is a structure to allow configuration of lesser used system level settings. These tweaks generally allow the user to set resource limits and customize settings to better fit their application.
 * 
 * Specifying one of the codec maximums will help determine the maximum CPU usage of playing `FmodStudioMode.CreateCompressedSample` Sounds of that type as well as the memory requirements. Memory will be allocated for 'up front' (during ${function.fmod_system_init}) if these values are specified as non zero. If any are zero, it allocates memory for the codec whenever a file of the type in question is loaded. So if `max_mpeg_codecs` is 0 for example, it will allocate memory for the MPEG codecs the first time an MP3 is loaded or an MP3 based .FSB file is loaded.
 * 
 * Setting `dsp_buffer_pool_size` will pre-allocate memory for the FMOD DSP network. See [DSP architecture guide](https://www.fmod.com/docs/2.03/api/white-papers-dsp-architecture.html). By default 8 buffers are created up front. A large network might require more if the aim is to avoid real-time allocations from the FMOD mixer thread.
 * 
 * @member {Real} max_mpeg_codecs The maximum number of MPEG Sounds created as `FmodStudioMode.CreateCompressedSample`. A value in the range [0, 256].
 * @member {Real} max_adpcm_codecs The maximum number of IMA-ADPCM Sounds created as `FmodStudioMode.CreateCompressedSample`. A value in the range [0, 256].
 * @member {Real} max_xma_codecs The maximum number of XMA Sounds created as `FmodStudioMode.CreateCompressedSample`. A value in the range [0, 256].
 * @member {Real} max_vorbis_codecs The maximum number of Vorbis Sounds created as `FmodStudioMode.CreateCompressedSample`. A value in the range [0, 256].
 * @member {Real} max_at9_codecs The maximum number of AT9 Sounds created as `FmodStudioMode.CreateCompressedSample`. A value in the range [0, 256].
 * @member {Real} max_fadpcm_codecs The maximum number of FADPCM Sounds created as `FmodStudioMode.CreateCompressedSample`. A value in the range [0, 256].
 * @member {Real} max_pcm_codecs Deprecated.
 * @member {Real} asio_num_channels The number of elements in the `ASIOSpeakerList` on input, the number of elements in `ASIOChannelList` on output. A value in the range [0, `FMOD_MAX_CHANNEL_WIDTH`].
 * @member {Real} vol0_virtualvol For use with `FmodInitFlags.Vol0BecomesVirtual`, Channels with audibility below this will become virtual. See the [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) guide for more information.
 * @member {Real} default_decode_buffer_size For use with Streams, the default size of the double buffer. A value in the range [0, 30000].
 * @member {Real} profile_port For use with `FmodInitFlags.ProfileEnable`, specify the port to listen on for connections by FMOD Studio or FMOD Profiler.
 * @member {Real} geometry_max_fade_time For use with [Geometry](https://www.fmod.com/docs/2.03/api/core-api-geometry.html), the maximum time it takes for a [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html) to fade to the new volume level when its occlusion changes.
 * @member {Real} distance_filter_center_freq For use with `FmodInitFlags.ChannelDistanceFilter`, the default center frequency for the distance filtering effect. A value in the range [10, 22050].
 * @member {Real} reverb3d_instance For use with [Reverb3D](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html), selects which global reverb instance to use. A value in the range [0, `FMOD_REVERB_MAXINSTANCES`].
 * @member {Real} dsp_buffer_pool_size The number of intermediate mixing buffers in the 'DSP buffer pool'. Each buffer in bytes will be `buffer_length` (See ${function.fmod_system_get_dsp_buffer_size}) * sizeof(float) * output mode speaker count (See [FMOD_SPEAKERMODE](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_speakermode)). i.e. 7.1 @ 1024 DSP block size = 1024 * 4 * 8 = 32kB.
 * @member {Real} resampler_method The resampling method used by [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html).
 * @member {Real} random_seed The seed value to initialize the internal random number generator.
 * @member {Real} max_convolution_threads The maximum number of CPU threads to use for `FmodDspType.ConvolutionReverb` effect. 1 = effect is entirely processed inside the `FMOD_THREAD_TYPE.MIXER` thread. 2 and 3 offloads different parts of the convolution processing into different threads (`FMOD_THREAD_TYPE.CONVOLUTION1` and `FMOD_THREAD_TYPE.CONVOLUTION2` to increase throughput. A value in the range [0, 3].
 * @member {Real} max_opus_codecs The maximum number of Opus Sounds created as `FmodStudioMode.CreateCompressedSample`. A value in the range [0, 256].
 * @struct_end
 * */

/**
 * @struct FmodDriverInfo
 * @desc This struct holds identification information about a sound device specified by its index, and specific to a given output mode.
 * 
 * @member {String} name The name of the device.
 * @member {Enum.FmodSpeakerMode} speaker_mode The speaker setup this device is currently using.
 * @member {Real} sample_rate The sample rate the output driver runs at, in Hz.
 * @member {Real} speaker_mode_channels The number of channels in the current speaker setup.
 * @struct_end
 * */

/**
 * @struct FmodSoftwareFormat
 * @desc This struct stores the output format for the software mixer.
 * @member {Real} sample_rate The sample rate of the mixer.
 * @member {Enum.FmodSpeakerMode} speaker_mode The speaker setup of the mixer.
 * @member {Real} num_raw_speakers The number of speakers for `FmodSpeakerMode.Raw` mode.
 * @struct_end
 * */

/**
 * @struct FmodDSPBufferSize
 * @desc This struct stores the buffer size settings for the FMOD software mixing engine.
 * @member {Real} buff_size The mixer engine block size, in samples. The default value is 1024.
 * @member {Real} num_buffers The number of buffers used by the mixer engine. The default value is 4.
 * @struct_end
 * */

/**
 * @struct FmodStreamBufferSize
 * @desc This struct stores the default file buffer size for newly opened streams.
 * @member {Real} file_buffer_size The buffer size.
 * @member {Real} file_buffer_size_type The type of units for `file_buffer_size`. The default is `FmodTimeUnit.RawBytes`.
 * @struct_end
 * */

/**
 * @struct FmodSpeakerPosition
 * @desc This struct stores the position of a speaker and its active state.
 * @member {Real} x The speaker's 2D X position relative to the listener. -1 = left, 0 = middle, +1 = right.
 * @member {Real} y The speaker's 2D Y position relative to the listener. -1 = back, 0 = middle, +1 = front.
 * @member {Real} active The active state of the speaker. `true` = included in 3D calculations, `false` = ignored.
 * @struct_end
 * */

/**
 * @struct FmodSystem3DSettings
 * @desc This struct stores the global doppler scale, distance factor and roll-off scale for all 3D sounds.
 * @member {Real} doppler_scale This is a scaling factor for doppler shift.
 * @member {Real} distance_factor This is a factor for converting game distance units to FMOD distance units.
 * @member {Real} rolloff_scale This is a scaling factor for distance attenuation. When a sound uses a roll-off mode other than `FmodStudioMode._3DCustomRollOff` and the distance is greater than the sound's minimum distance, the distance is scaled by the roll-off scale.
 * @struct_end
 * */



/**
 * @struct FmodFileUsage
 * @desc This struct holds information about file reads.
 * 
 * @member {Real} sample_bytes_read Total bytes read from file for loading sample data.
 * @member {Real} stream_bytes_read Total bytes read from file for streaming sounds.
 * @member {Real} other_bytes_read Total bytes read for non-audio data such as FMOD Studio banks.
 * @struct_end
 * */



/**
 * @struct FmodRecordDriverInfo
 * @desc This struct holds identification information about an audio device, specific to an output mode.
 * @member {String} name The name of the device.
 * @member {Enum.FmodSpeakerMode} speaker_mode The speaker configuration the device is currently using.
 * @member {Real} speaker_mode_channels The number of channels in the current speaker setup.
 * @member {Real} sample_rate The sample rate the record driver runs at, in Hz.
 * @member {Enum.FmodDriverState} state Flags that provide additional information about the driver.
 * @struct_end
 * */



/**
 * @struct FmodChannelControl3DAttributes
 * @desc This struct stores the 3D position and velocity used to apply panning, attenuation and doppler.
 * 
 * @member {Struct.FmodVec3} position The position in 3D space used for panning and attenuation. Expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units).
 * @member {Struct.FmodVec3} velocity The velocity in 3D space used for doppler. Expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units) per second.
 * @struct_end
 * *//**
 * @struct FmodStudioChannelControl3DAttributes
 * @desc This struct stores the 3D position and velocity used to apply panning, attenuation and doppler.
 * 
 * @member {Struct.FmodStudioVec3} position The position in 3D space used for panning and attenuation. Expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units).
 * @member {Struct.FmodStudioVec3} velocity The velocity in 3D space used for doppler. Expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units) per second.
 * @struct_end
 * */

/**
 * @struct FmodDistanceFilter
 * @desc This struct holds override values for the 3D distance filter.
 * @member {Real} custom Whether to override automatic distance filtering and use `custom_level` instead.
 * @member {Real} custom_level The attenuation factor where 1 represents no attenuation and 0 represents complete attenuation.
 * @member {Real} center_freq The center frequency of the band-pass filter used to simulate distance attenuation. A value in the range [10, 22050]. 0 for default of `FmodSystemAdvancedSettings.distance_filter_center_freq`.
 * @struct_end
 * */

/**
 * @struct FmodSoundMinMaxDistance
 * @desc This struct holds the minimum and maximum distances used to calculate the 3D roll-off attenuation.
 * @member {Real} min_distance The distance from the source where attenuation begins, expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units). A value in the range [0, `infinity`]. Default is 1.
 * @member {Real} max_distance The distance from the source where attenuation ends, expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units). A value in the range [`min_dist`, `infinity`]. Default is 1.
 * @struct_end
 * *//**
 * @struct FmodStudioMinMaxDistance
 * @desc This struct holds the minimum and maximum distances used to calculate the 3D roll-off attenuation.
 * @member {Real} min_distance The distance from the source where attenuation begins, expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units). A value in the range [0, `infinity`]. Default is 1.
 * @member {Real} max_distance The distance from the source where attenuation ends, expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units). A value in the range [`min_dist`, `infinity`]. Default is 1.
 * @struct_end
 * */

/**
 * @struct FmodOcclusion
 * @desc This struct stores 3D attenuation factors for the direct and reverb paths.
 * @member {Real} direct The occlusion factor for the direct path where 0 represents no occlusion and 1 represents full occlusion. Default is 0.
 * @member {Real} reverb The occlusion factor for the reverb path where 0 represents no occlusion and 1 represents full occlusion. Default is 0.
 * @struct_end
 * */

/**
 * @struct FmodDSPMixMatrix
 * @desc This struct stores a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * 
 * [[Note: Matrix element values can be below 0 to invert a signal and above 1 to amplify the signal. Note that increasing the signal level too far may cause audible distortion.]]
 * 
 * @member {Real} out_channels The number of valid output channels (rows) in `matrix`. A value in the range [0, `FMOD_MAX_CHANNEL_WIDTH`].
 * @member {Real} in_channels Number of valid input channels (columns) in `matrix`. A value in the range [0, `FMOD_MAX_CHANNEL_WIDTH`].
 * @member {Real} matrix A two-dimensional array of volume levels in row-major order. Each row represents an output speaker, each column represents an input channel.
 * @struct_end
 * */

/**
 * @struct FmodDSPClock
 * @desc This struct holds the [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) clock values at a point in time.
 * @member {Real} dspclock The DSP clock value for the tail DSP (`FmodChannelControlDspIndex.Tail`) node. Expressed in samples.
 * @member {Real} parent_clock DSP clock value for the tail DSP (`FmodChannelControlDspIndex.Tail`) node of the parent ChannelGroup. Expressed in samples.
 * @struct_end
 * */

/**
 * @struct FmodDelay
 * @desc This struct holds a sample accurate start (and/or stop) time relative to the parent ChannelGroup DSP clock.
 * @member {Real} dspclock_start [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) clock of the parent [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) to audibly start playing sound at, expressed in samples.
 * @member {Real} dspclock_end DSP clock of the parent ChannelGroup to audibly stop playing sound at, expressed in samples.
 * @member {Real} stop_channels True: When `dspclock_end` is reached, behaves like ${function.fmod_channel_control_stop} has been called.
False: When `dspclock_end` is reached, behaves like ${function.fmod_channel_control_set_paused} has been called, a subsequent `dspclock_start` allows it to resume.
 * @struct_end
 * */

/**
 * @struct FmodFadePoint
 * @desc This struct holds information about stored fade points.
 * @member {Real} dsp_clock The DSP clock value, in output samples, at which the fade point applies.
 * @member {Real} volume The volume level at the fade point, where 0 is silent and 1 is full volume.
 * @struct_end
 * */



/**
 * @struct FmodDSPChannelFormat
 * @desc This struct holds the PCM input format a DSP will receive when processing.
 * @member {Real} channel_mask Deprecated.
 * @member {Real} num_channels The number of channels to be processed.
 * @struct_end
 * */

/**
 * @struct FmodDSPMeteringInfo
 * @desc > **FMOD Struct:** [FMOD_DSP_METERING_INFO](https://www.fmod.com/docs/2.03/api/plugin-api-dsp.html#fmod_dsp_metering_info)
 * 
 * This struct stores DSP metering information.
 * 
 * @member {Real} num_samples_analysed The number of samples considered for this metering info.
 * @struct_end
 * */



/**
 * @struct FmodDSPMeteringEnabled
 * @desc This struct holds information on whether input/output signal metering is enabled for a given [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html).
 * @member {Real} input_enabled Whether metering is enabled for the input signal.
 * @member {Real} output_enabled Whether metering is enabled for the output signal.
 * @struct_end
 * */

/**
 * @struct FmodDSPWetDryMix
 * @desc This struct stores the scale of the wet and dry signal components.
 * @member {Real} prewet The level of the 'Dry' (pre-processed signal) mix that is processed by the DSP. 0 = silent, 1 = full. A negative level inverts the signal. Values larger than 1 amplify the signal. Default is 1.
 * @member {Real} postwet The level of the 'Wet' (post-processed signal) mix that is output. 0 = silent, 1 = full. A negative level inverts the signal. Values larger than 1 amplify the signal. Default is 1.
 * @member {Real} dry The level of the 'Dry' (pre-processed signal) mix that is output. 0 = silent, 1 = full. A negative level inverts the signal. Values larger than 1 amplify the signal. Default is 1.
 * @struct_end
 * */

/**
 * @struct FmodDSPInfo
 * @desc This struct stores information about a DSP unit.
 * @member {String} name The name of this unit will be written (null-terminated) to the provided 32 byte buffer.
 * @member {Real} version The version number of this unit, usually formated as hex AAAABBBB where the AAAA is the major version number and the BBBB is the minor version number.
 * @member {Real} channels The number of channels this unit processes where 0 represents "any".
 * @member {Real} configwidth The configuration dialog box width where 0 represents "no dialog box".
 * @member {Real} configheight The configuration dialog box height where 0 represents "no dialog box".
 * @struct_end
 * */



/**
 * @struct FmodDSPParameterInfo
 * @desc > **FMOD Struct:** [FMOD_DSP_PARAMETER_DESC](https://www.fmod.com/docs/2.03/api/plugin-api-dsp.html#fmod_dsp_parameter_desc)
 * 
 * This struct is a base structure for DSP parameter descriptions.
 * 
 * @member {String} name The parameter name.
 * @member {String} label The unit type label.
 * @member {String} description The description of the parameter.
 * @struct_end
 * */



/**
 * @struct FmodPolygonAttributes
 * @desc This struct stores the attributes for a polygon.
 * @member {Real} direct_occlusion The occlusion factor for the direct path where 0 represents no occlusion and 1 represents full occlusion.
 * @member {Real} reverb_occlusion The occlusion factor for the reverb path where 0 represents no occlusion and 1 represents full occlusion.
 * @member {Real} double_sided Whether the polygon is double-sided. True: Polygon is double-sided.
False: Polygon is single-sided, and the winding of the polygon (which determines the polygon's normal) determines which side of the polygon will cause occlusion.
 * @struct_end
 * */

/**
 * @struct FmodGeometryRotation
 * @desc This struct stores the 3D orientation of and FMOD object, as a forward and up vector.
 * @member {Struct.FmodVec3} forward The "forward" vector as the first vector that defines orientation in 3D space. This vector must be of unit length and perpendicular to the up vector.
 * @member {Struct.FmodVec3} up The "up" vector as the second vector that defines orientation in 3D space.This vector must be of unit length and perpendicular to the forward vector.
 * @struct_end
 * */

/**
 * @struct FmodReverb3DAttributes
 * @desc This struct stores the 3D attributes of a reverb sphere.
 * 
 * See the [3D Reverb](https://www.fmod.com/docs/2.03/api/white-papers-3d-reverb.html) guide for more information.
 * 
 * @member {Struct.FmodVec3} position The position in 3D space representing the center of the reverb.
 * @member {Real} min_distance The distance from the centerpoint within which the reverb will have full effect.
 * @member {Real} max_distance The distance from the centerpoint beyond which the reverb will have no effect.
 * @struct_end
 * */





/**
 * @struct FmodSoundTag
 * @desc > **FMOD Struct:** [FMOD_TAG](https://www.fmod.com/docs/2.03/api/core-api-sound.html#fmod_tag)
 * 
 * This struct holds tag data / metadata description.
 * @member {Enum.FmodTagType} type The tag type.
 * @member {Enum.FmodTagDataType} datatype The type of data this tag holds.
 * @member {String} name The tag name.
 * @member {String} data The tag's data, rendered as a string.
 * @member {Real} datalen The length of the tag's data, in bytes.
 * @member {Real} updated True if this tag has been updated since last being accessed with ${function.fmod_sound_get_tag}.
 * @struct_end
 * */

/**
 * @struct FmodSoundDefaults
 * @desc This struct stores a sound's default playback attributes.
 * @member {Real} frequency The default playback frequency, in Hertz. Default is 48000.
 * @member {Real} priority The default priority where 0 is the highest priority. A value in the range [0, 256]. Default is 128.
 * @struct_end
 * */

/**
 * @struct FmodSoundOpenState
 * @desc This struct holds the state a sound is in after being opened with the non blocking flag, or the current state of the streaming buffer.
 * @member {Enum.FmodOpenState} open_state The open state of a sound.
 * @member {Real} percent_buffered The filled percentage of a stream's file buffer.
 * @member {Real} starving The starving state. `true` if a stream has decoded more than the stream file buffer has ready.
 * @member {Real} disk_busy Whether the disk is currently being accessed for this sound.
 * @struct_end
 * */



/**
 * @struct FmodSoundLockLengths
 * @desc This struct holds information about a sound lock.
 * @member {Real} length1 The first chunk of the sound's data in FMOD memory that's been locked.
 * @member {Real} length2 The second chunk of the sound's data in FMOD memory that's been locked. Can be zero-length.
 * @struct_end
 * */

/**
 * @struct FmodSyncPoint
 * @desc > **FMOD Struct:** [FMOD_SYNCPOINT](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_syncpoint)
 * 
 * This struct stores information about a sync point.
 * 
 * @member {Real} offset The offset of the sync point (expressed in the units as passed to ${function.fmod_sound_get_sync_point})
 * @member {String} name The name of the sync point.
 * @struct_end
 * */

/**
 * @struct FmodStudioMemoryUsage
 * @desc > **FMOD Struct:** [FMOD_STUDIO_MEMORY_USAGE](https://www.fmod.com/docs/2.03/api/studio-api-common.html#fmod_studio_memory_usage)
 * 
 * This struct stores FMOD Studio memory usage statistics.
 * 
 * [[Note: Memory usage `exclusive` and `inclusive` values do not include sample data loaded in memory because sample data is a shared resource. Streaming sample data is not a shared resource and is included in the `exclusive` and `inclusive` values.]]
 * 
 * @member {Real} exclusive The size of memory belonging to the bus or event instance.
 * @member {Real} inclusive The size of memory belonging exclusively to the bus or event plus the inclusive memory sizes of all buses and event instances which route into it.
 * @member {Real} sample_data The size of shared sample memory referenced by the bus or event instance, inclusive of all sample memory referenced by all buses and event instances which route into it.
 * @struct_end
 * */

/**
 * @struct FmodStudioParameterValue
 * @desc This struct stores an FMOD Studio parameter value.
 * 
 * [[Note: [Automatic parameters](https://www.fmod.com/docs/2.03/api/glossary.html#automatic-parameter) always return value as 0 since they can never have their value set from the public API.]]
 * 
 * [[Note: `final_value` is the final value of the parameter after applying adjustments due to automation, modulation, seek speed, and parameter velocity to `value`. This is calculated asynchronously when the Studio system updates.]]
 * 
 * @member {Real} value The parameter value as set from the public API.
 * @member {Real} final_value The final combined parameter value.
 * @struct_end
 * */



/**
 * @struct FmodStudioCurrentCommand
 * @desc This struct stores the progress through a command replay.
 * @member {Real} command_index The current command index.
 * @member {Real} current_time The current playback time.
 * @struct_end
 * */

/**
 * @struct FmodStudioCommandInfo
 * @desc > **FMOD Struct:** [FMOD_STUDIO_COMMAND_INFO](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#fmod_studio_command_info)
 * 
 * This struct describes a command replay command.
 * 
 * [[Note: The handle values in the `instance_handle` and `output_handle` are from the recorded session and are not valid handles during playback.]]
 * 
 * @member {String} command_name The fully qualified C++ name of the API function for this command.
 * @member {Real} parent_command_index The index of the command that created the instance this command operates on, or -1 if the command does not operate on any instance.
 * @member {Real} frame_time The playback time at which this command will be executed.
 * @member {Real} instance_type The type of object that this command uses as an instance.
 * @member {Real} output_type The type of object that this command outputs.
 * @member {Real} instance_handle The original handle value of the instance.
 * @member {Real} output_handle The original handle value of the command output.
 * @struct_end
 * */



/**
 * @struct FmodStudioListenerAttributes
 * @desc This struct stores listener 3D attributes.
 * @member {Struct.FmodStudioListener3DAttributes} attributes The 3D attributes.
 * @member {Struct.FmodStudioVec3} attenuation The position used for calculating attenuation.
 * @struct_end
 * */

/**
 * @struct FmodStudioBufferInfo
 * @desc > **FMOD Struct:** [FMOD_STUDIO_BUFFER_INFO](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_buffer_info)
 * 
 * This struct stores information for a single buffer in FMOD Studio.
 * 
 * @member {Real} current_usage The current buffer usage in bytes.
 * @member {Real} peak_usage The peak buffer usage in bytes.
 * @member {Real} capacity The buffer capacity in bytes.
 * @member {Real} stall_count The cumulative number of stalls due to buffer overflow.
 * @member {Real} stall_time The cumulative amount of time stalled due to buffer overflow, in seconds.
 * @struct_end
 * */

/**
 * @struct FmodStudioBufferUsage
 * @desc > **FMOD Struct:** [FMOD_STUDIO_BUFFER_USAGE](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_buffer_usage)
 * 
 * This struct stores information for FMOD Studio buffer usage.
 * 
 * @member {Struct.FmodStudioBufferInfo} command_queue Information for the Studio Async Command buffer.
 * @member {Struct.FmodStudioBufferInfo} handle Information for the Studio handle table.
 * @struct_end
 * */

/**
 * @struct FmodStudioCPUUsage
 * @desc > **FMOD Struct:** [FMOD_STUDIO_CPU_USAGE](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_cpu_usage)
 * 
 * This struct stores performance information for Studio API functionality.
 * 
 * @member {Real} exclusive The CPU usage of FMOD Core.
 * @member {Real} inclusive The CPU usage of FMOD Studio. A struct that contains a single variable `update`. This is the ${function.fmod_studio_system_update} CPU usage. Percentage of main thread, or main thread if `FmodStudioInitFlags.SynchronousUpdate` flag is used with ${function.fmod_studio_system_init}.
 * @struct_end
 * */

/**
 * @struct FmodStudioSoundInfo
 * @desc > **FMOD Struct:** [FMOD_STUDIO_SOUND_INFO](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_sound_info)
 * 
 * This struct describes a sound in the audio table.
 * 
 * @member {Struct.FmodStudioCreateSoundExInfo} ext_info Extra information required for loading the sound.
 * @member {String} name_or_data The filename or memory buffer that contains the sound.
 * @member {Enum.FmodStudioMode} mode The mode flags required for loading the sound. Default is `FmodStudioMode.Default`.
 * @member {Real} sub_sound_index The subsound index for loading the sound.
 * @struct_end
 * */

/**
 * @struct FmodStudioStringInfo
 * @desc This struct stores a string table entry.
 * @member {String} guid The [GUID](https://www.fmod.com/docs/2.03/api/glossary.html#studio-guids-and-paths) of an object.
 * @member {String} path The [Path](https://www.fmod.com/docs/2.03/api/glossary.html#studio-guids-and-paths) to an object.
 * @struct_end
 * */

/**
 * @struct FmodStudioParameterDescription
 * @desc > **FMOD Struct:** [FMOD_STUDIO_PARAMETER_DESCRIPTION](https://www.fmod.com/docs/2.03/api/studio-api-common.html#fmod_studio_parameter_description)
 * 
 * This struct describes an event parameter.
 * 
 * @member {String} name The parameter name.
 * @member {Real} id_data1 The parameter ID.
 * @member {Real} id_data2 The minimum parameter value.
 * @member {Real} minimum The minimum parameter value.
 * @member {Real} maximum The maximum parameter value.
 * @member {Real} defaultvalue The parameter type.
 * @member {Enum.FmodStudioUserPropertyType} type The parameter type.
 * @member {Enum.FmodStudioParameterFlags} flags The parameter behavior flags.
 * @struct_end
 * */

/**
 * @struct FmodStudioUserProperty
 * @desc > **FMOD Struct:** [FMOD_STUDIO_USER_PROPERTY](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#fmod_studio_user_property)
 * 
 * This struct describes a user property object.
 * 
 * @member {String} name The parameter name.
 * @member {Enum.FmodStudioUserPropertyType} type The user property type.
 * @member {String} string_value String value. Only valid when type is `FmodStudioUserPropertyType.String`.
 * @member {Real} int_value Integer (real) value. Only valid when type is `FmodStudioUserPropertyType.Integer`.
 * @member {Real} bool_value Boolean value. Only valid when type is `FmodStudioUserPropertyType.Boolean`.
 * @member {Real} float_value Float (real) value. Only valid when type is `FmodStudioUserPropertyType.Float`.
 * @struct_end
 * */

/**
 * @struct FmodStudioAdvancedSettings
 * @desc > **FMOD Struct:** [FMOD_STUDIO_ADVANCEDSETTINGS](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_advancedsettings)
 * 
 * This struct describes a Studio advanced settings object.
 * 
 * @member {Real} command_queue_size Command queue size for studio async processing. Default: 32768
 * @member {Real} handle_initial_size Initial size to allocate for handles. Memory for handles will grow as needed in pages. Default: `8192 * 8`
 * @member {Real} studio_update_period Update period of Studio when in async mode, in milliseconds. Will be quantized to the nearest multiple of mixer duration. Default: 20
 * @member {Real} idle_sampledata_pool_size Size in bytes of sample data to retain in memory when no longer used, to avoid repeated disk I/O. Use -1 to disable. Default: 262144
 * @member {Real} streaming_schedule_delay Specify the schedule delay for streams, in samples. Lower values can reduce latency when scheduling events containing streams but may cause scheduling issues if too small. Default: 8192
 * @member {String} encryption_key Specify the key for loading sounds from encrypted banks. (UTF-8 string). Default: `pointer_null`
 * @struct_end
 * */

/**
 * @struct FmodGeometryMaxPolygons
 * @desc > **FMOD Function:** [Geometry::getMaxPolygons](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getmaxpolygons)
 *
 * <br />
 *
 * This struct holds the maximum capacity a Geometry object was created with.
 * @member {Real} max_polygons The maximum number of polygons the object can hold.
 * @member {Real} max_vertices The maximum number of vertices across all of its polygons.
 * @struct_end
 */

/**
 * @struct FmodSyncPointInfo
 * @desc > **FMOD Function:** [Sound::getSyncPointInfo](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getsyncpointinfo)
 *
 * <br />
 *
 * This struct describes a single sync point on a sound.
 * @member {String} name The name of the sync point.
 * @member {Real} offset The offset of the sync point from the start of the sound, expressed in the
 * time unit the query asked for.
 * @struct_end
 */

/**
 * @struct FmodStudioCoreCPUUsage
 * @desc > **FMOD Struct:** [FMOD_CPU_USAGE](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_cpu_usage)
 *
 * <br />
 *
 * This struct holds the core system's CPU usage, as reported through the Studio System. Every member
 * is a percentage of the total CPU time.
 * @member {Real} dsp Time spent processing the DSP network.
 * @member {Real} stream Time spent reading and decoding streams.
 * @member {Real} geometry Time spent processing the 3D geometry engine.
 * @member {Real} update Time spent in ${function.fmod_system_update}.
 * @member {Real} convolution1 Time spent in the first convolution reverb thread.
 * @member {Real} convolution2 Time spent in the second convolution reverb thread.
 * @struct_end
 */

/**
 * @struct FmodStudioSystemCPUUsage
 * @desc > **FMOD Function:** [Studio::System::getCPUUsage](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getcpuusage)
 *
 * <br />
 *
 * This struct holds the Studio System's CPU usage alongside the core system's.
 * @member {Real} studio_update Time spent in the Studio update thread, as a percentage of total
 * CPU time.
 * @member {Struct.FmodStudioCoreCPUUsage} core The core system's own CPU usage.
 * @struct_end
 */

/**
 * @module structs
 * @title Structs
 * @desc This module contains the structs used by the FMOD extension.
 * 
 * When a function of the FMOD extension returns multiple values, it returns them as a ${type.struct} or as an ${type.array} of structs.
 * This happens in two situations: 
 * 
 * * The original FMOD function returns multiple values through [Out](https://www.fmod.com/docs/2.03/api/glossary.html#documentation-conventions) parameters. The extension groups these values into a ${type.struct} of which you can access variables by name. For example: ${function.fmod_system_get_record_driver_info} returns a ${struct.FmodRecordDriverInfo}.
 * * The original FMOD function returns multiple values in an FMOD "struct". The extension also groups these values into a ${type.struct}, which has the same variables as the corresponding FMOD "struct". For example: ${function.fmod_studio_system_get_sound_info} returns a ${struct.FmodStudioSoundInfo}, which maps to FMOD's [FMOD_STUDIO_SOUND_INFO](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_sound_info) struct.
 * 
 * The returned ${type.struct}s are not actually created using the constructor function of their type. They do, however, have identical variable names.
 * 
 * [[Note: The FMOD extension is able to return these more complex data types (i.e. other than ${type.real} and ${type.string}) by packing the values received from FMOD into a ${type.buffer} and unpacking them on the other side.]]
 * 
 * @section_struct
 * @ref FmodCPUUsage
 * @ref FmodLoopPoints
 * @ref FmodMinMaxDistance
 * @ref FmodReverbProperties
 * @ref FmodMemoryStats
 * @ref FmodSystem3DSettings
 * @ref FmodDSPChannelFormat
 * @ref FmodDSPMeteringInfo
 * @ref FmodDSPInfo
 * @ref FmodGeometryRotation
 * @ref FmodReverb3DAttributes
 * @ref FmodSoundTag
 * @ref FmodSoundDefaults
 * @ref FmodSoundOpenState
 * @ref FmodSyncPoint
 * @ref FmodStudioMemoryUsage
 * @ref FmodStudioListenerAttributes
 * @ref FmodStudioBufferInfo
 * @ref FmodStudioBufferUsage
 * @ref FmodStudioCPUUsage
 * @ref FmodStudioSoundInfo
 * @ref FmodStudioStringInfo
 * @ref FmodStudioParameterDescription
 * @ref FmodStudioUserProperty
 * @ref FmodStudioAdvancedSettings
 * @ref FmodStudioVec3
 * @ref FmodVec3
 * @ref FmodDSPCPUUsage
 * @ref FmodConeSettings
 * @ref FmodListener3DAttributes
 * @ref FmodStudioListener3DAttributes
 * @ref FmodCreateSoundExInfo
 * @ref FmodStudioCreateSoundExInfo
 * @ref FmodAdvancedSettings
 * @ref FmodDriverInfo
 * @ref FmodSoftwareFormat
 * @ref FmodDSPBufferSize
 * @ref FmodStreamBufferSize
 * @ref FmodSpeakerPosition
 * @ref FmodFileUsage
 * @ref FmodRecordDriverInfo
 * @ref FmodChannelControl3DAttributes
 * @ref FmodStudioChannelControl3DAttributes
 * @ref FmodDistanceFilter
 * @ref FmodSoundMinMaxDistance
 * @ref FmodStudioMinMaxDistance
 * @ref FmodOcclusion
 * @ref FmodDSPMixMatrix
 * @ref FmodDSPClock
 * @ref FmodDelay
 * @ref FmodFadePoint
 * @ref FmodDSPMeteringEnabled
 * @ref FmodDSPWetDryMix
 * @ref FmodDSPParameterInfo
 * @ref FmodPolygonAttributes
 * @ref FmodSoundLockLengths
 * @ref FmodStudioParameterValue
 * @ref FmodStudioCurrentCommand
 * @ref FmodStudioCommandInfo
 * @ref FmodGeometryMaxPolygons
 * @ref FmodSyncPointInfo
 * @ref FmodStudioCoreCPUUsage
 * @ref FmodStudioSystemCPUUsage
 * @section_end
 * @module_end
 */
