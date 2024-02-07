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
 * @desc > **FMOD Constant:** [FMOD_SYSTEM_CALLBACK_TYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_system_callback_type)
 * This constant specifies types of callback called by the FMOD system.
 * @member DEVICELISTCHANGED Called from System::update when the enumerated list of devices has changed. Called from the main (calling) thread when set from the Core API or Studio API in synchronous mode, and from the Studio Update Thread when in default / async mode.
 * @member DEVICELOST Deprecated.
 * @member MEMORYALLOCATIONFAILED Called directly when a memory allocation fails.
 * @member THREADCREATED Called from the game thread when a thread is created.
 * @member BADDSPCONNECTION Deprecated.
 * @member PREMIX Called from the mixer thread before it starts the next block.
 * @member POSTMIX Called from the mixer thread after it finishes a block.
 * @member ERROR Called directly when an API function returns an error, including delayed async functions.
 * @member MIDMIX Called from the mixer thread after clocks have been updated before the main mix occurs.
 * @member THREADDESTROYED Called from the game thread when a thread is destroyed.
 * @member PREUPDATE Called at start of System::update from the main (calling) thread when set from the Core API or Studio API in synchronous mode, and from the Studio Update Thread when in default / async mode.
 * @member POSTUPDATE Called at end of System::update from the main (calling) thread when set from the Core API or Studio API in synchronous mode, and from the Studio Update Thread when in default / async mode.
 * @member RECORDLISTCHANGED Called from System::update when the enumerated list of recording devices has changed. Called from the main (calling) thread when set from the Core API or Studio API in synchronous mode, and from the Studio Update Thread when in default / async mode.
 * @member BUFFEREDNOMIX Called from the feeder thread after audio was consumed from the ring buffer, but not enough to allow another mix to run.
 * @member DEVICEREINITIALIZE Called from System::update when an output device is re-initialized. Called from the main (calling) thread when set from the Core API or Studio API in synchronous mode, and from the Studio Update Thread when in default / async mode.
 * @member OUTPUTUNDERRUN Called from the mixer thread when the device output attempts to read more samples than are available in the output buffer.
 * @member RECORDPOSITIONCHANGED Called from the mixer thread when the System record position changed.
 * @member ALL Mask representing all callback types.
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
 * This constant specifies flags that describe the speakers present in a given signal.
 * @member FRONT_LEFT Front left channel.
 * @member FRONT_RIGHT Front right channel.
 * @member FRONT_CENTER Front center channel.
 * @member LOW_FREQUENCY Low frequency channel.
 * @member SURROUND_LEFT Surround left channel.
 * @member SURROUND_RIGHT Surround right channel.
 * @member BACK_LEFT Back left channel.
 * @member BACK_RIGHT Back right channel.
 * @member BACK_CENTER Back center channel, not represented in any FMOD_SPEAKERMODE.
 * @member MONO Mono channel mask.
 * @member STEREO Stereo channel mask.
 * @member LRC Left / right / center channel mask.
 * @member QUAD Quadphonic channel mask.
 * @member SURROUND 5.0 surround channel mask.
 * @member SURROUND_5POINT1 5.1 surround channel mask.
 * @member SURROUND_5POINT1_REARS 5.1 surround channel mask, using rears instead of surrounds.
 * @member SURROUND_7POINT0 7.0 surround channel mask.
 * @member SURROUND_7POINT1 7.1 surround channel mask.
 * @const_end
 */

/**
 * @const FMOD_PORT_INDEX
 * @desc > **FMOD Constant:** [FMOD_PORT_INDEX](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_port_index)
 * This constant specifies the output type specific index for when there are multiple instances or destinations for a port type.
 * @member NONE Use when a port index is not required
 * @member FLAG_VR_CONTROLLER Use as a flag to indicate the intended controller is associated with a VR headset
 * @const_end
 */

/**
 * @const FMOD_THREAD_PRIORITY
 * @desc > **FMOD Constant:** [FMOD_THREAD_PRIORITY](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_thread_priority)
 * This constant specifies the scheduling priority to assign a given thread to.
 * @member PLATFORM_MIN Lower bound of platform specific priority range.
 * @member PLATFORM_MAX Upper bound of platform specific priority range.
 * @member DEFAULT For a given thread use the default listed below, i.e. FMOD_THREAD_TYPE_MIXER uses FMOD_THREAD_PRIORITY_MIXER.
 * @member LOW Low platform agnostic priority.
 * @member MEDIUM Medium platform agnostic priority.
 * @member HIGH High platform agnostic priority.
 * @member VERY_HIGH Very high platform agnostic priority.
 * @member EXTREME Extreme platform agnostic priority.
 * @member CRITICAL Critical platform agnostic priority.
 * @member MIXER Default priority for FMOD_THREAD_TYPE_MIXER.
 * @member FEEDER Default priority for FMOD_THREAD_TYPE_FEEDER.
 * @member STREAM Default priority for FMOD_THREAD_TYPE_STREAM.
 * @member FILE Default priority for FMOD_THREAD_TYPE_FILE.
 * @member NONBLOCKING Default priority for FMOD_THREAD_TYPE_NONBLOCKING.
 * @member RECORD Default priority for FMOD_THREAD_TYPE_RECORD.
 * @member GEOMETRY Default priority for FMOD_THREAD_TYPE_GEOMETRY.
 * @member PROFILER Default priority for FMOD_THREAD_TYPE_PROFILER.
 * @member STUDIO_UPDATE Default priority for FMOD_THREAD_TYPE_STUDIO_UPDATE.
 * @member STUDIO_LOAD_BANK Default priority for FMOD_THREAD_TYPE_STUDIO_LOAD_BANK.
 * @member STUDIO_LOAD_SAMPLE Default priority for FMOD_THREAD_TYPE_STUDIO_LOAD_SAMPLE.
 * @member CONVOLUTION1 Default priority for FMOD_THREAD_TYPE_CONVOLUTION1.
 * @member CONVOLUTION2 Default priority for FMOD_THREAD_TYPE_CONVOLUTION2.
 * @const_end
 */

/**
 * @const FMOD_THREAD_STACK_SIZE
 * @desc > **FMOD Constant:** [FMOD_THREAD_STACK_SIZE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_thread_stack_size)
 * This constant specifies the stack space available to the given thread.
 * @member DEFAULT For a given thread use the default listed below, i.e. FMOD_THREAD_TYPE_MIXER uses FMOD_THREAD_STACK_SIZE_MIXER.
 * @member MIXER Default stack size for FMOD_THREAD_TYPE_MIXER. Set to 80 * 1024.
 * @member FEEDER Default stack size for FMOD_THREAD_TYPE_FEEDER. Set to 16  * 1024.
 * @member STREAM Default stack size for FMOD_THREAD_TYPE_STREAM. Set to 96  * 1024.
 * @member FILE Default stack size for FMOD_THREAD_TYPE_FILE. Set to 64  * 1024.
 * @member NONBLOCKING Default stack size for FMOD_THREAD_TYPE_NONBLOCKING. Set to 112 * 1024.
 * @member RECORD Default stack size for FMOD_THREAD_TYPE_RECORD. Set to 16  * 1024.
 * @member GEOMETRY Default stack size for FMOD_THREAD_TYPE_GEOMETRY. Set to 48  * 1024.
 * @member PROFILER Default stack size for FMOD_THREAD_TYPE_PROFILER. Set to 128 * 1024.
 * @member STUDIO_UPDATE Default stack size for FMOD_THREAD_TYPE_STUDIO_UPDATE. Set to 96  * 1024.
 * @member STUDIO_LOAD_BANK Default stack size for FMOD_THREAD_TYPE_STUDIO_LOAD_BANK. Set to 96  * 1024.
 * @member STUDIO_LOAD_SAMPLE Default stack size for FMOD_THREAD_TYPE_STUDIO_LOAD_SAMPLE. Set to 96  * 1024.
 * @member CONVOLUTION1 Default stack size for FMOD_THREAD_TYPE_CONVOLUTION1.
 * @member CONVOLUTION2 Default stack size for FMOD_THREAD_TYPE_CONVOLUTION2.
 * @const_end
 */

/**
 * @const FMOD_THREAD_AFFINITY
 * @desc > **FMOD Constant:** [FMOD_THREAD_AFFINITY](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_thread_affinity)
 * This constant specifies the bitfields for specifying the CPU core a given thread runs on.
 * @member GROUP_DEFAULT For a given thread use the default listed below, i.e. FMOD_THREAD_TYPE_MIXER uses FMOD_THREAD_AFFINITY_MIXER.
 * @member GROUP_A Grouping A is recommended to isolate the mixer thread FMOD_THREAD_TYPE_MIXER.
 * @member GROUP_B Grouping B is recommended to isolate the Studio update thread FMOD_THREAD_TYPE_STUDIO_UPDATE.
 * @member GROUP_C Grouping C is recommended for all remaining threads.
 * @member MIXER Default affinity for FMOD_THREAD_TYPE_MIXER.
 * @member FEEDER Default affinity for FMOD_THREAD_TYPE_FEEDER.
 * @member STREAM Default affinity for FMOD_THREAD_TYPE_STREAM.
 * @member FILE Default affinity for FMOD_THREAD_TYPE_FILE.
 * @member NONBLOCKING Default affinity for FMOD_THREAD_TYPE_NONBLOCKING.
 * @member RECORD Default affinity for FMOD_THREAD_TYPE_RECORD.
 * @member GEOMETRY Default affinity for FMOD_THREAD_TYPE_GEOMETRY.
 * @member PROFILER Default affinity for FMOD_THREAD_TYPE_PROFILER.
 * @member STUDIO_UPDATE Default affinity for FMOD_THREAD_TYPE_STUDIO_UPDATE.
 * @member STUDIO_LOAD_BANK Default affinity for FMOD_THREAD_TYPE_STUDIO_LOAD_BANK.
 * @member STUDIO_LOAD_SAMPLE Default affinity for FMOD_THREAD_TYPE_STUDIO_LOAD_SAMPLE.
 * @member CONVOLUTION1 Default affinity for FMOD_THREAD_TYPE_CONVOLUTION1.
 * @member CONVOLUTION2 Default affinity for FMOD_THREAD_TYPE_CONVOLUTION2.
 * @member CORE_ALL Assign to all cores.
 * @member CORE_0 Assign to core 0.
 * @member CORE_1 Assign to core 1.
 * @member CORE_2 Assign to core 2.
 * @member CORE_3 Assign to core 3.
 * @member CORE_4 Assign to core 4.
 * @member CORE_5 Assign to core 5.
 * @member CORE_6 Assign to core 6.
 * @member CORE_7 Assign to core 7.
 * @member CORE_8 Assign to core 8.
 * @member CORE_9 Assign to core 9.
 * @member CORE_10 Assign to core 10.
 * @member CORE_11 Assign to core 11.
 * @member CORE_12 Assign to core 12.
 * @member CORE_13 Assign to core 13.
 * @member CORE_14 Assign to core 14.
 * @member CORE_15 Assign to core 15.
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
 * This constant specifies named constants for threads created at runtime.
 * @member MIXER Thread responsible for mixing and processing blocks of audio.
 * @member FEEDER Thread used by some output plugins for transferring buffered audio from FMOD_THREAD_TYPE_MIXER to the sound output device.
 * @member STREAM Thread that decodes compressed audio to PCM for Sounds created as FMOD_CREATESTREAM.
 * @member FILE Thread that reads compressed audio from disk to be consumed by FMOD_THREAD_TYPE_STREAM.
 * @member NONBLOCKING Thread that processes the creation of Sounds asynchronously when opened with FMOD_NONBLOCKING.
 * @member RECORD Thread used by some output plugins for transferring audio from a microphone to FMOD_THREAD_TYPE_MIXER.
 * @member GEOMETRY Thread used by the Geometry system for performing background calculations.
 * @member PROFILER Thread for network communication when using FMOD_INIT_PROFILE_ENABLE.
 * @member STUDIO_UPDATE Thread for processing Studio API commands and scheduling sound playback.
 * @member STUDIO_LOAD_BANK Thread for asynchronously loading Studio::Bank metadata.
 * @member STUDIO_LOAD_SAMPLE Thread for asynchronously loading Studio::Bank sample data.
 * @member CONVOLUTION1 Thread for processing medium size delay lines for FMOD_DSP_TYPE_CONVOLUTIONREVERB.
 * @member CONVOLUTION2 Thread for processing larger size delay lines for FMOD_DSP_TYPE_CONVOLUTIONREVERB.
 * @const_end
 */

/**
 * @const FMOD_RESULT
 * @desc > **FMOD Constant:** [FMOD_RESULT](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_result)
 * This constant specifies the error codes returned from every function.
 * @member OK No errors.
 * @member ERR_BADCOMMAND Tried to call a function on a data type that does not allow this type of functionality (ie calling Sound::lock on a streaming Sound).
 * @member ERR_CHANNEL_ALLOC Error trying to allocate a Channel.
 * @member ERR_CHANNEL_STOLEN The specified Channel has been reused to play another Sound.
 * @member ERR_DMA DMA Failure. See debug output for more information.
 * @member ERR_DSP_CONNECTION DSP connection error. Connection possibly caused a cyclic dependency or connected dsps with incompatible buffer counts.
 * @member ERR_DSP_DONTPROCESS DSP return code from a DSP process query callback. Tells mixer not to call the process callback and therefore not consume CPU. Use this to optimize the DSP graph.
 * @member ERR_DSP_FORMAT DSP Format error. A DSP unit may have attempted to connect to this network with the wrong format, or a matrix may have been set with the wrong size if the target unit has a specified channel map.
 * @member ERR_DSP_INUSE DSP is already in the mixer's DSP network. It must be removed before being reinserted or released.
 * @member ERR_DSP_NOTFOUND DSP connection error. Couldn't find the DSP unit specified.
 * @member ERR_DSP_RESERVED DSP operation error. Cannot perform operation on this DSP as it is reserved by the system.
 * @member ERR_DSP_SILENCE DSP return code from a DSP process query callback. Tells mixer silence would be produced from read, so go idle and not consume CPU. Use this to optimize the DSP graph.
 * @member ERR_DSP_TYPE DSP operation cannot be performed on a DSP of this type.
 * @member ERR_FILE_BAD Error loading file.
 * @member ERR_FILE_COULDNOTSEEK Couldn't perform seek operation. This is a limitation of the medium (ie netstreams) or the file format.
 * @member ERR_FILE_DISKEJECTED Media was ejected while reading.
 * @member ERR_FILE_EOF End of file unexpectedly reached while trying to read essential data (truncated?).
 * @member ERR_FILE_ENDOFDATA End of current chunk reached while trying to read data.
 * @member ERR_FILE_NOTFOUND File not found.
 * @member ERR_FORMAT Unsupported file or audio format.
 * @member ERR_HEADER_MISMATCH There is a version mismatch between the FMOD header and either the FMOD Studio library or the FMOD Core library.
 * @member ERR_HTTP A HTTP error occurred. This is a catch-all for HTTP errors not listed elsewhere.
 * @member ERR_HTTP_ACCESS The specified resource requires authentication or is forbidden.
 * @member ERR_HTTP_PROXY_AUTH Proxy authentication is required to access the specified resource.
 * @member ERR_HTTP_SERVER_ERROR A HTTP server error occurred.
 * @member ERR_HTTP_TIMEOUT The HTTP request timed out.
 * @member ERR_INITIALIZATION FMOD was not initialized correctly to support this function.
 * @member ERR_INITIALIZED Cannot call this command after System::init.
 * @member ERR_INTERNAL An error occured in the FMOD system. Use the logging version of FMOD for more information.
 * @member ERR_INVALID_FLOAT Value passed in was a NaN, Inf or denormalized float.
 * @member ERR_INVALID_HANDLE An invalid object handle was used.
 * @member ERR_INVALID_PARAM An invalid parameter was passed to this function.
 * @member ERR_INVALID_POSITION An invalid seek position was passed to this function.
 * @member ERR_INVALID_SPEAKER An invalid speaker was passed to this function based on the current speaker mode.
 * @member ERR_INVALID_SYNCPOINT The syncpoint did not come from this Sound handle.
 * @member ERR_INVALID_THREAD Tried to call a function on a thread that is not supported.
 * @member ERR_INVALID_VECTOR The vectors passed in are not unit length, or perpendicular.
 * @member ERR_MAXAUDIBLE Reached maximum audible playback count for this Sound's SoundGroup.
 * @member ERR_MEMORY Not enough memory or resources.
 * @member ERR_MEMORY_CANTPOINT Can't use FMOD_OPENMEMORY_POINT on non PCM source data, or non mp3/xma/adpcm data if FMOD_CREATECOMPRESSEDSAMPLE was used.
 * @member ERR_NEEDS3D Tried to call a command on a 2D Sound when the command was meant for 3D Sound.
 * @member ERR_NEEDSHARDWARE Tried to use a feature that requires hardware support.
 * @member ERR_NET_CONNECT Couldn't connect to the specified host.
 * @member ERR_NET_SOCKET_ERROR A socket error occurred. This is a catch-all for socket-related errors not listed elsewhere.
 * @member ERR_NET_URL The specified URL couldn't be resolved.
 * @member ERR_NET_WOULD_BLOCK Operation on a non-blocking socket could not complete immediately.
 * @member ERR_NOTREADY Operation could not be performed because specified Sound/DSP connection is not ready.
 * @member ERR_OUTPUT_ALLOCATED Error initializing output device, but more specifically, the output device is already in use and cannot be reused.
 * @member ERR_OUTPUT_CREATEBUFFER Error creating hardware sound buffer.
 * @member ERR_OUTPUT_DRIVERCALL A call to a standard soundcard driver failed, which could possibly mean a bug in the driver or resources were missing or exhausted.
 * @member ERR_OUTPUT_FORMAT Soundcard does not support the specified format.
 * @member ERR_OUTPUT_INIT Error initializing output device.
 * @member ERR_OUTPUT_NODRIVERS The output device has no drivers installed. If pre-init, FMOD_OUTPUT_NOSOUND is selected as the output mode. If post-init, the function just fails.
 * @member ERR_PLUGIN An unspecified error has been returned from a plugin.
 * @member ERR_PLUGIN_MISSING A requested output, dsp unit type or codec was not available.
 * @member ERR_PLUGIN_RESOURCE A resource that the plugin requires cannot be allocated or found. (ie the DLS file for MIDI playback)
 * @member ERR_PLUGIN_VERSION A plugin was built with an unsupported SDK version.
 * @member ERR_RECORD An error occurred trying to initialize the recording device.
 * @member ERR_REVERB_CHANNELGROUP Reverb properties cannot be set on this Channel because a parent ChannelGroup owns the reverb connection.
 * @member ERR_REVERB_INSTANCE Specified instance in FMOD_REVERB_PROPERTIES couldn't be set. Most likely because it is an invalid instance number or the reverb doesn't exist.
 * @member ERR_SUBSOUNDS The error occurred because the Sound referenced contains subsounds when it shouldn't have, or it doesn't contain subsounds when it should have. The operation may also not be able to be performed on a parent Sound.
 * @member ERR_SUBSOUND_ALLOCATED This subsound is already being used by another Sound, you cannot have more than one parent to a Sound. Null out the other parent's entry first.
 * @member ERR_SUBSOUND_CANTMOVE Shared subsounds cannot be replaced or moved from their parent stream, such as when the parent stream is an FSB file.
 * @member ERR_TAGNOTFOUND The specified tag could not be found or there are no tags.
 * @member ERR_TOOMANYCHANNELS The Sound created exceeds the allowable input channel count. This can be increased using the 'maxinputchannels' parameter in System::setSoftwareFormat.
 * @member ERR_TRUNCATED The retrieved string is too long to fit in the supplied buffer and has been truncated.
 * @member ERR_UNIMPLEMENTED Something in FMOD hasn't been implemented when it should be. Contact support.
 * @member ERR_UNINITIALIZED This command failed because System::init or System::setDriver was not called.
 * @member ERR_UNSUPPORTED A command issued was not supported by this object. Possibly a plugin without certain callbacks specified.
 * @member ERR_VERSION The version number of this file format is not supported.
 * @member ERR_EVENT_ALREADY_LOADED The specified bank has already been loaded.
 * @member ERR_EVENT_LIVEUPDATE_BUSY The live update connection failed due to the game already being connected.
 * @member ERR_EVENT_LIVEUPDATE_MISMATCH The live update connection failed due to the game data being out of sync with the tool.
 * @member ERR_EVENT_LIVEUPDATE_TIMEOUT The live update connection timed out.
 * @member ERR_EVENT_NOTFOUND The requested event, parameter, bus or vca could not be found.
 * @member ERR_STUDIO_UNINITIALIZED The Studio::System object is not yet initialized.
 * @member ERR_STUDIO_NOT_LOADED The specified resource is not loaded, so it can't be unloaded.
 * @member ERR_INVALID_STRING An invalid string was passed to this function.
 * @member ERR_ALREADY_LOCKED The specified resource is already locked.
 * @member ERR_NOT_LOCKED The specified resource is not locked, so it can't be unlocked.
 * @member ERR_RECORD_DISCONNECTED The specified recording driver has been disconnected.
 * @member ERR_TOOMANYSAMPLES The length provided exceeds the allowable limit.
 * @const_end
 */

/**
 * @const FMOD_CHANNELCONTROL_TYPE
 * @desc > **FMOD Constant:** [FMOD_CHANNELCONTROL_TYPE](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#fmod_channelcontrol_type)
 * This constant specifies built-in output types that can be used to run the mixer.
 * @member CHANNEL Type representing Channel
 * @member CHANNELGROUP Type representing ChannelGroup
 * @const_end
 */

/**
 * @const FMOD_OUTPUTTYPE
 * @desc > **FMOD Constant:** [FMOD_OUTPUTTYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_outputtype)
 * This constant specifies built-in output types that can be used to run the mixer.
 * @member AUTODETECT Picks the best output mode for the platform. This is the default.
 * @member UNKNOWN All - 3rd party plugin, unknown. This is for use with System::getOutput only.
 * @member NOSOUND All - Perform all mixing but discard the final output.
 * @member WAVWRITER All - Writes output to a .wav file.
 * @member NOSOUND_NRT All - Non-realtime version of FMOD_OUTPUTTYPE_NOSOUND, one mix per System::update.
 * @member WAVWRITER_NRT All - Non-realtime version of FMOD_OUTPUTTYPE_WAVWRITER, one mix per System::update.
 * @member WASAPI Win / UWP / Xbox One / Game Core - Windows Audio Session API. (Default on Windows, Xbox One, Game Core and UWP)
 * @member ASIO Win - Low latency ASIO 2.0.
 * @member PULSEAUDIO Linux - Pulse Audio. (Default on Linux if available)
 * @member ALSA Linux - Advanced Linux Sound Architecture. (Default on Linux if PulseAudio isn't available)
 * @member COREAUDIO Mac / iOS - Core Audio. (Default on Mac and iOS)
 * @member AUDIOTRACK Android - Java Audio Track. (Default on Android 2.2 and below)
 * @member OPENSL Android - OpenSL ES. (Default on Android 2.3 up to 7.1)
 * @member AUDIOOUT PS4 / PS5 - Audio Out. (Default on PS4, PS5)
 * @member AUDIO3D PS4 - Audio3D.
 * @member WEBAUDIO HTML5 - Web Audio ScriptProcessorNode output. (Default on HTML5 if AudioWorkletNode isn't available)
 * @member NNAUDIO Switch - nn::audio. (Default on Switch)
 * @member WINSONIC Win10 / Xbox One / Game Core - Windows Sonic.
 * @member AAUDIO Android - AAudio. (Default on Android 8.1 and above)
 * @member AUDIOWORKLET HTML5 - Web Audio AudioWorkletNode output. (Default on HTML5 if available)
 * @member PHASE iOS - PHASE framework. (Disabled)
 * @const_end
 */

/**
 * @const FMOD_DEBUG_MODE
 * @desc > **FMOD Constant:** [FMOD_DEBUG_MODE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_debug_mode)
 * This constant specifies the destination of log output when using the logging version of FMOD.
 * @member TTY Default log location per platform, i.e. Visual Studio output window, stderr, LogCat, etc.
 * @member FILE Write log to specified file path.
 * @member CALLBACK Call specified callback with log information.
 * @const_end
 */

/**
 * @const FMOD_SPEAKERMODE
 * @desc > **FMOD Constant:** [FMOD_SPEAKERMODE](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_speakermode)
 * This constant specifies speaker mode types.
 * @member DEFAULT Default speaker mode for the chosen output mode which will resolve after System::init.
 * @member RAW Assume there is no special mapping from a given channel to a speaker, channels map 1:1 in order. Use System::setSoftwareFormat to specify the speaker count.
 * @member MONO 1 speaker setup (monaural).
 * @member STEREO 2 speaker setup (stereo) front left, front right.
 * @member QUAD 4 speaker setup (4.0) front left, front right, surround left, surround right.
 * @member SURROUND 5 speaker setup (5.0) front left, front right, center, surround left, surround right.
 * @member _5POINT1 6 speaker setup (5.1) front left, front right, center, low frequency, surround left, surround right.
 * @member _7POINT1 8 speaker setup (7.1) front left, front right, center, low frequency, surround left, surround right, back left, back right.
 * @member _7POINT1POINT4 12 speaker setup (7.1.4) front left, front right, center, low frequency, surround left, surround right, back left, back right, top front left, top front right, top back left, top back right.
 * @const_end
 */

/**
 * @const FMOD_SPEAKER
 * @desc > **FMOD Constant:** [FMOD_SPEAKER](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_speaker)
 * This constant assigns an enumeration for a speaker index.
 * @member NONE No speaker
 * @member FRONT_LEFT The front left speaker
 * @member FRONT_RIGHT The front right speaker
 * @member FRONT_CENTER The front center speaker
 * @member LOW_FREQUENCY The LFE or 'subwoofer' speaker
 * @member SURROUND_LEFT The surround left (usually to the side) speaker
 * @member SURROUND_RIGHT The surround right (usually to the side) speaker
 * @member BACK_LEFT The back left speaker
 * @member BACK_RIGHT The back right speaker
 * @member TOP_FRONT_LEFT The top front left speaker
 * @member TOP_FRONT_RIGHT The top front right speaker
 * @member TOP_BACK_LEFT The top back left speaker
 * @member TOP_BACK_RIGHT The top back right speaker
 * @const_end
 */

/**
 * @const FMOD_CHANNELORDER
 * @desc > **FMOD Constant:** [FMOD_CHANNELORDER](https://www.fmod.com/docs/2.02/api/core-api-common.html#fmod_channelorder)
 * This constant specifies speaker ordering for multi-channel signals.
 * @member DEFAULT Left, Right, Center, LFE, Surround Left, Surround Right, Back Left, Back Right (see FMOD_SPEAKER enumeration)
 * @member WAVEFORMAT Left, Right, Center, LFE, Back Left, Back Right, Surround Left, Surround Right (as per Microsoft .wav WAVEFORMAT structure master order)
 * @member PROTOOLS Left, Center, Right, Surround Left, Surround Right, LFE
 * @member ALLMONO Mono, Mono, Mono, Mono, Mono, Mono, ... (each channel up to FMOD_MAX_CHANNEL_WIDTH treated as mono)
 * @member ALLSTEREO Left, Right, Left, Right, Left, Right, ... (each pair of channels up to FMOD_MAX_CHANNEL_WIDTH treated as stereo)
 * @member ALSA Left, Right, Surround Left, Surround Right, Center, LFE (as per Linux ALSA channel order)
 * @const_end
 */

/**
 * @const FMOD_PLUGINTYPE
 * @desc > **FMOD Constant:** [FMOD_PLUGINTYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_plugintype)
 * This constant specifies the types of plugin used to extend functionality.
 * @member OUTPUT Audio output interface plugin represented with FMOD_OUTPUT_DESCRIPTION.
 * @member CODEC File format codec plugin represented with FMOD_CODEC_DESCRIPTION.
 * @member DSP DSP unit plugin represented with FMOD_DSP_DESCRIPTION.
 * @const_end
 */

/**
 * @const FMOD_SOUND_TYPE
 * @desc > **FMOD Constant:** [FMOD_SOUND_TYPE](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_sound_type)
 * This constant specifies the recognized audio formats that can be loaded into a Sound.
 * @member UNKNOWN Unknown or custom codec plugin.
 * @member AIFF Audio Interchange File Format (.aif, .aiff). Uncompressed integer formats only.
 * @member ASF Microsoft Advanced Systems Format (.asf, .wma, .wmv). Platform provided decoder, available only on Windows.
 * @member DLS Downloadable Sound (.dls). Multi-sound bank format used by MIDI (.mid).
 * @member FLAC Free Lossless Audio Codec (.flac).
 * @member FSB FMOD Sample Bank (.fsb). Proprietary multi-sound bank format. Supported encodings: PCM16, FADPCM, Vorbis, AT9, XMA, Opus.
 * @member IT Impulse Tracker (.it).
 * @member MIDI Musical Instrument Digital Interface (.mid).
 * @member MOD Protracker / Fasttracker Module File (.mod).
 * @member MPEG Moving Picture Experts Group (.mp2, .mp3). Also supports .wav (RIFF) container format.
 * @member OGGVORBIS Ogg Vorbis (.ogg).
 * @member PLAYLIST Play list information container (.asx, .pls, .m3u, .wax). No audio, tags only.
 * @member RAW Raw uncompressed PCM data (.raw).
 * @member S3M ScreamTracker 3 Module (.s3m).
 * @member USER User created sound.
 * @member WAV Microsoft Waveform Audio File Format (.wav). Supported encodings: Uncompressed PCM, IMA ADPCM. Platform provided ACM decoder extensions, available only on Windows.
 * @member XM FastTracker 2 Extended Module (.xm).
 * @member XMA Microsoft XMA bit-stream supported by FSB (.fsb) container format. Platform provided decoder, available only on Xbox.
 * @member AUDIOQUEUE Apple Audio Queue decoder (.mp4, .m4a, .mp3). Supported encodings: AAC, ALAC, MP3. Platform provided decoder, available only on iOS / tvOS devices.
 * @member AT9 Sony ATRAC9 bit-stream supported by FSB (.fsb) container format. Platform provided decoder, available only on PlayStation.
 * @member VORBIS Vorbis bit-stream supported by FSB (.fsb) container format.
 * @member MEDIA_FOUNDATION Microsoft Media Foundation decoder (.asf, .wma, .wmv, .mp4, .m4a). Platform provided decoder, available only on UWP.
 * @member MEDIACODEC Google Media Codec decoder (.m4a, .mp4). Platform provided decoder, available only on Android.
 * @member FADPCM FMOD Adaptive Differential Pulse Code Modulation bit-stream supported by FSB (.fsb) container format.
 * @member OPUS Opus bit-stream supported by FSB (.fsb) container format. Platform provided decoder, available only on Xbox Series X|S, PS5, and Switch.
 * @const_end
 */

/**
 * @const FMOD_SOUND_FORMAT
 * @desc > **FMOD Constant:** [FMOD_SOUND_FORMAT](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_sound_format)
 * This constant specifies values describes the native format of the hardware or software buffer that will be used.
 * @member NONE Uninitalized / unknown.
 * @member PCM8 8bit integer PCM data.
 * @member PCM16 16bit integer PCM data.
 * @member PCM24 24bit integer PCM data.
 * @member PCM32 32bit integer PCM data.
 * @member PCMFLOAT 32bit floating point PCM data.
 * @member BITSTREAM Sound data is in its native compressed format. See FMOD_CREATECOMPRESSEDSAMPLE
 * @const_end
 */

/**
 * @const FMOD_OPENSTATE
 * @desc > **FMOD Constant:** [FMOD_OPENSTATE](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_openstate)
 * This constant specifies values describing what state a sound is in after FMOD_NONBLOCKING has been used to open it.
 * @member READY Opened and ready to play.
 * @member LOADING Initial load in progress.
 * @member ERROR Failed to open - file not found, out of memory etc. See return value of Sound::getOpenState for what happened.
 * @member CONNECTING Connecting to remote host (internet sounds only).
 * @member BUFFERING Buffering data.
 * @member SEEKING Seeking to subsound and re-flushing stream buffer.
 * @member PLAYING Ready and playing, but not possible to release at this time without stalling the main thread.
 * @member SETPOSITION Seeking within a stream to a different position.
 * @const_end
 */

/**
 * @const FMOD_SOUNDGROUP_BEHAVIOR
 * @desc > **FMOD Constant:** [FMOD_SOUNDGROUP_BEHAVIOR](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#fmod_soundgroup_behavior)
 * This constant specifies values specifying behavior when a sound group's max audible value is exceeded.
 * @member FAIL Excess sounds will fail when calling System::playSound.
 * @member MUTE Excess sounds will begin mute and will become audible when sufficient sounds are stopped.
 * @member STEALLOWEST Excess sounds will steal from the quietest Sound playing in the group.
 * @const_end
 */

/**
 * @const FMOD_CHANNELCONTROL_CALLBACK_TYPE
 * @desc > **FMOD Constant:** [FMOD_CHANNELCONTROL_CALLBACK_TYPE](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#fmod_channelcontrol_callback_type)
 * This constant specifies the types of callbacks called by Channels and ChannelGroups.
 * @member END Called when a sound ends. Supported by Channel only.
commanddata1: Unused.
commanddata2: Unused.
 * @member VIRTUALVOICE Called when a Channel is made virtual or real. Supported by Channel objects only.
commanddata1: (int) 0 represents 'virtual to real' and 1 represents 'real to virtual'.
commanddata2: Unused.
 * @member SYNCPOINT Called when a syncpoint is encountered. Can be from wav file markers or user added. Supported by Channel only.
commanddata1: (int) representing the index of the sync point for use with Sound::getSyncPointInfo.
commanddata2: Unused.
 * @member OCCLUSION Called when geometry occlusion values are calculated. Can be used to clamp or change the value. Supported by Channel and ChannelGroup.
commanddata1: (float *) representing the calculated direct occlusion value, can be modified.
commanddata2: (float *) representing the calculated reverb occlusion value, can be modified.
 * @const_end
 */

/**
 * @const FMOD_CHANNELCONTROL_DSP_INDEX
 * @desc > **FMOD Constant:** [FMOD_CHANNELCONTROL_DSP_INDEX](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#fmod_channelcontrol_dsp_index)
 * This constant specifies references to built in DSP positions that reside in a Channel or ChannelGroup DSP chain.
 * @member HEAD Head of the DSP chain, equivalent of index 0.
 * @member FADER Built in fader DSP.
 * @member TAIL Tail of the DSP chain, equivalent of the number of DSPs minus 1.
 * @const_end
 */

/**
 * @const FMOD_ERRORCALLBACK_INSTANCETYPE
 * @desc > **FMOD Constant:** [FMOD_ERRORCALLBACK_INSTANCETYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_errorcallback_instancetype)
 * This constant specifies identifiers used to represent the different types of instance in the error callback.
 * @member NONE Type representing no known instance type.
 * @member SYSTEM Type representing System.
 * @member CHANNEL Type representing Channel.
 * @member CHANNELGROUP Type representing ChannelGroup.
 * @member CHANNELCONTROL Type representing ChannelControl.
 * @member SOUND Type representing Sound.
 * @member SOUNDGROUP Type representing SoundGroup.
 * @member DSP Type representing DSP.
 * @member DSPCONNECTION Type representing DSPConnection.
 * @member GEOMETRY Type representing Geometry.
 * @member REVERB3D Type representing Reverb3D.
 * @member STUDIO_SYSTEM Type representing Studio::System.
 * @member STUDIO_EVENTDESCRIPTION Type representing Studio::EventDescription.
 * @member STUDIO_EVENTINSTANCE Type representing Studio::EventInstance.
 * @member STUDIO_PARAMETERINSTANCE Deprecated.
 * @member STUDIO_BUS Type representing Studio::Bus.
 * @member STUDIO_VCA Type representing Studio::VCA.
 * @member STUDIO_BANK Type representing Studio::Bank.
 * @member STUDIO_COMMANDREPLAY Type representing Studio::CommandReplay.
 * @const_end
 */

/**
 * @const FMOD_DSP_RESAMPLER
 * @desc > **FMOD Constant:** [FMOD_DSP_RESAMPLER](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_dsp_resampler)
 * This constant specifies the list of interpolation types used for resampling.
 * @member DEFAULT Default interpolation method, same as FMOD_DSP_RESAMPLER_LINEAR.
 * @member NOINTERP No interpolation. High frequency aliasing hiss will be audible depending on the sample rate of the sound.
 * @member LINEAR Linear interpolation (default method). Fast and good quality, causes very slight lowpass effect on low frequency sounds.
 * @member CUBIC Cubic interpolation. Slower than linear interpolation but better quality.
 * @member SPLINE 5 point spline interpolation. Slowest resampling method but best quality.
 * @const_end
 */

/**
 * @const FMOD_DSP_CALLBACK_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_CALLBACK_TYPE](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#fmod_dsp_callback_type)
 * This constant specifies the types of callbacks called by DSPs.
 * 
 * Callbacks are called from the game thread when set from the Core API or Studio API in synchronous mode, and from the Studio Update Thread when in default / async mode.
 * 
 * @member DATAPARAMETERRELEASE Called when a DSP's data parameter can be released.
data: FMOD_DSP_DATA_PARAMETER_INFO.
 * @const_end
 */

/**
 * @const FMOD_DSPCONNECTION_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSPCONNECTION_TYPE](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#fmod_dspconnection_type)
 * This constant specifies the list of connection types between 2 DSP nodes.
 * @member STANDARD Default connection type. Audio is mixed from the input to the output DSP's audible buffer.
 * @member SIDECHAIN Sidechain connection type. Audio is mixed from the input to the output DSP's sidechain buffer.
 * @member SEND Send connection type. Audio is mixed from the input to the output DSP's audible buffer, but the input is NOT executed, only copied from. A standard connection or sidechain needs to make an input execute to generate data.
 * @member SEND_SIDECHAIN Send sidechain connection type. Audio is mixed from the input to the output DSP's sidechain buffer, but the input is NOT executed, only copied from. A standard connection or sidechain needs to make an input execute to generate data.
 * @const_end
 */

/**
 * @const FMOD_TAGTYPE
 * @desc > **FMOD Constant:** [FMOD_TAGTYPE](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_tagtype)
 * This constant specifies the list of tag data / metadata types that could be stored within a sound. These include id3 tags, metadata from netstreams and vorbis/asf data.
 * @member UNKNOWN Tag type that is not recognized by FMOD
 * @member ID3V1 MP3 ID3 Tag 1.0. Typically 1 tag stored 128 bytes from end of an MP3 file.
 * @member ID3V2 MP3 ID3 Tag 2.0. Variable length tags with more than 1 possible.
 * @member VORBISCOMMENT Metadata container used in Vorbis, FLAC, Theora, Speex and Opus file formats.
 * @member SHOUTCAST SHOUTcast internet stream metadata which can be issued during playback.
 * @member ICECAST Icecast internet stream metadata which can be issued during playback.
 * @member ASF Advanced Systems Format metadata typically associated with Windows Media formats such as WMA.
 * @member MIDI Metadata stored inside a MIDI file.
 * @member PLAYLIST Playlist files such as PLS,M3U,ASX and WAX will populate playlist information through this tag type.
 * @member FMOD Tag type used by FMOD's MIDI, MOD, S3M, XM, IT format support, and netstreams to notify of internet stream events like a sample rate change.
 * @member USER For codec developers, this tag type can be used with FMOD_CODEC_METADATA_FUNC to generate custom metadata.
 * @const_end
 */

/**
 * @const FMOD_TAGDATATYPE
 * @desc > **FMOD Constant:** [FMOD_TAGDATATYPE](https://www.fmod.com/docs/2.02/api/core-api-sound.html#fmod_tagdatatype)
 * This constant specifies the list of tag data / metadata types.
 * @member BINARY Raw binary data. see FMOD_TAG structure for length of data in bytes.
 * @member INT Integer - Note this integer could be 8bit / 16bit / 32bit / 64bit. See FMOD_TAG structure for integer size (1 vs 2 vs 4 vs 8 bytes).
 * @member FLOAT IEEE floating point number. See FMOD_TAG structure to confirm if the float data is 32bit or 64bit (4 vs 8 bytes).
 * @member STRING 8bit ASCII char string. See FMOD_TAG structure for string length in bytes.
 * @member STRING_UTF16 16bit UTF string. Assume little endian byte order. See FMOD_TAG structure for string length in bytes.
 * @member STRING_UTF16BE 16bit UTF string Big endian byte order. See FMOD_TAG structure for string length in bytes.
 * @member STRING_UTF8 8 bit UTF string. See FMOD_TAG structure for string length in bytes.
 * @const_end
 */

/**
 * @const FMOD_PORT_TYPE
 * @desc > **FMOD Constant:** [FMOD_PORT_TYPE](https://www.fmod.com/docs/2.02/api/core-api-system.html#fmod_port_type)
 * This constant specifies the port types available for routing audio.
 * @member MUSIC Background music, pass FMOD_PORT_INDEX_NONE as port index.
 * @member COPYRIGHT_MUSIC Copyright background music, pass FMOD_PORT_INDEX_NONE as port index.
 * @member VOICE Voice chat, pass platform specific user ID of desired user as port index.
 * @member CONTROLLER Controller speaker, pass platform specific user ID of desired user as port index.
 * @member PERSONAL Personal audio device, pass platform specific user ID of desired user as port index.
 * @member VIBRATION Controller vibration, pass platform specific user ID of desired user as port index.
 * @member AUX Auxiliary output port, pass FMOD_PORT_INDEX_NONE as port index.
};

/* Codec constants */

#macro FMOD_CODEC_PLUGIN_VERSION 1

/**
 * @const FMOD_CODEC_SEEK_METHOD 
 * @desc > **FMOD Constant:** [FMOD_CODEC_SEEK_METHOD](https://www.fmod.com/docs/2.02/api/plugin-api-codec.html#fmod_codec_seek_method)
 * This constant specifies file seek methods.
 * @member SET Seeks from the beginning.
 * @member CURRENT Seeks from the current position.
 * @member END Seeks from the end.
 * @const_end
 */

/* DSP Constants */

#macro FMOD_PLUGIN_SDK_VERSION             110
#macro FMOD_DSP_GETPARAM_VALUESTR_LENGTH   32

/**
 * @const FMOD_DSP_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_type)
 * This constant specifies DSP types.
 * @member UNKNOWN Was created via a non-FMOD plugin and has an unknown purpose.
 * @member MIXER Does not process the signal, acts as a unit purely for mixing inputs.
 * @member OSCILLATOR Generates sine/square/saw/triangle or noise tones. See FMOD_DSP_OSCILLATOR for parameter information, Effect reference - Oscillator for overview.
 * @member LOWPASS Filters sound using a high quality, resonant lowpass filter algorithm but consumes more CPU time. Deprecated and will be removed in a future release. See FMOD_DSP_LOWPASS remarks for parameter information, Effect reference - Low Pass for overview.
 * @member ITLOWPASS Filters sound using a resonant lowpass filter algorithm that is used in Impulse Tracker, but with limited cutoff range (0 to 8060hz). See FMOD_DSP_ITLOWPASS for parameter information, Effect reference - IT Low Pass for overview.
 * @member HIGHPASS Filters sound using a resonant highpass filter algorithm. Deprecated and will be removed in a future release. See FMOD_DSP_HIGHPASS remarks for parameter information, Effect reference - High Pass for overview.
 * @member ECHO Produces an echo on the sound and fades out at the desired rate. See FMOD_DSP_ECHO for parameter information, Effect reference - Echo for overview.
 * @member FADER Pans and scales the volume of a unit. See FMOD_DSP_FADER for parameter information, Effect reference - Fader for overview.
 * @member FLANGE Produces a flange effect on the sound. See FMOD_DSP_FLANGE for parameter information, Effect reference - Flange for overview.
 * @member DISTORTION Distorts the sound. See FMOD_DSP_DISTORTION for parameter information, Effect reference - Distortion for overview.
 * @member NORMALIZE Normalizes or amplifies the sound to a certain level. See FMOD_DSP_NORMALIZE for parameter information, Effect reference - Normalize for overview.
 * @member LIMITER Limits the sound to a certain level. See FMOD_DSP_LIMITER for parameter information, Effect reference - Limiter for overview.
 * @member PARAMEQ Attenuates or amplifies a selected frequency range. Deprecated and will be removed in a future release. See FMOD_DSP_PARAMEQ for parameter information, Effect reference - Parametric EQ for overview.
 * @member PITCHSHIFT Bends the pitch of a sound without changing the speed of playback. See FMOD_DSP_PITCHSHIFT for parameter information, Effect reference - Pitch Shifter for overview.
 * @member CHORUS Produces a chorus effect on the sound. See FMOD_DSP_CHORUS for parameter information, Effect reference - Chorus for overview.
 * @member VSTPLUGIN Allows the use of Steinberg VST plugins.
 * @member WINAMPPLUGIN Allows the use of Nullsoft Winamp plugins.
 * @member ITECHO Produces an echo on the sound and fades out at the desired rate as is used in Impulse Tracker. See FMOD_DSP_ITECHO for parameter information, Effect reference - IT Echo for overview.
 * @member COMPRESSOR Dynamic compression (linked/unlinked multi-channel, wideband). See FMOD_DSP_COMPRESSOR for parameter information, Effect reference - Compressor for overview.
 * @member SFXREVERB I3DL2 reverb effect. See FMOD_DSP_SFXREVERB for parameter information, Effect reference - SFX Reverb for overview.
 * @member LOWPASS_SIMPLE Filters sound using a simple lowpass with no resonance, but has flexible cutoff and is fast. Deprecated and will be removed in a future release. See FMOD_DSP_LOWPASS_SIMPLE remarks for parameter information, Effect reference - Low Pass Simple for overview.
 * @member DELAY Produces different delays on individual channels of the sound. See FMOD_DSP_DELAY for parameter information, Effect reference - Delay for overview.
 * @member TREMOLO Produces a tremolo / chopper effect on the sound. See FMOD_DSP_TREMOLO for parameter information, Effect reference - Tremolo for overview.
 * @member LADSPAPLUGIN Unsupported / Deprecated.
 * @member SEND Sends a copy of the signal to a return DSP anywhere in the DSP tree. See FMOD_DSP_SEND for parameter information, Effect reference - Send for overview.
 * @member RETURN Receives signals from a number of send DSPs. See FMOD_DSP_RETURN for parameter information, Effect reference - Return for overview.
 * @member HIGHPASS_SIMPLE Filters sound using a simple highpass with no resonance, but has flexible cutoff and is fast. Deprecated and will be removed in a future release. See FMOD_DSP_HIGHPASS_SIMPLE remarks for parameter information, Effect reference - High Pass Simple for overview.
 * @member PAN Pans the signal in 2D or 3D, possibly upmixing or downmixing as well. See FMOD_DSP_PAN for parameter information, Effect reference - Pan for overview.
 * @member THREE_EQ Three-band equalizer. See FMOD_DSP_THREE_EQ for parameter information, Effect reference - Three EQ for overview.
 * @member FFT Analyzes the signal and provides spectrum information back through getParameter. See FMOD_DSP_FFT for parameter information, Effect reference - FFT for overview.
 * @member LOUDNESS_METER Analyzes the loudness and true peak of the signal.
 * @member ENVELOPEFOLLOWER Tracks the envelope of the input/sidechain signal. Deprecated and will be removed in a future release. See FMOD_DSP_ENVELOPEFOLLOWER for parameter information, Effect reference - Envelope Follower for overview.
 * @member CONVOLUTIONREVERB Convolution reverb. See FMOD_DSP_CONVOLUTION_REVERB for parameter information, Effect reference - Convolution Reverb for overview.
 * @member CHANNELMIX Provides per channel gain, channel grouping of the input signal which also sets the speaker format for the output signal, and customizable input to output channel routing. See FMOD_DSP_CHANNELMIX for parameter information, Effect reference - Channel Mix for overview.
 * @member TRANSCEIVER 'sends' and 'receives' from a selection of up to 32 different slots. It is like a send/return but it uses global slots rather than returns as the destination. It also has other features. Multiple transceivers can receive from a single channel, or multiple transceivers can send to a single channel, or a combination of both. See FMOD_DSP_TRANSCEIVER for parameter information, Effect reference - Transceiver for overview.
 * @member OBJECTPAN Spatializes input signal by passing it to an external object mixer. See FMOD_DSP_OBJECTPAN for parameter information, Effect reference - Object Panner for overview.
 * @member MULTIBAND_EQ Five band parametric equalizer. See FMOD_DSP_MULTIBAND_EQ for parameter information, Effect reference - Multiband Equalizer for overview.
 * @const_end
 */

/**
 * @const FMOD_DSP_OSCILLATOR
 * @desc > **FMOD Constant:** [FMOD_DSP_OSCILLATOR](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_oscillator)
 * This constant specifies oscillator DSP parameter types.
 * @member TYPE Waveform type. 0 = sine. 1 = square. 2 = sawup. 3 = sawdown. 4 = triangle. 5 = noise.
 * @member RATE Frequency of the tone. Does not affect the noise generator.
 * @const_end
 */

/**
 * @const FMOD_DSP_LOWPASS
 * @desc > **FMOD Constant:** [FMOD_DSP_LOWPASS](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_lowpass)
 * This constant specifies lowpass DSP parameter types.
 * 
 * Deprecated and will be removed in a future release, emulate with FMOD_DSP_TYPE_MULTIBAND_EQ.
 * 
 * @member CUTOFF Lowpass cutoff frequency.
 * @member RESONANCE Lowpass resonance Q value.
 * @const_end
 */

/**
 * @const FMOD_DSP_ITLOWPASS
 * @desc > **FMOD Constant:** [FMOD_DSP_ITLOWPASS](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_itlowpass)
 * This constant specifies lowpass DSP parameter types.
 * @member CUTOFF Lowpass cutoff frequency.
 * @member RESONANCE Lowpass resonance Q value.
 * @const_end
 */

/**
 * @const FMOD_DSP_HIGHPASS
 * @desc > **FMOD Constant:** [FMOD_DSP_HIGHPASS](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_highpass)
 * This constant specifies highpass DSP parameter types.
 * @member CUTOFF Highpass cutoff frequency.
 * @member RESONANCE Highpass resonance Q value.
 * @const_end
 */

/**
 * @const FMOD_DSP_ECHO
 * @desc > **FMOD Constant:** [FMOD_DSP_ECHO](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_echo)
 * This constant specifies echo DSP parameter types.
 * @member DELAY Echo delay.
 * @member FEEDBACK Echo decay per delay. 100.0 = No decay, 0.0 = total decay.
 * @member DRYLEVEL Original sound volume.
 * @member WETLEVEL Volume of echo signal to pass to output.
 * @const_end
 */

/**
 * @const FMOD_DSP_FADER
 * @desc > **FMOD Constant:** [FMOD_DSP_FADER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_fader)
 * This constant specifies fader DSP parameter types.
 * @member GAIN Signal gain.
 * @member OVERALL_GAIN Overall gain to allow FMOD to know the DSP is scaling the signal for visualization purposes.
 * @const_end
 */

/**
 * @const FMOD_DSP_FLANGE
 * @desc > **FMOD Constant:** [FMOD_DSP_FLANGE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_flange)
 * This constant specifies flange DSP parameter types.
 * @member MIX Percentage of wet signal in mix.
 * @member DEPTH Flange depth.
 * @member RATE Flange speed.
 * @const_end
 */

/**
 * @const FMOD_DSP_DISTORTION
 * @desc > **FMOD Constant:** [FMOD_DSP_DISTORTION](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_distortion)
 * This constant specifies distortion DSP parameter types.
 * @member LEVEL Distortion value.
 * @const_end
 */

/**
 * @const FMOD_DSP_NORMALIZE
 * @desc > **FMOD Constant:** [FMOD_DSP_NORMALIZE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_normalize)
 * This constant specifies normalize DSP parameter types.
 * 
 * Normalize amplifies the sound based on the maximum peaks within the signal. For example if the maximum peaks in the signal were 50% of the bandwidth, it would scale the whole sound by 2.
 * 
 * The lower threshold value makes the normalizer ignore peaks below a certain point, to avoid over-amplification if a loud signal suddenly came in, and also to avoid amplifying to maximum things like background hiss.
 * 
 * Because FMOD is a realtime audio processor, it doesn't have the luxury of knowing the peak for the whole sound (ie it can't see into the future), so it has to process data as it comes in.
 * 
 * To avoid very sudden changes in volume level based on small samples of new data, FMOD fades towards the desired amplification which makes for smooth gain control. The fadetime parameter can control this.
 * 
 * @member FADETIME Time to ramp the silence to full.
 * @member THRESHOLD Lower volume range threshold to ignore.
 * @member MAXAMP Maximum amplification allowed.
 * @const_end
 */

/**
 * @const FMOD_DSP_LIMITER
 * @desc > **FMOD Constant:** [FMOD_DSP_LIMITER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_limiter)
 * This constant specifies limited DSP parameter types.
 * @member RELEASETIME Time to return the gain reduction to full in ms.
 * @member CEILING Maximum level of the output signal.
 * @member MAXIMIZERGAIN Maximum amplification allowed.
 * @member MODE Channel processing mode where false is independent (limiter per channel) and true is linked (all channels are summed together before processing).
 * @const_end
 */

/**
 * @const FMOD_DSP_PARAMEQ
 * @desc > **FMOD Constant:** [FMOD_DSP_PARAMEQ](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_parameq)
 * This constant specifies parametric EQ DSP parameter types.
 * 
 * Deprecated and will be removed in a future release, to emulate with FMOD_DSP_TYPE_MULTIBAND_EQ:
 *
 * Parametric EQ is a single band peaking EQ filter that attenuates or amplifies a selected frequency and its neighboring frequencies.
 *
 * When the gain is set to zero decibels the sound will be unaffected and represents the original signal exactly.
 * 
 * @member CENTER Frequency center.
 * @member BANDWIDTH Octave range around the center frequency to filter.
 * @member GAIN Frequency Gain in dB.
 * @const_end
 */

/**
 * @const FMOD_DSP_MULTIBAND_EQ
 * @desc > **FMOD Constant:** [FMOD_DSP_MULTIBAND_EQ](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_multiband_eq)
 * This constant specifies multiband EQ DSP parameter types.
 * 
 * Flexible five band parametric equalizer.
 * 
 * @member A_FILTER Band A: used to interpret the behavior of the remaining parameters.
 * @member A_FREQUENCY Band A: Significant frequency, cutoff [low/high pass, low/high shelf], center [notch, peaking, band-pass], phase transition point [all-pass].
 * @member A_Q Band A: Quality factor, resonance [low/high pass], bandwidth [notch, peaking, band-pass], phase transition sharpness [all-pass], unused [low/high shelf].
 * @member A_GAIN Band A: Boost or attenuation in dB [peaking, high/low shelf only]. -30 to 30. Default = 0.
 * @member B_FILTER Band B: See Band A.
 * @member B_FREQUENCY Band B: See Band A
 * @member B_Q Band B: See Band A
 * @member B_GAIN Band B: See Band A
 * @member C_FILTER Band C: See Band A.
 * @member C_FREQUENCY Band C: See Band A.
 * @member C_Q Band C: See Band A.
 * @member C_GAIN Band C: See Band A.
 * @member D_FILTER Band D: See Band A.
 * @member D_FREQUENCY Band D: See Band A.
 * @member D_Q Band D: See Band A.
 * @member D_GAIN Band D: See Band A.
 * @member E_FILTER Band E: See Band A.
 * @member E_FREQUENCY Band E: See Band A.
 * @member E_Q Band E: See Band A.
 * @member E_GAIN Band E: See Band A.
 * @const_end
 */

/**
 * @const FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_multiband_eq_filter_type)
 * This constant specifies multiband EQ Filter types.
 * @member DISABLED Disabled filter, no processing.
 * @member LOWPASS_12DB Resonant low-pass filter, attenuates frequencies (12dB per octave) above a given point (with specificed resonance) while allowing the rest to pass.
 * @member LOWPASS_24DB Resonant low-pass filter, attenuates frequencies (24dB per octave) above a given point (with specificed resonance) while allowing the rest to pass.
 * @member LOWPASS_48DB Resonant low-pass filter, attenuates frequencies (48dB per octave) above a given point (with specificed resonance) while allowing the rest to pass.
 * @member HIGHPASS_12DB Resonant high-pass filter, attenuates frequencies (12dB per octave) below a given point (with specificed resonance) while allowing the rest to pass.
 * @member HIGHPASS_24DB Resonant high-pass filter, attenuates frequencies (24dB per octave) below a given point (with specificed resonance) while allowing the rest to pass.
 * @member HIGHPASS_48DB Resonant high-pass filter, attenuates frequencies (48dB per octave) below a given point (with specificed resonance) while allowing the rest to pass.
 * @member LOWSHELF Low-shelf filter, boosts or attenuates frequencies (with specified gain) below a given point while allowing the rest to pass.
 * @member HIGHSHELF High-shelf filter, boosts or attenuates frequencies (with specified gain) above a given point while allowing the rest to pass.
 * @member PEAKING Peaking filter, boosts or attenuates frequencies (with specified gain) at a given point (with specificed bandwidth) while allowing the rest to pass.
 * @member BANDPASS Band-pass filter, allows frequencies at a given point (with specificed bandwidth) to pass while attenuating frequencies outside this range.
 * @member NOTCH Notch or band-reject filter, attenuates frequencies at a given point (with specificed bandwidth) while allowing frequencies outside this range to pass.
 * @member ALLPASS All-pass filter, allows all frequencies to pass, but changes the phase response at a given point (with specified sharpness).
 * @const_end
 */

/**
 * @const FMOD_DSP_PITCHSHIFT
 * @desc > **FMOD Constant:** [FMOD_DSP_PITCHSHIFT](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pitchshift)
 * This constant specifies pitch shift DSP parameter types.
 * 
 * FMOD_DSP_PITCHSHIFT_MAXCHANNELS dictates the amount of memory allocated. By default, the maxchannels value is 0. If FMOD is set to stereo, the pitch shift unit will allocate enough memory for 2 channels. If it is 5.1, it will allocate enough memory for a 6 channel pitch shift, etc.
 * 
 * If the pitch shift effect is only ever applied to the global mix (i.e. with ChannelControl::addDSP on a ChannelGroup object), then 0 is the value to set as it will be enough to handle all speaker modes.
 * 
 * When the pitch shift is added to a Channel (i.e. with ChannelControl::addDSP on a Channel object) then the signal channel count that comes in could be anything from 1 to 8 possibly. It is only in this case where you might want to increase the channel count above the output's channel count.
 * 
 * If a Channel pitch shift is set to a lower number than the signal's channel count that is coming in, it will not pitch shift the sound.
 * 
 * @member PITCH Pitch value. 0.5 = one octave down, 2.0 = one octave up. 1.0 does not change the pitch.
 * @member FFTSIZE FFT window size - 256, 512, 1024, 2048, 4096. Increase this to reduce 'smearing'. This effect is a warbling sound similar to when an mp3 is encoded at very low bitrates.
 * @member OVERLAP Removed. Do not use. FMOD now uses 4 overlaps and cannot be changed.
 * @member MAXCHANNELS Maximum channels supported. 0 = same as FMOD's default output polyphony, 1 = mono, 2 = stereo etc. See remarks for more. It is recommended to leave it at 0.
 * @const_end
 */

/**
 * @const FMOD_DSP_CHORUS
 * @desc > **FMOD Constant:** [FMOD_DSP_CHORUS](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_chorus)
 * This constant specifies chorus DSP parameter types.
 * 
 * Chorus is an effect where the sound is more 'spacious' due a copy of the signal being played along side the original, but with the delay of each copy modulating on a sine wave. As there are 2 versions of the same signal (dry vs wet), by default each signal is given 50% mix, so that the total is not louder than the original unaffected signal.
 * 
 * @member MIX Percentage of wet signal in mix.
 * @member RATE Chorus modulation rate.
 * @member DEPTH Chorus modulation depth.
 * @const_end
 */

/**
 * @const FMOD_DSP_ITECHO
 * @desc > **FMOD Constant:** [FMOD_DSP_ITECHO](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_itecho)
 * This constant specifies IT Echo DSP parameter types.
 * 
 * This is effectively a software based echo filter that emulates the DirectX DMO echo effect. Impulse tracker files can support this, and FMOD will produce the effect on ANY platform, not just those that support DirectX effects!
 * 
 * [[Note: Every time the delay is changed, the plugin re-allocates the echo buffer. This means the echo will dissapear at that time while it refills its new buffer. Larger echo delays result in larger amounts of memory allocated.]]
 * 
 * As this is a stereo filter made mainly for IT playback, it is targeted for stereo signals. With mono signals only the FMOD_DSP_ITECHO_LEFTDELAY is used. For multi-channel signals (>2) there will be no echo on those channels.
 * 
 * @member WETDRYMIX Ratio of wet (processed) signal to dry (unprocessed) signal. Higher is wetter.
 * @member FEEDBACK Percentage of output fed back into input.
 * @member LEFTDELAY Delay for left channel.
 * @member RIGHTDELAY Delay for right channel.
 * @member PANDELAY Value that specifies whether to swap left and right delays with each successive echo. CURRENTLY NOT SUPPORTED.
 * @const_end
 */

/**
 * @const FMOD_DSP_COMPRESSOR
 * @desc > **FMOD Constant:** [FMOD_DSP_COMPRESSOR](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_compressor)
 * This constant specifies compressor DSP parameter types.
 * 
 * This is a multi-channel software limiter that is uniform across the whole spectrum.
 * The limiter is not guaranteed to catch every peak above the threshold level, because it cannot apply gain reduction instantaneously - the time delay is determined by the attack time. However setting the attack time too short will distort the sound, so it is a compromise. High level peaks can be avoided by using a short attack time - but not too short, and setting the threshold a few decibels below the critical level.
 * 
 * @member THRESHOLD Threshold level.
 * @member RATIO Compression Ratio.
 * @member ATTACK Attack time.
 * @member RELEASE Release time.
 * @member GAINMAKEUP Make-up gain applied after limiting.
 * @member USESIDECHAIN Data of type FMOD_DSP_PARAMETER_SIDECHAIN. Whether to analyse the sidechain signal instead of the input signal. The FMOD_DSP_PARAMETER_SIDECHAIN::sidechainenable default is false.
 * @member LINKED false = Independent (compressor per channel), true = Linked.
 * @const_end
 */

/**
 * @const FMOD_DSP_SFXREVERB
 * @desc > **FMOD Constant:** [FMOD_DSP_SFXREVERB](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_sfxreverb)
 * This constant specifies SFX Reverb DSP parameter types.
 * 
 * This is a high quality I3DL2 based reverb. On top of the I3DL2 property set, "Dry Level" is also included to allow the dry mix to be changed. These properties can be set with presets in FMOD_REVERB_PRESETS.
 * 
 * @member DECAYTIME Reverberation decay time at low-frequencies.
 * @member EARLYDELAY Delay time of first reflection.
 * @member LATEDELAY Late reverberation delay time relative to first reflection in milliseconds.
 * @member HFREFERENCE Reference frequency for high-frequency decay.
 * @member HFDECAYRATIO High-frequency decay time relative to decay time.
 * @member DIFFUSION Reverberation diffusion (echo density).
 * @member DENSITY Reverberation density (modal density).
 * @member LOWSHELFFREQUENCY Transition frequency of low-shelf filter.
 * @member LOWSHELFGAIN Gain of low-shelf filter.
 * @member HIGHCUT Cutoff frequency of low-pass filter.
 * @member EARLYLATEMIX Blend ratio of late reverb to early reflections.
 * @member WETLEVEL Reverb signal level.
 * @member DRYLEVEL Dry signal level.
 * @const_end
 */

/**
 * @const FMOD_DSP_LOWPASS_SIMPLE
 * @desc > **FMOD Constant:** [FMOD_DSP_LOWPASS_SIMPLE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_lowpass_simple)
 * This constant specifies simple Lowpass DSP Parameter types.
 * 
 * Deprecated and will be removed in a future release, to emulate with FMOD_DSP_TYPE_MULTIBAND_EQ:
 * 
 * This is a very simple low pass filter, based on two single-pole RC time-constant modules.
 * 
 * The emphasis is on speed rather than accuracy, so this should not be used for task requiring critical filtering.
 * 
 * @member CUTOFF Lowpass cutoff frequency.
 * @const_end
 */

/**
 * @const FMOD_DSP_DELAY
 * @desc > **FMOD Constant:** [FMOD_DSP_DELAY](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_delay)
 * This constant specifies delay DSP parameter types.
 * 
 * [[Note: Every time MaxDelay is changed, the plugin re-allocates the delay buffer. This means the delay will disappear at that time while it refills its new buffer. A larger MaxDelay results in larger amounts of memory allocated.]]
 *
 * Channel delays above MaxDelay will be clipped to MaxDelay and the delay buffer will not be resized.
 * 
 * @member CH0 Channel #0 Delay.
 * @member CH1 Channel #1 Delay.
 * @member CH2 Channel #2 Delay.
 * @member CH3 Channel #3 Delay.
 * @member CH4 Channel #4 Delay.
 * @member CH5 Channel #5 Delay.
 * @member CH6 Channel #6 Delay.
 * @member CH7 Channel #7 Delay.
 * @member CH8 Channel #8 Delay.
 * @member CH9 Channel #9 Delay.
 * @member CH10 Channel #10 Delay.
 * @member CH11 Channel #11 Delay.
 * @member CH12 Channel #12 Delay.
 * @member CH13 Channel #13 Delay.
 * @member CH14 Channel #14 Delay.
 * @member CH15 Channel #15 Delay.
 * @member MAXDELAY Maximum delay, for memory allocation purposes.
 * @const_end
 */

/**
 * @const FMOD_DSP_TREMOLO
 * @desc > **FMOD Constant:** [FMOD_DSP_TREMOLO](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_tremolo)
 * This constant specifies tremolo DSP parameter types.
 * 
 * The tremolo effect varies the amplitude of a sound. Depending on the settings, this unit can produce a tremolo, chopper or auto-pan effect.
 * 
 * The shape of the LFO (low freq. oscillator) can morphed between sine, triangle and sawtooth waves using the FMOD_DSP_TREMOLO_SHAPE and FMOD_DSP_TREMOLO_SKEW parameters.
 * 
 * FMOD_DSP_TREMOLO_DUTY and FMOD_DSP_TREMOLO_SQUARE are useful for a chopper-type effect where the first controls the on-time duration and second controls the flatness of the envelope.
 * 
 * FMOD_DSP_TREMOLO_SPREAD varies the LFO phase between channels to get an auto-pan effect. This works best with a sine shape LFO.
 * 
 * The LFO can be synchronized using the FMOD_DSP_TREMOLO_PHASE parameter which sets its instantaneous phase.
 * 
 * @member FREQUENCY LFO frequency.
 * @member DEPTH Tremolo depth.
 * @member SHAPE LFO shape morph between triangle and sine.
 * @member SKEW Time-skewing of LFO cycle.
 * @member DUTY LFO on-time.
 * @member SQUARE Flatness of the LFO shape.
 * @member PHASE Instantaneous LFO phase.
 * @member SPREAD Rotation / auto-pan effect.
 * @const_end
 */

/**
 * @const FMOD_DSP_SEND
 * @desc > **FMOD Constant:** [FMOD_DSP_SEND](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_send)
 * This constant specifies send DSP parameter types.
 * @member RETURNID ID of the Return DSP this send is connected to where -1 indicates no connected return DSP.
 * @member LEVEL Send level.
 * @const_end
 */

/**
 * @const FMOD_DSP_RETURN
 * @desc > **FMOD Constant:** [FMOD_DSP_RETURN](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_return)
 * This constant specifies return DSP parameter types.
 * @member ID ID of this Return DSP.
 * @member INPUT_SPEAKER_MODE Input speaker mode of this return.
 * @const_end
 */

/**
 * @const FMOD_DSP_HIGHPASS_SIMPLE
 * @desc > **FMOD Constant:** [FMOD_DSP_HIGHPASS_SIMPLE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_highpass_simple)
 * This constant specifies simple Highpass DSP parameter types.
 * @member CUTOFF Highpass cutoff frequency.
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN_2D_STEREO_MODE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_2D_STEREO_MODE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan_2d_stereo_mode_type)
 * This constant specifies 2D Stereo Mode values for Pan DSP.
 * @member DISTRIBUTED The parts of a stereo sound are spread around destination speakers based on FMOD_DSP_PAN_2D_EXTENT / FMOD_DSP_PAN_2D_DIRECTION
 * @member DISCRETE The L/R parts of a stereo sound are rotated around a circle based on FMOD_DSP_PAN_2D_STEREO_AXIS / FMOD_DSP_PAN_2D_STEREO_SEPARATION.
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN_MODE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_MODE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan_mode_type)
 * This constant specifies pan Mode values for Pan DSP.
 * @member MONO Single channel output.
 * @member STEREO Two channel output.
 * @member SURROUND Three or more channel output. Includes common modes like quad, 5.1 or 7.1.
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN_3D_ROLLOFF_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_3D_ROLLOFF_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan_3d_rolloff_type)
 * This constant specifies 3D roll-off values for Pan DSP.
 * 
 * Minimum and Maximum distance settings are controlled with FMOD_DSP_PAN_3D_MIN_DISTANCE and FMOD_DSP_PAN_3D_MAX_DISTANCE.
 * 
 * @member LINEARSQUARED This is a linear-square roll-off model. Below mindistance, the volume is unattenuated; as distance increases from mindistance to maxdistance, the volume attenuates to silence according to a linear squared gradient. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. This roll-off mode provides steeper volume ramping close to the mindistance, and more gradual ramping close to the maxdistance, than linear roll-off mode.
 * @member LINEAR This is a linear roll-off model. Below mindistance, the volume is unattenuated; as distance increases from mindistance to maxdistance, the volume attenuates to silence using a linear gradient. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. While this roll-off mode is not as realistic as inverse roll-off mode, it is easier to comprehend.
 * @member INVERSE This is an inverse roll-off model. Below mindistance, the volume is unattenuated; as distance increases above mindistance, the volume attenuates using mindistance/distance as the gradient until it reaches maxdistance, where it stops attenuating. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. This roll-off mode accurately models the way sounds attenuate over distance in the real world. (DEFAULT)
 * @member INVERSETAPERED This is a combination of the inverse and linear-square roll-off models. At short distances where inverse roll-off would provide greater attenuation, it functions as inverse roll-off mode; then at greater distances where linear-square roll-off mode would provide greater attenuation, it uses that roll-off mode instead. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. Inverse tapered roll-off mode approximates realistic behavior while still guaranteeing the sound attenuates to silence at maxdistance.
 * @member CUSTOM 
 * @const_end Custom roll-off can be defined by the programmer setting volume manually. Attenuation in the Pan DSP is turned off in this mode.
 */

/**
 * @const FMOD_DSP_PAN_3D_EXTENT_MODE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_3D_EXTENT_MODE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan_3d_extent_mode_type)
 * This constant specifies 3D Extent Mode values for Pan DSP.
 * @member AUTO Automatically determine the extent.
 * @member USER User-defined extent.
 * @member OFF No extent.
 * @const_end
 */

/**
 * @const FMOD_DSP_PAN
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_pan)
 * This constant specifies pan DSP parameter types.
 * 
 * FMOD_DSP_PAN_3D_PAN_BLEND controls the percentage of the effect supplied by FMOD_DSP_PAN_2D_DIRECTION and FMOD_DSP_PAN_2D_EXTENT.
 * 
 * For FMOD_DSP_PAN_3D_POSITION, the following members in the FMOD_DSP_PARAMETER_3DATTRIBUTES_MULTI struct should be non zero.
 * - numlisteners - This is typically 1, can be up to 8. Typically more than 1 is only used for split screen purposes. The FMOD Panner will average angles and produce the best compromise for panning and attenuation.
 * - relative[listenernum].position - This is the delta between the listener position and the sound position. Typically the listener position is subtracted from the sound position.
 * - relative[listenernum].forward - This is the sound's forward vector. Optional, set to 0,0,1 if not needed. This is only relevant for more than mono sounds in 3D, that are spread amongst the destination speakers at the time of panning.
 * 
 * For FMOD_DSP_PAN_2D_STEREO_MODE, when it is set to FMOD_DSP_PAN_2D_STEREO_MODE_DISCRETE, only FMOD_DSP_PAN_2D_STEREO_SEPARATION and FMOD_DSP_PAN_2D_STEREO_AXIS are used.
 * When it is set to FMOD_DSP_PAN_2D_STEREO_MODE_DISTRIBUTED, then standard FMOD_DSP_PAN_2D_DIRECTION/FMOD_DSP_PAN_2D_EXTENT parameters are used.
 * 
 * FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE defaults to true for backwards compatibility.
 * 
 * @member MODE Panner mode.
 * @member _2D_STEREO_POSITION 2D Stereo pan position.
 * @member _2D_DIRECTION 2D Surround pan direction. Direction from center point of panning circle where 0 is front center and -180 or +180 is rear speakers center point.
 * @member _2D_EXTENT 2D Surround pan extent.
 * @member _2D_ROTATION 2D Surround pan rotation.
 * @member _2D_LFE_LEVEL 2D Surround pan LFE level.
 * @member _2D_STEREO_MODE Stereo-To-Surround Mode.
 * @member _2D_STEREO_SEPARATION Stereo-To-Surround Stereo For FMOD_DSP_PAN_2D_STEREO_MODE_DISCRETE mode. Separation/width of L/R parts of stereo sound.
 * @member _2D_STEREO_AXIS Stereo-To-Surround Stereo For FMOD_DSP_PAN_2D_STEREO_MODE_DISCRETE mode. Axis/rotation of L/R parts of stereo sound.
 * @member ENABLED_SPEAKERS Speakers Enabled Bitmask for each speaker from 0 to 32 to be considered by panner. Use to disable speakers from being panned to. 0 to 0xFFF. Default = 0xFFF (All on).
 * @member _3D_POSITION 3D Position of panner and listener(s).
 * @member _3D_ROLLOFF 3D volume attenuation curve shape.
 * @member _3D_MIN_DISTANCE 3D volume attenuation minimum distance when FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE is true.
 * @member _3D_MAX_DISTANCE 3D volume attenuation maximum distance when FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE is true.
 * @member _3D_EXTENT_MODE 3D Extent Mode.
 * @member _3D_SOUND_SIZE 3D Sound Size.
 * @member _3D_MIN_EXTENT 3D Min Extent.
 * @member _3D_PAN_BLEND 3D Pan Blend.
 * @member LFE_UPMIX_ENABLED LFE Upmix Enabled. Determines whether non-LFE source channels should mix to the LFE or leave it alone. 0 (off) to 1 (on). Default = 0 (off).
 * @member OVERALL_GAIN Overall gain to allow FMOD to know the DSP is scaling the signal for visualization purposes.
 * @member SURROUND_SPEAKER_MODE Surround speaker mode. (FMOD_SPEAKERMODE)
 * @member _2D_HEIGHT_BLEND 2D Height blend. When the input or FMOD_DSP_PAN_SURROUND_SPEAKER_MODE has height speakers, control the blend between ground and height. -1.0 (push top speakers to ground), 0.0 (preserve top / ground separation), 1.0 (push ground speakers to top).
 * @member ATTENUATION_RANGE Attenuation Range when FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE is false.
 * @member OVERRIDE_RANGE Override Attenuation Range with FMOD_DSP_PAN_3D_MIN_DISTANCE and FMOD_DSP_PAN_3D_MAX_DISTANCE.
 * @const_end
 */

/**
 * @const FMOD_DSP_THREE_EQ_CROSSOVERSLOPE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_THREE_EQ_CROSSOVERSLOPE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_three_eq_crossoverslope_type)
 * This constant specifies crossover values for Three EQ DSP.
 * @member _12DB 12dB/Octave crossover slope.
 * @member _24DB 24dB/Octave crossover slope.
 * @member _48DB 48dB/Octave crossover slope.
 * @const_end
 */

/**
 * @const FMOD_DSP_THREE_EQ
 * @desc > **FMOD Constant:** [FMOD_DSP_THREE_EQ](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_three_eq)
 * This constant specifies three EQ DSP parameter types.
 * @member LOWGAIN Low frequency gain.
 * @member MIDGAIN Mid frequency gain.
 * @member HIGHGAIN High frequency gain.
 * @member LOWCROSSOVER Low-to-mid crossover frequency.
 * @member HIGHCROSSOVER Mid-to-high crossover frequency.
 * @member CROSSOVERSLOPE Crossover Slope type.
 * @const_end
 */

/**
 * @const FMOD_DSP_FFT_WINDOW
 * @desc > **FMOD Constant:** [FMOD_DSP_FFT_WINDOW](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_fft_window)
 * This constant specifies the list of windowing methods for the FFT DSP.
 * 
 * Used in spectrum analysis to reduce leakage / transient signals interfering with the analysis. This is a problem with analysis of continuous signals that only have a small portion of the signal sample (the fft window size). Windowing the signal with a curve or triangle tapers the sides of the fft window to help alleviate this problem.
 * 
 * Cyclic signals such as a sine wave that repeat their cycle in a multiple of the window size do not need windowing. I.e. If the sine wave repeats every 1024, 512, 256 etc samples and the FMOD fft window is 1024, then the signal would not need windowing.
 * 
 * Not windowing is the same as FMOD_DSP_FFT_WINDOW_RECT, which is the default. If the cycle of the signal (ie the sine wave) is not a multiple of the window size, it will cause frequency abnormalities, so a different windowing method is needed.
 * 
 * @member RECT w[n] = 1.0
 * @member TRIANGLE w[n] = TRI(2n/N)
 * @member HAMMING w[n] = 0.54 - (0.46 * COS(n/N) )
 * @member HANNING w[n] = 0.5 * (1.0 - COS(n/N) )
 * @member BLACKMAN w[n] = 0.42 - (0.5 * COS(n/N) ) + (0.08 * COS(2.0 * n/N) )
 * @member BLACKMANHARRIS w[n] = 0.35875 - (0.48829 * COS(1.0 * n/N)) + (0.14128 * COS(2.0 * n/N)) - (0.01168 * COS(3.0 * n/N))
 * @const_end
 */

/**
 * @const FMOD_DSP_FFT
 * @desc > **FMOD Constant:** [FMOD_DSP_FFT](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_fft)
 * This constant specifies FFT DSP parameter types.
 * 
 * Set the attributes for the spectrum analysis with FMOD_DSP_FFT_WINDOWSIZE and FMOD_DSP_FFT_WINDOWTYPE, and retrieve the results with FMOD_DSP_FFT_SPECTRUM and FMOD_DSP_FFT_DOMINANT_FREQ.
 * FMOD_DSP_FFT_SPECTRUM stores its data in the FMOD_DSP_PARAMETER_DATA_TYPE_FFT. You will need to cast to this structure to get the right data.
 * 
 * See Also: FMOD_DSP_TYPE_FFT, DSP::setParameterFloat, DSP::setParameterInt, DSP::setParameterData, FMOD_DSP_FFT_WINDOW
 * 
 * @member WINDOWSIZE Window size. Must be a power of 2 between 128 and 16384.
 * @member WINDOWTYPE FFT Window Type.
 * @member SPECTRUMDATA Returns the current spectrum values between 0 and 1 for each 'fft bin'. Divide the Nyquist frequency by the window size to get the hz value per entry.
 * @member DOMINANT_FREQ Returns the dominant frequencies for each channel.
 * @const_end
 */

#macro FMOD_DSP_LOUDNESS_METER_HISTOGRAM_SAMPLES 66

/**
 * @const FMOD_DSP_LOUDNESS_METER
 * @desc > **FMOD Constant:** [FMOD_DSP_LOUDNESS_METER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_loudness_meter)
 * This constant specifies loudness meter DSP parameter types.
 * @member STATE Update state.
 * @member WEIGHTING Channel weighting.
 * @member INFO Metering information.
 * @const_end
 */

/**
 * @const FMOD_DSP_LOUDNESS_METER_STATE_TYPE
 * @desc > **FMOD Constant:** [FMOD_DSP_LOUDNESS_METER_STATE_TYPE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_loudness_meter_state_type)
 * This constant specifies loudness meter state indicating update behavior.
 * @member RESET_INTEGRATED Reset loudness meter information except max peak.
 * @member RESET_MAXPEAK Reset loudness meter max peak.
 * @member RESET_ALL Reset all loudness meter information.
 * @member PAUSED Pause loudness meter.
 * @member ANALYZING Enable loudness meter recording and analyzing.
 * @const_end
 */

/**
 * @const FMOD_DSP_ENVELOPEFOLLOWER
 * @desc > **FMOD Constant:** [FMOD_DSP_ENVELOPEFOLLOWER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_envelopefollower)
 * This constant specifies parameter types for the FMOD_DSP_TYPE_ENVELOPEFOLLOWER unit. This is a simple envelope follower for tracking the signal level. This unit does not affect the incoming signal.
 * 
 * @member ATTACK Attack time.
 * @member RELEASE Release time.
 * @member ENVELOPE Current value of the envelope.
 * @member USESIDECHAIN Whether to analyse the sidechain signal instead of the input signal.
 * @const_end
 */

/**
 * @const FMOD_DSP_CONVOLUTION_REVERB_PARAM
 * @desc > **FMOD Constant:** [FMOD_DSP_CONVOLUTION_REVERB](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_convolution_reverb)
 * This constant specifies Convolution reverb DSP parameter types.
 * 
 * Convolution reverb is a reverberation effect that uses a recording of a physical space known as an Impulse Response file (or IR file) to generate frequency specific reverberation.
 * 
 * @member IR Array of signed 16-bit (short) PCM data to be used as reverb impulse response. First member of the array should be a 16 bit value (short) which specifies the number of channels. Array looks like [index 0=numchannels][index 1+ = raw 16 bit PCM data]. Data is copied internally so source can be freed.
 * @member WET Volume of echo signal to pass to output.
 * @member DRY Original sound volume.
 * @member LINKED Linked - channels are mixed together before processing through the reverb.
 * @const_end
 */

/**
 * @const FMOD_DSP_CHANNELMIX_OUTPUT
 * @desc > **FMOD Constant:** [FMOD_DSP_CHANNELMIX_OUTPUT](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_channelmix_output)
 * This constant specifies channel Mix DSP outgrouping parameter types.
 * @member DEFAULT Output channel count = input channel count. Mapping: See FMOD_SPEAKER enumeration.
 * @member ALLMONO Output channel count = 1. Mapping: Mono, Mono, Mono, Mono, Mono, Mono, ... (each channel all the way up to FMOD_MAX_CHANNEL_WIDTH channels are treated as if they were mono)
 * @member ALLSTEREO Output channel count = 2. Mapping: Left, Right, Left, Right, Left, Right, ... (each pair of channels is treated as stereo all the way up to FMOD_MAX_CHANNEL_WIDTH channels)
 * @member ALLQUAD Output channel count = 4. Mapping: Repeating pattern of Front Left, Front Right, Surround Left, Surround Right.
 * @member ALL5POINT1 Output channel count = 6. Mapping: Repeating pattern of Front Left, Front Right, Center, LFE, Surround Left, Surround Right.
 * @member ALL7POINT1 Output channel count = 8. Mapping: Repeating pattern of Front Left, Front Right, Center, LFE, Surround Left, Surround Right, Back Left, Back Right.
 * @member ALLLFE Output channel count = 6. Mapping: Repeating pattern of LFE in a 5.1 output signal.
 * @member ALL7POINT1POINT4 Output channel count = 12. Mapping: Repeating pattern of Front Left, Front Right, Center, LFE, Surround Left, Surround Right, Back Left, Back Right, Top Front Left, Top Front Right, Top Back Left, Top Back Right.
 * @const_end
 */

/**
 * @const FMOD_DSP_CHANNELMIX
 * @desc > **FMOD Constant:** [FMOD_DSP_CHANNELMIX](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_channelmix)
 * This constant specifies channel Mix DSP parameter types.
 * 
 * For FMOD_DSP_CHANNELMIX_OUTPUTGROUPING, this value will set the output speaker format for the DSP which determines the number of output channels.
 *
 * For input channels mapped to an output channel in excess of the number of output channels, it will instead be mapped to the modulo of that channel index. Eg if there are 4 output channels, the input channel mapped to output channel index 5 will be mapped to index 1.
 * 
 * @member OUTPUTGROUPING Channel mix output grouping. (FMOD_DSP_CHANNELMIX_OUTPUT)
 * @member GAIN_CH0 Channel #0 gain.
 * @member GAIN_CH1 Channel #1 gain.
 * @member GAIN_CH2 Channel #2 gain.
 * @member GAIN_CH3 Channel #3 gain.
 * @member GAIN_CH4 Channel #4 gain.
 * @member GAIN_CH5 Channel #5 gain.
 * @member GAIN_CH6 Channel #6 gain.
 * @member GAIN_CH7 Channel #7 gain.
 * @member GAIN_CH8 Channel #8 gain.
 * @member GAIN_CH9 Channel #9 gain.
 * @member GAIN_CH10 Channel #10 gain.
 * @member GAIN_CH11 Channel #11 gain.
 * @member GAIN_CH12 Channel #12 gain.
 * @member GAIN_CH13 Channel #13 gain.
 * @member GAIN_CH14 Channel #14 gain.
 * @member GAIN_CH15 Channel #15 gain.
 * @member GAIN_CH16 Channel #16 gain.
 * @member GAIN_CH17 Channel #17 gain.
 * @member GAIN_CH18 Channel #18 gain.
 * @member GAIN_CH19 Channel #19 gain.
 * @member GAIN_CH20 Channel #20 gain.
 * @member GAIN_CH21 Channel #21 gain.
 * @member GAIN_CH22 Channel #22 gain.
 * @member GAIN_CH23 Channel #23 gain.
 * @member GAIN_CH24 Channel #24 gain.
 * @member GAIN_CH25 Channel #25 gain.
 * @member GAIN_CH26 Channel #26 gain.
 * @member GAIN_CH27 Channel #27 gain.
 * @member GAIN_CH28 Channel #28 gain.
 * @member GAIN_CH29 Channel #29 gain.
 * @member GAIN_CH30 Channel #30 gain.
 * @member GAIN_CH31 Channel #31 gain.
 * @member OUTPUT_CH0 Output channel for Input channel #0
 * @member OUTPUT_CH1 Output channel for Input channel #1
 * @member OUTPUT_CH2 Output channel for Input channel #2
 * @member OUTPUT_CH3 Output channel for Input channel #3
 * @member OUTPUT_CH4 Output channel for Input channel #4
 * @member OUTPUT_CH5 Output channel for Input channel #5
 * @member OUTPUT_CH6 Output channel for Input channel #6
 * @member OUTPUT_CH7 Output channel for Input channel #7
 * @member OUTPUT_CH8 Output channel for Input channel #8
 * @member OUTPUT_CH9 Output channel for Input channel #9
 * @member OUTPUT_CH10 Output channel for Input channel #10
 * @member OUTPUT_CH11 Output channel for Input channel #11
 * @member OUTPUT_CH12 Output channel for Input channel #12
 * @member OUTPUT_CH13 Output channel for Input channel #13
 * @member OUTPUT_CH14 Output channel for Input channel #14
 * @member OUTPUT_CH15 Output channel for Input channel #15
 * @member OUTPUT_CH16 Output channel for Input channel #16
 * @member OUTPUT_CH17 Output channel for Input channel #17
 * @member OUTPUT_CH18 Output channel for Input channel #18
 * @member OUTPUT_CH19 Output channel for Input channel #19
 * @member OUTPUT_CH20 Output channel for Input channel #20
 * @member OUTPUT_CH21 Output channel for Input channel #21
 * @member OUTPUT_CH22 Output channel for Input channel #22
 * @member OUTPUT_CH23 Output channel for Input channel #23
 * @member OUTPUT_CH24 Output channel for Input channel #24
 * @member OUTPUT_CH25 Output channel for Input channel #25
 * @member OUTPUT_CH26 Output channel for Input channel #26
 * @member OUTPUT_CH27 Output channel for Input channel #27
 * @member OUTPUT_CH28 Output channel for Input channel #28
 * @member OUTPUT_CH29 Output channel for Input channel #29
 * @member OUTPUT_CH30 Output channel for Input channel #30
 * @member OUTPUT_CH31 Output channel for Input channel #31
 * @const_end
 */

/**
 * @const FMOD_DSP_TRANSCEIVER_SPEAKERMODE
 * @desc > **FMOD Constant:** [FMOD_DSP_TRANSCEIVER_SPEAKERMODE](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_transceiver_speakermode)
 * This constant specifies speaker mode values for Transceiver DSP.
 * 
 * The speaker mode of a transceiver buffer (of which there are up to 32 of) is determined automatically depending on the signal flowing through the transceiver effect, or it can be forced. Use a smaller fixed speaker mode buffer to save memory. Only relevant for transmitter dsps, as they control the format of the transceiver channel's buffer.
 * 
 * If multiple transceivers transmit to a single buffer in different speaker modes, it will allocate memory for each speaker mode. This uses more memory than a single speaker mode. If there are multiple receivers reading from a channel with multiple speaker modes, it will read them all and mix them together.
 * 
 * If the system's speaker mode is stereo or mono, it will not create a 3rd buffer, it will just use the mono/stereo speaker mode buffer.
 * 
 * @member AUTO A transmitter will use whatever signal channel count coming in to the transmitter, to determine which speaker mode is allocated for the transceiver channel.
 * @member MONO A transmitter will always downmix to a mono channel buffer.
 * @member STEREO A transmitter will always upmix or downmix to a stereo channel buffer.
 * @member SURROUND A transmitter will always upmix or downmix to a surround channel buffer. Surround is the speaker mode of the system above stereo, so could be quad/surround/5.1/7.1.
 * @const_end
 */

/**
 * @const FMOD_DSP_TRANSCEIVER
 * @desc > **FMOD Constant:** [FMOD_DSP_TRANSCEIVER](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_transceiver)
 * This constant specifies transceiver DSP parameter types.
 * @member TRANSMIT FALSE = Transceiver is a 'receiver' (like a return) and accepts data from a channel. TRUE = Transceiver is a 'transmitter' (like a send).
 * @member GAIN Gain to receive or transmit.
 * @member CHANNEL Global slot that can be transmitted to or received from.
 * @member TRANSMITSPEAKERMODE Speaker mode (transmitter mode only). (FMOD_DSP_TRANSCEIVER_SPEAKERMODE)
 * @const_end
 */

/**
 * @const FMOD_DSP_OBJECTPAN
 * @desc > **FMOD Constant:** [FMOD_DSP_OBJECTPAN](https://www.fmod.com/docs/2.02/api/core-api-common-dsp-effects.html#fmod_dsp_objectpan)
 * This constant specifies object based spatializer parameters.
 * 
 * Signal processed by this DSP will be sent to the global object mixer (effectively a send), any DSP connected after this will receive silence.
 * 
 * For best results this DSP should be used with FMOD_OUTPUTTYPE_WINSONIC or FMOD_OUTPUTTYPE_AUDIO3D to get height spatialization. Playback with any other output will result in fallback spatialization provided by FMOD_DSP_TYPE_PAN.
 * 
 * FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE defaults to true for backwards compatibility.
 * 
 * @member _3D_POSITION 3D Position.
 * @member _3D_ROLLOFF 3D Roll-off Type.
 * @member _3D_MIN_DISTANCE 3D Min Distance when FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE is true.
 * @member _3D_MAX_DISTANCE 3D Max Distance when FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE is true.
 * @member _3D_EXTENT_MODE 3D Extent Mode.
 * @member _3D_SOUND_SIZE 3D Sound Size.
 * @member _3D_MIN_EXTENT 3D Min Extent.
 * @member OVERALL_GAIN Overall gain to allow FMOD to know the DSP is scaling the signal for virtualization purposes.
 * @member OUTPUTGAIN Output gain level.
 * @member ATTENUATION_RANGE Attenuation Range when FMOD_DSP_OBJECTPAN_OVERRIDE_RANGE is false.
 * @member OVERRIDE_RANGE Override Attenuation Range with FMOD_DSP_OBJECTPAN_3D_MIN_DISTANCE and FMOD_DSP_OBJECTPAN_3D_MAX_DISTANCE.
 * @const_end
 */

/* Output constants */

#macro FMOD_OUTPUT_PLUGIN_VERSION 5

/**
 * @const FMOD_OUTPUT_METHOD
 * @desc > **FMOD Constant:** [FMOD_OUTPUT_METHOD](https://www.fmod.com/docs/2.02/api/plugin-api-output.html#fmod_output_method)
 * This constant specifies output method used to interact with the mixer.
 * 
 * For hardware that presents a callback that must be filled immediately FMOD_OUTPUT_METHOD_MIX_BUFFERED is recommended as buffering occurs in a separate thread, reading from the mixer is simply a memcpy. Using FMOD_OUTPUT_METHOD_MIX_DIRECT is recommended if you want to take direct control of how and when the mixer runs.
 * 
 * @member MIX_DIRECT Mixer will execute directly when calling FMOD_OUTPUT_READFROMMIXER_FUNC, buffering must be performed by plugin code.
 * @member MIX_BUFFERED Mixer will execute and buffer automatically (on a separate thread) and can be read from with FMOD_OUTPUT_READFROMMIXER_FUNC.
 * @const_end
 */

/* Studio Definitions */

#macro FMOD_STUDIO_LOAD_MEMORY_ALIGNMENT                   32

/**
 * @const FMOD_STUDIO_INIT
 * @desc > **FMOD Constant:** [FMOD_STUDIO_INITFLAGS](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_initflags)
 * This constant specifies FMOD Studio System initialization flags.
 * @member NORMAL Use defaults for all initialization options.
 * @member LIVEUPDATE Enable live update.
 * @member ALLOW_MISSING_PLUGINS Load banks even if they reference plugins that have not been loaded.
 * @member SYNCHRONOUS_UPDATE Disable asynchronous processing and perform all processing on the calling thread instead.
 * @member DEFERRED_CALLBACKS Defer timeline callbacks until the main update. See Studio::EventInstance::setCallback for more information.
 * @member LOAD_FROM_UPDATE No additional threads are created for bank and resource loading. Loading is driven from Studio::System::update.
 * @member MEMORY_TRACKING Enables detailed memory usage statistics. Increases memory footprint and impacts performance. See Studio::Bus::getMemoryUsage and Studio::EventInstance::getMemoryUsage for more information. Implies FMOD_INIT_MEMORY_TRACKING.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_PARAMETER_FLAGS
 * @desc > **FMOD Constant:** [FMOD_STUDIO_PARAMETER_FLAGS](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_parameter_flags)
 * This constant specifies flags describing the behavior of a parameter.
 * @member READONLY Read only.
 * @member AUTOMATIC Automatic parameter.
 * @member GLOBAL Global parameter.
 * @member DISCRETE Discrete parameter that operates on integers (whole numbers) rather than continuous fractional numbers.
 * @member LABELED Labeled discrete parameter that has a label for each integer value. This flag will never be set in banks built with FMOD Studio versions prior to 2.01.10. If this flag is set, FMOD_STUDIO_PARAMETER_DISCRETE will also be set.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_SYSTEM_CALLBACK
 * @desc > **FMOD Constant:** [FMOD_STUDIO_SYSTEM_CALLBACK_TYPE](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_system_callback_type)
 * This constant specifies the callback types for the Studio System callback.
 * 
 * Callbacks are called from the Studio Update Thread in default / async mode and the main (calling) thread in synchronous mode.
 * 
 * @member PREUPDATE Called at the start of the main Studio update. For async mode this will be on its own thread.
 * @member POSTUPDATE Called at the end of the main Studio update. For async mode this will be on its own thread.
 * @member BANK_UNLOAD Called directly when bank has just been unloaded, after all resources are freed. The commanddata argument will be the bank handle.
 * @member LIVEUPDATE_CONNECTED Called after a live update connection has been established.
 * @member LIVEUPDATE_DISCONNECTED Called after live update session disconnects.
 * @member ALL Pass this mask to Studio::System::setCallback to receive all callback types.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_EVENT_CALLBACK
 * @desc > **FMOD Constant:** [FMOD_STUDIO_EVENT_CALLBACK_TYPE](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#fmod_studio_event_callback_type)
 * This constant specifies the FMOD Studio event callback types.
 * 
 * Callbacks are called from the Studio Update Thread in default / async mode and the main (calling) thread in synchronous mode.
 * If using FMOD_STUDIO_INIT_DEFERRED_CALLBACKS, FMOD_STUDIO_EVENT_CALLBACK_TIMELINE_MARKER and FMOD_STUDIO_EVENT_CALLBACK_TIMELINE_BEAT are instead called from the main thread.
 * 
 * @member CREATED Called when an instance is fully created. Parameters = unused.
 * @member DESTROYED Called when an instance is just about to be destroyed. Parameters = unused.
 * @member STARTING Studio::EventInstance::start has been called on an event which was not already playing. The event will remain in this state until its sample data has been loaded. Parameters = unused.
 * @member STARTED The event has commenced playing. Normally this callback will be issued immediately after FMOD_STUDIO_EVENT_CALLBACK_STARTING, but may be delayed until sample data has loaded. Parameters = unused.
 * @member RESTARTED Studio::EventInstance::start has been called on an event which was already playing. Parameters = unused.
 * @member STOPPED The event has stopped. Parameters = unused.
 * @member START_FAILED Studio::EventInstance::start has been called but the polyphony settings did not allow the event to start. In this case none of FMOD_STUDIO_EVENT_CALLBACK_STARTING, FMOD_STUDIO_EVENT_CALLBACK_STARTED and FMOD_STUDIO_EVENT_CALLBACK_STOPPED will be called. Parameters = unused.
 * @member CREATE_PROGRAMMER_SOUND A programmer sound is about to play. FMOD expects the callback to provide an FMOD::Sound object for it to use. Parameters = FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES.
 * @member DESTROY_PROGRAMMER_SOUND A programmer sound has stopped playing. At this point it is safe to release the FMOD::Sound object that was used. Parameters = FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES.
 * @member PLUGIN_CREATED Called when a DSP plugin instance has just been created. Parameters = FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES.
 * @member PLUGIN_DESTROYED Called when a DSP plugin instance is about to be destroyed. Parameters = FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES.
 * @member TIMELINE_MARKER Called when the timeline passes a named marker. Parameters = FMOD_STUDIO_TIMELINE_MARKER_PROPERTIES.
 * @member TIMELINE_BEAT Called when the timeline hits a beat in a tempo section. Parameters = FMOD_STUDIO_TIMELINE_BEAT_PROPERTIES.
 * @member SOUND_PLAYED Called when the event plays a sound. Parameters = Sound.
 * @member SOUND_STOPPED Called when the event finishes playing a sound. Parameters = Sound.
 * @member REAL_TO_VIRTUAL Called when the event becomes virtual. Parameters = unused.
 * @member VIRTUAL_TO_REAL Called when the event becomes real. Parameters = unused.
 * @member START_EVENT_COMMAND Called when a new event is started by a start event command. Parameters = Studio::EventInstance.
 * @member NESTED_TIMELINE_BEAT Called when the timeline hits a beat in a tempo section of a nested event. Parameters = FMOD_STUDIO_TIMELINE_NESTED_BEAT_PROPERTIES.
 * @member ALL Pass this mask to Studio::EventDescription::setCallback or Studio::EventInstance::setCallback to receive all callback types.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_LOAD_BANK
 * @desc > **FMOD Constant:** [FMOD_STUDIO_LOAD_BANK](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_load_bank_flags)
 * This constant specifies flags to control bank loading.
 * @member NORMAL Standard behavior.
 * @member NONBLOCKING Bank loading occurs asynchronously rather than occurring immediately.
 * @member DECOMPRESS_SAMPLES Force samples to decompress into memory when they are loaded, rather than staying compressed.
 * @member UNENCRYPTED Ignore the encryption key specified by Studio::System::setAdvancedSettings when loading sounds from this bank (assume the sounds in the bank are not encrypted).
 * @const_end
 */

/**
 * @const FMOD_STUDIO_COMMANDCAPTURE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_COMMANDCAPTURE_FLAGS](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_commandcapture_flags)
 * This constant specifies flags controling command capture.
 * @member NORMAL Use default options.
 * @member FILEFLUSH Call file flush on every command.
 * @member SKIP_INITIAL_STATE Normally the initial state of banks and instances is captured, unless this flag is set.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_COMMANDREPLAY
 * @desc > **FMOD Constant:** [FMOD_STUDIO_COMMANDREPLAY_FLAGS](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_commandreplay_flags)
 * This constant specifies flags controlling command replay.
 * @member NORMAL Use default options.
 * @member SKIP_CLEANUP Do not free resources at the end of playback.
 * @member FAST_FORWARD Play back at maximum speed, ignoring the timing of the original replay.
 * @member SKIP_BANK_LOAD Skip commands related to bank loading.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_LOADING_STATE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_LOADING_STATE](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_loading_state)
 * This constant specifies the loading state of various objects.
 * @member UNLOADING Currently unloading.
 * @member UNLOADED Not loaded.
 * @member LOADING Loading in progress.
 * @member LOADED Loaded and ready to play.
 * @member ERROR Failed to load.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_LOAD_MEMORY_MODE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_LOAD_MEMORY_MODE](https://www.fmod.com/docs/2.02/api/studio-api-system.html#fmod_studio_load_memory_mode)
 * This constant specifies how to use the memory buffer passed to Studio::System::loadBankMemory.
 * @member MEMORY Memory buffer is copied internally.
 * @member MEMORY_POINT Memory buffer is used directly in user memory.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_PARAMETER_TYPE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_PARAMETER_TYPE](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_parameter_type)
 * This constant specifies event parameter types.
 * 
 * FMOD_STUDIO_PARAMETER_GAME_CONTROLLED type parameters may have their values set using the API. All other parameter types have their values automatically set by FMOD Studio when the system is updated.
 * 
 * The horizontal angle between vectors is found by projecting both vectors onto a plane and taking the angle between the projected vectors. For FMOD_STUDIO_PARAMETER_AUTOMATIC_EVENT_ORIENTATION and FMOD_STUDIO_PARAMETER_AUTOMATIC_DIRECTION type parameters the vectors are projected onto the listener's XZ plane. For FMOD_STUDIO_PARAMETER_AUTOMATIC_LISTENER_ORIENTATION type parameters the vectors are projected onto the global XZ plane.
 * 
 * @member GAME_CONTROLLED API settable parameter.
 * @member AUTOMATIC_DISTANCE Distance between the event and the listener.
 * @member AUTOMATIC_EVENT_CONE_ANGLE Angle between the event's forward vector and the vector pointing from the event to the listener (0 to 180 degrees).
 * @member AUTOMATIC_EVENT_ORIENTATION Horizontal angle between the event's forward vector and listener's forward vector (-180 to 180 degrees).
 * @member AUTOMATIC_DIRECTION Horizontal angle between the listener's forward vector and the vector pointing from the listener to the event (-180 to 180 degrees).
 * @member AUTOMATIC_ELEVATION Angle between the listener's XZ plane and the vector pointing from the listener to the event (-90 to 90 degrees).
 * @member AUTOMATIC_LISTENER_ORIENTATION Horizontal angle between the listener's forward vector and the global positive Z axis (-180 to 180 degrees).
 * @member AUTOMATIC_SPEED Magnitude of the relative velocity of the event and the listener.
 * @member AUTOMATIC_SPEED_ABSOLUTE Magnitude of the absolute velocity of the event.
 * @member AUTOMATIC_DISTANCE_NORMALIZED Distance between the event and the listener in the range min distance - max distance represented as 0 - 1.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_USER_PROPERTY_TYPE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_USER_PROPERTY_TYPE](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#fmod_studio_user_property_type)
 * This constant specifies user property types.
 * @member INTEGER Integer.
 * @member BOOLEAN Boolean.
 * @member FLOAT Floating point number.
 * @member STRING String.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_EVENT_PROPERTY
 * @desc > **FMOD Constant:** [FMOD_STUDIO_EVENT_PROPERTY](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#fmod_studio_event_property)
 * This constant holds the definitions that describe built-in event properties.
 * 
 * A property that returns a value of -1 from Studio::EventInstance::getProperty means it will use the values set in Studio, use Studio::EventInstance::setProperty to override these values. You can revert the properties value to default by setting it to -1.
 * 
 * @member CHANNELPRIORITY Priority to set on Core API Channels created by this event instance, or -1 for default.
 * @member SCHEDULE_DELAY Schedule delay in DSP clocks, or -1 for default.
 * @member SCHEDULE_LOOKAHEAD Schedule look-ahead on the timeline in DSP clocks, or -1 for default.
 * @member MINIMUM_DISTANCE Override the event's 3D minimum distance, or -1 for default.
 * @member MAXIMUM_DISTANCE Override the event's 3D maximum distance, or -1 for default.
 * @member COOLDOWN Override the event's cooldown, or -1 for default.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_PLAYBACK_STATE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_PLAYBACK_STATE](https://www.fmod.com/docs/2.02/api/studio-api-common.html#fmod_studio_playback_state)
 * This constant specifies the playback state of various objects.
 * @member PLAYING Playing.
 * @member SUSTAINING The timeline cursor is paused on a sustain point. (Studio::EventInstance only.)
 * @member STOPPED Stopped.
 * @member STARTING Preparing to start.
 * @member STOPPING Preparing to stop.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_STOP_MODE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_STOP_MODE](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#fmod_studio_stop_mode)
 * This constant specifies stop modes.
 * @member ALLOWFADEOUT Allows AHDSR modulators to complete their release, and DSP effect tails to play out.
 * @member IMMEDIATE Stops the event instance immediately.
 * @const_end
 */

/**
 * @const FMOD_STUDIO_INSTANCETYPE
 * @desc > **FMOD Constant:** [FMOD_STUDIO_INSTANCETYPE](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#fmod_studio_instancetype)
 * This constant specifies command replay command instance handle types.
 * @member NONE No type, handle is unused.
 * @member SYSTEM Studio::System.
 * @member EVENTDESCRIPTION Studio::EventDescription.
 * @member EVENTINSTANCE Studio::EventInstance.
 * @member PARAMETERINSTANCE Studio::ParameterInstance.
 * @member BUS Studio::Bus.
 * @member VCA Studio::VCA.
 * @member BANK Studio::Bank.
 * @member COMMANDREPLAY Studio::CommandReplay.
 * @const_end
 */
