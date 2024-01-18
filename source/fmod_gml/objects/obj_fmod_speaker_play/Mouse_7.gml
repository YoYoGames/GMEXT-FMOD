
var _channel_index = fmod_system_play_sound(sound_index,true)

var front_left = obj_fmod_speaker_front_left.enabled
var front_right = obj_fmod_speaker_front_right.enabled
var center = obj_fmod_speaker_center.enabled
var lfe = obj_fmod_speaker_lfe.enabled
var surround_left = obj_fmod_speaker_surround_left.enabled
var surround_right = obj_fmod_speaker_surround_right.enabled
var back_left = obj_fmod_speaker_back_left.enabled
var back_right = obj_fmod_speaker_back_right.enabled
fmod_channel_control_set_mix_levels_output(_channel_index, front_left, front_right, center, lfe, surround_left, surround_right, back_left, back_right);

fmod_channel_control_set_paused(_channel_index,false)
