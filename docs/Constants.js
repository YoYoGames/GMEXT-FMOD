/* Core Definitions */

/* FMOD constants */

#macro FMOD_VERSION    0x00020215                     /* 0xaaaabbcc -> aaaa = product version, bb = major version, cc = minor version.*/

/**
 * @const FMOD_DEBUG_FLAGS
 * @desc > **FMOD Constant:** [FMOD_DEBUG_FLAGS](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_debug_flags)
 * This constant specifies the requested information to be output when using the logging version of FMOD.
 * @member LEVEL_NONE Disable all messages.
 * @member LEVEL_ERROR Enable only error messages.
 * @member LEVEL_WARNING Enable warning and error messages.
 * @member LEVEL_LOG Enable informational, warning and error messages.
 * @member TYPE_MEMORY This enables verbose logging for memory operations, only use this if you are debugging a memory related issue.
 * @member TYPE_FILE This enables verbose logging for file access, only use this if you are debugging a file related issue.
 * @member TYPE_CODEC This enables verbose logging for codec initialisation, only use this if you are debugging a codec related issue.
 * @member TYPE_TRACE This enables verbose logging for internal errors, use this for tracking the origin of error codes.
 * @member DISPLAY_TIMESTAMPS This displays the time stamp of the log message in milliseconds.
 * @member DISPLAY_LINENUMBERS This displays the source code file and line number for where the message originated.
 * @member DISPLAY_THREAD This displays the thread ID of the calling function that generated the message.
 * @const_end
 */

/**
 * @const FMOD_MEMORY_TYPE
 * @desc > **FMOD Constant:** [FMOD_MEMORY_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_memory_type)
 * This constant specifies the bitfields for the memory allocation type being passed into FMOD memory callbacks.
 * @member NORMAL This value specifies standard memory allocation.
 * @member STREAM_FILE This value specifies a stream file buffer, size controllable with System::setStreamBufferSize.
 * @member STREAM_DECODE This value specifies a stream decode buffer, size controllable with FMOD_CREATESOUNDEXINFO::decodebuffersize.
 * @member SAMPLEDATA This value specifies a sample data buffer. Raw audio data, usually PCM/MPEG/ADPCM/XMA data.
 * @member DSP_BUFFER Deprecated.
 * @member PLUGIN This value indicates that the memory is allocated by a third party plugin.
 * @member PERSISTENT Persistent memory. Memory will be freed when System::release is called.
 * @member ALL This is a mask specifying all memory types.
 * @const_end
 */

/**
 * @const FMOD_INIT
 * @desc > **FMOD Constant:** [FMOD_INIT](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_initflags)
 * This constant specifies the configuration flags used when initialising the FMOD system.
 * @member NORMAL Initialize normally
 * @member STREAM_FROM_UPDATE No stream thread is created internally. Streams are driven from System::update. Mainly used with non-realtime outputs.
 * @member MIX_FROM_UPDATE No mixer thread is created internally. Mixing is driven from System::update. Only applies to polling based output modes such as FMOD_OUTPUTTYPE_NOSOUND, FMOD_OUTPUTTYPE_WAVWRITER.
 * @member RIGHTHANDED_3D 3D calculations will be performed in right-handed coordinates.
 * @member CLIP_OUTPUT Enables hard clipping of output values greater than `1.0` or less than `-1.0`.
 * @member CHANNEL_LOWPASS Enables usage of ChannelControl::setLowPassGain, ChannelControl::set3DOcclusion, or automatic usage by the Geometry API. All voices will add a software lowpass filter effect into the DSP chain which is idle unless one of the previous functions/features are used.
 * @member CHANNEL_DISTANCEFILTER All FMOD_3D based voices will add a software lowpass and highpass filter effect into the DSP chain which will act as a distance-automated bandpass filter. Use System::setAdvancedSettings to adjust the center frequency.
 * @member PROFILE_ENABLE Enable TCP/IP based host which allows FMOD Studio or FMOD Profiler to connect to it, and view memory, CPU and the DSP network graph in real-time.
 * @member VOL0_BECOMES_VIRTUAL Any sounds that are 0 volume will go virtual and not be processed except for having their positions updated virtually. Use System::setAdvancedSettings to adjust what volume besides zero to switch to virtual at.
 * @member GEOMETRY_USECLOSEST With the geometry engine, only process the closest polygon rather than accumulating all polygons the sound to listener line intersects.
 * @member PREFER_DOLBY_DOWNMIX When using FMOD_SPEAKERMODE_5POINT1 with a stereo output device, use the Dolby Pro Logic II downmix algorithm instead of the default stereo downmix algorithm.
 * @member THREAD_UNSAFE Disables thread safety for API calls. Only use this if FMOD is being called from a single thread, and if Studio API is not being used!
 * @member PROFILE_METER_ALL Slower, but adds level metering for every single DSP unit in the graph. Use DSP::setMeteringEnabled to turn meters off individually. Setting this flag implies FMOD_INIT_PROFILE_ENABLE.
 * @member MEMORY_TRACKING Enables memory allocation tracking. Currently this is only useful when using the Studio API. Increases memory footprint and reduces performance. This flag is implied by FMOD_STUDIO_INIT_MEMORY_TRACKING.
 * @const_end
 */

/**
 * @const FMOD_DRIVER_STATE
 * @desc > **FMOD Constant:** [FMOD_DRIVER_STATE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_driver_state) 
 * This constant specifies flags that provide additional information about a particular driver.
 * @member CONNECTED Device is currently plugged in.
 * @member DEFAULT Device is the user's preferred choice.
 * @const_end
 */

/**
 * @const FMOD_TIMEUNIT
 * @desc > **FMOD Constant:** [FMOD_TIMEUNIT](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_timeunit)
 * This constant specifies the time types used for position or length.
 * @member MS Milliseconds.
 * @member PCM PCM samples, related to milliseconds * samplerate / 1000.
 * @member PCMBYTES Bytes, related to PCM samples * channels * datawidth (i.e. 16bit = 2 bytes).
 * @member RAWBYTES Raw file bytes of (compressed) sound data (does not include headers). Only used by Sound::getLength and Channel::getPosition.
 * @member PCMFRACTION Fractions of 1 PCM sample. Unsigned int range 0 to 0xFFFFFFFF. Used for sub-sample granularity for DSP purposes.
 * @member MODORDER MOD/S3M/XM/IT. Order in a sequenced module format. Use Sound::getFormat to determine the PCM format being decoded to.
 * @member MODROW MOD/S3M/XM/IT. Current row in a sequenced module format. Cannot use with Channel::setPosition. Sound::getLength will return the number of rows in the currently playing or seeked to pattern.
 * @member MODPATTERN MOD/S3M/XM/IT. Current pattern in a sequenced module format. Cannot use with Channel::setPosition. Sound::getLength will return the number of patterns in the song and Channel::getPosition will return the currently playing pattern.
 * @const_end
 */

/**
 * @const FMOD_SYSTEM_CALLBACK
 * @desc > **FMOD Constant:** [FMOD_SYSTEM_CALLBACK](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_system_callback)
 * This constant specifies a callback for system notifications.
 * @member DEVICELISTCHANGED 
 * @member DEVICELOST 
 * @member MEMORYALLOCATIONFAILED 
 * @member THREADCREATED 
 * @member BADDSPCONNECTION 
 * @member PREMIX 
 * @member POSTMIX 
 * @member ERROR 
 * @member MIDMIX 
 * @member THREADDESTROYED 
 * @member PREUPDATE 
 * @member POSTUPDATE 
 * @member RECORDLISTCHANGED 
 * @member BUFFEREDNOMIX 
 * @member DEVICEREINITIALIZE 
 * @member OUTPUTUNDERRUN 
 * @member RECORDPOSITIONCHANGED 
 * @member ALL 
 * @const_end
 */

/**
 * @const FMOD_MODE
 * @desc > **FMOD Constant:** [FMOD_MODE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_mode)
 * This constant specifies sound description bitfields. You can bitwise OR them together for loading and describing sounds.
 * @member DEFAULT Default for all modes listed below. FMOD_LOOP_OFF, FMOD_2D, FMOD_3D_WORLDRELATIVE, FMOD_3D_INVERSEROLLOFF
 * @member LOOP_OFF For non looping Sounds. (DEFAULT). Overrides FMOD_LOOP_NORMAL / FMOD_LOOP_BIDI.
 * @member LOOP_NORMAL For forward looping Sounds.
 * @member LOOP_BIDI For bidirectional looping Sounds. (only works on non-streaming, real voices).
 * @member AS_2D Ignores any 3d processing. (DEFAULT).
 * @member AS_3D Makes the Sound positionable in 3D. Overrides FMOD_2D.
 * @member CREATESTREAM Decompress at runtime, streaming from the source provided (ie from disk). Overrides FMOD_CREATESAMPLE and FMOD_CREATECOMPRESSEDSAMPLE. Note a stream can only be played once at a time due to a stream only having 1 stream buffer and file handle. Open multiple streams to have them play concurrently.
 * @member CREATESAMPLE Decompress at loadtime, decompressing or decoding whole file into memory as the target sample format (ie PCM). Fastest for playback and most flexible.
 * @member CREATECOMPRESSEDSAMPLE Load MP2/MP3/FADPCM/IMAADPCM/Vorbis/AT9 or XMA into memory and leave it compressed. Vorbis/AT9/FADPCM encoding only supported in the .FSB container format. During playback the FMOD software mixer will decode it in realtime as a 'compressed sample'. Overrides FMOD_CREATESAMPLE. If the sound data is not one of the supported formats, it will behave as if it was created with FMOD_CREATESAMPLE and decode the sound into PCM.
 * @member OPENUSER Opens a user-created static sample or stream. When used, the first argument of System::createSound and System::createStream, name_or_data, is ignored, so recommended practice is to pass null or equivalent. The following data must be provided using FMOD_CREATESOUNDEXINFO: cbsize, length, numchannels, defaultfrequency, format, and optionally readcallback. If a user-created 'sample' is created with no read callback, the sample will be empty. If this is the case, use Sound::lock and Sound::unlock to place sound data into the Sound.
 * @member OPENMEMORY When used, the first argument of System::createSound and System::createStream, name_or_data, is interpreted as a pointer to memory instead of filename for creating sounds. The following data must be provided using FMOD_CREATESOUNDEXINFO: cbsize, and length. If used with FMOD_CREATESAMPLE or FMOD_CREATECOMPRESSEDSAMPLE, FMOD duplicates the memory into its own buffers. Your own buffer can be freed after open, unless you are using FMOD_NONBLOCKING then wait until the Sound is in the FMOD_OPENSTATE_READY state. If used with FMOD_CREATESTREAM, FMOD will stream out of the buffer whose pointer you passed in. In this case, your own buffer should not be freed until you have finished with and released the stream.
 * @member OPENMEMORY_POINT When used, the first argument of System::createSound and System::createStream, name_or_data, is interpreted as a pointer to memory instead of filename for creating sounds. The following data must be provided using FMOD_CREATESOUNDEXINFO: cbsize, and length. This differs to FMOD_OPENMEMORY in that it uses the memory as is, without duplicating the memory into its own buffers. Cannot be freed after open, only after Sound::release. Will not work if the data is compressed and FMOD_CREATECOMPRESSEDSAMPLE is not used. Cannot be used in conjunction with FMOD_CREATESOUNDEXINFO::encryptionkey.
 * @member OPENRAW Will ignore file format and treat as raw pcm. The following data must be provided using FMOD_CREATESOUNDEXINFO: cbsize, numchannels, defaultfrequency, and format. Must be little endian data.
 * @member OPENONLY Just open the file, don't prebuffer or read. Good for fast opens for info, or when Sound::readData is to be used.
 * @member ACCURATETIME For System::createSound - for accurate Sound::getLength / Channel::setPosition on VBR MP3, and MOD/S3M/XM/IT/MIDI files. Scans file first, so takes longer to open. FMOD_OPENONLY does not affect this.
 * @member MPEGSEARCH For corrupted / bad MP3 files. This will search all the way through the file until it hits a valid MPEG header. Normally only searches for 4k.
 * @member NONBLOCKING For opening Sounds and getting streamed subsounds (seeking) asynchronously. Use Sound::getOpenState to poll the state of the Sound as it opens or retrieves the subsound in the background.
 * @member UNIQUE Unique Sound, can only be played one at a time.
 * @member AS_3D_HEADRELATIVE Make the Sound's position, velocity and orientation relative to the listener.
 * @member AS_3D_WORLDRELATIVE Make the Sound's position, velocity and orientation absolute (relative to the world). (DEFAULT)
 * @member AS_3D_INVERSEROLLOFF This sound follows an inverse roll-off model. Below mindistance, the volume is unattenuated; as distance increases above mindistance, the volume attenuates using mindistance/distance as the gradient until it reaches maxdistance, where it stops attenuating. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. This roll-off mode accurately models the way sounds attenuate over distance in the real world. (DEFAULT)
 * @member AS_3D_LINEARROLLOFF This sound follows a linear roll-off model. Below mindistance, the volume is unattenuated; as distance increases from mindistance to maxdistance, the volume attenuates to silence using a linear gradient. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. While this roll-off mode is not as realistic as inverse roll-off mode, it is easier to comprehend.
 * @member AS_3D_LINEARSQUAREROLLOFF This sound follows a linear-square roll-off model. Below mindistance, the volume is unattenuated; as distance increases from mindistance to maxdistance, the volume attenuates to silence according to a linear squared gradient. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. This roll-off mode provides steeper volume ramping close to the mindistance, and more gradual ramping close to the maxdistance, than linear roll-off mode.
 * @member AS_3D_INVERSETAPEREDROLLOFF This sound follows a combination of the inverse and linear-square roll-off models. At short distances where inverse roll-off would provide greater attenuation, it functions as inverse roll-off mode; then at greater distances where linear-square roll-off mode would provide greater attenuation, it uses that roll-off mode instead. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. Inverse tapered roll-off mode approximates realistic behavior while still guaranteeing the sound attenuates to silence at maxdistance.
 * @member AS_3D_CUSTOMROLLOFF This sound follow a roll-off model defined by Sound::set3DCustomRolloff / ChannelControl::set3DCustomRolloff. This roll-off mode provides greater freedom and flexibility than any other, but must be defined manually.
 * @member AS_3D_IGNOREGEOMETRY Is not affected by geometry occlusion. If not specified in Sound::setMode, or ChannelControl::setMode, the flag is cleared and it is affected by geometry again.
 * @member IGNORETAGS Skips id3v2/asf/etc. tag checks when opening a Sound, to reduce seek/read overhead when opening files.
 * @member LOWMEM Removes some features from samples to give a lower memory overhead, like Sound::getName.
 * @member MODEVIRTUAL_PLAYFROMSTART For Channels that start virtual (due to being quiet or low importance), instead of swapping back to audible, and playing at the correct offset according to time, this flag makes the Channel play from the start.
 * @const_end
 */

/**
 * @const FMOD_CHANNELMASK
 * @desc > **FMOD Constant:** [FMOD_CHANNELMASK](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_channelmask)
 * This constant specifies 
 * @member FRONT_LEFT 
 * @member FRONT_RIGHT 
 * @member FRONT_CENTER 
 * @member LOW_FREQUENCY 
 * @member SURROUND_LEFT 
 * @member SURROUND_RIGHT 
 * @member BACK_LEFT 
 * @member BACK_RIGHT 
 * @member BACK_CENTER 
 * @member MONO 
 * @member STEREO 
 * @member LRC 
 * @member QUAD 
 * @member SURROUND 
 * @member SURROUND_5POINT1 
 * @member SURROUND_5POINT1_REARS 
 * @member SURROUND_7POINT0 
 * @member SURROUND_7POINT1 
 * @const_end
 */

/**
 * @const FMOD_PORT_INDEX
 * @desc > **FMOD Constant:** [FMOD_PORT_INDEX](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_port_index)
 * This constant specifies 
 * @member NONE 
 * @member FLAG_VR_CONTROLLER 
 * @const_end
 */

/**
 * @const FMOD_THREAD_PRIORITY
 * @desc > **FMOD Constant:** [FMOD_THREAD_PRIORITY](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_thread_priority)
 * This constant specifies 
 * @member PLATFORM_MIN 
 * @member PLATFORM_MAX 
 * @member DEFAULT 
 * @member LOW 
 * @member MEDIUM 
 * @member HIGH 
 * @member VERY_HIGH 
 * @member EXTREME 
 * @member CRITICAL 
 * @member MIXER 
 * @member FEEDER 
 * @member STREAM 
 * @member FILE 
 * @member NONBLOCKING 
 * @member RECORD 
 * @member GEOMETRY 
 * @member PROFILER 
 * @member STUDIO_UPDATE 
 * @member STUDIO_LOAD_BANK 
 * @member STUDIO_LOAD_SAMPLE 
 * @member CONVOLUTION1 
 * @member CONVOLUTION2 
 * @const_end
 */

/**
 * @const FMOD_THREAD_STACK_SIZE
 * @desc > **FMOD Constant:** [FMOD_THREAD_STACK_SIZE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_thread_stack_size)
 * This constant specifies 
 * @member DEFAULT 
 * @member MIXER 
 * @member FEEDER 
 * @member STREAM 
 * @member FILE 
 * @member NONBLOCKING 
 * @member RECORD 
 * @member GEOMETRY 
 * @member PROFILER 
 * @member STUDIO_UPDATE 
 * @member STUDIO_LOAD_BANK 
 * @member STUDIO_LOAD_SAMPLE 
 * @member CONVOLUTION1 
 * @member CONVOLUTION2 
 * @const_end
 */

/**
 * @const FMOD_THREAD_AFFINITY
 * @desc > **FMOD Constant:** [FMOD_THREAD_AFFINITY](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_thread_affinity)
 * This constant specifies 
 * @member GROUP_DEFAULT 
 * @member GROUP_A 
 * @member GROUP_B 
 * @member GROUP_C 
 * @member MIXER 
 * @member FEEDER 
 * @member STREAM 
 * @member FILE 
 * @member NONBLOCKING 
 * @member RECORD 
 * @member GEOMETRY 
 * @member PROFILER 
 * @member STUDIO_UPDATE 
 * @member STUDIO_LOAD_BANK 
 * @member STUDIO_LOAD_SAMPLE 
 * @member CONVOLUTION1 
 * @member CONVOLUTION2 
 * @member CORE_ALL 
 * @member CORE_0 
 * @member CORE_1 
 * @member CORE_2 
 * @member CORE_3 
 * @member CORE_4 
 * @member CORE_5 
 * @member CORE_6 
 * @member CORE_7 
 * @member CORE_8 
 * @member CORE_9 
 * @member CORE_10 
 * @member CORE_11 
 * @member CORE_12 
 * @member CORE_13 
 * @member CORE_14 
 * @member CORE_15 
}

/* Preset for struct.FmodReverbProperties */

#macro FMOD_PRESET_OFF                             { decay_time:  1000, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio: 100, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:    20, early_late_mix:  96, wet_level: -80.0 }
#macro FMOD_PRESET_GENERIC                         { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  83, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut: 14500, early_late_mix:  96, wet_level:  -8.0 }
#macro FMOD_PRESET_PADDEDCELL                      { decay_time:   170, early_delay:   1, late_delay:   2, hf_reference: 5000, hf_decay_ratio:  10, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   160, early_late_mix:  84, wet_level:  -7.8 }
#macro FMOD_PRESET_ROOM                            { decay_time:   400, early_delay:   2, late_delay:   3, hf_reference: 5000, hf_decay_ratio:  83, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  6050, early_late_mix:  88, wet_level:  -9.4 }
#macro FMOD_PRESET_BATHROOM                        { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  54, diffusion: 100, density:  60, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  2900, early_late_mix:  83, wet_level:   0.5 }
#macro FMOD_PRESET_LIVINGROOM                      { decay_time:   500, early_delay:   3, late_delay:   4, hf_reference: 5000, hf_decay_ratio:  10, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   160, early_late_mix:  58, wet_level: -19.0 }
#macro FMOD_PRESET_STONEROOM                       { decay_time:  2300, early_delay:  12, late_delay:  17, hf_reference: 5000, hf_decay_ratio:  64, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  7800, early_late_mix:  71, wet_level:  -8.5 }
#macro FMOD_PRESET_AUDITORIUM                      { decay_time:  4300, early_delay:  20, late_delay:  30, hf_reference: 5000, hf_decay_ratio:  59, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  5850, early_late_mix:  64, wet_level: -11.7 }
#macro FMOD_PRESET_CONCERTHALL                     { decay_time:  3900, early_delay:  20, late_delay:  29, hf_reference: 5000, hf_decay_ratio:  70, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  5650, early_late_mix:  80, wet_level:  -9.8 }
#macro FMOD_PRESET_CAVE                            { decay_time:  2900, early_delay:  15, late_delay:  22, hf_reference: 5000, hf_decay_ratio: 100, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut: 20000, early_late_mix:  59, wet_level: -11.3 }
#macro FMOD_PRESET_ARENA                           { decay_time:  7200, early_delay:  20, late_delay:  30, hf_reference: 5000, hf_decay_ratio:  33, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  4500, early_late_mix:  80, wet_level:  -9.6 }
#macro FMOD_PRESET_HANGAR                          { decay_time: 10000, early_delay:  20, late_delay:  30, hf_reference: 5000, hf_decay_ratio:  23, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  3400, early_late_mix:  72, wet_level:  -7.4 }
#macro FMOD_PRESET_CARPETTEDHALLWAY                { decay_time:   300, early_delay:   2, late_delay:  30, hf_reference: 5000, hf_decay_ratio:  10, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   500, early_late_mix:  56, wet_level: -24.0 }
#macro FMOD_PRESET_HALLWAY                         { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  59, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  7800, early_late_mix:  87, wet_level:  -5.5 }
#macro FMOD_PRESET_STONECORRIDOR                   { decay_time:   270, early_delay:  13, late_delay:  20, hf_reference: 5000, hf_decay_ratio:  79, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  9000, early_late_mix:  86, wet_level:  -6.0 }
#macro FMOD_PRESET_ALLEY                           { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  86, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  8300, early_late_mix:  80, wet_level:  -9.8 }
#macro FMOD_PRESET_FOREST                          { decay_time:  1500, early_delay: 162, late_delay:  88, hf_reference: 5000, hf_decay_ratio:  54, diffusion:  79, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   760, early_late_mix:  94, wet_level: -12.3 }
#macro FMOD_PRESET_CITY                            { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  67, diffusion:  50, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  4050, early_late_mix:  66, wet_level: -26.0 }
#macro FMOD_PRESET_MOUNTAINS                       { decay_time:  1500, early_delay: 300, late_delay: 100, hf_reference: 5000, hf_decay_ratio:  21, diffusion:  27, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  1220, early_late_mix:  82, wet_level: -24.0 }
#macro FMOD_PRESET_QUARRY                          { decay_time:  1500, early_delay:  61, late_delay:  25, hf_reference: 5000, hf_decay_ratio:  83, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  3400, early_late_mix: 100, wet_level:  -5.0 }
#macro FMOD_PRESET_PLAIN                           { decay_time:  1500, early_delay: 179, late_delay: 100, hf_reference: 5000, hf_decay_ratio:  50, diffusion:  21, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  1670, early_late_mix:  65, wet_level: -28.0 }
#macro FMOD_PRESET_PARKINGLOT                      { decay_time:  1700, early_delay:   8, late_delay:  12, hf_reference: 5000, hf_decay_ratio: 100, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut: 20000, early_late_mix:  56, wet_level: -19.5 }
#macro FMOD_PRESET_SEWERPIPE                       { decay_time:  2800, early_delay:  14, late_delay:  21, hf_reference: 5000, hf_decay_ratio:  14, diffusion:  80, density:  60, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  3400, early_late_mix:  66, wet_level:   1.2 }
#macro FMOD_PRESET_UNDERWATER                      { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  10, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   500, early_late_mix:  92, wet_level:   7.0 }

#macro FMOD_MAX_CHANNEL_WIDTH                      32
#macro FMOD_MAX_SYSTEMS                            8
#macro FMOD_MAX_LISTENERS                          8
#macro FMOD_REVERB_MAXINSTANCES                    4

/**
 * @const FMOD_THREAD_TYPE
 * @desc > **FMOD Constant:** [FMOD_THREAD_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_thread_type)
 * This constant specifies 
 * @member MIXER
 * @member FEEDER
 * @member STREAM
 * @member FILE
 * @member NONBLOCKING
 * @member RECORD
 * @member GEOMETRY
 * @member PROFILER
 * @member STUDIO_UPDATE
 * @member STUDIO_LOAD_BANK
 * @member STUDIO_LOAD_SAMPLE
 * @member CONVOLUTION1
 * @member CONVOLUTION2
 * @const_end
 */

/**
 * @const FMOD_RESULT
 * @desc > **FMOD Constant:** [FMOD_RESULT](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_result)
 * This constant specifies 
 * @member OK
 * @member ERR_BADCOMMAND
 * @member ERR_CHANNEL_ALLOC
 * @member ERR_CHANNEL_STOLEN
 * @member ERR_DMA
 * @member ERR_DSP_CONNECTION
 * @member ERR_DSP_DONTPROCESS
 * @member ERR_DSP_FORMAT
 * @member ERR_DSP_INUSE
 * @member ERR_DSP_NOTFOUND
 * @member ERR_DSP_RESERVED
 * @member ERR_DSP_SILENCE
 * @member ERR_DSP_TYPE
 * @member ERR_FILE_BAD
 * @member ERR_FILE_COULDNOTSEEK
 * @member ERR_FILE_DISKEJECTED
 * @member ERR_FILE_EOF
 * @member ERR_FILE_ENDOFDATA
 * @member ERR_FILE_NOTFOUND
 * @member ERR_FORMAT
 * @member ERR_HEADER_MISMATCH
 * @member ERR_HTTP
 * @member ERR_HTTP_ACCESS
 * @member ERR_HTTP_PROXY_AUTH
 * @member ERR_HTTP_SERVER_ERROR
 * @member ERR_HTTP_TIMEOUT
 * @member ERR_INITIALIZATION
 * @member ERR_INITIALIZED
 * @member ERR_INTERNAL
 * @member ERR_INVALID_FLOAT
 * @member ERR_INVALID_HANDLE
 * @member ERR_INVALID_PARAM
 * @member ERR_INVALID_POSITION
 * @member ERR_INVALID_SPEAKER
 * @member ERR_INVALID_SYNCPOINT
 * @member ERR_INVALID_THREAD
 * @member ERR_INVALID_VECTOR
 * @member ERR_MAXAUDIBLE
 * @member ERR_MEMORY
 * @member ERR_MEMORY_CANTPOINT
 * @member ERR_NEEDS3D
 * @member ERR_NEEDSHARDWARE
 * @member ERR_NET_CONNECT
 * @member ERR_NET_SOCKET_ERROR
 * @member ERR_NET_URL
 * @member ERR_NET_WOULD_BLOCK
 * @member ERR_NOTREADY
 * @member ERR_OUTPUT_ALLOCATED
 * @member ERR_OUTPUT_CREATEBUFFER
 * @member ERR_OUTPUT_DRIVERCALL
 * @member ERR_OUTPUT_FORMAT
 * @member ERR_OUTPUT_INIT
 * @member ERR_OUTPUT_NODRIVERS
 * @member ERR_PLUGIN
 * @member ERR_PLUGIN_MISSING
 * @member ERR_PLUGIN_RESOURCE
 * @member ERR_PLUGIN_VERSION
 * @member ERR_RECORD
 * @member ERR_REVERB_CHANNELGROUP
 * @member ERR_REVERB_INSTANCE
 * @member ERR_SUBSOUNDS
 * @member ERR_SUBSOUND_ALLOCATED
 * @member ERR_SUBSOUND_CANTMOVE
 * @member ERR_TAGNOTFOUND
 * @member ERR_TOOMANYCHANNELS
 * @member ERR_TRUNCATED
 * @member ERR_UNIMPLEMENTED
 * @member ERR_UNINITIALIZED
 * @member ERR_UNSUPPORTED
 * @member ERR_VERSION
 * @member ERR_EVENT_ALREADY_LOADED
 * @member ERR_EVENT_LIVEUPDATE_BUSY
 * @member ERR_EVENT_LIVEUPDATE_MISMATCH
 * @member ERR_EVENT_LIVEUPDATE_TIMEOUT
 * @member ERR_EVENT_NOTFOUND
 * @member ERR_STUDIO_UNINITIALIZED
 * @member ERR_STUDIO_NOT_LOADED
 * @member ERR_INVALID_STRING
 * @member ERR_ALREADY_LOCKED
 * @member ERR_NOT_LOCKED
 * @member ERR_RECORD_DISCONNECTED
 * @member ERR_TOOMANYSAMPLES
 * @const_end
 */

/**
 * @const FMOD_CHANNELCONTROL_TYPE
 * @desc > **FMOD Constant:** [FMOD_CHANNELCONTROL_TYPE](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#fmod_channelcontrol_type)
 * This constant specifies 
 * @member CHANNEL
 * @member CHANNELGROUP
 * @const_end
 */

/**
 * @const FMOD_OUTPUTTYPE
 * @desc > **FMOD Constant:** [FMOD_OUTPUTTYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_outputtype)
 * This constant specifies 
 * @member AUTODETECT
 * @member UNKNOWN
 * @member NOSOUND
 * @member WAVWRITER
 * @member NOSOUND_NRT
 * @member WAVWRITER_NRT
 * @member WASAPI
 * @member ASIO
 * @member PULSEAUDIO
 * @member ALSA
 * @member COREAUDIO
 * @member AUDIOTRACK
 * @member OPENSL
 * @member AUDIOOUT
 * @member AUDIO3D
 * @member WEBAUDIO
 * @member NNAUDIO
 * @member WINSONIC
 * @member AAUDIO
 * @member AUDIOWORKLET
 * @member PHASE
 * @const_end
 */

/**
 * @const FMOD_DEBUG_MODE
 * @desc > **FMOD Constant:** [FMOD_DEBUG_MODE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_debug_mode)
 * This constant specifies 
 * @member TTY
 * @member FILE
 * @member CALLBACK
 * @const_end
 */

/**
 * @const FMOD_SPEAKERMODE
 * @desc > **FMOD Constant:** [FMOD_SPEAKERMODE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_speakermode)
 * This constant specifies 
 * @member DEFAULT
 * @member RAW
 * @member MONO
 * @member STEREO
 * @member QUAD
 * @member SURROUND
 * @member _5POINT1
 * @member _7POINT1
 * @member _7POINT1POINT4
 * @const_end
 */

/**
 * @const FMOD_SPEAKER
 * @desc > **FMOD Constant:** [FMOD_SPEAKER](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_speaker)
 * This constant specifies 
 * @member NONE = -1
 * @member FRONT_LEFT = 0
 * @member FRONT_RIGHT
 * @member FRONT_CENTER
 * @member LOW_FREQUENCY
 * @member SURROUND_LEFT
 * @member SURROUND_RIGHT
 * @member BACK_LEFT
 * @member BACK_RIGHT
 * @member TOP_FRONT_LEFT
 * @member TOP_FRONT_RIGHT
 * @member TOP_BACK_LEFT
 * @member TOP_BACK_RIGHT
 * @const_end
 */

/**
 * @const FMOD_CHANNELORDER
 * @desc > **FMOD Constant:** [FMOD_CHANNELORDER](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_channelorder)
 * This constant specifies 
 * @member DEFAULT
 * @member WAVEFORMAT
 * @member PROTOOLS
 * @member ALLMONO
 * @member ALLSTEREO
 * @member ALSA
 * @const_end
 */

/**
 * @const FMOD_PLUGINTYPE
 * @desc > **FMOD Constant:** [FMOD_PLUGINTYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_plugintype)
 * This constant specifies 
 * @member OUTPUT
 * @member CODEC
 * @member DSP
 * @const_end
 */

/**
 * @const FMOD_SOUND_TYPE
 * @desc > **FMOD Constant:** [FMOD_SOUND_TYPE](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_sound_type)
 * This constant specifies 
 * @member UNKNOWN
 * @member AIFF
 * @member ASF
 * @member DLS
 * @member FLAC
 * @member FSB
 * @member IT
 * @member MIDI
 * @member MOD
 * @member MPEG
 * @member OGGVORBIS
 * @member PLAYLIST
 * @member RAW
 * @member S3M
 * @member USER
 * @member WAV
 * @member XM
 * @member XMA
 * @member AUDIOQUEUE
 * @member AT9
 * @member VORBIS
 * @member MEDIA_FOUNDATION
 * @member MEDIACODEC
 * @member FADPCM
 * @member OPUS
 * @const_end
 */

/**
 * @const FMOD_SOUND_FORMAT
 * @desc > **FMOD Constant:** [FMOD_SOUND_FORMAT](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_sound_format)
 * This constant specifies 
 * @member NONE
 * @member PCM8
 * @member PCM16
 * @member PCM24
 * @member PCM32
 * @member PCMFLOAT
 * @member BITSTREAM
 * @const_end
 */

/**
 * @const FMOD_OPENSTATE
 * @desc > **FMOD Constant:** [FMOD_OPENSTATE](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_openstate)
 * This constant specifies 
 * @member READY
 * @member LOADING
 * @member ERROR
 * @member CONNECTING
 * @member BUFFERING
 * @member SEEKING
 * @member PLAYING
 * @member SETPOSITION
 * @const_end
 */

/**
 * @const FMOD_SOUNDGROUP_BEHAVIOR
 * @desc > **FMOD Constant:** [FMOD_SOUNDGROUP_BEHAVIOR](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#fmod_soundgroup_behavior)
 * This constant specifies 
 * @member FAIL
 * @member MUTE
 * @member STEALLOWEST
 * @const_end
 */

/**
 * @const FMOD_CHANNELCONTROL_CALLBACK_TYPE
 * @desc > **FMOD Constant:** [FMOD_CHANNELCONTROL_CALLBACK_TYPE](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#fmod_channelcontrol_callback_type)
 * This constant specifies 
 * @member END
 * @member VIRTUALVOICE
 * @member SYNCPOINT
 * @member OCCLUSION
 * @const_end
 */

/**
 * @const FMOD_CHANNELCONTROL_DSP_INDEX
 * @desc > **FMOD Constant:** [FMOD_CHANNELCONTROL_DSP_INDEX](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#fmod_channelcontrol_dsp_index)
 * This constant specifies 
 * @member HEAD 
 * @member FADER 
 * @member TAIL 
 * @const_end
 */

/**
 * @const FMOD_ERRORCALLBACK_INSTANCETYPE
 * @desc > **FMOD Constant:** [FMOD_ERRORCALLBACK_INSTANCETYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_errorcallback_instancetype)
 * This constant specifies 
 * @member NONE
 * @member SYSTEM
 * @member CHANNEL
 * @member CHANNELGROUP
 * @member CHANNELCONTROL
 * @member SOUND
 * @member SOUNDGROUP
 * @member DSP
 * @member DSPCONNECTION
 * @member GEOMETRY
 * @member REVERB3D
 * @member STUDIO_SYSTEM
 * @member STUDIO_EVENTDESCRIPTION
 * @member STUDIO_EVENTINSTANCE
 * @member STUDIO_PARAMETERINSTANCE
 * @member STUDIO_BUS
 * @member STUDIO_VCA
 * @member STUDIO_BANK
 * @member STUDIO_COMMANDREPLAY
 * @const_end
 */

/**
 * @const FMOD_DSP_RESAMPLER
 * @desc > **FMOD Constant:** [FMOD_DSP_RESAMPLER](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_dsp_resampler)
 * This constant specifies 
 * @member DEFAULT
 * @member NOINTERP
 * @member LINEAR
 * @member CUBIC
 * @member SPLINE
 * @const_end
 */

/**
 * @const FMOD_DSP_CALLBACK_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_CALLBACK_TYPE](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#fmod_dsp_callback_type)
 * This constant specifies 
 * @member DATAPARAMETERRELEASE
 * @const_end
 */

/**
 * @const FMOD_DSPCONNECTION_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSPCONNECTION_TYPE](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#fmod_dspconnection_type)
 * This constant specifies 
 * @member STANDARD
 * @member SIDECHAIN
 * @member SEND
 * @member SEND_SIDECHAIN
 * @const_end
 */

/**
 * @const FMOD_TAGTYPE
 * @desc > **FMOD Constant:** [FMOD_TAGTYPE](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_tagtype)
 * This constant specifies 
 * @member UNKNOWN
 * @member ID3V1
 * @member ID3V2
 * @member VORBISCOMMENT
 * @member SHOUTCAST
 * @member ICECAST
 * @member ASF
 * @member MIDI
 * @member PLAYLIST
 * @member FMOD
 * @member USER
 * @const_end
 */

/**
 * @const FMOD_TAGDATATYPE
 * @desc > **FMOD Constant:** [FMOD_TAGDATATYPE](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_tagdatatype)
 * This constant specifies 
 * @member BINARY
 * @member INT
 * @member FLOAT
 * @member STRING
 * @member STRING_UTF16
 * @member STRING_UTF16BE
 * @member STRING_UTF8
 * @const_end
 */

/**
 * @const FMOD_PORT_TYPE
 * @desc > **FMOD Constant:** [FMOD_PORT_TYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_port_type)
 * This constant specifies 
 * @member MUSIC
 * @member COPYRIGHT_MUSIC
 * @member VOICE
 * @member CONTROLLER
 * @member PERSONAL
 * @member VIBRATION
 * @member AUX
};

/* Codec constants */

#macro FMOD_CODEC_PLUGIN_VERSION 1

/**
 * @const FMOD_CODEC_SEEK_METHOD 
 * @desc > **FMOD Constant:** [FMOD_CODEC_SEEK_METHOD](https://www.fmod.com/docs/2.02/api/plugin-api-codec.html#fmod_codec_seek_method)
 * This constant specifies 
 * @member SET 
 * @member CURRENT 
 * @member END 
 * @const_end
 */

/* DSP Constants */

#macro FMOD_PLUGIN_SDK_VERSION             110
#macro FMOD_DSP_GETPARAM_VALUESTR_LENGTH   32

/**
 * @const FMOD_DSP_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_type)
 * This constant specifies 
 * @member UNKNOWN
 * @member MIXER
 * @member OSCILLATOR
 * @member LOWPASS
 * @member ITLOWPASS
 * @member HIGHPASS
 * @member ECHO
 * @member FADER
 * @member FLANGE
 * @member DISTORTION
 * @member NORMALIZE
 * @member LIMITER
 * @member PARAMEQ
 * @member PITCHSHIFT
 * @member CHORUS
 * @member VSTPLUGIN
 * @member WINAMPPLUGIN
 * @member ITECHO
 * @member COMPRESSOR
 * @member SFXREVERB
 * @member LOWPASS_SIMPLE
 * @member DELAY
 * @member TREMOLO
 * @member LADSPAPLUGIN
 * @member SEND
 * @member RETURN
 * @member HIGHPASS_SIMPLE
 * @member PAN
 * @member THREE_EQ
 * @member FFT
 * @member LOUDNESS_METER
 * @member ENVELOPEFOLLOWER
 * @member CONVOLUTIONREVERB
 * @member CHANNELMIX
 * @member TRANSCEIVER
 * @member OBJECTPAN
 * @member MULTIBAND_EQ
 * @const_end
 */

/**
 * @const FMOD_DSP_OSCILLATOR
 * @desc > **FMOD Constant:** [FMOD_DSP_OSCILLATOR](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_oscillator)
 * This constant specifies 

 * @member TYPE
 * @member RATE
 * @const_end
 */

/**
 * @const FMOD_DSP_LOWPASS
 * @desc > **FMOD Constant:** [FMOD_DSP_LOWPASS](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_lowpass)
 * This constant specifies 
 * @member CUTOFF
 * @member RESONANCE
 * @const_end
 */

/**
 * @const FMOD_DSP_ITLOWPASS
 * @desc > **FMOD Constant:** [FMOD_DSP_ITLOWPASS](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_itlowpass)
 * This constant specifies 
 * @member CUTOFF
 * @member RESONANCE
 * @const_end
 */

/**
 * @const FMOD_DSP_HIGHPASS
 * @desc > **FMOD Constant:** [FMOD_DSP_HIGHPASS](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_highpass)
 * This constant specifies 
 * @member CUTOFF
 * @member RESONANCE
 * @const_end
 */

/**
 * @const FMOD_DSP_ECHO
 * @desc > **FMOD Constant:** [FMOD_DSP_ECHO](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_echo)
 * This constant specifies 
 * @member DELAY
 * @member FEEDBACK
 * @member DRYLEVEL
 * @member WETLEVEL
 * @const_end
 */

/**
 * @const FMOD_DSP_FADER
 * @desc > **FMOD Constant:** [FMOD_DSP_FADER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_fader)
 * This constant specifies 
 * @member GAIN
 * @member OVERALL_GAIN
 * @const_end
 */

/**
 * @const FMOD_DSP_FLANGE
 * @desc > **FMOD Constant:** [FMOD_DSP_FLANGE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_flange)
 * This constant specifies 
 * @member MIX
 * @member DEPTH
 * @member RATE
 * @const_end
 */

/**
 * @const FMOD_DSP_DISTORTION
 * @desc > **FMOD Constant:** [FMOD_DSP_DISTORTION](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_distortion)
 * This constant specifies 
 * @member LEVEL
 * @const_end
 */

/**
 * @const FMOD_DSP_NORMALIZE
 * @desc > **FMOD Constant:** [FMOD_DSP_NORMALIZE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_normalize)
 * This constant specifies 
 * @member FADETIME
 * @member THRESHOLD
 * @member MAXAMP
 * @const_end
 */

/**
 * @const FMOD_DSP_LIMITER
 * @desc > **FMOD Constant:** [FMOD_DSP_LIMITER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_limiter)
 * This constant specifies 
 * @member RELEASETIME
 * @member CEILING
 * @member MAXIMIZERGAIN
 * @member MODE
 * @const_end
 */

/**
 * @const FMOD_DSP_PARAMEQ
 * @desc > **FMOD Constant:** [FMOD_DSP_PARAMEQ](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_parameq)
 * This constant specifies 
 * @member CENTER
 * @member BANDWIDTH
 * @member GAIN
 * @const_end
 */

/**
 * @const FMOD_DSP_MULTIBAND_EQ
 * @desc > **FMOD Constant:** [FMOD_DSP_MULTIBAND_EQ](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_multiband_eq)
 * This constant specifies 
 * @member A_FILTER
 * @member A_FREQUENCY
 * @member A_Q
 * @member A_GAIN
 * @member B_FILTER
 * @member B_FREQUENCY
 * @member B_Q
 * @member B_GAIN
 * @member C_FILTER
 * @member C_FREQUENCY
 * @member C_Q
 * @member C_GAIN
 * @member D_FILTER
 * @member D_FREQUENCY
 * @member D_Q
 * @member D_GAIN
 * @member E_FILTER
 * @member E_FREQUENCY
 * @member E_Q
 * @member E_GAIN
 * @const_end
 */

/**
 * @const FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_multiband_eq_filter_type)
 * This constant specifies 
 * @member DISABLED
 * @member LOWPASS_12DB
 * @member LOWPASS_24DB
 * @member LOWPASS_48DB
 * @member HIGHPASS_12DB
 * @member HIGHPASS_24DB
 * @member HIGHPASS_48DB
 * @member LOWSHELF
 * @member HIGHSHELF
 * @member PEAKING
 * @member BANDPASS
 * @member NOTCH
 * @member ALLPASS
 * @const_end
 */

/**
 * @const FMOD_DSP_PITCHSHIFT
 * @desc > **FMOD Constant:** [FMOD_DSP_PITCHSHIFT](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pitchshift)
 * This constant specifies 
 * @member PITCH
 * @member FFTSIZE
 * @member OVERLAP
 * @member MAXCHANNELS
 * @const_end
 */

/**
 * @const FMOD_DSP_CHORUS
 * @desc > **FMOD Constant:** [FMOD_DSP_CHORUS](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_chorus)
 * This constant specifies 
 * @member MIX
 * @member RATE
 * @member DEPTH
 * @const_end
 */

/**
 * @const FMOD_DSP_ITECHO
 * @desc > **FMOD Constant:** [FMOD_DSP_ITECHO](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_itecho)
 * This constant specifies 
 * @member WETDRYMIX
 * @member FEEDBACK
 * @member LEFTDELAY
 * @member RIGHTDELAY
 * @member PANDELAY
 * @const_end
 */

/**
 * @const FMOD_DSP_COMPRESSOR
 * @desc > **FMOD Constant:** [FMOD_DSP_COMPRESSOR](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_compressor)
 * This constant specifies 
 * @member THRESHOLD, 
 * @member RATIO, 
 * @member ATTACK
 * @member RELEASE
 * @member GAINMAKEUP
 * @member USESIDECHAIN
 * @member LINKED
 * @const_end
 */

/**
 * @const FMOD_DSP_SFXREVERB
 * @desc > **FMOD Constant:** [FMOD_DSP_SFXREVERB](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_sfxreverb)
 * This constant specifies 
 * @member DECAYTIME
 * @member EARLYDELAY
 * @member LATEDELAY
 * @member HFREFERENCE
 * @member HFDECAYRATIO
 * @member DIFFUSION
 * @member DENSITY
 * @member LOWSHELFFREQUENCY
 * @member LOWSHELFGAIN
 * @member HIGHCUT
 * @member EARLYLATEMIX
 * @member WETLEVEL
 * @member DRYLEVEL
 * @const_end
 */

/**
 * @const FMOD_DSP_LOWPASS_SIMPLE
 * @desc > **FMOD Constant:** [FMOD_DSP_LOWPASS_SIMPLE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_lowpass_simple)
 * This constant specifies 
 * @member CUTOFF
 * @const_end
 */

/**
 * @const FMOD_DSP_DELAY
 * @desc > **FMOD Constant:** [FMOD_DSP_DELAY](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_delay)
 * This constant specifies 
 * @member CH0
 * @member CH1
 * @member CH2
 * @member CH3
 * @member CH4
 * @member CH5
 * @member CH6
 * @member CH7
 * @member CH8
 * @member CH9
 * @member CH10
 * @member CH11
 * @member CH12
 * @member CH13
 * @member CH14
 * @member CH15
 * @member MAXDELAY
 * @const_end
 */

/**
 * @const FMOD_DSP_TREMOLO
 * @desc > **FMOD Constant:** [FMOD_DSP_TREMOLO](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_tremolo)
 * This constant specifies 
 * @member FREQUENCY
 * @member DEPTH
 * @member SHAPE
 * @member SKEW
 * @member DUTY
 * @member SQUARE
 * @member PHASE
 * @member SPREAD
 * @const_end
 */

/**
 * @const FMOD_DSP_SEND
 * @desc > **FMOD Constant:** [FMOD_DSP_SEND](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_send)
 * This constant specifies 
 * @member RETURNID
 * @member LEVEL
 * @const_end
 */

/**
 * @const FMOD_DSP_RETURN
 * @desc > **FMOD Constant:** [FMOD_DSP_RETURN](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_return)
 * This constant specifies 
 * @member ID
 * @member INPUT_SPEAKER_MODE
 * @const_end
 */

/**
 * @const FMOD_DSP_HIGHPASS_SIMPLE
 * @desc > **FMOD Constant:** [FMOD_DSP_HIGHPASS_SIMPLE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_highpass_simple)
 * This constant specifies 
 * @member CUTOFF
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN_2D_STEREO_MODE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_2D_STEREO_MODE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan_2d_stereo_mode_type)
 * This constant specifies 
 * @member DISTRIBUTED
 * @member DISCRETE
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN_MODE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_MODE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan_mode_type)
 * This constant specifies 
 * @member MONO
 * @member STEREO
 * @member SURROUND
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN_3D_ROLLOFF_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_3D_ROLLOFF_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan_3d_rolloff_type)
 * This constant specifies 
 * @member LINEARSQUARED
 * @member LINEAR
 * @member INVERSE
 * @member INVERSETAPERED
 * @member CUSTOM
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN_3D_EXTENT_MODE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_3D_EXTENT_MODE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan_3d_extent_mode_type)
 * This constant specifies 
 * @member AUTO
 * @member USER
 * @member OFF
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan)
 * This constant specifies 
 * @member MODE
 * @member _2D_STEREO_POSITION
 * @member _2D_DIRECTION
 * @member _2D_EXTENT
 * @member _2D_ROTATION
 * @member _2D_LFE_LEVEL
 * @member _2D_STEREO_MODE
 * @member _2D_STEREO_SEPARATION
 * @member _2D_STEREO_AXIS
 * @member ENABLED_SPEAKERS
 * @member _3D_POSITION
 * @member _3D_ROLLOFF
 * @member _3D_MIN_DISTANCE
 * @member _3D_MAX_DISTANCE
 * @member _3D_EXTENT_MODE
 * @member _3D_SOUND_SIZE
 * @member _3D_MIN_EXTENT
 * @member _3D_PAN_BLEND
 * @member LFE_UPMIX_ENABLED
 * @member OVERALL_GAIN
 * @member SURROUND_SPEAKER_MODE
 * @member _2D_HEIGHT_BLEND
 * @member ATTENUATION_RANGE
 * @member OVERRIDE_RANGE
 * @const_end
 */

/**
 * @const FMOD_DSP_THREE_EQ_CROSSOVERSLOPE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_THREE_EQ_CROSSOVERSLOPE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_three_eq_crossoverslope_type)
 * This constant specifies 
 * @member _12DB
 * @member _24DB
 * @member _48DB
 * @const_end
 */

/**
 * @const FMOD_DSP_THREE_EQ
 * @desc > **FMOD Constant:** [FMOD_DSP_THREE_EQ](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_three_eq)
 * This constant specifies 
 * @member LOWGAIN
 * @member MIDGAIN
 * @member HIGHGAIN
 * @member LOWCROSSOVER
 * @member HIGHCROSSOVER
 * @member CROSSOVERSLOPE
 * @const_end
 */

/**
 * @const FMOD_DSP_FFT_WINDOW
 * @desc > **FMOD Constant:** [FMOD_DSP_FFT_WINDOW](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_fft_window)
 * This constant specifies 
 * @member RECT
 * @member TRIANGLE
 * @member HAMMING
 * @member HANNING
 * @member BLACKMAN
 * @member BLACKMANHARRIS
 * @const_end
 */

/**
 * @const FMOD_DSP_FFT
 * @desc > **FMOD Constant:** [FMOD_DSP_FFT](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_fft)
 * This constant specifies 
 * @member WINDOWSIZE
 * @member WINDOWTYPE
 * @member SPECTRUMDATA
 * @member DOMINANT_FREQ
 * @const_end
 */

#macro FMOD_DSP_LOUDNESS_METER_HISTOGRAM_SAMPLES 66

/**
 * @const FMOD_DSP_LOUDNESS_METER
 * @desc > **FMOD Constant:** [FMOD_DSP_LOUDNESS_METER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_loudness_meter)
 * This constant specifies 
 * @member STATE
 * @member WEIGHTING
 * @member INFO
 * @const_end
 */

/**
 * @const FMOD_DSP_LOUDNESS_METER_STATE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_LOUDNESS_METER_STATE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_loudness_meter_state_type)
 * This constant specifies 
 * @member RESET_INTEGRATED 
 * @member RESET_MAXPEAK 
 * @member RESET_ALL 
 * @member PAUSED 
 * @member ANALYZING 
 * @const_end
 */

/**
 * @const FMOD_DSP_ENVELOPEFOLLOWER
 * @desc > **FMOD Constant:** [FMOD_DSP_ENVELOPEFOLLOWER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_envelopefollower)
 * This constant specifies 
 * @member ATTACK
 * @member RELEASE
 * @member ENVELOPE
 * @member USESIDECHAIN
 * @const_end
 */

/**
 * @const FMOD_DSP_CONVOLUTION_REVERB_PARAM
 * @desc > **FMOD Constant:** [FMOD_DSP_CONVOLUTION_REVERB_PARAM](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_convolution_reverb)
 * This constant specifies 
 * @member IR
 * @member WET
 * @member DRY
 * @member LINKED
 * @const_end
 */

/**
 * @const FMOD_DSP_CHANNELMIX_OUTPUT
 * @desc > **FMOD Constant:** [FMOD_DSP_CHANNELMIX_OUTPUT](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_channelmix_output)
 * This constant specifies 
 * @member DEFAULT
 * @member ALLMONO
 * @member ALLSTEREO
 * @member ALLQUAD
 * @member ALL5POINT1
 * @member ALL7POINT1
 * @member ALLLFE
 * @member ALL7POINT1POINT4
 * @const_end
 */

/**
 * @const FMOD_DSP_CHANNELMIX
 * @desc > **FMOD Constant:** [FMOD_DSP_CHANNELMIX](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_channelmix)
 * This constant specifies 
 * @member OUTPUTGROUPING
 * @member GAIN_CH0
 * @member GAIN_CH1
 * @member GAIN_CH2
 * @member GAIN_CH3
 * @member GAIN_CH4
 * @member GAIN_CH5
 * @member GAIN_CH6
 * @member GAIN_CH7
 * @member GAIN_CH8
 * @member GAIN_CH9
 * @member GAIN_CH10
 * @member GAIN_CH11
 * @member GAIN_CH12
 * @member GAIN_CH13
 * @member GAIN_CH14
 * @member GAIN_CH15
 * @member GAIN_CH16
 * @member GAIN_CH17
 * @member GAIN_CH18
 * @member GAIN_CH19
 * @member GAIN_CH20
 * @member GAIN_CH21
 * @member GAIN_CH22
 * @member GAIN_CH23
 * @member GAIN_CH24
 * @member GAIN_CH25
 * @member GAIN_CH26
 * @member GAIN_CH27
 * @member GAIN_CH28
 * @member GAIN_CH29
 * @member GAIN_CH30
 * @member GAIN_CH31
 * @member OUTPUT_CH0
 * @member OUTPUT_CH1
 * @member OUTPUT_CH2
 * @member OUTPUT_CH3
 * @member OUTPUT_CH4
 * @member OUTPUT_CH5
 * @member OUTPUT_CH6
 * @member OUTPUT_CH7
 * @member OUTPUT_CH8
 * @member OUTPUT_CH9
 * @member OUTPUT_CH10
 * @member OUTPUT_CH11
 * @member OUTPUT_CH12
 * @member OUTPUT_CH13
 * @member OUTPUT_CH14
 * @member OUTPUT_CH15
 * @member OUTPUT_CH16
 * @member OUTPUT_CH17
 * @member OUTPUT_CH18
 * @member OUTPUT_CH19
 * @member OUTPUT_CH20
 * @member OUTPUT_CH21
 * @member OUTPUT_CH22
 * @member OUTPUT_CH23
 * @member OUTPUT_CH24
 * @member OUTPUT_CH25
 * @member OUTPUT_CH26
 * @member OUTPUT_CH27
 * @member OUTPUT_CH28
 * @member OUTPUT_CH29
 * @member OUTPUT_CH30
 * @member OUTPUT_CH31
 * @const_end
 */

/**
 * @const FMOD_DSP_TRANSCEIVER_SPEAKERMODE
 * @desc > **FMOD Constant:** [FMOD_DSP_TRANSCEIVER_SPEAKERMODE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_transceiver_speakermode)
 * This constant specifies 
 * @member AUTO 
 * @member MONO 
 * @member STEREO 
 * @member SURROUND 
 * @const_end
 */

/**
 * @const FMOD_DSP_TRANSCEIVER
 * @desc > **FMOD Constant:** [FMOD_DSP_TRANSCEIVER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_transceiver)
 * This constant specifies 
 * @member TRANSMIT
 * @member GAIN
 * @member CHANNEL
 * @member TRANSMITSPEAKERMODE
 * @const_end
 */

/**
 * @const FMOD_DSP_OBJECTPAN
 * @desc > **FMOD Constant:** [FMOD_DSP_OBJECTPAN](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_objectpan)
 * This constant specifies 
 * @member _3D_POSITION
 * @member _3D_ROLLOFF
 * @member _3D_MIN_DISTANCE
 * @member _3D_MAX_DISTANCE
 * @member _3D_EXTENT_MODE
 * @member _3D_SOUND_SIZE
 * @member _3D_MIN_EXTENT
 * @member OVERALL_GAIN
 * @member OUTPUTGAIN
 * @member ATTENUATION_RANGE
 * @member OVERRIDE_RANGE
 * @const_end
 */

/* Output constants */

#macro FMOD_OUTPUT_PLUGIN_VERSION 5

/**
 * @const FMOD_OUTPUT_METHOD
 * @desc > **FMOD Constant:** [FMOD_OUTPUT_METHOD](https://www.fmod.com/docs/2.02/api/plugin-api-output.html#fmod_output_method)
 * This constant specifies 
 * @member MIX_DIRECT 
 * @member MIX_BUFFERED 
 * @const_end
 */

/* Studio Definitions */

#macro FMOD_STUDIO_LOAD_MEMORY_ALIGNMENT                   32

/**
 * @const FMOD_STUDIO_INIT
 * @desc > **FMOD Constant:** [FMOD_STUDIO_INITFLAGS](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_initflags)
 * This constant specifies 
 * @member NORMAL 
 * @member LIVEUPDATE 
 * @member ALLOW_MISSING_PLUGINS 
 * @member SYNCHRONOUS_UPDATE 
 * @member DEFERRED_CALLBACKS 
 * @member LOAD_FROM_UPDATE 
 * @member MEMORY_TRACKING 
 * @const_end
 */

/**
 * @const FMOD_STUDIO_PARAMETER_FLAGS
 * @desc > **FMOD Constant:** [FMOD_STUDIO_PARAMETER_FLAGS](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_parameter_flags)
 * This constant specifies 
 * @member READONLY 
 * @member AUTOMATIC 
 * @member GLOBAL 
 * @member DISCRETE 
 * @member LABELED 
 * @const_end
 */

/**
 * @const FMOD_STUDIO_SYSTEM_CALLBACK
 * @desc > **FMOD Constant:** [FMOD_STUDIO_SYSTEM_CALLBACK](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_system_callback_type)
 * This constant specifies 
 * @member PREUPDATE 
 * @member POSTUPDATE 
 * @member BANK_UNLOAD 
 * @member LIVEUPDATE_CONNECTED 
 * @member LIVEUPDATE_DISCONNECTED 
 * @member ALL 
 * @const_end
 */

/**
 * @const FMOD_STUDIO_EVENT_CALLBACK
 * @desc > **FMOD Constant:** [FMOD_STUDIO_EVENT_CALLBACK](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#fmod_studio_event_callback_type)
 * This constant specifies 
 * @member CREATED 
 * @member DESTROYED 
 * @member STARTING 
 * @member STARTED 
 * @member RESTARTED 
 * @member STOPPED 
 * @member START_FAILED 
 * @member CREATE_PROGRAMMER_SOUND 
 * @member DESTROY_PROGRAMMER_SOUND 
 * @member PLUGIN_CREATED 
 * @member PLUGIN_DESTROYED 
 * @member TIMELINE_MARKER 
 * @member TIMELINE_BEAT 
 * @member SOUND_PLAYED 
 * @member SOUND_STOPPED 
 * @member REAL_TO_VIRTUAL 
 * @member VIRTUAL_TO_REAL 
 * @member START_EVENT_COMMAND 
 * @member NESTED_TIMELINE_BEAT 
 * @member ALL 
 * @const_end
 */

/**
 * @const FMOD_STUDIO_LOAD_BANK
 * @desc > **FMOD Constant:** [FMOD_STUDIO_LOAD_BANK](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_load_bank_flags)
 * This constant specifies flags to control bank loading.
 * @member NORMAL 
 * @member NONBLOCKING 
 * @member DECOMPRESS_SAMPLES 
 * @member UNENCRYPTED 
 * @const_end
 */

/**
 * @const FMOD_STUDIO_COMMANDCAPTURE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_COMMANDCAPTURE](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_commandcapture_flags)
 * This constant specifies 
 * @member NORMAL 
 * @member FILEFLUSH 
 * @member SKIP_INITIAL_STATE 
 * @const_end
 */

/**
 * @const FMOD_STUDIO_COMMANDREPLAY
 * @desc > **FMOD Constant:** [FMOD_STUDIO_COMMANDREPLAY](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_commandreplay_flags)
 * This constant specifies 
 * @member NORMAL 
 * @member SKIP_CLEANUP 
 * @member FAST_FORWARD 
 * @member SKIP_BANK_LOAD 
 * @const_end
 */

/**
 * @const FMOD_STUDIO_LOADING_STATE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_LOADING_STATE](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_loading_state)
 * This constant specifies 
 * @member UNLOADING
 * @member UNLOADED
 * @member LOADING
 * @member LOADED
 * @member ERROR
 * @const_end
 */

/**
 * @const FMOD_STUDIO_LOAD_MEMORY_MODE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_LOAD_MEMORY_MODE](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_load_memory_mode)
 * This constant specifies 
 * @member MEMORY
 * @member MEMORY_POINT
 * @const_end
 */

/**
 * @const FMOD_STUDIO_PARAMETER_TYPE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_PARAMETER_TYPE](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_parameter_type)
 * This constant specifies 
 * @member GAME_CONTROLLED
 * @member AUTOMATIC_DISTANCE
 * @member AUTOMATIC_EVENT_CONE_ANGLE
 * @member AUTOMATIC_EVENT_ORIENTATION
 * @member AUTOMATIC_DIRECTION
 * @member AUTOMATIC_ELEVATION
 * @member AUTOMATIC_LISTENER_ORIENTATION
 * @member AUTOMATIC_SPEED
 * @member AUTOMATIC_SPEED_ABSOLUTE
 * @member AUTOMATIC_DISTANCE_NORMALIZED
 * @const_end
 */

/**
 * @const FMOD_STUDIO_USER_PROPERTY_TYPE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_USER_PROPERTY_TYPE](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#fmod_studio_user_property_type)
 * This constant specifies 
 * @member INTEGER
 * @member BOOLEAN
 * @member FLOAT
 * @member STRING
 * @const_end
 */

/**
 * @const FMOD_STUDIO_EVENT_PROPERTY
 * @desc > **FMOD Constant:** [FMOD_STUDIO_EVENT_PROPERTY](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#fmod_studio_event_property)
 * This constant specifies 
 * @member CHANNELPRIORITY
 * @member SCHEDULE_DELAY
 * @member SCHEDULE_LOOKAHEAD
 * @member MINIMUM_DISTANCE
 * @member MAXIMUM_DISTANCE
 * @member COOLDOWN
 * @const_end
 */

/**
 * @const FMOD_STUDIO_PLAYBACK_STATE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_PLAYBACK_STATE](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_playback_state)
 * This constant specifies 
 * @member PLAYING
 * @member SUSTAINING
 * @member STOPPED
 * @member STARTING
 * @member STOPPING
 * @const_end
 */

/**
 * @const FMOD_STUDIO_STOP_MODE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_STOP_MODE](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#fmod_studio_stop_mode)
 * This constant specifies 
 * @member ALLOWFADEOUT
 * @member IMMEDIATE
 * @const_end
 */

/**
 * @const FMOD_STUDIO_INSTANCETYPE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_INSTANCETYPE](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#fmod_studio_instancetype)
 * This constant specifies 
 * @member NONE
 * @member SYSTEM
 * @member EVENTDESCRIPTION
 * @member EVENTINSTANCE
 * @member PARAMETERINSTANCE
 * @member BUS
 * @member VCA
 * @member BANK
 * @member COMMANDREPLAY
 * @const_end
 */
