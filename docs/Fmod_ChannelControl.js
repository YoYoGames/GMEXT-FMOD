
/**
 * @func fmod_channel_control_is_playing
 * @desc Retrieves the playing state.
 * @param {string} channel_control_name identifier of the channel or channel group
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_is_playing(channel_control_name) {}


/**
 * @func fmod_channel_control_stop
 * @desc Stops the Channel (or all Channels in nested ChannelGroups) from playing.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @func_end
*/
function fmod_channel_control_stop(channel_control_name) {}


/**
 * @func fmod_channel_control_set_paused
 * @desc Sets the paused state.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} paused Paused state. True = playback halted. False = playback active.
 * @func_end
*/
function fmod_channel_control_set_paused(channel_control_name,paused) {}


/**
 * @func fmod_channel_control_get_paused
 * @desc Retrieves the paused state.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_paused(channel_control_name) {}


/**
 * @func fmod_channel_control_set_mode
 * @desc Sets the playback mode that controls how this object behaves.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {constant.FMOD_MODE} mode Playback mode. More than one mode can be set at once by combining them with the OR operator.
 * @func_end
*/
function fmod_channel_control_set_mode(channel_control_name,mode) {}


/**
 * @func fmod_channel_control_get_mode
 * @desc Retrieves the playback mode bits that control how this object behaves.
 * @param {string} channel_control_name identifier of the channel or channel group
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_mode(channel_control_name) {}


/**
 * @func fmod_channel_control_set_pitch
 * @desc Sets the relative pitch / playback rate.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} pitch Pitch value where 0.5 represents half pitch (one octave down), 1.0 represents unmodified pitch and 2.0 represents double pitch (one octave up).
 * @func_end
*/
function fmod_channel_control_set_pitch(channel_control_name,pitch) {}


/**
 * @func fmod_channel_control_get_pitch
 * @desc Retrieves the relative pitch / playback rate.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_pitch(channel_control_name) {}


/**
 * @func fmod_channel_control_get_audibility
 * @desc Retrieves an estimation of the output volume.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_audibility(channel_control_name) {}


/**
 * @func fmod_channel_control_set_volume
 * @desc Sets the volume level.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} volumen Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @func_end
*/
function fmod_channel_control_set_volume(channel_control_name,volumen) {}


/**
 * @func fmod_channel_control_get_volume
 * @desc Retrieves the volume level.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_volume(channel_control_name) {}


/**
 * @func fmod_channel_control_set_volume_ramp
 * @desc Sets whether volume changes are ramped or instantaneous.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} ramp_ 
 * @func_end
*/
function fmod_channel_control_set_volume_ramp(channel_control_name,ramp_) {}


/**
 * @func fmod_channel_control_get_volume_ramp
 * @desc Retrieves whether volume changes are ramped or instantaneous.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} ramp Ramp state. True = volume change is ramped. False = volume change is instantaeous.
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_volume_ramp(channel_control_name,ramp) {}


/**
 * @func fmod_channel_control_set_mute
 * @desc Sets the mute state.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} mute Mute state. True = silent. False = audible. 
 * @func_end
*/
function fmod_channel_control_set_mute(channel_control_name,mute) {}


/**
 * @func fmod_channel_control_get_mute
 * @desc Retrieves the mute state.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_mute(channel_control_name) {}


/**
 * @func fmod_channel_control_set_3d_attributes
 * @desc Sets the 3D position and velocity used to apply panning, attenuation and doppler.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {struct.FMOD_VECTOR} pos
 * @param {struct.FMOD_VECTOR} vel
 * @func_end
*/
function fmod_channel_control_set_3d_attributes(channel_control_name,pos,vel) {}


/**
 * @func fmod_channel_control_get_3d_attributes
 * @desc Retrieves the 3D position and velocity used to apply panning, attenuation and doppler.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {struct} {pos:struct.FMOD_VECTOR vel:struct.FMOD_VECTOR}
 * @func_end
*/
function fmod_channel_control_get_3d_attributes(channel_control_name,buff_return_) {}


/**
 * @func fmod_channel_control_set_3d_cone_orientation
 * @desc Sets the orientation of a 3D cone shape, used for simulated occlusion.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {struct.FMOD_VECTOR} orientation Normalized orientation vector, which represents the direction of the sound cone.
 * @func_end
*/
function fmod_channel_control_set_3d_cone_orientation(channel_control_name,buff_args_) {}


/**
 * @func fmod_channel_control_get_3d_cone_orientation
 * @desc Retrieves the orientation of a 3D cone shape, used for simulated occlusion.
 * @param {string} channel_control_name identifier of the channel or channel group  
 * @returns {struct.FMOD_VECTOR}
 * @func_end
*/
function fmod_channel_control_get_3d_cone_orientation(channel_control_name,buff_return_) {}


/**
 * @func fmod_channel_control_set_3d_cone_settings
 * @desc Sets the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} insideconeangle_ 
 * @param {double} outsideconeangle_ 
 * @param {double} outsidevolume_ 
 * @func_end
*/
function fmod_channel_control_set_3d_cone_settings(channel_control_name,insideconeangle_,outsideconeangle_,outsidevolume_) {}


/**
 * @func fmod_channel_control_get_3d_cone_settings
 * @desc Retrieves the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {struct.FMOD_VECTOR} 
 * @func_end
*/
function fmod_channel_control_get_3d_cone_settings(channel_control_name,buff_return_) {}


/**
 * @func fmod_channel_control_set_3d_custom_rolloff
 * @desc Sets a custom roll-off shape for 3D distance attenuation.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {array} points array of struct.FMOD_VECTOR
 * @func_end
*/
function fmod_channel_control_set_3d_custom_rolloff(channel_control_name,buff_args_) {}


/**
 * @func fmod_channel_control_get_3d_custom_rolloff
 * @desc Retrieves the current custom roll-off shape for 3D distance attenuation.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {array}
 * @func_end
*/
function fmod_channel_control_get_3d_custom_rolloff(channel_control_name,buff_return_) {}


/**
 * @func fmod_channel_control_set_3d_distance_filter
 * @desc Sets an override value for the 3D distance filter.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {bool} custom Override automatic distance filtering and use customLevel instead.
 * @param {int} Attenuation factor where 1 represents no attenuation and 0 represents complete attenuation.
 * @param {double} Center frequency of the band-pass filter used to simulate distance attenuation, 0 for default.
 * @func_end
*/
function fmod_channel_control_set_3d_distance_filter(channel_control_name,custom,customLevel,centerFreq) {}


/**
 * @func fmod_channel_control_get_3d_distance_filter
 * @desc Retrieves the override values for the 3D distance filter.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} custom_ 
 * @returns {struct} {custom:bool,custom_level:double,center_freq:double}
 * @func_end
*/
function fmod_channel_control_get_3d_distance_filter(channel_control_name,custom_,buff_return_) {}


/**
 * @func fmod_channel_control_set_3d_doppler_level
 * @desc Sets the amount by which doppler is scaled.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} level Doppler scale where 0 represents no doppler, 1 represents natural doppler and 5 represents exaggerated doppler.
 * @func_end
*/
function fmod_channel_control_set_3d_doppler_level(channel_control_name,level_) {}


/**
 * @func fmod_channel_control_get_3d_doppler_level
 * @desc Retrieves the amount by which doppler is scaled.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_3d_doppler_level(channel_control_name) {}


/**
 * @func fmod_channel_control_set_3d_level
 * @desc Sets the blend between 3D panning and 2D panning.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} level 3D pan level where 0 represents panning/attenuating solely with 2D panning functions and 1 represents solely 3D.
 * @func_end
*/
function fmod_channel_control_set_3d_level(channel_control_name,level) {}


/**
 * @func fmod_channel_control_get_3d_level
 * @desc Retrieves the blend between 3D panning and 2D panning.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_3d_level(channel_control_name) {}


/**
 * @func fmod_channel_control_set_3d_min_max_distance
 * @desc Sets the minimum and maximum distances used to calculate the 3D roll-off attenuation.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} min Distance from the source where attenuation begins.
 * @param {double} max Distance from the source where attenuation ends.
 * @func_end
*/
function fmod_channel_control_set_3d_min_max_distance(channel_control_name,min,max) {}


/**
 * @func fmod_channel_control_get_3d_min_max_distance
 * @desc Retrieves the minimum and maximum distances used to calculate the 3D roll-off attenuation.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {buffer} buff_return_ 
 * @returns {struct} {min:double max:double}
 * @func_end
*/
function fmod_channel_control_get_3d_min_max_distance(channel_control_name,buff_return_) {}


/**
 * @func fmod_channel_control_set_3d_occlusion
 * @desc Sets the 3D attenuation factors for the direct and reverb paths.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} directocclusion Occlusion factor for the direct path where 0 represents no occlusion and 1 represents full occlusion.
 * @param {double} reverbocclusion Occlusion factor for the reverb path where 0 represents no occlusion and 1 represents full occlusion.
 * @func_end
*/
function fmod_channel_control_set_3d_occlusion(channel_control_name,directocclusion_,reverbocclusion_) {}


/**
 * @func fmod_channel_control_get_3d_occlusion
 * @desc Retrieves the 3D attenuation factors for the direct and reverb paths.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {struct} {directocclusion:double, reverbocclusion:double}
 * @func_end
*/
function fmod_channel_control_get_3d_occlusion(channel_control_name,buff_return_) {}


/**
 * @func fmod_channel_control_set_3d_spread
 * @desc Sets the spread of a 3D sound in speaker space.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} angle_ Angle over which the sound is spread.
 * @func_end
*/
function fmod_channel_control_set_3d_spread(channel_control_name,angle_) {}


/**
 * @func fmod_channel_control_get_3d_spread
 * @desc Retrieves the spread of a 3D sound in speaker space.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_3d_spread(channel_control_name) {}


/**
 * @func fmod_channel_control_set_pan
 * @desc Sets the left/right pan level.	
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} pan Pan level where -1 represents full left, 0 represents center and 1 represents full right.
 * @func_end
*/
function fmod_channel_control_set_pan(channel_control_name,pan) {}


/**
 * @func fmod_channel_control_set_mix_levels_input
 * @desc Sets the incoming volume level for each channel of a multi-channel signal.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {array} levels Array of volume levels for each incoming channel. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
  * @func_end
*/
function fmod_channel_control_set_mix_levels_input(channel_control_name,levels) {}


/**
 * @func fmod_channel_control_set_mix_levels_output
 * @desc * @desc Sets the outgoing volume levels for each speaker. Volume level. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {array} frontleft Volume level for FMOD_SPEAKER_FRONT_LEFT.
 * @param {array} frontright Volume level for FMOD_SPEAKER_FRONT_RIGHT.
 * @param {array} center Volume level for FMOD_SPEAKER_FRONT_CENTER.
 * @param {array} lfe Volume level for FMOD_SPEAKER_LOW_FREQUENCY.
 * @param {array} surroundleft Volume level for FMOD_SPEAKER_SURROUND_LEFT.
 * @param {array} surroundright Volume level for FMOD_SPEAKER_SURROUND_RIGHT.
 * @param {array} backleft Volume level for FMOD_SPEAKER_BACK_LEFT. 
 * @param {array} backright Volume level for FMOD_SPEAKER_BACK_RIGHT.
 * @func_end
*/
function fmod_channel_control_set_mix_levels_output(buff_args_) {}


/**
 * @func fmod_channel_control_set_mix_matrix
 * @desc Sets a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {array} matrix Two dimensional array of volume levels in row-major order. Each row represents an output speaker, each column represents an input channel.
 * @param {int} outchannels Number of output channels (rows) in matrix.
 * @param {int} inchannels Number of input channels (columns) in matrix.
 * @param {int} inchannel_hop Width (total number of columns) in source matrix. A matrix element is referenced as 'outchannel * inchannel_hop + inchannel'.
 * @func_end
*/
function fmod_channel_control_set_mix_matrix(channel_control_name,buff_args_) {}


/**
 * @func fmod_channel_control_get_mix_matrix
 * @desc Retrieves a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} inchannel_hop TODO...........
 * @returns {struct} {matrix:array,outchannels:int,inchannels:int}
 * @func_end
*/
function fmod_channel_control_get_mix_matrix(channel_control_name,inchannel_hop_) {}


/**
 * @func fmod_channel_control_set_reverb_properties
 * @desc Sets the wet / send level for a particular reverb instance.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} instance Reverb instance index.
 * @param {double} wet Send level for the signal to the reverb. 0 = none, 1 = full. Negative level inverts the signal.
 * @func_end
*/
function fmod_channel_control_set_reverb_properties(channel_control_name,instance_,wet_) {}


/**
 * @func fmod_channel_control_get_reverb_properties
 * @desc Retrieves the wet / send level for a particular reverb instance.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} instance Reverb instance index.
 * @returns {double} 
 * @func_end
*/
function fmod_channel_control_get_reverb_properties(channel_control_name,instance_) {}


/**
 * @func fmod_channel_control_set_low_pass_gain
 * @desc Sets the gain of the dry signal when built in lowpass / distance filtering is applied.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} gain gain level where 0 represents silent (full filtering) and 1 represents full volume (no filtering).
 * @func_end
*/
function fmod_channel_control_set_low_pass_gain(channel_control_name,gain_) {}


/**
 * @func fmod_channel_control_get_low_Pass_gain
 * @desc Retrieves the gain of the dry signal when built in lowpass / distance filtering is applied.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_low_Pass_gain(channel_control_name,gain_) {}


/**
 * @func fmod_channel_control_add_dsp
 * @desc Adds a DSP unit to the specified index in the DSP chain.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} offset_index Offset into the DSP chain, see FMOD_CHANNELCONTROL_DSP_INDEX for special named offsets for 'head' and 'tail' and 'fader' units.
 * @param {double} index_dsps DSP unit to be added.
 * @func_end
*/
function fmod_channel_control_add_dsp(channel_control_name,offset_index_,index_dsp_) {}


/**
 * @func fmod_channel_control_remove_dsp
 * @desc Removes the specified DSP unit from the DSP chain.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} index_dsps unit to be removed.
 * @func_end
*/
function fmod_channel_control_remove_dsp(channel_control_name,index_dsp_) {}


/**
 * @func fmod_channel_control_get_num_dsps
 * @desc Retrieves the number of DSP units in the DSP chain.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_num_dsps(channel_control_name) {}


/**
 * @func fmod_channel_control_get_dsp
 * @desc Retrieves the DSP unit at the specified index in the DSP chain.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} index Offset into the DSP chain, see FMOD_CHANNELCONTROL_DSP_INDEX for special named offsets
 * @returns {double}
 * @func_end
*/
function fmod_channel_control_get_dsp(channel_control_name,index) {}


/**
 * @func fmod_channel_control_set_dsp_index
 * @desc Sets the index in the DSP chain of the specified DSP.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {double} dsp_index DSP unit that exists in the DSP chain
 * @param {double} chain_index Offset into the DSP chain to move the DSP to, see FMOD_CHANNELCONTROL_DSP_INDEX for special named offsets.
 * @func_end
*/
function fmod_channel_control_set_dsp_index(channel_control_name,dsp_index,chain_index) {}


/**
 * @func fmod_channel_control_get_dsp_clock
 * @desc Retrieves the DSP clock values at this point in time.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {struct} {dsp_clock:uint64,parent_clock:uint64}
 * @func_end
*/
function fmod_channel_control_get_dsp_clock(channel_control_name,buff_return_) {}


/**
 * @func fmod_channel_control_set_delay
 * @desc Sets a sample accurate start (and/or stop) time relative to the parent ChannelGroup DSP clock.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {uint64} dspclock_start DSP clock of the parent ChannelGroup to audibly start playing sound at.
 * @param {uint64} dspclock_end DSP clock of the parent ChannelGroup to audibly stop playing sound at.
 * @param {bool} stopchannels True: When dspclock_end is reached, behaves like ChannelControl::stop has been called. False: When dspclock_end is reached, behaves like ChannelControl::setPaused has been called, a subsequent dspclock_start allows it to resume.
 * @func_end
*/
function fmod_channel_control_set_delay(channel_control_name,dspclock_start,dspclock_end,stopchannels) {}


/**
 * @func fmod_channel_control_get_delay_multiplatform
 * @desc Retrieves a sample accurate start (and/or stop) time relative to the parent ChannelGroup DSP clock.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {struct} {dsp_clock_start:uint64,dsp_clock_end:uint64,stop_channels:bool}
 * @func_end
*/
function fmod_channel_control_get_delay_multiplatform(channel_control_name,buff_return_) {}


/**
 * @func fmod_channel_control_add_fade_point
 * @desc Adds a sample accurate fade point at a time relative to the parent ChannelGroup DSP clock.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {int64} dspclock DSP clock of the parent ChannelGroup to set the fade point volume.
 * @param {double} volume Volume level at the given dspclock. Values above 1.0 amplify the signal.
 * @func_end
*/
function fmod_channel_control_add_fade_point(channel_control_name,dspclock,volume) {}


/**
 * @func fmod_channel_control_set_fade_point_ramp
 * @desc Adds a volume ramp at the specified time in the future using fade points.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {int64} dspclock DSP clock of the parent ChannelGroup to set the fade point volume.
 * @param {double} volume Volume level at the given dspclock. Values above 1.0 amplify the signal.
 * @func_end
*/
function fmod_channel_control_set_fade_point_ramp(channel_control_name,dspclock,volume) {}


/**
 * @func fmod_channel_control_remove_fade_points
 * @desc  Removes all fade points between the two specified clock values (inclusive).
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @param {int64} dspclock_start DSP clock of the parent ChannelGroup at which to begin removing fade points.
 * @param {int64} dspclock_end DSP clock of the parent ChannelGroup at which to stop removing fade points.
 * @func_end
*/
function fmod_channel_control_remove_fade_points(channel_control_name,buff_args_) {}


/**
 * @func fmod_channel_control_get_fade_points
 * @desc Retrieves information about stored fade points.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @returns {struct} {points:array,points_volume:array,num_points:int}
 * @func_end
*/
function fmod_channel_control_get_fade_points(channel_control_name) {}


/**
 * @func fmod_channel_control_set_callback
 * @desc Sets the callback for ChannelControl level notifications.
 * @param {string} channel_control_name identifier of the channel or channel group 
 * @func_end
*/
function fmod_channel_control_set_callback(channel_control_name) {}






// MODULES

/**
 * @module ChannelControl
 * @title Channel Control
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
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
 * @ref fmod_channel_control_get_low_Pass_gain
 * @ref fmod_channel_control_add_dsp
 * @ref fmod_channel_control_remove_dsp
 * @ref fmod_channel_control_get_num_dsps
 * @ref fmod_channel_control_get_dsp
 * @ref fmod_channel_control_set_dsp_index
 * @ref fmod_channel_control_get_dsp_clock
 * @ref fmod_channel_control_set_delay
 * @ref fmod_channel_control_get_delay
 * @ref fmod_channel_control_add_fade_point
 * @ref fmod_channel_control_set_fade_point_ramp
 * @ref fmod_channel_control_remove_fade_points
 * @ref fmod_channel_control_get_fade_points
 * @ref fmod_channel_control_set_callback
 * @section_end
 * @module_end
 */
 
