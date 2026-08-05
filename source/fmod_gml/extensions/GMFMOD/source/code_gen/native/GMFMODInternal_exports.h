// ##### extgen :: Auto-generated file do not edit!! #####

#pragma once
#include "core/GMExtUtils.h"

GMEXPORT double __EXT_NATIVE__fmod_channel_set_frequency(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_get_frequency(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_set_priority(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_get_priority(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_set_position(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_get_position(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_set_channel_group(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_get_channel_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_set_loop_count(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_get_loop_count(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_set_loop_points(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_is_virtual(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_get_index(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_get_current_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_channel_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_system_create(char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_system_init(double max_channels, double flags);
GMEXPORT double __EXT_NATIVE__fmod_system_release(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_system_close(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_system_update();
GMEXPORT double __EXT_NATIVE__fmod_system_get_channel(double index, char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_system_get_master_channel_group(char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_system_set_output(double output);
GMEXPORT double __EXT_NATIVE__fmod_system_get_output();
GMEXPORT double __EXT_NATIVE__fmod_system_get_num_drivers();
GMEXPORT double __EXT_NATIVE__fmod_system_set_driver(double driver);
GMEXPORT double __EXT_NATIVE__fmod_system_get_driver();
GMEXPORT double __EXT_NATIVE__fmod_system_set_software_channels(double software_channels);
GMEXPORT double __EXT_NATIVE__fmod_system_get_software_channels();
GMEXPORT double __EXT_NATIVE__fmod_system_create_sound(char* name_or_data, double mode, char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_system_create_stream(char* name_or_data, double mode, char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_system_play_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_get_length(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_set_defaults(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_set_mode(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_get_mode(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_set_loop_count(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_get_loop_count(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_set_loop_points(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_set_3d_min_max_distance(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_set_3d_cone_settings(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_release(char* __arg_buffer, double __arg_buffer_length);
GMEXPORT double __EXT_NATIVE__fmod_sound_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length);

