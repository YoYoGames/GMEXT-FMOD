// Channel

/**
 * @func fmod_channel_set_frequency
 * @desc > **FMOD Function:** [Channel::setFrequency](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_setfrequency)
 *
 * <br />
 *
 * This function sets the frequency or playback rate.
 * 
 * [[Note: The default frequency is determined by the audio format of the [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html) or [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html).]]
 *
 * [[Note: Sounds opened as `FMOD_MODE.CREATESAMPLE` (not `FMOD_MODE.CREATESTREAM` or `FMOD_MODE.CREATECOMPRESSEDSAMPLE`) can be played backwards by giving a negative frequency.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} frequency The playback rate, expressed in Hertz.
 * @func_end
 */
function fmod_channel_set_frequency(channel_ref, frequency) {}


/**
 * @func fmod_channel_get_frequency
 * @desc > **FMOD Function:** [Channel::getFrequency](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_getfrequency)
 *
 * <br />
 *
 * This function retrieves the playback frequency or playback rate.
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_frequency(channel_ref) {}


/**
 * @func fmod_channel_set_priority
 * @desc > **FMOD Function:** [Channel::setPriority](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_setpriority)
 *
 * <br />
 *
 * This function sets the priority used for virtual voice ordering.
 * 
 * [[Note: Priority is used as a coarse grain control for the virtual voice system, lower priority channels will always be stolen before higher ones. For channels of equal priority, those with the quietest ${func.fmod_channel_control_get_audibility} value will be stolen first.]]
 * 
 * See the FMOD [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) guide for more information.
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} priority The priority value where 0 represents most important and 256 represents least important. The default is 128.
 * @func_end
 */
function fmod_channel_set_priority(channel_ref, priority) {}


/**
 * @func fmod_channel_get_priority
 * @desc > **FMOD Function:** [Channel::getPriority](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_getpriority)
 *
 * <br />
 *
 * This function retrieves the priority used for virtual voice ordering.
 * 
 * The function returns the priority value where 0 represents most important and 256 represents least important.
 * 
 * [[Note: Priority is used as a coarse grain control for the virtual voice system, lower priority channels will always be stolen before higher ones. For channels of equal priority, those with the quietest ${func.fmod_channel_control_get_audibility} value will be stolen first.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real} priority
 * @func_end
 */
function fmod_channel_get_priority(channel_ref) {}


/**
 * @func fmod_channel_set_position
 * @desc > **FMOD Function:** [Channel::setPosition](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_setposition)
 *
 * <br />
 *
 * This function sets the current playback position.
 * 
 * [[Note: Certain ${constant.FMOD_TIMEUNIT} types are always available: `FMOD_TIMEUNIT.PCM`, `FMOD_TIMEUNIT.PCMBYTES` and `FMOD_TIMEUNIT.MS`. The others are format specific such as `FMOD_TIMEUNIT.MODORDER` / `FMOD_TIMEUNIT.MODROW` / `FMOD_TIMEUNIT.MODPATTERN` which is specific to files of type MOD / S3M / XM / IT.]]
 * 
 * [[Note: If playing a Sound created with ${func.fmod_system_create_stream} or `FMOD_MODE.CREATESTREAM` changing the position may cause a slow reflush operation while the file seek and decode occurs. You can avoid this by creating the stream with `FMOD_MODE.NONBLOCKING`. This will cause the stream to go into `FMOD_OPENSTATE.SETPOSITION` state (see ${function.fmod_sound_get_open_state}) and Sound commands will return `FMOD_RESULT.ERR_NOTREADY`. ${func.fmod_channel_get_position} will also not update until this non-blocking set position operation has completed.]]
 * 
 * [[Note: Using a VBR source that does not have an associated seek table or seek information (such as MP3 or MOD/S3M/XM/IT) may cause inaccurate seeking if you specify `FMOD_TIMEUNIT.MS` or `FMOD_TIMEUNIT.PCM`. If you want FMOD to create a PCM vs bytes seek table so that seeking is accurate, you will have to specify `FMOD_MODE.ACCURATETIME` when loading or opening the sound. This means there is a slight delay as FMOD scans the whole file when loading the sound to create this table.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} position The playback position.
 * @param {constant.FMOD_TIMEUNIT} time_unit The time units in which the `position` parameter is expressed.
 * @func_end
 */
function fmod_channel_set_position(channel_ref, position, time_unit) {}


/**
 * @func fmod_channel_get_position
 * @desc > **FMOD Function:** [Channel::getPosition](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_getposition)
 *
 * <br />
 *
 * This function retrieves the current playback position.
 * 
 * [[Note: Certain ${constant.FMOD_TIMEUNIT} types are always available: `FMOD_TIMEUNIT.PCM`, `FMOD_TIMEUNIT.PCMBYTES` and `FMOD_TIMEUNIT.MS`. The others are format specific such as `FMOD_TIMEUNIT.MODORDER` / `FMOD_TIMEUNIT.MODROW` / `FMOD_TIMEUNIT.MODPATTERN` which is specific to files of type MOD / S3M / XM / IT.]]
 * 
 * [[Note: If `FMOD_TIMEUNIT.MS` or `FMOD_TIMEUNIT.PCMBYTES` are used, the value is internally converted from `FMOD_TIMEUNIT.PCM`, so the retrieved value may not exactly match the set value.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {constant.FMOD_TIMEUNIT} time_unit The time units in which the `position` parameter is expressed.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_position(channel_ref, time_unit) {}


/**
 * @func fmod_channel_set_channel_group
 * @desc > **FMOD Function:** [Channel::setChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_setchannelgroup)
 *
 * <br />
 *
 * This function sets the channelgroup this object outputs to.
 * 
 * [[Note: A channelgroup may contain many channels.]]
 * 
 * [[Note: Channels may only output to a single channelgroup. This operation will remove it from the previous group first.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} channel_group_ref A reference to the channelgroup to use as the output group.
 * @func_end
 */
function fmod_channel_set_channel_group(channel_ref, channel_group_ref) {}


/**
 * @func fmod_channel_get_channel_group
 * @desc > **FMOD Function:** [Channel::getChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_getchannelgroup)
 *
 * <br />
 *
 * This function retrieves the ChannelGroup this object outputs to.
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_channel_group(channel_ref) {}


/**
 * @func fmod_channel_set_loop_count
 * @desc > **FMOD Function:** [Channel::setLoopCount](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_setloopcount)
 *
 * <br />
 *
 * This function sets the number of times to loop before stopping.
 * 
 * [[Note: The 'mode' of the sound or channel must be `FMOD_MODE.LOOP_NORMAL` or `FMOD_MODE.LOOP_BIDI` for this function to work.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} loop_count The number of times to loop before stopping where 0 represents "oneshot", 1 represents "loop once then stop" and -1 represents "loop forever".
 * @func_end
 */
function fmod_channel_set_loop_count(channel_ref, loop_count) {}


/**
 * @func fmod_channel_get_loop_count
 * @desc > **FMOD Function:** [Channel::getLoopCount](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_getloopcount)
 *
 * <br />
 *
 * This function retrieves the number of times to loop before stopping.
 * 
 * The returned value is the times to loop before stopping where 0 represents "oneshot", 1 represents "loop once then stop" and -1 represents "loop forever".
 * 
 * [[Note: This is the current loop countdown value that will decrement as it plays until reaching 0. You can reset it with ${func.fmod_channel_set_loop_count}.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_loop_count(channel_ref) {}


/**
 * @func fmod_channel_set_loop_points
 * @desc > **FMOD Function:** [Channel::setLoopPoints](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_setlooppoints)
 *
 * <br />
 *
 * This function sets the loop start and end points.
 * 
 * Loop points may only be set on a channel playing a sound, not a channel playing a DSP (See ${function.fmod_system_play_dsp}).
 * 
 * [[Note: Valid ${constant.FMOD_TIMEUNIT} types are `FMOD_TIMEUNIT.PCM`, `FMOD_TIMEUNIT.MS`, `FMOD_TIMEUNIT.PCMBYTES`. Any other time units return `FMOD_RESULT.ERR_FORMAT`.
 * If `FMOD_TIMEUNIT.MS` or `FMOD_TIMEUNIT.PCMBYTES` are used, the value is internally converted from `FMOD_TIMEUNIT.PCM`, so the retrieved value may not exactly match the set value.]]
 * 
 * The Channel's mode must be set to `FMOD_MODE.LOOP_NORMAL` or `FMOD_MODE.LOOP_BIDI` for loop points to affect playback.
 * 
 * See also: [Streaming Issues](https://www.fmod.com/docs/2.03/api/glossary.html#streaming-issues)
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} loop_start The loop start point.
 * @param {constant.FMOD_TIMEUNIT} loop_start_type The time units in which the `loop_start` parameter is expressed.
 * @param {real} loop_end The loop end point.
 * @param {constant.FMOD_TIMEUNIT} loop_end_type The time units in which the `loop_end` parameter is expressed.
 * @func_end
 */
function fmod_channel_set_loop_points(channel_ref, loop_start, loop_start_type, loop_end, loop_end_type) {}


/**
 * @func fmod_channel_get_loop_points
 * @desc > **FMOD Function:** [Channel::getLoopPoints](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_getlooppoints)
 *
 * <br />
 *
 * This function retrieves the loop start and end points.
 * 
 * [[Note: Valid ${constant.FMOD_TIMEUNIT} types are `FMOD_TIMEUNIT.PCM`, `FMOD_TIMEUNIT.MS`, `FMOD_TIMEUNIT.PCMBYTES`. For all other time units ${function.fmod_last_result} returns `FMOD_RESULT.ERR_FORMAT`.
 * If `FMOD_TIMEUNIT.MS` or `FMOD_TIMEUNIT.PCMBYTES` are used, the value is internally converted from `FMOD_TIMEUNIT.PCM`, so the retrieved value may not exactly match the set value.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {constant.FMOD_TIMEUNIT} loop_start_type The time units in which to return `loop_start`
 * @param {constant.FMOD_TIMEUNIT} loop_end_type The time units in which to return `loop_end`
 * @returns {struct.FmodLoopPoints}
 * @func_end
 */
function fmod_channel_get_loop_points(channel_ref, loop_start_type, loop_end_type) {}


/**
 * @func fmod_channel_is_virtual
 * @desc > **FMOD Function:** [Channel::isVirtual](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_isvirtual)
 *
 * <br />
 *
 * This function retrieves whether the channel is being emulated by the virtual voice system.
 * 
 * If `true` is returned, the channel is silent / emulated. If `false` is returned, the channel is audible / real.
 * 
 * See the FMOD [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) guide for more information.
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {boolean}
 * @func_end
 */
function fmod_channel_is_virtual(channel_ref) {}


/**
 * @func fmod_channel_get_current_sound
 * @desc > **FMOD Function:** [Channel::getCurrentSound](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_getcurrentsound)
 *
 * <br />
 *
 * This function retrieves the currently playing sound.
 * 
 * [[Note: The function may return 0 if no sound is playing.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_current_sound(channel_ref) {}


/**
 * @func fmod_channel_get_index
 * @desc > **FMOD Function:** [Channel::getIndex](https://www.fmod.com/docs/2.03/api/core-api-channel.html#channel_getindex)
 *
 * <br />
 *
 * This function retrieves the index of this object in the system channel pool.
 * 
 * [[Note: This value is in the range \[0, `max_channels` value passed to ${func.fmod_system_init} - 1\].]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_index(channel_ref) {}


/**
 * @func fmod_channel_get_system_object
 * @desc > **FMOD Function:** [ChannelControl::getSystemObject](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getsystemobject)
 * 
 * <br />
 * 
 * This function retrieves the system that created this object.
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_system_object(channel_ref) {}

// Channel Control

/**
 * @func fmod_channel_control_is_playing
 * @desc > **FMOD Function:** [ChannelControl::isPlaying](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_isplaying)
 *
 * <br />
 *
 * This function retrieves the playing state.
 * 
 * [[Note: A channel is considered playing after ${function.fmod_system_play_sound} or ${function.fmod_system_play_dsp}, even if it is paused.]]
 * 
 * [[Note: A channelgroup is considered playing if it has any playing channels.]]
 * 
 * @param {real} channel_control_ref A reference to a channelcontrol.
 * @returns {boolean}
 * @func_end
 */
function fmod_channel_control_is_playing(channel_control_ref) {}


/**
 * @func fmod_channel_control_stop
 * @desc > **FMOD Function:** [ChannelControl::stop](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_stop)
 *
 * <br />
 *
 * This function stops the channel (or all channels in nested channelgroups) from playing.
 * 
 * This will free up internal resources for reuse by the virtual voice system.
 * 
 * [[Note: Channels are stopped automatically when their playback position reaches the length of the sound being played. This is not the case however if the channel is playing a DSP or the sound is looping, in which case the channel will continue playing until stop is called. Once stopped, the channel handle will become invalid and can be discarded and any API calls made with it will return `FMOD_RESULT.ERR_INVALID_HANDLE`.]]
 * 
 * @param {real} channel_control_ref A reference to a channelcontrol.
 * @func_end
 */
function fmod_channel_control_stop(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_paused
 * @desc > **FMOD Function:** [ChannelControl::setPaused](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setpaused)
 *
 * <br />
 *
 * This function sets the paused state.
 * 
 * Pause halts playback which effectively freezes ${func.fmod_channel_get_position} and ${function.fmod_channel_control_get_dsp_clock} values.
 * 
 * [[Note: An individual pause state is kept for each object, pausing a parent channelgroup will effectively pause this object however when queried the individual pause state is returned.]]
 * 
 * @param {real} channel_control_ref A reference to a channelcontrol.
 * @param {boolean} paused Paused state. A value of `true` indicates playback halted. A value of `false` indicates playback active.
 * @func_end
 */
function fmod_channel_control_set_paused(channel_control_ref, paused) {}


/**
 * @func fmod_channel_control_get_paused
 * @desc > **FMOD Function:** [ChannelControl::getPaused](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getpaused)
 *
 * <br />
 *
 * This function retrieves the paused state.
 * 
 * [[Note: An individual pause state is kept for each object, pausing a parent channelgroup will effectively pause this object however when queried the individual pause state is returned.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {boolean} Paused state. A value of `true` indicates playback halted. A value of `false` indicates playback active.
 * @func_end
 */
function fmod_channel_control_get_paused(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_mode
 * @desc > **FMOD Function:** [ChannelControl::setMode](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setmode)
 *
 * <br />
 *
 * This function sets the playback mode that controls how this object behaves.
 * 
 * The supported modes are: 
 * 
 * * `FMOD_MODE.LOOP_OFF`
 * * `FMOD_MODE.LOOP_NORMAL`
 * * `FMOD_MODE.LOOP_BIDI`
 * * `FMOD_MODE.2D`
 * * `FMOD_MODE.3D`
 * * `FMOD_MODE.3D_HEADRELATIVE`
 * * `FMOD_MODE.3D_WORLDRELATIVE`
 * * `FMOD_MODE.3D_INVERSEROLLOFF`
 * * `FMOD_MODE.3D_LINEARROLLOFF`
 * * `FMOD_MODE.3D_LINEARSQUAREROLLOFF`
 * * `FMOD_MODE.3D_INVERSETAPEREDROLLOFF`
 * * `FMOD_MODE.3D_CUSTOMROLLOFF`
 * * `FMOD_MODE.3D_IGNOREGEOMETRY`
 * * `FMOD_MODE.VIRTUAL_PLAYFROMSTART`
 * 
 * When changing the loop mode, sounds created with ${function.fmod_system_create_stream} or `FMOD_MODE.CREATESTREAM` may have already been pre-buffered and executed their loop logic ahead of time before this call was even made. This is dependent on the size of the sound versus the size of the stream decode buffer (see ${struct.FmodSystemCreateSoundExInfo}). If this happens, you may need to reflush the stream buffer by calling ${function.fmod_channel_set_position}. Note this will usually only happen if you have sounds or loop points that are smaller than the stream decode buffer size.
 * 
 * When changing the loop mode of sounds created with ${function.fmod_system_create_sound} or `FMOD_MODE.CREATESAMPLE`, if the sound was set up as `FMOD_MODE.LOOP_OFF`, then set to `FMOD_MODE.LOOP_NORMAL` with this function, the sound may click when playing the end of the sound. This is because the sound needs to be prepared for looping using ${function.fmod_sound_set_mode}, by modifying the content of the PCM data (i.e. data past the end of the actual sample data) to allow the interpolators to read ahead without clicking. If you use ${function.fmod_channel_control_set_mode} it will not do this (because different Channels may have different loop modes for the same sound) and may click if you try to set it to looping on an unprepared sound. If you want to change the loop mode at runtime it may be better to load the sound as looping first (or use ${function.fmod_sound_set_mode}), to let it prepare the data as if it was looping so that it does not click whenever ${function.fmod_channel_control_set_mode} is used to turn looping on.
 * 
 * If `FMOD_MODE.3D_IGNOREGEOMETRY` or `FMOD_MODE.VIRTUAL_PLAYFROMSTART` is not specified, the flag will be cleared if it was specified previously.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {constant.FMOD_MODE} mode The playback mode. More than one mode can be set at once by combining them with the OR operator. The default is `FMOD_MODE.DEFAULT`.
 * @func_end
 */
function fmod_channel_control_set_mode(channel_control_ref, mode) {}


/**
 * @func fmod_channel_control_get_mode
 * @desc > **FMOD Function:** [ChannelControl::getMode](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getmode)
 *
 * <br />
 *
 * This function retrieves the playback mode bits that control how this object behaves.
 * 
 * You can test the playback mode bitfield against a specific ${constant.FMOD_MODE} with the AND operator.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_mode(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_pitch
 * @desc > **FMOD Function:** [ChannelControl::setPitch](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setpitch)
 *
 * <br />
 *
 * This function sets the relative pitch / playback rate.
 * 
 * It scales the playback frequency of a Channel or if issued on a ChannelGroup it scales the frequencies of all Channels contained in the ChannelGroup.
 * 
 * [[Note: An individual pitch value is kept for each object, changing the pitch of a parent ChannelGroup will effectively alter the pitch of this object however when queried the individual pitch value is returned.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} pitch The pitch value where 0.5 represents half pitch (one octave down), 1.0 represents unmodified pitch and 2.0 represents double pitch (one octave up).
 * @func_end
 */
function fmod_channel_control_set_pitch(channel_control_ref, pitch) {}


/**
 * @func fmod_channel_control_get_pitch
 * @desc > **FMOD Function:** [ChannelControl::getPitch](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getpitch)
 *
 * <br />
 *
 * This function retrieves the relative pitch / playback rate.
 * 
 * The pitch is a value where 0.5 represents half pitch (one octave down), 1 represents unmodified pitch and 2 represents double pitch (one octave up).
 * 
 * [[Note: An individual pitch value is kept for each object, a parent ChannelGroup pitch will effectively scale the pitch of this object however when queried the individual pitch value is returned.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_pitch(channel_control_ref) {}


/**
 * @func fmod_channel_control_get_audibility
 * @desc > **FMOD Function:** [ChannelControl::getAudibility](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getaudibility)
 *
 * <br />
 *
 * This function retrieves an estimation of the output volume.
 * 
 * The estimated volume is calculated based on 3D spatialization, occlusion, API volume levels and DSPs used.
 * 
 * While this does not represent the actual waveform, Channels playing FSB files will take into consideration the overall peak level of the file (if available).
 * 
 * This value is used to determine which Channels should be audible and which Channels to virtualize when resources are limited.
 * 
 * See the FMOD [Virtual Voice System](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html#audibility-calculation) white paper for more details about how audibility is calculated.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_audibility(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_volume
 * @desc > **FMOD Function:** [ChannelControl::setVolume](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setvolume)
 *
 * <br />
 *
 * This function sets the volume level.
 * 
 * [[Note: To define the volume per Sound use ${function.fmod_sound_set_defaults}.]]
 * 
 * [[Note: Setting `volume` at a level higher than 1 can lead to distortion/clipping.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} volume The (linear) volume level. 0 = silent, 1 = full. A negative level inverts the signal. Values larger than 1 amplify the signal. Default is 1.
 * @func_end
 */
function fmod_channel_control_set_volume(channel_control_ref, volume) {}


/**
 * @func fmod_channel_control_get_volume
 * @desc > **FMOD Function:** [ChannelControl::getVolume](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getvolume)
 *
 * <br />
 *
 * This function retrieves the (linear) volume level.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_volume(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_volume_ramp
 * @desc > **FMOD Function:** [ChannelControl::setVolumeRamp](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setvolumeramp)
 *
 * <br />
 *
 * This function sets whether volume changes are ramped or instantaneous.
 * 
 * Volume changes when not paused will be ramped to the target value to avoid a pop sound, this function allows that setting to be overridden and volume changes to be applied immediately.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {boolean} ramp The ramp state. A value of `true` means volume change is ramped. A value of `false` means volume change is instantaneous. Default is `true`.
 * @func_end
 */
function fmod_channel_control_set_volume_ramp(channel_control_ref, ramp) {}


/**
 * @func fmod_channel_control_get_volume_ramp
 * @desc > **FMOD Function:** [ChannelControl::getVolumeRamp](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getvolumeramp)
 *
 * <br />
 *
 * This function retrieves whether volume changes are ramped or instantaneous.
 * 
 * It returns the ramp state. A value of `true` means volume change is ramped. A value of `false` means volume change is instantaneous.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_volume_ramp(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_mute
 * @desc > **FMOD Function:** [ChannelControl::setMute](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setmute)
 *
 * <br />
 *
 * This function sets the mute state.
 * 
 * Mute is an additional control for volume, the effect of which is equivalent to setting the volume to zero.
 * 
 * [[Note: An individual mute state is kept for each object, muting a parent ChannelGroup will effectively mute this object however when queried the individual mute state is returned. ${function.fmod_channel_control_get_audibility} can be used to calculate overall audibility for a Channel or ChannelGroup.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {boolean} mute The mute state to set. A value of `true` means silent. A value of `false` means audible.
 * @func_end
 */
function fmod_channel_control_set_mute(channel_control_ref, mute) {}


/**
 * @func fmod_channel_control_get_mute
 * @desc > **FMOD Function:** [ChannelControl::getMute](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getmute)
 *
 * <br />
 *
 * This function retrieves the mute state.
 * 
 * The mute state is a value where `true` indicates silent and `false` indicates audible.
 * 
 * [[Note: An individual mute state is kept for each object, muting a parent ChannelGroup will effectively mute this object however when queried the individual mute state is returned. ${function.fmod_channel_control_get_audibility} can be used to calculate overall audibility for a Channel or ChannelGroup.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {boolean}
 * @func_end
 */
function fmod_channel_control_get_mute(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_attributes
 * @desc > **FMOD Function:** [ChannelControl::set3DAttributes](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3dattributes)
 *
 * <br />
 *
 * This function sets the 3D position and velocity used to apply panning, attenuation and doppler.
 * 
 * [[Note: The `FMOD_MODE.AS_3D` flag must be set on this object otherwise `FMOD_RESULT.ERR_NEEDS3D` is returned.]]
 * 
 * [[Note: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.03/api/glossary.html#handedness).]]
 * 
 * [[Note: For a stereo 3D sound, you can set the spread of the left/right parts in speaker space by using ${function.fmod_channel_control_set_3d_spread}.]]
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {struct.FmodVector} pos The position in 3D space used for panning and attenuation. The values are expressed in FMOD [Distance Units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units).
 * @param {struct.FmodVector} vel The velocity in 3D space used for doppler. The values are expressed in FMOD [Distance Units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units) per second.
 * @func_end
 */
function fmod_channel_control_set_3d_attributes(channel_control_ref, pos, vel) {}


/**
 * @func fmod_channel_control_get_3d_attributes
 * @desc > **FMOD Function:** [ChannelControl::get3DAttributes](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3dattributes)
 *
 * <br />
 *
 * This function retrieves the 3D position and velocity used to apply panning, attenuation and doppler.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControl3DAttributes}
 * @func_end
 */
function fmod_channel_control_get_3d_attributes(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_cone_orientation
 * @desc > **FMOD Function:** [ChannelControl::set3DConeOrientation](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3dconeorientation)
 *
 * <br />
 *
 * This function sets the orientation of a 3D cone shape, used for simulated occlusion.
 * 
 * [[Note: The `FMOD_MODE.AS_3D` flag must be set on this object otherwise `FMOD_RESULT.ERR_NEEDS3D` is returned.]]
 * 
 * [[Note: This function has no effect unless ${function.fmod_channel_control_set_3d_cone_settings} has been used to change the cone inside/outside angles from the default.]]
 * 
 * [[Note: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.03/api/glossary.html#handedness).]]
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {struct.FmodVector} orientation The normalized orientation vector, which represents the direction of the sound cone. Default is [0, 0, 1].
 * @func_end
 */
function fmod_channel_control_set_3d_cone_orientation(channel_control_ref, orientation) {}


/**
 * @func fmod_channel_control_get_3d_cone_orientation
 * @desc > **FMOD Function:** [ChannelControl::get3DConeOrientation](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3dconeorientation)
 *
 * <br />
 *
 * This function retrieves the orientation of a 3D cone shape, used for simulated occlusion.
 * 
 * The orientation is returned as a normalized orientation vector, which represents the direction of the sound cone.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodVector}
 * @func_end
 */
function fmod_channel_control_get_3d_cone_orientation(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_cone_settings
 * @desc > **FMOD Function:** [ChannelControl::set3DConeSettings](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3dconesettings)
 *
 * <br />
 *
 * This function sets the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * 
 * When ${function.fmod_channel_control_set_3d_cone_orientation} is used and a 3D 'cone' is set up, attenuation will automatically occur for a sound based on the relative angle of the direction the cone is facing, vs the angle between the sound and the listener.
 *
 * * If the relative angle is within the `inside_cone_angle`, the sound will not have any attenuation applied.
 * * If the relative angle is between the `inside_cone_angle` and `outside_cone_angle`, linear volume attenuation (between 1 and `outsidevolume`) is applied between the two angles until it reaches the `outside_cone_angle`.
 * * If the relative angle is outside of the `outside_cone_angle` the volume does not attenuate any further.
 * 
 * [[Note: The `FMOD_MODE.AS_3D` flag must be set on this object otherwise ${function.fmod_last_result} will return `FMOD_RESULT.ERR_NEEDS3D`.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} inside_cone_angle The inside cone angle. This is the angle spread within which the sound is unattenuated, expressed in degrees. The default value is 360.
 * @param {real} outside_cone_angle The outside cone angle. This is the angle spread outside of which the sound is attenuated to its `outside_volume`, expressed in degrees. The default value is 360.
 * @param {real} outside_volume The cone outside volume. A (linear) value in the range [0, 1]. Default is 1.
 * @func_end
 */
function fmod_channel_control_set_3d_cone_settings(channel_control_ref, inside_cone_angle, outside_cone_angle, outside_volume) {}


/**
 * @func fmod_channel_control_get_3d_cone_settings
 * @desc > **FMOD Function:** [ChannelControl::get3DConeSettings](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3dconesettings)
 *
 * <br />
 *
 * This function retrieves the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * 
 * When ${function.fmod_channel_control_set_3d_cone_orientation} is used and a 3D 'cone' is set up, attenuation will automatically occur for a sound based on the relative angle of the direction the cone is facing, vs the angle between the sound and the listener.
 * 
 * * If the relative angle is within the `inside_cone_angle`, the sound will not have any attenuation applied.
 * * If the relative angle is between the `inside_cone_angle` and `outside_cone_angle`, linear volume attenuation (between 1 and `outsidevolume`) is applied between the two angles until it reaches the `outside_cone_angle`.
 * * If the relative angle is outside of the `outside_cone_angle` the volume does not attenuate any further.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.Fmod3DConeSettings}
 * @func_end
 */
function fmod_channel_control_get_3d_cone_settings(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_custom_rolloff
 * @desc > **FMOD Function:** [ChannelControl::set3DCustomRolloff](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3dcustomrolloff)
 *
 * <br />
 *
 * This function sets a custom roll-off shape for 3D distance attenuation.
 * 
 * [[Note: This function must be used in conjunction with `FMOD_MODE._AS_3D_CUSTOMROLLOFF` flag to be activated.]]
 * 
 * If `FMOD_MODE._AS_3D_CUSTOMROLLOFF` is set and the roll-off shape is not set, FMOD will revert to `FMOD_MODE.AS_3D_INVERSETAPEREDROLLOFF` roll-off mode.
 * 
 * When a custom roll-off is specified a Channel or ChannelGroup's 3D 'minimum' and 'maximum' distances are ignored.
 * 
 * The distance in-between point values is linearly interpolated until the final point where the last value is held.
 * 
 * If the points are not sorted by distance, an error will result.
 * 
 * ```gml
 * // Defining a custom array of points
 * curve = 
 * {
 *     { x:  0, y: 1, z: 0 },
 *     { x:  2, y: 2, z: 0 },
 *     { x: 20, y: 0, z: 0 }
 * };
 * ```
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {array[struct.FmodVector]} points An array of vectors sorted by distance, where `x` = distance and `y` = volume from 0 to 1. `z` should be set to 0. Pass an empty array to disable custom rolloff.
 * @func_end
 */
function fmod_channel_control_set_3d_custom_rolloff(channel_control_ref, points) {}


/**
 * @func fmod_channel_control_get_3d_custom_rolloff
 * @desc > **FMOD Function:** [ChannelControl::get3DCustomRolloff](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3dcustomrolloff)
 *
 * <br />
 *
 * This function retrieves the current custom roll-off shape for 3D distance attenuation.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {array[struct.FmodVector]}
 * @func_end
 */
function fmod_channel_control_get_3d_custom_rolloff(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_distance_filter
 * @desc > **FMOD Function:** [ChannelControl::set3DDistanceFilter](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3ddistancefilter)
 *
 * <br />
 *
 * This function sets an override value for the 3D distance filter.
 * 
 * If distance filtering is enabled, by default the FMOD 3D engine will automatically attenuate frequencies using a lowpass and a highpass filter, based on 3D distance.
 * This function allows the distance filter effect to be set manually, or to be set back to 'automatic' mode.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {boolean} custom Whether to override automatic distance filtering and use `custom_level` instead. Default is `false`.
 * @param {real} custom_level The attenuation factor where 1 represents no attenuation and 0 represents complete attenuation. The default value is 1.
 * @param {real} center_freq The center frequency, in Hertz, of the band-pass filter used to simulate distance attenuation, 0 for default. This must be a value in the range [10, 22050].
 * @func_end
 */
function fmod_channel_control_set_3d_distance_filter(channel_control_ref, custom, custom_level, center_freq) {}


/**
 * @func fmod_channel_control_get_3d_distance_filter
 * @desc > **FMOD Function:** [ChannelControl::get3DDistanceFilter](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3ddistancefilter)
 *
 * <br />
 *
 * This function retrieves the override values for the 3D distance filter.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControl3DDistanceFilter}
 * @func_end
 */
function fmod_channel_control_get_3d_distance_filter(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_doppler_level
 * @desc > **FMOD Function:** [ChannelControl::set3DDopplerLevel](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3ddopplerlevel)
 *
 * <br />
 *
 * This function sets the amount by which doppler is scaled.
 * 
 * The doppler effect will be disabled if ${function.fmod_system_set_3d_num_listeners} is given a value greater than 1.
 * 
 * [[Note: The `FMOD_MODE.AS_3D` flag must be set on this object otherwise `FMOD_RESULT.ERR_NEEDS3D` is returned.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} level Doppler scale where 0 represents no doppler, 1 represents natural doppler and 5 represents exaggerated doppler. The default value is 1.
 * @func_end
 */
function fmod_channel_control_set_3d_doppler_level(channel_control_ref, level) {}


/**
 * @func fmod_channel_control_get_3d_doppler_level
 * @desc > **FMOD Function:** [ChannelControl::get3DDopplerLevel](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3ddopplerlevel)
 *
 * <br />
 *
 * This function retrieves the amount by which doppler is scaled.
 * 
 * The value returned is the doppler level, on a scale where 0 represents no doppler, 1 represents natural doppler and 5 represents exaggerated doppler.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_3d_doppler_level(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_level
 * @desc > **FMOD Function:** [ChannelControl::set3DLevel](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3dlevel)
 *
 * <br />
 *
 * This function sets the blend between 3D panning and 2D panning.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} level The 3D pan level where 0 represents panning/attenuating solely with 2D panning functions and 1 represents solely 3D.
 * @func_end
 */
function fmod_channel_control_set_3d_level(channel_control_ref, level) {}


/**
 * @func fmod_channel_control_get_3d_level
 * @desc > **FMOD Function:** [ChannelControl::get3DLevel](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3dlevel)
 *
 * <br />
 *
 * This function retrieves the blend between 3D panning and 2D panning.
 * 
 * The value returned is the (linear) 3D pan level where 0 represents panning/attenuating solely with 2D panning functions and 1 represents solely 3D.
 * 
 * [[Note: The `FMOD_MODE.AS_3D` flag must be set on this object otherwise `FMOD_RESULT.ERR_NEEDS3D` is returned.]]
 * 
 * The 2D functions include: 
 * 
 * * ${function.fmod_channel_control_set_pan}
 * * ${function.fmod_channel_control_set_mix_levels_output}
 * * ${function.fmod_channel_control_set_mix_levels_input}
 * * ${function.fmod_channel_control_set_mix_matrix}
 * 
 * The 3D functions include:
 * 
 * * ${function.fmod_channel_control_set_3d_attributes}
 * * ${function.fmod_channel_control_set_3d_cone_orientation}
 * * ${function.fmod_channel_control_set_3d_custom_rolloff}
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_3d_level(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_min_max_distance
 * @desc > **FMOD Function:** [ChannelControl::set3DMinMaxDistance](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3dminmaxdistance)
 *
 * <br />
 *
 * This function sets the minimum and maximum distances used to calculate the 3D roll-off attenuation.
 * 
 * When the listener is within the minimum distance of the sound source the 3D volume will be at its maximum. As the listener moves from the minimum distance to the maximum distance the sound will attenuate following the roll-off curve set. When outside the maximum distance the sound will no longer attenuate.
 * 
 * Attenuation in 3D space is controlled by the roll-off mode, which can be one of `FMOD_MODE.AS_3D_INVERSEROLLOFF`, `FMOD_MODE.AS_3D_LINEARROLLOFF`, `FMOD_MODE.AS_3D_LINEARSQUAREROLLOFF`, `FMOD_MODE.AS_3D_INVERSETAPEREDROLLOFF`, `FMOD_MODE.AS_3D_CUSTOMROLLOFF`.
 * 
 * Minimum distance is useful to give the impression that the sound is loud or soft in 3D space.
 * A sound with a small 3D minimum distance in a typical (non custom) roll-off mode will make the sound appear small, and the sound will attenuate quickly.
 * A sound with a large minimum distance will make the sound appear larger.
 * 
 * The `FMOD_MODE.AS_3D` flag must be set on this object otherwise ${function.fmod_last_result} will return `FMOD_RESULT.ERR_NEEDS3D`.
 * 
 * To define the min and max distance per Sound instead of Channel or ChannelGroup use ${function.fmod_sound_set_3d_min_max_distance}.
 * 
 * If `FMOD_MODE.AS_3D_CUSTOMROLLOFF` has been set on this object these values are stored, but ignored in 3D processing.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} min The distance from the source where attenuation begins. A value in the range [0, `max`]. Default is 1.
 * @param {real} max The distance from the source where attenuation ends. A value in the range [`min`, `infinity`]. Default is 10000.
 * @func_end
 */
function fmod_channel_control_set_3d_min_max_distance(channel_control_ref, min, max) {}


/**
 * @func fmod_channel_control_get_3d_min_max_distance
 * @desc > **FMOD Function:** [ChannelControl::get3DMinMaxDistance](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3dminmaxdistance)
 *
 * <br />
 *
 * This function retrieves the minimum and maximum distances used to calculate the 3D roll-off attenuation.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControl3DMinMaxDistance}
 * @func_end
 */
function fmod_channel_control_get_3d_min_max_distance(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_occlusion
 * @desc > **FMOD Function:** [ChannelControl::set3DOcclusion](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3docclusion)
 *
 * <br />
 *
 * This function sets the 3D attenuation factors for the direct and reverb paths.
 * 
 * There is a reverb path/send when ${function.fmod_channel_control_set_reverb_properties} has been used, `reverb_occlusion` controls its attenuation.
 * 
 * If the System has been initialized with `FMOD_INIT.CHANNEL_DISTANCEFILTER` or `FMOD_INIT.CHANNEL_LOWPASS` the `direct_occlusion` is applied as frequency filtering rather than volume attenuation.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} direct_occlusion The occlusion factor for the direct path where 0 represents no occlusion and 1 represents full occlusion. Default is 0.
 * @param {real} reverb_occlusion Occlusion factor for the reverb path where 0 represents no occlusion and 1 represents full occlusion. Default is 0.
 * @func_end
 */
function fmod_channel_control_set_3d_occlusion(channel_control_ref, direct_occlusion, reverb_occlusion) {}


/**
 * @func fmod_channel_control_get_3d_occlusion
 * @desc > **FMOD Function:** [ChannelControl::get3DOcclusion](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3docclusion)
 *
 * <br />
 *
 * This function retrieves the 3D attenuation factors for the direct and reverb paths.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControl3DOcclusion}
 * @func_end
 */
function fmod_channel_control_get_3d_occlusion(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_spread
 * @desc > **FMOD Function:** [ChannelControl::set3DSpread](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_set3dspread)
 *
 * <br />
 *
 * This function sets the spread of a 3D sound in speaker space.
 * 
 * When the spread angle is 0 (default) a multi-channel signal will collapse to mono and be spatialized to a single point based on ${function.fmod_channel_control_set_3d_attributes} calculations. As the angle is increased, each channel within a multi-channel signal will be rotated away from that point. For 2, 4, 6, 8, and 12 channel signals, the spread is arranged from leftmost speaker to rightmost speaker intelligently, for example in 5.1 the leftmost speaker is rear left, followed by front left, center, front right then finally rear right as the rightmost speaker (LFE is not spread). For other channel counts the individual channels are spread evenly in the order of the signal. As the signal is spread the power will be preserved.
 * 
 * For a stereo signal given different spread angles:
 *
 * * 0: Sound is collapsed to mono and spatialized to a single point.
 * * 90: Left channel is rotated 45 degrees to the left compared with angle=0 and the right channel 45 degrees to the right.
 * * 180: Left channel is rotated 90 degrees to the left compared with angle=0 and the right channel 90 degrees to the right.
 * * 360: Left channel is rotated 180 degrees to the left and the right channel 180 degrees to the right. This means the sound is collapsed to mono and spatialized to a single point in the opposite direction compared with (angle=0).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} angle The angle (in degrees) over which the sound is spread. The default value is 0.
 * @func_end
 */
function fmod_channel_control_set_3d_spread(channel_control_ref, angle) {}


/**
 * @func fmod_channel_control_get_3d_spread
 * @desc > **FMOD Function:** [ChannelControl::get3DSpread](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_get3dspread)
 *
 * <br />
 *
 * This function retrieves the spread of a 3D sound in speaker space.
 * 
 * It returns the angle (in degrees) over which the sound is spread.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_3d_spread(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_pan
 * @desc > **FMOD Function:** [ChannelControl::setPan](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setpan)
 *
 * <br />
 *
 * This function sets the left/right pan level.
 * 
 * This is a convenience function to avoid passing a matrix, it will overwrite values set via ${function.fmod_channel_control_set_mix_levels_input}, ${function.fmod_channel_control_set_mix_levels_output} and ${function.fmod_system_set_software_format}.
 * 
 * Mono inputs are panned from left to right using constant power panning (non linear fade). Stereo and greater inputs will isolate the front left and right input channels and fade them up and down based on the pan value (silencing other channels). The output channel count will always match the System speaker mode set via ${function.fmod_system_set_software_format}.
 * 
 * [[Note: If the System is initialized with `FMOD_SPEAKERMODE.RAW` calling this function will produce silence.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} pan The pan level where -1 represents full left, 0 represents center and 1 represents full right. Default is 0.
 * @func_end
 */
function fmod_channel_control_set_pan(channel_control_ref, pan) {}


/**
 * @func fmod_channel_control_set_mix_levels_input
 * @desc > **FMOD Function:** [ChannelControl::setMixLevelsInput](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setmixlevelsinput)
 *
 * <br />
 *
 * This function sets the incoming volume level for each channel of a multi-channel signal.
 * 
 * This is a convenience function to avoid passing a matrix, it will overwrite values set via ${function.fmod_channel_control_set_pan}, ${function.fmod_channel_control_set_mix_levels_output} and ${function.fmod_channel_control_set_mix_matrix}.
 * 
 * [[Note: This is currently only supported for Channel, not ChannelGroup.]]
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {array[real]} levels An array of volume levels for each incoming channel. Volume level. 0 = silent, 1 = full. A negative level inverts the signal. Values larger than 1 amplify the signal.
 * @func_end
 */
function fmod_channel_control_set_mix_levels_input(channel_control_ref, levels) {}


/**
 * @func fmod_channel_control_set_mix_levels_output
 * @desc > **FMOD Function:** [ChannelControl::setMixLevelsOutput](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setmixlevelsoutput)
 *
 * <br />
 *
 * This function sets the outgoing volume levels for each speaker.
 * 
 * Specify the level for a given output speaker, if the channel count of the input and output do not match, channels will be up/down mixed as appropriate to approximate the given speaker values. For example stereo input with 5.1 output will use the `center` parameter to distribute signal to the center speaker from front left and front right channels.
 * 
 * This is a convenience function to avoid passing a matrix, it will overwrite values set via ${function.fmod_channel_control_set_pan}, ${function.fmod_channel_control_set_mix_levels_input} and ${function.fmod_channel_control_set_mix_matrix}.
 * 
 * The output channel count will always match the System speaker mode set via ${function.fmod_system_set_software_format}.
 * 
 * [[Note: If the System is initialized with `FMOD_SPEAKERMODE.RAW` calling this function will produce silence.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} front_left The volume level for `FMOD_SPEAKER.FRONT_LEFT`. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {real} front_right The volume level for `FMOD_SPEAKER.FRONT_RIGHT`. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {real} center The volume level for `FMOD_SPEAKER.FRONT_CENTER`. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {real} lfe The volume level for `FMOD_SPEAKER.LOW_FREQUENCY`. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {real} surround_left The volume level for `FMOD_SPEAKER.SURROUND_LEFT`. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {real} surround_right The volume level for `FMOD_SPEAKER.SURROUND_RIGHT`. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {real} back_left The volume level for `FMOD_SPEAKER.BACK_LEFT`. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {real} back_right The volume level for `FMOD_SPEAKER.BACK_RIGHT`. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @func_end
 */
function fmod_channel_control_set_mix_levels_output(channel_control_ref, front_left, front_right, center, lfe, surround_left, surround_right, back_left, back_right) {}


/**
 * @func fmod_channel_control_set_mix_matrix
 * @desc > **FMOD Function:** [ChannelControl::setMixMatrix](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setmixmatrix)
 *
 * <br />
 *
 * This function sets a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * 
 * This will overwrite values set via ${function.fmod_channel_control_set_pan}, ${function.fmod_channel_control_set_mix_levels_input} and ${function.fmod_channel_control_set_mix_levels_output}.
 * 
 * If no matrix is passed in via matrix a default upmix, downmix, or unit matrix will take its place. A unit matrix allows a signal to pass through unchanged.
 * 
 * Example 5.1 unit matrix:
 * 
 * ```
 * 1 0 0 0 0 0
 * 0 1 0 0 0 0
 * 0 0 1 0 0 0
 * 0 0 0 1 0 0
 * 0 0 0 0 1 0
 * 0 0 0 0 0 1
 * ```
 * 
 * [[Note: Matrix element values can be below 0 to invert a signal and above 1 to amplify the signal. Note that increasing the signal level too far may cause audible distortion.]]
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {array[real]} matrix A two-dimensional array of volume levels in row-major order. Each row represents an output speaker, each column represents an input channel.
 * @param {real} out_channels The number of output channels (rows) in `matrix`.
 * @param {real} in_channels The number of input channels (columns) in `matrix`.
 * @param {real} in_channel_hop The width (total number of columns) in the source `matrix`. A matrix element is referenced as 'outchannel * inchannel_hop + inchannel'. The default value is `in_channels`.
 * @func_end
 */
function fmod_channel_control_set_mix_matrix(channel_control_ref, matrix, out_channels, in_channels, in_channel_hop) {}


/**
 * @func fmod_channel_control_get_mix_matrix
 * @desc > **FMOD Function:** [ChannelControl::getMixMatrix](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getmixmatrix)
 *
 * <br />
 *
 * This function retrieves a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * 
 * [[Note: Matrix element values can be below 0 to invert a signal and above 1 to amplify the signal. Note that increasing the signal level too far may cause audible distortion.]]
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControlMixMatrix}
 * @func_end
 */
function fmod_channel_control_get_mix_matrix(channel_control_ref, in_channel_hop) {}


/**
 * @func fmod_channel_control_set_reverb_properties
 * @desc > **FMOD Function:** [ChannelControl::setReverbProperties](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setreverbproperties)
 *
 * <br />
 *
 * This function sets the wet / send level for a particular reverb instance.
 * 
 * Channels are automatically connected to all existing reverb instances due to the default wet level of 1. ChannelGroups however will not send to any reverb by default requiring an explicit call to this function.
 * 
 * ChannelGroup reverb is optimal for the case where you want to send 1 mixed signal to the reverb, rather than a lot of individual Channel reverb sends. It is advisable to do this to reduce CPU if you have many Channels inside a ChannelGroup.
 * 
 * When setting a wet level for a ChannelGroup, any Channels under that ChannelGroup will still have their existing sends to the reverb. To avoid this doubling up you should explicitly set the Channel wet levels to 0.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} reverb_instance A reverb instance index.
 * @param {real} wet The send level for the signal to the reverb. 0 = none, 1 = full. A negative level inverts the signal. Default is 1 for Channel, 0 for ChannelGroup.
 * @func_end
 */
function fmod_channel_control_set_reverb_properties(channel_control_ref, reverb_instance, wet) {}


/**
 * @func fmod_channel_control_get_reverb_properties
 * @desc > **FMOD Function:** [ChannelControl::getReverbProperties](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getreverbproperties)
 *
 * <br />
 *
 * This function retrieves the wet / send level for a particular reverb instance.
 * 
 * It returns the send level for the signal to the reverb. 0 = none, 1 = full.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} reverb_instance A reverb instance index.

 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_reverb_properties(channel_control_ref, reverb_instance) {}


/**
 * @func fmod_channel_control_set_low_pass_gain
 * @desc > **FMOD Function:** [ChannelControl::setLowPassGain](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setlowpassgain)
 *
 * <br />
 *
 * This function sets the gain of the dry signal when built-in lowpass / distance filtering is applied.
 * 
 * [[Note: This requires the built-in lowpass to be created with `FMOD_INIT.CHANNEL_LOWPASS` or `FMOD_INIT.CHANNEL_DISTANCEFILTER`.]]
 * 
 * [[Note: This is currently only supported for Channel, not ChannelGroup.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} gain The gain level where 0 represents silent (full filtering) and 1 represents full volume (no filtering). Default is 1.
 * @func_end
 */
function fmod_channel_control_set_low_pass_gain(channel_control_ref, gain) {}


/**
 * @func fmod_channel_control_get_low_pass_gain
 * @desc > **FMOD Function:** [ChannelControl::getLowPassGain](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getlowpassgain)
 *
 * <br />
 *
 * This function retrieves the gain of the dry signal when built-in lowpass / distance filtering is applied.
 * 
 * The function returns the gain level where 0 represents silent (full filtering) and 1 represents full volume (no filtering).
 * 
 * [[Note: This requires the built-in lowpass to be created with `FMOD_INIT.CHANNEL_LOWPASS` or `FMOD_INIT.CHANNEL_DISTANCEFILTER`.]]
 * 
 * [[Note: Currently only supported for Channel, not ChannelGroup.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_low_pass_gain(channel_control_ref) {}


/**
 * @func fmod_channel_control_add_dsp
 * @desc > **FMOD Function:** [ChannelControl::addDSP](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_adddsp)
 *
 * <br />
 *
 * This function adds a DSP unit to the specified index in the DSP chain.
 * 
 * If `dsp_ref` is already added to an existing object it will be removed and then added to this object.
 * 
 * For detailed information on FMOD's [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) network, read the [DSP Architecture and Usage](https://www.fmod.com/docs/2.03/api/white-papers-dsp-architecture.html) white paper.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} dsp_chain_offset The offset into the DSP chain, see ${constant.FMOD_CHANNELCONTROL_DSP_INDEX} for special named offsets for 'head' and 'tail' and 'fader' units.
 * @param {real} dsp_ref The DSP unit to be added.
 * @func_end
 */
function fmod_channel_control_add_dsp(channel_control_ref, dsp_chain_offset, dsp_ref) {}


/**
 * @func fmod_channel_control_remove_dsp
 * @desc > **FMOD Function:** [ChannelControl::removeDSP](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_removedsp)
 *
 * <br />
 *
 * This function removes the specified DSP unit from the DSP chain.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} dsp_ref The DSP unit to be removed.
 * @func_end
 */
function fmod_channel_control_remove_dsp(channel_control_ref, dsp_ref) {}


/**
 * @func fmod_channel_control_get_num_dsps
 * @desc > **FMOD Function:** [ChannelControl::getNumDSPs](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getnumdsps)
 *
 * <br />
 *
 * This function retrieves the number of [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) units in the [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain).
 * 
 * See [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_num_dsps(channel_control_ref) {}


/**
 * @func fmod_channel_control_get_dsp
 * @desc > **FMOD Function:** [ChannelControl::getDSP](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getdsp)
 *
 * <br />
 *
 * This function retrieves the DSP unit at the specified index in the DSP chain.
 * 
 * It returns the DSP unit at the specified `index`.
 * 
 * See [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} index The offset into the [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain), see ${constant.FMOD_CHANNELCONTROL_DSP_INDEX} for special named offsets for 'head' and 'tail' and 'fader' units.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_dsp(channel_control_ref, index) {}


/**
 * @func fmod_channel_control_set_dsp_index
 * @desc > **FMOD Function:** [ChannelControl::setDSPIndex](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setdspindex)
 *
 * <br />
 *
 * This function sets the index in the DSP chain of the specified DSP.
 * 
 * See [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} dsp_ref A reference to a DSP unit that exists in the [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain).
 * @param {real} chain_index The offset into the DSP chain to move the DSP to, see ${constant.FMOD_CHANNELCONTROL_DSP_INDEX} for special named offsets.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_set_dsp_index(channel_control_ref, dsp_ref, chain_index) {}


/**
 * @func fmod_channel_control_get_dsp_index
 * @desc > **FMOD Function:** [ChannelControl::getDSPIndex](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getdspindex)
 *
 * <br />
 *
 * This function retrieves the index of a DSP inside the Channel or ChannelGroup's DSP chain.
 * 
 * See [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} dsp_ref A DSP unit that exists in the [DSP chain](https://www.fmod.com/docs/2.03/api/glossary.html#dsp-chain).
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_dsp_index(channel_control_ref, dsp_ref) {}


/**
 * @func fmod_channel_control_get_dsp_clock
 * @desc > **FMOD Function:** [ChannelControl::getDSPClock](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getdspclock)
 *
 * <br />
 *
 * This function retrieves the DSP clock values at this point in time.
 * 
 * To perform sample accurate scheduling in conjunction with ${function.fmod_channel_control_set_delay} and ${function.fmod_channel_control_add_fade_point} query the `parent_clock` value.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControlDSPClock}
 * @func_end
 */
function fmod_channel_control_get_dsp_clock(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_delay
 * @desc > **FMOD Function:** [ChannelControl::setDelay](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setdelay)
 *
 * <br />
 *
 * This function sets a sample accurate start (and/or stop) time relative to the parent ChannelGroup DSP clock.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {real} dsp_clock_start The DSP clock of the parent ChannelGroup to audibly start playing sound at. Default is 0.
 * @param {real} dsp_clock_end DSP clock of the parent ChannelGroup to audibly stop playing sound at. Default is 0.
 * @param {bool} stop_channels True: When `dspclock_end` is reached, behaves like ${function.fmod_channel_control_stop} has been called.
False: When `dspclock_end` is reached, behaves like ${function.fmod_channel_control_set_paused} has been called, a subsequent `dspclock_start` allows it to resume.
 * @func_end
 */
function fmod_channel_control_set_delay(channel_control_ref, dsp_clock_start, dsp_clock_end, stop_channels) {}


/**
 * @func fmod_channel_control_get_delay
 * @desc > **FMOD Function:** [ChannelControl::getDelay](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getdelay)
 *
 * <br />
 *
 * This function retrieves a sample accurate start (and/or stop) time relative to the parent ChannelGroup DSP clock.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControlDelay}
 * @func_end
 */
function fmod_channel_control_get_delay(channel_control_ref) {}


/**
 * @func fmod_channel_control_add_fade_point
 * @desc > **FMOD Function:** [ChannelControl::addFadePoint](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_addfadepoint)
 *
 * <br />
 *
 * This function adds a sample accurate fade point at a time relative to the parent ChannelGroup DSP clock.
 * 
 * Fade points are scaled against other volume settings and in-between each fade point the volume will be linearly ramped.
 * 
 * To perform sample accurate fading use ${function.fmod_channel_control_get_dsp_clock} to query the parent clock value. If a parent ChannelGroup changes its pitch, the fade points will still be correct as the parent clock rate is adjusted by that pitch.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {real} dsp_clock The DSP clock of the parent ChannelGroup to set the fade point volume. Expressed in samples.
 * @param {real} volume The (linear) volume level at the given `dsp_clock`. Values above 1.0 amplify the signal.
 * 
 * @example
```gml
// Example. Ramp from full volume to half volume over the next 4096 samples
var _dsp_clock = FMOD_ChannelControl_GetDSPClock(target);
var _clock_val = _dsp_clock.parent_clock;
FMOD_ChannelControl_AddFadePoint(target, _clock_val, 1);
FMOD_ChannelControl_AddFadePoint(target, _clock_val + 4096, 0.5);
```
 * The above code shows how to perform sample accurate fading. It ramps from full volume to half volume over the next 4096 samples.
 * @func_end
 */
function fmod_channel_control_add_fade_point(channel_control_ref, dsp_clock, volume) {}


/**
 * @func fmod_channel_control_set_fade_point_ramp
 * @desc > **FMOD Function:** [ChannelControl::setFadePointRamp](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setfadepointramp)
 *
 * <br />
 *
 * This function adds a volume ramp at the specified time in the future using fade points.
 * 
 * This is a convenience function that creates a scheduled 64 sample fade point ramp from the current volume level to volume arriving at `dsp_clock` time.
 * 
 * Can be use in conjunction with ${function.fmod_channel_control_set_delay}.
 * 
 * All fade points after `dsp_clock` will be removed.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {real} dsp_clock The time (in samples) at which the ramp will end, as measured by the [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) clock of the parent [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html).
 * @param {real} volume The volume level at the given `dsp_clock`. 0 = silent, 1 = full.
 * @func_end
 */
function fmod_channel_control_set_fade_point_ramp(channel_control_ref, dsp_clock, volume) {}


/**
 * @func fmod_channel_control_remove_fade_points
 * @desc > **FMOD Function:** [ChannelControl::removeFadePoints](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_removefadepoints)
 *
 * <br />
 *
 * This function removes all fade points between the two specified clock values (inclusive).
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {real} dsp_clock_start The [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) clock of the parent [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) at which to begin removing fade points. Expressed in samples.
 * @param {real} dsp_clock_end The [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) clock of the parent [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) at which to stop removing fade points. Expressed in samples.
 * @func_end
 */
function fmod_channel_control_remove_fade_points(channel_control_ref, dsp_clock_start, dsp_clock_end) {}


/**
 * @func fmod_channel_control_get_fade_points
 * @desc > **FMOD Function:** [ChannelControl::getFadePoints](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getfadepoints)
 *
 * <br />
 *
 * This function retrieves information about all stored fade points.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControlFadePoints}
 * @func_end
 */
function fmod_channel_control_get_fade_points(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_callback
 * @desc > **FMOD Function:** [ChannelControl::setCallback](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setcallback)
 *
 * <br />
 *
 * This function enables the callback for ChannelControl level notifications.
 * 
 * [[Note: the ${event.social}'s ${var.async_load} will either hold a `channel_ref` or a `channel_group_ref`.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * 
 * @event social
 * @desc When kind is one of `FMOD_CHANNELCONTROL_CALLBACK_TYPE.END`, `FMOD_CHANNELCONTROL_CALLBACK_TYPE.VIRTUALVOICE` or `FMOD_CHANNELCONTROL_CALLBACK_TYPE.SYNCPOINT`:
 * @member {string} type The string `"fmod_channel_control_set_callback"`
 * @member {constant.FMOD_CHANNELCONTROL_CALLBACK_TYPE} kind The kind of callback.
 * @member {real} channel_ref A reference to the channel.
 * @member {real} channel_group_ref A reference to a channel group.
 * @member {real} point_index If kind is `FMOD_CHANNELCONTROL_CALLBACK_TYPE.VIRTUALVOICE`, this is a value where 0 represents 'virtual to real' and 1 represents 'real to virtual'. If kind is `FMOD_CHANNELCONTROL_CALLBACK_TYPE.SYNCPOINT`, this is a value representing the index of the sync point for use with ${function.fmod_sound_get_sync_point}.
 * @event_end
 * 
 * @event social
 * @desc When kind is `FMOD_CHANNELCONTROL_CALLBACK_TYPE.OCCLUSION`: 
 * @member {string} type The string `"fmod_channel_control_set_callback"`
 * @member {constant.FMOD_CHANNELCONTROL_CALLBACK_TYPE} kind The kind of callback.
 * @member {real} channel_ref A reference to the channel.
 * @member {real} channel_group_ref A reference to a channel group.
 * @member {real} direct_occlusion A value that represents the calculated direct occlusion value.
 * @member {real} reverb_occlusion A value that represents the calculated reverb occlusion value.
 * @event_end
 * 
 * @func_end
 */
function fmod_channel_control_set_callback(channel_control_ref) {}


/**
 * @func fmod_channel_control_get_system_object
 * @desc > **FMOD Function:** [ChannelControl::getSystemObject](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getsystemobject)
 *
 * <br />
 *
 * This function retrieves the System that created this object.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_system_object(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_user_data
 * @desc > **FMOD Function:** [ChannelControl::setUserData](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_setuserdata)
 *
 * <br />
 *
 * This function sets a floating-point user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} data The value to store on this object.
 * @func_end
 */
function fmod_channel_control_set_user_data(channel_control_ref, data) {}


/**
 * @func fmod_channel_control_get_user_data
 * @desc > **FMOD Function:** [ChannelControl::getUserData](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getuserdata)
 *
 * <br />
 *
 * This function retrieves the user value associated with this object, as set with ${function.fmod_channel_control_set_user_data}.
 * 
 * [[Note: While FMOD allows arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to get a real value (a double-precision floating-point value).]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_user_data(channel_control_ref) {}

// Channel Group

/**
 * @func fmod_channel_group_get_num_channels
 * @desc > **FMOD Function:** [ChannelGroup::getNumChannels](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html#channelgroup_getnumchannels)
 *
 * <br />
 *
 * This function retrieves the number of Channels that feed into this group.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_num_channels(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_channel
 * @desc > **FMOD Function:** [ChannelGroup::getChannel](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html#channelgroup_getchannel)
 *
 * <br />
 *
 * This function retrieves the Channel at the specified index in the list of Channel inputs.
 * 
 * The function returns a reference to the Channel.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @param {real} index The offset into the list of [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html) inputs.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_channel(channel_group_ref, index) {}


/**
 * @func fmod_channel_group_add_group
 * @desc > **FMOD Function:** [ChannelGroup::addGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html#channelgroup_addgroup)
 *
 * <br />
 *
 * This function adds a ChannelGroup as an input to this group.
 * 
 * The function returns a reference to the [DSPConnection](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html) created between the head DSP of `child_channel_group_ref` and the tail DSP of `channel_group_ref`.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @param {real} child_channel_group_ref The ChannelGroup to add.
 * @param {boolean} propagate_dsp_clock Whether to recursively propagate this object's clock values to `child_channel_group_ref`.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_add_group(channel_group_ref, child_channel_group_ref, propagate_dsp_clock) {}


/**
 * @func fmod_channel_group_get_num_groups
 * @desc > **FMOD Function:** [ChannelGroup::getNumGroups](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html#channelgroup_getnumgroups)
 *
 * <br />
 *
 * This function retrieves the number of ChannelGroups that feed into to this group.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_num_groups(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_group
 * @desc > **FMOD Function:** [ChannelGroup::getGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html#channelgroup_getgroup)
 *
 * <br />
 *
 * This function retrieves the ChannelGroup at the specified index in the list of group inputs.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @param {real} group_index The offset into the list of group inputs. A value in the range [0, ${function.fmod_channel_group_get_num_groups}].
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_group(channel_group_ref, group_index) {}


/**
 * @func fmod_channel_group_get_parent_group
 * @desc > **FMOD Function:** [ChannelGroup::getParentGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html#channelgroup_getparentgroup)
 *
 * <br />
 *
 * This function retrieves the ChannelGroup this object outputs to.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_parent_group(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_name
 * @desc > **FMOD Function:** [ChannelGroup::getName](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html#channelgroup_getname)
 *
 * <br />
 *
 * This function retrieves the name set when the group was created.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {string}
 * @func_end
 */
function fmod_channel_group_get_name(channel_group_ref) {}


/**
 * @func fmod_channel_group_release
 * @desc > **FMOD Function:** [ChannelGroup::release](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html#channelgroup_release)
 *
 * <br />
 *
 * This function frees the memory for the group.
 * 
 * [[Note: Any [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) or [ChannelGroups](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) feeding into this group are moved to the master ChannelGroup.]]
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_release(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_system_object
 * @desc > **FMOD Function:** [ChannelControl::getSystemObject](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html#channelcontrol_getsystemobject)
 *
 * <br />
 *
 * This function retrieves the [System](https://www.fmod.com/docs/2.03/api/core-api-system.html) that created this object.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_system_object(channel_group_ref) {}


/**
 * @func fmod_file_get_disk_busy
 * @desc > **FMOD Function:** [File_GetDiskBusy](https://www.fmod.com/docs/2.03/api/core-api-common.html#file_getdiskbusy)
 *
 * <br />
 *
 * This is an information function to retrieve the state of FMOD disk access.
 * 
 * [[Warning: Do not use this function to synchronize your own reads with, as due to timing, you might call this function and it says false = it is not busy, but the split second after calling this function, internally FMOD might set it to busy. Use ${function.fmod_file_set_disk_busy} for proper mutual exclusion as it uses semaphores.]]
 * 
 * @returns {real}
 * @func_end
 */
function fmod_file_get_disk_busy() {}


/**
 * @func fmod_file_set_disk_busy
 * @desc > **FMOD Function:** [File_SetDiskBusy](https://www.fmod.com/docs/2.03/api/core-api-common.html#file_setdiskbusy)
 *
 * <br />
 *
 * This function sets the busy state for disk access ensuring mutual exclusion of file operations.
 * 
 * [[Note: If file IO is currently being performed by FMOD this function will block until it has completed.]]
 * 
 * [[Note: This function should be called in pairs once to set the state, then again to clear it once complete.]]
 * 
 * @param {real} busy The busy state where 1 represent the beginning of disk access and 0 represents the end of disk access.
 * @returns {real}
 * @func_end
 */
function fmod_file_set_disk_busy(busy) {}


/**
 * @func fmod_memory_get_stats
 * @desc > **FMOD Function:** [Memory_GetStats](https://www.fmod.com/docs/2.03/api/core-api-common.html#memory_getstats)
 *
 * <br />
 *
 * This function returns information on the memory usage of FMOD.
 * 
 * This information is byte accurate and counts all allocs and frees internally. This is useful for determining a fixed memory size to make FMOD work within for fixed-memory machines such as consoles.
 * 
 * @param {boolean} blocking This is a flag to indicate whether to favour speed or accuracy. Specifying `true` for this parameter will flush the [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) network to make sure all queued allocations happen immediately, which can be costly.
 * @returns {struct.FmodMemoryStats}
 * @func_end
 */
function fmod_memory_get_stats(blocking) {}


/**
 * @func fmod_debug_initialize
 * @desc > **FMOD Function:** [Debug_Initialize](https://www.fmod.com/docs/2.03/api/core-api-common.html#debug_initialize)
 *
 * <br />
 *
 * This function specifies the level and delivery method of log messages when using the logging version of FMOD.
 * 
 * ${function.fmod_last_result} will return `FMOD_RESULT.ERR_UNSUPPORTED` when using the non-logging (release) versions of FMOD.
 * 
 * Note that:
 * 
 * * `FMOD_DEBUG_FLAGS.LEVEL_LOG` produces informational, warning and error messages.
 * * `FMOD_DEBUG_FLAGS.LEVEL_WARNING` produces warnings and error messages.
 * * `FMOD_DEBUG_FLAGS.LEVEL_ERROR` produces error messages only.
 * 
 * See Also: [Callback Behavior](https://www.fmod.com/docs/2.03/api/glossary.html#callback-behavior)
 * 
 * @param {constant.FMOD_DEBUG_FLAGS} flags The debug level, type and display control flags. More than one mode can be set at once by combining them with the OR operator.
 * @param {constant.FMOD_DEBUG_MODE} mode The destination for log messages. The default is `FMOD_DEBUG_MODE.TTY`.
 * @param {string} filename The filename to use when mode is set to file, only required when using that mode. The default is `pointer_null`.
 * @func_end
 */
function fmod_debug_initialize(flags, mode=FMOD_DEBUG_MODE.TTY, filename=pointer_null) {}


/**
 * @func fmod_thread_set_attributes
 * @desc > **FMOD Function:** [Thread_SetAttributes](https://www.fmod.com/docs/2.03/api/core-api-common.html#thread_setattributes)
 *
 * <br />
 *
 * This function specifies the affinity, priority and stack size for all FMOD created threads.
 * 
 * You must call this function for the chosen thread before that thread is created for the settings to take effect.
 * 
 * Affinity can be specified using one (or more) of the ${constant.FMOD_THREAD_AFFINITY} constants or by providing the bits explicitly, i.e. (1<<3) for logical core three (core affinity is zero based). See platform documentation for details on the available cores for a given device.
 * 
 * Priority can be specified using one of the ${constant.FMOD_THREAD_PRIORITY} constants or by providing the value explicitly, i.e. (-2) for the lowest thread priority on Windows. See platform documentation for details on the available priority values for a given operating system.
 * 
 * The stack size can be specified explicitly, however for each thread you should provide a size equal to or larger than the expected default or risk causing a stack overflow at runtime.
 * 
 * @param {constant.FMOD_THREAD_TYPE} type The identifier for an FMOD thread.
 * @param {constant.FMOD_THREAD_AFFINITY} affinity A bitfield of desired CPU cores to assign the given thread to.
 * @param {constant.FMOD_THREAD_PRIORITY} priority The scheduling priority to assign the given thread to.
 * @param {constant.FMOD_THREAD_STACK_SIZE} stacksize The amount of stack space available to the given thread.
 * @func_end
 */
function fmod_thread_set_attributes(type, affinity, priority, stacksize) {}

// DSP

/**
 * @func fmod_dsp_add_input
 * @desc > **FMOD Function:** [DSP::addInput](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_addinput)
 *
 * <br />
 *
 * This function adds a [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) unit as an input to this object and returns the new [DSPConnection](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html) between the two units.
 * 
 * The returned connection will remain valid until the units are disconnected.
 * 
 * [[Note: When a DSP has multiple inputs the signals are automatically mixed together, sent to the unit's output(s).]]
 * 
 * @param {real} dsp_ref A reference to a [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html).
 * @param {real} dsp_input_ref A reference to the DSP unit to be added to `dsp_ref`.
 * @param {constant.FMOD_DSPCONNECTION_TYPE} dsp_connection_type The type of connection between the two units. Optional. Default is `FMOD_DSPCONNECTION_TYPE.STANDARD`.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_add_input(dsp_ref, dsp_input_ref, dsp_connection_type) {}


/**
 * @func fmod_dsp_get_input
 * @desc > **FMOD Function:** [DSP::getInput](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getinput)
 *
 * <br />
 *
 * This function retrieves the DSP unit at the specified index in the input list.
 * 
 * The returned connection will remain valid until the units are disconnected.
 * 
 * [[Note: This will flush the DSP queue (which blocks against the mixer) to ensure the input list is correct, avoid this during time-sensitive operations.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} dsp_chain_index The offset into `dsp_ref`'s input list. A value in the range [0, ${function.fmod_dsp_get_num_inputs}]
 * @returns {struct.FmodDSPConnectionData}
 * @func_end
 */
function fmod_dsp_get_input(dsp_ref, dsp_input_index) {}


/**
 * @func fmod_dsp_get_output
 * @desc > **FMOD Function:** [DSP::getOutput](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getoutput)
 *
 * <br />
 *
 * This function retrieves the DSP unit at the specified index in the output list.
 * 
 * The returned connection will remain valid until the units are disconnected.
 * 
 * [[Note: This will flush the DSP queue (which blocks against the mixer) to ensure the input list is correct, avoid this during time sensitive operations.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} dsp_chain_index A value in the range [0, ${function.fmod_dsp_get_num_inputs}]
 * @returns {struct.FmodDSPConnectionData}
 * @func_end
 */
function fmod_dsp_get_output(dsp_ref, dsp_output_index) {}


/**
 * @func fmod_dsp_get_num_inputs
 * @desc > **FMOD Function:** [DSP::getNumInputs](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getnuminputs)
 *
 * <br />
 *
 * This function retrieves the number of DSP units in the given DSP's input list.
 * 
 * [[Note: This will flush the DSP queue (which blocks against the mixer) to ensure the input list is correct, avoid this during time sensitive operations.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_num_inputs(dsp_ref) {}


/**
 * @func fmod_dsp_get_num_outputs
 * @desc > **FMOD Function:** [DSP::getNumOutputs](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getnumoutputs)
 *
 * <br />
 *
 * This function retrieves the number of DSP units in the given DSP's output list.
 * 
 * [[Note: This will flush the DSP queue (which blocks against the mixer) to ensure the input list is correct, avoid this during time sensitive operations.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_num_outputs(dsp_ref) {}


/**
 * @func fmod_dsp_disconnect_all
 * @desc > **FMOD Function:** [DSP::disconnectAll](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_disconnectall)
 *
 * <br />
 *
 * This function disconnects all inputs and/or outputs.
 * 
 * This is a convenience function that is faster than disconnecting all inputs and outputs individually.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {boolean} inputs Whether all inputs should be disconnected.
 * @param {boolean} outputs Whether all outputs should be disconnected.
 * @func_end
 */
function fmod_dsp_disconnect_all(dsp_ref, inputs, outputs) {}


/**
 * @func fmod_dsp_disconnect_from
 * @desc > **FMOD Function:** [DSP::disconnectFrom](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_disconnectfrom)
 *
 * <br />
 *
 * This function disconnects the specified input DSP.
 * 
 * If `dsp_other_ref` had only one output, after this operation that entire subgraph will no longer be connected to the DSP network.
 * 
 * After this operation `dsp_connection_ref` is no longer valid.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} dsp_other_ref The input unit to disconnect, if not specified all inputs and outputs are disconnected from this unit.
 * @param {real} dsp_connection_ref When there is more than one connection between two units this can be used to define which of the connections should be disconnected. Defaults to the value 0.
 * @func_end
 */
function fmod_dsp_disconnect_from(dsp_ref, dsp_other_ref, dsp_connection_ref) {}


/**
 * @func fmod_dsp_get_data_parameter_index
 * @desc > **FMOD Function:** [DSP::getDataParameterIndex](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getdataparameterindex)
 *
 * <br />
 *
 * This function retrieves the index of the first data parameter of a particular data type.
 * 
 * The function returns the index of the first data parameter of type `data_type` after the function is called. This will be -1 if no matches were found.
 * 
 * ${function.fmod_last_result} returns `FMOD_RESULT.OK` if a parameter of matching type is found and `FMOD_RESULT.ERR_INVALID_PARAM` if no matches were found.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} data_type The type of data to find. Typically of type `FMOD_DSP_PARAMETER_DATA_TYPE`.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_data_parameter_index(dsp_ref, data_type) {}


/**
 * @func fmod_dsp_get_num_parameters
 * @desc > **FMOD Function:** [DSP::getNumParameters](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getnumparameters)
 *
 * <br />
 *
 * This function retrieves the number of parameters exposed by this unit.
 * 
 * You can use this value to enumerate all parameters of a DSP unit with ${function.fmod_dsp_get_parameter_info}.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_num_parameters(dsp_ref) {}


/**
 * @func fmod_dsp_set_parameter_bool
 * @desc > **FMOD Function:** [DSP::setParameterBool](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setparameterbool)
 *
 * <br />
 *
 * This function sets a boolean parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index The parameter index. A value in the range [0, ${function.fmod_dsp_get_num_parameters} - 1].
 * @param {boolean} value The parameter value.
 * @func_end
 */
function fmod_dsp_set_parameter_bool(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_bool
 * @desc > **FMOD Function:** [DSP::getParameterBool](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getparameterbool)
 *
 * <br />
 *
 * This function retrieves a boolean parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index The parameter index. A value in the range [0, ${function.fmod_dsp_get_num_parameters} - 1].
 * @returns {boolean}
 * @func_end
 */
function fmod_dsp_get_parameter_bool(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_set_parameter_data
 * @desc > **FMOD Function:** [DSP::setParameterData](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setparameterdata)
 *
 * <br />
 *
 * This function sets a binary data parameter by index.
 * 
 * You write the binary data for the parameter to a buffer using the [Buffer functions](https://manual.gamemaker.io/monthly/en/GameMaker_Language/GML_Reference/Buffers/Buffers.htm) and then pass the buffer and the length of the data, in bytes, to this function. The first byte of the buffer is the first byte of the data.
 * 
 * [[Note: This function doesn't take an offset, so the first byte of data is at the start of the buffer (at an offset of 0 bytes).]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index The parameter index. A value in the range [0, ${function.fmod_dsp_get_num_parameters} - 1].
 * @param {buffer} buffer The ${type.buffer} that stores the data.
 * @param {real} length The length of the data in the buffer, in bytes.
 * @func_end
 */
function fmod_dsp_set_parameter_data(dsp_ref, parameter_index, buff, length) {}


/**
 * @func fmod_dsp_get_parameter_data
 * @desc > **FMOD Function:** [DSP::getParameterData](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getparameterdata)
 *
 * <br />
 *
 * This function retrieves a binary data parameter by index.
 * 
 * It returns 0 if the function succeeds or a value greater than 0 that's the buffer size needed to store the parameter data. In this case you should resize the buffer to the return value using ${function.buffer_resize}.
 * 
 * The binary data is copied to the ${type.buffer} that you specify. A total number of `length` bytes are written.
 * 
 * [[Note: This function doesn't take an offset, so the data is written to the start of the buffer (at an offset of 0 bytes).]]
 * 
 * [[Warning: The ${type.buffer} that receives the data should be large enough to hold the parameter value, as this function doesn't resize the buffer. Any parameter data beyond the length of the buffer will not be included.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index The parameter index. A value in the range [0, ${function.fmod_dsp_get_num_parameters} - 1].
 * @param {buffer} buffer The ${type.buffer} that receives the data.
 * @param {real} length The length of the data to copy into the buffer, in bytes.
 * @returns {real}
 * 
 * @example
 * ```gml
 * /// Step Event
 * var _required_size = fmod_dsp_get_parameter_data(dsp_fft, FMOD_DSP_FFT.SPECTRUMDATA, fft_buffer);
 * if (buffer_get_size(fft_buffer) < _required_size)
 * {
 *     buffer_resize(fft_buffer, _required_size);
 * }
 * ```
 * The code example above attempts to get the spectrum data of an FFT DSP and store it in a buffer `fft_buffer`.
 * If the size of the buffer is less than the size returned, the buffer is resized.
 * Note that no new call to the function is made since this code executes in the Step event and will be executed again in the next step anyway.
 * @func_end
 */
function fmod_dsp_get_parameter_data(dsp_ref, parameter_index, buff, length) {}


/**
 * @func fmod_dsp_set_parameter_float
 * @desc > **FMOD Function:** [DSP::setParameterFloat](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setparameterfloat)
 *
 * <br />
 *
 * This function sets a floating point parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index The parameter index. A value in the range [0, ${function.fmod_dsp_get_num_parameters} - 1].
 * @param {real} value The parameter floating point data.
 * @func_end
 */
function fmod_dsp_set_parameter_float(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_float
 * @desc > **FMOD Function:** [DSP::getParameterFloat](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getparameterfloat)
 *
 * <br />
 *
 * This function retrieves a floating point parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index The parameter index. A value in the range [0, ${function.fmod_dsp_get_num_parameters} - 1].
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_parameter_float(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_set_parameter_int
 * @desc > **FMOD Function:** [DSP::setParameterInt](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setparameterint)
 *
 * <br />
 *
 * This function sets an integer parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index The parameter index. A value in the range [0, ${function.fmod_dsp_get_num_parameters} - 1].
 * @param {real} value The parameter integer data.
 * @func_end
 */
function fmod_dsp_set_parameter_int(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_int
 * @desc > **FMOD Function:** [DSP::getParameterInt](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getparameterint)
 *
 * <br />
 *
 * This function retrieves an integer parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index The parameter index. A value in the range [0, ${function.fmod_dsp_get_num_parameters} - 1].
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_parameter_int(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_get_parameter_info
 * @desc > **FMOD Function:** [DSP::getParameterInfo](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getparameterinfo)
 *
 * <br />
 *
 * This function retrieves information about a specified parameter.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodDspParameterDesc}
 * @func_end
 */
function fmod_dsp_get_parameter_info(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_set_channel_format
 * @desc > **FMOD Function:** [DSP::setChannelFormat](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setchannelformat)
 *
 * <br />
 *
 * This function sets the PCM input format this DSP will receive when processing.
 * 
 * [[Note: Setting the number of channels on a unit will force either a down or up mix to that channel count before processing the DSP read/process callback.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {constant.FMOD_CHANNELMASK} channel_mask Deprecated.
 * @param {real} num_channels The number of channels to be processed. A value in the range [0, ${constant.FMOD_MAX_CHANNEL_WIDTH}fmod_dsp_get_output_channel_format].
 * @param {constant.FMOD_SPEAKERMODE} speaker_mode The speaker mode to describe the channel mapping.
 * @func_end
 */
function fmod_dsp_set_channel_format(dsp_ref, channel_mask, num_channels, speaker_mode) {}


/**
 * @func fmod_dsp_get_channel_format
 * @desc > **FMOD Function:** [DSP::getChannelFormat](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getchannelformat)
 *
 * <br />
 *
 * This function retrieves the PCM input format this DSP will receive when processing.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodDSPChannelFormat}
 * @func_end
 */
function fmod_dsp_get_channel_format(dsp_ref) {}


/**
 * @func fmod_dsp_get_output_channel_format
 * @desc > **FMOD Function:** [DSP::getOutputChannelFormat](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getoutputchannelformat)
 *
 * <br />
 *
 * This function retrieves the output format this DSP will produce when processing based on the input specified.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {constant.FMOD_CHANNELMASK} channel_mask_in Deprecated.
 * @param {real} num_channels_in The number of channels for the input signal.
 * @param {constant.FMOD_SPEAKERMODE} speaker_mode_in The speaker mode for the input signal.
 * @returns {struct.FmodDSPChannelFormat}
 * @func_end
 */
function fmod_dsp_get_output_channel_format(dsp_ref, channel_mask_in, num_channels_in, speaker_mode_in) {}


/**
 * @func fmod_dsp_get_metering_info
 * @desc > **FMOD Function:** [DSP::getMeteringInfo](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getmeteringinfo)
 *
 * <br />
 *
 * This function retrieves the signal metering information.
 * 
 * [[Note: Requesting metering information when it hasn't been enabled will result in `FMOD_RESULT.ERR_BADCOMMAND`.]]
 * 
 * [[Note: `FMOD_INIT.PROFILE_METER_ALL` with ${function.fmod_system_init} will automatically enable metering for all DSP units inside the mixer graph.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodDSPInOutMeteringInfo}
 * @func_end
 */
function fmod_dsp_get_metering_info(dsp_ref) {}


/**
 * @func fmod_dsp_set_metering_enabled
 * @desc > **FMOD Function:** [DSP::setMeteringEnabled](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setmeteringenabled)
 *
 * <br />
 *
 * This function sets the input and output signal metering enabled states.
 * 
 * Input metering is pre-processing, while output metering is post-processing.
 * 
 * Enabled metering allows ${function.fmod_dsp_get_metering_info} to return metering information and allows FMOD profiling tools to visualize the levels.
 * 
 * [[Note: `FMOD_INIT.PROFILE_METER_ALL` with ${function.fmod_system_init} will automatically enable metering for all DSP units inside the mixer graph.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {boolean} enabled_in The metering enabled state for the input signal.
 * @param {boolean} enabled_out The metering enabled state for the output signal.
 * @func_end
 */
function fmod_dsp_set_metering_enabled(dsp_ref, enabled_in, enabled_out) {}


/**
 * @func fmod_dsp_get_metering_enabled
 * @desc > **FMOD Function:** [DSP::getMeteringEnabled](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getmeteringenabled)
 *
 * <br />
 *
 * This function retrieves the input and output signal metering enabled states.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodDSPMeteringEnableInfo}
 * @func_end
 */
function fmod_dsp_get_metering_enabled(dsp_ref) {}


/**
 * @func fmod_dsp_set_active
 * @desc > **FMOD Function:** [DSP::setActive](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setactive)
 *
 * <br />
 *
 * This function sets the processing active state.
 * 
 * If `active` is false, processing of this unit and its inputs are stopped.
 * 
 * [[Note: When created, a DSP is inactive. If ${function.fmod_channel_control_add_dsp} is used it will automatically be activated, otherwise it must be set to active manually.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {boolean} active The active state. Default is `false`.
 * @func_end
 */
function fmod_dsp_set_active(dsp_ref, active) {}


/**
 * @func fmod_dsp_get_active
 * @desc > **FMOD Function:** [DSP::getActive](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getactive)
 *
 * <br />
 *
 * This function retrieves the processing active state.
 * 
 * If `active` is false, processing of this unit and its inputs are stopped.
 * 
 * [[Note: When created, a DSP is inactive. If ${function.fmod_channel_control_add_dsp} is used it will automatically be activated, otherwise it must be set to active manually.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {boolean}
 * @func_end
 */
function fmod_dsp_get_active(dsp_ref) {}


/**
 * @func fmod_dsp_set_bypass
 * @desc > **FMOD Function:** [DSP::setBypass](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setbypass)
 *
 * <br />
 *
 * This function sets the processing bypass state.
 * 
 * If `bypass` is `true`, processing of this unit is skipped but it continues to process its inputs.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {boolean} bypass The bypass state. Default is `false`.
 * @func_end
 */
function fmod_dsp_set_bypass(dsp_ref, bypass) {}


/**
 * @func fmod_dsp_get_bypass
 * @desc > **FMOD Function:** [DSP::getBypass](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getbypass)
 *
 * <br />
 *
 * This function retrieves the processing bypass state.
 * 
 * If the returned value is `true`, processing of this unit is skipped but it continues to process its inputs.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {boolean}
 * @func_end
 */
function fmod_dsp_get_bypass(dsp_ref) {}


/**
 * @func fmod_dsp_set_wet_dry_mix
 * @desc > **FMOD Function:** [DSP::setWetDryMix](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setwetdrymix)
 *
 * <br />
 *
 * This function sets the scale of the wet and dry signal components.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} prewet The level of the 'Dry' (pre-processed signal) mix that is processed by the DSP. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal. Default is 1.
 * @param {real} postwet The level of the 'Wet' (post-processed signal) mix that is output. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal. Default is 1.
 * @param {real} dry The level of the 'Dry' (pre-processed signal) mix that is output. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal. The default is 0.
 * @func_end
 */
function fmod_dsp_set_wet_dry_mix(dsp_ref, prewet, postwet, dry) {}


/**
 * @func fmod_dsp_get_wet_dry_mix
 * @desc > **FMOD Function:** [DSP::getWetDryMix](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getwetdrymix)
 *
 * <br />
 *
 * This function retrieves the scale of the wet and dry signal components.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodDSPWetDryMixInfo}
 * @func_end
 */
function fmod_dsp_get_wet_dry_mix(dsp_ref) {}


/**
 * @func fmod_dsp_get_idle
 * @desc > **FMOD Function:** [DSP::getIdle](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getidle)
 *
 * <br />
 *
 * This function retrieves the idle state.
 * 
 * A DSP is considered idle when it stops receiving input signal and all internal processing of stored input has been exhausted.
 * 
 * Each DSP type has the potential to have differing idle behaviour based on the type of effect. A reverb or echo may take a longer time to go idle after it stops receiving a valid signal, compared to an effect with a shorter tail length like an EQ filter.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {boolean}
 * @func_end
 */
function fmod_dsp_get_idle(dsp_ref) {}


/**
 * @func fmod_dsp_reset
 * @desc > **FMOD Function:** [DSP::reset](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_reset)
 *
 * <br />
 *
 * This function resets a DSP's internal state ready for new input signal.
 * 
 * This will clear all internal state derived from input signal while retaining any set parameter values. The intended use of the function is to avoid audible artifacts if moving the DSP from one part of the DSP network to another.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @func_end
 */
function fmod_dsp_reset(dsp_ref) {}


/**
 * @func fmod_dsp_release
 * @desc > **FMOD Function:** [DSP::release](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_release)
 *
 * <br />
 *
 * This function frees a DSP object.
 * 
 * If the DSP is not removed from the network with ${function.fmod_channel_control_remove_dsp} after being added with ${function.fmod_channel_control_add_dsp}, it will not release and ${function.fmod_last_result} will return `FMOD_RESULT.ERR_DSP_INUSE`.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @func_end
 */
function fmod_dsp_release(dsp_ref) {}


/**
 * @func fmod_dsp_get_type
 * @desc > **FMOD Function:** [DSP::getType](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_gettype)
 *
 * <br />
 *
 * This function retrieves the pre-defined type of an FMOD registered DSP unit.
 * 
 * This is only valid for built-in FMOD effects. Any user plugins will simply return `FMOD_DSP_TYPE.UNKNOWN`.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {constant.FMOD_DSP_TYPE} The DSP type.
 * @func_end
 */
function fmod_dsp_get_type(dsp_ref) {}


/**
 * @func fmod_dsp_get_info
 * @desc > **FMOD Function:** [DSP::getInfo](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getinfo)
 *
 * <br />
 *
 * This function retrieves information about this DSP unit.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodDSPInfo}
 * @func_end
 */
function fmod_dsp_get_info(dsp_ref) {}


/**
 * @func fmod_dsp_get_cpu_usage
 * @desc > **FMOD Function:** [DSP::getCPUUsage](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getcpuusage)
 *
 * <br />
 *
 * This function retrieves statistics on the mixer thread CPU usage for this unit.
 * 
 * [[Note: `FMOD_INIT.PROFILE_ENABLE` with ${function.fmod_system_init} is required to call this function.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodCPUTimeUsage}
 * @func_end
 */
function fmod_dsp_get_cpu_usage(dsp_ref) {}


/**
 * @func fmod_dsp_set_user_data
 * @desc > **FMOD Function:** [DSP::setUserData](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setuserdata)
 *
 * <br />
 *
 * This function sets a floating-point user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} data The floating point value stored on this object.
 * @func_end
 */
function fmod_dsp_set_user_data(dsp_ref, data) {}


/**
 * @func fmod_dsp_get_user_data
 * @desc > **FMOD Function:** [DSP::getUserData](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getuserdata)
 *
 * <br />
 *
 * This function retrieves a floating point user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to get a real value (a double-precision floating-point value).]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_user_data(dsp_ref) {}


/**
 * @func fmod_dsp_set_callback
 * @desc > **FMOD Function:** [DSP::setCallback](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_setcallback)
 *
 * <br />
 *
 * This function enables DSP notifications for the given DSP.
 * 
 * When enabled, callbacks for this DSP will be triggered as an ${event.social}.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * 
 * @event social
 * @member {string} type The string `"fmod_dsp_set_callback"`.
 * @member {constant.FMOD_DSP_CALLBACK_TYPE} kind The kind of DSP callback.
 * @member {real} dsp_ref The DSP for which this callback is triggered.
 * @member {real} parameter_index OPTIONAL The index of the DSP parameter that's released (only included when `kind` is `FMOD_DSP_CALLBACK_TYPE.DATAPARAMETERRELEASE`).
 * @event_end
 * 
 * @func_end
 */
function fmod_dsp_set_callback(dsp_ref) {}


/**
 * @func fmod_dsp_get_system_object
 * @desc > **FMOD Function:** [DSP::getSystemObject](https://www.fmod.com/docs/2.03/api/core-api-dsp.html#dsp_getsystemobject)
 *
 * <br />
 *
 * This function retrieves the parent System object.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_system_object(dsp_ref) {}


/**
 * @func fmod_dsp_connection_set_mix
 * @desc > **FMOD Function:** [DSPConnection::setMix](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_setmix)
 *
 * <br />
 *
 * This function sets the connection's volume scale.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @param {real} volume The volume scale applied to the input before being passed to the output. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @func_end
 */
function fmod_dsp_connection_set_mix(dsp_connection_ref, volume) {}


/**
 * @func fmod_dsp_connection_get_mix
 * @desc > **FMOD Function:** [DSPConnection::getMix](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_getmix)
 *
 * <br />
 *
 * This function retrieves the connection's volume scale.
 * 
 * The function returns the volume scale applied to the input before being passed to the output. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_mix(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_set_mix_matrix
 * @desc > **FMOD Function:** [DSPConnection::setMixMatrix](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_setmixmatrix)
 *
 * <br />
 *
 * This function sets a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * 
 * A matrix element is referenced from the incoming matrix data as `out_channel * in_channel_hop + in_channel`.
 * 
 * If 0 or equivalent is passed in via `matrix` a default upmix, downmix, or unit matrix will take its place. A unit matrix allows a signal to pass through unchanged.
 * 
 * Example 5.1 unit matrix: 
 * 
 * ```
 * 1 0 0 0 0 0
 * 0 1 0 0 0 0
 * 0 0 1 0 0 0
 * 0 0 0 1 0 0
 * 0 0 0 0 1 0
 * 0 0 0 0 0 1
 * ```
 * 
 * [[Note: Matrix element values can be below 0 to invert a signal and above 1 to amplify the signal. Note that increasing the signal level too far may cause audible distortion.]]
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @param {array[real]} matrix A two-dimensional array of volume levels in row-major order. Each row represents an output speaker, each column represents an input channel. 0 or equivalent sets a 'default' matrix.
 * @param {real} out_channels The number of output channels (rows) in `matrix`. A value in the range [0, ${constant.FMOD_MAX_CHANNEL_WIDTH}];
 * @param {real} in_channels The number of input channels (columns) in `matrix`. A value in the range [0, ${constant.FMOD_MAX_CHANNEL_WIDTH}];
 * @param {real} in_channel_hop OPTIONAL The width (total number of columns) of source `matrix`. Can be larger than `in_channels` to represent a smaller valid region inside a larger matrix. A value in the range [0, ${constant.FMOD_MAX_CHANNEL_WIDTH}]. Defaults to `in_channels`.
 * @func_end
 */
function fmod_dsp_connection_set_mix_matrix(dsp_connection_ref, matrix, out_channels, in_channels, in_channel_hop) {}


/**
 * @func fmod_dsp_connection_get_mix_matrix
 * @desc > **FMOD Function:** [DSPConnection::getMixMatrix](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_getmixmatrix)
 *
 * <br />
 *
 * This function retrieves a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * 
 * A matrix element is referenced from the incoming matrix data as `out_channel * in_channel_hop + in_channel`.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @param {real} in_channel_hop The width (total number of columns) of the destination matrix. Can be larger than `in_channels` to represent a smaller valid region inside a larger matrix.
 * @returns {struct.FmodDSPConnectionMixMatrix}
 * @func_end
 */
function fmod_dsp_connection_get_mix_matrix(dsp_connection_ref, in_channel_hop) {}


/**
 * @func fmod_dsp_connection_get_input
 * @desc > **FMOD Function:** [DSPConnection::getInput](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_getinput)
 *
 * <br />
 *
 * This function retrieves the connection's input DSP unit.
 * 
 * If ${function.fmod_dsp_add_input} was just called, the connection might not be ready because the DSP system is still queued to be connected, and may need to wait several milliseconds for the next mix to occur. If so ${function.fmod_last_result} will return `FMOD_RESULT.ERR_NOTREADY` and the value 0 will be returned.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_input(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_get_output
 * @desc > **FMOD Function:** [DSPConnection::getOutput](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_getoutput)
 *
 * <br />
 *
 * This function retrieves the connection's output DSP unit.
 * 
 * If ${function.fmod_dsp_add_input} was just called, the connection might not be ready because the DSP system is still queued to be connected, and may need to wait several milliseconds for the next mix to occur. If so the function will return `FMOD_RESULT.ERR_NOTREADY` and the value 0 will be returned.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_output(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_get_type
 * @desc > **FMOD Function:** [DSPConnection::getType](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_gettype)
 *
 * <br />
 *
 * This function retrieves the type of DSP connection between 2 DSP units.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {constant.FMOD_DSPCONNECTION_TYPE}
 * @func_end
 */
function fmod_dsp_connection_get_type(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_set_user_data
 * @desc > **FMOD Function:** [DSPConnection::setUserData](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_setuserdata)
 *
 * <br />
 *
 * This function sets a floating-point user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @param {real} data The floating-point value to set.
 * @func_end
 */
function fmod_dsp_connection_set_user_data(dsp_connection_ref, data) {}


/**
 * @func fmod_dsp_connection_get_user_data
 * @desc > **FMOD Function:** [DSPConnection::getUserData](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html#dspconnection_getuserdata)
 *
 * <br />
 *
 * This function retrieves the floating-point user value associated with this object, as set by an earlier call to ${function.fmod_dsp_connection_set_user_data}.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to get a real value (a double-precision floating-point value).]]
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_user_data(dsp_connection_ref) {}

// Geometry

/**
 * @func fmod_geometry_set_polygon_attributes
 * @desc > **FMOD Function:** [Geometry::setPolygonAttributes](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_setpolygonattributes)
 *
 * <br />
 *
 * This function sets individual attributes for a polygon inside a geometry object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index The polygon index. A value in the range [0, ${function.fmod_geometry_get_num_polygons}].
 * @param {real} direct_occlusion The occlusion factor of the polygon for the direct path where 0 represents no occlusion and 1 represents full occlusion.
 * @param {real} reverb_occlusion The occlusion factor of the polygon for the reverb path where 0 represents no occlusion and 1 represents full occlusion.
 * @param {boolean} double_sided `true`: The polygon is double-sided. `false`: The polygon is single-sided, and the winding of the polygon (which determines the polygon's normal) determines which side of the polygon will cause occlusion.
 * @func_end
 */
function fmod_geometry_set_polygon_attributes(geometry_ref, polygon_index, direct_occlusion, reverb_occlusion, double_sided) {}


/**
 * @func fmod_geometry_get_polygon_attributes
 * @desc > **FMOD Function:** [Geometry::getPolygonAttributes](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getpolygonattributes)
 *
 * <br />
 *
 * This function retrieves the attributes for a polygon.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index The polygon index. A value in the range [0, ${function.fmod_geometry_get_num_polygons}].
 * @returns {struct.FmodGeometryPolygonAttributes}
 * @func_end
 */
function fmod_geometry_get_polygon_attributes(geometry_ref, polygon_index) {}


/**
 * @func fmod_geometry_get_polygon_num_vertices
 * @desc > **FMOD Function:** [Geometry::getPolygonNumVertices](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getpolygonnumvertices)
 *
 * <br />
 *
 * This function gets the number of vertices in a polygon.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index The polygon index. A value in the range [0, ${function.fmod_geometry_get_num_polygons}].
 * @returns {real}
 * @func_end
 */
function fmod_geometry_get_polygon_num_vertices(geometry_ref, polygon_index) {}


/**
 * @func fmod_geometry_set_polygon_vertex
 * @desc > **FMOD Function:** [Geometry::setPolygonVertex](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_setpolygonvertex)
 *
 * <br />
 *
 * This function alters the position of a polygon's vertex inside a geometry object.
 * 
 * Vertices are relative to the position of the object. See ${function.fmod_geometry_set_position}.
 * 
 * There may be some significant overhead with this function as it may cause some reconfiguration of internal data structures used to speed up sound-ray testing.
 * 
 * You may get better results if you want to modify your object by using ${function.fmod_geometry_set_position}, ${function.fmod_geometry_set_scale} and ${function.fmod_geometry_set_rotation}.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index The polygon index. A value in the range [0, ${function.fmod_geometry_get_num_polygons}].
 * @param {real} vertex_index The polygon vertex index. A value in the range [0, ${function.fmod_geometry_get_polygon_num_vertices}].
 * @param {struct.FmodVector} position
 * @func_end
 */
function fmod_geometry_set_polygon_vertex(geometry_ref, polygon_index, vertex_index, position) {}


/**
 * @func fmod_geometry_get_polygon_vertex
 * @desc > **FMOD Function:** [Geometry::getPolygonVertex](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getpolygonvertex)
 *
 * <br />
 *
 * This function retrieves the position of a vertex.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index The polygon index. A value in the range [0, ${function.fmod_geometry_get_num_polygons}].
 * @param {real} vertex_index The polygon vertex index. A value in the range [0, ${function.fmod_geometry_get_polygon_num_vertices}].
 * @returns {struct.FmodVector}
 * @func_end
 */
function fmod_geometry_get_polygon_vertex(geometry_ref, polygon_index, vertex_index) {}


/**
 * @func fmod_geometry_set_position
 * @desc > **FMOD Function:** [Geometry::setPosition](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_setposition)
 *
 * <br />
 *
 * This function sets the 3D position of the object.
 * 
 * [[Note: The position is in world space.]]
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {struct.FmodVector} position The 3D position. Default is `{x: 0, y: 0, z: 0}`.
 * @func_end
 */
function fmod_geometry_set_position(geometry_ref, position) {}


/**
 * @func fmod_geometry_get_position
 * @desc > **FMOD Function:** [Geometry::getPosition](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getposition)
 *
 * <br />
 *
 * This function retrieves the 3D position of the object.
 * 
 * [[Note: The position is in world space.]]
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {struct.FmodVector}
 * @func_end
 */
function fmod_geometry_get_position(geometry_ref) {}


/**
 * @func fmod_geometry_set_rotation
 * @desc > **FMOD Function:** [Geometry::setRotation](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_setrotation)
 *
 * <br />
 *
 * This function sets the 3D orientation of the object.
 * 
 * See remarks in ${function.fmod_system_set_3d_listener_attributes} for a more elaborate description on forward and up vectors.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {struct.FmodVector} forward The forwards orientation. This vector must be of unit length and perpendicular to the up vector. Default is `{x: 0, y: 0, z: 1}`.
 * @param {struct.FmodVector} up The upwards orientation. This vector must be of unit length and perpendicular to the forwards vector. Default is `{x: 0, y: 1, z: 0}`.
 * @func_end
 */
function fmod_geometry_set_rotation(geometry_ref, forward, up) {}


/**
 * @func fmod_geometry_get_rotation
 * @desc > **FMOD Function:** [Geometry::getRotation](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getrotation)
 *
 * <br />
 *
 * This function retrieves the 3D orientation of the object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {struct.FmodGeometryRotation}
 * @func_end
 */
function fmod_geometry_get_rotation(geometry_ref) {}


/**
 * @func fmod_geometry_set_scale
 * @desc > **FMOD Function:** [Geometry::setScale](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_setscale)
 *
 * <br />
 *
 * This function sets the 3D scale of the object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {struct.FmodVector} scale The scale value. Default is `{x: 1, y: 1, z: 1}`.
 * @func_end
 */
function fmod_geometry_set_scale(geometry_ref, scale) {}


/**
 * @func fmod_geometry_get_scale
 * @desc > **FMOD Function:** [Geometry::getScale](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getscale)
 *
 * <br />
 *
 * This function retrieves the 3D scale of the object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {struct.FmodVector}
 * @func_end
 */
function fmod_geometry_get_scale(geometry_ref) {}


/**
 * @func fmod_geometry_add_polygon
 * @desc > **FMOD Function:** [Geometry::addPolygon](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_addpolygon)
 *
 * <br />
 *
 * This function adds a polygon.
 * 
 * It returns the polygon index that you can use with other per polygon based functions as a handle.
 * 
 * [[Note: All vertices must lay in the same plane otherwise behavior may be unpredictable. The polygon is assumed to be convex. A non convex polygon will produce unpredictable behavior. Polygons with zero area will be ignored.]]
 * 
 * [[Note: Polygons cannot be added if already at the maximum number of polygons or if the addition of their vertices would result in exceeding the maximum number of vertices.]]
 * 
 * [[Note: Vertices of an object are in object space, not world space, and so are relative to the position, or center of the object. See ${function.fmod_geometry_set_position}.]]
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} direct_occlusion The occlusion factor of the polygon for the direct path where 0 represents no occlusion and 1 represents full occlusion. Default is 0.
 * @param {real} reverb_occlusion The occlusion factor of the polygon for the reverb path where 0 represents no occlusion and 1 represents full occlusion. Default is 0.
 * @param {boolean} double_sided `true`: The polygon is double-sided. `false`: The polygon is single-sided, and the winding of the polygon (which determines the polygon's normal) determines which side of the polygon will cause occlusion.
 * @param {array[struct.FmodVector]} vertices An array of vertices located in object space.
 * @returns {real}
 * @func_end
 */
function fmod_geometry_add_polygon(geometry_ref, direct_occlusion, reverb_occlusion, double_sided, vertices) {}


/**
 * @func fmod_geometry_set_active
 * @desc > **FMOD Function:** [Geometry::setActive](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_setactive)
 *
 * <br />
 *
 * This function sets whether an object is processed by the geometry engine.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} active Whether to allow this object to be processed by the geometry engine. Default is true.
 * @returns {boolean}
 * @func_end
 */
function fmod_geometry_set_active(geometry_ref, active) {}


/**
 * @func fmod_geometry_get_active
 * @desc > **FMOD Function:** [Geometry::getActive](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getactive)
 *
 * <br />
 *
 * This function retrieves whether an object is processed by the geometry engine.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {boolean}
 * @func_end
 */
function fmod_geometry_get_active(geometry_ref) {}


/**
 * @func fmod_geometry_get_max_polygons
 * @desc > **FMOD Function:** [Geometry::getMaxPolygons](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getmaxpolygons)
 *
 * <br />
 *
 * This function retrieves the maximum number of polygons and vertices allocatable for this object.
 * 
 * [[Note: The maximum number is set with ${function.fmod_system_create_geometry}.]]
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {real}
 * @func_end
 */
function fmod_geometry_get_max_polygons(geometry_ref) {}


/**
 * @func fmod_geometry_get_num_polygons
 * @desc > **FMOD Function:** [Geometry::getNumPolygons](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getnumpolygons)
 *
 * <br />
 *
 * This function retrieves the number of polygons in this object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {real}
 * @func_end
 */
function fmod_geometry_get_num_polygons(geometry_ref) {}


/**
 * @func fmod_geometry_set_user_data
 * @desc > **FMOD Function:** [Geometry::setUserData](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_setuserdata)
 *
 * <br />
 *
 * This function sets a floating-point user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} data The value to be stored on this object.
 * @func_end
 */
function fmod_geometry_set_user_data(geometry_ref, data) {}


/**
 * @func fmod_geometry_get_user_data
 * @desc > **FMOD Function:** [Geometry::getUserData](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object, as set with an earlier call to ${function.fmod_geometry_set_user_data}.
 * 
 * [[Note: While FMOD allows arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to get a real value (a double-precision floating-point value).]]
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {real}
 * @func_end
 */
function fmod_geometry_get_user_data(geometry_ref) {}


/**
 * @func fmod_geometry_release
 * @desc > **FMOD Function:** [Geometry::release](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_release)
 *
 * <br />
 *
 * This function frees a geometry object and releases its memory.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @func_end
 */
function fmod_geometry_release(geometry_ref) {}


/**
 * @func fmod_geometry_save
 * @desc > **FMOD Function:** [Geometry::save](https://www.fmod.com/docs/2.03/api/core-api-geometry.html#geometry_save)
 *
 * <br />
 *
 * This function saves the geometry object as a serialized binary block to a ${type.buffer}.
 * 
 * The function returns the size of the data written to the buffer, in bytes.
 * 
 * [[Note: The data can be saved to a file if required and loaded later with ${function.fmod_system_load_geometry}.]]
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {buffer} buff The address of the ${type.buffer} to write the data to.
 * @returns {real}
 * @func_end
 */
function fmod_geometry_save(geometry_ref, buff) {}

// Reverb3D

/**
 * @func fmod_reverb_3d_set_3d_attributes
 * @desc > **FMOD Function:** [Reverb3D::set3DAttributes](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_set3dattributes)
 *
 * <br />
 *
 * This function sets the 3D attributes of a reverb sphere.
 * 
 * When the position of the listener is less than `max_distance` away from the position of one or more reverb objects, the listener's 3D reverb properties are a weighted combination of those reverb objects. Otherwise, the reverb DSP will use the global reverb settings.
 * 
 * See the [3D Reverb](https://www.fmod.com/docs/2.03/api/white-papers-3d-reverb.html) guide for more information.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @param {struct.FmodVector} position The position in 3D space representing the center of the reverb. Expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units).
 * @param {real} min_distance The distance from the centerpoint within which the reverb will have full effect. Expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units).
 * @param {real} max_distance The distance from the centerpoint beyond which the reverb will have no effect. Expressed in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units).
 * @func_end
 */
function fmod_reverb_3d_set_3d_attributes(reverb_3d_ref, position, min_distance, max_distance) {}


/**
 * @func fmod_reverb_3d_get_3d_attributes
 * @desc > **FMOD Function:** [Reverb3D::get3DAttributes](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_get3dattributes)
 *
 * <br />
 *
 * This function retrieves the 3D attributes of a reverb sphere.
 * 
 * See the [3D Reverb](https://www.fmod.com/docs/2.03/api/white-papers-3d-reverb.html) guide for more information.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {struct.FmodReverb3DAttributes}
 * @func_end
 */
function fmod_reverb_3d_get_3d_attributes(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_set_properties
 * @desc > **FMOD Function:** [Reverb3D::setProperties](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_setproperties)
 *
 * <br />
 *
 * This function sets the environmental properties of a reverb sphere.
 * 
 * [[Note: the default reverb properties are the same as the `FMOD_PRESET_GENERIC` preset under ${constant.FMOD_REVERB_PRESETS}.]]
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @param {real} decay_time The reverberation decay time, expressed in milliseconds. A value in the range [0, 20000].
 * @param {real} early_delay The initial reflection delay time, expressed in milliseconds. A value in the range [0, 300].
 * @param {real} late_delay The late reverberation delay time relative to initial reflection, expressed in milliseconds. A value in the range [0, 100].
 * @param {real} hf_reference The reference high frequency, in Hertz. A value in the range [20, 20000].
 * @param {real} hf_decay_ratio The high-frequency to mid-frequency decay time ratio, as a percentage. A value in the range [10, 100].
 * @param {real} diffusion A value that controls the echo density in the late reverberation decay, as a percentage. A value in the range [10, 100].
 * @param {real} density A value that controls the modal density in the late reverberation decay, as a percentage. A value in the range [0, 100].
 * @param {real} low_shelf_frequency The reference low frequency, in Hertz. A value in the range [20, 1000].
 * @param {real} low_shelf_gain The relative room effect level at low frequencies, expressed in decibels (dB). A value in the range [-36, 12].
 * @param {real} high_cut The relative room effect level at high frequencies, in Hertz. A value in the range [0, 20000].
 * @param {real} early_late_mix The early reflections level relative to room effect, as a percentage.
 * @param {real} wet_level The room effect level at mid frequencies, expressed in decibels (dB). A value in the range [-80, 20].
 * @func_end
 */
function fmod_reverb_3d_set_properties(reverb_3d_ref, decay_time, early_delay, late_delay, hf_reference, hf_decay_ratio, diffusion, density, low_shelf_frequency, low_shelf_gain, high_cut, early_late_mix, wet_level) {}


/**
 * @func fmod_reverb_3d_get_properties
 * @desc > **FMOD Function:** [Reverb3D::getProperties](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_getproperties)
 *
 * <br />
 *
 * This function retrieves the environmental properties of a reverb sphere.
 * 
 * See the [3D Reverb](https://www.fmod.com/docs/2.03/api/white-papers-3d-reverb.html) guide for more information.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {struct.FmodReverbProperties}
 * @func_end
 */
function fmod_reverb_3d_get_properties(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_set_active
 * @desc > **FMOD Function:** [Reverb3D::setActive](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_setactive)
 *
 * <br />
 *
 * This function sets the active state.
 * 
 * See the [3D Reverb](https://www.fmod.com/docs/2.03/api/white-papers-3d-reverb.html) guide for more information.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @param {boolean} active The active state of the reverb sphere. The default is `true`.
 * @func_end
 */
function fmod_reverb_3d_set_active(reverb_3d_ref, active) {}


/**
 * @func fmod_reverb_3d_get_active
 * @desc > **FMOD Function:** [Reverb3D::getActive](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_getactive)
 *
 * <br />
 *
 * This function retrieves the active state of a reverb sphere.
 * 
 * See the [3D Reverb](https://www.fmod.com/docs/2.03/api/white-papers-3d-reverb.html) guide for more information.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {boolean}
 * @func_end
 */
function fmod_reverb_3d_get_active(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_release
 * @desc > **FMOD Function:** [Reverb3D::release](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_release)
 *
 * <br />
 *
 * This function releases the memory for a reverb object and makes it inactive.
 * 
 * [[Note: If you release all Reverb3D objects and have not added a new Reverb3D object, ${function.fmod_system_set_reverb_properties} should be called to reset the reverb properties.]]
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @func_end
 */
function fmod_reverb_3d_release(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_set_user_data
 * @desc > **FMOD Function:** [Reverb3D::setUserData](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_setuserdata)
 *
 * <br />
 *
 * This function sets a single floating-point user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @param {real} data The value stored on this object.
 * @func_end
 */
function fmod_reverb_3d_set_user_data(reverb_3d_ref, data) {}


/**
 * @func fmod_reverb_3d_get_user_data
 * @desc > **FMOD Function:** [Reverb3D::getUserData](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html#reverb3d_getuserdata)
 *
 * <br />
 *
 * This function retrieves a floating-point user value associated with this object, as set with an earlier call to ${function.fmod_reverb_3d_set_user_data}.
 * 
 * [[Note: While FMOD allows arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to get a real value (a double-precision floating-point value).]]
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {real}
 * @func_end
 */
function fmod_reverb_3d_get_user_data(reverb_3d_ref) {}

// Sound

/**
 * @func fmod_sound_get_name
 * @desc > **FMOD Function:** [Sound::getName](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getname)
 *
 * <br />
 *
 * This function retrieves the name of a sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {string}
 * @func_end
 */
function fmod_sound_get_name(sound_ref) {}


/**
 * @func fmod_sound_get_format
 * @desc > **FMOD Function:** [Sound::getFormat](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getformat)
 *
 * <br />
 *
 * This function returns format information about the sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {struct.FmodSoundFormat}
 * @func_end
 */
function fmod_sound_get_format(sound_ref) {}


/**
 * @func fmod_sound_get_length
 * @desc > **FMOD Function:** [Sound::getLength](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getlength)
 *
 * <br />
 *
 * This function retrieves the length using the specified time unit.
 * 
 * `length_type` must be valid for the file format. For example, an MP3 file does not support `FMOD_TIMEUNIT.MODORDER`.
 * 
 * A length of 0xFFFFFFFF means the sound is of unlimited length, such as an internet radio stream or MOD/S3M/XM/IT file which may loop forever.
 * 
 * [[Note: Using a VBR (Variable Bit Rate) source that does not have metadata containing its accurate length (such as untagged MP3 or MOD/S3M/XM/IT) may return inaccurate length values. For these formats, use `FMOD_MODE.ACCURATETIME` when creating the sound. This will cause a slight delay and memory increase, as FMOD will scan the whole during creation to find the correct length. This flag also creates a seek table to enable sample accurate seeking.]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {constant.FMOD_TIMEUNIT} length_type The time unit type to retrieve.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_length(sound_ref, length_type) {}


/**
 * @func fmod_sound_get_num_tags
 * @desc > **FMOD Function:** [Sound::getNumTags](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getnumtags)
 *
 * <br />
 *
 * This function retrieves the number of metadata tags.
 * 
 * 'Tags' are metadata stored within a sound file. These can be things like a song's name, composer, etc.
 * 
 * [[Note: This value could be periodically checked to see if new tags are available in certain circumstances. This might be the case with internet based streams (i.e. shoutcast or icecast) where the name of the song or other attributes might change.]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {struct.FmodSoundNumTags}
 * @func_end
 */
function fmod_sound_get_num_tags(sound_ref) {}


/**
 * @func fmod_sound_get_tag
 * @desc > **FMOD Function:** [Sound::getTag](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_gettag)
 *
 * <br />
 *
 * This function retrieves a metadata tag.
 * 
 * 'Tags' are metadata stored within a sound file. These can be things like a song's name, composer, etc.
 * 
 * The number of tags available can be found with ${function.fmod_sound_get_num_tags}.
 * 
 * Displaying or retrieving tags can be done in 3 different ways:
 * 
 * * All tags can be continuously retrieved by looping from 0 to the `num_tags` value in ${function.fmod_sound_get_num_tags} - 1. Updated tags will refresh automatically, and the `update` member of the ${struct.FmodSoundTag} structure will be set to `true` if a tag has been updated, due to something like a netstream changing the song name for example.
 * * Tags can be retrieved by specifying -1 as the index and only updating tags that are returned. If all tags are retrieved and this function is called ${function.fmod_last_result} will return an error of `FMOD_RESULT.ERR_TAGNOTFOUND`.
 * * Specific tags can be retrieved by specifying a name parameter. The index can be 0 based or -1 in the same fashion as described previously.
 * 
 * [[Note: With netstreams an important consideration must be made between songs, a tag may occur that changes the playback rate of the song. It is up to the user to catch this and reset the playback rate with ${function.fmod_channel_set_frequency}. A sample rate change will be signalled with a tag of type `FMOD_TAGTYPE.FMOD`.]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} tag_index The index into the tag list.
 * @param {buffer} data_buffer The ${type.buffer} in which to store the raw, binary tag data.
 * @returns {struct.FmodSoundTag}
 * 
 * @example
 * 
 * The following example reads any tags that have arrived, this could happen if a radio station switches to a new song. This loop only runs IF there is an update to the tags.
 * 
 * ```gml
 * var _tag = fmod_sound_get_tag(sound_index, -1, tag_data_buff);
 * while (fmod_last_result() == FMOD_RESULT.OK)
 * {
 *     // Move cursor to the beginning of the buffer
 *     buffer_seek(tag_data_buff, buffer_seek_start, 0);
 *     
 *     if (_tag.data_type == FMOD_TAGDATATYPE.STRING)
 *     {
 *         var _value = buffer_read(tag_data_buff, buffer_string);
 *         tag_strings[tag_index] = $"{_tag.name}: {_value}";
 *         tag_index = (tag_index + 1) % tag_count;
 *         
 *         if (_tag.type == FMOD_TAGTYPE.PLAYLIST && _tag.name == "FILE")
 *         {
 *             var _url = _value;
 *             fmod_sound_release(sound_index);
 *             
 *             sound_index = fmod_system_create_sound(_url, FMOD_MODE.CREATESTREAM | FMOD_MODE.NONBLOCKING, extra);
 *         }
 *     }
 *     else if (_tag.type == FMOD_TAGTYPE.FMOD)
 *     {
 *         // When a song changes, the sample rate may also change, so compensate here.
 *         if ((_tag.name == "Sample Rate Change") && channel_index != -1)
 *         {
 *             var _frequency = buffer_read(tag_data_buff, buffer_f32);
 *             fmod_channel_set_frequency(channel_index, _frequency);
 *         }
 *     }
 * 	    
 *     _tag = fmod_sound_get_tag(sound_index, -1, tag_data_buff);
 * }
```
 * @func_end
 */

function fmod_sound_get_tag(sound_ref, tag_index, data_buffer) {}


/**
 * @func fmod_sound_set_3d_cone_settings
 * @desc > **FMOD Function:** [Sound::set3DConeSettings](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_set3dconesettings)
 *
 * <br />
 *
 * This function sets the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * 
 * When ${function.fmod_channel_control_set_3d_cone_orientation} is used and a 3D 'cone' is set up, attenuation will automatically occur for a sound based on the relative angle of the direction the cone is facing, vs the angle between the sound and the listener.
 * 
 * * If the relative angle is within the `inside_cone_angle`, the sound will not have any attenuation applied.
 * * If the relative angle is between the `inside_cone_angle` and `outside_cone_angle`, linear volume attenuation (between 1 and `outside_volume`) is applied between the two angles until it reaches the `outside_cone_angle`.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} inside_cone_angle The inside cone angle, expressed in degrees. This is the angle spread within which the sound is unattenuated. A value in the range [0, 360]. The default is 360.
 * @param {real} outside_cone_angle The outside cone angle, expressed in degrees. This is the angle spread outside of which the sound is attenuated to its `outside_volume`. A value in the range [0, 360]. The default is 360.
 * @param {real} outside_volume The cone outside volume. A value in the range [0, 1]. The default is 1.
 * @func_end
 */
function fmod_sound_set_3d_cone_settings(sound_ref, inside_cone_angle, outside_cone_angle, outside_volume) {}


/**
 * @func fmod_sound_get_3d_cone_settings
 * @desc > **FMOD Function:** [Sound::get3DConeSettings](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_get3dconesettings)
 *
 * <br />
 *
 * This function retrieves the inside and outside angles of the 3D projection cone and the outside volume.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {struct.Fmod3DConeSettings}
 * @func_end
 */
function fmod_sound_get_3d_cone_settings(sound_ref) {}


/**
 * @func fmod_sound_set_3d_custom_rolloff
 * @desc > **FMOD Function:** [Sound::set3DCustomRolloff](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_set3dcustomrolloff)
 *
 * <br />
 *
 * This function sets a custom roll-off shape for 3D distance attenuation.
 * 
 * [[Note: This function must be used in conjunction with the `FMOD_MODE.AS_3D_CUSTOMROLLOFF` flag to be activated.]]
 * 
 * This function does not duplicate the memory for the points internally. The memory you pass to FMOD must remain valid while in use.
 * 
 * If `FMOD_MODE.AS_3D_CUSTOMROLLOFF` is set and the roll-off shape is not set, FMOD will revert to `FMOD_MODE.AS_3D_INVERSEROLLOFF` roll-off mode.
 * 
 * When a custom roll-off is specified a sound's 3D 'minimum' and 'maximum' distances are ignored.
 * 
 * The distance in-between point values is linearly interpolated until the final point where the last value is held.
 * 
 * If the points are not sorted by distance, an error will result.
 * 
 * ```gml
 * // Defining a custom array of points
 * curve =
 * [
 *     { x: 0,  y:  1, z: 0 },
 *     { x: 2,  y: .2, z: 0 },
 *     { x: 2,  y:  0, z: 0 }
 * ];
 * ```
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {array[struct.FmodVector]} points An array of points sorted by distance, where `x` = distance and `y` = volume from 0 to 1. `z` should be set to 0.
 * @func_end
 */
function fmod_sound_set_3d_custom_rolloff(sound_ref, points) {}


/**
 * @func fmod_sound_get_3d_custom_rolloff
 * @desc > **FMOD Function:** [Sound::get3DCustomRolloff](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_get3dcustomrolloff)
 *
 * <br />
 *
 * This function retrieves the current custom roll-off shape for 3D distance attenuation.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {array[struct.FmodVector]}
 * @func_end
 */
function fmod_sound_get_3d_custom_rolloff(sound_ref) {}


/**
 * @func fmod_sound_set_3d_min_max_distance
 * @desc > **FMOD Function:** [Sound::set3DMinMaxDistance](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_set3dminmaxdistance)
 *
 * <br />
 *
 * This function sets the minimum and maximum audible distance for a 3D sound.
 * 
 * The distances are meant to simulate the 'size' of a sound. Reducing the `min` distance will mean the sound appears smaller in the world, and in some modes makes the volume attenuate faster as the listener moves away from the sound.
 * Increasing the `min` distance simulates a larger sound in the world, and in some modes makes the volume attenuate slower as the listener moves away from the sound.
 * 
 * `max` will affect attenuation differently based on roll-off mode set in the mode parameter of ${function.fmod_system_create_sound}, ${function.fmod_system_create_stream}, ${function.fmod_sound_set_mode} or ${function.fmod_channel_control_set_mode}.
 * 
 * For these modes the volume will attenuate to 0 volume (silence), when the distance from the sound is equal to or further than the `max` distance:
 * 
 * * `FMOD_MODE.AS_3D_LINEARROLLOFF`
 * * `FMOD_MODE.AS_3D_LINEARSQUAREROLLOFF`
 * 
 * For these modes the volume will stop attenuating at the point of the `max` distance, without affecting the rate of attenuation:
 * 
 * * `FMOD_MODE.AS_3D_INVERSEROLLOFF`
 * * `FMOD_MODE.AS_3D_INVERSETAPEREDROLLOFF`
 * 
 * For this mode the `max` distance is ignored:
 * 
 * * `FMOD_MODE.AS_3D_CUSTOMROLLOFF`
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} min The sound's minimum volume distance, or the distance that the sound has no attenuation due to 3D positioning. The default value is 1.
 * @param {real} max The sound's maximum volume distance, or the distance that no additional attenuation will occur. See the description for notes on different max distance behaviors. The default value is 10000.
 * @func_end
 */
function fmod_sound_set_3d_min_max_distance(sound_ref, min, max) {}


/**
 * @func fmod_sound_get_3d_min_max_distance
 * @desc > **FMOD Function:** [Sound::get3DMinMaxDistance](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_get3dminmaxdistance)
 *
 * <br />
 *
 * This function retrieves the minimum and maximum audible distance for a 3D sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {struct.FmodMinMaxDistance}
 * @func_end
 */
function fmod_sound_get_3d_min_max_distance(sound_ref) {}


/**
 * @func fmod_sound_set_defaults
 * @desc > **FMOD Function:** [Sound::setDefaults](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_setdefaults)
 *
 * <br />
 *
 * This function sets a sound's default playback attributes.
 * 
 * When the Sound is played it will use these values without having to specify them later on a per Channel basis.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} frequency The default playback frequency, in Hertz. The default is 48000.
 * @param {real} priority The default priority where 0 is the highest priority. A value in the range [0, 256]. The default is 128.
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_defaults(sound_ref, frequency, priority) {}


/**
 * @func fmod_sound_get_defaults
 * @desc > **FMOD Function:** [Sound::getDefaults](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getdefaults)
 *
 * <br />
 *
 * This function retrieves a sound's default playback attributes.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {struct.FmodSoundDefaults}
 * @func_end
 */
function fmod_sound_get_defaults(sound_ref) {}


/**
 * @func fmod_sound_set_mode
 * @desc > **FMOD Function:** [Sound::setMode](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_setmode)
 *
 * <br />
 *
 * This function sets or alters the mode of a sound.
 * 
 * [[Note: When calling this function, note that it will only take effect when the sound is played again with ${function.fmod_system_play_sound}. This is the default for when the sound next plays, not a mode that will suddenly change all currently playing instances of this sound.]]
 * 
 * [[Note: Changing the mode on an already buffered stream may not produced desired output. See [Streaming Issues](https://www.fmod.com/docs/2.03/api/glossary.html#streaming-issues).]]
 * 
 * Flags supported: 
 * 
 * `FMOD_MODE.LOOP_OFF`
 * `FMOD_MODE.LOOP_NORMAL`
 * `FMOD_MODE.LOOP_BIDI`
 * `FMOD_MODE.AS_3D_HEADRELATIVE`
 * `FMOD_MODE.AS_3D_WORLDRELATIVE`
 * `FMOD_MODE.AS_2D`
 `* FMOD_MODE.AS_3D`
 * `FMOD_MODE.AS_3D_INVERSEROLLOFF`
 * `FMOD_MODE.AS_3D_LINEARROLLOFF`
 * `FMOD_MODE.AS_3D_LINEARSQUAREROLLOFF`
 * `FMOD_MODE.AS_3D_INVERSETAPEREDROLLOFF`
 * `FMOD_MODE.AS_3D_CUSTOMROLLOFF`
 * `FMOD_MODE.AS_3D_IGNOREGEOMETRY`
 * 
 * If `FMOD_MODE.AS_3D_IGNOREGEOMETRY` is not specified, the flag will be cleared if it was specified previously.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {constant.FMOD_MODE} mode The mode bits to set. The default is `FMOD_MODE.DEFAULT`.
 * @func_end
 */
function fmod_sound_set_mode(sound_ref, mode) {}


/**
 * @func fmod_sound_get_mode
 * @desc > **FMOD Function:** [Sound::getMode](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getmode)
 *
 * <br />
 *
 * This function retrieves the mode of a sound.
 * 
 * [[Note: The mode will be dependent on the mode set by a call to ${function.fmod_system_create_sound}, ${function.fmod_system_create_stream} or ${function.fmod_sound_set_mode}.]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {constant.FMOD_MODE}
 * @func_end
 */
function fmod_sound_get_mode(sound_ref) {}


/**
 * @func fmod_sound_set_loop_count
 * @desc > **FMOD Function:** [Sound::setLoopCount](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_setloopcount)
 *
 * <br />
 *
 * This function sets the sound to loop a specified number of times before stopping if the playback mode is set to looping.
 * 
 * [[Note: Changing the loop count on an already buffered stream may not produced desired output. See [Streaming Issues](https://www.fmod.com/docs/2.03/api/glossary.html#streaming-issues).]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} count The number of times to loop before final playback where -1 is always loop. 0 means no loop. Default is -1.
 * @func_end
 */
function fmod_sound_set_loop_count(sound_ref, count) {}


/**
 * @func fmod_sound_get_loop_count
 * @desc > **FMOD Function:** [Sound::getLoopCount](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getloopcount)
 *
 * <br />
 *
 * This function retrieves the sound's loop count.
 * 
 * The value -1 is returned when the sound loops infinitely. The value 0 means don't loop.
 * 
 * [[Note: Unlike the [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html) loop count function, this function simply returns the value set with ${function.fmod_sound_set_loop_count}. It does not decrement as it plays (especially seeing as one sound can be played multiple times).]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_loop_count(sound_ref) {}


/**
 * @func fmod_sound_set_loop_points
 * @desc > **FMOD Function:** [Sound::setLoopPoints](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_setlooppoints)
 *
 * <br />
 *
 * This function sets the loop points within a sound.
 * 
 * The values used for `loop_start` and `loop_end` are inclusive, which means these positions will be played.
 * 
 * If a `loop_end` is smaller or equal to `loop_start` an error will be returned. The same will happen for any values that are equal or greater than the length of the sound.
 * 
 * [[Note: Changing loop points on an already buffered stream may not produced desired output. See [Streaming Issues](https://www.fmod.com/docs/2.03/api/glossary.html#streaming-issues).]]
 * 
 * [[Note: The [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html)'s mode must be set to `FMOD_MODE.LOOP_NORMAL` or `FMOD_MODE.LOOP_BIDI` for loop points to affect playback.]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} loop_start The loop start point. A value in the range [0, `loop_end`].
 * @param {constant.FMOD_TIMEUNIT} loop_start_type The time format of `loop_start`.
 * @param {real} loop_end The loop end point. A value in the range [`loop_start`, ${function.fmod_sound_get_length}].
 * @param {constant.FMOD_TIMEUNIT} loop_end_type The time format of `loop_end`.
 * @func_end
 */
function fmod_sound_set_loop_points(sound_ref, loop_start, loop_start_type, loop_end, loop_end_type) {}


/**
 * @func fmod_sound_get_loop_points
 * @desc > **FMOD Function:** [Sound::getLoopPoints](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getlooppoints)
 *
 * <br />
 *
 * This function retrieves the loop points for a sound.
 * 
 * The values from `loop_start` and `loop_end` are inclusive, which means these positions will be played.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {constant.FMOD_TIMEUNIT} loop_start_type The time format in which to return `loop_start`.
 * @param {constant.FMOD_TIMEUNIT} loop_end_type The time format in which to return `loop_end`.
 * @returns {struct.FmodLoopPoints}
 * @func_end
 */
function fmod_sound_get_loop_points(sound_ref, loop_start_type, loop_end_type) {}


/**
 * @func fmod_sound_set_sound_group
 * @desc > **FMOD Function:** [Sound::setSoundGroup](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_setsoundgroup)
 *
 * <br />
 *
 * This function moves the sound from its existing SoundGroup to the specified sound group.
 * 
 * By default, a sound is located in the 'master sound group'. This can be retrieved with ${function.fmod_system_get_master_sound_group}.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} sound_group_ref The [sound group](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html) to move the sound to.
 * @func_end
 */
function fmod_sound_set_sound_group(sound_ref, sound_group_ref) {}


/**
 * @func fmod_sound_get_sound_group
 * @desc > **FMOD Function:** [Sound::getSoundGroup](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getsoundgroup)
 *
 * <br />
 *
 * This function retrieves the sound's current [sound group](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html).
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_sound_group(sound_ref) {}


/**
 * @func fmod_sound_get_num_sub_sounds
 * @desc > **FMOD Function:** [Sound::getNumSubSounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getnumsubsounds)
 *
 * <br />
 *
 * This function retrieves the number of subsounds stored within a sound.
 * 
 * A format that has subsounds is a container format, such as FSB, DLS, MOD, S3M, XM, IT.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_num_sub_sounds(sound_ref) {}


/**
 * @func fmod_sound_get_sub_sound
 * @desc > **FMOD Function:** [Sound::getSubSound](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getsubsound)
 *
 * <br />
 *
 * This function retrieves a handle to a Sound object that is contained within the parent sound.
 * 
 * If the sound is a stream and `FMOD_MODE.NONBLOCKING` was not used, then this call will perform a blocking seek/flush to the specified subsound.
 * 
 * If `FMOD_MODE.NONBLOCKING` was used to open this sound and the sound is a stream, FMOD will do a non blocking seek/flush and set the state of the subsound to `FMOD_OPENSTATE.SEEKING`.
 * 
 * The sound won't be ready to be used when `FMOD_MODE.NONBLOCKING` is used, until the state of the sound becomes `FMOD_OPENSTATE.READY` or `FMOD_OPENSTATE.ERROR`.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} sub_sound_index The index of the subsound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_sub_sound(sound_ref, sub_sound_index) {}


/**
 * @func fmod_sound_get_sub_sound_parent
 * @desc > **FMOD Function:** [Sound::getSubSoundParent](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getsubsoundparent)
 *
 * <br />
 *
 * This function retrieves the parent Sound object that contains this subsound.
 * 
 * If the sound is not a subsound, the value returned will be 0.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_sub_sound_parent(sound_ref) {}


/**
 * @func fmod_sound_get_open_state
 * @desc > **FMOD Function:** [Sound::getOpenState](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getopenstate)
 *
 * <br />
 *
 * This function retrieves the state a sound is in after being opened with the non blocking flag, or the current state of the streaming buffer.
 * 
 * When a sound is opened with `FMOD_MODE.NONBLOCKING`, it is opened and prepared in the background, or asynchronously. This allows the main application to execute without stalling on audio loads.
 * This function will describe the state of the asynchronous load routine i.e. whether it has succeeded, failed or is still in progress.
 * 
 * If `starving` is true, then you will most likely hear a stuttering/repeating sound as the decode buffer loops on itself and replays old data.
 * With the ability to detect stream starvation, muting the sound with ${function.fmod_channel_control_set_mute} will keep the stream quiet until it is not starving anymore.
 * 
 * [[Note: Always check `open_state` to determine the state of the sound. Do not assume that if this function returns `FMOD_RESULT.OK` then the sound has finished loading.]]
 * 
 * See also: ${constant.FMOD_MODE}
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {struct.FmodSoundOpenState}
 * @func_end
 */
function fmod_sound_get_open_state(sound_ref) {}


/**
 * @func fmod_sound_read_data
 * @desc > **FMOD Function:** [Sound::readData](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_readdata)
 *
 * <br />
 *
 * This function reads data from an opened sound to a specified ${type.buffer}, using FMOD's internal codecs.
 * 
 * It returns the actual number of bytes written to the buffer or -1 in case of an error.
 * 
 * This can be used for decoding data offline in small pieces (or big pieces), rather than playing and capturing it, or loading the whole file at once and having to ${function.fmod_sound_lock} / ${function.fmod_sound_unlock} the data.
 * 
 * If you read too much data, it is possible that ${function.fmod_last_result} will return `FMOD_RESULT.ERR_FILE_EOF`, meaning it is out of data. The returned 'read' parameter will reflect this by returning a smaller number of bytes read than was requested.
 * 
 * As a non streaming sound reads and decodes the whole file then closes it upon calling ${function.fmod_system_create_sound}, ${function.fmod_sound_read_data} will then not work because the file handle is closed. Use `FMOD_MODE.OPENONLY` to stop FMOD reading/decoding the file.
 * If `FMOD_MODE.OPENONLY` flag is used when opening a sound, it will leave the file handle open, and FMOD will not read/decode any data internally, so the read cursor will stay at position 0. This will allow the user to read the data from the start.
 * 
 * For streams, the streaming engine will decode a small chunk of data and this will advance the read cursor. You need to either use `FMOD_MODE.OPENONLY` to stop the stream pre-buffering or call ${function.fmod_sound_seek_data} to reset the read cursor back to the start of the file, otherwise it will appear as if the start of the stream is missing.
 * ${function.fmod_channel_set_position} will have the same result. These functions will flush the stream buffer and read in a chunk of audio internally. This is why if you want to read from an absolute position you should use ${function.fmod_sound_seek_data} and not the previously mentioned functions.
 * 
 * If you are calling ${function.fmod_sound_read_data} and ${function.fmod_sound_seek_data} on a stream, information functions such as ${function.fmod_channel_get_position} may give misleading results. Calling ${function.fmod_channel_get_position} will cause the streaming engine to reset and flush the stream, leading to the time values returning to their correct position.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {buffer} buff The ${type.buffer} to read the decoded data into.
 * @param {real} length The length of the data to read into the buffer, in bytes.
 * @param {real} offset The offset in the buffer, in bytes, to write the data.
 * @returns {real}
 * @func_end
 */
function fmod_sound_read_data(sound_ref, buff, length, offset) {}


/**
 * @func fmod_sound_seek_data
 * @desc > **FMOD Function:** [Sound::seekData](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_seekdata)
 *
 * <br />
 *
 * This function seeks a sound for use with data reading, using FMOD's internal codecs.
 * 
 * [[Warning: This function is for use in conjunction with ${function.fmod_sound_read_data} and `FMOD_MODE.OPENONLY`.]]
 * 
 * For streaming sounds, if this function is called, it will advance the internal file pointer but not update the streaming engine. This can lead to de-synchronization of position information for the stream and audible playback.
 * 
 * A stream can reset its stream buffer and position synchronization by calling ${function.fmod_channel_set_position}. This causes reset and flush of the stream buffer.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} pcm The seek offset, in samples.
 * @func_end
 */
function fmod_sound_seek_data(sound_ref, pcm) {}


/**
 * @func fmod_sound_lock
 * @desc > **FMOD Function:** [Sound::lock](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_lock)
 *
 * <br />
 *
 * This function gives access to a portion or all the sample data of a sound for direct manipulation.
 * 
 * With this function you get access to the raw audio data. If the data is 8, 16, 24 or 32bit PCM data, mono or stereo data, you must take this into consideration when processing the data. See [Sample Data](https://www.fmod.com/docs/2.03/api/glossary.html#sample-data) for more information.
 * 
 * The locked data is copied to the buffers that you pass to the function. This can be two buffers as the data may "wrap around" to the start of the sound.
 * The first buffer will always store the data up to the end of the sound. The second will store the remainder, starting at the start of the sound.
 * If the range of data you want to copy doesn't exceed the length of the sound the second buffer will have no data written to it.
 * 
 * You can lock multiple regions of data of a sound at the same time, but you should make sure the regions don't overlap.
 * If some bytes are locked by multiple calls to this function, they will remain locked after you make all corresponding calls to ${function.fmod_sound_unlock}.
 * 
 * [[Important: You must always unlock the data again after you have finished with it, using ${function.fmod_sound_unlock}.]]
 * 
 * If the sound is created with `FMOD_MODE.CREATECOMPRESSEDSAMPLE` the data retrieved will be the compressed bitstream.
 * 
 * It is not possible to lock the following:
 * 
 * * A parent sound containing subsounds. A parent sound has no audio data and ${function.fmod_last_result} will return `FMOD_RESULT.ERR_SUBSOUNDS`.
 * * A stream / sound created with `FMOD_MODE.CREATESTREAM`. `FMOD_RESULT.ERR_BADCOMMAND` will be returned by ${function.fmod_last_result} in this case.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} offset The offset into the sound's buffer to be retrieved, in bytes.
 * @param {real} length The length of the data required to be retrieved.
 * @param {buffer} buff1 The buffer to write the first part of the locked data to.
 * @param {buffer} buff2 The buffer to write the second part of the locked data to. This will only be written to if the `offset` + `length` has exceeded the length of the sample buffer.
 * @returns {struct.FmodSoundLock}
 * @func_end
 */
function fmod_sound_lock(sound_ref, offset, length, buff1, buff2) {}


/**
 * @func fmod_sound_unlock
 * @desc > **FMOD Function:** [Sound::unlock](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_unlock)
 *
 * <br />
 *
 * This function finalizes a previous sample data lock and submits it back to the Sound object.
 * 
 * The data being 'unlocked' must first have been locked with ${function.fmod_sound_lock}.
 * 
 * [[Warning: If an unlock is not performed on PCM data, then sample loops may produce audible clicks.]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} buff1 The first buffer passed to an earlier call to ${function.fmod_sound_lock}.
 * @param {real} len1 The length of the data in the first buffer, in bytes.
 * @param {real} address1 The `patch_address` of `buffer1`'s corresponding chunck in FMOD memory, as returned by an earlier call to ${function.fmod_sound_lock}.
 * @param {real} buff2 OPTIONAL The second buffer passed to an earlier call to ${function.fmod_sound_lock}.
 * @param {real} len2 OPTIONAL The length of the data in the second buffer, in bytes.
 * @param {real} address2 OPTIONAL The `patch_address` of `buffer2`'s corresponding chunck in FMOD memory, as returned by an earlier call to ${function.fmod_sound_lock}.
 * @func_end
 */
function fmod_sound_unlock(sound_ref, buff1, len1, address1, buff2, len2, address2) {}


/**
 * @func fmod_sound_get_music_num_channels
 * @desc > **FMOD Function:** [Sound::getMusicNumChannels](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getmusicnumchannels)
 *
 * <br />
 *
 * This function gets the number of music channels inside a MOD/S3M/XM/IT/MIDI file.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_music_num_channels(sound_ref) {}


/**
 * @func fmod_sound_set_music_channel_volume
 * @desc > **FMOD Function:** [Sound::setMusicChannelVolume](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_setmusicchannelvolume)
 *
 * <br />
 *
 * This function sets the volume of a MOD/S3M/XM/IT/MIDI music channel volume.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} channel_index The MOD/S3M/XM/IT/MIDI music subchannel to set a linear volume for.
 * @param {real} volume The volume of the channel. A value in the range [0, 1]. Default is 1.
 * @func_end
 */
function fmod_sound_set_music_channel_volume(sound_ref, channel_index, volume) {}


/**
 * @func fmod_sound_get_music_channel_volume
 * @desc > **FMOD Function:** [Sound::getMusicChannelVolume](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getmusicchannelvolume)
 *
 * <br />
 *
 * This function retrieves the volume of a MOD/S3M/XM/IT/MIDI music channel volume.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} channel_index The MOD/S3M/XM/IT/MIDI music subchannel to retrieve the volume for.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_music_channel_volume(sound_ref, channel_index) {}


/**
 * @func fmod_sound_set_music_speed
 * @desc > **FMOD Function:** [Sound::setMusicSpeed](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_setmusicspeed)
 *
 * <br />
 *
 * This function sets the relative speed of MOD/S3M/XM/IT/MIDI music.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} speed The speed of the song. A value in the range [0.01, 100]. The default is 1.
 * @func_end
 */
function fmod_sound_set_music_speed(sound_ref, speed) {}


/**
 * @func fmod_sound_get_music_speed
 * @desc > **FMOD Function:** [Sound::getMusicSpeed](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getmusicspeed)
 *
 * <br />
 *
 * This function gets the relative speed of MOD/S3M/XM/IT/MIDI music.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_music_speed(sound_ref) {}


/**
 * @func fmod_sound_get_sync_point
 * @desc > **FMOD Function:** [Sound::getSyncPoint](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getsyncpoint)
 *
 * <br />
 *
 * This function retrieves a sync point.
 * 
 * For more information on sync points see [Sync Points](https://www.fmod.com/docs/2.03/api/glossary.html#sync-points).
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} point_index The index of the sync point. A value in the range [0, ${function.fmod_sound_get_num_sync_points} - 1].
 * @param {constant.FMOD_TIMEUNIT} offset_type The format in which to return the sync point offset.
 * @returns {struct.FmodSyncPoint}
 * @func_end
 */
function fmod_sound_get_sync_point(sound_ref, point_index, offset_type) {}


/**
 * @func fmod_sound_get_num_sync_points
 * @desc > **FMOD Function:** [Sound::getNumSyncPoints](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getnumsyncpoints)
 *
 * <br />
 *
 * This function retrieves the number of sync points stored within a sound.
 * 
 * For more information on sync points see [Sync Points](https://www.fmod.com/docs/2.03/api/glossary.html#sync-points).
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_num_sync_points(sound_ref) {}


/**
 * @func fmod_sound_add_sync_point
 * @desc > **FMOD Function:** [Sound::addSyncPoint](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_addsyncpoint)
 *
 * <br />
 *
 * This function adds a sync point at a specific time within the sound.
 * 
 * For more information on sync points see [Sync Points](https://www.fmod.com/docs/2.03/api/glossary.html#sync-points).
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} offset The offset value.
 * @param {constant.FMOD_TIMEUNIT} offset_type The `offset` unit type.
 * @param {string} name The sync point name.
 * @func_end
 */
function fmod_sound_add_sync_point(sound_ref, offset, offset_type, name) {}


/**
 * @func fmod_sound_delete_sync_point
 * @desc > **FMOD Function:** [Sound::deleteSyncPoint](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_deletesyncpoint)
 *
 * <br />
 *
 * This function deletes a sync point within the sound.
 * 
 * For more information on sync points see [Sync Points](https://www.fmod.com/docs/2.03/api/glossary.html#sync-points).
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {struct.FmodSyncPoint} point_index The sync point.
 * @func_end
 */
function fmod_sound_delete_sync_point(sound_ref, point_index) {}


/**
 * @func fmod_sound_release
 * @desc > **FMOD Function:** [Sound::release](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_release)
 *
 * <br />
 *
 * This function frees a sound object.
 * 
 * This will stop any instances of this sound, and free the sound object and its children if it is a multi-sound object.
 * 
 * If the sound was opened with `FMOD_MODE.NONBLOCKING` and hasn't finished opening yet, it will block. Additionally, if the sound is still playing or has recently been stopped, the release may stall, as the mixer may still be using the sound. Using ${function.fmod_sound_get_open_state} and checking the open state for `FMOD_OPENSTATE.READY` and `FMOD_OPENSTATE.ERROR` is a good way to avoid stalls.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @func_end
 */
function fmod_sound_release(sound_ref) {}


/**
 * @func fmod_sound_get_system_object
 * @desc > **FMOD Function:** [Sound::getSystemObject](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getsystemobject)
 *
 * <br />
 *
 * This function retrieves the parent System object.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_system_object(sound_ref) {}


/**
 * @func fmod_sound_set_user_data
 * @desc > **FMOD Function:** [Sound::setUserData](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_setuserdata)
 *
 * <br />
 *
 * This function sets a floating-point user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} data The value to be stored on this object.
 * @func_end
 */
function fmod_sound_set_user_data(sound_ref, data) {}


/**
 * @func fmod_sound_get_user_data
 * @desc > **FMOD Function:** [Sound::getUserData](https://www.fmod.com/docs/2.03/api/core-api-sound.html#sound_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object, set with ${function.fmod_sound_set_user_data}.
 * 
 * [[Note: While FMOD allows arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to get a real value (a double-precision floating-point value).]]
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_user_data(sound_ref) {}


/**
 * @func fmod_sound_group_set_max_audible
 * @desc > **FMOD Function:** [SoundGroup::setMaxAudible](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_setmaxaudible)
 *
 * <br />
 *
 * This function sets the maximum number of playbacks to be audible at once in a sound group.
 * 
 * If playing instances of sounds in this group equal or exceed number specified here, attempts to play more of the sounds will be met with `FMOD_RESULT.ERR_MAXAUDIBLE` by default.
 * Use ${function.fmod_sound_group_set_max_audible_behavior} to change the way the sound playback behaves when too many sounds are playing. Muting, failing and stealing behaviors can be specified. See ${constant.FMOD_SOUNDGROUP_BEHAVIOR}.
 * 
 * ${function.fmod_sound_group_get_num_playing} can be used to determine how many instances of the sounds in the SoundGroup are currently playing.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} max_audible The maximum number of playbacks to be audible at once. -1 denotes unlimited (default).
 * @func_end
 */
function fmod_sound_group_set_max_audible(sound_group_ref, max_audible) {}


/**
 * @func fmod_sound_group_get_max_audible
 * @desc > **FMOD Function:** [SoundGroup::getMaxAudible](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getmaxaudible)
 *
 * <br />
 *
 * This function retrieves the maximum number of playbacks to be audible at once in a sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_max_audible(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_max_audible_behavior
 * @desc > **FMOD Function:** [SoundGroup::setMaxAudibleBehavior](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_setmaxaudiblebehavior)
 *
 * <br />
 *
 * This function changes the way the sound playback behaves when too many sounds are playing in a soundgroup.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {constant.FMOD_SOUNDGROUP_BEHAVIOR} behavior The [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html)'s max playbacks behavior. The default is `FMOD_SOUNDGROUP_BEHAVIOR.FAIL`.
 * @func_end
 */
function fmod_sound_group_set_max_audible_behavior(sound_group_ref, behavior) {}


/**
 * @func fmod_sound_group_get_max_audible_behavior
 * @desc > **FMOD Function:** [SoundGroup::getMaxAudibleBehavior](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getmaxaudiblebehavior)
 *
 * <br />
 *
 * This function retrieves the current max audible behavior.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {constant.FMOD_SOUNDGROUP_BEHAVIOR}
 * @func_end
 */
function fmod_sound_group_get_max_audible_behavior(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_mute_fade_speed
 * @desc > **FMOD Function:** [SoundGroup::setMuteFadeSpeed](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_setmutefadespeed)
 *
 * <br />
 *
 * This function sets a mute fade time.
 * 
 * If a mode besides `FMOD_SOUNDGROUP_BEHAVIOR.MUTE` is used, the fade speed is ignored.
 * 
 * When more sounds are playing in a SoundGroup than are specified with ${function.fmod_sound_group_set_max_audible}, the least important [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html) (i.e. lowest priority / lowest audible volume due to 3D position, volume, etc.) will fade to silence if `FMOD_SOUNDGROUP_BEHAVIOR.MUTE` is used, and any previous sounds that were silent because of this rule will fade in if they are more important.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} speed The fade time, in seconds. 0 means no fading (default).
 * @func_end
 */
function fmod_sound_group_set_mute_fade_speed(sound_group_ref, speed) {}


/**
 * @func fmod_sound_group_get_mute_fade_speed
 * @desc > **FMOD Function:** [SoundGroup::getMuteFadeSpeed](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getmutefadespeed)
 *
 * <br />
 *
 * This function retrieves the current mute fade time, in seconds.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_mute_fade_speed(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_volume
 * @desc > **FMOD Function:** [SoundGroup::setVolume](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_setvolume)
 *
 * <br />
 *
 * This function sets the volume of the sound group.
 * 
 * [[Note: This scales the volume of all [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) playing [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html) in this [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html).]]
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @func_end
 */
function fmod_sound_group_set_volume(sound_group_ref, volume) {}


/**
 * @func fmod_sound_group_get_volume
 * @desc > **FMOD Function:** [SoundGroup::getVolume](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getvolume)
 *
 * <br />
 *
 * This function retrieves the volume level of the sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_volume(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_num_sounds
 * @desc > **FMOD Function:** [SoundGroup::getNumSounds](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getnumsounds)
 *
 * <br />
 *
 * This function retrieves the current number of [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html) in this SoundGroup.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_num_sounds(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_sound
 * @desc > **FMOD Function:** [SoundGroup::getSound](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getsound)
 *
 * <br />
 *
 * This function retrieves a sound.
 * 
 * [[Note: Use ${function.fmod_sound_group_get_num_sounds} in conjunction with this function to enumerate all sounds in a [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html).]]
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} sound_index The index of the sound in the given SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_sound(sound_group_ref, sound_index) {}


/**
 * @func fmod_sound_group_get_num_playing
 * @desc > **FMOD Function:** [SoundGroup::getNumPlaying](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getnumplaying)
 *
 * <br />
 *
 * This function retrieves the number of currently playing [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) for the [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html).
 * 
 * The function returns the number of [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) playing. If the [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html) only has one [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html), and that Sound is playing twice, the figure returned will be two.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_num_playing(sound_group_ref) {}


/**
 * @func fmod_sound_group_stop
 * @desc > **FMOD Function:** [SoundGroup::stop](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_stop)
 *
 * <br />
 *
 * This function stops all sounds within this sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @func_end
 */
function fmod_sound_group_stop(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_name
 * @desc > **FMOD Function:** [SoundGroup::getName](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getname)
 *
 * <br />
 *
 * This function retrieves the name of the sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {string}
 * @func_end
 */
function fmod_sound_group_get_name(sound_group_ref) {}


/**
 * @func fmod_sound_group_release
 * @desc > **FMOD Function:** [SoundGroup::release](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_release)
 *
 * <br />
 *
 * This function releases a soundgroup object and returns all sounds back to the master sound group.
 * 
 * [[Important: You cannot release the master [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html).]]
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @func_end
 */
function fmod_sound_group_release(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_system_object
 * @desc > **FMOD Function:** [SoundGroup::getSystemObject](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getsystemobject)
 *
 * <br />
 *
 * This function retrieves the parent System object.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_system_object(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_user_data
 * @desc > **FMOD Function:** [SoundGroup::setUserData](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_setuserdata)
 *
 * <br />
 *
 * This function sets a floating-point user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} data The value to set on the object.
 * @func_end
 */
function fmod_sound_group_set_user_data(sound_group_ref, data) {}


/**
 * @func fmod_sound_group_get_user_data
 * @desc > **FMOD Function:** [SoundGroup::getUserData](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html#soundgroup_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object, as set with an earlier call to ${function.fmod_sound_group_set_user_data}.
 * 
 * [[Note: While FMOD allows arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to get a real value (a double-precision floating-point value).]]
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_user_data(sound_group_ref) {}

// FMOD Studio Bank

/**
 * @func fmod_studio_bank_get_loading_state
 * @desc > **FMOD Function:** [Studio::Bank::getLoadingState](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getloadingstate)
 *
 * <br />
 *
 * This function is used to check the loading state of a bank which has been loaded asynchronously using the `FMOD_STUDIO_LOAD_BANK.NONBLOCKING` flag, or is pending unload following a call to ${func.fmod_studio_bank_unload}.
 * 
 * If an asynchronous load failed due to a file error, state will contain `FMOD_STUDIO_LOADING_STATE.ERROR` and the return code from the next ${func.fmod_last_result} call will be the error code of the bank load function.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {constant.FMOD_STUDIO_LOADING_STATE}
 * @func_end
 */
function fmod_studio_bank_get_loading_state(bank_ref) {}


/**
 * @func fmod_studio_bank_load_sample_data
 * @desc > **FMOD Function:** [Studio::Bank::loadSampleData](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_loadsampledata)
 *
 * <br />
 *
 * This function loads non-streaming sample data for all events in the bank.
 * 
 * Use this function to preload sample data ahead of time so that the events in the bank can play immediately when started.
 *
 * This function is equivalent to calling ${func.fmod_studio_event_description_load_sample_data} for all events in the bank, including referenced events.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @func_end
 */
function fmod_studio_bank_load_sample_data(bank_ref) {}


/**
 * @func fmod_studio_bank_unload_sample_data
 * @desc > **FMOD Function:** [Studio::Bank::unloadSampleData](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_unloadsampledata)
 *
 * <br />
 *
 * This function unloads non-streaming sample data for all events in the bank.
 * 
 * Sample data loading is reference counted and the sample data will remain loaded until unload requests corresponding to all load requests are made, or until the bank is unloaded. For more details [see Sample Data Loading](https://www.fmod.com/docs/2.03/api/studio-guide.html#sample-data-loading).
 * 
 * @param {real} bank_ref A reference to a bank.
 * @func_end
 */
function fmod_studio_bank_unload_sample_data(bank_ref) {}


/**
 * @func fmod_studio_bank_get_sample_loading_state
 * @desc > **FMOD Function:** [Studio::Bank::getSampleLoadingState](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getsampleloadingstate)
 *
 * <br />
 *
 * This function retrieves the loading state of the samples in the bank.
 * 
 * May be used for tracking the status of the ${func.fmod_studio_bank_load_sample_data} operation.
 *
 * If ${func.fmod_studio_bank_load_sample_data} has not been called for the bank then this function will return `FMOD_STUDIO_LOADING_STATE.UNLOADED` even though sample data may have been loaded by other API calls.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {constant.FMOD_STUDIO_LOADING_STATE}
 * @func_end
 */
function fmod_studio_bank_get_sample_loading_state(bank_ref) {}


/**
 * @func fmod_studio_bank_unload
 * @desc > **FMOD Function:** [Studio::Bank::unload](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_unload)
 *
 * <br />
 *
 * This function unloads the bank.
 * 
 * This will destroy all objects created from the bank, unload all sample data inside the bank, and invalidate all API handles referring to the bank.
 * 
 * If the bank was loaded from user-managed memory, e.g. by ${func.fmod_studio_system_load_bank_memory} with the `FMOD_STUDIO_LOAD_MEMORY_MODE.MEMORY_POINT` mode, then the memory must not be freed until the unload has completed. Poll the loading state using ${func.fmod_studio_bank_get_loading_state} or use the `FMOD_STUDIO_SYSTEM_CALLBACK.BANK_UNLOAD` system callback (see ${func.fmod_studio_system_set_callback}) to determine when it is safe to free the memory.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @func_end
 */
function fmod_studio_bank_unload(bank_ref) {}


/**
 * @func fmod_studio_bank_get_bus_count
 * @desc > **FMOD Function:** [Studio::Bank::getBusCount](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getbuscount)
 *
 * <br />
 *
 * This function retrieves the number of buses in the bank.
 * 
 * May be used in conjunction with ${func.fmod_studio_bank_get_bus_list} to enumerate the buses in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_bus_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_bus_list
 * @desc > **FMOD Function:** [Studio::Bank::getBusList](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getbuslist)
 *
 * <br />
 *
 * This function retrieves an array containing the buses in the bank.
 * 
 * May be used in conjunction with ${func.fmod_studio_bank_get_bus_count} to enumerate the buses in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_bank_get_bus_list(bank_ref) {}


/**
 * @func fmod_studio_bank_get_event_count
 * @desc > **FMOD Function:** [Studio::Bank::getEventCount](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_geteventcount)
 *
 * <br />
 *
 * This function retrieves the number of event descriptions in the bank.
 * 
 * May be used in conjunction with ${func.fmod_studio_bank_get_event_description_list} to enumerate the events in the bank.
 * 
 * This function counts the events which were added to the bank by the sound designer. The bank may contain additional events which are referenced by event instruments but were not added to the bank, and those referenced events are not counted.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_event_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_event_description_list
 * @desc > **FMOD Function:** [Studio::Bank::getEventList](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_geteventlist)
 *
 * <br />
 *
 * This function retrieves an array containing the event descriptions in the bank.
 * 
 * May be used in conjunction with ${func.fmod_studio_bank_get_event_count} to enumerate the events in the bank.
 * 
 * This function retrieves the events which were added to the bank by the sound designer. The bank may contain additional events which are referenced by event instruments but were not added to the bank, and those referenced events are not retrieved.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_bank_get_event_description_list(bank_ref) {}


/**
 * @func fmod_studio_bank_get_string_count
 * @desc > **FMOD Function:** [Studio::Bank::getStringCount](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getstringcount)
 *
 * <br />
 *
 * This function retrieves the number of string table entries in the bank.
 * 
 * May be used in conjunction with ${func.fmod_studio_bank_get_string_info} to enumerate the string table in a bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_string_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_string_info
 * @desc > **FMOD Function:** [Studio::Bank::getStringInfo](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getstringinfo)
 *
 * <br />
 *
 * This function retrieves a string table entry.
 * 
 * May be used in conjunction with ${func.fmod_studio_bank_get_string_count} to enumerate the string table in a bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @param {real} string_index String table entry index.
 * @returns {struct.FmodStudioStringInfo}
 * @func_end
 */
function fmod_studio_bank_get_string_info(bank_ref, string_index) {}


/**
 * @func fmod_studio_bank_get_vca_count
 * @desc > **FMOD Function:** [Studio::Bank::getVCACount](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getvcacount)
 *
 * <br />
 *
 * This function retrieves the number of VCAs in the bank.
 * 
 * May be used in conjunction with ${func.fmod_studio_bank_get_vca_list} to enumerate the VCAs in a bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_vca_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_vca_list
 * @desc > **FMOD Function:** [Studio::Bank::getVCAList](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getvcalist)
 *
 * <br />
 *
 * This function retrieves an array containing the VCAs in the bank.
 * 
 * May be used in conjunction with ${func.fmod_studio_bank_get_vca_count} to enumerate the VCAs in a bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_bank_get_vca_list(bank_ref) {}


/**
 * @func fmod_studio_bank_get_id
 * @desc > **FMOD Function:** [Studio::Bank::getID](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getid)
 *
 * <br />
 *
 * This function retrieves the GUID of the given bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {string}
 * @func_end
 */
function fmod_studio_bank_get_id(bank_ref) {}


/**
 * @func fmod_studio_bank_get_path
 * @desc > **FMOD Function:** [Studio::Bank::getPath](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getpath)
 *
 * <br />
 *
 * This function retrieves the path of the given bank.
 * 
 * The strings bank must be loaded prior to calling this function, otherwise `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next ${func.fmod_last_result} call.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {string}
 * @func_end
 */
function fmod_studio_bank_get_path(bank_ref) {}


/**
 * @func fmod_studio_bank_is_valid
 * @desc > **FMOD Function:** [Studio::Bank::isValid](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_isvalid)
 *
 * <br />
 *
 * This function checks whether the given Bank reference is valid, returning `true` or `false`.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_bank_is_valid(bank_ref) {}


/**
 * @func fmod_studio_bank_set_user_data
 * @desc > **FMOD Function:** [Studio::Bank::setUserData](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_setuserdata)
 *
 * <br />
 * 
 * This function allows a real value to be attached to this object. See [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data) for an example of how to get and set user data.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @param {real} data The real value to attach.
 * @func_end
 */
function fmod_studio_bank_set_user_data(bank_ref, data) {}


/**
 * @func fmod_studio_bank_get_user_data
 * @desc > **FMOD Function:** [Studio::Bank::getUserData](https://www.fmod.com/docs/2.03/api/studio-api-bank.html#studio_bank_getuserdata)
 *
 * <br />
 *
 * This function allows arbitrary user data to be retrieved from this object. See [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data) for an example of how to get and set user data.
 * 
 * The function returns `NaN` if there is no user data attached to the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_user_data(bank_ref) {}

// FMOD Studio Bus

/**
 * @func fmod_studio_bus_set_paused
 * @desc > **FMOD Function:** [Studio::Bus::setPaused](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_setpaused)
 *
 * <br />
 *
 * This function allows pausing/unpausing of all audio routed into the bus.
 * 
 * An individual pause state is kept for each bus. Pausing a bus will override the pause state of its inputs (meaning they return true from ${func.fmod_studio_bus_get_paused}), while unpausing a bus will cause its inputs to obey their individual pause state. The pause state is processed in the Studio system update, so ${func.fmod_studio_bus_get_paused} will return the state as determined by the last update.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {boolean} pause `true` to pause the bus, `false` to unpause.
 * @func_end
 */
function fmod_studio_bus_set_paused(bus_ref, pause) {}


/**
 * @func fmod_studio_bus_get_paused
 * @desc > **FMOD Function:** [Studio::Bus::getPaused](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getpaused)
 *
 * <br />
 *
 * This function retrieves the pause state of the given bus, returning `true` if paused and `false` if unpaused.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_bus_get_paused(bus_ref) {}


/**
 * @func fmod_studio_bus_stop_all_events
 * @desc > **FMOD Function:** [Studio::Bus::stopAllEvents](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_stopallevents)
 *
 * <br />
 *
 * This function stops all event instances that are routed into the bus. You pass it an ${constant.FMOD_STUDIO_STOP_MODE} enum member.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {constant.FMOD_STUDIO_STOP_MODE} stop_mode The stop mode to use.
 * @func_end
 */
function fmod_studio_bus_stop_all_events(bus_ref, stop_mode) {}


/**
 * @func fmod_studio_bus_set_volume
 * @desc > **FMOD Function:** [Studio::Bus::setVolume](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_setvolume)
 *
 * <br />
 *
 * This function sets the volume level of the bus.
 * 
 * This volume is applied as a scaling factor to the volume level set in FMOD Studio.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {real} volume Volume level. Negative level inverts the signal. Linear unit, range (-inf, inf), default: 1
 * @func_end
 */
function fmod_studio_bus_set_volume(bus_ref, volumen) {}


/**
 * @func fmod_studio_bus_get_volume
 * @desc > **FMOD Function:** [Studio::Bus::getVolume](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getvolume)
 *
 * <br />
 *
 * This function retrieves the volume level of the bus.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_get_volume(bus_ref) {}


/**
 * @func fmod_studio_bus_set_mute
 * @desc > **FMOD Function:** [Studio::Bus::setMute](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_setmute)
 *
 * <br />
 *
 * This function sets the mute state of the bus.
 * 
 * Mute is an additional control for volume, the effect of which is equivalent to setting the volume to zero.
 * 
 * An individual mute state is kept for each bus. Muting a bus will override the mute state of its inputs (meaning they return `true` from ${func.fmod_studio_bus_get_mute}), while unmuting a bus will cause its inputs to obey their individual mute state. The mute state is processed in the Studio system update, so ${func.fmod_studio_bus_get_mute} will return the state as determined by the last update.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {real} mute `true` to mute, `false` to unmute.
 * @func_end
 */
function fmod_studio_bus_set_mute(bus_ref, mute) {}


/**
 * @func fmod_studio_bus_get_mute
 * @desc > **FMOD Function:** [Studio::Bus::getMute](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getmute)
 *
 * <br />
 *
 * This function retrieves the mute state. This will be `true` if muted and `false` if not.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_bus_get_mute(bus_ref) {}


/**
 * @func fmod_studio_bus_set_port_index
 * @desc > **FMOD Function:** [Studio::Bus::setPortIndex](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_setportindex)
 *
 * <br />
 *
 * This function sets the port index to use when attaching to an output port.
 * 
 * When a bus which is an output port is instantiated it will be connected to an output port based on the port type set in Studio. For some port types a platform specific port index is required to connect to the correct output port. For example, if the output port type is a speaker in a controller then a platform specific port index may be required to specify which controller the bus is to attach to. In such a case call this function passing the platform specific port index.
 * 
 * There is no need to call this function for port types which do not require an index.
 * 
 * This function may be called at any time after a bank containing the bus has been loaded.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {constant.FMOD_PORT_INDEX} port_index Port index to use when attaching to an output port.
 * @func_end
 */
function fmod_studio_bus_set_port_index(bus_ref, port_index) {}


/**
 * @func fmod_studio_bus_get_port_index
 * @desc > **FMOD Function:** [Studio::Bus::getPortIndex](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getportindex)
 *
 * <br />
 *
 * This function retrieves the port index assigned to the bus, as a ${constant.FMOD_PORT_INDEX} enum member.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {constant.FMOD_PORT_INDEX} port_index
 * @func_end
 */
function fmod_studio_bus_get_port_index(bus_ref) {}


/**
 * @func fmod_studio_bus_get_channel_group
 * @desc > **FMOD Function:** [Studio::Bus::getChannelGroup](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getchannelgroup)
 *
 * <br />
 *
 * This function retrieves the core ChannelGroup.
 * 
 * By default the ChannelGroup will only exist when it is needed; see [Signal Paths](https://www.fmod.com/docs/2.03/api/studio-guide.html#signal-paths) for details. If the ChannelGroup does not exist, the next call to ${func.fmod_last_result} will return `FMOD_RESULT.ERR_STUDIO_NOT_LOADED`.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_get_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_lock_channel_group
 * @desc > **FMOD Function:** [Studio::Bus::lockChannelGroup](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_lockchannelgroup)
 *
 * <br />
 *
 * This function locks the core ChannelGroup.
 * 
 * This forces the system to create the ChannelGroup and keep it available until ${func.fmod_studio_bus_unlock_channel_group} is called. See [Signal Paths](https://www.fmod.com/docs/2.03/api/studio-guide.html#signal-paths) for details.
 * 
 * The ChannelGroup may not be available immediately after calling this function. When Studio has been initialized in asynchronous mode, the ChannelGroup will not be created until the command has been executed in the async thread. When Studio has been initialized with `FMOD_STUDIO_INIT.SYNCHRONOUS_UPDATE`, the ChannelGroup will be created in the next ${func.fmod_studio_system_update} call.
 * 
 * You can call ${func.fmod_studio_system_flush_commands} to ensure the ChannelGroup has been created. Alternatively you can keep trying to obtain the ChannelGroup via ${func.fmod_studio_bus_get_channel_group} until it is ready.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @func_end
 */
function fmod_studio_bus_lock_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_unlock_channel_group
 * @desc > **FMOD Function:** [Studio::Bus::unlockChannelGroup](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_unlockchannelgroup)
 *
 * <br />
 *
 * This function unlocks the core ChannelGroup.
 * 
 * This allows the system to destroy the ChannelGroup when it is not needed. See [Signal Paths](https://www.fmod.com/docs/2.03/api/studio-guide.html#signal-paths) for details.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @func_end
 */
function fmod_studio_bus_unlock_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_get_cpu_usage
 * @desc > **FMOD Function:** [Studio::Bus::getCPUUsage](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getcpuusage)
 *
 * <br />
 *
 * This function retrieves the bus CPU usage data.
 * 
 * `FMOD_INIT.PROFILE_ENABLE` with ${func.fmod_system_init} is required to call this function.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {struct.FmodCPUUsage}
 * @func_end
 */
function fmod_studio_bus_get_cpu_usage(bus_ref) {}


/**
 * @func fmod_studio_bus_get_memory_usage
 * @desc > **FMOD Function:** [Studio::Bus::getMemoryUsage](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getmemoryusage)
 *
 * <br />
 *
 * This function retrieves memory usage statistics into an ${struct.FmodStudioMemoryUsage} struct.
 * 
 * Memory usage statistics are only available in logging builds, in release builds this will contain zero for all values after calling this function.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @return {struct.FmodStudioMemoryUsage}
 * @func_end
 */
function fmod_studio_bus_get_memory_usage(bus_ref, buff_return) {}


/**
 * @func fmod_studio_bus_get_id
 * @desc > **FMOD Function:** [Studio::Bus::getID](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getid)
 *
 * <br />
 *
 * This function retrieves the GUID of the given bus.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {string}
 * @func_end
 */
function fmod_studio_bus_get_id(bus_ref) {}


/**
 * @func fmod_studio_bus_get_path
 * @desc > **FMOD Function:** [Studio::Bus::getPath](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_getpath)
 *
 * <br />
 *
 * This function retrieves the path of the bus.
 * 
 * The strings bank must be loaded prior to calling this function, otherwise `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next call to ${function.fmod_last_result}.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {string}
 * @func_end
 */
function fmod_studio_bus_get_path(bus_ref) {}


/**
 * @func fmod_studio_bus_is_valid
 * @desc > **FMOD Function:** [Studio::Bus::isValid](https://www.fmod.com/docs/2.03/api/studio-api-bus.html#studio_bus_isvalid)
 *
 * <br />
 *
 * This function checks that the Bus reference is valid, returning `true` or `false`.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_bus_is_valid(bus_ref) {}

// FMOD Studio Command Replay

/**
 * @func fmod_studio_command_replay_set_bank_path
 * @desc > **FMOD Function:** [Studio::CommandReplay::setBankPath](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_setbankpath)
 *
 * <br />
 *
 * This function sets a path substition that will be used when loading banks with this replay.
 * 
 * ${func.fmod_studio_system_load_bank_file} commands in the replay are redirected to load banks from the specified directory, instead of using the directory recorded in the captured commands.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {string} path The path to use when loading banks.
 * @func_end
 */
function fmod_studio_command_replay_set_bank_path(command_replay_ref, path) {}


/**
 * @func fmod_studio_command_replay_set_create_instance_callback
 * @desc > **FMOD Function:** [Studio::CommandReplay::setCreateInstanceCallback](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_setcreateinstancecallback)
 *
 * <br />
 *
 * This function enables the create event instance callback, received in the Async Social event.
 * 
 * The create instance callback is invoked each time a ${func.fmod_studio_event_description_create_instance} command is processed.
 * 
 * The callback can either create a new event instance based on the callback parameters or skip creating the instance. If the instance is not created then subsequent commands for the event instance will be ignored in the replay.
 * 
 * If this callback is not set then the system will always create an event instance.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * 
 * @event social
 * @desc The Social Async event executed for the create event instance callback
 * @member {string} type The value `"fmod_studio_command_replay_set_create_instance_callback"`
 * @member {real} command_replay_ref The handle of the Command Replay triggering this event
 * @member {real} event_description_ref The handle of the event description associated with the newly created instance
 * @member {real} event_instance_ref The handle of the created instance
 * @event_end
 * 
 * @func_end
 */
function fmod_studio_command_replay_set_create_instance_callback(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_frame_callback
 * @desc > **FMOD Function:** [Studio::CommandReplay::setFrameCallback](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_setframecallback)
 *
 * <br />
 *
 * This function enables a callback that is issued each time the replay reaches a new frame. This is received in the Async Social event.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * 
 * @event social
 * @desc The Social Async event executed for the create event instance callback
 * @member {string} type  The value `"fmod_studio_command_replay_set_frame_callback"`
 * @member {real} command_replay_ref The handle of the Command Replay triggering this event
 * @member {real} command_index Current playback command index
 * @member {real} current_time Current playback time
 * @event_end
 * 
 * @func_end
 */
function fmod_studio_command_replay_set_frame_callback(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_load_bank_callback
 * @desc > **FMOD Function:** [Studio::CommandReplay::setLoadBankCallback](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_setloadbankcallback)
 *
 * <br />
 *
 * This function enables the bank loading callback, received in the Async Social event.
 * 
 * The load bank callback is invoked whenever any of the Studio load bank functions are reached.
 * 
 * This callback is required to be implemented to successfully replay ${func.fmod_studio_system_load_bank_memory} and ${func.fmod_studio_system_load_bank_custom} commands.
 * 
 * The callback is responsible for loading the bank based on the callback parameters. If the bank is not loaded subsequent commands which reference objects in the bank will fail.
 * 
 * If this callback is not set then the system will attempt to load banks from file according to recorded ${func.fmod_studio_system_load_bank_file} commands and skip other load commands.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * 
 * @event social
 * @desc The Social Async event executed for the create event instance callback
 * @member {string} type  The value `"fmod_studio_command_replay_set_load_bank_callback"`
 * @member {real} command_replay_ref The handle of the Command Replay triggering this event
 * @member {real} command_index The command that involved this callback
 * @member {real} bank_ref The bank loaded by this function
 * @member {real} bank_guid The GUID of the bank that needs to be loaded
 * @member {real} bank_filename The filename of the bank that needs to be loaded
 * @event_end
 * 
 * @func_end
 */
function fmod_studio_command_replay_set_load_bank_callback(command_replay_ref, path) {}


/**
 * @func fmod_studio_command_replay_start
 * @desc > **FMOD Function:** [Studio::CommandReplay::start](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_start)
 *
 * <br />
 *
 * This function begins playback.
 * 
 * If the replay is already running then calling this function will restart replay from the beginning.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @func_end
 */
function fmod_studio_command_replay_start(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_stop
 * @desc > **FMOD Function:** [Studio::CommandReplay::stop](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_stop)
 *
 * <br />
 *
 * This function stops playback.
 * 
 * If the `FMOD_STUDIO_COMMANDREPLAY.SKIP_CLEANUP` flag has been used then the system state is left as it was at the end of the playback, otherwise all resources that were created as part of the replay will be cleaned up.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @func_end
 */
function fmod_studio_command_replay_stop(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_current_command
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCurrentCommand](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getcurrentcommand)
 *
 * <br />
 *
 * This function retrieves the progress through the command replay.
 * 
 * If this function is called before ${func.fmod_studio_command_replay_start} then both `commandindex` and `currenttime` (in the returned struct) will be returned as 0. If this function is called after ${func.fmod_studio_command_replay_stop} then the index and time of the last command which was replayed will be returned.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {struct.FmodCommandReplayCurrentCommand}
 * @func_end
 */
function fmod_studio_command_replay_get_current_command(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_playback_state
 * @desc > **FMOD Function:** [Studio::CommandReplay::getPlaybackState](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getplaybackstate)
 *
 * <br />
 *
 * This function retrieves the playback state of the given CommandReplay.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {constant.FMOD_STUDIO_PLAYBACK_STATE}
 * @func_end
 */
function fmod_studio_command_replay_get_playback_state(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_paused
 * @desc > **FMOD Function:** [Studio::CommandReplay::setPaused](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_setpaused)
 *
 * <br />
 *
 * This function sets the paused state of the given CommandReplay.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {boolean} pause `true` to pause, `false` to unpause.
 * @func_end
 */
function fmod_studio_command_replay_set_paused(command_replay_ref, pause) {}


/**
 * @func fmod_studio_command_replay_get_paused
 * @desc > **FMOD Function:** [Studio::CommandReplay::getPaused](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getpaused)
 *
 * <br />
 *
 * This function retrieves the paused state of the given CommandReplay (`true` if paused, `false` if not).
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_command_replay_get_paused(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_seek_to_command
 * @desc > **FMOD Function:** [Studio::CommandReplay::seekToCommand](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_seektocommand)
 *
 * <br />
 *
 * This function seeks the playback position to a command.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} command_index The command index to seek to.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_seek_to_command(command_replay_ref, command_index) {}


/**
 * @func fmod_studio_command_replay_seek_to_time
 * @desc > **FMOD Function:** [Studio::CommandReplay::seekToTime](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_seektotime)
 *
 * <br />
 * 
 * This function moves the playback position to the the first command at or after `time`. If no command exists at or after `time`, then `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned (in the next ${function.fmod_last_result} call).
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} time The time to seek to.
 * @func_end
 */
function fmod_studio_command_replay_seek_to_time(command_replay_ref, time) {}


/**
 * @func fmod_studio_command_replay_get_command_at_time
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCommandAtTime](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getcommandattime)
 *
 * <br />
 *
 * This function retrieves the command index corresponding to the given playback time.
 * 
 * This will return an index for the first command at or after `time`. If `time` is greater than the total playback time then `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned (in the next ${function.fmod_last_result} call).
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} time The time used to find a command index.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_command_at_time(command_replay_ref, time) {}


/**
 * @func fmod_studio_command_replay_get_command_count
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCommandCount](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getcommandcount)
 *
 * <br />
 *
 * This function retrieves the number of commands in the replay.
 * 
 * May be used in conjunction with ${func.fmod_studio_command_replay_get_command_info} to enumerate the commands in the replay.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_command_count(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_command_info
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCommandInfo](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getcommandinfo)
 *
 * <br />
 *
 * This function retrieves command information.
 * 
 * May be used in conjunction with ${func.fmod_studio_command_replay_get_command_count} to enumerate the commands in the replay.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} command_index The index of the command.
 * @returns {struct.FmodCommandReplayCommandInfo}
 * @func_end
 */
function fmod_studio_command_replay_get_command_info(command_replay_ref, command_index) {}


/**
 * @func fmod_studio_command_replay_get_command_string
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCommandString](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getcommandstring)
 *
 * <br />
 *
 * This function returns the string representation of a command.
 * 
 * If the string representation of the command is too long to fit in the buffer it will be truncated and this function will return `FMOD_RESULT.ERR_TRUNCATED` (in the next ${function.fmod_last_result} call).
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} command_index The index of the command.
 * @returns {string}
 * @func_end
 */
function fmod_studio_command_replay_get_command_string(command_replay_ref, command_index) {}


/**
 * @func fmod_studio_command_replay_get_length
 * @desc > **FMOD Function:** [Studio::CommandReplay::getLength](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getlength)
 *
 * <br />
 *
 * This function retrieves the total playback time.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_length(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_system_object
 * @desc > **FMOD Function:** [Studio::CommandReplay::getSystem](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getsystem)
 *
 * <br />
 *
 * This function retrieves the Studio System object associated with this replay object.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_system_object(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_is_valid
 * @desc > **FMOD Function:** [Studio::CommandReplay::isValid](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_isvalid)
 *
 * <br />
 *
 * This function checks that the CommandReplay reference is valid.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_command_replay_is_valid(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_user_data
 * @desc > **FMOD Function:** [Studio::CommandReplay::setUserData](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_setuserdata)
 *
 * <br />
 *
 * This function sets user data.
 * 
 * This allows a real value to be attached to this object. See [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data) for an example of how to get and set user data.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} data The real value to attach.
 * @func_end
 */
function fmod_studio_command_replay_set_user_data(command_replay_ref, data) {}


/**
 * @func fmod_studio_command_replay_get_user_data
 * @desc > **FMOD Function:** [Studio::CommandReplay::getUserData](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_getuserdata)
 *
 * <br />
 *
 * This function retrieves user data attached to this object (a real value, passed into ${func.fmod_studio_command_replay_set_user_data}).
 * 
 * The function returns `NaN` if there is no user data attached to the bank.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_user_data(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_release
 * @desc > **FMOD Function:** [Studio::CommandReplay::release](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html#studio_commandreplay_release)
 *
 * <br />
 *
 * This function releases the command replay.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_release(command_replay_ref) {}

// FMOD Studio Event Description

/**
 * @func fmod_studio_event_description_create_instance
 * @desc > **FMOD Function:** [Studio::EventDescription::createInstance](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_createinstance)
 *
 * <br />
 *
 * This function creates a playable instance, returning a handle to the new [EventInstance](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html) object.
 * 
 * When an event instance is created, any required non-streaming sample data is loaded asynchronously.
 * 
 * Use ${func.fmod_studio_event_description_get_sample_loading_state} to check the loading status.
 * 
 * Sample data can be loaded ahead of time with ${func.fmod_studio_event_description_load_sample_data} or ${func.fmod_studio_bank_load_sample_data}. See [Sample Data Loading](https://www.fmod.com/docs/2.03/api/studio-guide.html#sample-data-loading) for more information.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_create_instance(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_instance_count
 * @desc > **FMOD Function:** [Studio::EventDescription::getInstanceCount](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getinstancecount)
 *
 * <br />
 *
 * This function retrieves the number of instances in the EventDescription.
 * 
 * May be used in conjunction with ${func.fmod_studio_event_description_get_instance_list} to enumerate the instances of this event.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_instance_count(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_instance_list
 * @desc > **FMOD Function:** [Studio::EventDescription::getInstanceList](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getinstancelist)
 *
 * <br />
 *
 * This function retrieves an array containing the instances in the given EventDescription.
 * 
 * May be used in conjunction with ${func.fmod_studio_event_description_get_instance_count} to enumerate the instances of this event.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_event_description_get_instance_list(event_description_ref) {}


/**
 * @func fmod_studio_event_description_release_all_instances
 * @desc > **FMOD Function:** [Studio::EventDescription::releaseAllInstances](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_releaseallinstances)
 *
 * <br />
 *
 * This function immediately stops and releases all instances of the event.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @func_end
 */
function fmod_studio_event_description_release_all_instances(event_description_ref) {}


/**
 * @func fmod_studio_event_description_load_sample_data
 * @desc > **FMOD Function:** [Studio::EventDescription::loadSampleData](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_loadsampledata)
 *
 * <br />
 * 
 * This function will load all non-streaming sample data required by the event and any referenced events.
 * 
 * Sample data is loaded asynchronously, ${func.fmod_studio_event_description_get_sample_loading_state} may be used to poll the loading state.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @func_end
 */
function fmod_studio_event_description_load_sample_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_unload_sample_data
 * @desc > **FMOD Function:** [Studio::EventDescription::unloadSampleData](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_unloadsampledata)
 *
 * <br />
 *
 * This function unloads all non-streaming sample data.
 * 
 * Sample data will not be unloaded until all instances of the event are released.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @func_end
 */
function fmod_studio_event_description_unload_sample_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_sample_loading_state
 * @desc > **FMOD Function:** [Studio::EventDescription::getSampleLoadingState](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getsampleloadingstate)
 *
 * <br />
 *
 * This function retrieves the sample data loading state.
 * 
 * If the event is invalid, then the state is set to `FMOD_STUDIO_LOADING_STATE.UNLOADED` and this results in `FMOD_RESULT.ERR_INVALID_HANDLE` (in the next ${func.fmod_last_result} call).
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {constant.FMOD_STUDIO_LOADING_STATE}
 * @func_end
 */
function fmod_studio_event_description_get_sample_loading_state(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_3d
 * @desc > **FMOD Function:** [Studio::EventDescription::is3D](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_is3d)
 *
 * <br />
 *
 * This function retrieves the event's 3D status. For more info, see [Studio::EventDescription::is3D](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_is3d).
 * 
 * This will return `true` if the event is 3D and `false` if not.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_description_is_3d(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_doppler_enabled
 * @desc > **FMOD Function:** [Studio::EventDescription::isDopplerEnabled](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_isdopplerenabled)
 *
 * <br />
 *
 * This function retrieves the event's doppler status.
 * 
 * This will return `true` if doppler is enabled, and `false` if not.
 * 
 * Note: If the event was built to a bank using versions of FMOD Studio prior to 2.01.09, then this function will return false regardless of the event's doppler state.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_description_is_doppler_enabled(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_oneshot
 * @desc > **FMOD Function:** [Studio::EventDescription::isOneshot](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_isoneshot)
 *
 * <br />
 *
 * This function retrieves the event's oneshot status.
 * 
 * This will return `true` if the event is a oneshot event, and `false` if not.
 * 
 * An event is considered oneshot if it is guaranteed to terminate without intervention in bounded time after being started. Instances of such events can be played in a fire-and-forget fashion by calling ${func.fmod_studio_event_instance_start} immediately followed by ${func.fmod_studio_event_instance_release}.
 * 
 * Note: If the event contains nested events built to separate banks and those banks have not been loaded then this function may fail to correctly determine the event's oneshot status.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_description_is_oneshot(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_snapshot
 * @desc > **FMOD Function:** [Studio::EventDescription::isSnapshot](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_issnapshot)
 *
 * <br />
 *
 * This function retrieves the event's snapshot status.
 * 
 * This will return `true` if the event is a snapshot and `false` if not.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_description_is_snapshot(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_stream
 * @desc > **FMOD Function:** [Studio::EventDescription::isStream](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_isstream)
 *
 * <br />
 *
 * This function retrieves the event's stream status, returning `true` if the event contains one or more streamed sounds, otherwise `false`.
 * 
 * Note: If the event contains nested events built to separate banks and those banks have not been loaded then this function may fail to correctly determine the event's stream status.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_description_is_stream(event_description_ref) {}


/**
 * @func fmod_studio_event_description_has_sustain_point
 * @desc > **FMOD Function:** [Studio::EventDescription::hasSustainPoint](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_hassustainpoint)
 *
 * <br />
 *
 * This function retrieves whether the event has any sustain points (`true` or `false`).
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_description_has_sustain_point(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_min_max_distance
 * @desc > **FMOD Function:** [Studio::EventDescription::getMinMaxDistance](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getminmaxdistance)
 *
 * <br />
 *
 * This function retrieves the minimum and maximum distances for 3D attenuation, as a struct.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {struct.FmodMinMaxDistance}
 * @func_end
 */
function fmod_studio_event_description_get_min_max_distance(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_sound_size
 * @desc > **FMOD Function:** [Studio::EventDescription::getSoundSize](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getsoundsize)
 *
 * <br />
 *
 * This function retrieves the sound size for 3D panning.
 * 
 * Retrieves the largest Sound Size value of all Spatializers and 3D Object Spatializers on the event's master track. Returns 0 if there are no Spatializers or 3D Object Spatializers.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_sound_size(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_name
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterDescriptionByName](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getparameterdescriptionbyname)
 *
 * <br />
 *
 * This function retrieves an event parameter description by name.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @param {string} name Parameter name (case-insensitive, UTF-8 string).
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_description_by_name(event_description_ref, name) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_id
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterDescriptionByID](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getparameterdescriptionbyid)
 *
 * <br />
 *
 * This function retrieves an event parameter description by ID.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @param {struct.FmodStudioParameterId} parameter_id The parameter ID struct.
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_description_by_id(event_description_ref, parameter_id) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_index
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterDescriptionByIndex](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getparameterdescriptionbyindex)
 *
 * <br />
 *
 * This function retrieves an event parameter description by index.
 * 
 * May be used in combination with ${func.fmod_studio_event_description_get_parameter_description_count} to enumerate event parameters.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @param {real} parameter_index The parameter index.
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_description_by_index(event_description_ref, index) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_count
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterDescriptionCount](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getparameterdescriptioncount)
 *
 * <br />
 *
 * This function retrieves the number of parameters in the event.
 * 
 * May be used in conjunction with ${func.fmod_studio_event_description_get_parameter_description_by_index} to enumerate event parameters.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_description_count(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_name
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterLabelByName](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getparameterlabelbyname)
 *
 * <br />
 *
 * This function retrieves an event parameter label by name or path.
 * 
 * `name` can be the short name (such as 'Wind') or the full path (such as 'parameter:/Ambience/Wind'). Path lookups will only succeed if the strings bank has been loaded.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {string} name Parameter name (UTF-8 string).
 * @param {real} label_index Label index to retrieve.
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_label_by_name(event_description_ref, name, label_index) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_id
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterLabelByID](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getparameterlabelbyid)
 *
 * <br />
 *
 * This function retrieves an event parameter label by ID.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @param {struct.FmodStudioParameterId} parameter_id The parameter ID struct.
 * @param {real} label_index The label index to retrieve.
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_label_by_id(event_description_ref, parameter_id, label_index) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_index
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterLabelByIndex](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getparameterlabelbyindex)
 *
 * <br />
 *
 * This function retrieves an event parameter label by index.
 * 
 * May be used in combination with ${func.fmod_studio_event_description_get_parameter_description_count} to enumerate event parameters.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {real} index The parameter index.
 * @param {real} label_index The label index to retrieve.
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_label_by_index(event_description_ref, index, label_index) {}


/**
 * @func fmod_studio_event_description_get_user_property
 * @desc > **FMOD Function:** [Studio::EventDescription::getUserProperty](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getuserproperty)
 *
 * <br />
 *
 * This function retrieves a user property by name.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {string} name The user property name (UTF-8 string).
 * @returns {struct.FmodStudioUserProperty}
 * @func_end
 */
function fmod_studio_event_description_get_user_property(event_description_ref, name, buff_return) {}


/**
 * @func fmod_studio_event_description_get_user_property_by_index
 * @desc > **FMOD Function:** [Studio::EventDescription::getUserPropertyByIndex](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getuserpropertybyindex)
 *
 * <br />
 *
 * This function retrieves a user property by index.
 * 
 * May be used in combination with ${func.fmod_studio_event_description_get_user_property_count} to enumerate event user properties.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {real} index The user property index.
 * @returns {struct.FmodStudioUserProperty}
 * @func_end
 */
function fmod_studio_event_description_get_user_property_by_index(event_description_ref, index, buff_return) {}


/**
 * @func fmod_studio_event_description_get_user_property_count
 * @desc > **FMOD Function:** [Studio::EventDescription::getUserPropertyCount](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getuserpropertycount)
 *
 * <br />
 *
 * This function retrieves the number of user properties attached to the event.
 * 
 * May be used in combination with ${func.fmod_studio_event_description_get_user_property_by_index} to enumerate event user properties.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_user_property_count(event_description_ref, name) {}


/**
 * @func fmod_studio_event_description_get_id
 * @desc > **FMOD Function:** [Studio::EventDescription::getID](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getid)
 *
 * <br />
 *
 * This function retrieves the GUID of the EventDescription.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_id(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_length
 * @desc > **FMOD Function:** [Studio::EventDescription::getLength](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getlength)
 *
 * <br />
 *
 * This function retrieves the length of the timeline in milliseconds.
 * 
 * A timeline's length is the largest of any logic markers, transition leadouts and the end of any trigger boxes on the timeline.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_length(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_path
 * @desc > **FMOD Function:** [Studio::EventDescription::getPath](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getpath)
 *
 * <br />
 *
 * This function retrieves the path of the EventDescription.
 * 
 * The strings bank must be loaded prior to calling this function, otherwise `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next call to ${func.fmod_last_result}.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_path(event_description_ref) {}


/**
 * @func fmod_studio_event_description_set_callback
 * @desc > **FMOD Function:** [Studio::EventDescription::setCallback](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_setcallback)
 *
 * <br />
 *
 * This function enables a user callback which will be assigned to all event instances subsequently created from the event. The callback for individual instances can be set with ${func.fmod_studio_event_instance_set_callback}.
 * 
 * This callback is triggered as an Async Social event.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {constant.FMOD_STUDIO_EVENT_CALLBACK} type The bitfield specifying which callback types are required.
 * 
 * @event social
 * @member {string} type The value `"fmod_studio_event_description_set_callback"`
 * @member {constant.FMOD_STUDIO_EVENT_CALLBACK} kind The callback type passed into the original function.
 * @member {real} event_instance_ref Handle of the EventInstance that has changed state.
 * @member {string} name Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.CREATE_PROGRAMMER_SOUND` or `FMOD_STUDIO_EVENT_CALLBACK.DESTROY_PROGRAMMER_SOUND` or `FMOD_STUDIO_EVENT_CALLBACK.TIMELINE_MARKER`
 * @member {real} sub_sound_index Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.CREATE_PROGRAMMER_SOUND` or `FMOD_STUDIO_EVENT_CALLBACK.DESTROY_PROGRAMMER_SOUND`
 * @member {real} sound_ref Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.CREATE_PROGRAMMER_SOUND` or `FMOD_STUDIO_EVENT_CALLBACK.DESTROY_PROGRAMMER_SOUND`
 * @member {real} position Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.TIMELINE_MARKER` or `FMOD_STUDIO_EVENT_CALLBACK.TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} bar Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} beat Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} tempo Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} time_signature_lower Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} time_signature_upper Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} event_id Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @event_end
 * 
 * @func_end
 */
function fmod_studio_event_description_set_callback(event_description_ref, type) {}


/**
 * @func fmod_studio_event_description_set_user_data
 * @desc > **FMOD Function:** [Studio::EventDescription::setUserData](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_setuserdata)
 *
 * <br />
 *
 * This allows a real value to be attached to this object. See [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data) for an example of how to get and set user data.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {real} data The real value to attach.
 * @func_end
 */
function fmod_studio_event_description_set_user_data(event_description_ref, data) {}


/**
 * @func fmod_studio_event_description_get_user_data
 * @desc > **FMOD Function:** [Studio::EventDescription::getUserData](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_getuserdata)
 *
 * <br />
 *
 * This function retrieves the real value attached to the object in ${func.fmod_studio_event_description_set_user_data}.
 * 
 * Returns `NaN` when no attached value is found.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_user_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_valid
 * @desc > **FMOD Function:** [Studio::EventDescription::isValid](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html#studio_eventdescription_isvalid)
 *
 * <br />
 *
 * This function checks that the EventDescription reference is valid.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_description_is_valid(event_description_ref) {}

// FMOD Studio Event Instance

/**
 * @func fmod_studio_event_instance_start
 * @desc > **FMOD Function:** [Studio::EventInstance::start](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_start)
 *
 * <br />
 *
 * This function starts playback.
 * 
 * If the instance was already playing then calling this function will restart the event.
 * 
 * Generally it is a best practice to call ${func.fmod_studio_event_instance_release} on event instances immediately after starting them, unless you want to play the event instance multiple times or explicitly stop it and start it again later.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @func_end
 */
function fmod_studio_event_instance_start(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_stop
 * @desc > **FMOD Function:** [Studio::EventInstance::stop](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_stop)
 *
 * <br />
 *
 * This function stops playback.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {constant.FMOD_STUDIO_STOP_MODE} mode The stop mode to use.
 * @func_end
 */
function fmod_studio_event_instance_stop(event_instance_ref, mode) {}


/**
 * @func fmod_studio_event_instance_get_playback_state
 * @desc > **FMOD Function:** [Studio::EventInstance::getPlaybackState](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getplaybackstate)
 *
 * <br />
 *
 * This function retrieves the playback state of the EventInstance.
 * 
 * If the instance is invalid, this will return `FMOD_STUDIO_PLAYBACK_STATE.STOPPED`.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {constant.FMOD_STUDIO_PLAYBACK_STATE}
 * @func_end
 */
function fmod_studio_event_instance_get_playback_state(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_paused
 * @desc > **FMOD Function:** [Studio::EventInstance::setPaused](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setpaused)
 *
 * <br />
 *
 * This function sets the pause state of the EventInstance.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} pause `true` to pause, `false` to unpause
 * @func_end
 */
function fmod_studio_event_instance_set_paused(event_instance_ref, pause) {}


/**
 * @func fmod_studio_event_instance_get_paused
 * @desc > **FMOD Function:** [Studio::EventInstance::getPaused](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getpaused)
 *
 * <br />
 *
 * This function returns the pause state of the EventInstance (`true` if paused, otherwise `false`).
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_instance_get_paused(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_keyoff
 * @desc > **FMOD Function:** [Studio::EventInstance::keyOff](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_keyoff)
 *
 * <br />
 *
 * This function allows an event to continue past a sustain point.
 * 
 * Multiple sustain points may be bypassed ahead of time and the key off count will be decremented each time the timeline cursor passes a sustain point.
 * 
 * This results in `FMOD_RESULT.ERR_EVENT_NOTFOUND` (in the next call to ${func.fmod_last_result}) if the event has no sustain points.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @func_end
 */
function fmod_studio_event_instance_keyoff(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_pitch
 * @desc > **FMOD Function:** [Studio::EventInstance::setPitch](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setpitch)
 *
 * <br />
 *
 * This function sets the pitch multiplier.
 * 
 * The pitch multiplier is used to modulate the event instance's pitch. The pitch multiplier can be set to any value greater than or equal to zero but the final combined pitch is clamped to the range [0, 100] before being applied.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} pitch Pitch multiplier, range: (0, inf), default: 1
 * @func_end
 */
function fmod_studio_event_instance_set_pitch(event_instance_ref, pitch) {}


/**
 * @func fmod_studio_event_instance_get_pitch
 * @desc > **FMOD Function:** [Studio::EventInstance::getPitch](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getpitch)
 *
 * <br />
 *
 * This function retrieves the pitch multiplier assigned to the EventInstance.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_pitch(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_property
 * @desc > **FMOD Function:** [Studio::EventInstance::setProperty](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setproperty)
 *
 * <br />
 *
 * This function sets the value of a built-in property.
 * 
 * This will override the value set in Studio. Using the default ${constant.FMOD_STUDIO_EVENT_PROPERTY} value (e.g. -1) will revert back to the default values set in Studio.
 * 
 * An FMOD spatializer or object spatializer may override the values set for `FMOD_STUDIO_EVENT_PROPERTY.MINIMUM_DISTANCE` and `FMOD_STUDIO_EVENT_PROPERTY.MAXIMUM_DISTANCE`.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {constant.FMOD_STUDIO_EVENT_PROPERTY} property Property type to set.
 * @param {real} value Property value to set.
 * @func_end
 */
function fmod_studio_event_instance_set_property(event_instance_ref, property, value) {}


/**
 * @func fmod_studio_event_instance_get_property
 * @desc > **FMOD Function:** [Studio::EventInstance::getProperty](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getproperty)
 *
 * <br />
 *
 * This function retrieves the value of a built-in property.
 * 
 * A default ${constant.FMOD_STUDIO_EVENT_PROPERTY} value means that the Instance is using the value set in Studio and it has not been overridden using ${func.fmod_studio_event_instance_set_property}.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {constant.FMOD_STUDIO_EVENT_PROPERTY} property Property type to get the value of.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_property(event_instance_ref, property) {}


/**
 * @func fmod_studio_event_instance_set_timeline_position
 * @desc > **FMOD Function:** [Studio::EventInstance::setTimelinePosition](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_settimelineposition)
 *
 * <br />
 *
 * This function sets the timeline cursor position.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} position The timeline position in milliseconds.
 * @func_end
 */
function fmod_studio_event_instance_set_timeline_position(event_instance_ref, position) {}


/**
 * @func fmod_studio_event_instance_get_timeline_position
 * @desc > **FMOD Function:** [Studio::EventInstance::getTimelinePosition](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_gettimelineposition)
 *
 * <br />
 *
 * This function retrieves the timeline cursor position.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_timeline_position(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_volume
 * @desc > **FMOD Function:** [Studio::EventInstance::setVolume](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setvolume)
 *
 * <br />
 *
 * This function sets the volume level.
 * 
 * This volume is applied as a scaling factor for the event volume. It does not override the volume level set in FMOD Studio, nor any internal volume automation or modulation.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} volume Volume, Range: (0, inf), Default: 1
 * @func_end
 */
function fmod_studio_event_instance_set_volume(event_instance_ref, volume) {}


/**
 * @func fmod_studio_event_instance_get_volume
 * @desc > **FMOD Function:** [Studio::EventInstance::getVolume](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getvolume)
 *
 * <br />
 *
 * This function retrieves the volume level.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.FmodStudioEventInstanceVolume}
 * @func_end
 */
function fmod_studio_event_instance_get_volume(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_is_virtual
 * @desc > **FMOD Function:** [Studio::EventInstance::isVirtual](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_isvirtual)
 *
 * <br />
 *
 * This function checks whether an event instance has been virtualized due to the polyphony limit being exceeded (`true` or `false`).
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_instance_is_virtual(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_3d_attributes
 * @desc > **FMOD Function:** [Studio::EventInstance::set3DAttributes](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_set3dattributes)
 *
 * <br />
 *
 * This function sets the 3D attributes for the given EventInstance.
 * 
 * An event's 3D attributes specify its position, velocity and orientation. The 3D attributes are used to calculate 3D panning, doppler and the values of automatic distance and angle parameters.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {struct.Fmod3DAttributes} attributes The 3D attributes struct.
 * @func_end
 */
function fmod_studio_event_instance_set_3d_attributes(event_instance_ref, attributes) {}


/**
 * @func fmod_studio_event_instance_get_3d_attributes
 * @desc > **FMOD Function:** [Studio::EventInstance::get3DAttributes](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_get3dattributes)
 *
 * <br />
 *
 * This function retrieves the 3D attributes struct for the given EventInstance.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.Fmod3DAttributes}
 * @func_end
 */
function fmod_studio_event_instance_get_3d_attributes(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_listener_mask
 * @desc > **FMOD Function:** [Studio::EventInstance::setListenerMask](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setlistenermask)
 *
 * <br />
 *
 * This function sets the listener mask.
 * 
 * The listener mask controls which listeners are considered when calculating 3D panning and the values of listener relative [automatic parameters](https://www.fmod.com/docs/2.03/api/glossary.html#automatic-parameter).
 * 
 * To create the mask you must perform bitwise OR and shift operations, the basic form is `1 << listener_index` OR'd together with other required listener indices.
 * For example to create a mask for listener index 0 and 2 the calculation would be `mask = (1 << 0) | (1 << 2)`, to include all listeners use the default mask of `0xFFFFFFFF`.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} mask Listener mask (default: 0xFFFFFFFF)
 * @func_end
 */
function fmod_studio_event_instance_set_listener_mask(event_instance_ref, mask) {}


/**
 * @func fmod_studio_event_instance_get_listener_mask
 * @desc > **FMOD Function:** [Studio::EventInstance::getListenerMask](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getlistenermask)
 *
 * <br />
 *
 * This function retrieves the listener mask.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_listener_mask(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_get_min_max_distance
 * @desc > **FMOD Function:** [Studio::EventInstance::getMinMaxDistance](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getminmaxdistance)
 *
 * <br />
 *
 * This function retrieves the minimum and maximum distances for 3D attenuation as an ${struct.FmodMinMaxDistance} struct.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.FmodMinMaxDistance}
 * @func_end
 */
function fmod_studio_event_instance_get_min_max_distance(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_name
 * @desc > **FMOD Function:** [Studio::EventInstance::setParameterByName](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setparameterbyname)
 *
 * <br />
 *
 * This function sets a parameter value by name.
 * 
 * The value will be set instantly regardless of `ignoreseekspeed` when the Event playback state is `FMOD_STUDIO_PLAYBACK_STATE.STOPPED`.
 * 
 * If the specified parameter is read only, is an automatic parameter or is not of type `FMOD_STUDIO_PARAMETER_TYPE.GAME_CONTROLLED` then `FMOD_RESULT.ERR_INVALID_PARAM` is returned in the next ${func.fmod_last_result} call.
 * 
 * If the event has no parameter matching name then `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next ${func.fmod_last_result} call.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {string} name Parameter name (case-insensitive, UTF-8 string).
 * @param {real} value Value for given name.
 * @param {boolean} [ignore_seek_speed=false] Whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
 */
function fmod_studio_event_instance_set_parameter_by_name(event_instance_ref, name, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_name_with_label
 * @desc > **FMOD Function:** [Studio::EventInstance::setParameterByNameWithLabel](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setparameterbynamewithlabel)
 *
 * <br />
 *
 * This function sets a parameter value by name, looking up the value label.
 * 
 * The value will be set instantly regardless of `ignoreseekspeed` when the Event playback state is `FMOD_STUDIO_PLAYBACK_STATE.STOPPED`.
 * 
 * If the specified parameter is read only, is an automatic parameter or is not of type `FMOD_STUDIO_PARAMETER_TYPE.GAME_CONTROLLED` then `FMOD_RESULT.ERR_INVALID_PARAM` is returned in the next ${func.fmod_last_result} call.
 * 
 * If the event has no parameter matching name then `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next ${func.fmod_last_result} call.
 * 
 * If the specified label is not found, `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next ${func.fmod_last_result} call. This lookup is case sensitive.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {string} name Parameter name (case-insensitive, UTF-8 string).
 * @param {string} label Labeled value for the given name.
 * @param {boolean} [ignore_seek_speed=false] Whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
 */
function fmod_studio_event_instance_set_parameter_by_name_with_label(event_instance_ref, name, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_get_parameter_by_name
 * @desc > **FMOD Function:** [Studio::EventInstance::getParameterByName](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getparameterbyname)
 *
 * <br />
 *
 * This function retrieves a parameter value by name.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {string} name Parameter name (case-insensitive, UTF-8 string).
 * @returns {struct.FmodStudioParameter}
 * @func_end
 */
function fmod_studio_event_instance_get_parameter_by_name(event_instance_ref, name) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_id
 * @desc > **FMOD Function:** [Studio::EventInstance::setParameterByID](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setparameterbyid)
 *
 * <br />
 *
 * This function sets a parameter value by unique identifier.
 * 
 * The value will be set instantly regardless of `ignoreseekspeed` when the Event playback state is `FMOD_STUDIO_PLAYBACK_STATE.STOPPED`.
 * 
 * If the specified parameter is read only, is an automatic parameter or is not of type `FMOD_STUDIO_PARAMETER_TYPE.GAME_CONTROLLED` then `FMOD_RESULT.ERR_INVALID_PARAM` is returned in the next ${func.fmod_last_result} call.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {struct.FmodStudioParameterId} parameter_id Parameter identifier.
 * @param {real} value Value for given identifier.
 * @param {boolean} [ignore_seek_speed=false] Whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
 */
function fmod_studio_event_instance_set_parameter_by_id(event_instance_ref, parameter_id, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_id_with_label
 * @desc > **FMOD Function:** [Studio::EventInstance::setParameterByIDWithLabel](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setparameterbyidwithlabel)
 *
 * <br />
 *
 * This function sets a parameter value by unique identifier, looking up the value label.
 * 
 * The value will be set instantly regardless of `ignoreseekspeed` when the Event playback state is `FMOD_STUDIO_PLAYBACK_STATE.STOPPED`.
 * 
 * If the specified parameter is read only, is an automatic parameter or is not of type `FMOD_STUDIO_PARAMETER_TYPE.GAME_CONTROLLED` then `FMOD_RESULT.ERR_INVALID_PARAM` is returned in the next ${func.fmod_last_result} call.
 * 
 * If the specified label is not found, `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next ${func.fmod_last_result} call. This lookup is case sensitive.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {struct.FmodStudioParameterId} parameter_id Parameter identifier.
 * @param {string} label Labeled value for given name.
 * @param {boolean} [ignore_seek_speed=false] Whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
 */
function fmod_studio_event_instance_set_parameter_by_id_with_label(event_instance_ref, parameter_id, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_get_parameter_by_id
 * @desc > **FMOD Function:** [Studio::EventInstance::getParameterByID](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getparameterbyid)
 *
 * <br />
 *
 * This function retrieves a parameter value by unique identifier.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {struct.FmodStudioParameterId} parameter_id The parameter identifier.
 * @returns {struct.FmodStudioParameter}
 * @func_end
 */
function fmod_studio_event_instance_get_parameter_by_id(event_instance_ref, parameter_id) {}


/**
 * @func fmod_studio_event_instance_get_channel_group
 * @desc > **FMOD Function:** [Studio::EventInstance::getChannelGroup](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getchannelgroup)
 *
 * <br />
 *
 * This function retrieves the core `ChannelGroup` corresponding to the master track.
 * 
 * Until the event instance has been fully created this function will result in `FMOD_RESULT.ERR_STUDIO_NOT_LOADED` (in the next ${func.fmod_last_result} call).
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_channel_group(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_reverb_level
 * @desc > **FMOD Function:** [Studio::EventInstance::setReverbLevel](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setreverblevel)
 *
 * <br />
 *
 * This function sets the core reverb send level.
 * 
 * This controls the send level for the signal from the event instance to a core reverb instance.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} index Core reverb instance index, Range: [0, 3]
 * @param {real} level Reverb send level, Linear, Range: [0, 1], Default: 0\
 * @func_end
 */
function fmod_studio_event_instance_set_reverb_level(event_instance_ref, index, level) {}


/**
 * @func fmod_studio_event_instance_get_reverb_level
 * @desc > **FMOD Function:** [Studio::EventInstance::getReverbLevel](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getreverblevel)
 *
 * <br />
 *
 * This function retrieves the core reverb send level.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} index Core reverb instance index, Range: [0, 3]
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_reverb_level(event_instance_ref, index) {}


/**
 * @func fmod_studio_event_instance_get_cpu_usage
 * @desc > **FMOD Function:** [Studio::EventInstance::getCPUUsage](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getcpuusage)
 *
 * <br />
 *
 * This function retrieves the event CPU usage data.
 * 
 * `FMOD_INIT.PROFILE_ENABLE` with ${func.fmod_system_init} is required to call this function.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.FmodCPUUsage}
 * @func_end
 */
function fmod_studio_event_instance_get_cpu_usage(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_get_memory_usage
 * @desc > **FMOD Function:** [Studio::EventInstance::getMemoryUsage](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getmemoryusage)
 *
 * <br />
 *
 * This function retrieves memory usage statistics.
 * 
 * Memory usage statistics are only available in logging builds, in release builds the struct will contain zero for all values.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.FmodStudioMemoryUsage}
 * @func_end
 */
function fmod_studio_event_instance_get_memory_usage(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_callback
 * @desc > **FMOD Function:** [Studio::EventInstance::setCallback](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setcallback)
 *
 * <br />
 *
 * This function enables the user callback in the Async Social event.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {constant.FMOD_STUDIO_EVENT_CALLBACK} type Bitfield specifying which callback types are required.
 * 
 * @event social
 * @member {string} type The value `"fmod_studio_event_description_set_callback"`
 * @member {constant.FMOD_STUDIO_EVENT_CALLBACK} kind The callback type passed into the original function.
 * @member {real} event_instance_ref Handle of the EventInstance that has changed state.
 * @member {string} name Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.CREATE_PROGRAMMER_SOUND` or `FMOD_STUDIO_EVENT_CALLBACK.DESTROY_PROGRAMMER_SOUND` or `FMOD_STUDIO_EVENT_CALLBACK.TIMELINE_MARKER`
 * @member {real} sub_sound_index Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.CREATE_PROGRAMMER_SOUND` or `FMOD_STUDIO_EVENT_CALLBACK.DESTROY_PROGRAMMER_SOUND`
 * @member {real} sound_ref Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.CREATE_PROGRAMMER_SOUND` or `FMOD_STUDIO_EVENT_CALLBACK.DESTROY_PROGRAMMER_SOUND`
 * @member {real} position Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.TIMELINE_MARKER` or `FMOD_STUDIO_EVENT_CALLBACK.TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} bar Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} beat Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} tempo Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} time_signature_lower Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} time_signature_upper Valid when kind=`FMOD_STUDIO_EVENT.CALLBACK_TIMELINE_BEAT` or `FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @member {real} event_id Valid when kind=`FMOD_STUDIO_EVENT_CALLBACK.NESTED_TIMELINE_BEAT`
 * @event_end
 * 
 * @func_end
 */
function fmod_studio_event_instance_set_callback(event_instance_ref, type) {}


/**
 * @func fmod_studio_event_instance_set_user_data
 * @desc > **FMOD Function:** [Studio::EventInstance::setUserData](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_setuserdata)
 *
 * <br />
 *
 * This allows a real value to be attached to this object. See [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data) for an example of how to get and set user data.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} data The real value to attach.
 * @func_end
 */
function fmod_studio_event_instance_set_user_data(event_instance_ref, data) {}


/**
 * @func fmod_studio_event_instance_get_user_data
 * @desc > **FMOD Function:** [Studio::EventInstance::getUserData](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getuserdata)
 *
 * <br />
 *
 * This function retrieves the real value attached to this object in ${func.fmod_studio_event_instance_set_user_data}.
 * 
 * Returns `NaN` if no attached user data is found.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_user_data(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_get_description
 * @desc > **FMOD Function:** [Studio::EventInstance::getDescription](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_getdescription)
 *
 * <br />
 *
 * This function retrieves a handle to the EventDescription for the given EventInstance.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_description(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_release
 * @desc > **FMOD Function:** [Studio::EventInstance::release](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_release)
 *
 * <br />
 *
 * This function marks the event instance to be released. Event instances marked for release are destroyed by the asynchronous update when they are in the stopped state (`FMOD_STUDIO_PLAYBACK_STATE.STOPPED`).
 * 
 * Generally it is a best practice to release event instances immediately after calling ${func.fmod_studio_event_instance_start}, unless you want to play the event instance multiple times or explicitly stop it and start it again later. It is possible to interact with the instance after calling release(), however if the sound has stopped `FMOD_RESULT.ERR_INVALID_HANDLE` will be returned in the next ${func.fmod_last_result} call.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @func_end
 */
function fmod_studio_event_instance_release(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_is_valid
 * @desc > **FMOD Function:** [Studio::EventInstance::isValid](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html#studio_eventinstance_isvalid)
 *
 * <br />
 *
 * This function checks whether the EventInstance reference is valid (`true`) or not (`false`).
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {boolean}
 * @func_end
 */
function fmod_studio_event_instance_is_valid(event_instance_ref) {}

// FMOD Studio System

/**
 * @func fmod_studio_system_create
 * @desc > **FMOD Function:** [Studio::System::create](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_create)
 *
 * <br />
 *
 * This is the FMOD Studio System creation function.
 * 
 * Call ${func.fmod_studio_system_release} to free the Studio System.
 * 
 * @func_end
 */
function fmod_studio_system_create() {}


/**
 * @func fmod_studio_system_init
 * @desc > **FMOD Function:** [Studio::System::initialize](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_initialize)
 *
 * <br />
 *
 * This function initializes the Studio System.
 * 
 * The core system used by the studio system is initialized at the same time as the studio system.
 * 
 * The `flags` parameter is passed to ${func.fmod_system_init} to initialize the core.
 * 
 * See [Getting Started](https://github.com/YoYoGames/GMEXT-FMOD/wiki/GettingStarted) for examples on initialising and updating FMOD systems.
 * 
 * @param {real} max_channels The maximum number of [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html), including both virtual and real, to be used in FMOD.
 * @param {constant.FMOD_STUDIO_INIT} studio_flags Studio system initialization flags.
 * @param {constant.FMOD_INIT} core_flags Core system initialization flags.
 * @func_end
 */
function fmod_studio_system_init(max_channels, studio_flags, core_flags) {}


/**
 * @func fmod_studio_system_release
 * @desc > **FMOD Function:** [Studio::System::release](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_release)
 *
 * <br />
 *
 * This function shuts down and frees the Studio System object.
 * 
 * This will free the memory used by the Studio System object and everything created under it.
 * 
 * @func_end
 */
function fmod_studio_system_release() {}


/**
 * @func fmod_studio_system_update
 * @desc > **FMOD Function:** [Studio::System::update](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_update)
 *
 * <br />
 *
 * This function updates the FMOD Studio System.
 * 
 * See [Getting Started](https://github.com/YoYoGames/GMEXT-FMOD/wiki/GettingStarted) for examples on initialising and updating FMOD systems.
 * 
 * @func_end
 */
function fmod_studio_system_update() {}


/**
 * @func fmod_studio_system_flush_commands
 * @desc > **FMOD Function:** [Studio::System::flushCommands](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_flushcommands)
 *
 * <br />
 *
 * This function blocks the calling thread until all pending commands have been executed and all non-blocking bank loads have been completed.
 * 
 * @func_end
 */
function fmod_studio_system_flush_commands() {}


/**
 * @func fmod_studio_system_flush_sample_loading
 * @desc > **FMOD Function:** [Studio::System::flushSampleLoading](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_flushsampleloading)
 *
 * <br />
 *
 * This function blocks until all sample loading and unloading has completed.
 * 
 * @func_end
 */
function fmod_studio_system_flush_sample_loading() {}


/**
 * @func fmod_studio_system_load_bank_custom
 * @desc > **FMOD Function:** [Studio::System::loadBankCustom](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_loadbankcustom)
 *
 * <br />
 *
 * This function loads the metadata of a Studio bank and returns a handle to the Bank.
 * 
 * Sample data must be loaded separately; see [Sample Data Loading](https://www.fmod.com/docs/2.03/api/studio-guide.html#sample-data-loading) for details.
 * 
 * If you use `FMOD_STUDIO_LOAD_BANK.NONBLOCKING`, this function will return a Bank handle which will be usable once it has been loaded asynchronously. This is indicated by the ${func.fmod_last_result} value after a function call that uses the Bank handle.
 * 
 * If a bank has been split, separating out assets and optionally streams from the metadata bank, all parts must be loaded before any APIs that use the data are called. It is recommended you load each part one after another (order is not important), then proceed with dependent API calls such as ${func.fmod_studio_bank_load_sample_data} or ${func.fmod_studio_system_get_event}.
 * 
 * @param {constant.FMOD_STUDIO_LOAD_BANK} flags Flags to control bank loading.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_load_bank_custom(flags) {}


/**
 * @func fmod_studio_system_load_bank_file
 * @desc > **FMOD Function:** [Studio::System::loadBankFile](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_loadbankfile)
 *
 * <br />
 *
 * This function loads the metadata of a Studio bank from file, returning a handle to the Bank.
 * 
 * Sample data must be loaded separately; see [Sample Data Loading](https://www.fmod.com/docs/2.03/api/studio-guide.html#sample-data-loading) for details.
 * 
 * If you use `FMOD_STUDIO_LOAD_BANK.NONBLOCKING`, this function will return a Bank handle which will be usable once it has been loaded asynchronously. This is indicated by the ${func.fmod_last_result} value after a function call that uses the Bank handle.
 * 
 * If a bank has been split, separating out assets and optionally streams from the metadata bank, all parts must be loaded before any APIs that use the data are called. It is recommended you load each part one after another (order is not important), then proceed with dependent API calls such as ${func.fmod_studio_bank_load_sample_data} or ${func.fmod_studio_system_get_event}.
 * 
 * @param {string} filename Name of the file on the disk.
 * @param {constant.FMOD_STUDIO_LOAD_BANK} flags Flags to control bank loading.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_load_bank_file(filename, flags) {}


/**
 * @func fmod_studio_system_load_bank_memory
 * @desc > **FMOD Function:** [Studio::System::loadBankMemory](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_loadbankmemory)
 *
 * <br />
 *
 * This function loads the metadata of a Studio bank from memory, returning a handle to the Bank object.
 * 
 * Sample data must be loaded separately; see [Sample Data Loading](https://www.fmod.com/docs/2.03/api/studio-guide.html#sample-data-loading) for details.
 * 
 * When mode is `FMOD_STUDIO_LOAD_MEMORY_MODE.MEMORY`, FMOD will allocate an internal buffer and copy the data from the passed in buffer before using it. When used in this mode there are no alignment restrictions on buffer and the memory pointed to by buffer may be cleaned up at any time after this function returns.
 * 
 * When mode is `FMOD_STUDIO_LOAD_MEMORY_MODE.MEMORY_POINT`, FMOD will use the passed memory buffer directly. When using this mode the buffer must be aligned to ${constant.FMOD_STUDIO_LOAD_MEMORY_ALIGNMENT} and the memory must persist until the bank has been fully unloaded, which can be some time after calling ${func.fmod_studio_bank_unload} to unload the bank. You can ensure the memory is not being freed prematurely by only freeing it after receiving the `FMOD_STUDIO_SYSTEM_CALLBACK.BANK_UNLOAD` callback (enabled in ${func.fmod_studio_system_set_callback}).
 * 
 * If you use `FMOD_STUDIO_LOAD_BANK.NONBLOCKING`, this function will return a Bank handle which will be usable once it has been loaded asynchronously. This is indicated by the ${func.fmod_last_result} value after a function call that uses the Bank handle.
 * 
 * If a bank has been split, separating out assets and optionally streams from the metadata bank, all parts must be loaded before any APIs that use the data are called. It is recommended you load each part one after another (order is not important), then proceed with dependent API calls such as ${func.fmod_studio_bank_load_sample_data} or ${func.fmod_studio_system_get_event}.
 * 
 * @param {real} buff_data Memory buffer.
 * @param {real} length Length of the memory buffer.
 * @param {constant.FMOD_STUDIO_LOAD_MEMORY_MODE} mode Loading mode to use.
 * @param {constant.FMOD_STUDIO_LOAD_BANK} flags Flags to control bank loading.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_load_bank_memory(buff_data, length, mode, flags) {}


/**
 * @func fmod_studio_system_unload_all
 * @desc > **FMOD Function:** [Studio::System::unloadAll](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_unloadall)
 *
 * <br />
 *
 * This function unloads all currently loaded banks.
 * 
 * @func_end
 */
function fmod_studio_system_unload_all() {}


/**
 * @func fmod_studio_system_get_bank
 * @desc > **FMOD Function:** [Studio::System::getBank](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getbank)
 *
 * <br />
 *
 * This function retrieves a loaded bank.
 * 
 * `path` may be a path, such as `bank:/Weapons` or an ID string such as `{793cddb6-7fa1-4e06-b805-4c74c0fd625b}`.
 * 
 * Note that path lookups will only succeed if the [strings bank](https://www.fmod.com/docs/2.03/api/glossary.html#studio-strings-bank) has been loaded.
 * 
 * @param {string} path The bank [path](https://www.fmod.com/docs/2.03/api/glossary.html#studio-guids-and-paths) or the [ID string](https://www.fmod.com/docs/2.03/api/glossary.html#studio-guids-and-paths) that identifies the bank. (UTF-8 string)
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bank(path) {}


/**
 * @func fmod_studio_system_get_bank_by_id
 * @desc > **FMOD Function:** [Studio::System::getBankByID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getbankbyid)
 *
 * <br />
 *
 * This function retrieves a loaded bank by its GUID.
 * 
 * @param {string} guid_str Bank [GUID](https://www.fmod.com/docs/2.03/api/glossary.html#studio-guids-and-paths).
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bank_by_id(guid_str) {}


/**
 * @func fmod_studio_system_get_bank_count
 * @desc > **FMOD Function:** [Studio::System::getBankCount](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getbankcount)
 *
 * <br />
 *
 * This function retrieves the number of loaded banks.
 * 
 * May be used in conjunction with ${func.fmod_studio_system_get_bank_list} to enumerate the loaded banks.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bank_count() {}


/**
 * @func fmod_studio_system_get_bank_list
 * @desc > **FMOD Function:** [Studio::System::getBankList](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getbanklist)
 *
 * <br />
 *
 * This function retrieves an array containing the loaded banks.
 * 
 * May be used in conjunction with ${func.fmod_studio_system_get_bank_count} to enumerate the loaded banks.
 * 
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_system_get_bank_list() {}


/**
 * @func fmod_studio_system_set_listener_attributes
 * @desc > **FMOD Function:** [Studio::System::setListenerAttributes](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setlistenerattributes)
 *
 * <br />
 *
 * This function sets the 3D attributes of the listener.
 * 
 * If you don't pass a value for `attenuation`, the listener only uses the position in `attributes`.
 * 
 * @param {real} listener_index Index of listener to set 3D attributes on. Listeners are indexed from 0, to ${constant.FMOD_MAX_LISTENERS} - 1, in a multi-listener environment.
 * @param {struct.Fmod3DAttributes} attributes 3D attributes.
 * @param {struct.FmodVector} [attenuation=undefined] Position used for calculating attenuation.
 * @func_end
 */
function fmod_studio_system_set_listener_attributes(listener_index, attributes, attenuation) {}


/**
 * @func fmod_studio_system_get_listener_attributes
 * @desc > **FMOD Function:** [Studio::System::getListenerAttributes](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getlistenerattributes)
 *
 * <br />
 *
 * This function retrieves listener 3D attributes, containing a struct for the attributes, and a struct for the attenuation position.
 * 
 * @param {real} listener_index Index of listener to set 3D attributes on. Listeners are indexed from 0, to ${constant.FMOD_MAX_LISTENERS} - 1, in a multi-listener environment.
 * @returns {struct.FmodStudioListenerAttributes}
 * @func_end
 */
function fmod_studio_system_get_listener_attributes(listener_index) {}


/**
 * @func fmod_studio_system_set_listener_weight
 * @desc > **FMOD Function:** [Studio::System::setListenerWeight](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setlistenerweight)
 *
 * <br />
 *
 * This function sets the listener weighting.
 * 
 * Listener weighting is a factor which determines how much the listener influences the mix. It is taken into account for 3D panning, doppler, and the automatic distance event parameter. A listener with a weight of 0 has no effect on the mix.
 * 
 * Listener weighting can be used to fade in and out multiple listeners. For example to do a crossfade, an additional listener can be created with a weighting of 0 that ramps up to 1 while the old listener weight is ramped down to 0. After the crossfade is finished the number of listeners can be reduced to 1 again.
 * 
 * The sum of all the listener weights should add up to at least 1. It is a user error to set all listener weights to 0.
 * 
 * @param {real} listener_index Listener index.
 * @param {real} weight Weighting value, Range: [0, 1], Default: 1
 * @func_end
 */
function fmod_studio_system_set_listener_weight(listener_index, weight) {}


/**
 * @func fmod_studio_system_get_listener_weight
 * @desc > **FMOD Function:** [Studio::System::getListenerWeight](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getlistenerweight)
 *
 * <br />
 *
 * This function retrieves the weighting value of the listener.
 * 
 * @param {real} listener_index Listener index.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_listener_weight(listener_index) {}


/**
 * @func fmod_studio_system_set_num_listeners
 * @desc > **FMOD Function:** [Studio::System::setNumListeners](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setnumlisteners)
 *
 * <br />
 *
 * This function sets the number of listeners in the 3D sound scene.
 * 
 * If the number of listeners is set to more than 1 then FMOD uses a 'closest sound to the listener' method to determine what should be heard.
 * 
 * See the [Studio 3D Events](https://www.fmod.com/docs/2.03/api/white-papers-studio-3d-events.html#multiple-listeners) white paper for more information.
 * 
 * @param {real} num Number of listeners, Range: [1, ${constant.FMOD_MAX_LISTENERS}], Default: 1
 * @func_end
 */
function fmod_studio_system_set_num_listeners(num) {}


/**
 * @func fmod_studio_system_get_num_listeners
 * @desc > **FMOD Function:** [Studio::System::getNumListeners](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getnumlisteners)
 *
 * <br />
 *
 * This function retrieves the number of listeners.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_num_listeners() {}


/**
 * @func fmod_studio_system_get_bus
 * @desc > **FMOD Function:** [Studio::System::getBus](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getbus)
 *
 * <br />
 *
 * This function allows you to retrieve a handle for any bus in the global mixer.
 * 
 * `path` may be a path, such as `bus:/SFX/Ambience` or an ID string such as `{793cddb6-7fa1-4e06-b805-4c74c0fd625b}`.
 * 
 * Note that path lookups will only succeed if the [strings bank](https://www.fmod.com/docs/2.03/api/glossary.html#studio-strings-bank) has been loaded.
 * 
 * @param {string} path The bank [path](https://www.fmod.com/docs/2.03/api/glossary.html#studio-guids-and-paths) or the [ID string](https://www.fmod.com/docs/2.03/api/glossary.html#studio-guids-and-paths) that identifies the bus. (UTF-8 string)
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bus(path) {}


/**
 * @func fmod_studio_system_get_bus_by_id
 * @desc > **FMOD Function:** [Studio::System::getBusByID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getbusbyid)
 *
 * <br />
 *
 * This function allows you to retrieve a handle for any bus in the global mixer using its GUID.
 * 
 * @param {string} guid Bus GUID.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bus_by_id(guid) {}


/**
 * @func fmod_studio_system_get_event
 * @desc > **FMOD Function:** [Studio::System::getEvent](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getevent)
 *
 * <br />
 * 
 * This function allows you to retrieve a handle to any loaded event description.
 * 
 * `path` may be a path, such as `event:/UI/Cancel` or an ID string such as `{793cddb6-7fa1-4e06-b805-4c74c0fd625b}`.
 * 
 * Note that path lookups will only succeed if the [strings bank](https://www.fmod.com/docs/2.03/api/glossary.html#studio-strings-bank) has been loaded.
 * 
 * @param {string} path The [path or the ID string](https://www.fmod.com/docs/2.03/api/glossary.html#studio-guids-and-paths) that identifies the event or snapshot. (UTF-8 string)
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_event(path) {}


/**
 * @func fmod_studio_system_get_event_by_id
 * @desc > **FMOD Function:** [Studio::System::getEventByID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_geteventbyid)
 *
 * <br />
 *
 * This function allows you to retrieve a handle to any loaded event description by its GUID.
 * 
 * @param {string} guid_str Event or snapshot GUID.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_event_by_id(guid_str) {}


/**
 * @func fmod_studio_system_get_parameter_by_id
 * @desc > **FMOD Function:** [Studio::System::getParameterByID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getparameterbyid)
 *
 * <br />
 *
 * This function retrieves a global parameter value struct by its unique identifier.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id Parameter identifier.
 * @return {struct.FmodStudioParameter}
 * @func_end
 */
function fmod_studio_system_get_parameter_by_id(parameter_id) {}


/**
 * @func fmod_studio_system_set_parameter_by_id
 * @desc > **FMOD Function:** [Studio::System::setParameterByID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setparameterbyid)
 *
 * <br />
 *
 * This function sets a global parameter value by unique identifier.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id Parameter identifier.
 * @param {real} value Value for given identifier.
 * @param {bool} [ignore_seek_speed=false] Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
 */
function fmod_studio_system_set_parameter_by_id(parameter_id, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_set_parameter_by_id_with_label
 * @desc > **FMOD Function:** [Studio::System::setParameterByIDWithLabel](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setparameterbyidwithlabel)
 *
 * <br />
 *
 * This function sets a global parameter value by unique identifier, looking up the value label.
 * 
 * If the specified label is not found, `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next ${func.fmod_last_result} call. This lookup is case sensitive.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id Parameter identifier.
 * @param {string} label Labeled value for given identifier.
 * @param {bool} [ignore_seek_speed=false] Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
 */
function fmod_studio_system_set_parameter_by_id_with_label(parameter_id, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_get_parameter_by_name
 * @desc > **FMOD Function:** [Studio::System::getParameterByName](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getparameterbyname)
 *
 * <br />
 *
 * This function retrieves a global parameter value struct by name.
 * 
 * @param {string} name Parameter name (case-insensitive). (UTF-8 string)
 * @returns {struct.FmodStudioParameter}
 * @func_end
 */
function fmod_studio_system_get_parameter_by_name(name) {}


/**
 * @func fmod_studio_system_set_parameter_by_name
 * @desc > **FMOD Function:** [Studio::System::setParameterByName](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setparameterbyname)
 *
 * <br />
 *
 * This function sets a global parameter value by name.
 * 
 * @param {string} name Parameter name (case-insensitive). (UTF-8 string)
 * @param {real} value Value for given name.
 * @param {real} [ignore_seek_speed=false] Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
 */
function fmod_studio_system_set_parameter_by_name(name, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_set_parameter_by_name_with_label
 * @desc > **FMOD Function:** [Studio::System::setParameterByNameWithLabel](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setparameterbynamewithlabel)
 *
 * <br />
 *
 * This function sets a global parameter value by name, looking up the value label.
 * 
 * @param {string} name Parameter name (case-insensitive). (UTF-8 string)
 * @param {string} label Labeled value for given name.
 * @param {real} [ignore_seek_speed=false] Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
 */
function fmod_studio_system_set_parameter_by_name_with_label(name, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_get_parameter_description_by_name
 * @desc > **FMOD Function:** [Studio::System::getParameterDescriptionByName](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getparameterdescriptionbyname)
 *
 * <br />
 *
 * This function retrieves a global parameter by name or path.
 * 
 * `name` can be the short name (such as 'Wind') or the full path (such as 'parameter:/Ambience/Wind'). Path lookups will only succeed if the strings bank has been loaded.
 * 
 * @param {string} name Parameter name. (UTF-8 string)
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_system_get_parameter_description_by_name(name) {}


/**
 * @func fmod_studio_system_get_parameter_description_by_id
 * @desc > **FMOD Function:** [Studio::System::getParameterDescriptionByID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getparameterdescriptionbyid)
 *
 * <br />
 *
 * This function retrieves a global parameter by ID.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id Parameter ID.
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_system_get_parameter_description_by_id(parameter_id) {}


/**
 * @func fmod_studio_system_get_parameter_description_count
 * @desc > **FMOD Function:** [Studio::System::getParameterDescriptionCount](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getparameterdescriptioncount)
 *
 * <br />
 *
 * This function retrieves the number of global parameters.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_parameter_description_count() {}


/**
 * @func fmod_studio_system_get_parameter_description_list
 * @desc > **FMOD Function:** [Studio::System::getParameterDescriptionList](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getparameterdescriptionlist)
 *
 * <br />
 *
 * This function retrieves an array of global parameters.
 * 
 * @returns {array[struct.FmodStudioParameterDescription]}
 * @func_end
 */
function fmod_studio_system_get_parameter_description_list() {}


/**
 * @func fmod_studio_system_get_parameter_label_by_name
 * @desc > **FMOD Function:** [Studio::System::getParameterLabelByName](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getparameterlabelbyname)
 *
 * <br />
 *
 * This function retrieves a global parameter label by name or path.
 * 
 * `name` can be the short name (such as 'Wind') or the full path (such as 'parameter:/Ambience/Wind'). Path lookups will only succeed if the strings bank has been loaded.
 * 
 * @param {string} name Parameter name. (UTF-8 string)
 * @param {real} labelindex Label index to retrieve.
 * @returns {string}
 * @func_end
 */
function fmod_studio_system_get_parameter_label_by_name(name, labelindex) {}


/**
 * @func fmod_studio_system_get_parameter_label_by_id
 * @desc > **FMOD Function:** [Studio::System::getParameterLabelByID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getparameterlabelbyid)
 *
 * <br />
 *
 * This function retrieves a global parameter label by ID.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id Parameter ID.
 * @param {real} label_index Label index to retrieve.
 * @returns {string}
 * @func_end
 */
function fmod_studio_system_get_parameter_label_by_id(parameter_id, label_index) {}


/**
 * @func fmod_studio_system_get_vca
 * @desc > **FMOD Function:** [Studio::System::getVCA](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getvca)
 *
 * <br />
 *
 * This function allows you to retrieve a handle for any VCA in the global mixer.
 * 
 * `path` may be a path, such as `vca:/MyVCA`, or an ID string, such as `{d9982c58-a056-4e6c-b8e3-883854b4bffb}`.
 * 
 * Note that path lookups will only succeed if the [strings bank](https://www.fmod.com/docs/2.03/api/glossary.html#studio-strings-bank) has been loaded.
 * 
 * @param {string} path The path or the ID string that identifies the VCA. (UTF-8 string)
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_vca(path) {}


/**
 * @func fmod_studio_system_get_vca_by_id
 * @desc > **FMOD Function:** [Studio::System::getVCAByID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getvcabyid)
 *
 * <br />
 *
 * This function allows you to retrieve a handle for any VCA in the global mixer by its GUID.
 * 
 * @param {string} guid_str VCA GUID.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_vca_by_id(guid_str) {}


/**
 * @func fmod_studio_system_set_advanced_settings
 * @desc > **FMOD Function:** [Studio::System::setAdvancedSettings](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setadvancedsettings)
 *
 * <br />
 *
 * This function sets advanced settings. This must be called prior to Studio initialization.
 * 
 * @param {struct.FmodStudioAdvancedSettings} settings
 * 
 * @example
 * ```gml
 * var _adv_settings = new FmodStudioAdvancedSettings();
 * _adv_settings.studio_update_period = 40;
 * _adv_settings.streaming_schedule_delay = -1;
 * fmod_studio_system_set_advanced_settings(_adv_settings);
 * ```
 * 
 * @func_end
 */
function fmod_studio_system_set_advanced_settings(settings) {}


/**
 * @func fmod_studio_system_get_advanced_settings
 * @desc > **FMOD Function:** [Studio::System::getAdvancedSettings](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getadvancedsettings)
 *
 * <br />
 *
 * This function retrieves advanced settings.
 * 
 * @returns {struct.FmodStudioAdvancedSettings}
 * @func_end
 */
function fmod_studio_system_get_advanced_settings() {}


/**
 * @func fmod_studio_system_start_command_capture
 * @desc > **FMOD Function:** [Studio::System::startCommandCapture](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_startcommandcapture)
 *
 * <br />
 *
 * This function starts recording Studio commands to a file.
 * 
 * The commands generated by the FMOD Studio API can be captured and later replayed for debug and profiling purposes.
 * 
 * Unless the `FMOD_STUDIO_COMMANDCAPTURE.SKIP_INITIAL_STATE` flag is specified, the command capture will first record the set of all banks and event instances that currently exist.
 * 
 * @param {string} filename The name of the file to which the recorded commands are written. (UTF-8 string)
 * @param {constant.FMOD_STUDIO_COMMANDCAPTURE} flags Flags that control command capturing.
 * @func_end
 */
function fmod_studio_system_start_command_capture(filename, flags) {}


/**
 * @func fmod_studio_system_stop_command_capture
 * @desc > **FMOD Function:** [Studio::System::stopCommandCapture](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_stopcommandcapture)
 *
 * <br />
 *
 * This function stops recording Studio commands.
 * 
 * @func_end
 */
function fmod_studio_system_stop_command_capture() {}


/**
 * @func fmod_studio_system_load_command_replay
 * @desc > **FMOD Function:** [Studio::System::loadCommandReplay](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_loadcommandreplay)
 *
 * <br />
 *
 * This function loads a command replay and returns its handle.
 * 
 * @param {string} filename The name of the file from which to load the command replay. (UTF-8 string)
 * @param {constant.FMOD_STUDIO_COMMANDCAPTURE} flags Flags that control command capturing.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_load_command_replay(filename, flags) {}


/**
 * @func fmod_studio_system_get_buffer_usage
 * @desc > **FMOD Function:** [Studio::System::getBufferUsage](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getbufferusage)
 *
 * <br />
 *
 * This function retrieves buffer usage information in a struct.
 * 
 * Stall count and time values are cumulative. They can be reset by calling ${func.fmod_studio_system_reset_buffer_usage}.
 * 
 * Stalls due to the studio command queue overflowing can be avoided by setting a larger command queue size with ${func.fmod_studio_system_set_advanced_settings}.
 * 
 * @returns {struct.FmodStudioBufferUsage}
 * @func_end
 */
function fmod_studio_system_get_buffer_usage() {}


/**
 * @func fmod_studio_system_reset_buffer_usage
 * @desc > **FMOD Function:** [Studio::System::resetBufferUsage](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_resetbufferusage)
 *
 * <br />
 *
 * This function resets the memory buffer usage statistics tracked by the FMOD Studio System.
 * 
 * @func_end
 */
function fmod_studio_system_reset_buffer_usage() {}


/**
 * @func fmod_studio_system_get_cpu_usage
 * @desc > **FMOD Function:** [Studio::System::getCPUUsage](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getcpuusage)
 *
 * <br />
 *
 * This function retrieves the amount of CPU used for different parts of the Studio engine.
 * 
 * For readability, the percentage values are smoothed to provide a more stable output.
 * 
 * @returns {struct.FmodStudioCPUUsage}
 * @func_end
 */
function fmod_studio_system_get_cpu_usage() {}


/**
 * @func fmod_studio_system_get_memory_usage
 * @desc > **FMOD Function:** [Studio::System::getMemoryUsage](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getmemoryusage)
 *
 * <br />
 *
 * This function retrieves memory usage statistics.
 * 
 * The memory usage `sample_data` value for the system is the total size of non-streaming sample data currently loaded.
 * 
 * Memory usage statistics are only available in logging builds, in release builds the returned struct will contain zero for all values after calling this function.
 * 
 * @returns {struct.FmodStudioMemoryUsage}
 * @func_end
 */
function fmod_studio_system_get_memory_usage() {}


/**
 * @func fmod_studio_system_set_callback
 * @desc > **FMOD Function:** [Studio::System::setCallback](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setcallback)
 *
 * <br />
 *
 * This function enables a callback for the FMOD Studio System. The callbacks will be received in the Async Social event.
 * 
 * @param {constant.FMOD_STUDIO_SYSTEM_CALLBACK} type
 * 
 * @event social
 * @member {string} type The value `"fmod_studio_system_set_callback"`
 * @member {constant.FMOD_STUDIO_SYSTEM_CALLBACK} kind The callback type
 * @member {real} bank_ref Handle of the bank. Only valid when kind=`FMOD_STUDIO_SYSTEM_CALLBACK.BANK_UNLOAD`
 * @event_end
 * 
 * @func_end
 */
function fmod_studio_system_set_callback(type) {}


/**
 * @func fmod_studio_system_set_user_data
 * @desc > **FMOD Function:** [Studio::System::setUserData](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_setuserdata)
 *
 * <br />
 *
 * This function allows you to attach a real value to this object.
 * 
 * @param {real} data The real value to attach.
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_set_user_data(data) {}


/**
 * @func fmod_studio_system_get_user_data
 * @desc > **FMOD Function:** [Studio::System::getUserData](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getuserdata)
 *
 * <br />
 *
 * This function retrieves the real value attached to this object. Returns `NaN` if no value is attached.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_user_data() {}


/**
 * @func fmod_studio_system_get_sound_info
 * @desc > **FMOD Function:** [Studio::System::getSoundInfo](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getsoundinfo)
 *
 * <br />
 *
 * This function retrieves information for loading a sound from the audio table.
 * 
 * The returned struct contains information to be passed to ${func.fmod_system_create_sound} (which will create a parent sound), along with a subsound index to be passed to ${func.fmod_sound_get_sub_sound} once the parent sound is loaded.
 * 
 * The user is expected to call ${func.fmod_system_create_sound} with the given information. It is up to the user to combine in any desired loading flags, such as `FMOD_MODE.CREATESTREAM`, `FMOD_MODE.CREATECOMPRESSEDSAMPLE` or `FMOD_MODE.NONBLOCKING` with the flags in `mode` (in the returned struct).
 * 
 * When the banks have been loaded via ${func.fmod_studio_system_load_bank_memory}, the mode will be returned as `FMOD_MODE.OPENMEMORY_POINT`. This won't work with the default `FMOD_MODE.CREATESAMPLE` mode. For memory banks, you should add in the `FMOD_MODE.CREATECOMPRESSEDSAMPLE` or FMOD_CREATESTREAM flag, or remove `FMOD_MODE.OPENMEMORY_POINT` and add `FMOD_MODE.OPENMEMORY` to decompress the sample into a new allocation.
 * 
 * @param {string} key The key that identifies the sound. (UTF-8 string)
 * @returns {struct.FmodStudioSoundInfo}
 * @func_end
 */
function fmod_studio_system_get_sound_info(key) {}


/**
 * @func fmod_studio_system_get_core_system
 * @desc > **FMOD Function:** [Studio::System::getCoreSystem](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_getcoresystem)
 *
 * <br />
 *
 * This function retrieves the Core System.
 * 
 * The Core System object can be retrieved before initializing the Studio System object to call additional core configuration functions.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_core_system() {}


/**
 * @func fmod_studio_system_lookup_id
 * @desc > **FMOD Function:** [Studio::System::lookupID](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_lookupid)
 *
 * <br />
 *
 * This function retrieves the GUID for a bank, event, snapshot, bus or VCA.
 * 
 * The [strings bank](https://www.fmod.com/docs/2.03/api/glossary.html#studio-strings-bank) must be loaded prior to calling this function, otherwise `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next ${func.fmod_last_result} call.
 * 
 * The path can be copied to the system clipboard from FMOD Studio using the "Copy Path" context menu command.
 * 
 * @param {string} path Path. (UTF-8 string)
 * @returns {string}
 * @func_end
 */
function fmod_studio_system_lookup_id(path) {}


/**
 * @func fmod_studio_system_lookup_path
 * @desc > **FMOD Function:** [Studio::System::lookupPath](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_lookuppath)
 *
 * <br />
 *
 * This function retrieves the path for a bank, event, snapshot, bus or VCA.
 * 
 * The [strings bank](https://www.fmod.com/docs/2.03/api/glossary.html#studio-strings-bank) must be loaded prior to calling this function, otherwise `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next ${func.fmod_last_result} call.
 * 
 * @param {string} str_guid GUID.
 * @returns {string}
 * @func_end
 */
function fmod_studio_system_lookup_path(str_guid) {}


/**
 * @func fmod_studio_system_is_valid
 * @desc > **FMOD Function:** [Studio::System::isValid](https://www.fmod.com/docs/2.03/api/studio-api-system.html#studio_system_isvalid)
 *
 * <br />
 *
 * This function checks that the System reference is valid and has been initialized.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_is_valid() {}

// FMOD Studio VCA

/**
 * @func fmod_studio_vca_set_volume
 * @desc > **FMOD Function:** [Studio::VCA::setVolume](https://www.fmod.com/docs/2.03/api/studio-api-vca.html#studio_vca_setvolume)
 *
 * <br />
 *
 * This function sets the volume level.
 * 
 * The VCA volume level is used to linearly modulate the levels of the buses and VCAs which it controls.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @param {real} volume Volume level. Negative level inverts the signal. Range: [-inf, inf], Default: 1
 * @func_end
 */
function fmod_studio_vca_set_volume(vca_ref, volume) {}


/**
 * @func fmod_studio_vca_get_volume
 * @desc > **FMOD Function:** [Studio::VCA::getVolume](https://www.fmod.com/docs/2.03/api/studio-api-vca.html#studio_vca_getvolume)
 *
 * <br />
 *
 * This function retrieves the volume level set by ${func.fmod_studio_vca_set_volume}.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @returns {real}
 * @func_end
 */
function fmod_studio_vca_get_volume(vca_ref) {}


/**
 * @func fmod_studio_vca_get_id
 * @desc > **FMOD Function:** [Studio::VCA::getID](https://www.fmod.com/docs/2.03/api/studio-api-vca.html#studio_vca_getid)
 *
 * <br />
 *
 * This function retrieves the GUID of the given VCA.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @returns {string}
 * @func_end
 */
function fmod_studio_vca_get_id(vca_ref) {}


/**
 * @func fmod_studio_vca_get_path
 * @desc > **FMOD Function:** [Studio::VCA::getPath](https://www.fmod.com/docs/2.03/api/studio-api-vca.html#studio_vca_getpath)
 *
 * <br />
 *
 * This function retrieves the path.
 * 
 * The strings bank must be loaded prior to calling this function, otherwise `FMOD_RESULT.ERR_EVENT_NOTFOUND` is returned in the next call to ${func.fmod_last_result}.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @returns {string}
 * @func_end
 */
function fmod_studio_vca_get_path(vca_ref) {}


/**
 * @func fmod_studio_vca_is_valid
 * @desc > **FMOD Function:** [Studio::VCA::isValid](https://www.fmod.com/docs/2.03/api/studio-api-vca.html#studio_vca_isvalid)
 *
 * <br />
 *
 * This function checks that the VCA reference is valid.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @returns {real}
 * @func_end
 */
function fmod_studio_vca_is_valid(vca_ref) {}

// System

/**
 * @func fmod_system_create
 * @desc > **FMOD Function:** [System_Create](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_create)
 *
 * <br />
 *
 * This function creates an instance of the FMOD system.
 * 
 * It must be called first to create an FMOD [System](https://www.fmod.com/docs/2.03/api/core-api-system.html) object before any other API calls (except for ${function.fmod_debug_initialize}). Use this function to create 1 or multiple instances of FMOD System objects.
 * 
 * If the new FMOD system is created successfully, the function returns a reference to the system and makes it the *selected* system.
 * 
 * [[Note: All function calls that you make to the `fmod_system_*` functions work on the selected system. You can call ${function.fmod_system_select} to change this.]]
 * 
 * Use ${function.fmod_system_release} to free the system object.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_create() {}


/**
 * @func fmod_system_select
 * @desc This function selects the FMOD system the `fmod_system_*` functions work on.
 * 
 * @param {real} system_ref The reference to the system to be selected.
 * @func_end
 */
function fmod_system_select(system_ref) {}


/**
 * @func fmod_system_count
 * @desc This function returns the number of FMOD [Systems](https://www.fmod.com/docs/2.03/api/core-api-system.html).
 * 
 * [[Note: Every successful call to ${function.fmod_system_create} creates an instance of an FMOD system object that's included in the count.]]
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_count() {}


/**
 * @func fmod_system_init
 * @desc > **FMOD Function:** [System::init](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_init)
 *
 * <br />
 *
 * This function initializes the system object and prepares FMOD for playback.
 * 
 * [[Important: A system object must first be created with ${function.fmod_system_create}.]]
 * 
 * Most API functions require an initialized System object before they will succeed, otherwise they will return `FMOD_RESULT.ERR_UNINITIALIZED`. Some can only be called before initialization. These are:
 * 
 * * ${function.fmod_system_set_software_format}
 * * ${function.fmod_system_set_software_channels}
 * * ${function.fmod_system_set_dsp_buffer_size}
 * 
 * [[Note: ${function.fmod_system_set_output} can be called before or after ${function.fmod_system_init} on Android, GameCore, UWP, Windows and Mac. Other platforms can only call this before ${function.fmod_system_init}.]]
 * 
 * See [Getting Started](https://github.com/YoYoGames/GMEXT-FMOD/wiki/GettingStarted) for examples on initialising and updating FMOD systems.
 * 
 * @param {real} max_channels The maximum number of [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) available for playback, also known as virtual voices. A value in the range [0, 4095]. Virtual voices will play with minimal overhead, with a subset of 'real' voices that are mixed, and selected based on priority and audibility. See the [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) guide for more information.
 * @param {constant.FMOD_INIT} flags The initialization flags. More than one mode can be set at once by combining them with the OR operator.
 * @returns {real}
 * @func_end
 */
function fmod_system_init(max_channels, flags) {}


/**
 * @func fmod_system_release
 * @desc > **FMOD Function:** [System::release](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_release)
 *
 * <br />
 *
 * This function closes and frees the given FMOD [System](https://www.fmod.com/docs/2.03/api/core-api-system.html) object and its resources.
 * 
 * [[Note: This will internally call ${function.fmod_system_close}, so calling ${function.fmod_system_close} before this function is not necessary.]]
 * @func_end
 */
function fmod_system_release(system_ref) {}


/**
 * @func fmod_system_close
 * @desc > **FMOD Function:** [System::close](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_close)
 *
 * <br />
 *
 * This function close the connections to the output and returns to an uninitialized state without releasing the object.
 * 
 * Closing renders FMOD objects created with this System invalid. You should make sure any [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html), [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html), [Geometry](https://www.fmod.com/docs/2.03/api/core-api-geometry.html) and [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) objects are released before calling this.
 * 
 * All pre-initialize configuration settings will remain and the System can be reinitialized as needed.
 * 
 * @param {real} system_ref A reference to a system.
 * @func_end
 */
function fmod_system_close(system_ref) {}


/**
 * @func fmod_system_update
 * @desc > **FMOD Function:** [System::update](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_update)
 *
 * <br />
 *
 * This function updates the FMOD system.
 * 
 * [[Important: This function updates the *selected* system. To update another FMOD system instance use ${function.fmod_system_select} to select it and call ${function.fmod_system_update} again.]]
 * 
 * It should be called once per frame in your application (for example in a [Step event](https://manual.gamemaker.io/monthly/en/The_Asset_Editors/Object_Properties/Object_Events.htm)) to perform actions such as:
 * 
 * * Panning and reverb from 3D attributes changes.
 * * The virtualization of [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) based on their audibility.
 * * Mixing for non-realtime output types. See comment below.
 * * Streaming if using `FMOD_INIT.STREAM_FROM_UPDATE`.
 * * Mixing if using `FMOD_INIT.MIX_FROM_UPDATE`.
 * * Firing callbacks that are deferred until update.
 * * DSP cleanup.
 * 
 * If `FMOD_OUTPUTTYPE.NOSOUND_NRT` or `FMOD_OUTPUTTYPE.WAVWRITER_NRT` output modes are used, this function also drives the software / DSP engine, instead of it running asynchronously in a thread as is the default behavior.
 * This can be used for faster than realtime updates to the decoding or DSP engine which might be useful if the output is the wav writer for example.
 * 
 * If `FMOD_INIT.STREAM_FROM_UPDATE` is used, this function will update the stream engine. Combining this with the non realtime output will mean smoother captured output.
 * 
 * See [Getting Started](https://github.com/YoYoGames/GMEXT-FMOD/wiki/GettingStarted) for examples on initialising and updating FMOD systems.
 * 
 * @func_end
 */
function fmod_system_update() {}


/**
 * @func fmod_system_mixer_suspend
 * @desc > **FMOD Function:** [System::mixerSuspend](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_mixersuspend)
 *
 * <br />
 *
 * This function suspends the mixer thread and relinquishes usage of audio hardware while maintaining internal state.
 * 
 * It is used on mobile platforms when entering a backgrounded state to reduce CPU to 0%.
 * 
 * All internal state will be maintained, i.e. created [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html) and [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) will stay available in memory.
 * 
 * @func_end
 */
function fmod_system_mixer_suspend() {}


/**
 * @func fmod_system_mixer_resume
 * @desc > **FMOD Function:** [System::mixerResume](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_mixerresume)
 *
 * <br />
 *
 * This function resumes the mixer thread and reacquires access to audio hardware.
 * 
 * It is used on mobile platforms when entering the foreground after being suspended.
 * 
 * All internal state will resume, i.e. created [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html) and [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) are still valid and playback will continue.
 * 
 * [[Note: On HTML5, this function is used to start audio from a user interaction event, like a mouse click or screen touch event. Without this call audio may not start on some browsers.]]
 * 
 * @func_end
 */
function fmod_system_mixer_resume() {}


/**
 * @func fmod_system_set_output
 * @desc > **FMOD Function:** [System::setOutput](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setoutput)
 *
 * <br />
 *
 * This function sets the type of output interface used to run the mixer.
 * 
 * The function is typically used to select between different OS-specific audio APIs which may have different features.
 * 
 * It is only necessary to call this function if you want to specifically switch away from the default output mode for the operating system. The most optimal mode is selected by default for the operating system.
 * 
 * [[Note: (Windows, UWP, GameCore, Android, MacOS, iOS, Linux Only) This function can be called after ${function.fmod_system_init} to perform special handling of driver disconnections, see `FMOD_SYSTEM_CALLBACK.DEVICELISTCHANGED`.]]
 * 
 * [[Note: When using the Studio API, switching to an NRT (non-realtime) output type after FMOD is already initialized will not behave correctly unless the Studio API was initialized with `FMOD_STUDIO_INIT.SYNCHRONOUS_UPDATE`.]]
 * 
 * @param {constant.FMOD_OUTPUTTYPE} output The output type.
 * @func_end
 */
function fmod_system_set_output(output) {}


/**
 * @func fmod_system_get_output
 * @desc > **FMOD Function:** [System::getOutput](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getoutput)
 *
 * <br />
 *
 * This function retrieves the type of output interface used to run the mixer.
 * 
 * @returns {constant.FMOD_OUTPUTTYPE}
 * @func_end
 */
function fmod_system_get_output() {}


/**
 * @func fmod_system_get_num_drivers
 * @desc > **FMOD Function:** [System::getNumDrivers](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getnumdrivers)
 *
 * <br />
 *
 * This function retrieves the number of output drivers available for the selected output type.
 * 
 * If ${function.fmod_system_set_output} has not been called, this function will return the number of drivers available for the default output type.
 * A possible use for this function is to iterate through available sound devices for the current output type, and use ${function.fmod_system_get_driver_info} to get the device's name and other attributes.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_num_drivers() {}


/**
 * @func fmod_system_get_driver_info
 * @desc > **FMOD Function:** [System::getDriverInfo](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getdriverinfo)
 *
 * <br />
 *
 * This function retrieves identification information about a sound device specified by its index, and specific to the selected output mode.
 * 
 * @param {real} driver_index The index of the sound driver device. A value in the range [0, ${function.fmod_system_get_num_drivers}].
 * @returns {struct.FmodSystemDriverInfo}
 * @func_end
 */
function fmod_system_get_driver_info(driver_index) {}


/**
 * @func fmod_system_set_driver
 * @desc > **FMOD Function:** [System::setDriver](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setdriver)
 *
 * <br />
 *
 * This function sets the output driver for the selected output type.
 * 
 * When an output type has more than one driver available, this function can be used to select between them.
 * 
 * If this function is called after ${function.fmod_system_init}, the current driver will be shutdown and the newly selected driver will be initialized / started.
 * 
 * @param {real} driver The driver index where 0 represents the default for the output type. A value in the range [0, ${function.fmod_system_get_num_drivers}].
 * @func_end
 */
function fmod_system_set_driver(driver) {}


/**
 * @func fmod_system_get_driver
 * @desc > **FMOD Function:** [System::getDriver](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getdriver)
 *
 * <br />
 *
 * This function retrieves the output driver for the selected output type.
 * 
 * It returns the driver index where 0 represents the default for the output type.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_driver() {}


/**
 * @func fmod_system_set_software_channels
 * @desc > **FMOD Function:** [System::setSoftwareChannels](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setsoftwarechannels)
 *
 * <br />
 *
 * This function sets the maximum number of software mixed [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) possible.
 * 
 * This function cannot be called after FMOD is already activated, it must be called before ${function.fmod_system_init}, or after ${function.fmod_system_close}.
 * 'Software Channels' refers to real Channels that will play, with `software_channels` refering to the maximum number of Channels before successive Channels start becoming virtual. For differences between real and virtual Channels see the [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) guide.
 * 
 * @param {real} software_channels The maximum number of real Channels to be allocated by FMOD. The default is 64.
 * @func_end
 */
function fmod_system_set_software_channels(software_channels) {}


/**
 * @func fmod_system_get_software_channels
 * @desc > **FMOD Function:** [System::getSoftwareChannels](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getsoftwarechannels)
 *
 * <br />
 *
 * This function retrieves the maximum number of software mixed Channels possible.
 * 
 * 'Software Channels' refers to real Channels that will play, with `software_channels` refering to the maximum number of Channels before successive Channels start becoming virtual. For differences between real and virtual Channels see the [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) guide.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_software_channels() {}


/**
 * @func fmod_system_set_software_format
 * @desc > **FMOD Function:** [System::setSoftwareFormat](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setsoftwareformat)
 *
 * <br />
 *
 * This function sets the output format for the software mixer.
 * 
 * If loading Studio banks, this must be called with `speaker_mode` corresponding to the project output format if there is a possibility of the output audio device not matching the project format. Any differences between the project format and `speaker_mode` will cause the mix to sound wrong.
 * 
 * By default, `speaker_mode` will assume the setup the OS / output prefers.
 * 
 * Altering the `sample_rate` from the OS / output preferred rate may incur extra latency. Altering the `speaker_mode` from the OS / output preferred mode may cause an upmix/downmix which can alter the sound.
 * 
 * On lower power platforms such as mobile `sample_rate` will default to 24kHz to reduce CPU cost.
 * 
 * [[Note: This function must be called before ${function.fmod_system_init}, or after ${function.fmod_system_close}.]]
 * 
 * @param {real} sample_rate The sample rate of the mixer, in Hertz. A value in the range [8000, 192000]. Default is 48000.
 * @param {constant.FMOD_SPEAKERMODE} speaker_mode The speaker setup of the mixer.
 * @param {real} num_raw_speakers The number of speakers for `FMOD_SPEAKERMODE.RAW` mode.
 * @func_end
 */
function fmod_system_set_software_format(sample_rate, speaker_mode, num_raw_speakers) {}


/**
 * @func fmod_system_get_software_format
 * @desc > **FMOD Function:** [System::getSoftwareFormat](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getsoftwareformat)
 *
 * <br />
 *
 * This function retrieves the output format for the software mixer.
 * 
 * @returns {struct.FmodSystemSoftwareFormat}
 * @func_end
 */
function fmod_system_get_software_format() {}


/**
 * @func fmod_system_set_dsp_buffer_size
 * @desc > **FMOD Function:** [System::setDSPBufferSize](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setdspbuffersize)
 *
 * <br />
 *
 * This function sets the buffer size for the FMOD software mixing engine.
 * 
 * This function is used if you need to control mixer latency or granularity. Smaller buffer sizes lead to smaller latency, but can lead to stuttering/skipping/unstable sound on slower machines or soundcards with bad drivers.
 * 
 * To get the buffer size in milliseconds, divide it by the output rate and multiply the result by 1000. For a `buff_size` of 1024 and an output rate of 48kHz (see ${function.fmod_system_set_software_format}), milliseconds = 1024 / 48000 * 1000 = 21.33ms. This means the mixer updates every 21.33ms.
 * 
 * To get the total buffer size multiply the `buff_size` by the `num_buffers` value. By default this would be 4 * 1024 = 4096 samples, or 4 * 21.33ms = 85.33ms. This would generally be the total latency of the software mixer, but in reality due to one of the buffers being written to constantly, and the cursor position of the buffer that is audible, the latency is typically more like the (number of buffers - 1.5) multiplied by the buffer length.
 * 
 * To convert from milliseconds back to 'samples', simply multiply the value in milliseconds by the sample rate of the output (i.e. 48000 if that is what it is set to), then divide by 1000.
 * 
 * The FMOD software mixer mixes to a ringbuffer (a `buffer_wrap` ${type.buffer} in GameMaker). The size of this ringbuffer is determined here. It mixes a block of sound data every 'bufferlength' number of samples, and there are `num_buffers` number of these blocks that make up the entire ringbuffer. Adjusting these values can lead to extremely low latency performance (smaller values), or greater stability in sound output (larger values).
 * 
 * [[Warning: The `buff_size` is generally best left alone. Making the granularity smaller will just increase CPU usage (cache misses and DSP network overhead). Making it larger affects how often you hear commands update such as volume/pitch/pan changes. Anything above 20ms will be noticeable and sound parameter changes will be obvious instead of smooth.]]
 * 
 * FMOD chooses the most optimal size by default for best stability, depending on the output type. It is not recommended changing this value unless you really need to. You may get worse performance than the default settings chosen by FMOD. If you do set the size manually, the `buff_size` argument must be a multiple of four, typically 256, 480, 512, 1024 or 2048 depending on your latency requirements.
 * 
 * The values in milliseconds and average latency expected from the settings can be calculated using the following code:
 * 
 * ```gml
 * var _dsp_buffer_info = fmod_system_get_dsp_buffer_size();
 * var _sw_format_info = fmod_system_get_software_format();
 * // Note that you can check for errors here with two calls to fmod_last_result(), one after each function.
 * 
 * var _buff_size = _dsp_buffer_info.buff_size;
 * var _num_buffers = _dsp_buffer_info.num_buffers;
 * var _sample_rate = _sw_format_info.sample_rate;
 * 
 * var _ms = dsp_buffer_info.buff_size * 1000 / _sample_rate;
 * 
 * show_debug_message("Mixer buffer size       = {0}", _ms);
 * show_debug_message("Mixer Total buffer size = {0}", _ms * _num_buffers);
 * show_debug_message("Mixer Average Latency   = {0}", _ms * (_num_buffers - 1.5));
 * ```
 * 
 * * This function cannot be called after FMOD is already activated with ${function.fmod_system_init}.
 * * The function must be called before ${function.fmod_system_init}, or after ${function.fmod_system_close}.
 * 
 * @param {real} buff_size The mixer engine block size, in samples. The default is 1024. Use this to adjust mixer update granularity. See the description for more information on buffer length vs latency.
 * @param {real} num_buffers The mixer engine number of buffers used. The default is 4. Use this to adjust mixer latency. See the description for more information on number of buffers vs latency.
 * @func_end
 */
function fmod_system_set_dsp_buffer_size(buff_size, num_buffers) {}


/**
 * @func fmod_system_get_dsp_buffer_size
 * @desc > **FMOD Function:** [System::getDSPBufferSize](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getdspbuffersize)
 *
 * <br />
 *
 * This function retrieves the buffer size settings for the FMOD software mixing engine.
 * 
 * To get the `buff_size` in milliseconds, divide it by the output rate and multiply the result by 1000. For a `buff_size` of 1024 and an output rate of 48kHz (see ${function.fmod_system_set_software_format}), milliseconds = 1024 / 48000 * 1000 = 21.33ms. This means the mixer updates every 21.33ms.
 *
 * To get the total buffer size multiply the `buff_size` by the `num_buffers` value. By default this would be 41024 = 4096 samples, or 421.33ms = 85.33ms. This would generally be the total latency of the software mixer, but in reality due to one of the buffers being written to constantly, and the cursor position of the buffer that is audible, the latency is typically more like the (number of buffers - 1.5) multiplied by the buffer length.
 *
 * To convert from milliseconds back to 'samples', simply multiply the value in milliseconds by the sample rate of the output (i.e. 48000 if that is what it is set to), then divide by 1000.
 * 
 * @returns {struct.FmodSystemDSPBufferSize}
 * @func_end
 */
function fmod_system_get_dsp_buffer_size() {}


/**
 * @func fmod_system_set_stream_buffer_size
 * @desc > **FMOD Function:** [System::setStreamBufferSize](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setstreambuffersize)
 *
 * <br />
 *
 * This function sets the default file buffer size for newly opened streams.
 * 
 * Valid units for the ${constant.FMOD_TIMEUNIT} of `file_buffer_size_type` are: 
 * 
 * `FMOD_TIMEUNIT.MS`
 * `FMOD_TIMEUNIT.PCM`
 * `FMOD_TIMEUNIT.PCMBYTES`
 * `FMOD_TIMEUNIT.RAWBYTES`
 * 
 * Larger values will consume more memory, whereas smaller values may cause buffer under-run / starvation / stuttering caused by large delays in disk access (i.e. netstream), or CPU usage in slow machines, or by trying to play too many streams at once.
 * 
 * This does not affect streams created with `FMOD_MODE.OPENUSER`, as the buffer size is specified in ${function.fmod_system_create_sound}.
 * 
 * This does not affect latency of playback. All streams are pre-buffered (unless opened with `FMOD_MODE.OPENONLY`), so they will always start immediately.
 * 
 * Seek and Play operations can sometimes cause a reflush of this buffer.
 * 
 * If `FMOD_TIMEUNIT.RAWBYTES` is used, the memory allocated is two times the size passed in, because FMOD allocates a double buffer.
 * 
 * If `FMOD_TIMEUNIT.MS`, `FMOD_TIMEUNIT.PCM` or `FMOD_TIMEUNIT.PCMBYTES` is used, and the stream is infinite (such as a shoutcast netstream), or VBR, then FMOD cannot calculate an accurate compression ratio to work with when the file is opened. This means it will then base the buffersize on `FMOD_TIMEUNIT.PCMBYTES`, or in other words the number of PCM bytes, but this will be incorrect for some compressed formats. Use `FMOD_TIMEUNIT.RAWBYTES` for these type (infinite / undetermined length) of streams for more accurate read sizes.
 * 
 * To determine the actual memory usage of a stream, including sound buffer and other overhead, use ${function.fmod_memory_get_stats} before and after creating a sound.
 * 
 * The stream may still stutter if the codec uses a large amount of cpu time, which impacts the smaller, internal 'decode' buffer. The decode buffer size is changeable via ${struct.FmodSystemCreateSoundExInfo}.
 * 
 * @param {real} file_buffer_size The file buffer size. The default is 16384.
 * @param {constant.FMOD_TIMEUNIT} file_buffer_size_type The type of units for `file_buffer_size`. The default is `FMOD_TIMEUNIT.RAWBYTES`.
 * @func_end
 */
function fmod_system_set_stream_buffer_size(file_buffer_size, file_buffer_size_type) {}


/**
 * @func fmod_system_get_stream_buffer_size
 * @desc > **FMOD Function:** [System::getStreamBufferSize](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getstreambuffersize)
 *
 * <br />
 *
 * This function retrieves the default file buffer size for newly opened streams.
 *
 * Valid units for the ${constant.FMOD_TIMEUNIT} of `file_buffer_size_type` are: 
 * 
 * `FMOD_TIMEUNIT.MS`
 * `FMOD_TIMEUNIT.PCM`
 * `FMOD_TIMEUNIT.PCMBYTES`
 * `FMOD_TIMEUNIT.RAWBYTES`
 * 
 * @returns {struct.FmodSystemStreamBufferSize}
 * @func_end
 */
function fmod_system_get_stream_buffer_size() {}


/**
 * @func fmod_system_set_advanced_settings
 * @desc > **FMOD Function:** [System::setAdvancedSettings](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setadvancedsettings)
 *
 * <br />
 *
 * This function sets advanced settings for the system object, typically to allow adjusting of settings related to resource usage or audio quality.
 * 
 * 
 * 
 * @param {struct.FmodSystemAdvancedSettings} settings The advanced settings to use.
 * @func_end
 */
function fmod_system_set_advanced_settings(settings) {}


/**
 * @func fmod_system_get_advanced_settings
 * @desc > **FMOD Function:** [System::getAdvancedSettings](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getadvancedsettings)
 *
 * <br />
 *
 * This function retrieves the advanced settings for the system object.
 * 
 * @returns {struct.FmodSystemAdvancedSettings}
 * @func_end
 */
function fmod_system_get_advanced_settings() {}


/**
 * @func fmod_system_set_speaker_position
 * @desc > **FMOD Function:** [System::setSpeakerPosition](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setspeakerposition)
 *
 * <br />
 *
 * This function sets the position of the specified speaker for the current speaker mode.
 * 
 * This function allows the user to specify the position of their speaker to account for non standard setups.
 * It also allows the user to disable speakers from 3D consideration in a game.
 * 
 * This allows you to customize the position of the speakers for the current ${constant.FMOD_SPEAKERMODE} by giving X (left to right) and Y (front to back) coordinates.
 * When disabling a speaker, 3D spatialization will be redistributed around the missing speaker so the signal isn't lost.
 * 
 * A stereo setup would look like this:
 * 
 * ```gml
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.FRONT_LEFT, -1, 0, true);
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.FRONT_RIGHT, 1, 0, true);
 * ```
 * 
 * A 7.1 setup would look like this:
 * 
 * ```gml
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.FRONT_LEFT,     dsin( -30), dcos( -30), true);
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.FRONT_RIGHT,    dsin(  30), dcos(  30), true);
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.FRONT_CENTER,   dsin(   0), dcos(   0), true);
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.LOW_FREQUENCY,  dsin(   0), dcos(   0), true);
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.SURROUND_LEFT,  dsin( -90), dcos( -90), true);
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.SURROUND_RIGHT, dsin(  90), dcos(  90), true);
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.BACK_LEFT,      dsin(-150), dcos(-150), true);
 * fmod_system_set_speaker_position(system, FMOD_SPEAKERMODE.BACK_RIGHT,     dsin( 150), dcos( 150), true);
 * ```
 * 
 * Calling ${function.fmod_system_set_software_format} will override any customization made with this function.
 * 
 * Users of the Studio API should be aware this function does not affect the speaker positions used by the Spatializer DSPs, it is purely for Core API spatialization via ${function.fmod_channel_control_set_3d_attributes}.
 * 
 * @param {constant.FMOD_SPEAKER} speaker The speaker.
 * @param {real} x The 2D X position relative to the listener. A value in the range [-1, 1], where: -1 = left, 0 = middle, +1 = right.
 * @param {real} y 2D Y position relative to the listener. A value in the range [-1, 1], where: -1 = back, 0 = middle, +1 = front.
 * @param {boolean} active The active state of a speaker. `true` = included in 3D calculations, `false` = ignored.
 * @func_end
 */
function fmod_system_set_speaker_position(speaker, x, y, active) {}


/**
 * @func fmod_system_get_speaker_position
 * @desc > **FMOD Function:** [System::getSpeakerPosition](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getspeakerposition)
 *
 * <br />
 *
 * This function retrieves the position of the specified speaker for the current speaker mode.
 * 
 * @param {constant.FMOD_SPEAKER} speaker The speaker.
 * @returns {struct.FmodSystemSpeakerPosition}
 * @func_end
 */
function fmod_system_get_speaker_position(speaker) {}


/**
 * @func fmod_system_set_3d_settings
 * @desc > **FMOD Function:** [System::set3DSettings](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_set3dsettings)
 *
 * <br />
 *
 * This function sets the global doppler scale, distance factor and log roll-off scale for all 3D sound in FMOD.
 * 
 * The `doppler_scale` is a general scaling factor for how much the pitch varies due to doppler shifting in 3D sound. Doppler is the pitch bending effect when a sound comes towards the listener or moves away from it, much like the effect you hear when a train goes past you with its horn sounding. With "dopplerscale" you can exaggerate or diminish the effect. FMOD's effective speed of sound at a doppler factor of 1.0 is 340 m/s.
 * 
 * The `distance_factor` is the FMOD 3D engine relative distance factor, compared to 1.0 meters. Another way to put it is that it equates to "how many units per meter does your engine have". For example, if you are using feet then "scale" would equal 3.28.
 * This only affects doppler. If you keep your min/max distance, custom roll-off curves, and positions in scale relative to each other, the volume roll-off will not change. If you set this, the mindistance of a sound will automatically set itself to this value when it is created in case the user forgets to set the mindistance to match the new `distance_factor`.
 * 
 * The `rolloff_scale` is a global factor applied to the roll-off of sounds using roll-off modes other than `FMOD_MODE.AS_3D_CUSTOMROLLOFF`. When a sound uses a roll-off mode other than `FMOD_MODE.AS_3D_CUSTOMROLLOFF` and the distance is greater than the sound's minimum distance, the distance for the purposes of distance attenuation is calculated according to the formula `distance = (distance - minDistance) * rolloffscale + minDistance`.
 * 
 * @param {real} doppler_scale A scaling factor for doppler shift. Default is 1.
 * @param {real} distance_factor A factor for converting game distance units to FMOD distance units. Default is 1.
 * @param {real} rolloff_scale A scaling factor for distance attenuation. When a sound uses a roll-off mode other than `FMOD_MODE.AS_3D_CUSTOMROLLOFF` and the distance is greater than the sound's minimum distance, the distance is scaled by the roll-off scale. Default is 1.
 * @func_end
 */
function fmod_system_set_3d_settings(doppler_scale, distance_factor, rolloff_scale) {}


/**
 * @func fmod_system_get_3d_settings
 * @desc > **FMOD Function:** [System::get3DSettings](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_get3dsettings)
 *
 * <br />
 *
 * This function retrieves the global doppler scale, distance factor and roll-off scale for all 3D sounds.
 * 
 * @returns {struct.FmodSystem3DSettings}
 * @func_end
 */
function fmod_system_get_3d_settings() {}


/**
 * @func fmod_system_set_3d_num_listeners
 * @desc > **FMOD Function:** [System::set3DNumListeners](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_set3dnumlisteners)
 *
 * <br />
 *
 * This function sets the number of 3D 'listeners' in the 3D sound scene.
 * 
 * This function is useful mainly for split-screen game purposes.
 * 
 * If the number of listeners is set to more than 1, then panning and doppler are turned off. All sound effects will be mono. FMOD uses a 'closest sound to the listener' method to determine what should be heard in this case.
 * 
 * [[Note: Users of the Studio API should call ${function.fmod_studio_system_set_num_listeners} instead of this function.]]
 * 
 * @param {real} num The number of listeners in the scene. A value in the range [1, ${constant.FMOD_MAX_LISTENERS}]. The default is 1.
 * @func_end
 */
function fmod_system_set_3d_num_listeners(num) {}


/**
 * @func fmod_system_get_3d_num_listeners
 * @desc > **FMOD Function:** [System::get3DNumListeners](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_get3dnumlisteners)
 *
 * <br />
 *
 * This function retrieves the number of 3D listeners.
 * 
 * [[Note: Users of the Studio API should call ${function.fmod_studio_system_get_num_listeners} instead of this function.]]
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_3d_num_listeners() {}


/**
 * @func fmod_system_set_3d_rolloff_callback
 * @desc > **FMOD Function:** [System::set3DRolloffCallback](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_set3drolloffcallback)
 *
 * <br />
 *
 * This function enables callbacks for custom calculation of distance attenuation.
 * 
 * This function overrides `FMOD_MODE.AS_3D_INVERSEROLLOFF`, `FMOD_MODE.AS_3D_LINEARROLLOFF`, `FMOD_MODE.AS_3D_LINEARSQUAREROLLOFF`, `FMOD_MODE.AS_3D_INVERSETAPEREDROLLOFF` and `FMOD_MODE.AS_3D_CUSTOMROLLOFF`.
 * 
 * See also: [Callback behavior](https://www.fmod.com/docs/2.03/api/glossary.html#callback-behavior)
 * 
 * @event social
 * @member {string} type The string value `"fmod_system_set_3d_rolloff_callback"`.
 * @member {real} distance The distance.
 * @member {real} channel_ref The reference to the channel for which this event is triggered.
 * @event_end
 * 
 * @func_end
 */
function fmod_system_set_3d_rolloff_callback() {}


/**
 * @func fmod_system_set_network_proxy
 * @desc > **FMOD Function:** [System::setNetworkProxy](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setnetworkproxy)
 *
 * <br />
 *
 * This function sets a proxy server to use for all subsequent internet connections.
 * 
 * You should specify the proxy in `host:port` format e.g. `www.fmod.com:8888` (defaults to port 80 if no port is specified).
 * 
 * Basic authentication is supported using `user:password@host:port` format e.g. `bob:sekrit123@www.fmod.com:8888`
 * 
 * @param {string} proxy The proxy server URL. (as a [UTF-8 string](https://www.fmod.com/docs/2.03/api/glossary.html#string-format))
 * @func_end
 */
function fmod_system_set_network_proxy(proxy) {}


/**
 * @func fmod_system_get_network_proxy
 * @desc > **FMOD Function:** [System::getNetworkProxy](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getnetworkproxy)
 *
 * <br />
 *
 * This function retrieves the URL of the proxy server used in internet streaming.
 * 
 * @returns {string}
 * @func_end
 */
function fmod_system_get_network_proxy() {}


/**
 * @func fmod_system_set_network_timeout
 * @desc > **FMOD Function:** [System::setNetworkTimeout](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setnetworktimeout)
 *
 * <br />
 *
 * This function sets the timeout for network streams.
 * 
 * @param {real} timeout The timeout value, expressed in milliseconds. Default is 5000.
 * @func_end
 */
function fmod_system_set_network_timeout(timeout) {}


/**
 * @func fmod_system_get_network_timeout
 * @desc > **FMOD Function:** [System::getNetworkTimeout](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getnetworktimeout)
 *
 * <br />
 *
 * This function retrieves the timeout value (in milliseconds) for network streams.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_network_timeout() {}


/**
 * @func fmod_system_get_version
 * @desc > **FMOD Function:** [System::getVersion](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getversion)
 *
 * <br />
 *
 * This function retrieves the FMOD version number.
 * 
 * The FMOD version is a 32 bit hexadecimal value formatted as 16:8:8, with the upper 16 bits being the product version, the middle 8 bits being the major version and the bottom 8 bits being the minor version. For example a value of 0x00010203 is equal to 1.02.03.
 * 
 * [[Note: You should compare this against the `FMOD_VERSION` macro to make sure header and runtime library versions match.]]
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_version() {}


/**
 * @func fmod_system_get_channels_playing
 * @desc > **FMOD Function:** [System::getChannelsPlaying](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getchannelsplaying)
 *
 * <br />
 *
 * This function retrieves the number of currently playing [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html).
 * 
 * For differences between real and virtual voices see the [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) guide for more information.
 * 
 * @returns {struct.FmodSystemChannelsPlaying}
 * @func_end
 */
function fmod_system_get_channels_playing() {}


/**
 * @func fmod_system_get_cpu_usage
 * @desc > **FMOD Function:** [System::getCPUUsage](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getcpuusage)
 *
 * <br />
 *
 * This function retrieves the amount of CPU used for different parts of the FMOD Core engine.
 * 
 * For readability, the percentage values are smoothed to provide a more stable output.
 * 
 * @returns {struct.FmodCPUUsage}
 * @func_end
 */
function fmod_system_get_cpu_usage() {}


/**
 * @func fmod_system_get_file_usage
 * @desc > **FMOD Function:** [System::getFileUsage](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getfileusage)
 *
 * <br />
 *
 * This function retrieves information about file reads.
 * 
 * [[Note: The values returned are running totals that never reset.]]
 * 
 * @returns {struct.FmodSystemFileUsage}
 * @func_end
 */
function fmod_system_get_file_usage() {}


/**
 * @func fmod_system_get_default_mix_matrix
 * @desc > **FMOD Function:** [System::getDefaultMixMatrix](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getdefaultmixmatrix)
 *
 * <br />
 *
 * This function retrieves the default matrix used to convert from one speaker mode to another.
 * 
 * The matrix is returned as an ${type.array}.
 * 
 * The gain for source channel 's' to target channel 't' is matrix[t * matrixhop + s].
 * 
 * If `source_speaker_mode` or `target_speaker_mode` is `FMOD_SPEAKERMODE.RAW`, this function will return `FMOD_RESULT.ERR_INVALID_PARAM`.
 * 
 * @param {constant.FMOD_SPEAKERMODE} source_speaker_mode The speaker mode being converted from.
 * @param {constant.FMOD_SPEAKERMODE} target_speaker_mode The speaker mode being converted to.
 * @param {real} matrix_hop The number of source channels in the matrix. If this is 0, the number of source channels will be derived from `source_speaker_mode`. A maximum value of ${constant.FMOD_MAX_CHANNEL_WIDTH}.
 * @returns {array[real]}
 * @func_end
 */
function fmod_system_get_default_mix_matrix(source_speaker_mode, target_speaker_mode, matrix_hop) {}


/**
 * @func fmod_system_get_speaker_mode_channels
 * @desc > **FMOD Function:** [System::getSpeakerModeChannels](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getspeakermodechannels)
 *
 * <br />
 *
 * This function retrieves the channel count for a given speaker mode.
 * 
 * @param {constant.FMOD_SPEAKERMODE} mode The speaker mode to query.
 * @returns {real}
 * @func_end
 */
function fmod_system_get_speaker_mode_channels(mode) {}


/**
 * @func fmod_system_create_sound
 * @desc > **FMOD Function:** [System::createSound](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_createsound)
 *
 * <br />
 *
 * This function loads a sound into memory, opens it for streaming or sets it up for callback-based sounds.
 * 
 * It returns a reference to the newly created [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html).
 * 
 * `FMOD_MODE.CREATESAMPLE` will try to load and decompress the whole sound into memory, use `FMOD_MODE.CREATESTREAM` to open it as a stream and have it play back in realtime from disk or another medium. `FMOD_MODE.CREATECOMPRESSEDSAMPLE` can also be used for certain formats to play the sound directly in its compressed format from the mixer.
 * 
 * * To open a file or URL as a stream, so that it decompresses / reads at runtime, instead of loading / decompressing into memory all at the time of this call, use the `FMOD_MODE.CREATESTREAM` flag.
 * * To open a file or URL as a compressed sound effect that is not streamed and is not decompressed into memory at load time, use `FMOD_MODE.CREATECOMPRESSEDSAMPLE`. This is supported with MPEG (mp2/mp3), ADPCM/FADPCM, XMA, AT9 and FSB Vorbis files only. This is useful for those who want realtime compressed sound effects, but not the overhead of disk access.
 * * To open a sound as 2D, so that it is not affected by 3D processing, use the `FMOD_MODE.AS_2D` flag. 3D sound commands will be ignored on these types of sounds.
 * * To open a sound as 3D, so that it is treated as a 3D sound, use the `FMOD_MODE.AS_3D` flag.
 * 
 * [[Note: `FMOD_MODE.OPENRAW`, `FMOD_MODE.OPENMEMORY`, `FMOD_MODE.OPENMEMORY_POINT` and `FMOD_MODE.OPENUSER` will not work here without the exinfo structure present, as more information is needed.]]
 * 
 * Use `FMOD_MODE.NONBLOCKING` to have the sound open or load in the background. You can use ${function.fmod_sound_get_open_state} to determine if it has finished loading / opening or not. While it is loading (not ready), sound functions are not accessible for that sound. Do not free memory provided with `FMOD_MODE.OPENMEMORY` if the sound is not in a ready state, as it will most likely lead to a crash.
 * 
 * To account for slow media that might cause buffer underrun (skipping / stuttering / repeating blocks of audio) with sounds created with `FMOD_MODE.CREATESTREAM`, use ${function.fmod_system_set_stream_buffer_size} to increase read ahead.
 * 
 * As using `FMOD_MODE.OPENUSER` causes FMOD to ignore whatever is passed as the first argument `name_or_buffer`, recommended practice is to pass 0 or equivalent.
 * 
 * Specifying `FMOD_MODE.OPENMEMORY_POINT` will POINT to the ${type.buffer} that you pass as `name_or_buff`, rather than allocating its own sound buffers and duplicating it internally, this means you cannot free the memory while FMOD is using it, until after ${function.fmod_sound_release} is called.
 * 
 * With `FMOD_MODE.OPENMEMORY_POINT`, only PCM formats and compressed formats using `FMOD_MODE.CREATECOMPRESSEDSAMPLE` are supported.
 * 
 * [[Warning: Use of FMOD_MODE.NONBLOCKING is currently not supported for JavaScript.]]
 * 
 * @param {string|buffer} name_or_buff The name of the file or URL to open or a buffer to a preloaded sound memory block if `FMOD_MODE.OPENMEMORY` / `FMOD_MODE.OPENMEMORY_POINT` is used.
 * @param {constant.FMOD_MODE} mode The behavior modifier for opening the sound.
 * @param {struct.FmodSystemCreateSoundExInfo} extra OPTIONAL Extended information for creating the sound. Defaults to an empty struct.
 * @returns {real}
 * @func_end
 */
function fmod_system_create_sound(name_or_data, mode, buff_extra) {}


/**
 * @func fmod_system_create_stream
 * @desc > **FMOD Function:** [System::createStream](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_createstream)
 *
 * <br />
 *
 * This function opens a sound for streaming.
 * 
 * It returns a reference to the newly created [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html).
 * 
 * This is a convenience function for ${function.fmod_system_create_sound} with the `FMOD_MODE.CREATESTREAM` flag added.
 * 
 * A stream only has one decode buffer and file handle, and therefore can only be played once. It cannot play multiple times at once because it cannot share a stream buffer if the stream is playing at different positions. Open multiple streams to have them play concurrently.
 * 
 * @param {string|buffer} name_or_buff The name of the file or URL to open or a ${type.buffer} storing a preloaded sound memory block if `FMOD_MODE.OPENMEMORY` / `FMOD_MODE.OPENMEMORY_POINT` is used.
 * @param {constant.FMOD_MODE} mode The behavior modifier for opening the sound.
 * @param {struct.FmodSystemCreateSoundExInfo} extra OPTIONAL Extended information while playing the sound.
 * @returns {real}
 * @func_end
 */
function fmod_system_create_stream(name_or_data, mode, buff_extra) {}


/**
 * @func fmod_system_create_dsp
 * @desc > **FMOD Function:** [System::createDSP](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_createdsp)
 *
 * <br />
 *
 * This function creates a DSP object.
 * 
 * It returns a reference to the newly created [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) unit.
 * 
 * A DSP object is a module that can be inserted into the mixing graph to allow sound filtering or sound generation. See the [DSP architecture guide](https://www.fmod.com/docs/2.03/api/white-papers-dsp-architecture.html) for more information.
 * 
 * DSPs must be attached to the DSP graph before they become active, either via ${function.fmod_channel_control_add_dsp} or ${function.fmod_dsp_add_input}.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_create_dsp() {}


/**
 * @func fmod_system_create_dsp_by_type
 * @desc > **FMOD Function:** [System::createDSPByType](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_createdspbytype)
 *
 * <br />
 *
 * This function creates a DSP object given a built-in type index.
 * 
 * It returns a reference to the newly created [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) unit.
 * 
 * A DSP object is a module that can be inserted into the mixing graph to allow sound filtering or sound generation. See the FMOD [DSP architecture guide](https://www.fmod.com/docs/2.03/api/white-papers-dsp-architecture.html) for more information.
 * 
 * DSPs must be attached to the DSP graph before they become active, either via ${function.fmod_channel_control_add_dsp} or ${function.fmod_dsp_add_input}.
 * 
 * Using `FMOD_DSP_TYPE.VSTPLUGIN` or `FMOD_DSP_TYPE.WINAMPPLUGIN` will return the first loaded plugin of this type.
 * 
 * [[Warning: The extension currently doesn't support plugins.]]
 * 
 * @param {constant.FMOD_DSP_TYPE} type The type of built-in DSP unit to create.
 * @returns {real}
 * @func_end
 */
function fmod_system_create_dsp_by_type(type) {}


/**
 * @func fmod_system_create_channel_group
 * @desc > **FMOD Function:** [System::createChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_createchannelgroup)
 *
 * <br />
 *
 * This function creates a ChannelGroup object.
 * 
 * The function returns a reference to the newly created [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html).
 * 
 * ChannelGroups can be used to assign / group Channels, for things such as volume scaling. ChannelGroups are also used for sub-mixing. Any Channels that are assigned to a ChannelGroup get submixed into that ChannelGroup's 'tail' [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html). See `FMOD_CHANNELCONTROL_DSP_INDEX.TAIL`.
 * 
 * If a ChannelGroup has an effect added to it, the effect is processed post-mix from the Channels and ChannelGroups below it in the mix hierarchy. See the [DSP architecture guide](https://www.fmod.com/docs/2.03/api/white-papers-dsp-architecture.html) for more information.
 * 
 * All ChannelGroups will initially output directly to the master ChannelGroup (See ${function.fmod_system_get_master_channel_group}). ChannelGroups can be re-parented with ${function.fmod_channel_group_add_group}.
 * 
 * @param {string} name A label for the ChannelGroup, for identification purposes.
 * @returns {real}
 * @func_end
 */
function fmod_system_create_channel_group(name) {}


/**
 * @func fmod_system_create_sound_group
 * @desc > **FMOD Function:** [System::createSoundGroup](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_createsoundgroup)
 *
 * <br />
 *
 * This function creates a SoundGroup object.
 * 
 * It returns a reference to the newly created [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html).
 * 
 * A SoundGroup is a way to address multiple [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html) at once with group level commands, such as:
 * 
 * * The attributes of Sounds that are playing or about to be played, such as volume. (See ${function.fmod_sound_group_set_volume}).
 * * Control of playback, such as stopping Sounds. (See ${function.fmod_sound_group_stop}).
 * * Playback behavior such as 'max audible', to limit playback of certain types of Sounds. (See ${function.fmod_sound_group_set_max_audible}).
 * 
 * Once a SoundGroup is created, ${function.fmod_sound_set_sound_group} is used to put a Sound in a SoundGroup.
 * 
 * @param {string} name The name of the SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_system_create_sound_group(name) {}


/**
 * @func fmod_system_create_reverb_3d
 * @desc > **FMOD Function:** [System::createReverb3D](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_createreverb3d)
 *
 * <br />
 *
 * This function creates a 'virtual reverb' object. This object reacts to 3D location and morphs the reverb environment based on how close it is to the reverb object's center.
 * 
 * The function returns a reference to the newly created virtual [reverb](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html) object.
 * 
 * Multiple reverb objects can be created to achieve a multi-reverb environment. 1 reverb object is used for all 3D reverb objects (slot 0 by default).
 * 
 * The 3D reverb object is a sphere having 3D attributes (position, minimum distance, maximum distance) and reverb properties.
 * 
 * The properties and 3D attributes of all reverb objects collectively determine, along with the listener's position, the settings of and input gains into a single 3D reverb [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html).
 * 
 * When the listener is within the sphere of effect of one or more 3D reverbs, the listener's 3D reverb properties are a weighted combination of such 3D reverbs.
 * 
 * When the listener is outside all of the reverbs, no reverb is applied.
 * 
 * ${function.fmod_system_set_reverb_properties} can be used to create an alternative reverb that can be used for 2D and background global reverb.
 * 
 * To avoid this reverb interfering with the reverb slot used by the 3D reverb, 2D reverb should use a different slot ID with ${function.fmod_system_set_reverb_properties}, otherwise ${struct.FmodSystemAdvancedSettings}'s `reverb_3d_instance` property can also be used to place 3D reverb on a different reverb slot.
 * 
 * Use ${function.fmod_channel_control_set_reverb_properties} to turn off reverb for 2D sounds (i.e. set wet = 0).
 * 
 * Creating multiple reverb objects does not impact performance. These are 'virtual reverbs'. There will still be only one reverb [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) running that just morphs between the different virtual reverbs.
 * 
 * Note about reverb DSP unit allocation. To remove the DSP unit and the associated CPU cost, first make sure all 3D reverb objects are released. Then call ${function.fmod_system_set_reverb_properties} with the 3D reverb's slot ID (default is 0) with a property point of 0, to signal that the reverb instance should be deleted.
 * 
 * If a 3D reverb is still present, and ${function.fmod_system_set_reverb_properties} function is called to free the reverb, the 3D reverb system will immediately recreate it upon the next ${function.fmod_system_update} call.
 * 
 * [[Note: the 3D reverb system will not affect Studio events unless it is explicitly enabled by calling ${function.fmod_studio_event_instance_set_reverb_level} on each event instance.]]
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_create_reverb_3d() {}


/**
 * @func fmod_system_play_sound
 * @desc > **FMOD Function:** [System::playSound](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_playsound)
 *
 * <br />
 *
 * This function plays a Sound on a Channel.
 * 
 * It returns the newly playing [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html).
 * 
 * When a sound is played, it will use the sound's default frequency and priority. See ${function.fmod_sound_set_defaults}.
 * 
 * A sound defined as `FMOD_MODE.AS_3D` will by default play at the 3D position of the listener. To set the 3D position of the Channel before the sound is audible, start the Channel paused by setting the pause parameter to `true`, and call ${function.fmod_channel_control_set_3d_attributes}.
 * 
 * Specifying a `channel_group_ref` as part of `fmod_system_play_sound` is more efficient than using ${function.fmod_channel_set_channel_group} after `fmod_system_play_sound`, and could avoid audible glitches if the sound is not in a paused state.
 * 
 * Channels are reference counted to handle dead or stolen Channel handles. See the white paper on [Channel handles](https://www.fmod.com/docs/2.03/api/white-papers-handle-system.html#core-api-channels) for more information.
 * 
 * Playing more [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html) than physical Channels allow is handled with virtual voices. See the white paper on [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) for more information.
 * 
 * @param {real} sound_ref A reference to the sound to play.
 * @param {real} channel_group_ref A reference to the ChannelGroup to output to instead of the master.
 * @param {boolean} pause Whether to start in the paused state. Start a Channel paused to allow altering attributes without it being audible, then follow it up with a call to ${function.fmod_channel_control_set_paused} with `pause` = `false`.
 * @returns {real}
 * @func_end
 */
function fmod_system_play_sound(sound_ref, channel_group_ref, pause) {}


/**
 * @func fmod_system_play_dsp
 * @desc > **FMOD Function:** [System::playDSP](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_playdsp)
 *
 * <br />
 *
 * This function plays a DSP along with any of its inputs on a Channel.
 * 
 * It returns the newly playing [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html).
 * 
 * Specifying a channelgroup as part of `fmod_system_play_dsp` is more efficient than using ${function.fmod_channel_set_channel_group} after `fmod_system_play_dsp`, and could avoid audible glitches if the `fmod_system_play_dsp` is not in a paused state.
 * 
 * Channels are reference counted to handle dead or stolen Channel handles. See the white paper on [Channel handles](https://www.fmod.com/docs/2.03/api/white-papers-handle-system.html#core-api-channels) for more information.
 * 
 * Playing more [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html) or [DSPs](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) than physical Channels allow is handled with virtual voices. See the white paper on [Virtual Voices](https://www.fmod.com/docs/2.03/api/white-papers-virtual-voices.html) for more information.
 * 
 * @param {real} dsp_ref A reference to the [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html) unit to play.
 * @param {real} channel_group_ref A reference to the [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) to output to instead of the master.
 * @param {boolean} pause Whether to start in the paused state. Start a [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html) paused to allow altering attributes without it being audible, then follow it up with a call to ${function.fmod_channel_control_set_paused} with `pause` = `false`.
 * @returns {real}
 * @func_end
 */
function fmod_system_play_dsp(dsp_ref, channel_group_ref, pause) {}


/**
 * @func fmod_system_get_channel
 * @desc > **FMOD Function:** [System::getChannel](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getchannel)
 *
 * <br />
 *
 * This function retrieves a reference to a Channel by ID.
 * 
 * This function is mainly for getting handles to existing (playing) Channels and setting their attributes. The only way to 'create' an instance of a Channel for playback is to use ${function.fmod_system_play_sound} or ${function.fmod_system_play_dsp}.
 * 
 * @param {real} index The channel's index in the FMOD [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html) pool. Specify a Channel number from 0 to the `max_channels` value specified in ${function.fmod_system_init} minus 1.
 * @returns {real}
 * @func_end
 */
function fmod_system_get_channel(index) {}


/**
 * @func fmod_system_get_master_channel_group
 * @desc > **FMOD Function:** [System::getMasterChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getmasterchannelgroup)
 *
 * <br />
 *
 * This function retrieves the master ChannelGroup that all sounds ultimately route to.
 * 
 * This is the default [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) that [Channels](https://www.fmod.com/docs/2.03/api/core-api-channel.html) play on, unless a different ChannelGroup is specified with ${function.fmod_system_play_sound}, ${function.fmod_system_play_dsp} or ${function.fmod_channel_set_channel_group}.
 * A master ChannelGroup can be used to do things like set the 'master volume' for all playing Channels. See ${function.fmod_channel_control_set_volume}.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_master_channel_group() {}


/**
 * @func fmod_system_get_master_sound_group
 * @desc > **FMOD Function:** [System::getMasterSoundGroup](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getmastersoundgroup)
 *
 * <br />
 *
 * This function retrieves the default SoundGroup, where all sounds are placed when they are created.
 * 
 * If a [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html) is released, the [Sounds](https://www.fmod.com/docs/2.03/api/core-api-sound.html) in it will be put back into this SoundGroup.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_master_sound_group() {}


/**
 * @func fmod_system_set_3d_listener_attributes
 * @desc > **FMOD Function:** [System::set3DListenerAttributes](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_set3dlistenerattributes)
 *
 * <br />
 *
 * This function sets the position, velocity and orientation of the specified 3D sound listener.
 * 
 * The `forward` and `up` vectors must be perpendicular and be of unit length (magnitude of each vector should be 1).
 * 
 * Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.03/api/glossary.html#handedness).
 * 
 * For velocity, remember to use units per **second**, and not units per frame. This is a common mistake and will make the doppler effect sound wrong if velocity is based on movement per frame rather than a fixed time period.
 * If velocity per frame is calculated, it can be converted to velocity per second by dividing it by the time taken between frames as a fraction of a second.
 * i.e.
 * 
 * ```gml
 * velocity_units_per_second = (position_currentframe - position_lastframe) / time_taken_since_last_frame_in_seconds;
 * ```
 * 
 * At 60 FPS  the formula would look like `velocity_units_per_second = (position_currentframe - position_lastframe) / 0.0166667`.
 * 
 * [[Note: Users of the Studio API should call ${function.fmod_studio_system_set_listener_attributes} instead of this function.]]
 * 
 * @param {real} listener_index The index of the listener to set 3D attributes on. Listeners are indexed from 0, to ${constant.FMOD_MAX_LISTENERS} - 1, in a multi-listener environment.
 * @param {struct.FmodVector} position The position in 3D world space used for panning and attenuation, in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units).
 * @param {struct.FmodVector} velocity The velocity in 3D space used for doppler, in [Distance units](https://www.fmod.com/docs/2.03/api/glossary.html#distance-units) per second.
 * @param {struct.FmodVector} forward The forwards orientation.
 * @param {struct.FmodVector} up The upwards orientation.
 * @func_end
 */
function fmod_system_set_3d_listener_attributes(listener_index, position, velocity, forward, up) {}


/**
 * @func fmod_system_get_3d_listener_attributes
 * @desc > **FMOD Function:** [System::get3DListenerAttributes](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_get3dlistenerattributes)
 *
 * <br />
 *
 * This function retrieves the position, velocity and orientation of the specified 3D sound listener.
 * 
 * [[Note: Users of the Studio API should call ${function.fmod_studio_system_get_listener_attributes} instead of this function.]]
 * 
 * @param {real} listener_index The index of the listener to get 3D attributes for. Listeners are indexed from 0, to ${constant.FMOD_MAX_LISTENERS} - 1, in a multi-listener environment.
 * @returns {struct.Fmod3DAttributes}
 * @func_end
 */
function fmod_system_get_3d_listener_attributes(listener_index) {}


/**
 * @func fmod_system_set_reverb_properties
 * @desc > **FMOD Function:** [System::setReverbProperties](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setreverbproperties)
 *
 * <br />
 *
 * This function sets parameters for the global reverb environment.
 * 
 * To assist in defining reverb properties there are several presets available, see ${constant.FMOD_REVERB_PRESETS}.
 * 
 * When using each instance for the first time, FMOD will create an SFX reverb DSP unit that takes up several hundred kilobytes of memory and some CPU.
 * 
 * @param {real} reverb_instance_index The index of the particular reverb instance to target. A value in the range [0, ${constant.FMOD_REVERB_MAXINSTANCES}].
 * @param {struct.FmodReverbProperties} properties The reverb environment description. Passing 0 to this function will delete the reverb.
 * @func_end
 */
function fmod_system_set_reverb_properties(instance_index, properties) {}


/**
 * @func fmod_system_get_reverb_properties
 * @desc > **FMOD Function:** [System::getReverbProperties](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getreverbproperties)
 *
 * <br />
 *
 * This function retrieves the current reverb environment for the specified reverb instance.
 * 
 * @param {real} reverb_instance_index The index of the particular reverb instance to target.
 * @returns {struct.FmodReverbProperties}
 * @func_end
 */
function fmod_system_get_reverb_properties(instance_index) {}


/**
 * @func fmod_system_attach_channel_group_to_port
 * @desc > **FMOD Function:** [System::attachChannelGroupToPort](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_attachchannelgrouptoport)
 *
 * <br />
 *
 * This function connects the output of the specified ChannelGroup to an audio port on the output driver.
 * 
 * Ports are additional outputs supported by some ${constant.FMOD_OUTPUTTYPE} plugins and can include things like controller headsets or dedicated background music streams. See the Port Support section (where applicable) of each platform's getting started guide found in the [platform details](https://www.fmod.com/docs/2.03/api/platforms.html) chapter.
 * 
 * @param {constant.FMOD_PORT_TYPE} port_type The port type (output mode specific).
 * @param {constant.FMOD_PORT_INDEX} port_index The index to specify which instance of the specified `port_type` to use (output mode specific).
 * @param {real} channel_group_ref The ChannelGroup to attach the port to.
 * @param {bool} pass_thru Whether the signal should additionally route to the existing ChannelGroup output.
 * @func_end
 */
function fmod_system_attach_channel_group_to_port(port_type, port_index, channel_group_ref, pass_thru) {}


/**
 * @func fmod_system_detach_channel_group_from_port
 * @desc > **FMOD Function:** [System::detachChannelGroupFromPort](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_detachchannelgroupfromport)
 *
 * <br />
 *
 * This function disconnects the output of the specified ChannelGroup from an audio port on the output driver.
 * 
 * Removing a [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) from a port will reroute the audio back to the main mix.
 * 
 * @param {real} channel_group_ref The ChannelGroup to detach the port from.
 * @func_end
 */
function fmod_system_detach_channel_group_from_port(channel_group_ref) {}


/**
 * @func fmod_system_get_record_num_drivers
 * @desc > **FMOD Function:** [System::getRecordNumDrivers](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getrecordnumdrivers)
 *
 * <br />
 *
 * This function retrieves the number of recording devices available for this output mode. Use this to enumerate all recording devices possible so that the user can select one.
 * 
 * @returns {struct.FmodSystemRecordNumDrivers}
 * @func_end
 */
function fmod_system_get_record_num_drivers() {}


/**
 * @func fmod_system_get_record_driver_info
 * @desc > **FMOD Function:** [System::getRecordDriverInfo](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getrecorddriverinfo)
 *
 * <br />
 *
 * This function retrieves identification information about an audio device specified by its index, and specific to the output mode.
 * 
 * @param {real} record_driver_index The index of the recording device. A value in the range [0, ${function.fmod_system_get_record_num_drivers}].
 * @returns {struct.FmodSystemRecordDriverInfo}
 * @func_end
 */
function fmod_system_get_record_driver_info(recording_device_index) {}


/**
 * @func fmod_system_get_record_position
 * @desc > **FMOD Function:** [System::getRecordPosition](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getrecordposition)
 *
 * <br />
 *
 * This function retrieves the current recording position of the record buffer in PCM samples.
 * 
 * ${function.fmod_last_result} will return `FMOD_RESULT.ERR_RECORD_DISCONNECTED` if the driver is unplugged.
 * 
 * The position will return to 0 when ${function.fmod_system_record_stop} is called or when a non-looping recording reaches the end.
 * 
 * [[Note: on PS4, record devices are virtual so 'position' will continue to update if the device is unplugged (the OS is generating silence). ${function.fmod_last_result} will still report `FMOD_RESULT.ERR_RECORD_DISCONNECTED` for your information though.]]
 * 
 * @param {real} device_index The index of the recording device. A value in the range [0, ${function.fmod_system_get_record_num_drivers}].
 * @returns {real}
 * @func_end
 */
function fmod_system_get_record_position(device_index) {}


/**
 * @func fmod_system_record_start
 * @desc > **FMOD Function:** [System::recordStart](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_recordstart)
 *
 * <br />
 *
 * This function starts the recording engine recording to a pre-created Sound object.
 * 
 * ${function.fmod_last_result} will return `FMOD_RESULT.ERR_RECORD_DISCONNECTED` if the driver is unplugged.
 * 
 * The sound must be created as `FMOD_MODE.CREATESAMPLE`. Raw PCM data can be accessed with ${function.fmod_sound_lock}, ${function.fmod_sound_unlock} and ${function.fmod_system_get_record_position}.
 * 
 * Recording from the same driver a second time will stop the first recording.
 * 
 * For lowest latency set the Sound sample rate to the rate returned by ${function.fmod_system_get_record_driver_info}, otherwise a resampler will be allocated to handle the difference in frequencies, which adds latency.
 * 
 * @param {real} device_index The index of the recording device. A value in the range [0, ${function.fmod_system_get_record_num_drivers}].
 * @param {real} sound_ref A reference to a user-created sound for the user to record to.
 * @param {boolean} loop A flag to tell the recording engine whether to continue recording to the provided sound from the start again, after it has reached the end. If this is set to `true` the data will be continually be overwritten once every loop.
 * @func_end
 */
function fmod_system_record_start(device_index, sound_ref, loop) {}


/**
 * @func fmod_system_record_stop
 * @desc > **FMOD Function:** [System::recordStop](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_recordstop)
 *
 * <br />
 *
 * This function stops the recording engine from recording to a pre-created Sound object.
 * 
 * ${function.fmod_last_result} returns no error if unplugged or already stopped.
 * 
 * @param {real} device_index The index of the recording device. A value in the range [0, ${function.fmod_system_get_record_num_drivers}].
 * @func_end
 */
function fmod_system_record_stop(device_index) {}


/**
 * @func fmod_system_is_recording
 * @desc > **FMOD Function:** [System::isRecording](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_isrecording)
 *
 * <br />
 *
 * This function retrieves the state of the FMOD recording API, i.e. if it is currently recording or not.
 * 
 * Recording can be started with ${function.fmod_system_record_start} and stopped with ${function.fmod_system_record_stop}.
 * 
 * ${function.fmod_last_result} will return `FMOD_RESULT.ERR_RECORD_DISCONNECTED` if the driver is unplugged.
 * 
 * [[Note: On PS4, record devices are virtual so 'position' will continue to update if the device is unplugged (the OS is generating silence). ${function.fmod_last_result} will still report `FMOD_RESULT.ERR_RECORD_DISCONNECTED` for your information though.]]
 * 
 * @param {real} device_index The index of the recording device. A value in the range [0, ${function.fmod_system_get_record_num_drivers}].
 * @returns {boolean}
 * @func_end
 */
function fmod_system_is_recording(device_index) {}


/**
 * @func fmod_system_create_geometry
 * @desc > **FMOD Function:** [System::createGeometry](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_creategeometry)
 *
 * <br />
 *
 * This is a geometry creation function. This function will create a base geometry object which can then have polygons added to it.
 * 
 * It returns a reference to the newly created [Geometry](https://www.fmod.com/docs/2.03/api/core-api-geometry.html) object.
 * 
 * Polygons can be added to a geometry object using ${function.fmod_geometry_add_polygon}. For best efficiency, avoid overlapping of polygons and long thin polygons.
 * 
 * A geometry object stores its polygons in a group to allow optimization for line testing, insertion and updating of geometry in real-time.
 * Geometry objects also allow for efficient rotation, scaling and translation of groups of polygons.
 * 
 * It is important to set the value of `max_world_size` to an appropriate value using ${function.fmod_system_set_geometry_settings}.
 * 
 * @param {real} max_polygons The maximum number of polygons within this object.
 * @param {real} max_vertices The maximum number of vertices within this object.
 * @returns {real}
 * @func_end
 */
function fmod_system_create_geometry(max_polygons, max_vertices) {}


/**
 * @func fmod_system_set_geometry_settings
 * @desc > **FMOD Function:** [System::setGeometrySettings](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setgeometrysettings)
 *
 * <br />
 *
 * This function sets the maximum world size for the geometry engine for performance / precision reasons.
 * 
 * FMOD uses an efficient spatial partitioning system to store polygons for ray casting purposes.
 * The maximum size of the world (`max_world_size`) should be set to allow processing within a known range.
 * Outside of this range, objects and polygons will not be processed as efficiently.
 * Excessive world size settings can also cause loss of precision and efficiency.
 * 
 * Setting `max_world_size` should be done first before creating any geometry. It can be done any time afterwards but may be slow in this case.
 * 
 * @param {real} max_world_size The maximum size of the world from the centerpoint to the edge using the same units used in other 3D functions.
 * @func_end
 */
function fmod_system_set_geometry_settings(max_world_size) {}


/**
 * @func fmod_system_get_geometry_settings
 * @desc > **FMOD Function:** [System::getGeometrySettings](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getgeometrysettings)
 *
 * <br />
 *
 * This function retrieves the maximum world size for the geometry engine.
 * 
 * FMOD uses an efficient spatial partitioning system to store polygons for ray casting purposes.
 * The maximum size of the world should be set to allow processing within a known range.
 * Outside of this range, objects and polygons will not be processed as efficiently.
 * Excessive world size settings can also cause loss of precision and efficiency.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_geometry_settings() {}


/**
 * @func fmod_system_load_geometry
 * @desc > **FMOD Function:** [System::loadGeometry](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_loadgeometry)
 *
 * <br />
 *
 * This function creates a geometry object from a block of memory which contains pre-saved geometry data.
 * 
 * It creates a reference to the newly created [Geometry](https://www.fmod.com/docs/2.03/api/core-api-geometry.html) object.
 * 
 * This function avoids the need to manually create and add geometry for faster start time.
 * 
 * @param {buffer} buff A buffer storing pre-saved geometry data from an earlier call to ${function.fmod_geometry_save}.
 * @param {real} length The size of the data in `buff`, in bytes.
 * @returns {real}
 * @func_end
 */
function fmod_system_load_geometry(buff, length) {}


/**
 * @func fmod_system_get_geometry_occlusion
 * @desc > **FMOD Function:** [System::getGeometryOcclusion](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getgeometryocclusion)
 *
 * <br />
 *
 * This function calculates geometry occlusion between a listener and a sound source.
 * 
 * If single-sided polygons have been created, it is important to get the source and listener positions around the right way, as the occlusion from point A to point B may not be the same as the occlusion from point B to point A.
 * 
 * @returns {struct.FmodSystemGeometryOcclusion}
 * @func_end
 */
function fmod_system_get_geometry_occlusion() {}


/**
 * @func fmod_system_lock_dsp
 * @desc > **FMOD Function:** [System::lockDSP](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_lockdsp)
 *
 * <br />
 *
 * This is a mutual exclusion function to lock the FMOD DSP engine (which runs asynchronously in another thread), so that it will not execute.
 * 
 * If the FMOD DSP engine is already executing, this function will block until it has completed.
 * 
 * The function may be used to synchronize DSP network operations carried out.
 * 
 * An example of using this function may be for when you want to construct a DSP sub-network, without the DSP engine executing in the background while the sub-network is still under construction.
 * 
 * Once the DSP engine no longer needs to be locked, it must be unlocked with ${function.fmod_system_unlock_dsp}.
 * 
 * [[Note: The DSP engine should not be locked for a significant amount of time, otherwise inconsistency in the audio output may result. (audio skipping / stuttering).]]
 * 
 * @func_end
 */
function fmod_system_lock_dsp() {}


/**
 * @func fmod_system_unlock_dsp
 * @desc > **FMOD Function:** [System::unlockDSP](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_unlockdsp)
 *
 * <br />
 *
 * This is a mutual exclusion function to unlock the FMOD DSP engine (which runs asynchronously in another thread) and let it continue executing.
 * 
 * The DSP engine must be locked with ${function.fmod_system_lock_dsp} before this function is called.
 * 
 * @func_end
 */
function fmod_system_unlock_dsp() {}


/**
 * @func fmod_system_set_callback
 * @desc > **FMOD Function:** [System::setCallback](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setcallback)
 * 
 * <br />
 * 
 * This function enables callbacks for System level notifications.
 * 
 * [[Note: FMOD System callbacks will be triggered as a ${event.social} but the ${var.async_load} DS map won't contain any specific information.]]
 * 
 * See also: [Callback Behavior](https://www.fmod.com/docs/2.03/api/glossary.html#callback-behavior)
 * 
 * @param {constant.FMOD_SYSTEM_CALLBACK} type A bitfield specifying which callback types are required, to filter out unwanted callbacks. Use `FMOD_SYSTEM_CALLBACK.ALL` to receive all supported callback kinds.
 * 
 * @event social
 * @member {string} type the string `"fmod_system_set_callback"`
 * @member {constant.FMOD_SYSTEM_CALLBACK} kind The kind of callback triggered.
 * @event_end
 * 
 * @func_end
 */
function fmod_system_set_callback(type) {}


/**
 * @func fmod_system_set_user_data
 * @desc > **FMOD Function:** [System::setUserData](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_setuserdata)
 *
 * <br />
 *
 * This function sets a user value associated with the currently selected System object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * [[Note: If you've created multiple systems, use ${function.fmod_system_select} to select the FMOD system for which you want to set the user data and then call this function. After that, you can switch back using another call to ${function.fmod_system_select}.]]
 * 
 * @param {real} data The user-specified data to be stored within the System object.
 * @func_end
 */
function fmod_system_set_user_data(data) {}


/**
 * @func fmod_system_get_user_data
 * @desc > **FMOD Function:** [System::getUserData](https://www.fmod.com/docs/2.03/api/core-api-system.html#system_getuserdata)
 *
 * <br />
 *
 * This function retrieves the user value associated with the currently selected System object.
 * 
 * [[Note: While FMOD allows arbitrary [User Data](https://www.fmod.com/docs/2.03/api/glossary.html#user-data), this function only allows you to get a real value (a double-precision floating-point value).]]
 * 
 * [[Note: If you've created multiple systems, use ${function.fmod_system_select} to select the FMOD system of which you want to get the user data and then call this function. After that, you can switch back using another call to ${function.fmod_system_select}.]]
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_user_data() {}

// Miscellaneous

/**
 * @func fmod_last_result
 * @desc This function returns the result of the last call to any of FMOD's functions.
 * 
 * The extension functions themselves don't return a value indicating if a function call was succesful or not.
 * You should therefore use this function if you want to get the result of the last function that you called.
 * 
 * @returns {constant.FMOD_RESULT}
 * @func_end
 */
function fmod_last_result() {}

/**
 * @func fmod_path_bundle
 * @desc Since FMOD uses direct C++ access to the file system, it doesn't know anything about the user path automatically. This function returns the full bundle path to an [Included File](https://manual.gamemaker.io/monthly/en/Settings/Included_Files.htm) in the `datafiles` folder.
 * 
 * @returns {string}
 * @func_end
 */

/**
 * @func fmod_path_user
 * @desc Since FMOD uses direct C++ access to the file system, it doesn't know anything about the bundle path automatically. This function returns the full path to a file stored in the save path.
 * 
 * @returns {string}
 * @func_end
 */

/**
 * @module home
 * @title Home
 * @description This is the FMOD extension for GameMaker which allows you to integrate [FMOD](https://fmod.com) in your GameMaker game.
 * 
 * The extension's functionality is divided into two main parts: 
 * 
 * * FMOD Core
 * * FMOD Studio
 * 
 * @section Guides
 * @desc This section contains guides to get started with the FMOD extension.
 * @ref page.GettingStarted
 * @ref page.GeneralInformation
 * @section_end
 * 
 * @section FMOD Core Modules
 * @desc This section lists the extension modules that belong under the FMOD [Core API](https://www.fmod.com/docs/2.03/api/core-api.html), along with a number of miscellaneous functions that don't fit elsewhere.
 * @ref module.system
 * @ref module.channel
 * @ref module.channel_control
 * @ref module.channel_group
 * @ref module.DSP
 * @ref module.dsp_connection
 * @ref module.reverb_3d
 * @ref module.sound
 * @ref module.sound_group
 * @ref module.geometry
 * @ref module.misc
 * @section_end
 * 
 * @section FMOD Studio Modules
 * @desc This section lists the extension modules that belong under the FMOD [Studio API](https://www.fmod.com/docs/2.03/api/studio-api.html).
 * @ref module.bank
 * @ref module.bus
 * @ref module.command_replay
 * @ref module.event_description
 * @ref module.event_instance
 * @ref module.studio_system
 * @ref module.studio_vca
 * @section_end
 * 
 * @module_end
 */

/**
 * @module channel
 * @title Channel
 * @desc > **FMOD Object:** [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html)
 * 
 * <br />
 * 
 * This module holds functionality related to Channels, which are a source of audio signal that connects to the [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html) mixing hierarchy.
 * 
 * Create a channel with ${function.fmod_system_play_sound} or ${function.fmod_system_play_dsp}.
 * 
 * @section_func
 * @ref fmod_channel_set_frequency
 * @ref fmod_channel_get_frequency
 * @ref fmod_channel_set_priority
 * @ref fmod_channel_get_priority
 * @ref fmod_channel_set_position
 * @ref fmod_channel_get_position
 * @ref fmod_channel_set_channel_group
 * @ref fmod_channel_get_channel_group
 * @ref fmod_channel_set_loop_count
 * @ref fmod_channel_get_loop_count
 * @ref fmod_channel_set_loop_points
 * @ref fmod_channel_get_loop_points
 * @ref fmod_channel_is_virtual
 * @ref fmod_channel_get_current_sound
 * @ref fmod_channel_get_index
 * @ref fmod_channel_get_system_object
 * @section_end
 * 
 * @module_end
 */

/**
 * @module channel_control
 * @title Channel Control
 * @desc > **FMOD Object:** [ChannelControl](https://www.fmod.com/docs/2.03/api/core-api-channelcontrol.html)
 * 
 * <br />
 * 
 * This module holds functionality related to the shared APIs between Channel and ChannelGroup.
 * 
 * @section_func
 * @ref fmod_channel_control_is_playing
 * @ref fmod_channel_control_stop
 * @ref fmod_channel_control_set_paused
 * @ref fmod_channel_control_get_paused
 * @ref fmod_channel_control_set_mode
 * @ref fmod_channel_control_get_mode
 * @ref fmod_channel_control_set_pitch
 * @ref fmod_channel_control_get_pitch
 * @ref fmod_channel_control_get_audibility
 * @ref fmod_channel_control_set_volume
 * @ref fmod_channel_control_get_volume
 * @ref fmod_channel_control_set_volume_ramp
 * @ref fmod_channel_control_get_volume_ramp
 * @ref fmod_channel_control_set_mute
 * @ref fmod_channel_control_get_mute
 * @ref fmod_channel_control_set_3d_attributes
 * @ref fmod_channel_control_get_3d_attributes
 * @ref fmod_channel_control_set_3d_cone_orientation
 * @ref fmod_channel_control_get_3d_cone_orientation
 * @ref fmod_channel_control_set_3d_cone_settings
 * @ref fmod_channel_control_get_3d_cone_settings
 * @ref fmod_channel_control_set_3d_custom_rolloff
 * @ref fmod_channel_control_get_3d_custom_rolloff
 * @ref fmod_channel_control_set_3d_distance_filter
 * @ref fmod_channel_control_get_3d_distance_filter
 * @ref fmod_channel_control_set_3d_doppler_level
 * @ref fmod_channel_control_get_3d_doppler_level
 * @ref fmod_channel_control_set_3d_level
 * @ref fmod_channel_control_get_3d_level
 * @ref fmod_channel_control_set_3d_min_max_distance
 * @ref fmod_channel_control_get_3d_min_max_distance
 * @ref fmod_channel_control_set_3d_occlusion
 * @ref fmod_channel_control_get_3d_occlusion
 * @ref fmod_channel_control_set_3d_spread
 * @ref fmod_channel_control_get_3d_spread
 * @ref fmod_channel_control_set_pan
 * @ref fmod_channel_control_set_mix_levels_input
 * @ref fmod_channel_control_set_mix_levels_output
 * @ref fmod_channel_control_set_mix_matrix
 * @ref fmod_channel_control_get_mix_matrix
 * @ref fmod_channel_control_set_reverb_properties
 * @ref fmod_channel_control_get_reverb_properties
 * @ref fmod_channel_control_set_low_pass_gain
 * @ref fmod_channel_control_get_low_pass_gain
 * @ref fmod_channel_control_add_dsp
 * @ref fmod_channel_control_remove_dsp
 * @ref fmod_channel_control_get_num_dsps
 * @ref fmod_channel_control_get_dsp
 * @ref fmod_channel_control_set_dsp_index
 * @ref fmod_channel_control_get_dsp_index
 * @ref fmod_channel_control_get_dsp_clock
 * @ref fmod_channel_control_set_delay
 * @ref fmod_channel_control_get_delay
 * @ref fmod_channel_control_add_fade_point
 * @ref fmod_channel_control_set_fade_point_ramp
 * @ref fmod_channel_control_remove_fade_points
 * @ref fmod_channel_control_get_fade_points
 * @ref fmod_channel_control_set_callback
 * @ref fmod_channel_control_get_system_object
 * @ref fmod_channel_control_set_user_data
 * @ref fmod_channel_control_get_user_data
 * @section_end
 * 
 * @module_end
 */

/**
 * @module channel_group
 * @title Channel Group
 * @desc > **FMOD Object:** [ChannelGroup](https://www.fmod.com/docs/2.03/api/core-api-channelgroup.html)
 * 
 * <br />
 * 
 * This module contains functionality related to Channel Groups, which are submixes in the mixing hierarchy akin to buses that can contain both Channel and ChannelGroup objects.
 * 
 * @section_func
 * @ref fmod_channel_group_get_num_channels
 * @ref fmod_channel_group_get_channel
 * @ref fmod_channel_group_add_group
 * @ref fmod_channel_group_get_num_groups
 * @ref fmod_channel_group_get_group
 * @ref fmod_channel_group_get_parent_group
 * @ref fmod_channel_set_channel_group
 * @ref fmod_channel_get_channel_group
 * @ref fmod_channel_group_get_name
 * @ref fmod_channel_group_release
 * @ref fmod_channel_group_get_system_object
 * @section_end
 * 
 * @module_end
 */

/**
 * @module DSP
 * @title DSP
 * @desc > **FMOD Object:** [DSP](https://www.fmod.com/docs/2.03/api/core-api-dsp.html)
 * 
 * <br />
 * 
 * This module contains functionality related to DSPs (Digital Signal Processors), which are nodes within a graph that transforms input audio signals to an output stream.
 * 
 * See the [DSP Architecture Guide](https://www.fmod.com/docs/2.03/api/white-papers-dsp-architecture.html) for more information.
 * 
 * @section_func
 * @ref fmod_dsp_add_input
 * @ref fmod_dsp_get_input
 * @ref fmod_dsp_get_output
 * @ref fmod_dsp_get_num_inputs
 * @ref fmod_dsp_get_num_outputs
 * @ref fmod_dsp_disconnect_all
 * @ref fmod_dsp_disconnect_from
 * @ref fmod_dsp_get_data_parameter_index
 * @ref fmod_dsp_get_num_parameters
 * @ref fmod_dsp_set_parameter_bool
 * @ref fmod_dsp_get_parameter_bool
 * @ref fmod_dsp_set_parameter_data
 * @ref fmod_dsp_get_parameter_data
 * @ref fmod_dsp_set_parameter_float
 * @ref fmod_dsp_get_parameter_float
 * @ref fmod_dsp_set_parameter_int
 * @ref fmod_dsp_get_parameter_int
 * @ref fmod_dsp_get_parameter_info
 * @ref fmod_dsp_set_channel_format
 * @ref fmod_dsp_get_channel_format
 * @ref fmod_dsp_get_output_channel_format
 * @ref fmod_dsp_get_metering_info
 * @ref fmod_dsp_set_metering_enabled
 * @ref fmod_dsp_get_metering_enabled
 * @ref fmod_dsp_set_active
 * @ref fmod_dsp_get_active
 * @ref fmod_dsp_set_bypass
 * @ref fmod_dsp_get_bypass
 * @ref fmod_dsp_set_wet_dry_mix
 * @ref fmod_dsp_get_wet_dry_mix
 * @ref fmod_dsp_get_idle
 * @ref fmod_dsp_reset
 * @ref fmod_dsp_release
 * @ref fmod_dsp_get_type
 * @ref fmod_dsp_get_info
 * @ref fmod_dsp_get_cpu_usage
 * @ref fmod_dsp_set_user_data
 * @ref fmod_dsp_get_user_data
 * @ref fmod_dsp_set_callback
 * @ref fmod_dsp_get_system_object
 * @section_end
 * 
 * @module_end
 */

/**
 * @module dsp_connection
 * @title DSP Connection
 * @desc > **FMOD Object:** [DSPConnection](https://www.fmod.com/docs/2.03/api/core-api-dspconnection.html)
 * 
 * <br />
 * 
 * This module holds the functionality related to Digital Signal Processor (DSP) Connections.
 * 
 * See the [DSP Architecture Guide](https://www.fmod.com/docs/2.03/api/white-papers-dsp-architecture.html) for more information.
 * 
 * @section_func
 * @ref fmod_dsp_connection_set_mix
 * @ref fmod_dsp_connection_get_mix
 * @ref fmod_dsp_connection_set_mix_matrix
 * @ref fmod_dsp_connection_get_mix_matrix
 * @ref fmod_dsp_connection_get_input
 * @ref fmod_dsp_connection_get_output
 * @ref fmod_dsp_connection_get_type
 * @ref fmod_dsp_connection_set_user_data
 * @ref fmod_dsp_connection_get_user_data
 * @section_end
 * 
 * @module_end
 */

/**
 * @module geometry
 * @title Geometry
 * @desc > **FMOD Object:** [Geometry](https://www.fmod.com/docs/2.03/api/core-api-geometry.html)
 * 
 * <br />
 * 
 * This module holds the functionality for the setup and modification of geometry for occlusion.
 * 
 * @section_func
 * @ref fmod_geometry_set_polygon_attributes
 * @ref fmod_geometry_get_polygon_attributes
 * @ref fmod_geometry_get_polygon_num_vertices
 * @ref fmod_geometry_set_polygon_vertex
 * @ref fmod_geometry_get_polygon_vertex
 * @ref fmod_geometry_set_position
 * @ref fmod_geometry_get_position
 * @ref fmod_geometry_set_rotation
 * @ref fmod_geometry_get_rotation
 * @ref fmod_geometry_set_scale
 * @ref fmod_geometry_get_scale
 * @ref fmod_geometry_add_polygon
 * @ref fmod_geometry_set_active
 * @ref fmod_geometry_get_active
 * @ref fmod_geometry_get_max_polygons
 * @ref fmod_geometry_get_num_polygons
 * @ref fmod_geometry_set_user_data
 * @ref fmod_geometry_get_user_data
 * @ref fmod_geometry_release
 * @ref fmod_geometry_save
 * @section_end
 * 
 * @module_end
 */

/**
 * @module reverb_3d
 * @title Reverb3D
 * @desc > **FMOD Object:** [Reverb3D](https://www.fmod.com/docs/2.03/api/core-api-reverb3d.html)
 * 
 * <br />
 * 
 * This module holds functionality related to virtual 3D reverb spheres. See the FMOD [3D Reverb](https://www.fmod.com/docs/2.03/api/white-papers-3d-reverb.html) guide for more information.
 * 
 * @section_func
 * @ref fmod_reverb_3d_set_3d_attributes
 * @ref fmod_reverb_3d_get_3d_attributes
 * @ref fmod_reverb_3d_set_properties
 * @ref fmod_reverb_3d_get_properties
 * @ref fmod_reverb_3d_set_active
 * @ref fmod_reverb_3d_get_active
 * @ref fmod_reverb_3d_release
 * @ref fmod_reverb_3d_set_user_data
 * @ref fmod_reverb_3d_get_user_data
 * @section_end
 * 
 * @module_end
 */

/**
 * @module sound
 * @title Sound
 * @desc > **FMOD Object:** [Sound](https://www.fmod.com/docs/2.03/api/core-api-sound.html)
 * 
 * <br />
 * 
 * This module holds the functionality related to FMOD sounds, which store [sample data](https://www.fmod.com/docs/2.03/api/glossary.html#sample-data) that can be played on a [Channel](https://www.fmod.com/docs/2.03/api/core-api-channel.html).
 * 
 * You can create sounds with ${function.fmod_system_create_sound} or ${function.fmod_system_create_stream}.
 * 
 * @section_func
 * @ref fmod_sound_get_name
 * @ref fmod_sound_get_format
 * @ref fmod_sound_get_length
 * @ref fmod_sound_get_num_tags
 * @ref fmod_sound_get_tag
 * @ref fmod_sound_set_3d_cone_settings
 * @ref fmod_sound_get_3d_cone_settings
 * @ref fmod_sound_set_3d_custom_rolloff
 * @ref fmod_sound_get_3d_custom_rolloff
 * @ref fmod_sound_set_3d_min_max_distance
 * @ref fmod_sound_get_3d_min_max_distance
 * @ref fmod_sound_set_defaults
 * @ref fmod_sound_get_defaults
 * @ref fmod_sound_set_mode
 * @ref fmod_sound_get_mode
 * @ref fmod_sound_set_loop_count
 * @ref fmod_sound_get_loop_count
 * @ref fmod_sound_set_loop_points
 * @ref fmod_sound_get_loop_points
 * @ref fmod_sound_set_sound_group
 * @ref fmod_sound_get_sound_group
 * @ref fmod_sound_get_num_sub_sounds
 * @ref fmod_sound_get_sub_sound
 * @ref fmod_sound_get_sub_sound_parent
 * @ref fmod_sound_get_open_state
 * @ref fmod_sound_read_data
 * @ref fmod_sound_seek_data
 * @ref fmod_sound_lock
 * @ref fmod_sound_unlock
 * @ref fmod_sound_get_music_num_channels
 * @ref fmod_sound_set_music_channel_volume
 * @ref fmod_sound_get_music_channel_volume
 * @ref fmod_sound_set_music_speed
 * @ref fmod_sound_get_music_speed
 * @ref fmod_sound_get_sync_point
 * @ref fmod_sound_get_num_sync_points
 * @ref fmod_sound_add_sync_point
 * @ref fmod_sound_delete_sync_point
 * @ref fmod_sound_release
 * @ref fmod_sound_get_system_object
 * @ref fmod_sound_set_user_data
 * @ref fmod_sound_get_user_data
 * @section_end
 * 
 * @module_end
 */

/**
 * @module sound_group
 * @title Sound Group
 * @desc > **FMOD Object:** [SoundGroup](https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html)
 * 
 * <br />
 * 
 * This module holds functionality related to Sound Groups.
 * 
 * @section_func
 * @ref fmod_sound_group_set_max_audible
 * @ref fmod_sound_group_get_max_audible
 * @ref fmod_sound_group_set_max_audible_behavior
 * @ref fmod_sound_group_get_max_audible_behavior
 * @ref fmod_sound_group_set_mute_fade_speed
 * @ref fmod_sound_group_get_mute_fade_speed
 * @ref fmod_sound_group_set_volume
 * @ref fmod_sound_group_get_volume
 * @ref fmod_sound_group_get_num_sounds
 * @ref fmod_sound_group_get_sound
 * @ref fmod_sound_group_get_num_playing
 * @ref fmod_sound_group_stop
 * @ref fmod_sound_group_get_name
 * @ref fmod_sound_group_release
 * @ref fmod_sound_group_get_system_object
 * @ref fmod_sound_group_set_user_data
 * @ref fmod_sound_group_get_user_data
 * @section_end
 * 
 * @module_end
 */

/**
 * @module bank
 * @title Bank
 * @desc > **FMOD Object:** [Studio::Bank](https://www.fmod.com/docs/2.03/api/studio-api-bank.html)
 * 
 * <br />
 * 
 * This module holds the functionality for FMOD Studio banks, which contain the metadata and audio sample data required for runtime mixing and playback. Audio sample data may be packed into the same bank as the events which reference it, or it may be packed into separate banks.
 * 
 * @section_func
 * @ref fmod_studio_bank_get_loading_state
 * @ref fmod_studio_bank_load_sample_data
 * @ref fmod_studio_bank_unload_sample_data
 * @ref fmod_studio_bank_get_sample_loading_state
 * @ref fmod_studio_bank_unload
 * @ref fmod_studio_bank_get_bus_count
 * @ref fmod_studio_bank_get_bus_list
 * @ref fmod_studio_bank_get_event_count
 * @ref fmod_studio_bank_get_event_description_list
 * @ref fmod_studio_bank_get_string_count
 * @ref fmod_studio_bank_get_string_info
 * @ref fmod_studio_bank_get_vca_count
 * @ref fmod_studio_bank_get_vca_list
 * @ref fmod_studio_bank_get_id
 * @ref fmod_studio_bank_get_path
 * @ref fmod_studio_bank_is_valid
 * @ref fmod_studio_bank_set_user_data
 * @ref fmod_studio_bank_get_user_data
 * @section_end
 * 
 * @module_end
 */

/**
 * @module bus
 * @title Bus
 * @desc > **FMOD Object:** [Studio::Bus](https://www.fmod.com/docs/2.03/api/studio-api-bus.html)
 * 
 * <br />
 * 
 * This module has functionality for global mixer buses.
 * 
 * @section_func
 * @ref fmod_studio_bus_set_paused
 * @ref fmod_studio_bus_get_paused
 * @ref fmod_studio_bus_stop_all_events
 * @ref fmod_studio_bus_set_volume
 * @ref fmod_studio_bus_get_volume
 * @ref fmod_studio_bus_set_mute
 * @ref fmod_studio_bus_get_mute
 * @ref fmod_studio_bus_set_port_index
 * @ref fmod_studio_bus_get_port_index
 * @ref fmod_studio_bus_get_channel_group
 * @ref fmod_studio_bus_lock_channel_group
 * @ref fmod_studio_bus_unlock_channel_group
 * @ref fmod_studio_bus_get_cpu_usage
 * @ref fmod_studio_bus_get_memory_usage
 * @ref fmod_studio_bus_get_id
 * @ref fmod_studio_bus_get_path
 * @ref fmod_studio_bus_is_valid
 * @section_end
 * 
 * @module_end
 */

/**
 * @module command_replay
 * @title Command Replay
 * @desc > **FMOD Object:** [Studio::CommandReplay](https://www.fmod.com/docs/2.03/api/studio-api-commandreplay.html)
 * 
 * <br />
 * 
 * This module holds the functionality for the FMOD Studio command replay system, which allows API calls in a session to be recorded and later played back for debugging and performance purposes.
 * 
 * @section_func
 * @ref fmod_studio_command_replay_set_bank_path
 * @ref fmod_studio_command_replay_set_create_instance_callback
 * @ref fmod_studio_command_replay_set_frame_callback
 * @ref fmod_studio_command_replay_set_load_bank_callback
 * @ref fmod_studio_command_replay_start
 * @ref fmod_studio_command_replay_stop
 * @ref fmod_studio_command_replay_get_current_command
 * @ref fmod_studio_command_replay_get_playback_state
 * @ref fmod_studio_command_replay_set_paused
 * @ref fmod_studio_command_replay_get_paused
 * @ref fmod_studio_command_replay_seek_to_command
 * @ref fmod_studio_command_replay_seek_to_time
 * @ref fmod_studio_command_replay_get_command_at_time
 * @ref fmod_studio_command_replay_get_command_count
 * @ref fmod_studio_command_replay_get_command_info
 * @ref fmod_studio_command_replay_get_command_string
 * @ref fmod_studio_command_replay_get_length
 * @ref fmod_studio_command_replay_get_system_object
 * @ref fmod_studio_command_replay_is_valid
 * @ref fmod_studio_command_replay_set_user_data
 * @ref fmod_studio_command_replay_get_user_data
 * @ref fmod_studio_command_replay_release
 * @section_end
 * 
 * @module_end
 */

/**
 * @module event_description
 * @title Event Description
 * @desc > **FMOD Object:** [Studio::EventDescription](https://www.fmod.com/docs/2.03/api/studio-api-eventdescription.html)
 * 
 * <br />
 * 
 * This module holds functionality related to descriptions of FMOD Studio Events.
 * 
 * Event descriptions belong to banks and can be queried after the relevant bank has been loaded. Event descriptions may be retrieved via path or GUID lookup, or by enumerating all descriptions in a bank.
 * 
 * @section_func
 * @ref fmod_studio_event_description_create_instance
 * @ref fmod_studio_event_description_get_instance_count
 * @ref fmod_studio_event_description_get_instance_list
 * @ref fmod_studio_event_description_release_all_instances
 * @ref fmod_studio_event_description_load_sample_data
 * @ref fmod_studio_event_description_unload_sample_data
 * @ref fmod_studio_event_description_get_sample_loading_state
 * @ref fmod_studio_event_description_is_3d
 * @ref fmod_studio_event_description_is_doppler_enabled
 * @ref fmod_studio_event_description_is_oneshot
 * @ref fmod_studio_event_description_is_snapshot
 * @ref fmod_studio_event_description_is_stream
 * @ref fmod_studio_event_description_has_sustain_point
 * @ref fmod_studio_event_description_get_min_max_distance
 * @ref fmod_studio_event_description_get_sound_size
 * @ref fmod_studio_event_description_get_parameter_description_by_name
 * @ref fmod_studio_event_description_get_parameter_description_by_id
 * @ref fmod_studio_event_description_get_parameter_description_by_index
 * @ref fmod_studio_event_description_get_parameter_description_count
 * @ref fmod_studio_event_description_get_parameter_label_by_name
 * @ref fmod_studio_event_description_get_parameter_label_by_id
 * @ref fmod_studio_event_description_get_parameter_label_by_index
 * @ref fmod_studio_event_description_get_user_property
 * @ref fmod_studio_event_description_get_user_property_by_index
 * @ref fmod_studio_event_description_get_user_property_count
 * @ref fmod_studio_event_description_get_id
 * @ref fmod_studio_event_description_get_length
 * @ref fmod_studio_event_description_get_path
 * @ref fmod_studio_event_description_set_callback
 * @ref fmod_studio_event_description_set_user_data
 * @ref fmod_studio_event_description_get_user_data
 * @ref fmod_studio_event_description_is_valid
 * @section_end
 * 
 * @module_end
 */

/**
 * @module event_instance
 * @title Event Instance
 * @desc > **FMOD Object:** [Studio::EventInstance](https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html)
 * 
 * <br />
 * 
 * This module holds functionality related to instances of an FMOD Studio Event.
 * 
 * @section_func
 * @ref fmod_studio_event_instance_start
 * @ref fmod_studio_event_instance_stop
 * @ref fmod_studio_event_instance_get_playback_state
 * @ref fmod_studio_event_instance_set_paused
 * @ref fmod_studio_event_instance_get_paused
 * @ref fmod_studio_event_instance_keyoff
 * @ref fmod_studio_event_instance_set_pitch
 * @ref fmod_studio_event_instance_get_pitch
 * @ref fmod_studio_event_instance_set_property
 * @ref fmod_studio_event_instance_get_property
 * @ref fmod_studio_event_instance_set_timeline_position
 * @ref fmod_studio_event_instance_get_timeline_position
 * @ref fmod_studio_event_instance_set_volume
 * @ref fmod_studio_event_instance_get_volume
 * @ref fmod_studio_event_instance_is_virtual
 * @ref fmod_studio_event_instance_set_3d_attributes
 * @ref fmod_studio_event_instance_get_3d_attributes
 * @ref fmod_studio_event_instance_set_listener_mask
 * @ref fmod_studio_event_instance_get_listener_mask
 * @ref fmod_studio_event_instance_get_min_max_distance
 * @ref fmod_studio_event_instance_set_parameter_by_name
 * @ref fmod_studio_event_instance_set_parameter_by_name_with_label
 * @ref fmod_studio_event_instance_get_parameter_by_name
 * @ref fmod_studio_event_instance_set_parameter_by_id
 * @ref fmod_studio_event_instance_set_parameter_by_id_with_label
 * @ref fmod_studio_event_instance_get_parameter_by_id
 * @ref fmod_studio_event_instance_get_channel_group
 * @ref fmod_studio_event_instance_set_reverb_level
 * @ref fmod_studio_event_instance_get_reverb_level
 * @ref fmod_studio_event_instance_get_cpu_usage
 * @ref fmod_studio_event_instance_get_memory_usage
 * @ref fmod_studio_event_instance_set_callback
 * @ref fmod_studio_event_instance_set_user_data
 * @ref fmod_studio_event_instance_get_user_data
 * @ref fmod_studio_event_instance_get_description
 * @ref fmod_studio_event_instance_release
 * @ref fmod_studio_event_instance_is_valid
 * @section_end
 * 
 * @module_end
 */

/**
 * @module studio_system
 * @title FMOD Studio System
 * @desc > **FMOD Object:** [Studio::System](https://www.fmod.com/docs/2.03/api/studio-api-system.html)
 * 
 * <br />
 * 
 * This module holds functionality related to the FMOD Studio system object.
 * 
 * Create an FMOD Studio system object with ${function.fmod_studio_system_create}.
 * 
 * [[Note: Initializing the FMOD Studio System object will also initialize the core System object.]]
 * 
 * @section_func
 * @ref fmod_studio_system_create
 * @ref fmod_studio_system_init
 * @ref fmod_studio_system_release
 * @ref fmod_studio_system_update
 * @ref fmod_studio_system_flush_commands
 * @ref fmod_studio_system_flush_sample_loading
 * @ref fmod_studio_system_load_bank_custom
 * @ref fmod_studio_system_load_bank_file
 * @ref fmod_studio_system_load_bank_memory
 * @ref fmod_studio_system_unload_all
 * @ref fmod_studio_system_get_bank
 * @ref fmod_studio_system_get_bank_by_id
 * @ref fmod_studio_system_get_bank_count
 * @ref fmod_studio_system_get_bank_list
 * @ref fmod_studio_system_set_listener_attributes
 * @ref fmod_studio_system_get_listener_attributes
 * @ref fmod_studio_system_set_listener_weight
 * @ref fmod_studio_system_get_listener_weight
 * @ref fmod_studio_system_set_num_listeners
 * @ref fmod_studio_system_get_num_listeners
 * @ref fmod_studio_system_get_bus
 * @ref fmod_studio_system_get_bus_by_id
 * @ref fmod_studio_system_get_event
 * @ref fmod_studio_system_get_event_by_id
 * @ref fmod_studio_system_get_parameter_by_id
 * @ref fmod_studio_system_set_parameter_by_id
 * @ref fmod_studio_system_set_parameter_by_id_with_label
 * @ref fmod_studio_system_get_parameter_by_name
 * @ref fmod_studio_system_set_parameter_by_name
 * @ref fmod_studio_system_set_parameter_by_name_with_label
 * @ref fmod_studio_system_get_parameter_description_by_name
 * @ref fmod_studio_system_get_parameter_description_by_id
 * @ref fmod_studio_system_get_parameter_description_count
 * @ref fmod_studio_system_get_parameter_description_list
 * @ref fmod_studio_system_get_parameter_label_by_name
 * @ref fmod_studio_system_get_parameter_label_by_id
 * @ref fmod_studio_system_get_vca
 * @ref fmod_studio_system_get_vca_by_id
 * @ref fmod_studio_system_set_advanced_settings
 * @ref fmod_studio_system_get_advanced_settings
 * @ref fmod_studio_system_start_command_capture
 * @ref fmod_studio_system_stop_command_capture
 * @ref fmod_studio_system_load_command_replay
 * @ref fmod_studio_system_get_buffer_usage
 * @ref fmod_studio_system_reset_buffer_usage
 * @ref fmod_studio_system_get_cpu_usage
 * @ref fmod_studio_system_get_memory_usage
 * @ref fmod_studio_system_set_callback
 * @ref fmod_studio_system_set_user_data
 * @ref fmod_studio_system_get_user_data
 * @ref fmod_studio_system_get_sound_info
 * @ref fmod_studio_system_get_core_system
 * @ref fmod_studio_system_lookup_id
 * @ref fmod_studio_system_lookup_path
 * @ref fmod_studio_system_is_valid
 * @section_end
 * 
 * @module_end
 */

/**
 * @module studio_vca
 * @title VCA
 * @desc > **FMOD Object:** [Studio::VCA](https://www.fmod.com/docs/2.03/api/studio-api-vca.html)
 * 
 * <br />
 * 
 * This module holds functionality related to global mixer [VCAs](https://www.fmod.com/docs/2.00/studio/mixing.html#vcas).
 * 
 * @section_func
 * @ref fmod_studio_vca_set_volume
 * @ref fmod_studio_vca_get_volume
 * @ref fmod_studio_vca_get_id
 * @ref fmod_studio_vca_get_path
 * @ref fmod_studio_vca_is_valid
 * @section_end
 * 
 * @module_end
 */

/**
 * @module system
 * @title System
 * @desc > **FMOD Object:** [System](https://www.fmod.com/docs/2.03/api/core-api-system.html)
 * 
 * <br />
 * 
 * This module holds functionality related to FMOD's System object, which is a management object from which all resources are created and played.
 * 
 * Create this object with ${function.fmod_system_create}.
 * 
 * @section_func
 * @ref fmod_system_create
 * @ref fmod_system_select
 * @ref fmod_system_count
 * @ref fmod_system_init
 * @ref fmod_system_release
 * @ref fmod_system_close
 * @ref fmod_system_update
 * @ref fmod_system_mixer_suspend
 * @ref fmod_system_mixer_resume
 * @ref fmod_system_set_output
 * @ref fmod_system_get_output
 * @ref fmod_system_get_num_drivers
 * @ref fmod_system_get_driver_info
 * @ref fmod_system_set_driver
 * @ref fmod_system_get_driver
 * @ref fmod_system_set_software_channels
 * @ref fmod_system_get_software_channels
 * @ref fmod_system_set_software_format
 * @ref fmod_system_get_software_format
 * @ref fmod_system_set_dsp_buffer_size
 * @ref fmod_system_get_dsp_buffer_size
 * @ref fmod_system_set_stream_buffer_size
 * @ref fmod_system_get_stream_buffer_size
 * @ref fmod_system_set_advanced_settings
 * @ref fmod_system_get_advanced_settings
 * @ref fmod_system_set_speaker_position
 * @ref fmod_system_get_speaker_position
 * @ref fmod_system_set_3d_settings
 * @ref fmod_system_get_3d_settings
 * @ref fmod_system_set_3d_num_listeners
 * @ref fmod_system_get_3d_num_listeners
 * @ref fmod_system_set_3d_rolloff_callback
 * @ref fmod_system_set_network_proxy
 * @ref fmod_system_get_network_proxy
 * @ref fmod_system_set_network_timeout
 * @ref fmod_system_get_network_timeout
 * @ref fmod_system_get_version
 * @ref fmod_system_get_channels_playing
 * @ref fmod_system_get_cpu_usage
 * @ref fmod_system_get_file_usage
 * @ref fmod_system_get_default_mix_matrix
 * @ref fmod_system_get_speaker_mode_channels
 * @ref fmod_system_create_sound
 * @ref fmod_system_create_stream
 * @ref fmod_system_create_dsp
 * @ref fmod_system_create_dsp_by_type
 * @ref fmod_system_create_channel_group
 * @ref fmod_system_create_sound_group
 * @ref fmod_system_create_reverb_3d
 * @ref fmod_system_play_sound
 * @ref fmod_system_play_dsp
 * @ref fmod_system_get_channel
 * @ref fmod_system_get_master_channel_group
 * @ref fmod_system_get_master_sound_group
 * @ref fmod_system_set_3d_listener_attributes
 * @ref fmod_system_get_3d_listener_attributes
 * @ref fmod_system_set_reverb_properties
 * @ref fmod_system_get_reverb_properties
 * @ref fmod_system_attach_channel_group_to_port
 * @ref fmod_system_detach_channel_group_from_port
 * @ref fmod_system_get_record_num_drivers
 * @ref fmod_system_get_record_driver_info
 * @ref fmod_system_get_record_position
 * @ref fmod_system_record_start
 * @ref fmod_system_record_stop
 * @ref fmod_system_is_recording
 * @ref fmod_system_create_geometry
 * @ref fmod_system_set_geometry_settings
 * @ref fmod_system_get_geometry_settings
 * @ref fmod_system_load_geometry
 * @ref fmod_system_get_geometry_occlusion
 * @ref fmod_system_lock_dsp
 * @ref fmod_system_unlock_dsp
 * @ref fmod_system_set_callback
 * @ref fmod_system_set_user_data
 * @ref fmod_system_get_user_data
 * @section_end
 * 
 * @module_end
 */

/**
 * @module misc
 * @title Miscellaneous
 * @desc > **FMOD Object:** N/A
 * 
 * <br />
 * 
 * This module contains a number of miscellaneous functions relating to the FMOD extension.
 * 
 * @section_func
 * @ref fmod_last_result
 * @ref fmod_memory_get_stats
 * @ref fmod_debug_initialize
 * @ref fmod_thread_set_attributes
 * @ref fmod_path_bundle
 * @ref fmod_path_user
 * @section_end
 * 
 * @module_end
 */
