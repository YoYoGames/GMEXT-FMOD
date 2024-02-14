// Channel

/**
 * @func fmod_channel_set_frequency
 * @desc > **FMOD Function:** [Channel::setFrequency](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_setfrequency)
 *
 * <br />
 *
 * This function sets the frequency or playback rate.
 * 
 * [[Note: The default frequency is determined by the audio format of the [Sound](https://www.fmod.com/docs/2.02/api/core-api-sound.html) or DSP.]]
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
 * @desc > **FMOD Function:** [Channel::getFrequency](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_getfrequency)
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
 * @desc > **FMOD Function:** [Channel::setPriority](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_setpriority)
 *
 * <br />
 *
 * This function sets the priority used for virtual voice ordering.
 * 
 * [[Note: Priority is used as a coarse grain control for the virtual voice system, lower priority channels will always be stolen before higher ones. For channels of equal priority, those with the quietest ${func.fmod_channel_control_get_audibility} value will be stolen first.]]
 * 
 * See the FMOD [Virtual Voices](https://www.fmod.com/docs/2.02/api/white-papers-virtual-voices.html) guide for more information.
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} priority The priority value where 0 represents most important and 256 represents least important. The default is 128.
 * @func_end
 */
function fmod_channel_set_priority(channel_ref, priority) {}


/**
 * @func fmod_channel_get_priority
 * @desc > **FMOD Function:** [Channel::getPriority](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_getpriority)
 *
 * <br />
 *
 * This function retrieves the priority used for virtual voice ordering.
 * 
 * The function returns the priority value where 0 represents most important and 256 represents least important.
 * 
 * * [[Note: Priority is used as a coarse grain control for the virtual voice system, lower priority channels will always be stolen before higher ones. For channels of equal priority, those with the quietest ${func.fmod_channel_control_get_audibility} value will be stolen first.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real} priority
 * @func_end
 */
function fmod_channel_get_priority(channel_ref) {}


/**
 * @func fmod_channel_set_position
 * @desc > **FMOD Function:** [Channel::setPosition](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_setposition)
 *
 * <br />
 *
 * This function sets the current playback position.
 * 
 * [[Note: Certain ${const.FMOD_TIMEUNIT} types are always available: `FMOD_TIMEUNIT.PCM`, `FMOD_TIMEUNIT.PCMBYTES` and `FMOD_TIMEUNIT.MS`. The others are format specific such as `FMOD_TIMEUNIT.MODORDER` / `FMOD_TIMEUNIT.MODROW` / `FMOD_TIMEUNIT.MODPATTERN` which is specific to files of type MOD / S3M / XM / IT.]]
 * 
 * [[Note: If playing a Sound created with ${func.fmod_system_create_stream} or `FMOD_MODE.CREATESTREAM` changing the position may cause a slow reflush operation while the file seek and decode occurs. You can avoid this by creating the stream with `FMOD_MODE.NONBLOCKING`. This will cause the stream to go into `FMOD_OPENSTATE.SETPOSITION` state (see ${function.fmod_sound_get_open_state}) and Sound commands will return ${const.FMOD_RESULT}.`ERR_NOTREADY`. ${func.fmod_channel_get_position} will also not update until this non-blocking set position operation has completed.]]
 * 
 * [[Note: Using a VBR source that does not have an associated seek table or seek information (such as MP3 or MOD/S3M/XM/IT) may cause inaccurate seeking if you specify `FMOD_TIMEUNIT.MS` or `FMOD_TIMEUNIT.PCM`. If you want FMOD to create a PCM vs bytes seek table so that seeking is accurate, you will have to specify `FMOD_MODE.ACCURATETIME` when loading or opening the sound. This means there is a slight delay as FMOD scans the whole file when loading the sound to create this table.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} position The playback position.
 * @param {const.FMOD_TIMEUNIT} time_unit The time units in which the `position` parameter is expressed.
 * @func_end
 */
function fmod_channel_set_position(channel_ref, position, time_unit) {}


/**
 * @func fmod_channel_get_position
 * @desc > **FMOD Function:** [Channel::getPosition](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_getposition)
 *
 * <br />
 *
 * This function retrieves the current playback position.
 * 
 * [[Note: Certain ${const.FMOD_TIMEUNIT} types are always available: `FMOD_TIMEUNIT.PCM`, `FMOD_TIMEUNIT.PCMBYTES` and `FMOD_TIMEUNIT.MS`. The others are format specific such as `FMOD_TIMEUNIT.MODORDER` / `FMOD_TIMEUNIT.MODROW` / `FMOD_TIMEUNIT.MODPATTERN` which is specific to files of type MOD / S3M / XM / IT.]]
 * 
 * [[Note: If `FMOD_TIMEUNIT.MS` or `FMOD_TIMEUNIT.PCMBYTES` are used, the value is internally converted from `FMOD_TIMEUNIT.PCM`, so the retrieved value may not exactly match the set value.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {const.FMOD_TIMEUNIT} time_unit The time units in which the `position` parameter is expressed.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_position(channel_ref, time_unit) {}


/**
 * @func fmod_channel_set_channel_group
 * @desc > **FMOD Function:** [Channel::setChannelGroup](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_setchannelgroup)
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
 * @desc > **FMOD Function:** [Channel::getChannelGroup](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_getchannelgroup)
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
 * @desc > **FMOD Function:** [Channel::setLoopCount](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_setloopcount)
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
 * @desc > **FMOD Function:** [Channel::getLoopCount](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_getloopcount)
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
 * @desc > **FMOD Function:** [Channel::setLoopPoints](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_setlooppoints)
 *
 * <br />
 *
 * This function sets the loop start and end points.
 * 
 * Loop points may only be set on a channel playing a sound, not a channel playing a DSP (See ${function.fmod_system_play_dsp}).
 * 
 * [[Note: Valid ${const.FMOD_TIMEUNIT} types are `FMOD_TIMEUNIT.PCM`, `FMOD_TIMEUNIT.MS`, `FMOD_TIMEUNIT.PCMBYTES`. Any other time units return `FMOD_RESULT.ERR_FORMAT`.
 * If `FMOD_TIMEUNIT.MS` or `FMOD_TIMEUNIT.PCMBYTES` are used, the value is internally converted from `FMOD_TIMEUNIT.PCM`, so the retrieved value may not exactly match the set value.]]
 * 
 * The Channel's mode must be set to `FMOD_MODE.LOOP_NORMAL` or `FMOD_MODE.LOOP_BIDI` for loop points to affect playback.
 * 
 * See also: [Streaming Issues](https://www.fmod.com/docs/2.02/api/glossary.html#streaming-issues)
 * 
 * @param {real} channel_ref A reference to a channel.
 * @param {real} loop_start The loop start point.
 * @param {const.FMOD_TIMEUNIT} loop_start_type The time units in which the `loop_start` parameter is expressed.
 * @param {real} loop_end The loop end point.
 * @param {const.FMOD_TIMEUNIT} loop_end_type The time units in which the `loop_end` parameter is expressed.
 * @func_end
 */
function fmod_channel_set_loop_points(channel_ref, loop_start, loop_start_type, loop_end, loop_end_type) {}


/**
 * @func fmod_channel_get_loop_points
 * @desc > **FMOD Function:** [Channel::getLoopPoints](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_getlooppoints)
 *
 * <br />
 *
 * This function retrieves the loop start and end points.
 * 
 * [[Note: Valid ${const.FMOD_TIMEUNIT} types are `FMOD_TIMEUNIT.PCM`, `FMOD_TIMEUNIT.MS`, `FMOD_TIMEUNIT.PCMBYTES`. Any other time units return `FMOD_RESULT.ERR_FORMAT`.
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
 * @desc > **FMOD Function:** [Channel::isVirtual](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_isvirtual)
 *
 * <br />
 *
 * This function retrieves whether the channel is being emulated by the virtual voice system.
 * 
 * If `true` is returned, the channel is silent / emulated. If `false` is returned, the channel is audible / real.
 * 
 * See the FMOD [Virtual Voices](https://www.fmod.com/docs/2.02/api/white-papers-virtual-voices.html) guide for more information.
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {boolean}
 * @func_end
 */
function fmod_channel_is_virtual(channel_ref) {}


/**
 * @func fmod_channel_get_current_sound
 * @desc > **FMOD Function:** [Channel::getCurrentSound](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_getcurrentsound)
 *
 * <br />
 *
 * This function retrieves the currently playing sound.
 * 
 * [[Note: The function returns 0 if no sound is playing.]]
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_current_sound(channel_ref) {}


/**
 * @func fmod_channel_get_index
 * @desc > **FMOD Function:** [Channel::getIndex](https://www.fmod.com/docs/2.02/api/core-api-channel.html#channel_getindex)
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
 * @desc > **FMOD Function:** [ChannelControl::getSystemObject](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getsystemobject)
 * 
 * <br />
 * 
 * This function retrieves the system that created this object.
 * 
 * The value 0 is returned in case something went wrong.
 * 
 * @param {real} channel_ref A reference to a channel.
 * @returns {real}
 * @func_end
 */
function fmod_channel_get_system_object(channel_ref) {}

// Channel Control

/**
 * @func fmod_channel_control_is_playing
 * @desc > **FMOD Function:** [ChannelControl::isPlaying](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_isplaying)
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
 * @desc > **FMOD Function:** [ChannelControl::stop](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_stop)
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
 * @desc > **FMOD Function:** [ChannelControl::setPaused](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setpaused)
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
 * @desc > **FMOD Function:** [ChannelControl::getPaused](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getpaused)
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
 * @desc > **FMOD Function:** [ChannelControl::setMode](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setmode)
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
 * @param {FMOD_MODE} mode The playback mode. More than one mode can be set at once by combining them with the OR operator. The default is `FMOD_MODE.DEFAULT`.
 * @func_end
 */
function fmod_channel_control_set_mode(channel_control_ref, mode) {}


/**
 * @func fmod_channel_control_get_mode
 * @desc > **FMOD Function:** [ChannelControl::getMode](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getmode)
 *
 * <br />
 *
 * This function retrieves the playback mode bits that control how this object behaves.
 * 
 * You can test the playback mode bitfield against a specific ${const.FMOD_MODE} with the AND operator.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_mode(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_pitch
 * @desc > **FMOD Function:** [ChannelControl::setPitch](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setpitch)
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
 * @desc > **FMOD Function:** [ChannelControl::getPitch](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getpitch)
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
 * @desc > **FMOD Function:** [ChannelControl::getAudibility](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getaudibility)
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
 * See the FMOD [Virtual Voice System](https://www.fmod.com/docs/2.02/api/white-papers-virtual-voices.html#audibility-calculation) white paper for more details about how audibility is calculated.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_audibility(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_volume
 * @desc > **FMOD Function:** [ChannelControl::setVolume](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setvolume)
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
 * @desc > **FMOD Function:** [ChannelControl::getVolume](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getvolume)
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
 * @desc > **FMOD Function:** [ChannelControl::setVolumeRamp](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setvolumeramp)
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
 * @desc > **FMOD Function:** [ChannelControl::getVolumeRamp](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getvolumeramp)
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
 * @desc > **FMOD Function:** [ChannelControl::setMute](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setmute)
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
 * @desc > **FMOD Function:** [ChannelControl::getMute](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getmute)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DAttributes](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3dattributes)
 *
 * <br />
 *
 * This function sets the 3D position and velocity used to apply panning, attenuation and doppler.
 * 
 * [[Note: The `FMOD_MODE.AS_3D` flag must be set on this object otherwise `FMOD_RESULT.ERR_NEEDS3D` is returned.]]
 * 
 * [[Note: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.02/api/glossary.html#handedness).]]
 * 
 * [[Note: For a stereo 3D sound, you can set the spread of the left/right parts in speaker space by using ${function.fmod_channel_control_set_3d_spread}.]]
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {struct.FmodVector} pos The position in 3D space used for panning and attenuation. The values are expressed in FMOD [Distance Units](https://www.fmod.com/docs/2.02/api/glossary.html#distance-units).
 * @param {struct.FmodVector} vel The velocity in 3D space used for doppler. The values are expressed in FMOD [Distance Units](https://www.fmod.com/docs/2.02/api/glossary.html#distance-units) per second.
 * @func_end
 */
function fmod_channel_control_set_3d_attributes(channel_control_ref, pos, vel) {}


/**
 * @func fmod_channel_control_get_3d_attributes
 * @desc > **FMOD Function:** [ChannelControl::get3DAttributes](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3dattributes)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DConeOrientation](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3dconeorientation)
 *
 * <br />
 *
 * This function sets the orientation of a 3D cone shape, used for simulated occlusion.
 * 
 * [[Note: The `FMOD_MODE.AS_3D` flag must be set on this object otherwise `FMOD_RESULT.ERR_NEEDS3D` is returned.]]
 * 
 * [[Note: This function has no effect unless ${function.fmod_channel_control_set_3d_cone_settings} has been used to change the cone inside/outside angles from the default.]]
 * 
 * [[Note: Vectors must be provided in the correct [handedness](https://www.fmod.com/docs/2.02/api/glossary.html#handedness).]]
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {struct.FmodVector} orientation The normalized orientation vector, which represents the direction of the sound cone. Default is [0, 0, 1].
 * @func_end
 */
function fmod_channel_control_set_3d_cone_orientation(channel_control_ref, orientation) {}


/**
 * @func fmod_channel_control_get_3d_cone_orientation
 * @desc > **FMOD Function:** [ChannelControl::get3DConeOrientation](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3dconeorientation)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DConeSettings](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3dconesettings)
 *
 * <br />
 *
 * This function sets the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * 
 * When ${function.fmod_channel_control_set_3d_cone_orientation} is used and a 3D 'cone' is set up, attenuation will automatically occur for a sound based on the relative angle of the direction the cone is facing, vs the angle between the sound and the listener.
 *
 * * If the relative angle is within the `insideconeangle`, the sound will not have any attenuation applied.
 * * If the relative angle is between the `insideconeangle` and `outsideconeangle`, linear volume attenuation (between 1 and `outsidevolume`) is applied between the two angles until it reaches the `outsideconeangle`.
 * * If the relative angle is outside of the `outsideconeangle` the volume does not attenuate any further.
 * 
 * [[Note: The `FMOD_MODE.AS_3D` flag must be set on this object otherwise `FMOD_RESULT.ERR_NEEDS3D` is returned.]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} inside_cone_angle The inside cone angle. This is the angle spread within which the sound is unattenuated, expressed in degrees. The default value is 360.
 * @param {real} outside_cone_angle The outside cone angle. This is the angle spread outside of which the sound is attenuated to its `outsidevolume`, expressed in degrees. The default value is 360.
 * @param {real} outside_volume The cone outside volume. A (linear) value in the range [0, 1]. Default is 1.
 * @func_end
 */
function fmod_channel_control_set_3d_cone_settings(channel_control_ref, inside_cone_angle, outside_cone_angle, outside_volume) {}


/**
 * @func fmod_channel_control_get_3d_cone_settings
 * @desc > **FMOD Function:** [ChannelControl::get3DConeSettings](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3dconesettings)
 *
 * <br />
 *
 * This function retrieves the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * 
 * When ${function.fmod_channel_control_set_3d_cone_orientation} is used and a 3D 'cone' is set up, attenuation will automatically occur for a sound based on the relative angle of the direction the cone is facing, vs the angle between the sound and the listener.
 * 
 * * If the relative angle is within the `insideconeangle`, the sound will not have any attenuation applied.
 * * If the relative angle is between the `insideconeangle` and `outsideconeangle`, linear volume attenuation (between 1 and `outsidevolume`) is applied between the two angles until it reaches the `outsideconeangle`.
 * * If the relative angle is outside of the `outsideconeangle` the volume does not attenuate any further.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.Fmod3DConeSettings}
 * @func_end
 */
function fmod_channel_control_get_3d_cone_settings(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_custom_rolloff
 * @desc > **FMOD Function:** [ChannelControl::set3DCustomRolloff](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3dcustomrolloff)
 *
 * <br />
 *
 * This function sets a custom roll-off shape for 3D distance attenuation.
 * 
 * This function does not duplicate the memory for the points internally. The memory you pass to FMOD must remain valid while in use.
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
 * @param {array[struct.FmodVector]} points An array of vectors sorted by distance, where `x` = distance and `y` = volume from 0 to 1. `z` should be set to 0. Pass null or equivalent to disable custom rolloff.
 * @func_end
 */
function fmod_channel_control_set_3d_custom_rolloff(channel_control_ref, points) {}


/**
 * @func fmod_channel_control_get_3d_custom_rolloff
 * @desc > **FMOD Function:** [ChannelControl::get3DCustomRolloff](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3dcustomrolloff)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DDistanceFilter](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3ddistancefilter)
 *
 * <br />
 *
 * This function sets an override value for the 3D distance filter.
 * 
 * If distance filtering is enabled, by default the FMOD 3D engine will automatically attenuate frequencies using a lowpass and a highpass filter, based on 3D distance.
 * This function allows the distance filter effect to be set manually, or to be set back to 'automatic' mode.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {boolean} custom Whether to override automatic distance filtering and use `customLevel` instead. Default is `false`.
 * @param {real} custom_level The attenuation factor where 1 represents no attenuation and 0 represents complete attenuation. The default value is 1.
 * @param {real} center_freq The center frequency, in Hertz, of the band-pass filter used to simulate distance attenuation, 0 for default. This must be a value in the range [10, 22050].
 * @func_end
 */
function fmod_channel_control_set_3d_distance_filter(channel_control_ref, custom, custom_level, center_freq) {}


/**
 * @func fmod_channel_control_get_3d_distance_filter
 * @desc > **FMOD Function:** [ChannelControl::get3DDistanceFilter](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3ddistancefilter)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DDopplerLevel](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3ddopplerlevel)
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
 * @desc > **FMOD Function:** [ChannelControl::get3DDopplerLevel](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3ddopplerlevel)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DLevel](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3dlevel)
 *
 * <br />
 *
 * This function sets the blend between 3D panning and 2D panning.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} level
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_set_3d_level(channel_control_ref, level) {}


/**
 * @func fmod_channel_control_get_3d_level
 * @desc > **FMOD Function:** [ChannelControl::get3DLevel](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3dlevel)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DMinMaxDistance](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3dminmaxdistance)
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
 * The `FMOD_MODE.AS_3D` flag must be set on this object otherwise `FMOD_RESULT.ERR_NEEDS3D` is returned.
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
 * @desc > **FMOD Function:** [ChannelControl::get3DMinMaxDistance](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3dminmaxdistance)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DOcclusion](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3docclusion)
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
 * @desc > **FMOD Function:** [ChannelControl::get3DOcclusion](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3docclusion)
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
 * @desc > **FMOD Function:** [ChannelControl::set3DSpread](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_set3dspread)
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
 * @desc > **FMOD Function:** [ChannelControl::get3DSpread](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_get3dspread)
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
 * @desc > **FMOD Function:** [ChannelControl::setPan](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setpan)
 *
 * <br />
 *
 * This function sets the left/right pan level.
 * 
 * This is a convenience function to avoid passing a matrix, it will overwrite values set via ${function.fmod_channel_control_set_mix_levels_input}, ${function.${function.fmod_channel_control_set_mix_levels_output}} and ${function.fmod_system_set_software_format}.
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
 * @desc > **FMOD Function:** [ChannelControl::setMixLevelsInput](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setmixlevelsinput)
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
 * @desc > **FMOD Function:** [ChannelControl::setMixLevelsOutput](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setmixlevelsoutput)
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
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_set_mix_levels_output(channel_control_ref, front_left, front_right, center, lfe, surround_left, surround_right, back_left, back_right) {}


/**
 * @func fmod_channel_control_set_mix_matrix
 * @desc > **FMOD Function:** [ChannelControl::setMixMatrix](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setmixmatrix)
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
 * Matrix element values can be below 0 to invert a signal and above 1 to amplify the signal. Note that increasing the signal level too far may cause audible distortion.
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
 * @desc > **FMOD Function:** [ChannelControl::getMixMatrix](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getmixmatrix)
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
 * @desc > **FMOD Function:** [ChannelControl::setReverbProperties](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setreverbproperties)
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
 * @desc > **FMOD Function:** [ChannelControl::getReverbProperties](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getreverbproperties)
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
 * @desc > **FMOD Function:** [ChannelControl::setLowPassGain](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setlowpassgain)
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
 * @desc > **FMOD Function:** [ChannelControl::getLowPassGain](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getlowpassgain)
 *
 * <br />
 *
 * This function retrieves the gain of the dry signal when built-in lowpass / distance filtering is applied.
 * 
 * The function returns the gain level where 0 represents silent (full filtering) and 1 represents full volume (no filtering).
 * 
 * [[Note: This requires the built in-lowpass to be created with `FMOD_INIT.CHANNEL_LOWPASS` or `FMOD_INIT.CHANNEL_DISTANCEFILTER`.]]
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
 * @desc > **FMOD Function:** [ChannelControl::addDSP](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_adddsp)
 *
 * <br />
 *
 * This function adds a DSP unit to the specified index in the DSP chain.
 * 
 * If `dsp_ref` is already added to an existing object it will be removed and then added to this object.
 * 
 * For detailed information on FMOD's [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) network, read the [DSP Architecture and Usage](https://www.fmod.com/docs/2.02/api/white-papers-dsp-architecture.html) white paper.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} dsp_chain_offset The offset into the DSP chain, see ${constant.FMOD_CHANNELCONTROL_DSP_INDEX} for special named offsets for 'head' and 'tail' and 'fader' units.
 * @param {real} dsp_ref The DSP unit to be added.
 * @func_end
 */
function fmod_channel_control_add_dsp(channel_control_ref, dsp_chain_offset, dsp_ref) {}


/**
 * @func fmod_channel_control_remove_dsp
 * @desc > **FMOD Function:** [ChannelControl::removeDSP](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_removedsp)
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
 * @desc > **FMOD Function:** [ChannelControl::getNumDSPs](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getnumdsps)
 *
 * <br />
 *
 * This function retrieves the number of [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) units in the [DSP chain](https://www.fmod.com/docs/2.02/api/glossary.html#dsp-chain).
 * 
 * See [DSP chain](https://www.fmod.com/docs/2.02/api/glossary.html#dsp-chain).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_num_dsps(channel_control_ref) {}


/**
 * @func fmod_channel_control_get_dsp
 * @desc > **FMOD Function:** [ChannelControl::getDSP](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getdsp)
 *
 * <br />
 *
 * This function retrieves the DSP unit at the specified index in the DSP chain.
 * 
 * It returns the DSP unit at the specified `index`.
 * 
 * See [DSP chain](https://www.fmod.com/docs/2.02/api/glossary.html#dsp-chain).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} index The offset into the [DSP chain](https://www.fmod.com/docs/2.02/api/glossary.html#dsp-chain), see ${constant.FMOD_CHANNELCONTROL_DSP_INDEX} for special named offsets for 'head' and 'tail' and 'fader' units.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_dsp(channel_control_ref, index) {}


/**
 * @func fmod_channel_control_set_dsp_index
 * @desc > **FMOD Function:** [ChannelControl::setDSPIndex](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setdspindex)
 *
 * <br />
 *
 * This function sets the index in the DSP chain of the specified DSP.
 * 
 * See [DSP chain](https://www.fmod.com/docs/2.02/api/glossary.html#dsp-chain).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} dsp_ref A reference to a DSP unit that exists in the [DSP chain](https://www.fmod.com/docs/2.02/api/glossary.html#dsp-chain).
 * @param {real} chain_index The offset into the DSP chain to move the DSP to, see ${constant.FMOD_CHANNELCONTROL_DSP_INDEX} for special named offsets.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_set_dsp_index(channel_control_ref, dsp_ref, chain_index) {}


/**
 * @func fmod_channel_control_get_dsp_index
 * @desc > **FMOD Function:** [ChannelControl::getDSPIndex](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getdspindex)
 *
 * <br />
 *
 * This function retrieves the index of a DSP inside the Channel or ChannelGroup's DSP chain.
 * 
 * See [DSP chain](https://www.fmod.com/docs/2.02/api/glossary.html#dsp-chain).
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} dsp_ref DSP unit that exists in the [DSP chain](https://www.fmod.com/docs/2.02/api/glossary.html#dsp-chain).
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_dsp_index(channel_control_ref, dsp_ref) {}


/**
 * @func fmod_channel_control_get_dsp_clock
 * @desc > **FMOD Function:** [ChannelControl::getDSPClock](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getdspclock)
 *
 * <br />
 *
 * This function retrieves the DSP clock values at this point in time.
 * 
 * To perform sample accurate scheduling in conjunction with ${function.fmod_channel_control_set_delay} and ${function.fmod_channel_control_add_fade_point} query the `parentclock` value.
 * 
 * @param {real} control_ref A reference to a channel control.
 * @returns {struct.FmodControlDSPClock}
 * @func_end
 */
function fmod_channel_control_get_dsp_clock(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_delay
 * @desc > **FMOD Function:** [ChannelControl::setDelay](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setdelay)
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
 * @desc > **FMOD Function:** [ChannelControl::getDelay](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getdelay)
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
 * @desc > **FMOD Function:** [ChannelControl::addFadePoint](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_addfadepoint)
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
 * @param {real} volume The (linear) volume level at the given `dspclock`. Values above 1.0 amplify the signal.
 * 
 * @example
 *  * ```gml
 * // Example. Ramp from full volume to half volume over the next 4096 samples
 * var _dsp_clock = FMOD_ChannelControl_GetDSPClock(target);
 * var _clock_val = _dsp_clock.parent_clock;
 * FMOD_ChannelControl_AddFadePoint(target, _clock_val, 1);
 * FMOD_ChannelControl_AddFadePoint(target, _clock_val + 4096, 0.5);
 * ```
 * The above code shows how to perform sample accurate fading. It ramps from full volume to half volume over the next 4096 samples.
 * @func_end
 */
function fmod_channel_control_add_fade_point(channel_control_ref, dsp_clock, volume) {}


/**
 * @func fmod_channel_control_set_fade_point_ramp
 * @desc > **FMOD Function:** [ChannelControl::setFadePointRamp](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setfadepointramp)
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
 * @param {real} dsp_clock The time (in samples) at which the ramp will end, as measured by the [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) clock of the parent [ChannelGroup](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html).
 * @param {real} volume The volume level at the given `dsp_clock`. 0 = silent, 1 = full.
 * @func_end
 */
function fmod_channel_control_set_fade_point_ramp(channel_control_ref, dsp_clock, volume) {}


/**
 * @func fmod_channel_control_remove_fade_points
 * @desc > **FMOD Function:** [ChannelControl::removeFadePoints](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_removefadepoints)
 *
 * <br />
 *
 * This function removes all fade points between the two specified clock values (inclusive).
 * 
 * @param {real} control_ref A reference to a channel control.
 * @param {real} dsp_clock_start The [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) clock of the parent [ChannelGroup](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html) at which to begin removing fade points. Expressed in samples.
 * @param {real} dsp_clock_end The [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) clock of the parent [ChannelGroup](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html) at which to stop removing fade points. Expressed in samples.
 * @func_end
 */
function fmod_channel_control_remove_fade_points(channel_control_ref, dsp_clock_start, dsp_clock_end) {}


/**
 * @func fmod_channel_control_get_fade_points
 * @desc > **FMOD Function:** [ChannelControl::getFadePoints](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getfadepoints)
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
 * @desc > **FMOD Function:** [ChannelControl::setCallback](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setcallback)
 *
 * <br />
 *
 * This function sets the callback for ChannelControl level notifications.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @func_end
 */
function fmod_channel_control_set_callback(channel_control_ref) {}


/**
 * @func fmod_channel_control_get_system_object
 * @desc > **FMOD Function:** [ChannelControl::getSystemObject](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getsystemobject)
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
 * @desc > **FMOD Function:** [ChannelControl::setUserData](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_setuserdata)
 *
 * <br />
 *
 * This function sets a real user value associated with this object.
 * 
 * [[Note: While FMOD supports arbitrary [User Data](https://www.fmod.com/docs/2.02/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} data The value to store on this object.
 * @func_end
 */
function fmod_channel_control_set_user_data(channel_control_ref, data) {}


/**
 * @func fmod_channel_control_get_user_data
 * @desc > **FMOD Function:** [ChannelControl::getUserData](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getuserdata)
 *
 * <br />
 *
 * This function retrieves the user value associated with this object, as set with ${function.fmod_channel_control_set_user_data}.
 * 
 * [[Note: While FMOD allows you to set arbitrary [User Data](https://www.fmod.com/docs/2.02/api/glossary.html#user-data), this function only allows you to set a real value (a double-precision floating-point value).]]
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_channel_control_get_user_data(channel_control_ref) {}

// Channel Group

/**
 * @func fmod_channel_group_get_num_channels
 * @desc > **FMOD Function:** [ChannelGroup::getNumChannels](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html#channelgroup_getnumchannels)
 *
 * <br />
 *
 * This function retrieves the number of Channels that feed into to this group.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_num_channels(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_channel
 * @desc > **FMOD Function:** [ChannelGroup::getChannel](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html#channelgroup_getchannel)
 *
 * <br />
 *
 * This function retrieves the Channel at the specified index in the list of Channel inputs.
 * 
 * The function returns a reference to the Channel.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @param {real} index The offset into the list of [Channel](https://www.fmod.com/docs/2.02/api/core-api-channel.html) inputs.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_channel(channel_group_ref, index) {}


/**
 * @func fmod_channel_group_add_group
 * @desc > **FMOD Function:** [ChannelGroup::addGroup](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html#channelgroup_addgroup)
 *
 * <br />
 *
 * This function adds a ChannelGroup as an input to this group.
 * 
 * The function returns a reference to the [DSPConnection](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html) created between the head DSP of `child_channel_group_ref` and the tail DSP of `channel_group_ref`.
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
 * @desc > **FMOD Function:** [ChannelGroup::getNumGroups](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html#channelgroup_getnumgroups)
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
 * @desc > **FMOD Function:** [ChannelGroup::getGroup](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html#channelgroup_getgroup)
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
 * @desc > **FMOD Function:** [ChannelGroup::getParentGroup](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html#channelgroup_getparentgroup)
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
 * @desc > **FMOD Function:** [ChannelGroup::getName](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html#channelgroup_getname)
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
 * @desc > **FMOD Function:** [ChannelGroup::release](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html#channelgroup_release)
 *
 * <br />
 *
 * This function frees the memory for the group.
 * 
 * [[Note: Any [Channels](https://www.fmod.com/docs/2.02/api/core-api-channel.html) or [ChannelGroups](https://www.fmod.com/docs/2.02/api/core-api-channelgroup.html) feeding into this group are moved to the master ChannelGroup.]]
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_release(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_system_object
 * @desc > **FMOD Function:** [ChannelControl::getSystemObject](https://www.fmod.com/docs/2.02/api/core-api-channelcontrol.html#channelcontrol_getsystemobject)
 *
 * <br />
 *
 * This function retrieves the [System](https://www.fmod.com/docs/2.02/api/core-api-system.html) that created this object.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_channel_group_get_system_object(channel_group_ref) {}


/**
 * @func fmod_file_get_disk_busy
 * @desc > **FMOD Function:** [File_GetDiskBusy](https://www.fmod.com/docs/2.02/api/core-api-common.html#file_getdiskbusy)
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
 * @desc > **FMOD Function:** [File_SetDiskBusy](https://www.fmod.com/docs/2.02/api/core-api-common.html#file_setdiskbusy)
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
 * @desc > **FMOD Function:** [Memory_GetStats](https://www.fmod.com/docs/2.02/api/core-api-common.html#memory_getstats)
 *
 * <br />
 *
 * This function returns information on the memory usage of FMOD.
 * 
 * This information is byte accurate and counts all allocs and frees internally. This is useful for determining a fixed memory size to make FMOD work within for fixed memory machines such as consoles.
 * 
 * @param {boolean} blocking This is a flag to indicate whether to favour speed or accuracy. Specifying `true` for this parameter will flush the [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) network to make sure all queued allocations happen immediately, which can be costly.
 * @returns {struct.FmodMemoryStats}
 * @func_end
 */
function fmod_memory_get_stats(blocking) {}


/**
 * @func fmod_debug_initialize
 * @desc > **FMOD Function:** [Debug_Initialize](https://www.fmod.com/docs/2.02/api/core-api-common.html#debug_initialize)
 *
 * <br />
 *
 * This function specifies the level and delivery method of log messages when using the logging version of FMOD.
 * 
 * This function will return `FMOD_RESULT.ERR_UNSUPPORTED` when using the non-logging (release) versions of FMOD.
 * 
 * The logging version of FMOD can be recognized by the 'L' suffix in the library name, fmodL.dll or libfmodL.so for instance.
 * 
 * Note that:
 * 
 * * `FMOD_DEBUG_FLAGS.LEVEL_LOG` produces informational, warning and error messages.
 * * `FMOD_DEBUG_FLAGS.LEVEL_WARNING` produces warnings and error messages.
 * * `FMOD_DEBUG_FLAGS.LEVEL_ERROR` produces error messages only.
 * 
 * See Also: [Callback Behavior](https://www.fmod.com/docs/2.02/api/glossary.html#callback-behavior)
 * 
 * @param {constant.FMOD_DEBUG_FLAGS} flags The debug level, type and display control flags. More than one mode can be set at once by combining them with the OR operator.
 * @param {constant.FMOD_DEBUG_MODE} mode The destination for log messages. Optional. The default value is `FMOD_DEBUG_MODE.TTY`.
 * @param {string} filename The filename to use when mode is set to file, only required when using that mode. Optional. The default value is `pointer_null`.
 * @func_end
 */
function fmod_debug_initialize(flags, mode, filename) {}


/**
 * @func fmod_thread_set_attributes
 * @desc > **FMOD Function:** [Thread_SetAttributes](https://www.fmod.com/docs/2.02/api/core-api-common.html#thread_setattributes)
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
 * @desc > **FMOD Function:** [DSP::addInput](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_addinput)
 *
 * <br />
 *
 * This function adds a [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html) unit as an input to this object and returns the new [DSPConnection](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html) between the two units.
 * 
 * The returned connection will remain valid until the units are disconnected.
 * 
 * [[Note: When a DSP has multiple inputs the signals are automatically mixed together, sent to the unit's output(s).]]
 * 
 * @param {real} dsp_ref A reference to a [DSP](https://www.fmod.com/docs/2.02/api/core-api-dsp.html).
 * @param {real} dsp_input_ref A reference to the DSP unit to be added to `dsp_ref`.
 * @param {constant.FMOD_DSPCONNECTION_TYPE} dsp_connection_type The type of connection between the two units. Optional. Default is `FMOD_DSPCONNECTION_TYPE.STANDARD`.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_add_input(dsp_ref, dsp_input_ref, dsp_connection_type) {}


/**
 * @func fmod_dsp_get_input
 * @desc > **FMOD Function:** [DSP::getInput](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getinput)
 *
 * <br />
 *
 * This function retrieves the DSP unit at the specified index in the input list.
 * 
 * The returned connection will remain valid until the units are disconnected.
 * 
 * [[Note: This will flush the DSP queue (which blocks against the mixer) to ensure the input list is correct, avoid this during time sensitive operations.]]
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} dsp_chain_index The offset into `dsp_ref`'s input list. A value in the range [0, ${function.fmod_dsp_get_num_inputs}]
 * @returns {struct.FmodDSPConnectionData}
 * @func_end
 */
function fmod_dsp_get_input(dsp_ref, dsp_input_index) {}


/**
 * @func fmod_dsp_get_output
 * @desc > **FMOD Function:** [DSP::getOutput](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getoutput)
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
 * @desc > **FMOD Function:** [DSP::getNumInputs](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getnuminputs)
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
 * @desc > **FMOD Function:** [DSP::getNumOutputs](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getnumoutputs)
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
 * @desc > **FMOD Function:** [DSP::disconnectAll](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_disconnectall)
 *
 * <br />
 *
 * This function disconnects all inputs and/or outputs.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} inputs
 * @param {real} outputs
 * @returns {real}
 * @func_end
 */
function fmod_dsp_disconnect_all(dsp_ref, inputs, outputs) {}


/**
 * @func fmod_dsp_disconnect_from
 * @desc > **FMOD Function:** [DSP::disconnectFrom](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_disconnectfrom)
 *
 * <br />
 *
 * This function disconnects the specified input DSP.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} dsp_other_ref A reference to a dsp_other.
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_disconnect_from(dsp_ref, dsp_other_ref, dsp_connection_ref) {}


/**
 * @func fmod_dsp_get_data_parameter_index
 * @desc > **FMOD Function:** [DSP::getDataParameterIndex](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getdataparameterindex)
 *
 * <br />
 *
 * This function retrieves the index of the first data parameter of a particular data type.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} data_type
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_data_parameter_index(dsp_ref, data_type) {}


/**
 * @func fmod_dsp_get_num_parameters
 * @desc > **FMOD Function:** [DSP::getNumParameters](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getnumparameters)
 *
 * <br />
 *
 * This function retrieves the number of parameters exposed by this unit.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_num_parameters(dsp_ref) {}


/**
 * @func fmod_dsp_set_parameter_bool
 * @desc > **FMOD Function:** [DSP::setParameterBool](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setparameterbool)
 *
 * <br />
 *
 * This function sets a boolean parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index
 * @param {real} value
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_parameter_bool(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_bool
 * @desc > **FMOD Function:** [DSP::getParameterBool](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getparameterbool)
 *
 * <br />
 *
 * This function retrieves a boolean parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_parameter_bool(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_set_parameter_data
 * @desc > **FMOD Function:** [DSP::setParameterData](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setparameterdata)
 *
 * <br />
 *
 * This function sets a binary data parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index
 * @param {buffer} buffer
 * @param {real} length
 * @func_end
 */
function fmod_dsp_set_parameter_data(dsp_ref, parameter_index, buff, length) {}


/**
 * @func fmod_dsp_get_parameter_data
 * @desc > **FMOD Function:** [DSP::getParameterData](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getparameterdata)
 *
 * <br />
 *
 * This function retrieves a binary data parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index
 * @param {buffer} buffer
 * @param {real} length
 * @func_end
 */
function fmod_dsp_get_parameter_data(dsp_ref, parameter_index, buff, length) {}


/**
 * @func fmod_dsp_set_parameter_float
 * @desc > **FMOD Function:** [DSP::setParameterFloat](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setparameterfloat)
 *
 * <br />
 *
 * This function sets a floating point parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index
 * @param {real} value
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_parameter_float(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_float
 * @desc > **FMOD Function:** [DSP::getParameterFloat](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getparameterfloat)
 *
 * <br />
 *
 * This function retrieves a floating point parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_parameter_float(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_set_parameter_int
 * @desc > **FMOD Function:** [DSP::setParameterInt](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setparameterint)
 *
 * <br />
 *
 * This function sets an integer parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index
 * @param {real} value
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_parameter_int(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_int
 * @desc > **FMOD Function:** [DSP::getParameterInt](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getparameterint)
 *
 * <br />
 *
 * This function retrieves an integer parameter by index.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} parameter_index
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_parameter_int(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_get_parameter_info
 * @desc > **FMOD Function:** [DSP::getParameterInfo](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getparameterinfo)
 *
 * <br />
 *
 * This function retrieves information about a specified parameter.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct}
 * @func_end
 */
function fmod_dsp_get_parameter_info(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_set_channel_format
 * @desc > **FMOD Function:** [DSP::setChannelFormat](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setchannelformat)
 *
 * <br />
 *
 * This function sets the PCM input format this DSP will receive when processing.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} channel_mask
 * @param {real} num_channels
 * @param {real} speaker_mode
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_channel_format(dsp_ref, channel_mask, num_channels, speaker_mode) {}


/**
 * @func fmod_dsp_get_channel_format
 * @desc > **FMOD Function:** [DSP::getChannelFormat](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getchannelformat)
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
 * @desc > ** FMOD Function:** [DSP::getOutputChannelFormat](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getoutputchannelformat)
 *
 * <br />
 *
 * This function retrieves the output format this DSP will produce when processing based on the input specified.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {constant.FMOD_CHANNELMASK} channel_mask_in
 * @param {real} num_channels_in
 * @param {constant.FMOD_SPEAKERMODE} speaker_mode_in
 * @returns {struct.FmodDSPChannelFormat}
 * @func_end
 */
function fmod_dsp_get_output_channel_format(dsp_ref, channel_mask_in, num_channels_in, speaker_mode_in) {}


/**
 * @func fmod_dsp_get_metering_info
 * @desc > **FMOD Function:** [DSP::getMeteringInfo](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getmeteringinfo)
 *
 * <br />
 *
 * This function retrieves the signal metering information.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodDSPInOutMeteringInfo}
 * @func_end
 */
function fmod_dsp_get_metering_info(dsp_ref) {}


/**
 * @func fmod_dsp_set_metering_enabled
 * @desc > **FMOD Function:** [DSP::setMeteringEnabled](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setmeteringenabled)
 *
 * <br />
 *
 * This function sets the input and output signal metering enabled states.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} enabled_in
 * @param {real} enabled_out
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_metering_enabled(dsp_ref, enabled_in, enabled_out) {}


/**
 * @func fmod_dsp_get_metering_enabled
 * @desc > **FMOD Function:** [DSP::getMeteringEnabled](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getmeteringenabled)
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
 * @desc > **FMOD Function:** [DSP::setActive](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setactive)
 *
 * <br />
 *
 * This function sets the processing active state.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} active
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_active(dsp_ref, active) {}


/**
 * @func fmod_dsp_get_active
 * @desc > **FMOD Function:** [DSP::getActive](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getactive)
 *
 * <br />
 *
 * This function retrieves the processing active state.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_active(dsp_ref) {}


/**
 * @func fmod_dsp_set_bypass
 * @desc > **FMOD Function:** [DSP::setBypass](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setbypass)
 *
 * <br />
 *
 * This function sets the processing bypass state.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} bypass
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_bypass(dsp_ref, bypass) {}


/**
 * @func fmod_dsp_get_bypass
 * @desc > **FMOD Function:** [DSP::getBypass](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getbypass)
 *
 * <br />
 *
 * This function retrieves the processing bypass state.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_bypass(dsp_ref) {}


/**
 * @func fmod_dsp_set_wet_dry_mix
 * @desc > **FMOD Function:** [DSP::setWetDryMix](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setwetdrymix)
 *
 * <br />
 *
 * This function sets the scale of the wet and dry signal components.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} prewet
 * @param {real} postwet
 * @param {real} dry
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_wet_dry_mix(dsp_ref, prewet, postwet, dry) {}


/**
 * @func fmod_dsp_get_wet_dry_mix
 * @desc > **FMOD Function:** [DSP::getWetDryMix](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getwetdrymix)
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
 * @desc > **FMOD Function:** [DSP::getIdle](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getidle)
 *
 * <br />
 *
 * This function retrieves the idle state.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_idle(dsp_ref) {}


/**
 * @func fmod_dsp_reset
 * @desc > **FMOD Function:** [DSP::reset](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_reset)
 *
 * <br />
 *
 * This function reset a DSPs internal state ready for new input signal.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_reset(dsp_ref) {}


/**
 * @func fmod_dsp_release
 * @desc > **FMOD Function:** [DSP::release](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_release)
 *
 * <br />
 *
 * This function frees a DSP object.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_release(dsp_ref) {}


/**
 * @func fmod_dsp_get_type
 * @desc > **FMOD Function:** [DSP::getType](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_gettype)
 *
 * <br />
 *
 * This function retrieves the pre-defined type of a FMOD registered DSP unit.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_type(dsp_ref) {}


/**
 * @func fmod_dsp_get_info
 * @desc > **FMOD Function:** [DSP::getInfo](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getinfo)
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
 * @desc > **FMOD Function:** [DSP::getCPUUsage](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getcpuusage)
 *
 * <br />
 *
 * This function retrieves statistics on the mixer thread CPU usage for this unit.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {struct.FmodCPUTimeUsage}
 * @func_end
 */
function fmod_dsp_get_cpu_usage(dsp_ref) {}


/**
 * @func fmod_dsp_set_user_data
 * @desc > **FMOD Function:** [DSP::setUserData](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setuserdata)
 *
 * <br />
 *
 * This function sets a user value associated with this object.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_user_data(dsp_ref, data) {}


/**
 * @func fmod_dsp_get_user_data
 * @desc > **FMOD Function:** [DSP::getUserData](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_get_user_data(dsp_ref) {}


/**
 * @func fmod_dsp_set_callback
 * @desc > **FMOD Function:** [DSP::setCallback](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_setcallback)
 *
 * <br />
 *
 * This function sets the callback for DSP notifications.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_set_callback(dsp_ref) {}


/**
 * @func fmod_dsp_get_system_object
 * @desc > **FMOD Function:** [DSP::getSystemObject](https://www.fmod.com/docs/2.02/api/core-api-dsp.html#dsp_getsystemobject)
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
 * @desc > **FMOD Function:** [DSPConnection::setMix](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_setmix)
 *
 * <br />
 *
 * This function sets the connection's volume scale.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @param {real} volume
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_set_mix(dsp_connection_ref, volume) {}


/**
 * @func fmod_dsp_connection_get_mix
 * @desc > **FMOD Function:** [DSPConnection::getMix](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_getmix)
 *
 * <br />
 *
 * This function retrieves the connection's volume scale.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_mix(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_set_mix_matrix
 * @desc > **FMOD Function:** [DSPConnection::setMixMatrix](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_setmixmatrix)
 *
 * <br />
 *
 * This function sets a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @param {array[real]} matrix
 * @param {real} out_channels
 * @param {real} in_channels
 * @param {real} in_channel_hop
 * @func_end
 */
function fmod_dsp_connection_set_mix_matrix(dsp_connection_ref, matrix, out_channels, in_channels, in_channel_hop) {}


/**
 * @func fmod_dsp_connection_get_mix_matrix
 * @desc > **FMOD Function:** [DSPConnection::getMixMatrix](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_getmixmatrix)
 *
 * <br />
 *
 * This function retrieves a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @param {real} in_channel_hop
 * @returns {struct.FmodDSPConnectionMixMatrix}
 * @func_end
 */
function fmod_dsp_connection_get_mix_matrix(dsp_connection_ref, in_channel_hop) {}


/**
 * @func fmod_dsp_connection_get_input
 * @desc > **FMOD Function:** [DSPConnection::getInput](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_getinput)
 *
 * <br />
 *
 * This function retrieves the connection's input DSP unit.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_input(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_get_output
 * @desc > **FMOD Function:** [DSPConnection::getOutput](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_getoutput)
 *
 * <br />
 *
 * This function retrieves the connection's output DSP unit.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_output(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_get_type
 * @desc > **FMOD Function:** [DSPConnection::getType](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_gettype)
 *
 * <br />
 *
 * This function retrieves the type of the connection between 2 DSP units.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_type(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_set_user_data
 * @desc > **FMOD Function:** [DSPConnection::setUserData](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_setuserdata)
 *
 * <br />
 *
 * This function sets a user value associated with this object.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_set_user_data(dsp_connection_ref, data) {}


/**
 * @func fmod_dsp_connection_get_user_data
 * @desc > **FMOD Function:** [DSPConnection::getUserData](https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html#dspconnection_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object.
 * 
 * @param {real} dsp_connection_ref A reference to a DSPConnection.
 * @returns {real}
 * @func_end
 */
function fmod_dsp_connection_get_user_data(dsp_connection_ref) {}

// Geometry

/**
 * @func fmod_geometry_set_polygon_attributes
 * @desc > **FMOD Function:** [Geometry::setPolygonAttributes](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_setpolygonattributes)
 *
 * <br />
 *
 * This function sets individual attributes for a polygon inside a geometry object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index
 * @param {real} direct_occlusion
 * @param {real} reverb_occlusion
 * @param {real} double_sided
 * @returns {real}
 * @func_end
 */
function fmod_geometry_set_polygon_attributes(geometry_ref, polygon_index, direct_occlusion, reverb_occlusion, double_sided) {}


/**
 * @func fmod_geometry_get_polygon_attributes
 * @desc > **FMOD Function:** [Geometry::getPolygonAttributes](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getpolygonattributes)
 *
 * <br />
 *
 * This function retrieves the attributes for a polygon.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index
 * @returns {struct.FmodGeometryPolygonAttributes}
 * @func_end
 */
function fmod_geometry_get_polygon_attributes(geometry_ref, polygon_index) {}


/**
 * @func fmod_geometry_get_polygon_num_vertices
 * @desc > **FMOD Function:** [Geometry::getPolygonNumVertices](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getpolygonnumvertices)
 *
 * <br />
 *
 * This function gets the number of vertices in a polygon.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index
 * @returns {real}
 * @func_end
 */
function fmod_geometry_get_polygon_num_vertices(geometry_ref, polygon_index) {}


/**
 * @func fmod_geometry_set_polygon_vertex
 * @desc > **FMOD Function:** [Geometry::setPolygonVertex](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_setpolygonvertex)
 *
 * <br />
 *
 * This function alters the position of a polygon's vertex inside a geometry object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index
 * @param {real} vertex_index
 * @param {struct.FmodVector} position
 * @func_end
 */
function fmod_geometry_set_polygon_vertex(geometry_ref, polygon_index, vertex_index, position) {}


/**
 * @func fmod_geometry_get_polygon_vertex
 * @desc > **FMOD Function:** [Geometry::getPolygonVertex](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getpolygonvertex)
 *
 * <br />
 *
 * This function retrieves the position of a vertex.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} polygon_index
 * @param {real} vertex_index
 * @returns {struct.FmodVector}
 * @func_end
 */
function fmod_geometry_get_polygon_vertex(geometry_ref, polygon_index, vertex_index) {}


/**
 * @func fmod_geometry_set_position
 * @desc > **FMOD Function:** [Geometry::setPosition](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_setposition)
 *
 * <br />
 *
 * This function sets the 3D position of the object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {struct.FmodVector} position
 * @func_end
 */
function fmod_geometry_set_position(geometry_ref, position) {}


/**
 * @func fmod_geometry_get_position
 * @desc > **FMOD Function:** [Geometry::getPosition](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getposition)
 *
 * <br />
 *
 * This function retrieves the 3D position of the object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {struct.FmodVector}
 * @func_end
 */
function fmod_geometry_get_position(geometry_ref) {}


/**
 * @func fmod_geometry_set_rotation
 * @desc > **FMOD Function:** [Geometry::setRotation](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_setrotation)
 *
 * <br />
 *
 * This function sets the 3D orientation of the object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {struct.FmodVector} forward
 * @param {struct.FmodVector} up
 * @func_end
 */
function fmod_geometry_set_rotation(geometry_ref, forward, up) {}


/**
 * @func fmod_geometry_get_rotation
 * @desc > **FMOD Function:** [Geometry::getRotation](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getrotation)
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
 * @desc > **FMOD Function:** [Geometry::setScale](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_setscale)
 *
 * <br />
 *
 * This function sets the 3D scale of the object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {struct.FmodVector} scale
 * @func_end
 */
function fmod_geometry_set_scale(geometry_ref, scale) {}


/**
 * @func fmod_geometry_get_scale
 * @desc > **FMOD Function:** [Geometry::getScale](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getscale)
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
 * @desc > **FMOD Function:** [Geometry::addPolygon](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_addpolygon)
 *
 * <br />
 *
 * This function adds a polygon.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} direct_occlusion
 * @param {real} reverb_occlusion
 * @param {bool} double_sided
 * @param {struct.FmodVector} vertices
 * @func_end
 */
function fmod_geometry_add_polygon(geometry_ref, direct_occlusion, reverb_occlusion, double_sided, vertices) {}


/**
 * @func fmod_geometry_set_active
 * @desc > **FMOD Function:** [Geometry::setActive](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_setactive)
 *
 * <br />
 *
 * This function sets whether an object is processed by the geometry engine.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} active
 * @returns {real}
 * @func_end
 */
function fmod_geometry_set_active(geometry_ref, active) {}


/**
 * @func fmod_geometry_get_active
 * @desc > **FMOD Function:** [Geometry::getActive](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getactive)
 *
 * <br />
 *
 * This function retrieves whether an object is processed by the geometry engine.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {real}
 * @func_end
 */
function fmod_geometry_get_active(geometry_ref) {}


/**
 * @func fmod_geometry_get_max_polygons
 * @desc > **FMOD Function:** [Geometry::getMaxPolygons](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getmaxpolygons)
 *
 * <br />
 *
 * This function retrieves the maximum number of polygons and vertices allocatable for this object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {buffer} buff_return
 * @returns {real}
 * @func_end
 */
function fmod_geometry_get_max_polygons(geometry_ref, buff_return) {}


/**
 * @func fmod_geometry_get_num_polygons
 * @desc > **FMOD Function:** [Geometry::getNumPolygons](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getnumpolygons)
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
 * @desc > **FMOD Function:** [Geometry::setUserData](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_setuserdata)
 *
 * <br />
 *
 * This function sets a user value associated with this object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_geometry_set_user_data(geometry_ref, data) {}


/**
 * @func fmod_geometry_get_user_data
 * @desc > **FMOD Function:** [Geometry::getUserData](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {real}
 * @func_end
 */
function fmod_geometry_get_user_data(geometry_ref) {}


/**
 * @func fmod_geometry_release
 * @desc > **FMOD Function:** [Geometry::release](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_release)
 *
 * <br />
 *
 * This function frees a geometry object and releases its memory.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @returns {real}
 * @func_end
 */
function fmod_geometry_release(geometry_ref) {}


/**
 * @func fmod_geometry_save
 * @desc > **FMOD Function:** [Geometry::save](https://www.fmod.com/docs/2.02/api/core-api-geometry.html#geometry_save)
 *
 * <br />
 *
 * This function saves the geometry object as a serialized binary block to a user memory buffer.
 * 
 * @param {real} geometry_ref A reference to a geometry.
 * @param {buffer} buff
 * @returns {real}
 * @func_end
 */
function fmod_geometry_save(geometry_ref, buff) {}

// Reverb3D

/**
 * @func fmod_reverb_3d_set_3d_attributes
 * @desc > **FMOD Function:** [Reverb3D::set3DAttributes](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_set3dattributes)
 *
 * <br />
 *
 * This function sets the 3D attributes of a reverb sphere.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @param {struct.FmodVector} position
 * @param {real} min_distance
 * @param {real} max_distance
 * @func_end
 */
function fmod_reverb_3d_set_3d_attributes(reverb_3d_ref, position, min_distance, max_distance) {}


/**
 * @func fmod_reverb_3d_get_3d_attributes
 * @desc > **FMOD Function:** [Reverb3D::get3DAttributes](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_get3dattributes)
 *
 * <br />
 *
 * This function retrieves the 3D attributes of a reverb sphere.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {struct.FmodReverb3DAttributes}
 * @func_end
 */
function fmod_reverb_3d_get_3d_attributes(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_set_properties
 * @desc > **FMOD Function:** [Reverb3D::setProperties](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_setproperties)
 *
 * <br />
 *
 * This function sets the environmental properties of a reverb sphere.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @param {real} decay_time
 * @param {real} early_delay
 * @param {real} late_delay
 * @param {real} hf_reference
 * @param {real} hf_decay_ratio
 * @param {real} diffusion
 * @param {real} density
 * @param {real} low_shelf_frequency
 * @param {real} low_shelf_gain
 * @param {real} high_cut
 * @param {real} early_late_mix
 * @param {real} wet_level
 * @returns {real}
 * @func_end
 */
function fmod_reverb_3d_set_properties(reverb_3d_ref, decay_time, early_delay, late_delay, hf_reference, hf_decay_ratio, diffusion, density, low_shelf_frequency, low_shelf_gain, high_cut, early_late_mix, wet_level) {}


/**
 * @func fmod_reverb_3d_get_properties
 * @desc > **FMOD Function:** [Reverb3D::getProperties](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_getproperties)
 *
 * <br />
 *
 * This function retrieves the environmental properties of a reverb sphere.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {struct.FmodReverbProperties}
 * @func_end
 */
function fmod_reverb_3d_get_properties(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_set_active
 * @desc > **FMOD Function:** [Reverb3D::setActive](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_setactive)
 *
 * <br />
 *
 * This function sets the active state.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @param {real} active
 * @returns {real}
 * @func_end
 */
function fmod_reverb_3d_set_active(reverb_3d_ref, active) {}


/**
 * @func fmod_reverb_3d_get_active
 * @desc > **FMOD Function:** [Reverb3D::getActive](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_getactive)
 *
 * <br />
 *
 * This function retrieves the active state.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {real}
 * @func_end
 */
function fmod_reverb_3d_get_active(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_release
 * @desc > **FMOD Function:** [Reverb3D::release](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_release)
 *
 * <br />
 *
 * This function releases the memory for a reverb object and makes it inactive.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {real}
 * @func_end
 */
function fmod_reverb_3d_release(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_set_user_data
 * @desc > **FMOD Function:** [Reverb3D::setUserData](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_setuserdata)
 *
 * <br />
 *
 * This function sets a user value associated with this object.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_reverb_3d_set_user_data(reverb_3d_ref, data) {}


/**
 * @func fmod_reverb_3d_get_user_data
 * @desc > **FMOD Function:** [Reverb3D::getUserData](https://www.fmod.com/docs/2.02/api/core-api-reverb3d.html#reverb3d_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object.
 * 
 * @param {real} reverb_3d_ref A reference to a Reverb3D.
 * @returns {real}
 * @func_end
 */
function fmod_reverb_3d_get_user_data(reverb_3d_ref) {}

// Sound

/**
 * @func fmod_sound_get_name
 * @desc > **FMOD Function:** [Sound::getName](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getname)
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
 * @desc > **FMOD Function:** [Sound::getFormat](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getformat)
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
 * @desc > **FMOD Function:** [Sound::getLength](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getlength)
 *
 * <br />
 *
 * This function retrieves the length using the specified time unit.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} length_type
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_length(sound_ref, length_type) {}


/**
 * @func fmod_sound_get_num_tags
 * @desc > **FMOD Function:** [Sound::getNumTags](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getnumtags)
 *
 * <br />
 *
 * This function retrieves the number of metadata tags.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {struct.FmodSoundNumTags}
 * @func_end
 */
function fmod_sound_get_num_tags(sound_ref) {}


/**
 * @func fmod_sound_get_tag
 * @desc > **FMOD Function:** [Sound::getTag](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_gettag)
 *
 * <br />
 *
 * This function retrieves a metadata tag.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} tag_index
 * @param {buffer} data_buffer
 * @returns {struct.FmodSoundTag}
 * @func_end
 */
function fmod_sound_get_tag(sound_ref, tag_index, data_buffer) {}


/**
 * @func fmod_sound_set_3d_cone_settings
 * @desc > **FMOD Function:** [Sound::set3DConeSettings](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_set3dconesettings)
 *
 * <br />
 *
 * This function sets the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} inside_cone_angle
 * @param {real} outside_cone_angle
 * @param {real} outside_volume
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_3d_cone_settings(sound_ref, inside_cone_angle, outside_cone_angle, outside_volume) {}


/**
 * @func fmod_sound_get_3d_cone_settings
 * @desc > **FMOD Function:** [Sound::get3DConeSettings](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_get3dconesettings)
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
 * @desc > **FMOD Function:** [Sound::set3DCustomRolloff](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_set3dcustomrolloff)
 *
 * <br />
 *
 * This function sets a custom roll-off shape for 3D distance attenuation.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {array[struct.FmodVector]} points
 * @func_end
 */
function fmod_sound_set_3d_custom_rolloff(sound_ref, points) {}


/**
 * @func fmod_sound_get_3d_custom_rolloff
 * @desc > **FMOD Function:** [Sound::get3DCustomRolloff](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_get3dcustomrolloff)
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
 * @desc > **FMOD Function:** [Sound::set3DMinMaxDistance](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_set3dminmaxdistance)
 *
 * <br />
 *
 * This function sets the minimum and maximum audible distance for a 3D sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} min
 * @param {real} max
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_3d_min_max_distance(sound_ref, min, max) {}


/**
 * @func fmod_sound_get_3d_min_max_distance
 * @desc > **FMOD Function:** [Sound::get3DMinMaxDistance](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_get3dminmaxdistance)
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
 * @desc > **FMOD Function:** [Sound::setDefaults](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_setdefaults)
 *
 * <br />
 *
 * This function sets a sound's default playback attributes.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} frequency
 * @param {real} priority
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_defaults(sound_ref, frequency, priority) {}


/**
 * @func fmod_sound_get_defaults
 * @desc > **FMOD Function:** [Sound::getDefaults](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getdefaults)
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
 * @desc > **FMOD Function:** [Sound::setMode](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_setmode)
 *
 * <br />
 *
 * This function sets or alters the mode of a sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} mode
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_mode(sound_ref, mode) {}


/**
 * @func fmod_sound_get_mode
 * @desc > **FMOD Function:** [Sound::getMode](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getmode)
 *
 * <br />
 *
 * This function retrieves the mode of a sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_mode(sound_ref) {}


/**
 * @func fmod_sound_set_loop_count
 * @desc > **FMOD Function:** [Sound::setLoopCount](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_setloopcount)
 *
 * <br />
 *
 * This function sets the sound to loop a specified number of times before stopping if the playback mode is set to looping.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} count
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_loop_count(sound_ref, count) {}


/**
 * @func fmod_sound_get_loop_count
 * @desc > **FMOD Function:** [Sound::getLoopCount](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getloopcount)
 *
 * <br />
 *
 * This function retrieves the sound's loop count.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_loop_count(sound_ref) {}


/**
 * @func fmod_sound_set_loop_points
 * @desc > **FMOD Function:** [Sound::setLoopPoints](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_setlooppoints)
 *
 * <br />
 *
 * This function sets the loop points within a sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} loop_start
 * @param {real} loop_start_type
 * @param {real} loop_end
 * @param {real} loop_end_type
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_loop_points(sound_ref, loop_start, loop_start_type, loop_end, loop_end_type) {}


/**
 * @func fmod_sound_get_loop_points
 * @desc > **FMOD Function:** [Sound::getLoopPoints](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getlooppoints)
 *
 * <br />
 *
 * This function retrieves the loop points for a sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} loop_start_type
 * @param {real} loop_end_type
 * @returns {struct.FmodLoopPoints}
 * @func_end
 */
function fmod_sound_get_loop_points(sound_ref, loop_start_type, loop_end_type) {}


/**
 * @func fmod_sound_set_sound_group
 * @desc > **FMOD Function:** [Sound::setSoundGroup](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_setsoundgroup)
 *
 * <br />
 *
 * This function moves the sound from its existing SoundGroup to the specified sound group.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_sound_group(sound_ref, sound_group_ref) {}


/**
 * @func fmod_sound_get_sound_group
 * @desc > **FMOD Function:** [Sound::getSoundGroup](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getsoundgroup)
 *
 * <br />
 *
 * This function retrieves the sound's current sound group.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_sound_group(sound_ref) {}


/**
 * @func fmod_sound_get_num_sub_sounds
 * @desc > **FMOD Function:** [Sound::getNumSubSounds](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getnumsubsounds)
 *
 * <br />
 *
 * This function retrieves the number of subsounds stored within a sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_num_sub_sounds(sound_ref) {}


/**
 * @func fmod_sound_get_sub_sound
 * @desc > **FMOD Function:** [Sound::getSubSound](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getsubsound)
 *
 * <br />
 *
 * This function retrieves a handle to a Sound object that is contained within the parent sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} sub_sound_index
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_sub_sound(sound_ref, sub_sound_index) {}


/**
 * @func fmod_sound_get_sub_sound_parent
 * @desc > **FMOD Function:** [Sound::getSubSoundParent](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getsubsoundparent)
 *
 * <br />
 *
 * This function retrieves the parent Sound object that contains this subsound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_sub_sound_parent(sound_ref) {}


/**
 * @func fmod_sound_get_open_state
 * @desc > **FMOD Function:** [Sound::getOpenState](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getopenstate)
 *
 * <br />
 *
 * This function retrieves the state a sound is in after being opened with the non blocking flag, or the current state of the streaming buffer.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {struct.FmodSoundOpenState}
 * @func_end
 */
function fmod_sound_get_open_state(sound_ref) {}


/**
 * @func fmod_sound_read_data
 * @desc > **FMOD Function:** [Sound::readData](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_readdata)
 *
 * <br />
 *
 * This function reads data from an opened sound to a specified buffer, using FMOD's internal codecs.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {buffer} buff
 * @param {real} length
 * @param {real} offset
 * @func_end
 */
function fmod_sound_read_data(sound_ref, buff, length, offset) {}


/**
 * @func fmod_sound_seek_data
 * @desc > **FMOD Function:** [Sound::seekData](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_seekdata)
 *
 * <br />
 *
 * This function seeks a sound for use with data reading, using FMOD's internal codecs.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} pcm
 * @returns {real}
 * @func_end
 */
function fmod_sound_seek_data(sound_ref, pcm) {}


/**
 * @func fmod_sound_lock
 * @desc > **FMOD Function:** [Sound::lock](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_lock)
 *
 * <br />
 *
 * This function gives access to a portion or all the sample data of a sound for direct manipulation.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} offset
 * @param {real} length
 * @param {buffer} buff1
 * @param {buffer} buff2
 * @returns {struct.FmodSoundLock}
 * @func_end
 */
function fmod_sound_lock(sound_ref, offset, length, buff1, buff2) {}


/**
 * @func fmod_sound_unlock
 * @desc > **FMOD Function:** [Sound::unlock](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_unlock)
 *
 * <br />
 *
 * This function finalizes a previous sample data lock and submits it back to the Sound object.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} buff1
 * @param {real} len1
 * @param {real} address1
 * @param {real} buff2
 * @param {real} len2
 * @param {real} address2
 * @func_end
 */
function fmod_sound_unlock(sound_ref, buff1, len1, address1, buff2, len2, address2) {}


/**
 * @func fmod_sound_get_music_num_channels
 * @desc > **FMOD Function:** [Sound::getMusicNumChannels](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getmusicnumchannels)
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
 * @desc > **FMOD Function:** [Sound::setMusicChannelVolume](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_setmusicchannelvolume)
 *
 * <br />
 *
 * This function sets the volume of a MOD/S3M/XM/IT/MIDI music channel volume.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} channel_index
 * @param {real} volume
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_music_channel_volume(sound_ref, channel_index, volume) {}


/**
 * @func fmod_sound_get_music_channel_volume
 * @desc > **FMOD Function:** [Sound::getMusicChannelVolume](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getmusicchannelvolume)
 *
 * <br />
 *
 * This function retrieves the volume of a MOD/S3M/XM/IT/MIDI music channel volume.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} channel_index
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_music_channel_volume(sound_ref, channel_index) {}


/**
 * @func fmod_sound_set_music_speed
 * @desc > **FMOD Function:** [Sound::setMusicSpeed](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_setmusicspeed)
 *
 * <br />
 *
 * This function sets the relative speed of MOD/S3M/XM/IT/MIDI music.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} speed
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_music_speed(sound_ref, speed) {}


/**
 * @func fmod_sound_get_music_speed
 * @desc > **FMOD Function:** [Sound::getMusicSpeed](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getmusicspeed)
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
 * @desc > **FMOD Function:** [Sound::getSyncPoint](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getsyncpoint)
 *
 * <br />
 *
 * This function retrieves a sync point.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} point_index 
 * @param {constant.FMOD_TIMEUNIT} offset_type 
 * @returns {struct.FmodSyncPoint}
 * @func_end
 */
function fmod_sound_get_sync_point(sound_ref, point_index, offset_type) {}


/**
 * @func fmod_sound_get_num_sync_points
 * @desc > **FMOD Function:** [Sound::getNumSyncPoints](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getnumsyncpoints)
 *
 * <br />
 *
 * This function retrieves the number of sync points stored within a sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_num_sync_points(sound_ref) {}


/**
 * @func fmod_sound_add_sync_point
 * @desc > **FMOD Function:** [Sound::addSyncPoint](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_addsyncpoint)
 *
 * <br />
 *
 * This function adds a sync point at a specific time within the sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} offset
 * @param {real} offset_type
 * @param {string} name
 * @returns {real}
 * @func_end
 */
function fmod_sound_add_sync_point(sound_ref, offset, offset_type, name) {}


/**
 * @func fmod_sound_delete_sync_point
 * @desc > **FMOD Function:** [Sound::deleteSyncPoint](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_deletesyncpoint)
 *
 * <br />
 *
 * This function deletes a sync point within the sound.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} point_index
 * @returns {real}
 * @func_end
 */
function fmod_sound_delete_sync_point(sound_ref, point_index) {}


/**
 * @func fmod_sound_release
 * @desc > **FMOD Function:** [Sound::release](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_release)
 *
 * <br />
 *
 * This function frees a sound object.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_release(sound_ref) {}


/**
 * @func fmod_sound_get_system_object
 * @desc > **FMOD Function:** [Sound::getSystemObject](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getsystemobject)
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
 * @desc > **FMOD Function:** [Sound::setUserData](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_setuserdata)
 *
 * <br />
 *
 * This function sets a user value associated with this object.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_sound_set_user_data(sound_ref, data) {}


/**
 * @func fmod_sound_get_user_data
 * @desc > **FMOD Function:** [Sound::getUserData](https://www.fmod.com/docs/2.02/api/core-api-sound.html#sound_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @returns {real}
 * @func_end
 */
function fmod_sound_get_user_data(sound_ref) {}


/**
 * @func fmod_sound_group_set_max_audible
 * @desc > **FMOD Function:** [SoundGroup::setMaxAudible](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_setmaxaudible)
 *
 * <br />
 *
 * This function sets the maximum number of playbacks to be audible at once in a sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} max_audible
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_set_max_audible(sound_group_ref, max_audible) {}


/**
 * @func fmod_sound_group_get_max_audible
 * @desc > **FMOD Function:** [SoundGroup::getMaxAudible](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getmaxaudible)
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
 * @desc > **FMOD Function:** [SoundGroup::setMaxAudibleBehavior](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_setmaxaudiblebehavior)
 *
 * <br />
 *
 * This function changes the way the sound playback behaves when too many sounds are playing in a soundgroup.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} behavior
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_set_max_audible_behavior(sound_group_ref, behavior) {}


/**
 * @func fmod_sound_group_get_max_audible_behavior
 * @desc > **FMOD Function:** [SoundGroup::getMaxAudibleBehavior](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getmaxaudiblebehavior)
 *
 * <br />
 *
 * This function retrieves the current max audible behavior.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_max_audible_behavior(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_mute_fade_speed
 * @desc > **FMOD Function:** [SoundGroup::setMuteFadeSpeed](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_setmutefadespeed)
 *
 * <br />
 *
 * This function sets a mute fade time.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} speed
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_set_mute_fade_speed(sound_group_ref, speed) {}


/**
 * @func fmod_sound_group_get_mute_fade_speed
 * @desc > **FMOD Function:** [SoundGroup::getMuteFadeSpeed](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getmutefadespeed)
 *
 * <br />
 *
 * This function retrieves the current mute fade time.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_mute_fade_speed(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_volume
 * @desc > **FMOD Function:** [SoundGroup::setVolume](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_setvolume)
 *
 * <br />
 *
 * This function sets the volume of the sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} volume
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_set_volume(sound_group_ref, volume) {}


/**
 * @func fmod_sound_group_get_volume
 * @desc > **FMOD Function:** [SoundGroup::getVolume](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getvolume)
 *
 * <br />
 *
 * This function retrieves the volume of the sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_volume(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_num_sounds
 * @desc > **FMOD Function:** [SoundGroup::getNumSounds](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getnumsounds)
 *
 * <br />
 *
 * This function retrieves the current number of sounds in this sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_num_sounds(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_sound
 * @desc > **FMOD Function:** [SoundGroup::getSound](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getsound)
 *
 * <br />
 *
 * This function retrieves a sound.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} sound_index
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_sound(sound_group_ref, sound_index) {}


/**
 * @func fmod_sound_group_get_num_playing
 * @desc > **FMOD Function:** [SoundGroup::getNumPlaying](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getnumplaying)
 *
 * <br />
 *
 * This function retrieves the number of currently playing Channels for the SoundGroup.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_num_playing(sound_group_ref) {}


/**
 * @func fmod_sound_group_stop
 * @desc > **FMOD Function:** [SoundGroup::stop](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_stop)
 *
 * <br />
 *
 * This function stops all sounds within this sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_stop(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_name
 * @desc > **FMOD Function:** [SoundGroup::getName](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getname)
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
 * @desc > **FMOD Function:** [SoundGroup::release](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_release)
 *
 * <br />
 *
 * This function releases a soundgroup object and returns all sounds back to the master sound group.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_release(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_system_object
 * @desc > **FMOD Function:** [SoundGroup::getSystemObject](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getsystemobject)
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
 * @desc > **FMOD Function:** [SoundGroup::setUserData](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_setuserdata)
 *
 * <br />
 *
 * This function sets a user value associated with this object.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_set_user_data(sound_group_ref, data) {}


/**
 * @func fmod_sound_group_get_user_data
 * @desc > **FMOD Function:** [SoundGroup::getUserData](https://www.fmod.com/docs/2.02/api/core-api-soundgroup.html#soundgroup_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with this object.
 * 
 * @param {real} sound_group_ref A reference to a SoundGroup.
 * @returns {real}
 * @func_end
 */
function fmod_sound_group_get_user_data(sound_group_ref) {}

// FMOD Studio Bank

/**
 * @func fmod_studio_bank_get_loading_state
 * @desc > **FMOD Function:** [Studio::Bank::getLoadingState](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getloadingstate)
 *
 * <br />
 *
 * This function retrieves the loading state.
 * 
 * @param {real} bank_ref 
 * @returns {constant.FMOD_STUDIO_LOADING_STATE}
 * @func_end
 */
function fmod_studio_bank_get_loading_state(bank_ref) {}


/**
 * @func fmod_studio_bank_load_sample_data
 * @desc > **FMOD Function:** [Studio::Bank::loadSampleData](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_loadsampledata)
 *
 * <br />
 *
 * This function loads non-streaming sample data for all events in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_load_sample_data(bank_ref) {}


/**
 * @func fmod_studio_bank_unload_sample_data
 * @desc > **FMOD Function:** [Studio::Bank::unloadSampleData](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_unloadsampledata)
 *
 * <br />
 *
 * This function unloads non-streaming sample data for all events in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_unload_sample_data(bank_ref) {}


/**
 * @func fmod_studio_bank_get_sample_loading_state
 * @desc > **FMOD Function:** [Studio::Bank::getSampleLoadingState](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getsampleloadingstate)
 *
 * <br />
 *
 * This function retrieves the loading state of the samples in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_sample_loading_state(bank_ref) {}


/**
 * @func fmod_studio_bank_unload
 * @desc > **FMOD Function:** [Studio::Bank::unload](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_unload)
 *
 * <br />
 *
 * This function unloads the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_unload(bank_ref) {}


/**
 * @func fmod_studio_bank_get_bus_count
 * @desc > **FMOD Function:** [Studio::Bank::getBusCount](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getbuscount)
 *
 * <br />
 *
 * This function retrieves the number of buses in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_bus_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_bus_list
 * @desc > **FMOD Function:** [Studio::Bank::getBusList](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getbuslist)
 *
 * <br />
 *
 * This function retrieves a list of the buses in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_bank_get_bus_list(bank_ref) {}


/**
 * @func fmod_studio_bank_get_event_count
 * @desc > **FMOD Function:** [Studio::Bank::getEventCount](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_geteventcount)
 *
 * <br />
 *
 * This function retrieves the number of event descriptions in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_event_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_event_description_list
 * @desc > **FMOD Function:** [Studio::Bank::getEventList](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_geteventlist)
 *
 * <br />
 *
 * This function retrieves a list of the event descriptions in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_bank_get_event_description_list(bank_ref) {}


/**
 * @func fmod_studio_bank_get_string_count
 * @desc > **FMOD Function:** [Studio::Bank::getStringCount](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getstringcount)
 *
 * <br />
 *
 * This function retrieves the number of string table entries in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_string_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_string_info
 * @desc > **FMOD Function:** [Studio::Bank::getStringInfo](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getstringinfo)
 *
 * <br />
 *
 * This function retrieves a string table entry.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @param {real} string_index
 * @returns {struct.FmodStudioStringInfo}
 * @func_end
 */
function fmod_studio_bank_get_string_info(bank_ref, string_index) {}


/**
 * @func fmod_studio_bank_get_vca_count
 * @desc > **FMOD Function:** [Studio::Bank::getVCACount](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getvcacount)
 *
 * <br />
 *
 * This function retrieves the number of VCAs in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_vca_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_vca_list
 * @desc > **FMOD Function:** [Studio::Bank::getVCAList](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getvcalist)
 *
 * <br />
 *
 * This function retrieves a list of the VCAs in the bank.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_bank_get_vca_list(bank_ref) {}


/**
 * @func fmod_studio_bank_get_id
 * @desc > **FMOD Function:** [Studio::Bank::getID](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getid)
 *
 * <br />
 *
 * This function retrieves the GUID.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {string}
 * @func_end
 */
function fmod_studio_bank_get_id(bank_ref) {}


/**
 * @func fmod_studio_bank_get_path
 * @desc > **FMOD Function:** [Studio::Bank::getPath](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getpath)
 *
 * <br />
 *
 * This function retrieves the path.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {string}
 * @func_end
 */
function fmod_studio_bank_get_path(bank_ref) {}


/**
 * @func fmod_studio_bank_is_valid
 * @desc > **FMOD Function:** [Studio::Bank::isValid](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_isvalid)
 *
 * <br />
 *
 * This function checks that the Bank reference is valid.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_is_valid(bank_ref) {}


/**
 * @func fmod_studio_bank_set_user_data
 * @desc > **FMOD Function:** [Studio::Bank::setUserData](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_setuserdata)
 *
 * <br />
 *
 * This function sets the bank user data.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_set_user_data(bank_ref, data) {}


/**
 * @func fmod_studio_bank_get_user_data
 * @desc > **FMOD Function:** [Studio::Bank::getUserData](https://www.fmod.com/docs/2.02/api/studio-api-bank.html#studio_bank_getuserdata)
 *
 * <br />
 *
 * This function retrieves the bank user data.
 * 
 * @param {real} bank_ref A reference to a bank.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bank_get_user_data(bank_ref) {}

// FMOD Studio Bus

/**
 * @func fmod_studio_bus_set_paused
 * @desc > **FMOD Function:** [Studio::Bus::setPaused](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_setpaused)
 *
 * <br />
 *
 * This function sets the pause state.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {real} pause
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_set_paused(bus_ref, pause) {}


/**
 * @func fmod_studio_bus_get_paused
 * @desc > **FMOD Function:** [Studio::Bus::getPaused](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getpaused)
 *
 * <br />
 *
 * This function retrieves the pause state.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_get_paused(bus_ref) {}


/**
 * @func fmod_studio_bus_stop_all_events
 * @desc > **FMOD Function:** [Studio::Bus::stopAllEvents](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_stopallevents)
 *
 * <br />
 *
 * This function stops all event instances that are routed into the bus.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {real} stop_mode
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_stop_all_events(bus_ref, stop_mode) {}


/**
 * @func fmod_studio_bus_set_volume
 * @desc > **FMOD Function:** [Studio::Bus::setVolume](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_setvolume)
 *
 * <br />
 *
 * This function sets the volume level.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {real} volumen
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_set_volume(bus_ref, volumen) {}


/**
 * @func fmod_studio_bus_get_volume
 * @desc > **FMOD Function:** [Studio::Bus::getVolume](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getvolume)
 *
 * <br />
 *
 * This function retrieves the volume level.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_get_volume(bus_ref) {}


/**
 * @func fmod_studio_bus_set_mute
 * @desc > **FMOD Function:** [Studio::Bus::setMute](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_setmute)
 *
 * <br />
 *
 * This function sets the mute state.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {real} mute
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_set_mute(bus_ref, mute) {}


/**
 * @func fmod_studio_bus_get_mute
 * @desc > **FMOD Function:** [Studio::Bus::getMute](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getmute)
 *
 * <br />
 *
 * This function retrieves the mute state.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_get_mute(bus_ref) {}


/**
 * @func fmod_studio_bus_set_port_index
 * @desc > **FMOD Function:** [Studio::Bus::setPortIndex](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_setportindex)
 *
 * <br />
 *
 * This function sets the port index to use when attaching to an output port.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {real} port_index
 * @func_end
 */
function fmod_studio_bus_set_port_index(bus_ref, port_index) {}


/**
 * @func fmod_studio_bus_get_port_index
 * @desc > **FMOD Function:** [Studio::Bus::getPortIndex](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getportindex)
 *
 * <br />
 *
 * This function retrieves the port index assigned to the bus.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real} port_index
 * @func_end
 */
function fmod_studio_bus_get_port_index(bus_ref) {}


/**
 * @func fmod_studio_bus_get_channel_group
 * @desc > **FMOD Function:** [Studio::Bus::getChannelGroup](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getchannelgroup)
 *
 * <br />
 *
 * This function retrieves the core ChannelGroup.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_get_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_lock_channel_group
 * @desc > **FMOD Function:** [Studio::Bus::lockChannelGroup](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_lockchannelgroup)
 *
 * <br />
 *
 * This function locks the core ChannelGroup.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_lock_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_unlock_channel_group
 * @desc > **FMOD Function:** [Studio::Bus::unlockChannelGroup](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_unlockchannelgroup)
 *
 * <br />
 *
 * This function unlocks the core ChannelGroup.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_unlock_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_get_cpu_usage
 * @desc > **FMOD Function:** [Studio::Bus::getCPUUsage](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getcpuusage)
 *
 * <br />
 *
 * This function retrieves the bus CPU usage data.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {struct.FmodCPUUsage}
 * @func_end
 */
function fmod_studio_bus_get_cpu_usage(bus_ref) {}


/**
 * @func fmod_studio_bus_get_memory_usage
 * @desc > **FMOD Function:** [Studio::Bus::getMemoryUsage](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getmemoryusage)
 *
 * <br />
 *
 * This function retrieves memory usage statistics.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @param {buffer} buff_return
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_get_memory_usage(bus_ref, buff_return) {}


/**
 * @func fmod_studio_bus_get_id
 * @desc > **FMOD Function:** [Studio::Bus::getID](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getid)
 *
 * <br />
 *
 * This function retrieves the GUID.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {string}
 * @func_end
 */
function fmod_studio_bus_get_id(bus_ref) {}


/**
 * @func fmod_studio_bus_get_path
 * @desc > **FMOD Function:** [Studio::Bus::getPath](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_getpath)
 *
 * <br />
 *
 * This function retrieves the path.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {string}
 * @func_end
 */
function fmod_studio_bus_get_path(bus_ref) {}


/**
 * @func fmod_studio_bus_is_valid
 * @desc > **FMOD Function:** [Studio::Bus::isValid](https://www.fmod.com/docs/2.02/api/studio-api-bus.html#studio_bus_isvalid)
 *
 * <br />
 *
 * This function checks that the Bus reference is valid.
 * 
 * @param {real} bus_ref A reference to a bus.
 * @returns {real}
 * @func_end
 */
function fmod_studio_bus_is_valid(bus_ref) {}

// FMOD Studio Command Replay

/**
 * @func fmod_studio_command_replay_set_bank_path
 * @desc > **FMOD Function:** [Studio::CommandReplay::setBankPath](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_setbankpath)
 *
 * <br />
 *
 * This function sets a path substition that will be used when loading banks with this replay.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {string} path
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_set_bank_path(command_replay_ref, path) {}


/**
 * @func fmod_studio_command_replay_set_create_instance_callback
 * @desc > **FMOD Function:** [Studio::CommandReplay::setCreateInstanceCallback](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_setcreateinstancecallback)
 *
 * <br />
 *
 * This function sets the create event instance callback.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_set_create_instance_callback(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_frame_callback
 * @desc > **FMOD Function:** [Studio::CommandReplay::setFrameCallback](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_setframecallback)
 *
 * <br />
 *
 * This function sets a callback that is issued each time the replay reaches a new frame.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_set_frame_callback(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_load_bank_callback
 * @desc > **FMOD Function:** [Studio::CommandReplay::setLoadBankCallback](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_setloadbankcallback)
 *
 * <br />
 *
 * This function sets the bank loading callback.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {string} path
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_set_load_bank_callback(command_replay_ref, path) {}


/**
 * @func fmod_studio_command_replay_start
 * @desc > **FMOD Function:** [Studio::CommandReplay::start](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_start)
 *
 * <br />
 *
 * This function begins playback.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_start(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_stop
 * @desc > **FMOD Function:** [Studio::CommandReplay::stop](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_stop)
 *
 * <br />
 *
 * This function stops playback.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_stop(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_current_command
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCurrentCommand](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getcurrentcommand)
 *
 * <br />
 *
 * This function retrieves the progress through the command replay.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {struct.FmodCommandReplayCurrentCommand}
 * @func_end
 */
function fmod_studio_command_replay_get_current_command(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_playback_state
 * @desc > **FMOD Function:** [Studio::CommandReplay::getPlaybackState](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getplaybackstate)
 *
 * <br />
 *
 * This function retrieves the playback state.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_playback_state(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_paused
 * @desc > **FMOD Function:** [Studio::CommandReplay::setPaused](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_setpaused)
 *
 * <br />
 *
 * This function sets the paused state.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} pause
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_set_paused(command_replay_ref, pause) {}


/**
 * @func fmod_studio_command_replay_get_paused
 * @desc > **FMOD Function:** [Studio::CommandReplay::getPaused](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getpaused)
 *
 * <br />
 *
 * This function retrieves the paused state.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_paused(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_seek_to_command
 * @desc > **FMOD Function:** [Studio::CommandReplay::seekToCommand](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_seektocommand)
 *
 * <br />
 *
 * This function seeks the playback position to a command.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} command_index
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_seek_to_command(command_replay_ref, command_index) {}


/**
 * @func fmod_studio_command_replay_seek_to_time
 * @desc > **FMOD Function:** [Studio::CommandReplay::seekToTime](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_seektotime)
 *
 * <br />
 *
 * This function seeks the playback position to a time.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} time
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_seek_to_time(command_replay_ref, time) {}


/**
 * @func fmod_studio_command_replay_get_command_at_time
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCommandAtTime](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getcommandattime)
 *
 * <br />
 *
 * This function retrieves the command index corresponding to the given playback time.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} time
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_command_at_time(command_replay_ref, time) {}


/**
 * @func fmod_studio_command_replay_get_command_count
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCommandCount](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getcommandcount)
 *
 * <br />
 *
 * This function retrieves the number of commands in the replay.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_command_count(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_command_info
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCommandInfo](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getcommandinfo)
 *
 * <br />
 *
 * This function retrieves command information.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} command_index
 * @returns {struct.FmodCommandReplayCommandInfo}
 * @func_end
 */
function fmod_studio_command_replay_get_command_info(command_replay_ref, command_index) {}


/**
 * @func fmod_studio_command_replay_get_command_string
 * @desc > **FMOD Function:** [Studio::CommandReplay::getCommandString](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getcommandstring)
 *
 * <br />
 *
 * This function retrieves the string representation of a command.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} command_index
 * @returns {string}
 * @func_end
 */
function fmod_studio_command_replay_get_command_string(command_replay_ref, command_index) {}


/**
 * @func fmod_studio_command_replay_get_length
 * @desc > **FMOD Function:** [Studio::CommandReplay::getLength](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getlength)
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
 * @desc > **FMOD Function:** [Studio::CommandReplay::getSystem](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getsystem)
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
 * @desc > **FMOD Function:** [Studio::CommandReplay::isValid](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_isvalid)
 *
 * <br />
 *
 * This function checks that the CommandReplay reference is valid.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_is_valid(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_user_data
 * @desc > **FMOD Function:** [Studio::CommandReplay::setUserData](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_setuserdata)
 *
 * <br />
 *
 * This function sets user data.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_set_user_data(command_replay_ref, data) {}


/**
 * @func fmod_studio_command_replay_get_user_data
 * @desc > **FMOD Function:** [Studio::CommandReplay::getUserData](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_getuserdata)
 *
 * <br />
 *
 * This function retrieves user data.
 * 
 * @param {real} command_replay_ref A reference to a CommandReplay.
 * @returns {real}
 * @func_end
 */
function fmod_studio_command_replay_get_user_data(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_release
 * @desc > **FMOD Function:** [Studio::CommandReplay::release](https://www.fmod.com/docs/2.02/api/studio-api-commandreplay.html#studio_commandreplay_release)
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
 * @desc > **FMOD Function:** [Studio::EventDescription::createInstance](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_createinstance)
 *
 * <br />
 *
 * This function creates a playable instance.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_create_instance(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_instance_count
 * @desc > **FMOD Function:** [Studio::EventDescription::getInstanceCount](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getinstancecount)
 *
 * <br />
 *
 * This function retrieves the number of instances.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_instance_count(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_instance_list
 * @desc > **FMOD Function:** [Studio::EventDescription::getInstanceList](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getinstancelist)
 *
 * <br />
 *
 * This function retrieves a list of the instances.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_event_description_get_instance_list(event_description_ref) {}


/**
 * @func fmod_studio_event_description_release_all_instances
 * @desc > **FMOD Function:** [Studio::EventDescription::releaseAllInstances](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_releaseallinstances)
 *
 * <br />
 *
 * This function releases all instances.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_release_all_instances(event_description_ref) {}


/**
 * @func fmod_studio_event_description_load_sample_data
 * @desc > **FMOD Function:** [Studio::EventDescription::loadSampleData](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_loadsampledata)
 *
 * <br />
 *
 * This function loads non-streaming sample data used by the event.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_load_sample_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_unload_sample_data
 * @desc > **FMOD Function:** [Studio::EventDescription::unloadSampleData](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_unloadsampledata)
 *
 * <br />
 *
 * This function unloads all non-streaming sample data.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_unload_sample_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_sample_loading_state
 * @desc > **FMOD Function:** [Studio::EventDescription::getSampleLoadingState](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getsampleloadingstate)
 *
 * <br />
 *
 * This function retrieves the sample data loading state.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_sample_loading_state(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_3d
 * @desc > **FMOD Function:** [Studio::EventDescription::is3D](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_is3d)
 *
 * <br />
 *
 * This function retrieves the event's 3D status.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_is_3d(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_doppler_enabled
 * @desc > **FMOD Function:** [Studio::EventDescription::isDopplerEnabled](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_isdopplerenabled)
 *
 * <br />
 *
 * This function retrieves the event's doppler status.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_is_doppler_enabled(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_oneshot
 * @desc > **FMOD Function:** [Studio::EventDescription::isOneshot](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_isoneshot)
 *
 * <br />
 *
 * This function retrieves the event's oneshot status.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_is_oneshot(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_snapshot
 * @desc > **FMOD Function:** [Studio::EventDescription::isSnapshot](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_issnapshot)
 *
 * <br />
 *
 * This function retrieves the event's snapshot status.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_is_snapshot(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_stream
 * @desc > **FMOD Function:** [Studio::EventDescription::isStream](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_isstream)
 *
 * <br />
 *
 * This function retrieves the event's stream status.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_is_stream(event_description_ref) {}


/**
 * @func fmod_studio_event_description_has_sustain_point
 * @desc > **FMOD Function:** [Studio::EventDescription::hasSustainPoint](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_hassustainpoint)
 *
 * <br />
 *
 * This function retrieves whether the event has any sustain points.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_has_sustain_point(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_min_max_distance
 * @desc > **FMOD Function:** [Studio::EventDescription::getMinMaxDistance](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getminmaxdistance)
 *
 * <br />
 *
 * This function retrieves the minimum and maximum distances for 3D attenuation.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {struct.FmodMinMaxDistance}
 * @func_end
 */
function fmod_studio_event_description_get_min_max_distance(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_sound_size
 * @desc > **FMOD Function:** [Studio::EventDescription::getSoundSize](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getsoundsize)
 *
 * <br />
 *
 * This function retrieves the sound size for 3D panning.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_sound_size(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_name
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterDescriptionByName](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getparameterdescriptionbyname)
 *
 * <br />
 *
 * This function retrieves an event parameter description by name.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @param {string} name
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_description_by_name(event_description_ref, name) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_id
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterDescriptionByID](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getparameterdescriptionbyid)
 *
 * <br />
 *
 * This function retrieves an event parameter description by ID.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @param {struct.FmodStudioParameterId} parameter_id
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_description_by_id(event_description_ref, parameter_id) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_index
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterDescriptionByIndex](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getparameterdescriptionbyindex)
 *
 * <br />
 *
 * This function retrieves an event parameter description by index.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @param {real} parameter_index
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_description_by_index(event_description_ref, index) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_count
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterDescriptionCount](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getparameterdescriptioncount)
 *
 * <br />
 *
 * This function retrieves the number of parameters in the event.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_description_count(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_name
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterLabelByName](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getparameterlabelbyname)
 *
 * <br />
 *
 * This function retrieves an event parameter label by name or path.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {string} name
 * @param {real} label_index
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_label_by_name(event_description_ref, name, label_index) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_id
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterLabelByID](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getparameterlabelbyid)
 *
 * <br />
 *
 * This function retrieves an event parameter label by ID.
 * 
 * @param {real} event_descriptor_ref A reference to an EventDescription.
 * @param {struct.FmodStudioParameterId} parameter_id
 * @param {real} label_index
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_label_by_id(event_description_ref, parameter_id, label_index) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_index
 * @desc > **FMOD Function:** [Studio::EventDescription::getParameterLabelByIndex](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getparameterlabelbyindex)
 *
 * <br />
 *
 * This function retrieves an event parameter label by index.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {real} index
 * @param {real} label_index
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_parameter_label_by_index(event_description_ref, index, label_index) {}


/**
 * @func fmod_studio_event_description_get_user_property
 * @desc > **FMOD Function:** [Studio::EventDescription::getUserProperty](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getuserproperty)
 *
 * <br />
 *
 * This function retrieves a user property by name.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {string} name
 * @param {buffer} buff_return
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_user_property(event_description_ref, name, buff_return) {}


/**
 * @func fmod_studio_event_description_get_user_property_by_index
 * @desc > **FMOD Function:** [Studio::EventDescription::getUserPropertyByIndex](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getuserpropertybyindex)
 *
 * <br />
 *
 * This function retrieves a user property by index.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {real} index
 * @param {buffer} buff_return
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_user_property_by_index(event_description_ref, index, buff_return) {}


/**
 * @func fmod_studio_event_description_get_user_property_count
 * @desc > **FMOD Function:** [Studio::EventDescription::getUserPropertyCount](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getuserpropertycount)
 *
 * <br />
 *
 * This function retrieves the number of user properties attached to the event.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {string} name
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_user_property_count(event_description_ref, name) {}


/**
 * @func fmod_studio_event_description_get_id
 * @desc > **FMOD Function:** [Studio::EventDescription::getID](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getid)
 *
 * <br />
 *
 * This function retrieves the GUID.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_id(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_length
 * @desc > **FMOD Function:** [Studio::EventDescription::getLength](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getlength)
 *
 * <br />
 *
 * This function retrieves the length of the timeline.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_length(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_path
 * @desc > **FMOD Function:** [Studio::EventDescription::getPath](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getpath)
 *
 * <br />
 *
 * This function retrieves the path.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {string}
 * @func_end
 */
function fmod_studio_event_description_get_path(event_description_ref) {}


/**
 * @func fmod_studio_event_description_set_callback
 * @desc > **FMOD Function:** [Studio::EventDescription::setCallback](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_setcallback)
 *
 * <br />
 *
 * This function sets the user callback.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {real} type
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_set_callback(event_description_ref, type) {}


/**
 * @func fmod_studio_event_description_set_user_data
 * @desc > **FMOD Function:** [Studio::EventDescription::setUserData](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_setuserdata)
 *
 * <br />
 *
 * This function sets the event user data.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_set_user_data(event_description_ref, data) {}


/**
 * @func fmod_studio_event_description_get_user_data
 * @desc > **FMOD Function:** [Studio::EventDescription::getUserData](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_getuserdata)
 *
 * <br />
 *
 * This function retrieves the event user data.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_get_user_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_valid
 * @desc > **FMOD Function:** [Studio::EventDescription::isValid](https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html#studio_eventdescription_isvalid)
 *
 * <br />
 *
 * This function checks that the EventDescription reference is valid.
 * 
 * @param {real} event_description_ref A reference to an EventDescription.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_description_is_valid(event_description_ref) {}

// FMOD Studio Event Instance

/**
 * @func fmod_studio_event_instance_start
 * @desc > **FMOD Function:** [Studio::EventInstance::start](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_start)
 *
 * <br />
 *
 * This function starts playback.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_start(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_stop
 * @desc > **FMOD Function:** [Studio::EventInstance::stop](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_stop)
 *
 * <br />
 *
 * This function stops playback.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} mode
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_stop(event_instance_ref, mode) {}


/**
 * @func fmod_studio_event_instance_get_playback_state
 * @desc > **FMOD Function:** [Studio::EventInstance::getPlaybackState](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getplaybackstate)
 *
 * <br />
 *
 * This function retrieves the playback state.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_playback_state(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_paused
 * @desc > **FMOD Function:** [Studio::EventInstance::setPaused](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setpaused)
 *
 * <br />
 *
 * This function sets the pause state.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} pause
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_paused(event_instance_ref, pause) {}


/**
 * @func fmod_studio_event_instance_get_paused
 * @desc > **FMOD Function:** [Studio::EventInstance::getPaused](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getpaused)
 *
 * <br />
 *
 * This function retrieves the pause state.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_paused(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_keyoff
 * @desc > **FMOD Function:** [Studio::EventInstance::keyOff](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_keyoff)
 *
 * <br />
 *
 * This function allows an event to continue past a sustain point.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_keyoff(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_pitch
 * @desc > **FMOD Function:** [Studio::EventInstance::setPitch](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setpitch)
 *
 * <br />
 *
 * This function sets the pitch multiplier.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} pitch
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_pitch(event_instance_ref, pitch) {}


/**
 * @func fmod_studio_event_instance_get_pitch
 * @desc > **FMOD Function:** [Studio::EventInstance::getPitch](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getpitch)
 *
 * <br />
 *
 * This function retrieves the pitch multiplier.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_pitch(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_property
 * @desc > **FMOD Function:** [Studio::EventInstance::setProperty](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setproperty)
 *
 * <br />
 *
 * This function sets the value of a built-in property.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} property
 * @param {real} value
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_property(event_instance_ref, property, value) {}


/**
 * @func fmod_studio_event_instance_get_property
 * @desc > **FMOD Function:** [Studio::EventInstance::getProperty](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getproperty)
 *
 * <br />
 *
 * This function retrieves the value of a built-in property.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} property
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_property(event_instance_ref, property) {}


/**
 * @func fmod_studio_event_instance_set_timeline_position
 * @desc > **FMOD Function:** [Studio::EventInstance::setTimelinePosition](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_settimelineposition)
 *
 * <br />
 *
 * This function sets the timeline cursor position.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} position
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_timeline_position(event_instance_ref, position) {}


/**
 * @func fmod_studio_event_instance_get_timeline_position
 * @desc > **FMOD Function:** [Studio::EventInstance::getTimelinePosition](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_gettimelineposition)
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
 * @desc > **FMOD Function:** [Studio::EventInstance::setVolume](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setvolume)
 *
 * <br />
 *
 * This function sets the volume level.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} volume
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_volume(event_instance_ref, volume) {}


/**
 * @func fmod_studio_event_instance_get_volume
 * @desc > **FMOD Function:** [Studio::EventInstance::getVolume](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getvolume)
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
 * @desc > **FMOD Function:** [Studio::EventInstance::isVirtual](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_isvirtual)
 *
 * <br />
 *
 * This function retrieves the virtualization state.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_is_virtual(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_3d_attributes
 * @desc > **FMOD Function:** [Studio::EventInstance::set3DAttributes](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_set3dattributes)
 *
 * <br />
 *
 * This function sets the 3D attributes.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {struct.Fmod3DAttributes} attributes
 * @func_end
 */
function fmod_studio_event_instance_set_3d_attributes(event_instance_ref, attributes) {}


/**
 * @func fmod_studio_event_instance_get_3d_attributes
 * @desc > **FMOD Function:** [Studio::EventInstance::get3DAttributes](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_get3dattributes)
 *
 * <br />
 *
 * This function retrieves the 3D attributes.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.Fmod3DAttributes}
 * @func_end
 */
function fmod_studio_event_instance_get_3d_attributes(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_listener_mask
 * @desc > **FMOD Function:** [Studio::EventInstance::setListenerMask](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setlistenermask)
 *
 * <br />
 *
 * This function sets the listener mask.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} mask
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_listener_mask(event_instance_ref, mask) {}


/**
 * @func fmod_studio_event_instance_get_listener_mask
 * @desc > **FMOD Function:** [Studio::EventInstance::getListenerMask](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getlistenermask)
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
 * @desc > **FMOD Function:** [Studio::EventInstance::getMinMaxDistance](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getminmaxdistance)
 *
 * <br />
 *
 * This function retrieves the minimum and maximum distances for 3D attenuation.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.FmodMinMaxDistance}
 * @func_end
 */
function fmod_studio_event_instance_get_min_max_distance(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_name
 * @desc > **FMOD Function:** [Studio::EventInstance::setParameterByName](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setparameterbyname)
 *
 * <br />
 *
 * This function sets a parameter value by name.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {string} name
 * @param {real} value
 * @param {real} ignore_seek_speed
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_parameter_by_name(event_instance_ref, name, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_name_with_label
 * @desc > **FMOD Function:** [Studio::EventInstance::setParameterByNameWithLabel](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setparameterbynamewithlabel)
 *
 * <br />
 *
 * This function sets a parameter value by name, looking up the value label.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {string} name
 * @param {string} label
 * @param {real} ignore_seek_speed
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_parameter_by_name_with_label(event_instance_ref, name, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_get_parameter_by_name
 * @desc > **FMOD Function:** [Studio::EventInstance::getParameterByName](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getparameterbyname)
 *
 * <br />
 *
 * This function retrieves a parameter value by name.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {string} name
 * @returns {struct.FmodStudioParameter}
 * @func_end
 */
function fmod_studio_event_instance_get_parameter_by_name(event_instance_ref, name) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_id
 * @desc > **FMOD Function:** [Studio::EventInstance::setParameterByID](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setparameterbyid)
 *
 * <br />
 *
 * This function sets a parameter value by unique identifier.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {struct.FmodStudioParameterId} parameter_id
 * @param {real} value
 * @param {bool} ignore_seek_speed
 * @func_end
 */
function fmod_studio_event_instance_set_parameter_by_id(event_instance_ref, parameter_id, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_id_with_label
 * @desc > **FMOD Function:** [Studio::EventInstance::setParameterByIDWithLabel](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setparameterbyidwithlabel)
 *
 * <br />
 *
 * This function sets a parameter value by unique identifier, looking up the value label.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {struct.FmodStudioParameterId} parameter_id
 * @param {string} label
 * @param {bool} ignore_seek_speed
 * @func_end
 */
function fmod_studio_event_instance_set_parameter_by_id_with_label(event_instance_ref, parameter_id, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_get_parameter_by_id
 * @desc > **FMOD Function:** [Studio::EventInstance::getParameterByID](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getparameterbyid)
 *
 * <br />
 *
 * This function retrieves a parameter value by unique identifier.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {struct.FmodStudioParameterId} parameter_id
 * @returns {struct.FmodStudioParameter}
 * @func_end
 */
function fmod_studio_event_instance_get_parameter_by_id(event_instance_ref, parameter_id) {}


/**
 * @func fmod_studio_event_instance_get_channel_group
 * @desc > **FMOD Function:** [Studio::EventInstance::getChannelGroup](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getchannelgroup)
 *
 * <br />
 *
 * This function retrieves the core ChannelGroup.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_channel_group(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_reverb_level
 * @desc > **FMOD Function:** [Studio::EventInstance::setReverbLevel](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setreverblevel)
 *
 * <br />
 *
 * This function sets the core reverb send level.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} index
 * @param {real} level
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_reverb_level(event_instance_ref, index, level) {}


/**
 * @func fmod_studio_event_instance_get_reverb_level
 * @desc > **FMOD Function:** [Studio::EventInstance::getReverbLevel](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getreverblevel)
 *
 * <br />
 *
 * This function retrieves the core reverb send level.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} index
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_reverb_level(event_instance_ref, index) {}


/**
 * @func fmod_studio_event_instance_get_cpu_usage
 * @desc > **FMOD Function:** [Studio::EventInstance::getCPUUsage](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getcpuusage)
 *
 * <br />
 *
 * This function retrieves the event CPU usage data.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.FmodCPUUsage}
 * @func_end
 */
function fmod_studio_event_instance_get_cpu_usage(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_get_memory_usage
 * @desc > **FMOD Function:** [Studio::EventInstance::getMemoryUsage](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getmemoryusage)
 *
 * <br />
 *
 * This function retrieves memory usage statistics.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {struct.FmodStudioMemoryUsage}
 * @func_end
 */
function fmod_studio_event_instance_get_memory_usage(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_callback
 * @desc > **FMOD Function:** [Studio::EventInstance::setCallback](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setcallback)
 *
 * <br />
 *
 * This function sets the user callback.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} type
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_callback(event_instance_ref, type) {}


/**
 * @func fmod_studio_event_instance_set_user_data
 * @desc > **FMOD Function:** [Studio::EventInstance::setUserData](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_setuserdata)
 *
 * <br />
 *
 * This function sets the event instance user data.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_set_user_data(event_instance_ref, data) {}


/**
 * @func fmod_studio_event_instance_get_user_data
 * @desc > **FMOD Function:** [Studio::EventInstance::getUserData](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getuserdata)
 *
 * <br />
 *
 * This function retrieves the event instance user data.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_user_data(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_get_description
 * @desc > **FMOD Function:** [Studio::EventInstance::getDescription](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_getdescription)
 *
 * <br />
 *
 * This function retrieves the event description.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_get_description(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_release
 * @desc > **FMOD Function:** [Studio::EventInstance::release](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_release)
 *
 * <br />
 *
 * This function marks the event instance for release.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_release(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_is_valid
 * @desc > **FMOD Function:** [Studio::EventInstance::isValid](https://www.fmod.com/docs/2.02/api/studio-api-eventinstance.html#studio_eventinstance_isvalid)
 *
 * <br />
 *
 * This function checks that the EventInstance reference is valid.
 * 
 * @param {real} event_instance_ref A reference to an EventInstance.
 * @returns {real}
 * @func_end
 */
function fmod_studio_event_instance_is_valid(event_instance_ref) {}

// FMOD Studio System

/**
 * @func fmod_studio_system_create
 * @desc > **FMOD Function:** [Studio::System::create](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_create)
 *
 * <br />
 *
 * This is the FMOD Studio System creation function.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_create() {}


/**
 * @func fmod_studio_system_init
 * @desc > **FMOD Function:** [Studio::System::initialize](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_initialize)
 *
 * <br />
 *
 * This function initializes the Studio System.
 * 
 * @param {real} max_channels
 * @param {real} studio_flags
 * @param {real} core_flags
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_init(max_channels, studio_flags, core_flags) {}


/**
 * @func fmod_studio_system_release
 * @desc > **FMOD Function:** [Studio::System::release](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_release)
 *
 * <br />
 *
 * This function shuts down and frees the Studio System object.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_release() {}


/**
 * @func fmod_studio_system_update
 * @desc > **FMOD Function:** [Studio::System::update](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_update)
 *
 * <br />
 *
 * This function updates the FMOD Studio System.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_update() {}


/**
 * @func fmod_studio_system_flush_commands
 * @desc > **FMOD Function:** [Studio::System::flushCommands](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_flushcommands)
 *
 * <br />
 *
 * This function blocks until all pending commands have been executed.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_flush_commands() {}


/**
 * @func fmod_studio_system_flush_sample_loading
 * @desc > **FMOD Function:** [Studio::System::flushSampleLoading](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_flushsampleloading)
 *
 * <br />
 *
 * This function blocks until all sample loading and unloading has completed.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_flush_sample_loading() {}


/**
 * @func fmod_studio_system_load_bank_custom
 * @desc > **FMOD Function:** [Studio::System::loadBankCustom](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_loadbankcustom)
 *
 * <br />
 *
 * This function loads the metadata of a Studio bank using custom read callbacks.
 * 
 * @param {real} flags
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_load_bank_custom(flags) {}


/**
 * @func fmod_studio_system_load_bank_file
 * @desc > **FMOD Function:** [Studio::System::loadBankFile](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_loadbankfile)
 *
 * <br />
 *
 * This function loads the metadata of a Studio bank from file.
 * 
 * @param {string} filename
 * @param {real} flags
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_load_bank_file(filename, flags) {}


/**
 * @func fmod_studio_system_load_bank_memory
 * @desc > **FMOD Function:** [Studio::System::loadBankMemory](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_loadbankmemory)
 *
 * <br />
 *
 * This function loads the metadata of a Studio bank from memory.
 * 
 * @param {real} buff_data
 * @param {real} length
 * @param {constant.FMOD_STUDIO_LOAD_MEMORY_MODE} mode
 * @param {constant.FMOD_STUDIO_LOAD_BANK} flags
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_load_bank_memory(buff_data, length, mode, flags) {}


/**
 * @func fmod_studio_system_unload_all
 * @desc > **FMOD Function:** [Studio::System::unloadAll](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_unloadall)
 *
 * <br />
 *
 * This function unloads all currently loaded banks.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_unload_all() {}


/**
 * @func fmod_studio_system_get_bank
 * @desc > **FMOD Function:** [Studio::System::getBank](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getbank)
 *
 * <br />
 *
 * This function retrieves a loaded bank.
 * 
 * @param {string} path
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bank(path) {}


/**
 * @func fmod_studio_system_get_bank_by_id
 * @desc > **FMOD Function:** [Studio::System::getBankByID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getbankbyid)
 *
 * <br />
 *
 * This function retrieves a loaded bank.
 * 
 * @param {string} guid_str
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bank_by_id(guid_str) {}


/**
 * @func fmod_studio_system_get_bank_count
 * @desc > **FMOD Function:** [Studio::System::getBankCount](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getbankcount)
 *
 * <br />
 *
 * This function retrieves the number of loaded banks.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bank_count() {}


/**
 * @func fmod_studio_system_get_bank_list
 * @desc > **FMOD Function:** [Studio::System::getBankList](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getbanklist)
 *
 * <br />
 *
 * This function retrieves the loaded Banks.
 * 
 * @returns {array[real]}
 * @func_end
 */
function fmod_studio_system_get_bank_list() {}


/**
 * @func fmod_studio_system_set_listener_attributes
 * @desc > **FMOD Function:** [Studio::System::setListenerAttributes](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setlistenerattributes)
 *
 * <br />
 *
 * This function sets the 3D attributes of the listener.
 * 
 * @param {real} listener_index
 * @param {struct.Fmod3DAttributes} attributes
 * @param {struct.FmodVector} attenuation
 * @func_end
 */
function fmod_studio_system_set_listener_attributes(listener_index, attributes, attenuation) {}


/**
 * @func fmod_studio_system_get_listener_attributes
 * @desc > **FMOD Function:** [Studio::System::getListenerAttributes](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getlistenerattributes)
 *
 * <br />
 *
 * This function retrieves listener 3D attributes.
 * 
 * @param {real} listener_index
 * @returns {struct.FmodStudioListenerAttributes}
 * @func_end
 */
function fmod_studio_system_get_listener_attributes(listener_index) {}


/**
 * @func fmod_studio_system_set_listener_weight
 * @desc > **FMOD Function:** [Studio::System::setListenerWeight](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setlistenerweight)
 *
 * <br />
 *
 * This function sets the listener weighting.
 * 
 * @param {real} listener_index
 * @param {real} weight
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_set_listener_weight(listener_index, weight) {}


/**
 * @func fmod_studio_system_get_listener_weight
 * @desc > **FMOD Function:** [Studio::System::getListenerWeight](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getlistenerweight)
 *
 * <br />
 *
 * This function retrieves listener weighting.
 * 
 * @param {real} listener_index
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_listener_weight(listener_index) {}


/**
 * @func fmod_studio_system_set_num_listeners
 * @desc > **FMOD Function:** [Studio::System::setNumListeners](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setnumlisteners)
 *
 * <br />
 *
 * This function sets the number of listeners in the 3D sound scene.
 * 
 * @param {real} num
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_set_num_listeners(num) {}


/**
 * @func fmod_studio_system_get_num_listeners
 * @desc > **FMOD Function:** [Studio::System::getNumListeners](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getnumlisteners)
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
 * @desc > **FMOD Function:** [Studio::System::getBus](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getbus)
 *
 * <br />
 *
 * This function retrieves a loaded bus.
 * 
 * @param {string} path
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bus(path) {}


/**
 * @func fmod_studio_system_get_bus_by_id
 * @desc > **FMOD Function:** [Studio::System::getBusByID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getbusbyid)
 *
 * <br />
 *
 * This function retrieves a loaded bus by its ID.
 * 
 * @param {string} guid
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_bus_by_id(guid) {}


/**
 * @func fmod_studio_system_get_event
 * @desc > **FMOD Function:** [Studio::System::getEvent](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getevent)
 *
 * <br />
 *
 * This function retrieves an EventDescription.
 * 
 * @param {string} path
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_event(path) {}


/**
 * @func fmod_studio_system_get_event_by_id
 * @desc > **FMOD Function:** [Studio::System::getEventByID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_geteventbyid)
 *
 * <br />
 *
 * This function retrieves an EventDescription.
 * 
 * @param {string} guid_str
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_event_by_id(guid_str) {}


/**
 * @func fmod_studio_system_get_parameter_by_id
 * @desc > **FMOD Function:** [Studio::System::getParameterByID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getparameterbyid)
 *
 * <br />
 *
 * This function retrieves a global parameter value by unique identifier.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id
 * @func_end
 */
function fmod_studio_system_get_parameter_by_id(parameter_id) {}


/**
 * @func fmod_studio_system_set_parameter_by_id
 * @desc > **FMOD Function:** [Studio::System::setParameterByID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setparameterbyid)
 *
 * <br />
 *
 * This function sets a global parameter value by unique identifier.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id
 * @param {real} value
 * @param {bool} ignore_seek_speed
 * @func_end
 */
function fmod_studio_system_set_parameter_by_id(parameter_id, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_set_parameter_by_id_with_label
 * @desc > **FMOD Function:** [Studio::System::setParameterByIDWithLabel](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setparameterbyidwithlabel)
 *
 * <br />
 *
 * This function sets a global parameter value by unique identifier, looking up the value label.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id
 * @param {string} label
 * @param {bool} ignore_seek_speed
 * @func_end
 */
function fmod_studio_system_set_parameter_by_id_with_label(parameter_id, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_get_parameter_by_name
 * @desc > **FMOD Function:** [Studio::System::getParameterByName](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getparameterbyname)
 *
 * <br />
 *
 * This function retrieves a global parameter value by name.
 * 
 * @param {string} name
 * @returns {struct.FmodStudioParameter}
 * @func_end
 */
function fmod_studio_system_get_parameter_by_name(name) {}


/**
 * @func fmod_studio_system_set_parameter_by_name
 * @desc > **FMOD Function:** [Studio::System::setParameterByName](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setparameterbyname)
 *
 * <br />
 *
 * This function sets a global parameter value by name.
 * 
 * @param {string} name
 * @param {real} value
 * @param {real} ignore_seek_speed
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_set_parameter_by_name(name, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_set_parameter_by_name_with_label
 * @desc > **FMOD Function:** [Studio::System::setParameterByNameWithLabel](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setparameterbynamewithlabel)
 *
 * <br />
 *
 * This function sets a global parameter value by name, looking up the value label.
 * 
 * @param {string} name
 * @param {string} label
 * @param {real} ignore_seek_speed
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_set_parameter_by_name_with_label(name, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_get_parameter_description_by_name
 * @desc > **FMOD Function:** [Studio::System::getParameterDescriptionByName](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getparameterdescriptionbyname)
 *
 * <br />
 *
 * This function retrieves a global parameter by name or path.
 * 
 * @param {string} name
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_system_get_parameter_description_by_name(name) {}


/**
 * @func fmod_studio_system_get_parameter_description_by_id
 * @desc > **FMOD Function:** [Studio::System::getParameterDescriptionByID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getparameterdescriptionbyid)
 *
 * <br />
 *
 * This function retrieves a global parameter by ID.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id
 * @returns {struct.FmodStudioParameterDescription}
 * @func_end
 */
function fmod_studio_system_get_parameter_description_by_id(parameter_id) {}


/**
 * @func fmod_studio_system_get_parameter_description_count
 * @desc > **FMOD Function:** [Studio::System::getParameterDescriptionCount](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getparameterdescriptioncount)
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
 * @desc > **FMOD Function:** [Studio::System::getParameterDescriptionList](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getparameterdescriptionlist)
 *
 * <br />
 *
 * This function retrieves a list of global parameters.
 * 
 * @returns {array[struct.FmodStudioParameterDescription]}
 * @func_end
 */
function fmod_studio_system_get_parameter_description_list() {}


/**
 * @func fmod_studio_system_get_parameter_label_by_name
 * @desc > **FMOD Function:** [Studio::System::getParameterLabelByName](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getparameterlabelbyname)
 *
 * <br />
 *
 * This function retrieves a global parameter label by name or path.
 * 
 * @param {string} name
 * @param {real} labelindex
 * @returns {string}
 * @func_end
 */
function fmod_studio_system_get_parameter_label_by_name(name, labelindex) {}


/**
 * @func fmod_studio_system_get_parameter_label_by_id
 * @desc > **FMOD Function:** [Studio::System::getParameterLabelByID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getparameterlabelbyid)
 *
 * <br />
 *
 * This function retrieves a global parameter label by ID.
 * 
 * @param {struct.FmodStudioParameterId} parameter_id
 * @param {real} label_index
 * @returns {string}
 * @func_end
 */
function fmod_studio_system_get_parameter_label_by_id(parameter_id, label_index) {}


/**
 * @func fmod_studio_system_get_vca
 * @desc > **FMOD Function:** [Studio::System::getVCA](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getvca)
 *
 * <br />
 *
 * This function retrieves a loaded VCA.
 * 
 * @param {string} path
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_vca(path) {}


/**
 * @func fmod_studio_system_get_vca_by_id
 * @desc > **FMOD Function:** [Studio::System::getVCAByID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getvcabyid)
 *
 * <br />
 *
 * This function retrieves a loaded VCA.
 * 
 * @param {string} guid_str
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_vca_by_id(guid_str) {}


/**
 * @func fmod_studio_system_set_advanced_settings
 * @desc > **FMOD Function:** [Studio::System::setAdvancedSettings](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setadvancedsettings)
 *
 * <br />
 *
 * This function sets advanced settings.
 * 
 * @param {struct.FmodStudioAdvancedSettings} settings
 * @func_end
 */
function fmod_studio_system_set_advanced_settings(settings) {}


/**
 * @func fmod_studio_system_get_advanced_settings
 * @desc > **FMOD Function:** [Studio::System::getAdvancedSettings](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getadvancedsettings)
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
 * @desc > **FMOD Function:** [Studio::System::startCommandCapture](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_startcommandcapture)
 *
 * <br />
 *
 * This function starts recording Studio commands to a file.
 * 
 * @param {string} filename
 * @param {real} flags
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_start_command_capture(filename, flags) {}


/**
 * @func fmod_studio_system_stop_command_capture
 * @desc > **FMOD Function:** [Studio::System::stopCommandCapture](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_stopcommandcapture)
 *
 * <br />
 *
 * This function stops recording Studio commands.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_stop_command_capture() {}


/**
 * @func fmod_studio_system_load_command_replay
 * @desc > **FMOD Function:** [Studio::System::loadCommandReplay](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_loadcommandreplay)
 *
 * <br />
 *
 * This function loads a command replay.
 * 
 * @param {string} filename
 * @param {real} flags
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_load_command_replay(filename, flags) {}


/**
 * @func fmod_studio_system_get_buffer_usage
 * @desc > **FMOD Function:** [Studio::System::getBufferUsage](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getbufferusage)
 *
 * <br />
 *
 * This function retrieves buffer usage information.
 * 
 * @returns {struct.FmodStudioBufferUsage}
 * @func_end
 */
function fmod_studio_system_get_buffer_usage() {}


/**
 * @func fmod_studio_system_reset_buffer_usage
 * @desc > **FMOD Function:** [Studio::System::resetBufferUsage](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_resetbufferusage)
 *
 * <br />
 *
 * This function resets memory buffer usage statistics.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_reset_buffer_usage() {}


/**
 * @func fmod_studio_system_get_cpu_usage
 * @desc > **FMOD Function:** [Studio::System::getCPUUsage](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getcpuusage)
 *
 * <br />
 *
 * This function retrieves the amount of CPU used for different parts of the Studio engine.
 * 
 * @returns {struct.FmodStudioCPUUsage}
 * @func_end
 */
function fmod_studio_system_get_cpu_usage() {}


/**
 * @func fmod_studio_system_get_memory_usage
 * @desc > **FMOD Function:** [Studio::System::getMemoryUsage](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getmemoryusage)
 *
 * <br />
 *
 * This function retrieves memory usage statistics.
 * 
 * @returns {struct.FmodStudioMemoryUsage}
 * @func_end
 */
function fmod_studio_system_get_memory_usage() {}


/**
 * @func fmod_studio_system_set_callback
 * @desc > **FMOD Function:** [Studio::System::setCallback](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setcallback)
 *
 * <br />
 *
 * This function sets a callback for the FMOD Studio System.
 * 
 * @param {real} type
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_set_callback(type) {}


/**
 * @func fmod_studio_system_set_user_data
 * @desc > **FMOD Function:** [Studio::System::setUserData](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_setuserdata)
 *
 * <br />
 *
 * This function sets the user data.
 * 
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_set_user_data(data) {}


/**
 * @func fmod_studio_system_get_user_data
 * @desc > **FMOD Function:** [Studio::System::getUserData](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getuserdata)
 *
 * <br />
 *
 * This function retrieves the user data.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_user_data() {}


/**
 * @func fmod_studio_system_get_sound_info
 * @desc > **FMOD Function:** [Studio::System::getSoundInfo](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getsoundinfo)
 *
 * <br />
 *
 * This function retrieves information for loading a sound from the audio table.
 * 
 * @param {string} key
 * @returns {struct.FmodStudioSoundInfo}
 * @func_end
 */
function fmod_studio_system_get_sound_info(key) {}


/**
 * @func fmod_studio_system_get_core_system
 * @desc > **FMOD Function:** [Studio::System::getCoreSystem](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_getcoresystem)
 *
 * <br />
 *
 * This function retrieves the Core System.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_studio_system_get_core_system() {}


/**
 * @func fmod_studio_system_lookup_id
 * @desc > **FMOD Function:** [Studio::System::lookupID](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_lookupid)
 *
 * <br />
 *
 * This function retrieves the ID for a bank, event, snapshot, bus or VCA.
 * 
 * @param {string} path
 * @returns {string}
 * @func_end
 */
function fmod_studio_system_lookup_id(path) {}


/**
 * @func fmod_studio_system_lookup_path
 * @desc > **FMOD Function:** [Studio::System::lookupPath](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_lookuppath)
 *
 * <br />
 *
 * This function retrieves the path for a bank, event, snapshot, bus or VCA.
 * 
 * @param {string} str_guid
 * @returns {string}
 * @func_end
 */
function fmod_studio_system_lookup_path(str_guid) {}


/**
 * @func fmod_studio_system_is_valid
 * @desc > **FMOD Function:** [Studio::System::isValid](https://www.fmod.com/docs/2.02/api/studio-api-system.html#studio_system_isvalid)
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
 * @desc > **FMOD Function:** [Studio::VCA::setVolume](https://www.fmod.com/docs/2.02/api/studio-api-vca.html#studio_vca_setvolume)
 *
 * <br />
 *
 * This function sets the volume level.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @param {real} volume
 * @returns {real}
 * @func_end
 */
function fmod_studio_vca_set_volume(vca_ref, volume) {}


/**
 * @func fmod_studio_vca_get_volume
 * @desc > **FMOD Function:** [Studio::VCA::getVolume](https://www.fmod.com/docs/2.02/api/studio-api-vca.html#studio_vca_getvolume)
 *
 * <br />
 *
 * This function retrieves the volume level.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @returns {real}
 * @func_end
 */
function fmod_studio_vca_get_volume(vca_ref) {}


/**
 * @func fmod_studio_vca_get_id
 * @desc > **FMOD Function:** [Studio::VCA::getID](https://www.fmod.com/docs/2.02/api/studio-api-vca.html#studio_vca_getid)
 *
 * <br />
 *
 * This function retrieves the GUID.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @returns {string}
 * @func_end
 */
function fmod_studio_vca_get_id(vca_ref) {}


/**
 * @func fmod_studio_vca_get_path
 * @desc > **FMOD Function:** [Studio::VCA::getPath](https://www.fmod.com/docs/2.02/api/studio-api-vca.html#studio_vca_getpath)
 *
 * <br />
 *
 * This function retrieves the path.
 * 
 * @param {real} vca_ref A reference to a vca.
 * @returns {string}
 * @func_end
 */
function fmod_studio_vca_get_path(vca_ref) {}


/**
 * @func fmod_studio_vca_is_valid
 * @desc > **FMOD Function:** [Studio::VCA::isValid](https://www.fmod.com/docs/2.02/api/studio-api-vca.html#studio_vca_isvalid)
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
 * @desc > **FMOD Function:** [System_Create](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_create)
 *
 * <br />
 *
 * This function creates an instance of the FMOD system.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_create() {}


/**
 * @func fmod_system_select
 * @desc GM-specific function
 * 
 * @param {real} system_ref A reference to a system.
 * @returns {real}
 * @func_end
 */
function fmod_system_select(system_ref) {}


/**
 * @func fmod_system_count
 * @desc GM-specific function
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_count() {}


/**
 * @func fmod_system_init
 * @desc > **FMOD Function:** [System::init](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_init)
 *
 * <br />
 *
 * This function initializes the system object and prepares FMOD for playback.
 * 
 * @param {real} max_channels
 * @param {real} flags
 * @returns {real}
 * @func_end
 */
function fmod_system_init(max_channels, flags) {}


/**
 * @func fmod_system_release
 * @desc > **FMOD Function:** [System::release](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_release)
 *
 * <br />
 *
 * This function closes and frees this object and its resources.
 * 
 * @param {real} system_ref A reference to a system.
 * @returns {real}
 * @func_end
 */
function fmod_system_release(system_ref) {}


/**
 * @func fmod_system_close
 * @desc > **FMOD Function:** [System::close](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_close)
 *
 * <br />
 *
 * This function close the connections to the output and returns to an uninitialized state without releasing the object.
 * 
 * @param {real} system_ref A reference to a system.
 * @returns {real}
 * @func_end
 */
function fmod_system_close(system_ref) {}


/**
 * @func fmod_system_update
 * @desc > **FMOD Function:** [System::update](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_update)
 *
 * <br />
 *
 * This function updates the FMOD system.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_update() {}


/**
 * @func fmod_system_mixer_suspend
 * @desc > **FMOD Function:** [System::mixerSuspend](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_mixersuspend)
 *
 * <br />
 *
 * This function suspends the mixer thread and relinquishes usage of audio hardware while maintaining internal state.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_mixer_suspend() {}


/**
 * @func fmod_system_mixer_resume
 * @desc > **FMOD Function:** [System::mixerResume](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_mixerresume)
 *
 * <br />
 *
 * This function resumes the mixer thread and reacquires access to audio hardware.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_mixer_resume() {}


/**
 * @func fmod_system_set_output
 * @desc > **FMOD Function:** [System::setOutput](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setoutput)
 *
 * <br />
 *
 * This function sets the type of output interface used to run the mixer.
 * 
 * @param {real} output
 * @returns {real}
 * @func_end
 */
function fmod_system_set_output(output) {}


/**
 * @func fmod_system_get_output
 * @desc > **FMOD Function:** [System::getOutput](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getoutput)
 *
 * <br />
 *
 * This function retrieves the type of output interface used to run the mixer.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_output() {}


/**
 * @func fmod_system_get_num_drivers
 * @desc > **FMOD Function:** [System::getNumDrivers](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getnumdrivers)
 *
 * <br />
 *
 * This function retrieves the number of output drivers available for the selected output type.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_num_drivers() {}


/**
 * @func fmod_system_get_driver_info
 * @desc > **FMOD Function:** [System::getDriverInfo](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getdriverinfo)
 *
 * <br />
 *
 * This function retrieves identification information about a sound device specified by its index, and specific to the selected output mode.
 * 
 * @param {real} driver_index
 * @returns {struct.FmodSystemDriverInfo}
 * @func_end
 */
function fmod_system_get_driver_info(driver_index) {}


/**
 * @func fmod_system_set_driver
 * @desc > **FMOD Function:** [System::setDriver](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setdriver)
 *
 * <br />
 *
 * This function sets the output driver for the selected output type.
 * 
 * @param {real} driver
 * @returns {real}
 * @func_end
 */
function fmod_system_set_driver(driver) {}


/**
 * @func fmod_system_get_driver
 * @desc > **FMOD Function:** [System::getDriver](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getdriver)
 *
 * <br />
 *
 * This function retrieves the output driver for the selected output type.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_driver() {}


/**
 * @func fmod_system_set_software_channels
 * @desc > **FMOD Function:** [System::setSoftwareChannels](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setsoftwarechannels)
 *
 * <br />
 *
 * This function sets the maximum number of software mixed Channels possible.
 * 
 * @param {real} software_channels
 * @returns {real}
 * @func_end
 */
function fmod_system_set_software_channels(software_channels) {}


/**
 * @func fmod_system_get_software_channels
 * @desc > **FMOD Function:** [System::getSoftwareChannels](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getsoftwarechannels)
 *
 * <br />
 *
 * This function retrieves the maximum number of software mixed Channels possible.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_software_channels() {}


/**
 * @func fmod_system_set_software_format
 * @desc > **FMOD Function:** [System::setSoftwareFormat](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setsoftwareformat)
 *
 * <br />
 *
 * This function sets the output format for the software mixer.
 * 
 * @param {real} sample_rate
 * @param {real} speaker_mode
 * @param {real} num_raw_speakers
 * @returns {real}
 * @func_end
 */
function fmod_system_set_software_format(sample_rate, speaker_mode, num_raw_speakers) {}


/**
 * @func fmod_system_get_software_format
 * @desc > **FMOD Function:** [System::getSoftwareFormat](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getsoftwareformat)
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
 * @desc > **FMOD Function:** [System::setDSPBufferSize](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setdspbuffersize)
 *
 * <br />
 *
 * This function sets the buffer size for the FMOD software mixing engine.
 * 
 * @param {real} buff_size
 * @param {real} num_buffers
 * @returns {real}
 * @func_end
 */
function fmod_system_set_dsp_buffer_size(buff_size, num_buffers) {}


/**
 * @func fmod_system_get_dsp_buffer_size
 * @desc > **FMOD Function:** [System::getDSPBufferSize](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getdspbuffersize)
 *
 * <br />
 *
 * This function retrieves the buffer size settings for the FMOD software mixing engine.
 * 
 * @returns {struct.FmodSystemDSPBufferSize}
 * @func_end
 */
function fmod_system_get_dsp_buffer_size() {}


/**
 * @func fmod_system_set_stream_buffer_size
 * @desc > **FMOD Function:** [System::setStreamBufferSize](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setstreambuffersize)
 *
 * <br />
 *
 * This function sets the default file buffer size for newly opened streams.
 * 
 * @param {real} file_buffer_size
 * @param {real} file_buffer_size_type
 * @returns {real}
 * @func_end
 */
function fmod_system_set_stream_buffer_size(file_buffer_size, file_buffer_size_type) {}


/**
 * @func fmod_system_get_stream_buffer_size
 * @desc > **FMOD Function:** [System::getStreamBufferSize](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getstreambuffersize)
 *
 * <br />
 *
 * This function retrieves the default file buffer size for newly opened streams.
 * 
 * @returns {struct.FmodSystemStreamBufferSize}
 * @func_end
 */
function fmod_system_get_stream_buffer_size() {}


/**
 * @func fmod_system_set_advanced_settings
 * @desc > **FMOD Function:** [System::setAdvancedSettings](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setadvancedsettings)
 *
 * <br />
 *
 * This function sets advanced settings for the system object, typically to allow adjusting of settings related to resource usage or audio quality.
 * 
 * @param {struct.FmodSystemAdvancedSettings} settings
 * @func_end
 */
function fmod_system_set_advanced_settings(settings) {}


/**
 * @func fmod_system_get_advanced_settings
 * @desc > **FMOD Function:** [System::getAdvancedSettings](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getadvancedsettings)
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
 * @desc > **FMOD Function:** [System::setSpeakerPosition](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setspeakerposition)
 *
 * <br />
 *
 * This function sets the position of the specified speaker for the current speaker mode.
 * 
 * @param {real} speaker
 * @param {real} x
 * @param {real} y
 * @param {real} active
 * @returns {real}
 * @func_end
 */
function fmod_system_set_speaker_position(speaker, x, y, active) {}


/**
 * @func fmod_system_get_speaker_position
 * @desc > **FMOD Function:** [System::getSpeakerPosition](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getspeakerposition)
 *
 * <br />
 *
 * This function retrieves the position of the specified speaker for the current speaker mode.
 * 
 * @param {constant.FMOD_SPEAKER} speaker
 * @returns {struct.FmodSystemSpeakerPosition}
 * @func_end
 */
function fmod_system_get_speaker_position(speaker) {}


/**
 * @func fmod_system_set_3d_settings
 * @desc > **FMOD Function:** [System::set3DSettings](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_set3dsettings)
 *
 * <br />
 *
 * This function sets the global doppler scale, distance factor and log roll-off scale for all 3D sound in FMOD.
 * 
 * @param {real} doppler_scale
 * @param {real} distance_factor
 * @param {real} rolloff_scale
 * @returns {real}
 * @func_end
 */
function fmod_system_set_3d_settings(doppler_scale, distance_factor, rolloff_scale) {}


/**
 * @func fmod_system_get_3d_settings
 * @desc > **FMOD Function:** [System::get3DSettings](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_get3dsettings)
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
 * @desc > **FMOD Function:** [System::set3DNumListeners](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_set3dnumlisteners)
 *
 * <br />
 *
 * This function sets the number of 3D 'listeners' in the 3D sound scene.
 * 
 * @param {real} num
 * @returns {real}
 * @func_end
 */
function fmod_system_set_3d_num_listeners(num) {}


/**
 * @func fmod_system_get_3d_num_listeners
 * @desc > **FMOD Function:** [System::get3DNumListeners](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_get3dnumlisteners)
 *
 * <br />
 *
 * This function retrieves the number of 3D listeners.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_3d_num_listeners() {}


/**
 * @func fmod_system_set_3d_rolloff_callback
 * @desc > **FMOD Function:** [System::set3DRolloffCallback](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_set3drolloffcallback)
 *
 * <br />
 *
 * This function sets a callback to allow custom calculation of distance attenuation.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_set_3d_rolloff_callback() {}


/**
 * @func fmod_system_set_network_proxy
 * @desc > **FMOD Function:** [System::setNetworkProxy](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setnetworkproxy)
 *
 * <br />
 *
 * This function set a proxy server to use for all subsequent internet connections.
 * 
 * You should specify the proxy in `host:port` format e.g. `www.fmod.com:8888` (defaults to port 80 if no port is specified).
 * 
 * Basic authentication is supported using `user:password@host:port` format e.g. `bob:sekrit123@www.fmod.com:8888`
 * 
 * @param {string} proxy The proxy server URL. (as a [UTF-8 string](https://www.fmod.com/docs/2.02/api/glossary.html#string-format))
 * @func_end
 */
function fmod_system_set_network_proxy(proxy) {}


/**
 * @func fmod_system_get_network_proxy
 * @desc > **FMOD Function:** [System::getNetworkProxy](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getnetworkproxy)
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
 * @desc > **FMOD Function:** [System::setNetworkTimeout](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setnetworktimeout)
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
 * @desc > **FMOD Function:** [System::getNetworkTimeout](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getnetworktimeout)
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
 * @desc > **FMOD Function:** [System::getVersion](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getversion)
 *
 * <br />
 *
 * This function retrieves the FMOD version number.
 * 
 * The FMOD version is a 32 bit hexadecimal value formatted as 16:8:8, with the upper 16 bits being the product version, the middle 8 bits being the major version and the bottom 8 bits being the minor version. For example a value of 0x00010203 is equal to 1.02.03.
 * 
 * [[Note: You can compare this against the `FMOD_VERSION` macro to make sure header and runtime library versions match.]]
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_version() {}


/**
 * @func fmod_system_get_channels_playing
 * @desc > **FMOD Function:** [System::getChannelsPlaying](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getchannelsplaying)
 *
 * <br />
 *
 * This function retrieves the number of currently playing Channels.
 * 
 * For differences between real and virtual voices see the [Virtual Voices](https://www.fmod.com/docs/2.02/api/white-papers-virtual-voices.html) guide for more information.
 * 
 * @returns {struct.FmodSystemChannelsPlaying}
 * @func_end
 */
function fmod_system_get_channels_playing() {}


/**
 * @func fmod_system_get_cpu_usage
 * @desc > **FMOD Function:** [System::getCPUUsage](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getcpuusage)
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
 * @desc > **FMOD Function:** [System::getFileUsage](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getfileusage)
 *
 * <br />
 *
 * This function retrieves information about file reads.
 * 
 * @returns {struct.FmodSystemFileUsage}
 * @func_end
 */
function fmod_system_get_file_usage() {}


/**
 * @func fmod_system_get_default_mix_matrix
 * @desc > **FMOD Function:** [System::getDefaultMixMatrix](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getdefaultmixmatrix)
 *
 * <br />
 *
 * This function retrieves the default matrix used to convert from one speaker mode to another.
 * 
 * @param {real} source_speaker_mode
 * @param {real} target_speaker_mode
 * @param {real} matrix_hop
 * @returns {real}
 * @func_end
 */
function fmod_system_get_default_mix_matrix(source_speaker_mode, target_speaker_mode, matrix_hop) {}


/**
 * @func fmod_system_get_speaker_mode_channels
 * @desc > **FMOD Function:** [System::getSpeakerModeChannels](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getspeakermodechannels)
 *
 * <br />
 *
 * This function retrieves the channel count for a given speaker mode.
 * 
 * @param {real} mode
 * @returns {real}
 * @func_end
 */
function fmod_system_get_speaker_mode_channels(mode) {}


/**
 * @func fmod_system_create_sound
 * @desc > **FMOD Function:** [System::createSound](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_createsound)
 *
 * <br />
 *
 * This function loads a sound into memory, opens it for streaming or sets it up for callback based sounds.
 * 
 * @param {string|buffer} name_or_buff
 * @param {constant.FMOD_MODE} mode
 * @param {struct.FmodSystemCreateSoundExInfo} extra
 * @func_end
 */
function fmod_system_create_sound(name_or_data, mode, buff_extra) {}


/**
 * @func fmod_system_create_stream
 * @desc > **FMOD Function:** [System::createStream](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_createstream)
 *
 * <br />
 *
 * This function opens a sound for streaming.
 * 
 * @param {string|buffer} name_or_buff
 * @param {constant.FMOD_MODE} mode
 * @param {struct.FmodSystemCreateSoundExInfo} extra
 * @func_end
 */
function fmod_system_create_stream(name_or_data, mode, buff_extra) {}


/**
 * @func fmod_system_create_dsp
 * @desc > **FMOD Function:** [System::createDSP](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_createdsp)
 *
 * <br />
 *
 * This function creates a DSP object given a plugin description structure.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_create_dsp() {}


/**
 * @func fmod_system_create_dsp_by_type
 * @desc > **FMOD Function:** [System::createDSPByType](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_createdspbytype)
 *
 * <br />
 *
 * This function creates a DSP object given a built-in type index.
 * 
 * @param {real} type
 * @returns {real}
 * @func_end
 */
function fmod_system_create_dsp_by_type(type) {}


/**
 * @func fmod_system_create_channel_group
 * @desc > **FMOD Function:** [System::createChannelGroup](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_createchannelgroup)
 *
 * <br />
 *
 * This function creates a ChannelGroup object.
 * 
 * @param {string} name
 * @returns {real}
 * @func_end
 */
function fmod_system_create_channel_group(name) {}


/**
 * @func fmod_system_create_sound_group
 * @desc > **FMOD Function:** [System::createSoundGroup](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_createsoundgroup)
 *
 * <br />
 *
 * This function creates a SoundGroup object.
 * 
 * @param {string} name
 * @returns {real}
 * @func_end
 */
function fmod_system_create_sound_group(name) {}


/**
 * @func fmod_system_create_reverb_3d
 * @desc > **FMOD Function:** [System::createReverb3D](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_createreverb3d)
 *
 * <br />
 *
 * This function creates a 'virtual reverb' object. This object reacts to 3D location and morphs the reverb environment based on how close it is to the reverb object's center.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_create_reverb_3d() {}


/**
 * @func fmod_system_play_sound
 * @desc > **FMOD Function:** [System::playSound](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_playsound)
 *
 * <br />
 *
 * This function plays a Sound on a Channel.
 * 
 * @param {real} sound_ref A reference to a sound.
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @param {real} pause
 * @returns {real}
 * @func_end
 */
function fmod_system_play_sound(sound_ref, channel_group_ref, pause) {}


/**
 * @func fmod_system_play_dsp
 * @desc > **FMOD Function:** [System::playDSP](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_playdsp)
 *
 * <br />
 *
 * This function plays a DSP along with any of its inputs on a Channel.
 * 
 * @param {real} dsp_ref A reference to a DSP.
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @param {real} pause
 * @returns {real}
 * @func_end
 */
function fmod_system_play_dsp(dsp_ref, channel_group_ref, pause) {}


/**
 * @func fmod_system_get_channel
 * @desc > **FMOD Function:** [System::getChannel](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getchannel)
 *
 * <br />
 *
 * This function retrieves a handle to a Channel by ID.
 * 
 * @param {real} index
 * @returns {real}
 * @func_end
 */
function fmod_system_get_channel(index) {}


/**
 * @func fmod_system_get_master_channel_group
 * @desc > **FMOD Function:** [System::getMasterChannelGroup](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getmasterchannelgroup)
 *
 * <br />
 *
 * This function retrieves the master ChannelGroup that all sounds ultimately route to.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_master_channel_group() {}


/**
 * @func fmod_system_get_master_sound_group
 * @desc > **FMOD Function:** [System::getMasterSoundGroup](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getmastersoundgroup)
 *
 * <br />
 *
 * This function retrieves the default SoundGroup, where all sounds are placed when they are created.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_master_sound_group() {}


/**
 * @func fmod_system_set_3d_listener_attributes
 * @desc > **FMOD Function:** [System::set3DListenerAttributes](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_set3dlistenerattributes)
 *
 * <br />
 *
 * This function sets the position, velocity and orientation of the specified 3D sound listener.
 * 
 * @param {real} listener_index
 * @param {struct.FmodVector} position
 * @param {struct.FmodVector} velocity
 * @param {struct.FmodVector} forward
 * @param {struct.FmodVector} up
 * @func_end
 */
function fmod_system_set_3d_listener_attributes(listener_index, position, velocity, forward, up) {}


/**
 * @func fmod_system_get_3d_listener_attributes
 * @desc > **FMOD Function:** [System::get3DListenerAttributes](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_get3dlistenerattributes)
 *
 * <br />
 *
 * This function retrieves the position, velocity and orientation of the specified 3D sound listener.
 * 
 * @param {real} listener_index
 * @returns {struct.Fmod3DAttributes}
 * @func_end
 */
function fmod_system_get_3d_listener_attributes(listener_index) {}


/**
 * @func fmod_system_set_reverb_properties
 * @desc > **FMOD Function:** [System::setReverbProperties](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setreverbproperties)
 *
 * <br />
 *
 * This function sets parameters for the global reverb environment.
 * 
 * @param {real} reverb_instance_index
 * @param {struct.FmodReverbProperties} properties
 * @func_end
 */
function fmod_system_set_reverb_properties(instance_index, properties) {}


/**
 * @func fmod_system_get_reverb_properties
 * @desc > **FMOD Function:** [System::getReverbProperties](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getreverbproperties)
 *
 * <br />
 *
 * This function retrieves the current reverb environment for the specified reverb instance.
 * 
 * @param {real} reverb_instance_index
 * @returns {struct.FmodReverbProperties}
 * @func_end
 */
function fmod_system_get_reverb_properties(instance_index) {}


/**
 * @func fmod_system_attach_channel_group_to_port
 * @desc > **FMOD Function:** [System::attachChannelGroupToPort](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_attachchannelgrouptoport)
 *
 * <br />
 *
 * This function connects the output of the specified ChannelGroup to an audio port on the output driver.
 * 
 * @param {real} port_type
 * @param {real} port_index
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @param {bool} pass_thru
 * @func_end
 */
function fmod_system_attach_channel_group_to_port(port_type, port_index, channel_group_ref, pass_thru) {}


/**
 * @func fmod_system_detach_channel_group_from_port
 * @desc > **FMOD Function:** [System::detachChannelGroupFromPort](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_detachchannelgroupfromport)
 *
 * <br />
 *
 * This function disconnects the output of the specified ChannelGroup from an audio port on the output driver.
 * 
 * @param {real} channel_group_ref A reference to a ChannelGroup.
 * @returns {real}
 * @func_end
 */
function fmod_system_detach_channel_group_from_port(channel_group_ref) {}


/**
 * @func fmod_system_get_record_num_drivers
 * @desc > **FMOD Function:** [System::getRecordNumDrivers](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getrecordnumdrivers)
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
 * @desc > **FMOD Function:** [System::getRecordDriverInfo](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getrecorddriverinfo)
 *
 * <br />
 *
 * This function retrieves identification information about an audio device specified by its index, and specific to the output mode.
 * 
 * @param {real} record_driver_index
 * @returns {struct.FmodSystemRecordDriverInfo}
 * @func_end
 */
function fmod_system_get_record_driver_info(recording_device_index) {}


/**
 * @func fmod_system_get_record_position
 * @desc > **FMOD Function:** [System::getRecordPosition](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getrecordposition)
 *
 * <br />
 *
 * This function retrieves the current recording position of the record buffer in PCM samples.
 * 
 * @param {real} device_index
 * @returns {real}
 * @func_end
 */
function fmod_system_get_record_position(device_index) {}


/**
 * @func fmod_system_record_start
 * @desc > **FMOD Function:** [System::recordStart](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_recordstart)
 *
 * <br />
 *
 * This function starts the recording engine recording to a pre-created Sound object.
 * 
 * @param {real} device_index
 * @param {real} sound_ref A reference to a sound.
 * @param {real} loop
 * @returns {real}
 * @func_end
 */
function fmod_system_record_start(device_index, sound_ref, loop) {}


/**
 * @func fmod_system_record_stop
 * @desc > **FMOD Function:** [System::recordStop](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_recordstop)
 *
 * <br />
 *
 * This function stops the recording engine from recording to a pre-created Sound object.
 * 
 * @param {real} device_index
 * @returns {real}
 * @func_end
 */
function fmod_system_record_stop(device_index) {}


/**
 * @func fmod_system_is_recording
 * @desc > **FMOD Function:** [System::isRecording](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_isrecording)
 *
 * <br />
 *
 * This function retrieves the state of the FMOD recording API, i.e. if it is currently recording or not.
 * 
 * @param {real} device_index
 * @returns {real}
 * @func_end
 */
function fmod_system_is_recording(device_index) {}


/**
 * @func fmod_system_create_geometry
 * @desc > **FMOD Function:** [System::createGeometry](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_creategeometry)
 *
 * <br />
 *
 * This is a geometry creation function. This function will create a base geometry object which can then have polygons added to it.
 * 
 * @param {real} max_polygons
 * @param {real} max_vertices
 * @returns {real}
 * @func_end
 */
function fmod_system_create_geometry(max_polygons, max_vertices) {}


/**
 * @func fmod_system_set_geometry_settings
 * @desc > **FMOD Function:** [System::setGeometrySettings](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setgeometrysettings)
 *
 * <br />
 *
 * This function sets the maximum world size for the geometry engine for performance / precision reasons.
 * 
 * @param {real} max_world_size
 * @returns {real}
 * @func_end
 */
function fmod_system_set_geometry_settings(max_world_size) {}


/**
 * @func fmod_system_get_geometry_settings
 * @desc > **FMOD Function:** [System::getGeometrySettings](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getgeometrysettings)
 *
 * <br />
 *
 * This function retrieves the maximum world size for the geometry engine.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_get_geometry_settings() {}


/**
 * @func fmod_system_load_geometry
 * @desc > **FMOD Function:** [System::loadGeometry](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_loadgeometry)
 *
 * <br />
 *
 * This function creates a geometry object from a block of memory which contains pre-saved geometry data.
 * 
 * @param {buffer} buff
 * @param {real} length
 * @returns {real}
 * @func_end
 */
function fmod_system_load_geometry(buff, length) {}


/**
 * @func fmod_system_get_geometry_occlusion
 * @desc > **FMOD Function:** [System::getGeometryOcclusion](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getgeometryocclusion)
 *
 * <br />
 *
 * This function calculates geometry occlusion between a listener and a sound source.
 * 
 * @returns {struct.FmodSystemGeometryOcclusion}
 * @func_end
 */
function fmod_system_get_geometry_occlusion() {}


/**
 * @func fmod_system_lock_dsp
 * @desc > **FMOD Function:** [System::lockDSP](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_lockdsp)
 *
 * <br />
 *
 * This is a mutual exclusion function to lock the FMOD DSP engine (which runs asynchronously in another thread), so that it will not execute.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_lock_dsp() {}


/**
 * @func fmod_system_unlock_dsp
 * @desc > **FMOD Function:** [System::unlockDSP](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_unlockdsp)
 *
 * <br />
 *
 * This is a mutual exclusion function to unlock the FMOD DSP engine (which runs asynchronously in another thread) and let it continue executing.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_system_unlock_dsp() {}


/**
 * @func fmod_system_set_callback
 * @desc > **FMOD Function:** [System::setCallback](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setcallback)
 *
 * <br />
 *
 * This function sets the callback for System level notifications.
 * 
 * @param {real} type
 * @returns {real}
 * @func_end
 */
function fmod_system_set_callback(type) {}


/**
 * @func fmod_system_set_user_data
 * @desc > **FMOD Function:** [System::setUserData](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_setuserdata)
 *
 * <br />
 *
 * This function sets a user value associated with a System object.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @param {real} data
 * @returns {real}
 * @func_end
 */
function fmod_system_set_user_data(channel_control_ref, data) {}


/**
 * @func fmod_system_get_user_data
 * @desc > **FMOD Function:** [System::getUserData](https://www.fmod.com/docs/2.02/api/core-api-system.html#system_getuserdata)
 *
 * <br />
 *
 * This function retrieves a user value associated with a System object.
 * 
 * @param {real} channel_control_ref A reference to a ChannelControl.
 * @returns {real}
 * @func_end
 */
function fmod_system_get_user_data(channel_control_ref) {}

// Miscellaneous

/**
 * @func fmod_fetch_callbacks
 * @desc This function fetches the FMOD callbacks.
 * 
 * @param {buffer} buffer
 * @param {real} length
 * @returns {real}
 * @func_end
 */
function fmod_fetch_callbacks(buffer, length) {}


/**
 * @func fmod_last_result
 * @desc This function returns the result of the last call to any of FMOD's functions.
 * 
 * @returns {real}
 * @func_end
 */
function fmod_last_result() {}


/**
 * @module home
 * @title Home
 * @description This is the FMOD extension for GameMaker.
 * 
 * @section Guides
 * 
 * @section_end
 * 
 * @section FMOD Modules
 * @ref module.system
 * @ref module.channel
 * @ref module.channel_control
 * @ref module.channel_group
 * @ref module.DSP
 * @ref module.dsp_connection
 * @ref module.reverb_3d
 * @ref module.sound
 * @ref module.sound_group
 * @ref module.misc
 * @section_end
 * 
 * @section FMOD Studio Modules
 * @ref module.bank
 * @ref module.bus
 * @ref module.command_replay
 * @ref module.event_description
 * @ref module.event_instance
 * @ref module.studio_system
 * @ref module.studio_vca
 * @ref module.channel
 * @section_end
 * 
 * @module_end
 */

/**
 * @module channel
 * @title Channel
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @desc 
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
 * @title FMOD Studio VCA
 * @desc 
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
 * @title FMOD System
 * @desc 
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
 * @desc 
 * 
 * @section_func
 * @ref fmod_fetch_callbacks
 * @ref fmod_last_result
 * @ref fmod_memory_get_stats
 * @section_end
 * 
 * @module_end
 */
