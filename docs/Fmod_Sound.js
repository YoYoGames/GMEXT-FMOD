
/**
 * @func fmod_sound_get_format_multiplatform
 * @desc Returns format information about the sound.
 * @param {double} index Identifier of the Sound 
 * @returns {struct} {type:int,format:int,channels:int,bits:int}
 * @func_end
*/
function fmod_sound_get_format_multiplatform(index) {}


/**
 * @func fmod_sound_get_length
 * @desc Retrieves the length using the specified time unit.
 * @param {double} index Identifier of the Sound 
 * @param {double} lengthtype Time unit type to retrieve into length.
 * @returns {constant.FMOD_TIMEUNIT}
 * @func_end
*/
function fmod_sound_get_length(index_,lengthtype_) {}


/**
 * @func fmod_sound_get_num_tags
 * @desc Retrieves the number of metadata tags.
 * @param {double} index Identifier of the Sound 
 * @returns {struct} {numtags:int,numtagsupdated:int}
 * @func_end
*/
function fmod_sound_get_num_tags(index_,tag_index,buff_data_ ) {}


/**
 * @func fmod_sound_get_tag
 * @desc Retrieves a metadata tag.
 * @param {double} index Identifier of the Sound 
 * @param {double} tag_index Index into the tag list as restricted by name.
 * @param {buffer} buff_data Retrieve the data of the tag
 * @returns {struct} {name:string,type:FMOD_TAGTYPE,update:bool,data_len:int,data_type:FMOD_TAGDATATYPE}
 * @func_end
*/
function fmod_sound_get_tag(index_,tag_index_,buff_return_,buff_data_) {}


/**
 * @func fmod_sound_set_3d_cone_settings
 * @desc Sets the angles and attenuation levels of a 3D cone shape, for simulated occlusion which is based on direction.
 * @param {double} index Identifier of the Sound 
 * @param {double} insideconeangle Inside cone angle. This is the angle spread within which the sound is unattenuated.
 * @param {double} outsideconeangle Outside cone angle. This is the angle spread outside of which the sound is attenuated to its outsidevolume.
 * @param {double} outsidevolume Cone outside volume.
 * @func_end
*/
function fmod_sound_set_3d_cone_settings(index,insideconeangle,outsideconeangle,outsidevolume) {}


/**
 * @func fmod_sound_get_3d_cone_settings
 * @desc Retrieves the inside and outside angles of the 3D projection cone and the outside volume.
 * @param {double} index Identifier of the Sound 
 * @returns {double} {inside_cone_angle:double,out_side_cone_angle:double,out_sid_evolume:double}
 * @func_end
*/
function fmod_sound_get_3d_cone_settings(index_,buff_return_) {}


/**
 * @func fmod_sound_set_3d_custom_rolloff
 * @desc Sets a custom roll-off shape for 3D distance attenuation.
 * @param {double} index Identifier of the Sound 
 * @param {array} points Array of points sorted by distance, where x = distance and y = volume from 0 to 1. z should be set to 0. Pass null or equivalent to disable custom roll-off. 
 * @func_end
*/
function fmod_sound_set_3d_custom_rolloff(index_,points) {}


/**
 * @func fmod_sound_get_3d_custom_rolloff_multiplatform
 * @desc Retrieves the current custom roll-off shape for 3D distance attenuation.
 * @param {double} index Identifier of the Sound 
 * @returns {array} array of FMOD_VECTOR
 * @func_end
*/
function fmod_sound_get_3d_custom_rolloff_multiplatform(index_,buff_return_) {}


/**
 * @func fmod_sound_set_3d_min_max_distance
 * @desc Sets the minimum and maximum audible distance for a 3D sound.
 * @param {double} index Identifier of the Sound 
 * @param {double} min The sound's minimum volume distance, or the distance that the sound has no attenuation due to 3d positioning.
 * @param {double} max The sound's maximum volume distance, or the distance that no additional attenuation will occur. See below for notes on different maxdistance behaviors.
 * @func_end
*/
function fmod_sound_set_3d_min_max_distance(index,min,max) {}


/**
 * @func fmod_sound_get_3d_min_max_distance_multiplatform
 * @desc Retrieve the minimum and maximum audible distance for a 3D sound.
 * @param {double} index Identifier of the Sound 
 * @returns {struct} {min:double max:double}
 * @func_end
*/
function fmod_sound_get_3d_min_max_distance_multiplatform(index_,min,max) {}


/**
 * @func fmod_sound_set_defaults
 * @desc Sets a sound's default playback attributes.
 * @param {double} index Identifier of the Sound 
 * @param {double} frequency Default playback frequency.
 * @param {double} priority Default priority where 0 is the highest priority.
 * @func_end
*/
function fmod_sound_set_defaults(index_,frequency_,priority_) {}


/**
 * @func fmod_sound_get_defaults
 * @desc Retrieves a sound's default playback attributes.
 * @param {double} index Identifier of the Sound.
 * @returns {struct} {frequency:double,priority:int}
 * @func_end
*/
function fmod_sound_get_defaults(index_) {}


/**
 * @func fmod_sound_set_mode
 * @desc Sets or alters the mode of a sound.
 * @param {double} index Identifier of the Sound 
 * @param {constant.FMOD_MODE} mode Mode bits to set.
 * @func_end
*/
function fmod_sound_set_mode(index,mode) {}


/**
 * @func fmod_sound_get_mode
 * @desc Retrieves the mode of a sound.
 * @param {double} index Identifier of the Sound 
 * @returns {constant.FMOD_MODE}
 * @func_end
*/
function fmod_sound_get_mode(index) {}


/**
 * @func fmod_sound_set_loop_count
 * @desc Sets the sound to loop a specified number of times before stopping if the playback mode is set to looping.
 * @param {double} index Identifier of the Sound 
 * @param {double} count Number of times to loop before final playback where -1 is always loop. 0 means no loop.
 * @func_end
*/
function fmod_sound_set_loop_count(index,count) {}


/**
 * @func fmod_sound_get_loop_count
 * @desc  Retrieves the sound's loop count.
 * @param {double} index Identifier of the Sound 
 * @returns {double}
 * @func_end
*/
function fmod_sound_get_loop_count(index) {}


/**
 * @func fmod_sound_set_loop_points
 * @desc Sets the loop points within a sound.
 * @param {double} index Identifier of the Sound 
 * @param {double} loopstart Loop start point.
 * @param {FMOD_TIMEUNIT} loopstarttype Time format of loopstart.
 * @param {double} loopend Loop end point.
 * @param {FMOD_TIMEUNIT} loopendtype Time format of loopendtype.
 * @func_end
*/
function fmod_sound_set_loop_points(index,loopstart,loopstarttype,loopend,loopendtype) {}


/**
 * @func fmod_sound_get_loop_points
 * @desc Retrieves the loop points for a sound.
 * @param {double} index Identifier of the Sound 
 * @param {FMOD_TIMEUNIT} loopstarttype Time format of loopstart.
 * @param {FMOD_TIMEUNIT} loopendtype Time format of loopendtype.
 * @returns {struct} {loop_start:int,loop_end:int}
 * @func_end
*/
function fmod_sound_get_loop_points(index_,loopstarttype_,loopendtype_) {}


/**
 * @func fmod_sound_set_sound_group
 * @desc Moves the sound from its existing SoundGroup to the specified sound group.
 * @param {double} index Identifier of the Sound 
 * @param {double} sound_group Sound group to move the sound to
 * @func_end
*/
function fmod_sound_set_sound_group(index,sound_group) {}


/**
 * @func fmod_sound_get_sound_group
 * @desc Retrieves the sound's current sound group.
 * @param {double} index Identifier of the Sound 
 * @returns {double}
 * @func_end
*/
function fmod_sound_get_sound_group(index) {}


/**
 * @func fmod_sound_get_num_sub_sounds
 * @desc Retrieves the number of subsounds stored within a sound.
 * @param {double} index Identifier of the Sound 
 * @returns {double}
 * @func_end
*/
function fmod_sound_get_num_sub_sounds(index) {}


/**
 * @func fmod_sound_get_sub_sound
 * @desc Retrieves a handle to a Sound object that is contained within the parent sound.
 * @param {double} index Identifier of the Sound 
 * @param {double} subsound_index Index of the subsound.
 * @returns {double}
 * @func_end
*/
function fmod_sound_get_sub_sound(index,subsound_index) {}


/**
 * @func fmod_sound_get_sub_sound_parent
 * @desc Retrieves the parent Sound object that contains this subsound.
 * @param {double} index Identifier of the Sound 
 * @returns {double}
 * @func_end
*/
function fmod_sound_get_sub_sound_parent(index_) {}


/**
 * @func fmod_sound_get_open_state
 * @desc Retrieves the state a sound is in after being opened with the non blocking flag, or the current state of the streaming buffer.
 * @param {double} index Identifier of the Sound 
 * @returns {struct} {open_state:int,percent_buffered:int,starving:bool,disk_busy:bool}
 * @func_end
*/
function fmod_sound_get_open_state(index_,buff_return_) {}


/**
 * @func fmod_sound_read_data
 * @desc Reads data from an opened sound to a specified buffer, using FMOD's internal codecs.
 * @param {double} index Identifier of the Sound 
 * @param {buffer} buff Buffer to read decoded data into.
 * @param {double} lenght Amount of data to read into buffer.
 * @param {double} offset Actual amount of data read. May differ to length.
 * @func_end
*/
function fmod_sound_read_data(index,buff,lenght,offset) {}


/**
 * @func fmod_sound_seek_data
 * @desc Seeks a sound for use with data reading, using FMOD's internal codecs.
 * @param {double} index Identifier of the Sound 
 * @param {double} pcm Seek Offset.
 * @func_end
*/
function fmod_sound_seek_data(index,pcm) {}


/**
 * @func fmod_sound_lock
 * @desc Gives access to a portion or all the sample data of a sound for direct manipulation.
 * @param {buffer} offset Offset into the sound's buffer to be retrieved.
 * @param {buffer} length Length of the data required to be retrieved. If offset + length exceeds the length of the sample buffer, ptr2 and len2 will be valid.
 * @param {buffer} buff1 First part of the locked data.
 * @param {buffer} buff2 Second part of the locked data if the offset + length has exceeded the length of the sample buffer.
 * @returns {struct} {len1:int,	len2:int}
 * @func_end
*/
function fmod_sound_lock(buff_args,buff1,buff2,buff_return_) {}


/**
 * @func fmod_sound_unlock
 * @desc Finalizes a previous sample data lock and submits it back to the Sound object.
 * @param {double} index Identifier of the Sound 
 * @param {buffer} buff1 First part of the locked data.
 * @param {buffer} buff2 Second part of the locked data.
 * @param {int} len1 Length of buff1.
 * @param {int} len2 Length of buff2
 * @func_end
*/
function fmod_sound_unlock(index,buff1,buff2,len1,len2) {}


/**
 * @func fmod_sound_get_music_num_channels
 * @desc Gets the number of music channels inside a MOD/S3M/XM/IT/MIDI file.
 * @param {double} index Identifier of the Sound 
 * @returns {double}
 * @func_end
*/
function fmod_sound_get_music_num_channels(index_) {}


/**
 * @func fmod_sound_set_music_channel_volume
 * @desc Sets the volume of a MOD/S3M/XM/IT/MIDI music channel volume.
 * @param {double} index Identifier of the Sound 
 * @param {string} channel_name MOD/S3M/XM/IT/MIDI music subchannel to set a linear volume for.
 * @param {double} volumen Volume of the channel.
 * @func_end
*/
function fmod_sound_set_music_channel_volume(index_,channel_name,volumen_) {}


/**
 * @func fmod_sound_get_music_channel_volume
 * @desc Retrieves the volume of a MOD/S3M/XM/IT/MIDI music channel volume.
 * @param {double} index Identifier of the Sound 
 * @param {string} channel_name MOD/S3M/XM/IT/MIDI music subchannel to retrieve the volume for.
 * @func_end
*/
function fmod_sound_get_music_channel_volume(index_,channel_name) {}


/**
 * @func fmod_sound_set_music_speed
 * @desc Sets the relative speed of MOD/S3M/XM/IT/MIDI music.
 * @param {double} index Identifier of the Sound 
 * @param {double} speed Speed of the song.
 * @returns {double}
 * @func_end
*/
function fmod_sound_set_music_speed(index_,speed_) {}


/**
 * @func fmod_sound_get_music_speed
 * @desc Gets the relative speed of MOD/S3M/XM/IT/MIDI music.
 * @param {double} index Identifier of the Sound 
 * @returns {double}
 * @func_end
*/
function fmod_sound_get_music_speed(index_) {}


/**
 * @func fmod_sound_get_sync_point
 * @desc Retrieve a sync point.
 * @param {double} index Identifier of the Sound 
 * @param {FMOD_SYNCPOINT} point_index Sync point. 
 * @param {FMOD_TIMEUNIT} offsettype Format of offset.
 * @returns {double} {name:string, offset:int}
 * @func_end
*/
function fmod_sound_get_sync_point(index_,point_index_,offsettype_,buff_return_) {}


/**
 * @func fmod_sound_get_num_sync_points
 * @desc Retrieves the number of sync points stored within a sound.
 * @param {double} index Identifier of the Sound 
 * @returns {double}
 * @func_end
*/
function fmod_sound_get_num_sync_points(index_) {}


/**
 * @func fmod_sound_add_sync_point
 * @desc Adds a sync point at a specific time within the sound.
 * @param {double} index Identifier of the Sound 
 * @param {double} offset Offset value.
 * @param {constant.FMOD_TIMEUNIT} offsettype_ offset unit type.
 * @param {string} name Sync point name.
 * @func_end
*/
function fmod_sound_add_sync_point(index_,offset_,offsettype_,name) {}


/**
 * @func fmod_sound_delete_sync_point
 * @desc Deletes a sync point within the sound.
 * @param {double} index Identifier of the Sound 
 * @param {constant.FMOD_SYNCPOINT} point_index_ Sync point.
 * @func_end
*/
function fmod_sound_delete_sync_point(index_,point_index_) {}


/**
 * @func fmod_sound_release
 * @desc Frees a sound object.
 * @param {double} index Identifier of the Sound 
 * @func_end
*/
function fmod_sound_release(index) {}


/**
 * @module Sound
 * @title Sound
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func

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

 * @section_end
 * @module_end
 */
 
 