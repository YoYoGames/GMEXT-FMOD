/* Core Definitions */

/* FMOD constants */



/**
 * @const FmodDebugFlags
 * @desc > **FMOD Constant:** [FMOD_DEBUG_FLAGS](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_debug_flags)
 *
 * <br />
 *
 * This enum specifies the requested information to be output when using the logging version of FMOD.
 * @member LevelNone Disable all messages.
 * @member LevelError Enable only error messages.
 * @member LevelWarning Enable warning and error messages.
 * @member LevelLog Enable informational, warning and error messages.
 * @member TypeMemory This enables verbose logging for memory operations, only use this if you are debugging a memory related issue.
 * @member TypeFile This enables verbose logging for file access, only use this if you are debugging a file related issue.
 * @member TypeCodec This enables verbose logging for codec initialisation, only use this if you are debugging a codec related issue.
 * @member TypeTrace This enables verbose logging for internal errors, use this for tracking the origin of error codes.
 * @member DisplayTimestamps This displays the time stamp of the log message in milliseconds.
 * @member DisplayLineNumbers This displays the source code file and line number for where the message originated.
 * @member DisplayThread This displays the thread ID of the calling function that generated the message.
 * @const_end
 * *//**
 * @const FmodStudioDebugFlags
 * @desc > **FMOD Constant:** [FMOD_DEBUG_FLAGS](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_debug_flags)
 *
 * <br />
 *
 * This enum specifies the requested information to be output when using the logging version of FMOD.
 * @member LevelNone Disable all messages.
 * @member LevelError Enable only error messages.
 * @member LevelWarning Enable warning and error messages.
 * @member LevelLog Enable informational, warning and error messages.
 * @member TypeMemory This enables verbose logging for memory operations, only use this if you are debugging a memory related issue.
 * @member TypeFile This enables verbose logging for file access, only use this if you are debugging a file related issue.
 * @member TypeCodec This enables verbose logging for codec initialisation, only use this if you are debugging a codec related issue.
 * @member TypeTrace This enables verbose logging for internal errors, use this for tracking the origin of error codes.
 * @member DisplayTimestamps This displays the time stamp of the log message in milliseconds.
 * @member DisplayLineNumbers This displays the source code file and line number for where the message originated.
 * @member DisplayThread This displays the thread ID of the calling function that generated the message.
 * @const_end
 * */



/**
 * @const FmodInitFlags
 * @desc > **FMOD Constant:** [FMOD_INITFLAGS](https://www.fmod.com/docs/2.03/api/core-api-system.html#fmod_initflags)
 *
 * <br />
 *
 * This enum specifies the configuration flags used when initialising the FMOD system.
 * @member Normal Initialize normally.
 * @member StreamFromUpdate No stream thread is created internally. Streams are driven from ${function.fmod_system_update}. Mainly used with non-realtime outputs.
 * @member MixFromUpdate No mixer thread is created internally. Mixing is driven from ${function.fmod_system_update}. Only applies to polling based output modes such as `FmodOutputType.NoSound`, `FmodOutputType.WavWriter`.
 * @member RightHanded3D 3D calculations will be performed in right-handed coordinates.
 * @member ClipOutput Enables hard clipping of output values greater than `1.0` or less than `-1.0`.
 * @member ChannelLowpass Enables usage of ${function.fmod_channel_control_set_low_pass_gain}, ${function.fmod_channel_control_set_3d_occlusion}, or automatic usage by the [Geometry](https://www.fmod.com/docs/2.03/api/core-api-geometry.html) API. All voices will add a software lowpass filter effect into the [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain) which is idle unless one of the previous functions/features are used.
 * @member ChannelDistanceFilter All `FmodStudioMode._3D` based voices will add a software lowpass and highpass filter effect into the [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain) which will act as a distance-automated bandpass filter. Use ${function.fmod_system_set_advanced_settings} to adjust the center frequency.
 * @member ProfileEnable Enable TCP/IP based host which allows FMOD Studio or FMOD Profiler to connect to it, and view memory, CPU and the DSP network graph in real-time.
 * @member Vol0BecomesVirtual Any sounds that are 0 volume will go virtual and not be processed except for having their positions updated virtually. Use ${function.fmod_system_set_advanced_settings} to adjust what volume besides zero to switch to virtual at.
 * @member GeometryUseClosest With the geometry engine, only process the closest polygon rather than accumulating all polygons the sound to listener line intersects.
 * @member PreferDolbyDownmix When using `FmodSpeakerMode._5Point1` with a stereo output device, use the Dolby Pro Logic II downmix algorithm instead of the default stereo downmix algorithm.
 * @member ThreadUnsafe Disables thread safety for API calls. Only use this if FMOD is being called from a single thread, and if Studio API is not being used!
 * @member ProfileMeterAll Slower, but adds level metering for every single DSP unit in the graph. Use ${function.fmod_dsp_set_metering_enabled} to turn meters off individually. Setting this flag implies `FmodInitFlags.ProfileEnable`.
 * @member MemoryTracking Enables memory allocation tracking. Currently this is only useful when using the Studio API. Increases memory footprint and reduces performance. This flag is implied by `FmodStudioInitFlags.MemoryTracking`.
 * @const_end
 * */

/**
 * @const FmodDriverState
 * @desc > **FMOD Constant:** [FMOD_DRIVER_STATE](https://www.fmod.com/docs/2.03/api/core-api-system.html#fmod_driver_state)
 *
 * <br />
 *
 * This enum specifies flags that provide additional information about a particular driver.
 * @member Connected Device is currently plugged in.
 * @member Default Device is the user's preferred choice.
 * @const_end
 * */

/**
 * @const FmodTimeUnit
 * @desc > **FMOD Constant:** [FMOD_TIMEUNIT](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_timeunit)
 *
 * <br />
 *
 * This enum specifies the time types used for position or length.
 * @member Ms Milliseconds.
 * @member Pcm PCM samples, related to milliseconds * samplerate / 1000.
 * @member PcmBytes Bytes, related to PCM samples * channels * datawidth (i.e. 16bit = 2 bytes).
 * @member RawBytes Raw file bytes of (compressed) sound data (does not include headers). Only used by ${function.fmod_sound_get_length} and ${function.fmod_channel_get_position}.
 * @member PcmFraction Fractions of 1 PCM sample. Unsigned int range 0 to 0xFFFFFFFF. Used for sub-sample granularity for [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) purposes.
 * @member ModOrder MOD/S3M/XM/IT. Order in a sequenced module format. Use ${function.fmod_sound_get_format} to determine the PCM format being decoded to.
 * @member ModRow MOD/S3M/XM/IT. Current row in a sequenced module format. Cannot use with ${function.fmod_channel_set_position}. ${function.fmod_sound_get_length} will return the number of rows in the currently playing or seeked to pattern.
 * @member ModPattern MOD/S3M/XM/IT. Current pattern in a sequenced module format. Cannot use with ${function.fmod_channel_set_position}. ${function.fmod_sound_get_length} will return the number of patterns in the song and ${function.fmod_channel_get_position} will return the currently playing pattern.
 * @const_end
 * */



/**
 * @const FmodMode
 * @desc > **FMOD Constant:** [FMOD_MODE](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_mode)
 *
 * <br />
 *
 * This enum specifies sound description bitfields. You can bitwise OR them together for loading and describing sounds.
 * @member Default Default for all modes listed below. `FmodStudioMode.LoopOff`, `FmodStudioMode._2D`, `FmodStudioMode._3DWorldRelative`, `FmodStudioMode._3DInverseRollOff`
 * @member LoopOff For non looping [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html). (DEFAULT). Overrides `FmodStudioMode.LoopOn` / `FmodStudioMode.LoopBidi`.
 * @member LoopOn For forward looping [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html).
 * @member LoopBidi For bidirectional looping [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html). (only works on non-streaming, real voices).
 * @member _2D Ignores any 3D processing. (DEFAULT).
 * @member _3D Makes the [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html) positionable in 3D. Overrides `FmodStudioMode._2D`.
 * @member CreateStream Decompress at runtime, streaming from the source provided (i.e. from disk). Overrides `FmodStudioMode.CreateSample` and `FmodStudioMode.CreateCompressedSample`. Note a stream can only be played once at a time due to a stream only having 1 stream buffer and file handle. Open multiple streams to have them play concurrently.
 * @member CreateSample Decompress at loadtime, decompressing or decoding whole file into memory as the target sample format (i.e. PCM). Fastest for playback and most flexible.
 * @member CreateCompressedSample Load MP2/MP3/FADPCM/IMAADPCM/Vorbis/AT9 or XMA into memory and leave it compressed. Vorbis/AT9/FADPCM encoding only supported in the .FSB container format. During playback the FMOD software mixer will decode it in realtime as a 'compressed sample'. Overrides `FmodStudioMode.CreateSample`. If the sound data is not one of the supported formats, it will behave as if it was created with `FmodStudioMode.CreateSample` and decode the sound into PCM.
 * @member OpenUser Opens a user-created static sample or stream. When used, the first argument of ${function.fmod_system_create_sound} and ${function.fmod_system_create_stream}, name_or_data, is ignored, so recommended practice is to pass null or equivalent. The following data must be provided using ${struct.FmodCreateSoundExInfo}: cbsize, length, numchannels, defaultfrequency, format, and optionally read callback. If a user-created 'sample' is created with no read callback, the sample will be empty. If this is the case, use ${function.fmod_sound_lock} and ${function.fmod_sound_unlock} to place sound data into the [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html).
 * @member OpenMemory When used, the first argument of ${function.fmod_system_create_sound} and ${function.fmod_system_create_stream}, `name_or_buff`, is interpreted as a pointer to memory instead of filename for creating sounds. The following data must be provided using ${struct.FmodCreateSoundExInfo}: cbsize, and length. If used with `FmodStudioMode.CreateSample` or `FmodStudioMode.CreateCompressedSample`, FMOD duplicates the memory into its own buffers. Your own buffer can be freed after open, unless you are using `FmodStudioMode.NonBlocking` then wait until the Sound is in the `FmodOpenState.Ready` state. If used with `FmodStudioMode.CreateStream`, FMOD will stream out of the ${type.buffer} that you passed in. In this case, your own buffer should not be freed until you have finished with and released the stream.
 * @member OpenMemoryPoint When used, the first argument of ${function.fmod_system_create_sound} and ${function.fmod_system_create_stream}, `name_or_buff`, is interpreted as a pointer to memory instead of filename for creating sounds. The following data must be provided using ${struct.FmodCreateSoundExInfo}: cbsize, and length. This differs to `FmodStudioMode.OpenMemory` in that it uses the ${type.buffer} memory as is, without duplicating the memory into its own buffers. Cannot be freed after open, only after ${function.fmod_sound_release}. Will not work if the data is compressed and `FmodStudioMode.CreateCompressedSample` is not used. Cannot be used in conjunction with `FmodSystemCreateSoundExInfo.encryptionkey`.
 * @member OpenRaw Will ignore file format and treat as raw pcm. The following data must be provided using ${struct.FmodCreateSoundExInfo}: cbsize, numchannels, defaultfrequency, and format. Must be little endian data.
 * @member OpenOnly Just open the file, don't prebuffer or read. Good for fast opens for info, or when ${function.fmod_sound_read_data} is to be used.
 * @member AccurateTime For ${function.fmod_system_create_sound} - for accurate ${function.fmod_sound_get_length} / ${function.fmod_channel_set_position} on VBR MP3, and MOD/S3M/XM/IT/MIDI files. Scans file first, so takes longer to open. `FmodStudioMode.OpenOnly` does not affect this.
 * @member MpegSearch For corrupted / bad MP3 files. This will search all the way through the file until it hits a valid MPEG header. Normally only searches for 4k.
 * @member NonBlocking For opening Sounds and getting streamed subsounds (seeking) asynchronously. Use ${function.fmod_sound_get_open_state} to poll the state of the Sound as it opens or retrieves the subsound in the background.
 * @member Unique Unique Sound, can only be played one at a time.
 * @member _3DHeadRelative Make the Sound's position, velocity and orientation relative to the listener.
 * @member _3DWorldRelative Make the Sound's position, velocity and orientation absolute (relative to the world). (DEFAULT)
 * @member _3DInverseRollOff This sound follows an inverse roll-off model. Below mindistance, the volume is unattenuated; as distance increases above mindistance, the volume attenuates using mindistance/distance as the gradient until it reaches maxdistance, where it stops attenuating. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. This roll-off mode accurately models the way sounds attenuate over distance in the real world. (DEFAULT)
 * @member _3DLinearRollOff This sound follows a linear roll-off model. Below mindistance, the volume is unattenuated; as distance increases from mindistance to maxdistance, the volume attenuates to silence using a linear gradient. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. While this roll-off mode is not as realistic as inverse roll-off mode, it is easier to comprehend.
 * @member _3DLinearSquareRollOff This sound follows a linear-square roll-off model. Below mindistance, the volume is unattenuated; as distance increases from mindistance to maxdistance, the volume attenuates to silence according to a linear squared gradient. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. This roll-off mode provides steeper volume ramping close to the mindistance, and more gradual ramping close to the maxdistance, than linear roll-off mode.
 * @member _3DInverseTaperedRollOff This sound follows a combination of the inverse and linear-square roll-off models. At short distances where inverse roll-off would provide greater attenuation, it functions as inverse roll-off mode; then at greater distances where linear-square roll-off mode would provide greater attenuation, it uses that roll-off mode instead. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. Inverse tapered roll-off mode approximates realistic behavior while still guaranteeing the sound attenuates to silence at maxdistance.
 * @member _3DCustomRollOff This sound follows a roll-off model defined by ${function.fmod_sound_set_3d_custom_rolloff} / ${function.fmod_channel_control_set_3d_custom_rolloff}. This roll-off mode provides greater freedom and flexibility than any other, but must be defined manually.
 * @member _3DIgnoreGeometry Is not affected by geometry occlusion. If not specified in ${function.fmod_sound_set_mode}, or ${function.fmod_channel_control_set_mode}, the flag is cleared and it is affected by geometry again.
 * @member IgnoreTags Skips id3v2/asf/etc. tag checks when opening a Sound, to reduce seek/read overhead when opening files.
 * @member LowMem Removes some features from samples to give a lower memory overhead, like ${function.fmod_sound_get_name}.
 * @member VirtualPlayFromStart For Channels that start virtual (due to being quiet or low importance), instead of swapping back to audible, and playing at the correct offset according to time, this flag makes the Channel play from the start.
 * @const_end
 * *//**
 * @const FmodStudioMode
 * @desc > **FMOD Constant:** [FMOD_MODE](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_mode)
 *
 * <br />
 *
 * This enum specifies sound description bitfields. You can bitwise OR them together for loading and describing sounds.
 * @member Default Default for all modes listed below. `FmodStudioMode.LoopOff`, `FmodStudioMode._2D`, `FmodStudioMode._3DWorldRelative`, `FmodStudioMode._3DInverseRollOff`
 * @member LoopOff For non looping [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html). (DEFAULT). Overrides `FmodStudioMode.LoopOn` / `FmodStudioMode.LoopBidi`.
 * @member LoopOn For forward looping [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html).
 * @member LoopBidi For bidirectional looping [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html). (only works on non-streaming, real voices).
 * @member _2D Ignores any 3D processing. (DEFAULT).
 * @member _3D Makes the [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html) positionable in 3D. Overrides `FmodStudioMode._2D`.
 * @member CreateStream Decompress at runtime, streaming from the source provided (i.e. from disk). Overrides `FmodStudioMode.CreateSample` and `FmodStudioMode.CreateCompressedSample`. Note a stream can only be played once at a time due to a stream only having 1 stream buffer and file handle. Open multiple streams to have them play concurrently.
 * @member CreateSample Decompress at loadtime, decompressing or decoding whole file into memory as the target sample format (i.e. PCM). Fastest for playback and most flexible.
 * @member CreateCompressedSample Load MP2/MP3/FADPCM/IMAADPCM/Vorbis/AT9 or XMA into memory and leave it compressed. Vorbis/AT9/FADPCM encoding only supported in the .FSB container format. During playback the FMOD software mixer will decode it in realtime as a 'compressed sample'. Overrides `FmodStudioMode.CreateSample`. If the sound data is not one of the supported formats, it will behave as if it was created with `FmodStudioMode.CreateSample` and decode the sound into PCM.
 * @member OpenUser Opens a user-created static sample or stream. When used, the first argument of ${function.fmod_system_create_sound} and ${function.fmod_system_create_stream}, name_or_data, is ignored, so recommended practice is to pass null or equivalent. The following data must be provided using ${struct.FmodCreateSoundExInfo}: cbsize, length, numchannels, defaultfrequency, format, and optionally read callback. If a user-created 'sample' is created with no read callback, the sample will be empty. If this is the case, use ${function.fmod_sound_lock} and ${function.fmod_sound_unlock} to place sound data into the [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html).
 * @member OpenMemory When used, the first argument of ${function.fmod_system_create_sound} and ${function.fmod_system_create_stream}, `name_or_buff`, is interpreted as a pointer to memory instead of filename for creating sounds. The following data must be provided using ${struct.FmodCreateSoundExInfo}: cbsize, and length. If used with `FmodStudioMode.CreateSample` or `FmodStudioMode.CreateCompressedSample`, FMOD duplicates the memory into its own buffers. Your own buffer can be freed after open, unless you are using `FmodStudioMode.NonBlocking` then wait until the Sound is in the `FmodOpenState.Ready` state. If used with `FmodStudioMode.CreateStream`, FMOD will stream out of the ${type.buffer} that you passed in. In this case, your own buffer should not be freed until you have finished with and released the stream.
 * @member OpenMemoryPoint When used, the first argument of ${function.fmod_system_create_sound} and ${function.fmod_system_create_stream}, `name_or_buff`, is interpreted as a pointer to memory instead of filename for creating sounds. The following data must be provided using ${struct.FmodCreateSoundExInfo}: cbsize, and length. This differs to `FmodStudioMode.OpenMemory` in that it uses the ${type.buffer} memory as is, without duplicating the memory into its own buffers. Cannot be freed after open, only after ${function.fmod_sound_release}. Will not work if the data is compressed and `FmodStudioMode.CreateCompressedSample` is not used. Cannot be used in conjunction with `FmodSystemCreateSoundExInfo.encryptionkey`.
 * @member OpenRaw Will ignore file format and treat as raw pcm. The following data must be provided using ${struct.FmodCreateSoundExInfo}: cbsize, numchannels, defaultfrequency, and format. Must be little endian data.
 * @member OpenOnly Just open the file, don't prebuffer or read. Good for fast opens for info, or when ${function.fmod_sound_read_data} is to be used.
 * @member AccurateTime For ${function.fmod_system_create_sound} - for accurate ${function.fmod_sound_get_length} / ${function.fmod_channel_set_position} on VBR MP3, and MOD/S3M/XM/IT/MIDI files. Scans file first, so takes longer to open. `FmodStudioMode.OpenOnly` does not affect this.
 * @member MpegSearch For corrupted / bad MP3 files. This will search all the way through the file until it hits a valid MPEG header. Normally only searches for 4k.
 * @member NonBlocking For opening Sounds and getting streamed subsounds (seeking) asynchronously. Use ${function.fmod_sound_get_open_state} to poll the state of the Sound as it opens or retrieves the subsound in the background.
 * @member Unique Unique Sound, can only be played one at a time.
 * @member _3DHeadRelative Make the Sound's position, velocity and orientation relative to the listener.
 * @member _3DWorldRelative Make the Sound's position, velocity and orientation absolute (relative to the world). (DEFAULT)
 * @member _3DInverseRollOff This sound follows an inverse roll-off model. Below mindistance, the volume is unattenuated; as distance increases above mindistance, the volume attenuates using mindistance/distance as the gradient until it reaches maxdistance, where it stops attenuating. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. This roll-off mode accurately models the way sounds attenuate over distance in the real world. (DEFAULT)
 * @member _3DLinearRollOff This sound follows a linear roll-off model. Below mindistance, the volume is unattenuated; as distance increases from mindistance to maxdistance, the volume attenuates to silence using a linear gradient. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. While this roll-off mode is not as realistic as inverse roll-off mode, it is easier to comprehend.
 * @member _3DLinearSquareRollOff This sound follows a linear-square roll-off model. Below mindistance, the volume is unattenuated; as distance increases from mindistance to maxdistance, the volume attenuates to silence according to a linear squared gradient. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. This roll-off mode provides steeper volume ramping close to the mindistance, and more gradual ramping close to the maxdistance, than linear roll-off mode.
 * @member _3DInverseTaperedRollOff This sound follows a combination of the inverse and linear-square roll-off models. At short distances where inverse roll-off would provide greater attenuation, it functions as inverse roll-off mode; then at greater distances where linear-square roll-off mode would provide greater attenuation, it uses that roll-off mode instead. For this roll-off mode, distance values greater than mindistance are scaled according to the rolloffscale. Inverse tapered roll-off mode approximates realistic behavior while still guaranteeing the sound attenuates to silence at maxdistance.
 * @member _3DCustomRollOff This sound follows a roll-off model defined by ${function.fmod_sound_set_3d_custom_rolloff} / ${function.fmod_channel_control_set_3d_custom_rolloff}. This roll-off mode provides greater freedom and flexibility than any other, but must be defined manually.
 * @member _3DIgnoreGeometry Is not affected by geometry occlusion. If not specified in ${function.fmod_sound_set_mode}, or ${function.fmod_channel_control_set_mode}, the flag is cleared and it is affected by geometry again.
 * @member IgnoreTags Skips id3v2/asf/etc. tag checks when opening a Sound, to reduce seek/read overhead when opening files.
 * @member LowMem Removes some features from samples to give a lower memory overhead, like ${function.fmod_sound_get_name}.
 * @member VirtualPlayFromStart For Channels that start virtual (due to being quiet or low importance), instead of swapping back to audible, and playing at the correct offset according to time, this flag makes the Channel play from the start.
 * @const_end
 * */











/* Preset for struct.FmodReverbProperties */













/**
 * @const FmodResult
 * @desc > **FMOD Constant:** [FMOD_RESULT](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_result)
 *
 * <br />
 *
 * This enum specifies the error codes returned from every function.
 * @member Ok No errors.
 * @member BadCommand Tried to call a function on a data type that does not allow this type of functionality (i.e. calling ${function.fmod_sound_lock} on a streaming [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html)).
 * @member ChannelAlloc Error trying to allocate a [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html).
 * @member ChannelStolen The specified Channel has been reused to play another Sound.
 * @member Dma DMA Failure. See debug output for more information.
 * @member DspConnection DSP connection error. Connection possibly caused a cyclic dependency or connected dsps with incompatible buffer counts.
 * @member DspDontProcess DSP return code from a DSP process query callback. Tells mixer not to call the process callback and therefore not consume CPU. Use this to optimize the DSP graph.
 * @member DspFormat DSP Format error. A DSP unit may have attempted to connect to this network with the wrong format, or a matrix may have been set with the wrong size if the target unit has a specified channel map.
 * @member DspInUse DSP is already in the mixer's DSP network. It must be removed before being reinserted or released.
 * @member DspNotFound DSP connection error. Couldn't find the DSP unit specified.
 * @member DspReserved DSP operation error. Cannot perform operation on this DSP as it is reserved by the system.
 * @member DspSilence DSP return code from a DSP process query callback. Tells mixer silence would be produced from read, so go idle and not consume CPU. Use this to optimize the DSP graph.
 * @member DspType DSP operation cannot be performed on a DSP of this type.
 * @member FileBad Error loading file.
 * @member FileCouldNotSeek Couldn't perform seek operation. This is a limitation of the medium (i.e. netstreams) or the file format.
 * @member FileDiskEjected Media was ejected while reading.
 * @member FileEof End of file unexpectedly reached while trying to read essential data (truncated?).
 * @member FileEndOfData End of current chunk reached while trying to read data.
 * @member FileNotFound File not found.
 * @member Format Unsupported file or audio format.
 * @member HeaderMismatch There is a version mismatch between the FMOD header and either the FMOD Studio library or the FMOD Core library.
 * @member Http A HTTP error occurred. This is a catch-all for HTTP errors not listed elsewhere.
 * @member HttpAccess The specified resource requires authentication or is forbidden.
 * @member HttpProxyAuth Proxy authentication is required to access the specified resource.
 * @member HttpServerError A HTTP server error occurred.
 * @member HttpTimeout The HTTP request timed out.
 * @member Initialization FMOD was not initialized correctly to support this function.
 * @member Initialized Cannot call this command after ${function.fmod_system_init}.
 * @member Internal An error occured in the FMOD system. Use the logging version of FMOD for more information.
 * @member InvalidFloat Value passed in was a `NaN`, `infinity` or denormalized float.
 * @member InvalidHandle An invalid object handle was used.
 * @member InvalidParam An invalid parameter was passed to this function.
 * @member InvalidPosition An invalid seek position was passed to this function.
 * @member InvalidSpeaker An invalid speaker was passed to this function based on the current speaker mode.
 * @member InvalidSyncPoint The syncpoint did not come from this Sound handle.
 * @member InvalidThread Tried to call a function on a thread that is not supported.
 * @member InvalidVector The vectors passed in are not unit length, or perpendicular.
 * @member MaxAudible Reached maximum audible playback count for this Sound's SoundGroup.
 * @member Memory Not enough memory or resources.
 * @member MemoryCantPoint Can't use `FmodStudioMode.OpenMemoryPoint` on non PCM source data, or non mp3/xma/adpcm data if `FmodStudioMode.CreateCompressedSample` was used.
 * @member Needs3D Tried to call a command on a 2D Sound when the command was meant for 3D Sound.
 * @member NeedsHardware Tried to use a feature that requires hardware support.
 * @member NetConnect Couldn't connect to the specified host.
 * @member NetSocketError A socket error occurred. This is a catch-all for socket-related errors not listed elsewhere.
 * @member NetUrl The specified URL couldn't be resolved.
 * @member NetWouldBlock Operation on a non-blocking socket could not complete immediately.
 * @member NotReady Operation could not be performed because specified Sound/DSP connection is not ready.
 * @member OutputAllocated Error initializing output device, but more specifically, the output device is already in use and cannot be reused.
 * @member OutputCreateBuffer Error creating hardware sound buffer.
 * @member OutputDriverCall A call to a standard soundcard driver failed, which could possibly mean a bug in the driver or resources were missing or exhausted.
 * @member OutputFormat Soundcard does not support the specified format.
 * @member OutputInit Error initializing output device.
 * @member OutputNoDriver The output device has no drivers installed. If pre-init, `FmodOutputType.NoSound` is selected as the output mode. If post-init, the function just fails.
 * @member Plugin An unspecified error has been returned from a plugin.
 * @member PluginMissing A requested output, dsp unit type or codec was not available.
 * @member PluginResource A resource that the plugin requires cannot be allocated or found. (i.e. the DLS file for MIDI playback)
 * @member PluginVersion A plugin was built with an unsupported SDK version.
 * @member Record An error occurred trying to initialize the recording device.
 * @member ReverbChannelGroup Reverb properties cannot be set on this Channel because a parent ChannelGroup owns the reverb connection.
 * @member ReverbInstance Specified instance in ${struct.FmodReverbProperties} couldn't be set. Most likely because it is an invalid instance number or the reverb doesn't exist.
 * @member SubSounds The error occurred because the Sound referenced contains subsounds when it shouldn't have, or it doesn't contain subsounds when it should have. The operation may also not be able to be performed on a parent Sound.
 * @member SubSoundAllocated This subsound is already being used by another Sound, you cannot have more than one parent to a Sound. Null out the other parent's entry first.
 * @member SubSoundCantMove Shared subsounds cannot be replaced or moved from their parent stream, such as when the parent stream is an FSB file.
 * @member TagNotFound The specified tag could not be found or there are no tags.
 * @member TooManyChannels The Sound created exceeds the allowable input channel count. This can be increased using the 'maxinputchannels' parameter in ${function.fmod_system_set_software_format}.
 * @member TruncatedData The retrieved string is too long to fit in the supplied buffer and has been truncated.
 * @member Unimplemented Something in FMOD hasn't been implemented when it should be. Contact FMOD support.
 * @member Uninitialized This command failed because ${function.fmod_system_init} or ${function.fmod_system_set_driver} was not called.
 * @member Unsupported A command issued was not supported by this object. Possibly a plugin without certain callbacks specified.
 * @member Version The version number of this file format is not supported.
 * @member EventAlreadyLoaded The specified bank has already been loaded.
 * @member EventLiveUpdateBusy The live update connection failed due to the game already being connected.
 * @member EventLiveUpdateMismatch The live update connection failed due to the game data being out of sync with the tool.
 * @member EventLiveUpdateTimeout The live update connection timed out.
 * @member EventNotFound The requested event, parameter, bus or vca could not be found.
 * @member StudioUninitialized The FMOD Studio System object is not yet initialized.
 * @member StudioNotLoaded The specified resource is not loaded, so it can't be unloaded.
 * @member InvalidString An invalid string was passed to this function.
 * @member AlreadyLocked The specified resource is already locked.
 * @member NotLocked The specified resource is not locked, so it can't be unlocked.
 * @member RecordDisconnected The specified recording driver has been disconnected.
 * @member TooManySamples The length provided exceeds the allowable limit.
 * @const_end
 * *//**
 * @const FmodStudioResult
 * @desc > **FMOD Constant:** [FMOD_RESULT](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_result)
 *
 * <br />
 *
 * This enum specifies the error codes returned from every function.
 * @member Ok No errors.
 * @member BadCommand Tried to call a function on a data type that does not allow this type of functionality (i.e. calling ${function.fmod_sound_lock} on a streaming [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html)).
 * @member ChannelAlloc Error trying to allocate a [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html).
 * @member ChannelStolen The specified Channel has been reused to play another Sound.
 * @member Dma DMA Failure. See debug output for more information.
 * @member DspConnection DSP connection error. Connection possibly caused a cyclic dependency or connected dsps with incompatible buffer counts.
 * @member DspDontProcess DSP return code from a DSP process query callback. Tells mixer not to call the process callback and therefore not consume CPU. Use this to optimize the DSP graph.
 * @member DspFormat DSP Format error. A DSP unit may have attempted to connect to this network with the wrong format, or a matrix may have been set with the wrong size if the target unit has a specified channel map.
 * @member DspInUse DSP is already in the mixer's DSP network. It must be removed before being reinserted or released.
 * @member DspNotFound DSP connection error. Couldn't find the DSP unit specified.
 * @member DspReserved DSP operation error. Cannot perform operation on this DSP as it is reserved by the system.
 * @member DspSilence DSP return code from a DSP process query callback. Tells mixer silence would be produced from read, so go idle and not consume CPU. Use this to optimize the DSP graph.
 * @member DspType DSP operation cannot be performed on a DSP of this type.
 * @member FileBad Error loading file.
 * @member FileCouldNotSeek Couldn't perform seek operation. This is a limitation of the medium (i.e. netstreams) or the file format.
 * @member FileDiskEjected Media was ejected while reading.
 * @member FileEof End of file unexpectedly reached while trying to read essential data (truncated?).
 * @member FileEndOfData End of current chunk reached while trying to read data.
 * @member FileNotFound File not found.
 * @member Format Unsupported file or audio format.
 * @member HeaderMismatch There is a version mismatch between the FMOD header and either the FMOD Studio library or the FMOD Core library.
 * @member Http A HTTP error occurred. This is a catch-all for HTTP errors not listed elsewhere.
 * @member HttpAccess The specified resource requires authentication or is forbidden.
 * @member HttpProxyAuth Proxy authentication is required to access the specified resource.
 * @member HttpServerError A HTTP server error occurred.
 * @member HttpTimeout The HTTP request timed out.
 * @member Initialization FMOD was not initialized correctly to support this function.
 * @member Initialized Cannot call this command after ${function.fmod_system_init}.
 * @member Internal An error occured in the FMOD system. Use the logging version of FMOD for more information.
 * @member InvalidFloat Value passed in was a `NaN`, `infinity` or denormalized float.
 * @member InvalidHandle An invalid object handle was used.
 * @member InvalidParam An invalid parameter was passed to this function.
 * @member InvalidPosition An invalid seek position was passed to this function.
 * @member InvalidSpeaker An invalid speaker was passed to this function based on the current speaker mode.
 * @member InvalidSyncPoint The syncpoint did not come from this Sound handle.
 * @member InvalidThread Tried to call a function on a thread that is not supported.
 * @member InvalidVector The vectors passed in are not unit length, or perpendicular.
 * @member MaxAudible Reached maximum audible playback count for this Sound's SoundGroup.
 * @member Memory Not enough memory or resources.
 * @member MemoryCantPoint Can't use `FmodStudioMode.OpenMemoryPoint` on non PCM source data, or non mp3/xma/adpcm data if `FmodStudioMode.CreateCompressedSample` was used.
 * @member Needs3D Tried to call a command on a 2D Sound when the command was meant for 3D Sound.
 * @member NeedsHardware Tried to use a feature that requires hardware support.
 * @member NetConnect Couldn't connect to the specified host.
 * @member NetSocketError A socket error occurred. This is a catch-all for socket-related errors not listed elsewhere.
 * @member NetUrl The specified URL couldn't be resolved.
 * @member NetWouldBlock Operation on a non-blocking socket could not complete immediately.
 * @member NotReady Operation could not be performed because specified Sound/DSP connection is not ready.
 * @member OutputAllocated Error initializing output device, but more specifically, the output device is already in use and cannot be reused.
 * @member OutputCreateBuffer Error creating hardware sound buffer.
 * @member OutputDriverCall A call to a standard soundcard driver failed, which could possibly mean a bug in the driver or resources were missing or exhausted.
 * @member OutputFormat Soundcard does not support the specified format.
 * @member OutputInit Error initializing output device.
 * @member OutputNoDriver The output device has no drivers installed. If pre-init, `FmodOutputType.NoSound` is selected as the output mode. If post-init, the function just fails.
 * @member Plugin An unspecified error has been returned from a plugin.
 * @member PluginMissing A requested output, dsp unit type or codec was not available.
 * @member PluginResource A resource that the plugin requires cannot be allocated or found. (i.e. the DLS file for MIDI playback)
 * @member PluginVersion A plugin was built with an unsupported SDK version.
 * @member Record An error occurred trying to initialize the recording device.
 * @member ReverbChannelGroup Reverb properties cannot be set on this Channel because a parent ChannelGroup owns the reverb connection.
 * @member ReverbInstance Specified instance in ${struct.FmodReverbProperties} couldn't be set. Most likely because it is an invalid instance number or the reverb doesn't exist.
 * @member SubSounds The error occurred because the Sound referenced contains subsounds when it shouldn't have, or it doesn't contain subsounds when it should have. The operation may also not be able to be performed on a parent Sound.
 * @member SubSoundAllocated This subsound is already being used by another Sound, you cannot have more than one parent to a Sound. Null out the other parent's entry first.
 * @member SubSoundCantMove Shared subsounds cannot be replaced or moved from their parent stream, such as when the parent stream is an FSB file.
 * @member TagNotFound The specified tag could not be found or there are no tags.
 * @member TooManyChannels The Sound created exceeds the allowable input channel count. This can be increased using the 'maxinputchannels' parameter in ${function.fmod_system_set_software_format}.
 * @member TruncatedData The retrieved string is too long to fit in the supplied buffer and has been truncated.
 * @member Unimplemented Something in FMOD hasn't been implemented when it should be. Contact FMOD support.
 * @member Uninitialized This command failed because ${function.fmod_system_init} or ${function.fmod_system_set_driver} was not called.
 * @member Unsupported A command issued was not supported by this object. Possibly a plugin without certain callbacks specified.
 * @member Version The version number of this file format is not supported.
 * @member EventAlreadyLoaded The specified bank has already been loaded.
 * @member EventLiveUpdateBusy The live update connection failed due to the game already being connected.
 * @member EventLiveUpdateMismatch The live update connection failed due to the game data being out of sync with the tool.
 * @member EventLiveUpdateTimeout The live update connection timed out.
 * @member EventNotFound The requested event, parameter, bus or vca could not be found.
 * @member StudioUninitialized The FMOD Studio System object is not yet initialized.
 * @member StudioNotLoaded The specified resource is not loaded, so it can't be unloaded.
 * @member InvalidString An invalid string was passed to this function.
 * @member AlreadyLocked The specified resource is already locked.
 * @member NotLocked The specified resource is not locked, so it can't be unlocked.
 * @member RecordDisconnected The specified recording driver has been disconnected.
 * @member TooManySamples The length provided exceeds the allowable limit.
 * @const_end
 * */



/**
 * @const FmodOutputType
 * @desc > **FMOD Constant:** [FMOD_OUTPUTTYPE](https://www.fmod.com/docs/2.03/api/core-api-system.html#fmod_outputtype)
 *
 * <br />
 *
 * This enum specifies built-in output types that can be used to run the mixer.
 * @member AutoDetect Picks the best output mode for the platform. This is the default.
 * @member Unknown All - 3rd party plugin, unknown. This is for use with ${function.fmod_system_get_output} only.
 * @member NoSound All - Perform all mixing but discard the final output.
 * @member WavWriter All - Writes output to a .wav file.
 * @member NoSoundNrt All - Non-realtime version of `FmodOutputType.NoSound`, one mix per ${function.fmod_system_update}.
 * @member WavWriterNrt All - Non-realtime version of `FmodOutputType.WavWriter`, one mix per ${function.fmod_system_update}.
 * @member Wasapi Win / UWP / Xbox One / Game Core - Windows Audio Session API. (Default on Windows, Xbox One, Game Core and UWP)
 * @member Asio Win - Low latency ASIO 2.0.
 * @member PulseAudio Linux - Pulse Audio. (Default on Linux if available)
 * @member Alsa Linux - Advanced Linux Sound Architecture. (Default on Linux if PulseAudio isn't available)
 * @member CoreAudio Mac / iOS - Core Audio. (Default on Mac and iOS)
 * @member AudioTrack Android - Java Audio Track. (Default on Android 2.2 and below)
 * @member OpenSl Android - OpenSL ES. (Default on Android 2.3 up to 7.1)
 * @member AudioOut PS4 / PS5 - Audio Out. (Default on PS4, PS5)
 * @member Audio3D PS4 - Audio3D.
 * @member WebAudio HTML5 - Web Audio ScriptProcessorNode output. (Default on HTML5 if AudioWorkletNode isn't available)
 * @member NnAudio Switch - nn::audio. (Default on Switch)
 * @member WinSonic Win10 / Xbox One / Game Core - Windows Sonic.
 * @member AAudio Android - AAudio. (Default on Android 8.1 and above)
 * @member AudioWorklet HTML5 - Web Audio AudioWorkletNode output. (Default on HTML5 if available)
 * @member Phase iOS - PHASE framework. (Disabled)
 * @member OhAudio OpenHarmony - OHAudio.
 * @const_end
 * */

/**
 * @const FmodDebugMode
 * @desc > **FMOD Constant:** [FMOD_DEBUG_MODE](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_debug_mode)
 *
 * <br />
 *
 * This enum specifies the destination of log output when using the logging version of FMOD.
 * @member Tty Default log location per platform, i.e. Visual Studio output window, stderr, LogCat, etc.
 * @member File Write log to specified file path.
 * @member Callback Call specified callback with log information.
 * @const_end
 * *//**
 * @const FmodStudioDebugMode
 * @desc > **FMOD Constant:** [FMOD_DEBUG_MODE](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_debug_mode)
 *
 * <br />
 *
 * This enum specifies the destination of log output when using the logging version of FMOD.
 * @member Tty Default log location per platform, i.e. Visual Studio output window, stderr, LogCat, etc.
 * @member File Write log to specified file path.
 * @member Callback Call specified callback with log information.
 * @const_end
 * */

/**
 * @const FmodSpeakerMode
 * @desc > **FMOD Constant:** [FMOD_SPEAKERMODE](https://www.fmod.com/docs/2.03/api/core-api-common.html#fmod_speakermode)
 *
 * <br />
 *
 * This enum specifies speaker mode types.
 * @member Default Default speaker mode for the chosen output mode which will resolve after ${function.fmod_system_init}.
 * @member Raw Assume there is no special mapping from a given channel to a speaker, channels map 1:1 in order. Use ${function.fmod_system_set_software_format} to specify the speaker count.
 * @member Mono 1 speaker setup (monaural).
 * @member Stereo 2 speaker setup (stereo) front left, front right.
 * @member Quad 4 speaker setup (4.0) front left, front right, surround left, surround right.
 * @member Surround 5 speaker setup (5.0) front left, front right, center, surround left, surround right.
 * @member _5Point1 6 speaker setup (5.1) front left, front right, center, low frequency, surround left, surround right.
 * @member _7Point1 8 speaker setup (7.1) front left, front right, center, low frequency, surround left, surround right, back left, back right.
 * @member _7Point1Point4 12 speaker setup (7.1.4) front left, front right, center, low frequency, surround left, surround right, back left, back right, top front left, top front right, top back left, top back right.
 * @const_end
 * */







/**
 * @const FmodSoundType
 * @desc > **FMOD Constant:** [FMOD_SOUND_TYPE](https://www.fmod.com/docs/2.03/api/core-api-sound.html#fmod_sound_type)
 *
 * <br />
 *
 * This enum specifies the recognized audio formats that can be loaded into a Sound.
 * @member Unknown Unknown or custom codec plugin.
 * @member Aiff Audio Interchange File Format (.aif, .aiff). Uncompressed integer formats only.
 * @member Asf Microsoft Advanced Systems Format (.asf, .wma, .wmv). Platform provided decoder, available only on Windows.
 * @member Dls Downloadable Sounds sound bank (.dls).
 * @member Flac Free Lossless Audio Codec (.flac).
 * @member Fsb FMOD Sample Bank (.fsb). Proprietary multi-sound bank format. Supported encodings: PCM16, FADPCM, Vorbis, AT9, XMA, Opus.
 * @member It Impulse Tracker (.it).
 * @member Midi Musical Instrument Digital Interface (.mid).
 * @member Mod Protracker / Fasttracker Module File (.mod).
 * @member Mpeg Moving Picture Experts Group (.mp2, .mp3). Also supports .wav (RIFF) container format.
 * @member OggVorbis Ogg Vorbis (.ogg).
 * @member Playlist Play list information container (.asx, .pls, .m3u, .wax). No audio, tags only.
 * @member Raw Raw uncompressed PCM data (.raw).
 * @member S3m ScreamTracker 3 Module (.s3m).
 * @member User User created sound.
 * @member Wav Microsoft Waveform Audio File Format (.wav). Supported encodings: Uncompressed PCM, IMA ADPCM. Platform provided ACM decoder extensions, available only on Windows.
 * @member Xm FastTracker 2 Extended Module (.xm).
 * @member Xma Xbox Media Audio bit-stream supported by FSB (.fsb) container format. Platform provided decoder, available only on Xbox.
 * @member AudioQueue Apple Audio Queue decoder (.mp4, .m4a, .mp3). Platform provided decoder, available only on iOS and tvOS.
 * @member At9 Sony ATRAC9 bit-stream supported by FSB (.fsb) container format. Platform provided decoder, available only on PlayStation.
 * @member Vorbis Vorbis bit-stream supported by FSB (.fsb) container format.
 * @member MediaFoundation Microsoft Media Foundation decoder (.asf, .wma, .wmv, .mp4, .m4a). Platform provided decoder, available only on UWP.
 * @member MediaCodec Google Media Codec decoder (.m4a, .mp4). Platform provided decoder, available only on Android.
 * @member Fadpcm FMOD Adaptive Differential Pulse Code Modulation bit-stream supported by FSB (.fsb) container format.
 * @member Opus Opus bit-stream supported by FSB (.fsb) container format. Platform provided decoder, available only on Xbox Series X|S, PS5, and Switch.
 * @const_end
 * */

/**
 * @const FmodSoundFormat
 * @desc > **FMOD Constant:** [FMOD_SOUND_FORMAT](https://www.fmod.com/docs/2.03/api/core-api-sound.html#fmod_sound_format)
 *
 * <br />
 *
 * This enum specifies values describes the native format of the hardware or software buffer that will be used.
 * @member None Uninitalized / unknown.
 * @member Pcm8 8bit integer PCM data.
 * @member Pcm16 16bit integer PCM data.
 * @member Pcm24 24bit integer PCM data.
 * @member Pcm32 32bit integer PCM data.
 * @member PcmFloat 32bit floating point PCM data.
 * @member BitStream Sound data is in its native compressed format. See `FmodStudioMode.CreateCompressedSample`
 * @const_end
 * *//**
 * @const FmodStudioSoundFormat
 * @desc > **FMOD Constant:** [FMOD_SOUND_FORMAT](https://www.fmod.com/docs/2.03/api/core-api-sound.html#fmod_sound_format)
 *
 * <br />
 *
 * This enum specifies values describes the native format of the hardware or software buffer that will be used.
 * @member None Uninitalized / unknown.
 * @member Pcm8 8bit integer PCM data.
 * @member Pcm16 16bit integer PCM data.
 * @member Pcm24 24bit integer PCM data.
 * @member Pcm32 32bit integer PCM data.
 * @member PcmFloat 32bit floating point PCM data.
 * @member BitStream Sound data is in its native compressed format. See `FmodStudioMode.CreateCompressedSample`
 * @const_end
 * */

/**
 * @const FmodOpenState
 * @desc > **FMOD Constant:** [FMOD_OPENSTATE](https://www.fmod.com/docs/2.03/api/core-api-sound.html#fmod_openstate)
 *
 * <br />
 *
 * This enum specifies values describing what state a sound is in after `FmodStudioMode.NonBlocking` has been used to open it.
 * @member Ready Opened and ready to play.
 * @member Loading Initial load in progress.
 * @member Error Failed to open - file not found, out of memory, etc. See return value of ${function.fmod_sound_get_open_state} for what happened.
 * @member Connecting Connecting to remote host (internet sounds only).
 * @member Buffering Buffering data.
 * @member Seeking Seeking to subsound and re-flushing stream buffer.
 * @member Playing Ready and playing, but not possible to release at this time without stalling the main thread.
 * @member SetPosition Seeking within a stream to a different position.
 * @member Max The number of open states. Not a state a sound is ever reported in.
 * @const_end
 * */





/**
 * @const FmodChannelControlDspIndex
 * @desc > **FMOD Constant:** [FMOD_CHANNELCONTROL_DSP_INDEX](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#fmod_channelcontrol_dsp_index)
 *
 * <br />
 *
 * This enum specifies references to built-in DSP positions that reside in a Channel or ChannelGroup DSP chain.
 * @member Head Head of the DSP chain, equivalent of index 0.
 * @member Fader Built-in fader DSP.
 * @member Tail Tail of the DSP chain, equivalent of the number of DSPs minus 1.
 * @const_end
 * */







/**
 * @const FmodDspConnectionType
 * @desc > **FMOD Constant:** [FMOD_DSPCONNECTION_TYPE](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#fmod_dspconnection_type)
 *
 * <br />
 *
 * This enum specifies the list of connection types between 2 DSP nodes.
 * @member Standard Default connection type. Audio is mixed from the input to the output DSP's audible buffer.
 * @member Sidechain Sidechain connection type. Audio is mixed from the input to the output DSP's sidechain buffer.
 * @member Send Send connection type. Audio is mixed from the input to the output DSP's audible buffer, but the input is NOT executed, only copied from. A standard connection or sidechain needs to make an input execute to generate data.
 * @member SendSidechain Send sidechain connection type. Audio is mixed from the input to the output DSP's sidechain buffer, but the input is NOT executed, only copied from. A standard connection or sidechain needs to make an input execute to generate data.
 * @const_end
 * */

/**
 * @const FmodTagType
 * @desc > **FMOD Constant:** [FMOD_TAGTYPE](https://www.fmod.com/docs/2.03/api/core-api-sound.html#fmod_tagtype)
 *
 * <br />
 *
 * This enum specifies the list of tag data / metadata types that could be stored within a sound. These include id3 tags, metadata from netstreams and vorbis/asf data.
 * @member Unknown Tag type that is not recognized by FMOD
 * @member Id3v1 MP3 ID3 Tag 1.0. Typically 1 tag stored 128 bytes from end of an MP3 file.
 * @member Id3v2 MP3 ID3 Tag 2.0. Variable length tags with more than 1 possible.
 * @member VorbisComment Metadata container used in Vorbis, FLAC, Theora, Speex and Opus file formats.
 * @member ShoutCast SHOUTcast internet stream metadata which can be issued during playback.
 * @member IceCast Icecast internet stream metadata which can be issued during playback.
 * @member Asf Advanced Systems Format metadata typically associated with Windows Media formats such as WMA.
 * @member Midi Metadata stored inside a MIDI file.
 * @member Playlist Playlist files such as PLS,M3U,ASX and WAX will populate playlist information through this tag type.
 * @member Fmod Tag type used by FMOD's MIDI, MOD, S3M, XM, IT format support, and netstreams to notify of internet stream events like a sample rate change.
 * @member User For codec developers, this tag type can be used with `FMOD_CODEC_METADATA_FUNC` to generate custom metadata.
 * @const_end
 * */

/**
 * @const FmodTagDataType
 * @desc > **FMOD Constant:** [FMOD_TAGDATATYPE](https://www.fmod.com/docs/2.03/api/core-api-sound.html#fmod_tagdatatype)
 *
 * <br />
 *
 * This enum specifies the list of tag data / metadata types.
 * @member Binary Raw binary data. see ${struct.FmodSoundTag} structure for length of data in bytes.
 * @member Int Integer - Note this integer could be 8bit / 16bit / 32bit / 64bit. See ${struct.FmodSoundTag} structure for integer size (1 vs 2 vs 4 vs 8 bytes).
 * @member Float IEEE floating point number. See ${struct.FmodSoundTag} structure to confirm if the float data is 32bit or 64bit (4 vs 8 bytes).
 * @member String 8bit ASCII char string. See ${struct.FmodSoundTag} structure for string length in bytes.
 * @member StringUtf16 16bit UTF string. Assume little endian byte order. See ${struct.FmodSoundTag} structure for string length in bytes.
 * @member StringUtf16Be 16bit UTF string Big endian byte order. See ${struct.FmodSoundTag} structure for string length in bytes.
 * @member StringUtf8 8 bit UTF string. See ${struct.FmodSoundTag} structure for string length in bytes.
 * @const_end
 * */



/* Codec constants */





/* DSP Constants */





/**
 * @const FmodDspType
 * @desc > **FMOD Constant:** [FMOD_DSP_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_type)
 *
 * <br />
 *
 * This enum specifies DSP types.
 * @member Unknown Was created via a non-FMOD plugin and has an unknown purpose.
 * @member Mixer Does not process the signal, acts as a unit purely for mixing inputs.
 * @member Oscillator Generates sine/square/saw/triangle or noise tones. See ${constant.FmodDspOscillator} for parameter information, [Effect reference - Oscillator](https://www.fmod.com/docs/2.03/api/effects-reference.html#oscillator) for overview.
 * @member LowPass Filters sound using a high quality, resonant lowpass filter algorithm but consumes more CPU time. Deprecated and will be removed in a future release. See ${constant.FmodDspLowPass} remarks for parameter information, [Effect reference - Low Pass](https://www.fmod.com/docs/2.03/api/effects-reference.html#low-pass) for overview.
 * @member ItLowPass Filters sound using a resonant lowpass filter algorithm that is used in Impulse Tracker, but with limited cutoff range (0 to 8060hz). See ${constant.FmodDspItLowPass} for parameter information, [Effect reference - IT Low Pass](https://www.fmod.com/docs/2.03/api/effects-reference.html#it-low-pass) for overview.
 * @member HighPass Filters sound using a resonant highpass filter algorithm. Deprecated and will be removed in a future release. See ${constant.FmodDspHighPass} remarks for parameter information, [Effect reference - High Pass](https://www.fmod.com/docs/2.03/api/effects-reference.html#high-pass) for overview.
 * @member Echo Produces an echo on the sound and fades out at the desired rate. See ${constant.FmodDspEcho} for parameter information, [Effect reference - Echo](https://www.fmod.com/docs/2.03/api/effects-reference.html#echo) for overview.
 * @member Fader Pans and scales the volume of a unit. See ${constant.FmodDspFader} for parameter information, [Effect reference - Fader](https://www.fmod.com/docs/2.03/api/effects-reference.html#fader) for overview.
 * @member Flange Produces a flange effect on the sound. See ${constant.FmodDspFlange} for parameter information, [Effect reference - Flange](https://www.fmod.com/docs/2.03/api/effects-reference.html#flange) for overview.
 * @member Distortion Distorts the sound. See ${constant.FmodDspDistortion} for parameter information, [Effect reference - Distortion](https://www.fmod.com/docs/2.03/api/effects-reference.html#distortion) for overview.
 * @member Normalize Normalizes or amplifies the sound to a certain level. See ${constant.FmodDspNormalize} for parameter information, [Effect reference - Normalize](https://www.fmod.com/docs/2.03/api/effects-reference.html#normalize) for overview.
 * @member Limiter Limits the sound to a certain level. See ${constant.FmodDspLimiter} for parameter information, [Effect reference - Limiter](https://www.fmod.com/docs/2.03/api/effects-reference.html#limiter) for overview.
 * @member ParamEq Attenuates or amplifies a selected frequency range. Deprecated and will be removed in a future release. See ${constant.FmodDspParamEq} for parameter information, [Effect reference - Parametric EQ](https://www.fmod.com/docs/2.03/api/effects-reference.html#parametric-eq) for overview.
 * @member PitchShift Bends the pitch of a sound without changing the speed of playback. See ${constant.FmodDspPitchShift} for parameter information, [Effect reference - Pitch Shifter](https://www.fmod.com/docs/2.03/api/effects-reference.html#pitch-shifter) for overview.
 * @member Chorus Produces a chorus effect on the sound. See ${constant.FmodDspChorus} for parameter information, [Effect reference - Chorus](https://www.fmod.com/docs/2.03/api/effects-reference.html#chorus) for overview.
 * @member ItEcho Produces an echo on the sound and fades out at the desired rate as is used in Impulse Tracker. See ${constant.FmodDspItEcho} for parameter information, [Effect reference - IT Echo](https://www.fmod.com/docs/2.03/api/effects-reference.html#it-echo) for overview.
 * @member Compressor Dynamic compression (linked/unlinked multi-channel, wideband). See ${constant.FmodDspCompressor} for parameter information, [Effect reference - Compressor](https://www.fmod.com/docs/2.03/api/effects-reference.html#compressor) for overview.
 * @member SfxReverb I3DL2 reverb effect. See ${constant.FmodDspSfxReverb} for parameter information, [Effect reference - SFX Reverb](https://www.fmod.com/docs/2.03/api/effects-reference.html#sfx-reverb) for overview.
 * @member LowPassSimple Filters sound using a simple lowpass with no resonance, but has flexible cutoff and is fast. Deprecated and will be removed in a future release. See ${constant.FmodDspLowPassSimple} remarks for parameter information, [Effect reference - Low Pass Simple](https://www.fmod.com/docs/2.03/api/effects-reference.html#low-pass-simple) for overview.
 * @member Delay Produces different delays on individual channels of the sound. See ${constant.FmodDspDelay} for parameter information, [Effect reference - Delay](https://www.fmod.com/docs/2.03/api/effects-reference.html#delay) for overview.
 * @member Tremolo Produces a tremolo / chopper effect on the sound. See ${constant.FmodDspTremolo} for parameter information, [Effect reference - Tremolo](https://www.fmod.com/docs/2.03/api/effects-reference.html#tremolo) for overview.
 * @member Send Sends a copy of the signal to a return DSP anywhere in the DSP tree. See ${constant.FmodDspSend} for parameter information, [Effect reference - Send](https://www.fmod.com/docs/2.03/api/effects-reference.html#send) for overview.
 * @member Return Receives signals from a number of send DSPs. See ${constant.FmodDspReturn} for parameter information, [Effect reference - Return](https://www.fmod.com/docs/2.03/api/effects-reference.html#return) for overview.
 * @member HighPassSimple Filters sound using a simple highpass with no resonance, but has flexible cutoff and is fast. Deprecated and will be removed in a future release. See ${constant.FmodDspHighPassSimple} remarks for parameter information, [Effect reference - High Pass Simple](https://www.fmod.com/docs/2.03/api/effects-reference.html#high-pass-simple) for overview.
 * @member Pan Pans the signal in 2D or 3D, possibly upmixing or downmixing as well. See ${constant.FmodDspPan} for parameter information, [Effect reference - Pan](https://www.fmod.com/docs/2.03/api/effects-reference.html#pan) for overview.
 * @member ThreeEq Three-band equalizer. See ${constant.FmodDspThreeEq} for parameter information, [Effect reference - Three EQ](https://www.fmod.com/docs/2.03/api/effects-reference.html#three-eq) for overview.
 * @member FFT Analyzes the signal and provides spectrum information back through getParameter. See ${constant.FmodDspFft} for parameter information, [Effect reference - FFT](https://www.fmod.com/docs/2.03/api/effects-reference.html#fft) for overview.
 * @member LoudnessMeter Analyzes the loudness and true peak of the signal. See ${constant.FmodDspLoudnessMeter} for parameter information, [Effect reference - Loudness Meter](https://www.fmod.com/docs/2.03/api/effects-reference.html#loudness-meter) for overview.
 * @member ConvolutionReverb Convolution reverb. See ${constant.FmodDspType}'s `CONVOLUTION_REVERB` for parameter information, [Effect reference - Convolution Reverb](https://www.fmod.com/docs/2.03/api/effects-reference.html#convolution-reverb) for overview.
 * @member ChannelMix Provides per channel gain, channel grouping of the input signal which also sets the speaker format for the output signal, and customizable input to output channel routing. See ${constant.FmodDspChannelMix} for parameter information, [Effect reference - Channel Mix](https://www.fmod.com/docs/2.03/api/effects-reference.html#channel-mix) for overview.
 * @member Transceiver 'sends' and 'receives' from a selection of up to 32 different slots. It is like a send/return but it uses global slots rather than returns as the destination. It also has other features. Multiple transceivers can receive from a single channel, or multiple transceivers can send to a single channel, or a combination of both. See ${constant.FmodDspTransceiver} for parameter information, [Effect reference - Transceiver](https://www.fmod.com/docs/2.03/api/effects-reference.html#transceiver) for overview.
 * @member ObjectPan Spatializes input signal by passing it to an external object mixer. See ${constant.FmodDspObjectPan} for parameter information, [Effect reference - Object Panner](https://www.fmod.com/docs/2.03/api/effects-reference.html#object-panner) for overview.
 * @member MultibandEq Five band parametric equalizer. See ${constant.FmodDspMultibandEq} for parameter information, [Effect reference - Multiband Equalizer](https://www.fmod.com/docs/2.03/api/effects-reference.html#multiband-equalizer) for overview.
 * @member MultibandDynamics Multiband dynamics processor unit. See ${constant.FmodDspMultibandDynamics} for parameter information, [Effect reference - Multiband Dynamics](https://www.fmod.com/docs/2.03/api/effects-reference.html#multiband-dynamics) for overview.
 * @const_end
 * */

/**
 * @const FmodDspOscillator
 * @desc > **FMOD Constant:** [FMOD_DSP_OSCILLATOR](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_oscillator)
 *
 * <br />
 *
 * This enum specifies oscillator DSP parameter types.
 * @member Type Waveform type. 0 = sine. 1 = square. 2 = sawup. 3 = sawdown. 4 = triangle. 5 = noise.
 * @member Rate Frequency of the tone. Does not affect the noise generator.
 * @const_end
 * */

/**
 * @const FmodDspLowPass
 * @desc > **FMOD Constant:** [FMOD_DSP_LOWPASS](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_lowpass)
 *
 * <br />
 *
 * This enum specifies lowpass DSP parameter types.
 * 
 * Deprecated and will be removed in a future release, emulate with `FmodDspType.MultibandEq`.
 * 
 * @member Cutoff Lowpass cutoff frequency.
 * @member Resonance Lowpass resonance Q value.
 * @const_end
 * */

/**
 * @const FmodDspItLowPass
 * @desc > **FMOD Constant:** [FMOD_DSP_ITLOWPASS](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_itlowpass)
 *
 * <br />
 *
 * This enum specifies lowpass DSP parameter types.
 * @member Cutoff Lowpass cutoff frequency.
 * @member Resonance Lowpass resonance Q value.
 * @const_end
 * */

/**
 * @const FmodDspHighPass
 * @desc > **FMOD Constant:** [FMOD_DSP_HIGHPASS](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_highpass)
 *
 * <br />
 *
 * This enum specifies highpass DSP parameter types.
 * @member Cutoff Highpass cutoff frequency.
 * @member Resonance Highpass resonance Q value.
 * @const_end
 * */

/**
 * @const FmodDspEcho
 * @desc > **FMOD Constant:** [FMOD_DSP_ECHO](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_echo)
 *
 * <br />
 *
 * This enum specifies echo DSP parameter types.
 * @member Delay Echo delay.
 * @member Feedback Echo decay per delay. 100.0 = No decay, 0.0 = total decay.
 * @member DryLevel Original sound volume.
 * @member WetLevel Volume of echo signal to pass to output.
 * @member DelayChangeMode How the echo responds to a change of the Delay parameter - a member of ${constant.FmodDspEchoDelayChangeMode}.
 * @const_end
 * */



/**
 * @const FmodDspEchoDelayChangeMode
 * @desc > **FMOD Constant:** [FMOD_DSP_ECHO_DELAYCHANGEMODE_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_echo_delaychangemode_type)
 *
 * <br />
 *
 * This enum specifies how the echo responds to a change of its Delay parameter. Pass one of these to ${constant.FmodDspEcho}.DelayChangeMode.
 * @member Fade Cross fade between the old and the new delay.
 * @member Lerp Interpolate towards the new delay, changing the pitch of the echo while it moves.
 * @member None Jump straight to the new delay.
 * @const_end
 * */



/**
 * @const FmodDspFlange
 * @desc > **FMOD Constant:** [FMOD_DSP_FLANGE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_flange)
 *
 * <br />
 *
 * This enum specifies flange DSP parameter types.
 * @member Mix Percentage of wet signal in mix.
 * @member Depth Flange depth.
 * @member Rate Flange speed.
 * @const_end
 * */

/**
 * @const FmodDspDistortion
 * @desc > **FMOD Constant:** [FMOD_DSP_DISTORTION](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_distortion)
 *
 * <br />
 *
 * This enum specifies distortion DSP parameter types.
 * @member Level Distortion value.
 * @const_end
 * */

/**
 * @const FmodDspNormalize
 * @desc > **FMOD Constant:** [FMOD_DSP_NORMALIZE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_normalize)
 *
 * <br />
 *
 * This enum specifies normalize DSP parameter types.
 * 
 * Normalize amplifies the sound based on the maximum peaks within the signal. For example if the maximum peaks in the signal were 50% of the bandwidth, it would scale the whole sound by 2.
 * 
 * The lower threshold value makes the normalizer ignore peaks below a certain point, to avoid over-amplification if a loud signal suddenly came in, and also to avoid amplifying to maximum things like background hiss.
 * 
 * Because FMOD is a realtime audio processor, it doesn't have the luxury of knowing the peak for the whole sound (i.e. it can't see into the future), so it has to process data as it comes in.
 * 
 * To avoid very sudden changes in volume level based on small samples of new data, FMOD fades towards the desired amplification which makes for smooth gain control. The fadetime parameter can control this.
 * 
 * @member FadeTime Time to ramp the silence to full.
 * @member Threshold Lower volume range threshold to ignore.
 * @member MaxAmplitude Maximum amplification allowed.
 * @const_end
 * */

/**
 * @const FmodDspLimiter
 * @desc > **FMOD Constant:** [FMOD_DSP_LIMITER](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_limiter)
 *
 * <br />
 *
 * This enum specifies limited DSP parameter types.
 * @member ReleaseTime Time to return the gain reduction to full in ms.
 * @member Ceiling Maximum level of the output signal.
 * @member MaximizerGain Maximum amplification allowed.
 * @member Mode Channel processing mode where false is independent (limiter per channel) and true is linked (all channels are summed together before processing).
 * @const_end
 * */

/**
 * @const FmodDspParamEq
 * @desc > **FMOD Constant:** [FMOD_DSP_PARAMEQ](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_parameq)
 *
 * <br />
 *
 * This enum specifies parametric EQ DSP parameter types.
 * 
 * Deprecated and will be removed in a future release, to emulate with `FmodDspType.MultibandEq`:
 *
 * Parametric EQ is a single band peaking EQ filter that attenuates or amplifies a selected frequency and its neighboring frequencies.
 *
 * When the gain is set to zero decibels the sound will be unaffected and represents the original signal exactly.
 * 
 * @member Center Frequency center.
 * @member Bandwidth Octave range around the center frequency to filter.
 * @member Gain Frequency Gain in dB.
 * @const_end
 * */

/**
 * @const FmodDspMultibandEq
 * @desc > **FMOD Constant:** [FMOD_DSP_MULTIBAND_EQ](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_multiband_eq)
 *
 * <br />
 *
 * This enum specifies multiband EQ DSP parameter types.
 * 
 * Flexible five band parametric equalizer.
 * 
 * @member AFilter Band A: used to interpret the behavior of the remaining parameters.
 * @member AFrequency Band A: Significant frequency, cutoff [low/high pass, low/high shelf], center [notch, peaking, band-pass], phase transition point [all-pass].
 * @member AQ Band A: Quality factor, resonance [low/high pass], bandwidth [notch, peaking, band-pass], phase transition sharpness [all-pass], unused [low/high shelf].
 * @member AGain Band A: Boost or attenuation in dB [peaking, high/low shelf only]. -30 to 30. Default = 0.
 * @member BFilter Band B: See Band A.
 * @member BFrequency Band B: See Band A
 * @member BQ Band B: See Band A
 * @member BGain Band B: See Band A
 * @member CFilter Band C: See Band A.
 * @member CFrequency Band C: See Band A.
 * @member CQ Band C: See Band A.
 * @member CGain Band C: See Band A.
 * @member DFilter Band D: See Band A.
 * @member DFrequency Band D: See Band A.
 * @member DQ Band D: See Band A.
 * @member DGain Band D: See Band A.
 * @member EFilter Band E: See Band A.
 * @member EFrequency Band E: See Band A.
 * @member EQ Band E: See Band A.
 * @member EGain Band E: See Band A.
 * @const_end
 * */

/**
 * @const FmodDspMultibandEqFilterType
 * @desc > **FMOD Constant:** [FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_multiband_eq_filter_type)
 *
 * <br />
 *
 * This enum specifies multiband EQ Filter types.
 * @member Disabled Disabled filter, no processing.
 * @member Lowpass12db Resonant low-pass filter, attenuates frequencies (12dB per octave) above a given point (with specificed resonance) while allowing the rest to pass.
 * @member Lowpass24db Resonant low-pass filter, attenuates frequencies (24dB per octave) above a given point (with specificed resonance) while allowing the rest to pass.
 * @member Lowpass48db Resonant low-pass filter, attenuates frequencies (48dB per octave) above a given point (with specificed resonance) while allowing the rest to pass.
 * @member Highpass12db Resonant high-pass filter, attenuates frequencies (12dB per octave) below a given point (with specificed resonance) while allowing the rest to pass.
 * @member Highpass24db Resonant high-pass filter, attenuates frequencies (24dB per octave) below a given point (with specificed resonance) while allowing the rest to pass.
 * @member Highpass48db Resonant high-pass filter, attenuates frequencies (48dB per octave) below a given point (with specificed resonance) while allowing the rest to pass.
 * @member Lowshelf Low-shelf filter, boosts or attenuates frequencies (with specified gain) below a given point while allowing the rest to pass.
 * @member Highshelf High-shelf filter, boosts or attenuates frequencies (with specified gain) above a given point while allowing the rest to pass.
 * @member Peaking Peaking filter, boosts or attenuates frequencies (with specified gain) at a given point (with specificed bandwidth) while allowing the rest to pass.
 * @member Bandpass Band-pass filter, allows frequencies at a given point (with specificed bandwidth) to pass while attenuating frequencies outside this range.
 * @member Notch Notch or band-reject filter, attenuates frequencies at a given point (with specificed bandwidth) while allowing frequencies outside this range to pass.
 * @member Allpass All-pass filter, allows all frequencies to pass, but changes the phase response at a given point (with specified sharpness).
 * @member Lowpass6db Low-pass filter, attenuates frequencies (6dB per octave) above a given point while allowing the rest to pass.
 * @member Highpass6db High-pass filter, attenuates frequencies (6dB per octave) below a given point while allowing the rest to pass.
 * @const_end
 * */

/**
 * @const FmodDspPitchShift
 * @desc > **FMOD Constant:** [FMOD_DSP_PITCHSHIFT](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_pitchshift)
 *
 * <br />
 *
 * This enum specifies pitch shift DSP parameter types.
 * 
 * `FmodDspPitchShift.MaxChannels` dictates the amount of memory allocated. By default, the maxchannels value is 0. If FMOD is set to stereo, the pitch shift unit will allocate enough memory for 2 channels. If it is 5.1, it will allocate enough memory for a 6 channel pitch shift, etc.
 * 
 * If the pitch shift effect is only ever applied to the global mix (i.e. with ${function.fmod_channel_control_add_dsp} on a [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) object), then 0 is the value to set as it will be enough to handle all speaker modes.
 * 
 * When the pitch shift is added to a Channel (i.e. with ${function.fmod_channel_control_add_dsp} on a [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html) object) then the signal channel count that comes in could be anything from 1 to 8 possibly. It is only in this case where you might want to increase the channel count above the output's channel count.
 * 
 * If a [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html) pitch shift is set to a lower number than the signal's channel count that is coming in, it will not pitch shift the sound.
 * 
 * @member Pitch Pitch value. 0.5 = one octave down, 2.0 = one octave up. 1.0 does not change the pitch.
 * @member FftSize FFT window size - 256, 512, 1024, 2048, 4096. Increase this to reduce 'smearing'. This effect is a warbling sound similar to when an mp3 is encoded at very low bitrates.
 * @member Overlap Removed. Do not use. FMOD now uses 4 overlaps and cannot be changed.
 * @member MaxChannels Maximum channels supported. 0 = same as FMOD's default output polyphony, 1 = mono, 2 = stereo etc. See remarks for more. It is recommended to leave it at 0.
 * @const_end
 * */

/**
 * @const FmodDspChorus
 * @desc > **FMOD Constant:** [FMOD_DSP_CHORUS](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_chorus)
 *
 * <br />
 *
 * This enum specifies chorus DSP parameter types.
 * 
 * Chorus is an effect where the sound is more 'spacious' due a copy of the signal being played along side the original, but with the delay of each copy modulating on a sine wave. As there are 2 versions of the same signal (dry vs wet), by default each signal is given 50% mix, so that the total is not louder than the original unaffected signal.
 * 
 * @member Mix Percentage of wet signal in mix.
 * @member Rate Chorus modulation rate.
 * @member Depth Chorus modulation depth.
 * @const_end
 * */



/**
 * @const FmodDspCompressor
 * @desc > **FMOD Constant:** [FMOD_DSP_COMPRESSOR](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_compressor)
 *
 * <br />
 *
 * This enum specifies compressor DSP parameter types.
 * 
 * This is a multi-channel software limiter that is uniform across the whole spectrum.
 * The limiter is not guaranteed to catch every peak above the threshold level, because it cannot apply gain reduction instantaneously - the time delay is determined by the attack time. However setting the attack time too short will distort the sound, so it is a compromise. High level peaks can be avoided by using a short attack time - but not too short, and setting the threshold a few decibels below the critical level.
 * 
 * @member Threshold Threshold level.
 * @member Ratio Compression Ratio.
 * @member Attack Attack time.
 * @member Release Release time.
 * @member GainMakeup Make-up gain applied after limiting.
 * @member UseSidechain Data of type `FMOD_DSP_PARAMETER_SIDECHAIN`. Whether to analyse the sidechain signal instead of the input signal. The FMOD_DSP_PARAMETER_SIDECHAIN::sidechainenable default is false.
 * @member Linked `false` = Independent (compressor per channel), `true` = Linked.
 * @const_end
 * */



























/**
 * @const FmodDspFftWindowType
 * @desc > **FMOD Constant:** [FMOD_DSP_FFT_WINDOW](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_fft_window)
 *
 * <br />
 *
 * This enum specifies the list of windowing methods for the FFT DSP.
 * 
 * Used in spectrum analysis to reduce leakage / transient signals interfering with the analysis. This is a problem with analysis of continuous signals that only have a small portion of the signal sample (the FFT window size). Windowing the signal with a curve or triangle tapers the sides of the FFT window to help alleviate this problem.
 * 
 * Cyclic signals such as a sine wave that repeat their cycle in a multiple of the window size do not need windowing. I.e. If the sine wave repeats every 1024, 512, 256, etc. samples and the FMOD FFT window is 1024, then the signal would not need windowing.
 * 
 * Not windowing is the same as `FmodDspFftWindowType.Rect`, which is the default. If the cycle of the signal (i.e. the sine wave) is not a multiple of the window size, it will cause frequency abnormalities, so a different windowing method is needed.
 * 
 * @member Rect w[n] = 1.0
 * @member Triangle w[n] = TRI(2n/N)
 * @member Hamming w[n] = 0.54 - (0.46 * COS(n/N) )
 * @member Hanning w[n] = 0.5 * (1.0 - COS(n/N) )
 * @member Blackman w[n] = 0.42 - (0.5 * COS(n/N) ) + (0.08 * COS(2.0 * n/N) )
 * @member BlackmanHarris w[n] = 0.35875 - (0.48829 * COS(1.0 * n/N)) + (0.14128 * COS(2.0 * n/N)) - (0.01168 * COS(3.0 * n/N))
 * @const_end
 * */

/**
 * @const FmodDspFft
 * @desc > **FMOD Constant:** [FMOD_DSP_FFT](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_fft)
 *
 * <br />
 *
 * This enum specifies FFT DSP parameter types.
 * 
 * Set the attributes for the spectrum analysis with `FmodDspFft.WindowSize` and `FmodDspFft.WindowType`, and retrieve the results with `FmodDspFft.SpectrumData` and `FMOD_DSP_FFT.DOMINANT_FREQ`.
 * `FmodDspFft.SpectrumData` stores its data in the `FMOD_DSP_PARAMETER_DATA_TYPE_FFT`. You will need to cast to this structure to get the right data.
 * 
 * @member WindowSize Window size. Must be a power of 2 between 128 and 16384.
 * @member WindowType FFT Window Type.
 * @member BandStartFreq Lowest frequency in Hz to include in the RMS and spectral centroid readings. Range 0 to 22050, default 0.
 * @member BandStopFreq Highest frequency in Hz to include in the RMS and spectral centroid readings. Range 0 to 22050, default 22050.
 * @member SpectrumData Returns the current spectrum values between 0 and 1 for each 'FFT bin'. Divide the Nyquist frequency by the window size to get the Hz value per entry.
 * @member Rms Read-only. The root mean square of the signal across the selected band.
 * @member SpectralCentroid Read-only. The spectral centroid of the signal, in Hz.
 * @member ImmediateMode Whether to analyse the signal as it arrives rather than on the mixer's own schedule.
 * @member Downmix How to downmix a multichannel signal before the transform.
 * @member Channel The channel to analyse when the signal is not downmixed.
 * @const_end
 * */









/**
 * @const FmodDspConvolution
 * @desc > **FMOD Constant:** [FMOD_DSP_CONVOLUTION_REVERB](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_convolution_reverb)
 *
 * <br />
 *
 * This enum specifies Convolution reverb DSP parameter types.
 * 
 * Convolution reverb is a reverberation effect that uses a recording of a physical space known as an Impulse Response file (or IR file) to generate frequency specific reverberation.
 * 
 * @member Ir Array of signed 16-bit (short) PCM data to be used as reverb impulse response. First member of the array should be a 16 bit value (short) which specifies the number of channels. Array looks like [index 0=numchannels][index 1+ = raw 16 bit PCM data]. Data is copied internally so source can be freed.
 * @member Wet Volume of echo signal to pass to output.
 * @member Dry Original sound volume.
 * @member Linked Linked - channels are mixed together before processing through the reverb.
 * @const_end
 * */



/**
 * @const FmodDspChannelMix
 * @desc > **FMOD Constant:** [FMOD_DSP_CHANNELMIX](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_channelmix)
 *
 * <br />
 *
 * This enum specifies channel Mix DSP parameter types.
 * 
 * For `FMOD_DSP_CHANNELMIX.OUTPUTGROUPING`, this value will set the output speaker format for the DSP which determines the number of output channels.
 *
 * For input channels mapped to an output channel in excess of the number of output channels, it will instead be mapped to the modulo of that channel index. E.g., if there are 4 output channels, the input channel mapped to output channel index 5 will be mapped to index 1.
 * 
 * @member OutputGrouping Output channel grouping - a member of ${constant.FmodDspChannelMixOutput}. Sets the output speaker format for the DSP, which determines the number of output channels.
 * @member GainCh0 Gain applied to output channel 0, in dB. Range -80 to 10, default 0.
 * @member GainCh1 Gain applied to output channel 1, in dB. Range -80 to 10, default 0.
 * @member GainCh2 Gain applied to output channel 2, in dB. Range -80 to 10, default 0.
 * @member GainCh3 Gain applied to output channel 3, in dB. Range -80 to 10, default 0.
 * @member GainCh4 Gain applied to output channel 4, in dB. Range -80 to 10, default 0.
 * @member GainCh5 Gain applied to output channel 5, in dB. Range -80 to 10, default 0.
 * @member GainCh6 Gain applied to output channel 6, in dB. Range -80 to 10, default 0.
 * @member GainCh7 Gain applied to output channel 7, in dB. Range -80 to 10, default 0.
 * @member GainCh8 Gain applied to output channel 8, in dB. Range -80 to 10, default 0.
 * @member GainCh9 Gain applied to output channel 9, in dB. Range -80 to 10, default 0.
 * @member GainCh10 Gain applied to output channel 10, in dB. Range -80 to 10, default 0.
 * @member GainCh11 Gain applied to output channel 11, in dB. Range -80 to 10, default 0.
 * @member GainCh12 Gain applied to output channel 12, in dB. Range -80 to 10, default 0.
 * @member GainCh13 Gain applied to output channel 13, in dB. Range -80 to 10, default 0.
 * @member GainCh14 Gain applied to output channel 14, in dB. Range -80 to 10, default 0.
 * @member GainCh15 Gain applied to output channel 15, in dB. Range -80 to 10, default 0.
 * @member GainCh16 Gain applied to output channel 16, in dB. Range -80 to 10, default 0.
 * @member GainCh17 Gain applied to output channel 17, in dB. Range -80 to 10, default 0.
 * @member GainCh18 Gain applied to output channel 18, in dB. Range -80 to 10, default 0.
 * @member GainCh19 Gain applied to output channel 19, in dB. Range -80 to 10, default 0.
 * @member GainCh20 Gain applied to output channel 20, in dB. Range -80 to 10, default 0.
 * @member GainCh21 Gain applied to output channel 21, in dB. Range -80 to 10, default 0.
 * @member GainCh22 Gain applied to output channel 22, in dB. Range -80 to 10, default 0.
 * @member GainCh23 Gain applied to output channel 23, in dB. Range -80 to 10, default 0.
 * @member GainCh24 Gain applied to output channel 24, in dB. Range -80 to 10, default 0.
 * @member GainCh25 Gain applied to output channel 25, in dB. Range -80 to 10, default 0.
 * @member GainCh26 Gain applied to output channel 26, in dB. Range -80 to 10, default 0.
 * @member GainCh27 Gain applied to output channel 27, in dB. Range -80 to 10, default 0.
 * @member GainCh28 Gain applied to output channel 28, in dB. Range -80 to 10, default 0.
 * @member GainCh29 Gain applied to output channel 29, in dB. Range -80 to 10, default 0.
 * @member GainCh30 Gain applied to output channel 30, in dB. Range -80 to 10, default 0.
 * @member GainCh31 Gain applied to output channel 31, in dB. Range -80 to 10, default 0.
 * @member OutputCh0 Output channel that input channel 0 is routed to. Range 0 to 31.
 * @member OutputCh1 Output channel that input channel 1 is routed to. Range 0 to 31.
 * @member OutputCh2 Output channel that input channel 2 is routed to. Range 0 to 31.
 * @member OutputCh3 Output channel that input channel 3 is routed to. Range 0 to 31.
 * @member OutputCh4 Output channel that input channel 4 is routed to. Range 0 to 31.
 * @member OutputCh5 Output channel that input channel 5 is routed to. Range 0 to 31.
 * @member OutputCh6 Output channel that input channel 6 is routed to. Range 0 to 31.
 * @member OutputCh7 Output channel that input channel 7 is routed to. Range 0 to 31.
 * @member OutputCh8 Output channel that input channel 8 is routed to. Range 0 to 31.
 * @member OutputCh9 Output channel that input channel 9 is routed to. Range 0 to 31.
 * @member OutputCh10 Output channel that input channel 10 is routed to. Range 0 to 31.
 * @member OutputCh11 Output channel that input channel 11 is routed to. Range 0 to 31.
 * @member OutputCh12 Output channel that input channel 12 is routed to. Range 0 to 31.
 * @member OutputCh13 Output channel that input channel 13 is routed to. Range 0 to 31.
 * @member OutputCh14 Output channel that input channel 14 is routed to. Range 0 to 31.
 * @member OutputCh15 Output channel that input channel 15 is routed to. Range 0 to 31.
 * @member OutputCh16 Output channel that input channel 16 is routed to. Range 0 to 31.
 * @member OutputCh17 Output channel that input channel 17 is routed to. Range 0 to 31.
 * @member OutputCh18 Output channel that input channel 18 is routed to. Range 0 to 31.
 * @member OutputCh19 Output channel that input channel 19 is routed to. Range 0 to 31.
 * @member OutputCh20 Output channel that input channel 20 is routed to. Range 0 to 31.
 * @member OutputCh21 Output channel that input channel 21 is routed to. Range 0 to 31.
 * @member OutputCh22 Output channel that input channel 22 is routed to. Range 0 to 31.
 * @member OutputCh23 Output channel that input channel 23 is routed to. Range 0 to 31.
 * @member OutputCh24 Output channel that input channel 24 is routed to. Range 0 to 31.
 * @member OutputCh25 Output channel that input channel 25 is routed to. Range 0 to 31.
 * @member OutputCh26 Output channel that input channel 26 is routed to. Range 0 to 31.
 * @member OutputCh27 Output channel that input channel 27 is routed to. Range 0 to 31.
 * @member OutputCh28 Output channel that input channel 28 is routed to. Range 0 to 31.
 * @member OutputCh29 Output channel that input channel 29 is routed to. Range 0 to 31.
 * @member OutputCh30 Output channel that input channel 30 is routed to. Range 0 to 31.
 * @member OutputCh31 Output channel that input channel 31 is routed to. Range 0 to 31.
 * @const_end
 * */



/**
 * @const FmodDspChannelMixOutput
 * @desc > **FMOD Constant:** [FMOD_DSP_CHANNELMIX_OUTPUT](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_channelmix_output)
 *
 * <br />
 *
 * This enum specifies the output speaker formats a channel mix DSP can group its output into. Pass one of these to ${constant.FmodDspChannelMix}.OutputGrouping.
 * @member Default Output channel count and speaker format matches the input.
 * @member AllMono Every output channel is mono.
 * @member AllStereo Every pair of output channels is stereo.
 * @member AllQuad Every group of four output channels is quadraphonic.
 * @member All5Point1 Every group of six output channels is 5.1.
 * @member All7Point1 Every group of eight output channels is 7.1.
 * @member AllLfe Every output channel is an LFE channel.
 * @member All7Point1Point4 Every group of twelve output channels is 7.1.4.
 * @const_end
 * */



/**
 * @const FmodDspTransceiver
 * @desc > **FMOD Constant:** [FMOD_DSP_TRANSCEIVER](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_transceiver)
 *
 * <br />
 *
 * This enum specifies transceiver DSP parameter types.
 * @member Transmit Whether the transceiver transmits on its channel instead of receiving from it. Default false.
 * @member Gain The gain applied to the signal, in dB. Range -80 to 10, default 0.
 * @member Channel The global transceiver channel this DSP transmits on or receives from. Range 0 to 31, default 0.
 * @member TransmitSpeakerMode The speaker mode of the transmitted signal - a member of ${constant.FmodDspTransceiverSpeakerMode}.
 * @const_end
 * */



/**
 * @const FmodDspTransceiverSpeakerMode
 * @desc > **FMOD Constant:** [FMOD_DSP_TRANSCEIVER_SPEAKERMODE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_transceiver_speakermode)
 *
 * <br />
 *
 * This enum specifies the speaker mode a transceiver DSP transmits with. Pass one of these to ${constant.FmodDspTransceiver}.TransmitSpeakerMode.
 * @member Auto Use the speaker mode of the transmitting signal.
 * @member Mono Transmit as mono.
 * @member Stereo Transmit as stereo.
 * @member Surround Transmit using the speaker mode set in the FMOD system.
 * @const_end
 * */



/* Output constants */





/* Studio Definitions */



/**
 * @const FmodStudioInitFlags
 * @desc > **FMOD Constant:** [FMOD_STUDIO_INITFLAGS](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_initflags)
 *
 * <br />
 *
 * This enum specifies FMOD Studio System initialization flags.
 * @member Normal Use defaults for all initialization options.
 * @member LiveUpdate Enable live update.
 * @member AllowMissingPlugins Load banks even if they reference plugins that have not been loaded.
 * @member SynchronousUpdate Disable asynchronous processing and perform all processing on the calling thread instead.
 * @member DeferredCallbacks Defer timeline callbacks until the main update. See ${function.fmod_studio_event_instance_set_callback} for more information.
 * @member LoadFromUpdate No additional threads are created for bank and resource loading. Loading is driven from ${function.fmod_studio_system_update}.
 * @member MemoryTracking Enables detailed memory usage statistics. Increases memory footprint and impacts performance. See ${function.fmod_studio_bus_get_memory_usage} and ${function.fmod_studio_event_instance_get_memory_usage} for more information. Implies `FmodInitFlags.MemoryTracking`.
 * @const_end
 * */

/**
 * @const FmodStudioParameterFlags
 * @desc > **FMOD Constant:** [FMOD_STUDIO_PARAMETER_FLAGS](https://www.fmod.com/docs/2.03/api/studio-api-common.html#fmod_studio_parameter_flags)
 *
 * <br />
 *
 * This enum specifies flags describing the behavior of a parameter.
 * @member ReadOnly Read-only.
 * @member Automatic Automatic parameter.
 * @member Global Global parameter.
 * @member Discrete Discrete parameter that operates on integers (whole numbers) rather than continuous fractional numbers.
 * @member Labeled Labeled discrete parameter that has a label for each integer value. This flag will never be set in banks built with FMOD Studio versions prior to 2.01.10. If this flag is set, `FmodStudioParameterFlags.Discrete` will also be set.
 * @const_end
 * */



/**
 * @const FmodStudioEventCallbackType
 * @desc > **FMOD Constant:** [FMOD_STUDIO_EVENT_CALLBACK_TYPE](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#fmod_studio_event_callback_type)
 *
 * <br />
 *
 * This enum specifies the FMOD Studio event callback types.
 * 
 * Callbacks are called from the Studio Update Thread in default / async mode and the main (calling) thread in synchronous mode.
 * If using `FmodStudioInitFlags.DeferredCallbacks`, `FmodStudioEventCallbackType.TimelineMarker` and `FmodStudioEventCallbackType.TimelineBeat` are instead called from the main thread.
 * 
 * @member Created Called when an instance is fully created. Parameters = unused.
 * @member Destroyed Called when an instance is just about to be destroyed. Parameters = unused.
 * @member Starting ${function.fmod_studio_event_instance_start} has been called on an event which was not already playing. The event will remain in this state until its sample data has been loaded. Parameters = unused.
 * @member Started The event has commenced playing. Normally this callback will be issued immediately after `FmodStudioEventCallbackType.Starting`, but may be delayed until sample data has loaded. Parameters = unused.
 * @member Restarted ${function.fmod_studio_event_instance_start} has been called on an event which was already playing. Parameters = unused.
 * @member Stopped The event has stopped. Parameters = unused.
 * @member StartFailed ${function.fmod_studio_event_instance_start} has been called but the polyphony settings did not allow the event to start. In this case none of `FmodStudioEventCallbackType.Starting`, `FmodStudioEventCallbackType.Started` and `FmodStudioEventCallbackType.Stopped` will be called. Parameters = unused.
 * @member CreateProgrammerSound A programmer sound is about to play. FMOD expects the callback to provide a [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html) object for it to use. Parameters = `FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES`.
 * @member DestroyProgrammerSound A programmer sound has stopped playing. At this point it is safe to release the [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html) object that was used. Parameters = `FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES`.
 * @member PluginCreated Called when a DSP plugin instance has just been created. Parameters = `FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES`.
 * @member PluginDestroyed Called when a DSP plugin instance is about to be destroyed. Parameters = `FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES`.
 * @member TimelineMarker Called when the timeline passes a named marker. Parameters = `FMOD_STUDIO_TIMELINE_MARKER_PROPERTIES`.
 * @member TimelineBeat Called when the timeline hits a beat in a tempo section. Parameters = `FMOD_STUDIO_TIMELINE_BEAT_PROPERTIES`.
 * @member SoundPlayed Called when the event plays a sound. Parameters = [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html).
 * @member SoundStopped Called when the event finishes playing a sound. Parameters = [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html).
 * @member RealToVirtual Called when the event becomes virtual. Parameters = unused.
 * @member VirtualToReal Called when the event becomes real. Parameters = unused.
 * @member StartEventCommand Called when a new event is started by a start event command. Parameters = [Studio::EventInstance](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html).
 * @member NestedTimelineBeat Called when the timeline hits a beat in a tempo section of a nested event. Parameters = `FMOD_STUDIO_TIMELINE_NESTED_BEAT_PROPERTIES`.
 * @member All Pass this mask to ${function.fmod_studio_event_description_set_callback} or ${function.fmod_studio_event_instance_set_callback} to receive all callback types.
 * @const_end
 * */

/**
 * @const FmodStudioLoadBankFlags
 * @desc > **FMOD Constant:** [FMOD_STUDIO_LOAD_BANK](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_load_bank_flags)
 *
 * <br />
 *
 * This enum specifies flags to control bank loading.
 * @member Normal Standard behavior.
 * @member NonBlocking Bank loading occurs asynchronously rather than occurring immediately.
 * @member DecompressSamples Force samples to decompress into memory when they are loaded, rather than staying compressed.
 * @member Unencrypted Ignore the encryption key specified by ${function.fmod_studio_system_set_advanced_settings} when loading sounds from this bank (assume the sounds in the bank are not encrypted).
 * @const_end
 * */

/**
 * @const FmodStudioCommandCaptureFlags
 * @desc > **FMOD Constant:** [FMOD_STUDIO_COMMANDCAPTURE_FLAGS](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_commandcapture_flags)
 *
 * <br />
 *
 * This enum specifies flags controling command capture.
 * @member Normal Use default options.
 * @member FileFlush Call file flush on every command.
 * @member SkipInitialState Normally the initial state of banks and instances is captured, unless this flag is set.
 * @const_end
 * */

/**
 * @const FmodStudioCommandReplayFlags
 * @desc > **FMOD Constant:** [FMOD_STUDIO_COMMANDREPLAY_FLAGS](https://www.fmod.com/docs/2.03/api/studio-api-system.html#fmod_studio_commandreplay_flags)
 *
 * <br />
 *
 * This enum specifies flags controlling command replay.
 * @member Normal Use default options.
 * @member SkipCleanup Do not free resources at the end of playback.
 * @member FastForward Play back at maximum speed, ignoring the timing of the original replay.
 * @member SkipBankLoad Skip commands related to bank loading.
 * @const_end
 * */

/**
 * @const FmodStudioLoadingState
 * @desc > **FMOD Constant:** [FMOD_STUDIO_LOADING_STATE](https://www.fmod.com/docs/2.03/api/studio-api-common.html#fmod_studio_loading_state)
 *
 * <br />
 *
 * This enum specifies the loading state of various objects.
 * @member Unloading Currently unloading.
 * @member Unloaded Not loaded.
 * @member Loading Loading in progress.
 * @member Loaded Loaded and ready to play.
 * @member Error Failed to load.
 * @const_end
 * */





/**
 * @const FmodStudioUserPropertyType
 * @desc > **FMOD Constant:** [FMOD_STUDIO_USER_PROPERTY_TYPE](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#fmod_studio_user_property_type)
 *
 * <br />
 *
 * This enum specifies user property types.
 * @member Integer Integer.
 * @member Boolean Boolean.
 * @member Float Floating point number.
 * @member String String.
 * @const_end
 * */

/**
 * @const FmodStudioEventProperty
 * @desc > **FMOD Constant:** [FMOD_STUDIO_EVENT_PROPERTY](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#fmod_studio_event_property)
 *
 * <br />
 *
 * This enum holds the definitions that describe built-in event properties.
 * 
 * A property that returns a value of -1 from ${function.fmod_studio_event_instance_get_property} means it will use the values set in Studio, use ${function.fmod_studio_event_instance_set_property} to override these values. You can revert the properties value to default by setting it to -1.
 * 
 * @member ChannelPriority Priority to set on Core API Channels created by this event instance, or -1 for default.
 * @member ScheduleDelay Schedule delay in DSP clocks, or -1 for default.
 * @member ScheduleLookAhead Schedule look-ahead on the timeline in DSP clocks, or -1 for default.
 * @member MinimumDistance Override the event's 3D minimum distance, or -1 for default.
 * @member MaximumDistance Override the event's 3D maximum distance, or -1 for default.
 * @member CoolDown Override the event's cooldown, or -1 for default.
 * @const_end
 * */

/**
 * @const FmodStudioPlaybackState
 * @desc > **FMOD Constant:** [FMOD_STUDIO_PLAYBACK_STATE](https://www.fmod.com/docs/2.03/api/studio-api-common.html#fmod_studio_playback_state)
 *
 * <br />
 *
 * This enum specifies the playback state of various objects.
 * @member Playing Playing.
 * @member Sustaining The timeline cursor is paused on a sustain point. ([Studio::EventInstance](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html) only.)
 * @member Stopped Stopped.
 * @member Starting Preparing to start.
 * @member Stopping Preparing to stop.
 * @const_end
 * */

/**
 * @const FmodStudioStopMode
 * @desc > **FMOD Constant:** [FMOD_STUDIO_STOP_MODE](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#fmod_studio_stop_mode)
 *
 * <br />
 *
 * This enum specifies stop modes.
 * @member AllowFadeOut Allows AHDSR modulators to complete their release, and DSP effect tails to play out.
 * @member Immediate Stops the event instance immediately.
 * @const_end
 * */



/**
 * @const FmodDspOscillatorType
 * @desc > **FMOD Constant:** [FMOD_DSP_OSCILLATOR](https://www.fmod.com/docs/2.03/api/core-api-dsp-effects.html#fmod_dsp_oscillator)
 *
 * <br />
 *
 * This enum lists the waveforms an oscillator DSP unit can generate. Pass one of these as the value
 * of the oscillator's `FmodDspOscillator.Type` parameter.
 * @member Sine A sine wave. This is the default.
 * @member Square A square wave.
 * @member Sawup A sawtooth wave that ramps upwards.
 * @member Sawdown A sawtooth wave that ramps downwards.
 * @member Triangle A triangle wave.
 * @member Noise White noise.
 * @const_end
 */

/**
 * @const FmodDspFader
 * @desc > **FMOD Constant:** [FMOD_DSP_FADER](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_fader)
 *
 * <br />
 *
 * This enum specifies fader DSP parameter types.
 * @member Gain Signal gain.
 * @member OverallGain Overall gain to allow FMOD to know the DSP is scaling the signal for visualization purposes.
 * @const_end
 */

/**
 * @const FmodDspMultibandDynamics
 * @desc > **FMOD Constant:** [FMOD_DSP_MULTIBAND_DYNAMICS](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_multiband_dynamics)
 *
 * <br />
 *
 * This enum specifies multiband dynamics DSP parameter types.
 * 
 * A three-band dynamics processor. Each band (A, B and C) is compressed or expanded independently, with the crossover points between them set by `${constant.FmodDspMultibandDynamics}.LowerFrequency` and `${constant.FmodDspMultibandDynamics}.UpperFrequency`.
 * 
 * @member LowerFrequency Lower frequency of the crossover between band A and band B.
 * @member UpperFrequency Upper frequency of the crossover between band B and band C.
 * @member Linked Whether the channels are processed together using the loudest as the reference, or independently.
 * @member UseSidechain Whether to process the sidechain input rather than the main input.
 * @member AMode Processing mode for band A - a member of ${constant.FmodDspMultibandDynamicsModeType}.
 * @member AGain Gain applied to band A before processing.
 * @member AThreshold Level at which band A starts being processed.
 * @member ARatio Compression or expansion ratio for band A.
 * @member AAttack Time taken for band A to reach full processing once the threshold is crossed.
 * @member ARelease Time taken for band A to stop processing once the signal drops back past the threshold.
 * @member AGainMakeup Gain applied to band A after processing.
 * @member AResponseData Read-only metering data for band A.
 * @member BMode Processing mode for band B - a member of ${constant.FmodDspMultibandDynamicsModeType}.
 * @member BGain Gain applied to band B before processing.
 * @member BThreshold Level at which band B starts being processed.
 * @member BRatio Compression or expansion ratio for band B.
 * @member BAttack Time taken for band B to reach full processing once the threshold is crossed.
 * @member BRelease Time taken for band B to stop processing once the signal drops back past the threshold.
 * @member BGainMakeup Gain applied to band B after processing.
 * @member BResponseData Read-only metering data for band B.
 * @member CMode Processing mode for band C - a member of ${constant.FmodDspMultibandDynamicsModeType}.
 * @member CGain Gain applied to band C before processing.
 * @member CThreshold Level at which band C starts being processed.
 * @member CRatio Compression or expansion ratio for band C.
 * @member CAttack Time taken for band C to reach full processing once the threshold is crossed.
 * @member CRelease Time taken for band C to stop processing once the signal drops back past the threshold.
 * @member CGainMakeup Gain applied to band C after processing.
 * @member CResponseData Read-only metering data for band C.
 * @const_end
 */

/**
 * @const FmodDspMultibandDynamicsModeType
 * @desc > **FMOD Constant:** [FMOD_DSP_MULTIBAND_DYNAMICS_MODE_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_multiband_dynamics_mode_type)
 *
 * <br />
 *
 * This enum specifies the processing mode of a single band of the Multiband Dynamics DSP.
 * @member Disabled The band passes through unprocessed.
 * @member CompressUp Signal below the threshold is amplified towards it.
 * @member CompressDown Signal above the threshold is attenuated towards it.
 * @member ExpandUp Signal above the threshold is amplified away from it.
 * @member ExpandDown Signal below the threshold is attenuated away from it.
 * @const_end
 */

/**
 * @const FmodDspItEcho
 * @desc > **FMOD Constant:** [FMOD_DSP_ITECHO](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_itecho)
 *
 * <br />
 *
 * This enum specifies IT Echo DSP parameter types.
 * 
 * This is effectively a software based echo filter that emulates the DirectX DMO echo effect. Impulse tracker files can support this, and FMOD will produce the effect on ANY platform, not just those that support DirectX effects.
 * 
 * [[Note: Every time the delay is changed, the plugin re-allocates the echo buffer. This means the echo will disappear at that time while it refills its new buffer. Larger echo delays result in larger amounts of memory allocated.]]
 * 
 * As this is a stereo filter made mainly for IT playback, it is targeted for stereo signals. With mono signals only `${constant.FmodDspItEcho}.LeftDelay` is used. For multi-channel signals (>2) there will be no echo on those channels.
 * 
 * @member WetDryMix Ratio of wet (processed) signal to dry (unprocessed) signal. Higher is wetter.
 * @member Feedback Percentage of output fed back into input.
 * @member LeftDelay Delay for left channel.
 * @member RightDelay Delay for right channel.
 * @member PanDelay Value that specifies whether to swap left and right delays with each successive echo. CURRENTLY NOT SUPPORTED.
 * @const_end
 */

/**
 * @const FmodDspSfxReverb
 * @desc > **FMOD Constant:** [FMOD_DSP_SFXREVERB](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_sfxreverb)
 *
 * <br />
 *
 * This enum specifies SFX Reverb DSP parameter types.
 * 
 * This is a high quality I3DL2 based reverb. On top of the I3DL2 property set, "Dry Level" is also included to allow the dry mix to be changed.
 * 
 * @member DecayTime Reverberation decay time at low frequencies.
 * @member EarlyDelay Delay time of first reflection.
 * @member LateDelay Late reverberation delay time relative to first reflection in milliseconds.
 * @member HfReference Reference frequency for high-frequency decay.
 * @member HfDecayRatio High-frequency decay time relative to decay time.
 * @member Diffusion Reverberation diffusion (echo density).
 * @member Density Reverberation density (modal density).
 * @member LowShelfFrequency Transition frequency of low-shelf filter.
 * @member LowShelfGain Gain of low-shelf filter.
 * @member HighCut Cutoff frequency of low-pass filter.
 * @member EarlyLateMix Blend ratio of late reverb to early reflections.
 * @member WetLevel Reverb signal level.
 * @member DryLevel Dry signal level.
 * @const_end
 */

/**
 * @const FmodDspLowPassSimple
 * @desc > **FMOD Constant:** [FMOD_DSP_LOWPASS_SIMPLE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_lowpass_simple)
 *
 * <br />
 *
 * This enum specifies simple Lowpass DSP parameter types.
 * 
 * Deprecated and will be removed in a future release, emulate with `${constant.FmodDspType}.MultibandEq`.
 * 
 * This is a very simple low pass filter, based on two single-pole RC time-constant modules. The emphasis is on speed rather than accuracy, so this should not be used for tasks requiring critical filtering.
 * 
 * @member Cutoff Lowpass cutoff frequency.
 * @const_end
 */

/**
 * @const FmodDspHighPassSimple
 * @desc > **FMOD Constant:** [FMOD_DSP_HIGHPASS_SIMPLE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_highpass_simple)
 *
 * <br />
 *
 * This enum specifies simple Highpass DSP parameter types.
 * 
 * Deprecated and will be removed in a future release, emulate with `${constant.FmodDspType}.MultibandEq`.
 * 
 * This is a very simple high pass filter, based on two single-pole RC time-constant modules. The emphasis is on speed rather than accuracy.
 * 
 * @member Cutoff Highpass cutoff frequency.
 * @const_end
 */

/**
 * @const FmodDspDelay
 * @desc > **FMOD Constant:** [FMOD_DSP_DELAY](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_delay)
 *
 * <br />
 *
 * This enum specifies delay DSP parameter types.
 * 
 * Every channel of the signal can be delayed by a different amount, up to `${constant.FmodDspDelay}.MaxDelay` milliseconds.
 * 
 * @member Ch0 Channel #0 delay.
 * @member Ch1 Channel #1 delay.
 * @member Ch2 Channel #2 delay.
 * @member Ch3 Channel #3 delay.
 * @member Ch4 Channel #4 delay.
 * @member Ch5 Channel #5 delay.
 * @member Ch6 Channel #6 delay.
 * @member Ch7 Channel #7 delay.
 * @member Ch8 Channel #8 delay.
 * @member Ch9 Channel #9 delay.
 * @member Ch10 Channel #10 delay.
 * @member Ch11 Channel #11 delay.
 * @member Ch12 Channel #12 delay.
 * @member Ch13 Channel #13 delay.
 * @member Ch14 Channel #14 delay.
 * @member Ch15 Channel #15 delay.
 * @member MaxDelay Maximum delay any one channel can be set to, in milliseconds. Changing this re-allocates the delay buffer.
 * @const_end
 */

/**
 * @const FmodDspTremolo
 * @desc > **FMOD Constant:** [FMOD_DSP_TREMOLO](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_tremolo)
 *
 * <br />
 *
 * This enum specifies tremolo DSP parameter types.
 * 
 * The tremolo effect varies the amplitude of a sound. Depending on the settings, this unit can produce a tremolo, chopper or auto-pan effect.
 * 
 * The shape of the LFO (low frequency oscillator) can be morphed between sine, triangle and sawtooth waves using the `${constant.FmodDspTremolo}.Shape` and `${constant.FmodDspTremolo}.Skew` parameters.
 * 
 * `${constant.FmodDspTremolo}.Duty` and `${constant.FmodDspTremolo}.Square` are useful for a chopper-type effect, where the first controls the on-time duration and the second controls the flatness of the envelope.
 * 
 * `${constant.FmodDspTremolo}.Spread` varies the LFO phase between channels to get an auto-pan effect. This works best with a sine shape LFO.
 * 
 * The LFO can be synchronized using the `${constant.FmodDspTremolo}.Phase` parameter, which sets its instantaneous phase.
 * 
 * @member Frequency LFO frequency.
 * @member Depth Tremolo depth.
 * @member Shape LFO shape morph between triangle and sine.
 * @member Skew Time-skewing of LFO cycle.
 * @member Duty LFO on-time.
 * @member Square Flatness of the LFO shape.
 * @member Phase Instantaneous LFO phase.
 * @member Spread Rotation / auto-pan effect.
 * @const_end
 */

/**
 * @const FmodDspSend
 * @desc > **FMOD Constant:** [FMOD_DSP_SEND](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_send)
 *
 * <br />
 *
 * This enum specifies send DSP parameter types.
 * @member ReturnId ID of the Return DSP this send is connected to, where -1 indicates no connected return DSP.
 * @member Level Send level.
 * @const_end
 */

/**
 * @const FmodDspReturn
 * @desc > **FMOD Constant:** [FMOD_DSP_RETURN](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_return)
 *
 * <br />
 *
 * This enum specifies return DSP parameter types.
 * @member Id ID of this Return DSP.
 * @member InputSpeakerMode Input speaker mode of this return - a member of ${constant.FmodSpeakerMode}.
 * @const_end
 */

/**
 * @const FmodDspPan
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_pan)
 *
 * <br />
 *
 * This enum specifies pan DSP parameter types.
 * 
 * `${constant.FmodDspPan}._3dPanBlend` controls the percentage of the effect supplied by `${constant.FmodDspPan}._2dDirection` and `${constant.FmodDspPan}._2dExtent`.
 * 
 * For `${constant.FmodDspPan}._2dStereoMode`: when it is `${constant.FmodDspPan2dStereoModeType}.Discrete`, only `${constant.FmodDspPan}._2dStereoSeparation` and `${constant.FmodDspPan}._2dStereoAxis` are used; when it is `${constant.FmodDspPan2dStereoModeType}.Distributed`, the standard `${constant.FmodDspPan}._2dDirection` / `${constant.FmodDspPan}._2dExtent` parameters are used instead.
 * 
 * @member Mode Panner mode - a member of ${constant.FmodDspPanModeType}.
 * @member _2dStereoPosition 2D stereo pan position.
 * @member _2dDirection 2D surround pan direction. Direction from the center point of the panning circle, where 0 is front center and -180 or +180 is the rear speakers center point.
 * @member _2dExtent 2D surround pan extent.
 * @member _2dRotation 2D surround pan rotation.
 * @member _2dLfeLevel 2D surround pan LFE level.
 * @member _2dStereoMode Stereo-to-surround mode - a member of ${constant.FmodDspPan2dStereoModeType}.
 * @member _2dStereoSeparation Separation / width of the L/R parts of a stereo sound, for `${constant.FmodDspPan2dStereoModeType}.Discrete` mode.
 * @member _2dStereoAxis Axis / rotation of the L/R parts of a stereo sound, for `${constant.FmodDspPan2dStereoModeType}.Discrete` mode.
 * @member EnabledSpeakers Bitmask of the speakers from 0 to 32 the panner may pan to. Use it to disable speakers from being panned to. 0 to 0xFFF, default 0xFFF (all on).
 * @member _3dPosition 3D position of the panner and listener(s).
 * @member _3dRolloff 3D volume attenuation curve shape - a member of ${constant.FmodDspPan3dRolloffType}.
 * @member _3dMinDistance 3D volume attenuation minimum distance, when `${constant.FmodDspPan}.OverrideRange` is true.
 * @member _3dMaxDistance 3D volume attenuation maximum distance, when `${constant.FmodDspPan}.OverrideRange` is true.
 * @member _3dExtentMode 3D extent mode - a member of ${constant.FmodDspPan3dExtentModeType}.
 * @member _3dSoundSize 3D sound size.
 * @member _3dMinExtent 3D minimum extent.
 * @member _3dPanBlend 3D pan blend.
 * @member LfeUpmixEnabled Whether non-LFE source channels should mix to the LFE or leave it alone. 0 (off) to 1 (on), default 0 (off).
 * @member OverallGain Overall gain to allow FMOD to know the DSP is scaling the signal for visualization purposes.
 * @member SurroundSpeakerMode Surround speaker mode - a member of ${constant.FmodSpeakerMode}.
 * @member _2dHeightBlend 2D height blend. When the input or `${constant.FmodDspPan}.SurroundSpeakerMode` has height speakers, controls the blend between ground and height: -1.0 pushes the top speakers to the ground, 0.0 preserves the top / ground separation, 1.0 pushes the ground speakers to the top.
 * @member AttenuationRange Attenuation range, used when `${constant.FmodDspPan}.OverrideRange` is false.
 * @member OverrideRange Override the attenuation range with `${constant.FmodDspPan}._3dMinDistance` and `${constant.FmodDspPan}._3dMaxDistance`. Defaults to true for backwards compatibility.
 * @const_end
 */

/**
 * @const FmodDspPanModeType
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_MODE_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_pan_mode_type)
 *
 * <br />
 *
 * This enum specifies pan Mode values for the Pan DSP.
 * @member Mono Single channel output.
 * @member Stereo Two channel output.
 * @member Surround Three or more channel output. Includes common modes like quad, 5.1 or 7.1.
 * @const_end
 */

/**
 * @const FmodDspPan2dStereoModeType
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_2D_STEREO_MODE_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_pan_2d_stereo_mode_type)
 *
 * <br />
 *
 * This enum specifies 2D Stereo Mode values for the Pan DSP.
 * @member Distributed The parts of a stereo sound are spread around the destination speakers based on `${constant.FmodDspPan}._2dExtent` / `${constant.FmodDspPan}._2dDirection`.
 * @member Discrete The L/R parts of a stereo sound are rotated around a circle based on `${constant.FmodDspPan}._2dStereoAxis` / `${constant.FmodDspPan}._2dStereoSeparation`.
 * @const_end
 */

/**
 * @const FmodDspPan3dRolloffType
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_3D_ROLLOFF_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_pan_3d_rolloff_type)
 *
 * <br />
 *
 * This enum specifies 3D roll-off values for the Pan DSP.
 * 
 * Minimum and maximum distance settings are controlled with `${constant.FmodDspPan}._3dMinDistance` and `${constant.FmodDspPan}._3dMaxDistance`.
 * 
 * @member LinearSquared A linear-square roll-off model. Below the minimum distance the volume is unattenuated; as distance increases towards the maximum distance the volume attenuates to silence along a linear squared gradient. Ramps more steeply near the minimum distance and more gradually near the maximum distance than linear roll-off.
 * @member Linear A linear roll-off model. Below the minimum distance the volume is unattenuated; as distance increases towards the maximum distance the volume attenuates to silence along a linear gradient. Less realistic than inverse roll-off, but easier to reason about.
 * @member Inverse An inverse roll-off model. Below the minimum distance the volume is unattenuated; above it the volume attenuates using mindistance/distance as the gradient until it reaches the maximum distance, where it stops attenuating. This accurately models the way sounds attenuate over distance in the real world, and is the default.
 * @member InverseTapered A combination of the inverse and linear-square roll-off models. At short distances it behaves as inverse roll-off; at greater distances, where linear-square would attenuate more, it uses that instead. Approximates realistic behaviour while still guaranteeing the sound reaches silence at the maximum distance.
 * @member Custom Custom roll-off, with the volume set manually by the programmer. Attenuation in the Pan DSP is turned off in this mode.
 * @const_end
 */

/**
 * @const FmodDspPan3dExtentModeType
 * @desc > **FMOD Constant:** [FMOD_DSP_PAN_3D_EXTENT_MODE_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_pan_3d_extent_mode_type)
 *
 * <br />
 *
 * This enum specifies 3D Extent Mode values for the Pan DSP.
 * @member Auto Automatically determine the extent.
 * @member User User-defined extent.
 * @member Off No extent.
 * @const_end
 */

/**
 * @const FmodDspObjectPan
 * @desc > **FMOD Constant:** [FMOD_DSP_OBJECTPAN](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_objectpan)
 *
 * <br />
 *
 * This enum specifies object based spatializer parameters.
 * 
 * Signal processed by this DSP is sent to the global object mixer, effectively a send, so any DSP connected after this one receives silence.
 * 
 * For best results use this DSP with `${constant.FmodOutputType}.WinSonic` or `${constant.FmodOutputType}.Audio3D` to get height spatialization. Playback with any other output falls back to the spatialization provided by `${constant.FmodDspType}.Pan`.
 * 
 * @member _3dPosition 3D position.
 * @member _3dRolloff 3D roll-off type - a member of ${constant.FmodDspPan3dRolloffType}.
 * @member _3dMinDistance 3D minimum distance, when `${constant.FmodDspObjectPan}.OverrideRange` is true.
 * @member _3dMaxDistance 3D maximum distance, when `${constant.FmodDspObjectPan}.OverrideRange` is true.
 * @member _3dExtentMode 3D extent mode - a member of ${constant.FmodDspPan3dExtentModeType}.
 * @member _3dSoundSize 3D sound size.
 * @member _3dMinExtent 3D minimum extent.
 * @member OverallGain Overall gain to allow FMOD to know the DSP is scaling the signal for virtualization purposes.
 * @member OutputGain Output gain level.
 * @member AttenuationRange Attenuation range, used when `${constant.FmodDspObjectPan}.OverrideRange` is false.
 * @member OverrideRange Override the attenuation range with `${constant.FmodDspObjectPan}._3dMinDistance` and `${constant.FmodDspObjectPan}._3dMaxDistance`. Defaults to true for backwards compatibility.
 * @const_end
 */

/**
 * @const FmodDspThreeEq
 * @desc > **FMOD Constant:** [FMOD_DSP_THREE_EQ](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_three_eq)
 *
 * <br />
 *
 * This enum specifies three EQ DSP parameter types.
 * @member LowGain Low frequency gain.
 * @member MidGain Mid frequency gain.
 * @member HighGain High frequency gain.
 * @member LowCrossover Low-to-mid crossover frequency.
 * @member HighCrossover Mid-to-high crossover frequency.
 * @member CrossoverSlope Crossover slope type - a member of ${constant.FmodDspThreeEqCrossoverSlopeType}.
 * @const_end
 */

/**
 * @const FmodDspThreeEqCrossoverSlopeType
 * @desc > **FMOD Constant:** [FMOD_DSP_THREE_EQ_CROSSOVERSLOPE_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_three_eq_crossoverslope_type)
 *
 * <br />
 *
 * This enum specifies crossover values for the Three EQ DSP.
 * @member _12db 12dB/octave crossover slope.
 * @member _24db 24dB/octave crossover slope.
 * @member _48db 48dB/octave crossover slope.
 * @const_end
 */

/**
 * @const FmodDspFftDownmixType
 * @desc > **FMOD Constant:** [FMOD_DSP_FFT_DOWNMIX_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_fft_downmix_type)
 *
 * <br />
 *
 * This enum specifies the downmix the FFT DSP applies before analysing the signal.
 * 
 * Selected with `${constant.FmodDspFft}.Downmix`.
 * 
 * @member None Analyze each channel separately.
 * @member Mono Downmix every channel to mono before analyzing.
 * @const_end
 */

/**
 * @const FmodDspLoudnessMeter
 * @desc > **FMOD Constant:** [FMOD_DSP_LOUDNESS_METER](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_loudness_meter)
 *
 * <br />
 *
 * This enum specifies loudness meter DSP parameter types.
 * @member State Update state - a member of ${constant.FmodDspLoudnessMeterStateType}.
 * @member Weighting Channel weighting.
 * @member Info Metering information.
 * @const_end
 */

/**
 * @const FmodDspLoudnessMeterStateType
 * @desc > **FMOD Constant:** [FMOD_DSP_LOUDNESS_METER_STATE_TYPE](https://www.fmod.com/docs/2.03/api/core-api-common-dsp-effects.html#fmod_dsp_loudness_meter_state_type)
 *
 * <br />
 *
 * This enum specifies loudness meter state, indicating update behaviour.
 * @member ResetIntegrated Reset loudness meter information except max peak.
 * @member ResetMaxPeak Reset loudness meter max peak.
 * @member ResetAll Reset all loudness meter information.
 * @member Paused Pause loudness meter.
 * @member Analyzing Enable loudness meter recording and analyzing.
 * @const_end
 */

/**
 * @module constants
 * @title Constants
 * @description These are the constants that you can use in the FMOD extension.
 * 
 * [[Note: All items on this page are [Constants](https://manual.gamemaker.io/monthly/en/GameMaker_Language/GML_Overview/Variables/Constants.htm). However, some are defined as macros in the extension, others as enums. See a constant's description to know its type.]]
 * 
 * @section_const
 * @ref FmodDebugFlags
 * @ref FmodStudioDebugFlags
 * @ref FmodInitFlags
 * @ref FmodDriverState
 * @ref FmodTimeUnit
 * @ref FmodMode
 * @ref FmodStudioMode
 * @ref FmodResult
 * @ref FmodStudioResult
 * @ref FmodOutputType
 * @ref FmodDebugMode
 * @ref FmodStudioDebugMode
 * @ref FmodSpeakerMode
 * @ref FmodSoundType
 * @ref FmodSoundFormat
 * @ref FmodStudioSoundFormat
 * @ref FmodOpenState
 * @ref FmodChannelControlDspIndex
 * @ref FmodDspConnectionType
 * @ref FmodTagType
 * @ref FmodTagDataType
 * @ref FmodDspType
 * @ref FmodDspOscillator
 * @ref FmodDspLowPass
 * @ref FmodDspItLowPass
 * @ref FmodDspHighPass
 * @ref FmodDspEcho
 * @ref FmodDspEchoDelayChangeMode
 * @ref FmodDspFlange
 * @ref FmodDspDistortion
 * @ref FmodDspNormalize
 * @ref FmodDspLimiter
 * @ref FmodDspParamEq
 * @ref FmodDspMultibandEq
 * @ref FmodDspMultibandEqFilterType
 * @ref FmodDspPitchShift
 * @ref FmodDspChorus
 * @ref FmodDspCompressor
 * @ref FmodDspFftWindowType
 * @ref FmodDspFft
 * @ref FmodDspConvolution
 * @ref FmodDspChannelMix
 * @ref FmodDspChannelMixOutput
 * @ref FmodDspTransceiver
 * @ref FmodDspTransceiverSpeakerMode
 * @ref FmodDspFader
 * @ref FmodDspItEcho
 * @ref FmodDspSfxReverb
 * @ref FmodDspLowPassSimple
 * @ref FmodDspHighPassSimple
 * @ref FmodDspDelay
 * @ref FmodDspTremolo
 * @ref FmodDspSend
 * @ref FmodDspReturn
 * @ref FmodDspPan
 * @ref FmodDspPanModeType
 * @ref FmodDspPan2dStereoModeType
 * @ref FmodDspPan3dRolloffType
 * @ref FmodDspPan3dExtentModeType
 * @ref FmodDspObjectPan
 * @ref FmodDspThreeEq
 * @ref FmodDspThreeEqCrossoverSlopeType
 * @ref FmodDspFftDownmixType
 * @ref FmodDspLoudnessMeter
 * @ref FmodDspLoudnessMeterStateType
 * @ref FmodDspMultibandDynamics
 * @ref FmodDspMultibandDynamicsModeType
 * @ref FmodStudioInitFlags
 * @ref FmodStudioParameterFlags
 * @ref FmodStudioEventCallbackType
 * @ref FmodStudioLoadBankFlags
 * @ref FmodStudioCommandCaptureFlags
 * @ref FmodStudioCommandReplayFlags
 * @ref FmodStudioLoadingState
 * @ref FmodStudioUserPropertyType
 * @ref FmodStudioEventProperty
 * @ref FmodStudioPlaybackState
 * @ref FmodStudioStopMode
 * @ref FmodDspOscillatorType
 * @section_end
 * 
 * @module_end
 */
