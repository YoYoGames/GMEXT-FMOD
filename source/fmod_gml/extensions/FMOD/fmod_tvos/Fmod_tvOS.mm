
#import "Fmod_tvOS.h"

#include "Fmod_Tools.h"

extern "C" const char* extOptGetString(char* _ext, char* _opt);

@implementation Fmod_tvOS

bool gIsSuspended;
void gSuspendCallback(bool value)
{
    if(value)
        fmod_system_mixer_suspend();
    else
        fmod_system_mixer_resume();
    
}

- (id) init
{
    self = [super init];
    if (self!=nil)
    {
        //Handling Interruptions
        //https://www.fmod.com/docs/2.03/api/platforms-ios.html
        [[NSNotificationCenter defaultCenter] addObserverForName:AVAudioSessionInterruptionNotification object:nil queue:nil usingBlock:^(NSNotification *notification)
        {
            bool began = [[notification.userInfo valueForKey:AVAudioSessionInterruptionTypeKey] intValue] == AVAudioSessionInterruptionTypeBegan;

            if (began == gIsSuspended)
            {
                return;
            }
#if !TARGET_OS_TV
            if (@available(iOS 10.3, *))
            {
                if (began && [[notification.userInfo valueForKey:AVAudioSessionInterruptionWasSuspendedKey] boolValue])
                {
                    return;
                }
            }
#endif

            gIsSuspended = began;
            if (!began)
            {
                [[AVAudioSession sharedInstance] setActive:TRUE error:nil];
            }
            gSuspendCallback(began);

        }];

        [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidBecomeActiveNotification object:nil queue:nil usingBlock:^(NSNotification *notification)
        {
        #ifndef TARGET_OS_TV
            if (!gIsSuspended)
            {
                return;
            }
        #else
            gSuspendCallback(true);
        #endif
            NSError *errorMessage;
            if(![[AVAudioSession sharedInstance] setActive:TRUE error:&errorMessage])
            {
                NSLog(@"UIApplicationDidBecomeActiveNotification: AVAudioSession.setActive() failed: %@", errorMessage);
                return;
            }
            gSuspendCallback(false);

            gIsSuspended = false;
        }];
        
        
        
        // Configure the AVAudioSession
        AVAudioSession *session = [AVAudioSession sharedInstance];

        NSError *error = nil;
        BOOL success = NO;

        // Set the audio session category to PlayAndRecord with DefaultToSpeaker option
        success = [session setCategory:AVAudioSessionCategoryPlayback
                                withOptions:AVAudioSessionCategoryOptionAllowBluetooth |
                                            AVAudioSessionCategoryOptionAllowBluetoothA2DP |
                                            AVAudioSessionCategoryOptionAllowAirPlay
                                      error:&error];
        if (!success) {
            NSLog(@"Error setting category: %@", error.localizedDescription);
        }

        // Set the mode to Default (you can adjust this if needed)
        success = [session setMode:AVAudioSessionModeDefault error:&error];
        if (!success) {
            NSLog(@"Error setting mode: %@", error.localizedDescription);
        }

        // Set preferred sample rate to a standard value
        double rate = 24000.0;
        success = [session setPreferredSampleRate:rate error:&error];
        if (!success) {
            NSLog(@"Error setting preferred sample rate: %@", error.localizedDescription);
        }

        // Set preferred IO buffer duration
        double blockSize = 512.0 / rate; // Calculate buffer duration based on sample rate
        success = [session setPreferredIOBufferDuration:blockSize error:&error];
        if (!success) {
            NSLog(@"Error setting preferred IO buffer duration: %@", error.localizedDescription);
        }

        // Set preferred output number of channels to maximum available
        long maxChannels = [session maximumOutputNumberOfChannels];
        success = [session setPreferredOutputNumberOfChannels:maxChannels error:&error];
        if (!success) {
            NSLog(@"Error setting preferred output channels: %@", error.localizedDescription);
        }

        // Activate the audio session
        success = [session setActive:YES error:&error];
        if (!success) {
            NSLog(@"Error activating audio session: %@", error.localizedDescription);
        }
        
    }
    
    return self;
}

func double fmod_channel_set_frequency(double channel_ref, double frequency);
-(double) fmod_channel_set_frequency:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_set_frequency(arg0, arg1);
return _return;
}
func double fmod_channel_get_frequency(double channel_ref);
-(double) fmod_channel_get_frequency:(double) arg0 {
auto _return = (double) fmod_channel_get_frequency(arg0);
return _return;
}
func double fmod_channel_set_priority(double channel_ref, double priority);
-(double) fmod_channel_set_priority:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_set_priority(arg0, arg1);
return _return;
}
func double fmod_channel_get_priority(double channel_ref);
-(double) fmod_channel_get_priority:(double) arg0 {
auto _return = (double) fmod_channel_get_priority(arg0);
return _return;
}
func double fmod_channel_set_position(double channel_ref, double position, double time_unit);
-(double) fmod_channel_set_position:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_channel_set_position(arg0, arg1, arg2);
return _return;
}
func double fmod_channel_get_position(double channel_ref, double time_unit);
-(double) fmod_channel_get_position:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_get_position(arg0, arg1);
return _return;
}
func double fmod_channel_set_channel_group(double channel_ref, double channel_group_ref);
-(double) fmod_channel_set_channel_group:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_set_channel_group(arg0, arg1);
return _return;
}
func double fmod_channel_get_channel_group(double channel_ref);
-(double) fmod_channel_get_channel_group:(double) arg0 {
auto _return = (double) fmod_channel_get_channel_group(arg0);
return _return;
}
func double fmod_channel_set_loop_count(double channel_ref, double loop_count);
-(double) fmod_channel_set_loop_count:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_set_loop_count(arg0, arg1);
return _return;
}
func double fmod_channel_get_loop_count(double channel_ref);
-(double) fmod_channel_get_loop_count:(double) arg0 {
auto _return = (double) fmod_channel_get_loop_count(arg0);
return _return;
}
func double fmod_channel_set_loop_points(double channel_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
-(double) fmod_channel_set_loop_points:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 arg4:(double) arg4 {
auto _return = (double) fmod_channel_set_loop_points(arg0, arg1, arg2, arg3, arg4);
return _return;
}
func double fmod_channel_get_loop_points_multiplatform(double channel_ref, double loop_start_type, double loop_end_type, char* buff_return);
-(double) fmod_channel_get_loop_points_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(char*) arg3 {
auto _return = (double) fmod_channel_get_loop_points_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_channel_is_virtual(double channel_ref);
-(double) fmod_channel_is_virtual:(double) arg0 {
auto _return = (double) fmod_channel_is_virtual(arg0);
return _return;
}
func double fmod_channel_get_current_sound(double channel_ref);
-(double) fmod_channel_get_current_sound:(double) arg0 {
auto _return = (double) fmod_channel_get_current_sound(arg0);
return _return;
}
func double fmod_channel_get_index(double channel_ref);
-(double) fmod_channel_get_index:(double) arg0 {
auto _return = (double) fmod_channel_get_index(arg0);
return _return;
}
func double fmod_channel_get_system_object(double channel_ref);
-(double) fmod_channel_get_system_object:(double) arg0 {
auto _return = (double) fmod_channel_get_system_object(arg0);
return _return;
}
func double fmod_channel_control_is_playing(double channel_control_ref);
-(double) fmod_channel_control_is_playing:(double) arg0 {
auto _return = (double) fmod_channel_control_is_playing(arg0);
return _return;
}
func double fmod_channel_control_stop(double channel_control_ref);
-(double) fmod_channel_control_stop:(double) arg0 {
auto _return = (double) fmod_channel_control_stop(arg0);
return _return;
}
func double fmod_channel_control_set_paused(double channel_control_ref, double paused);
-(double) fmod_channel_control_set_paused:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_paused(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_paused(double channel_control_ref);
-(double) fmod_channel_control_get_paused:(double) arg0 {
auto _return = (double) fmod_channel_control_get_paused(arg0);
return _return;
}
func double fmod_channel_control_set_mode(double channel_control_ref, double mode);
-(double) fmod_channel_control_set_mode:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_mode(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_mode(double channel_control_ref);
-(double) fmod_channel_control_get_mode:(double) arg0 {
auto _return = (double) fmod_channel_control_get_mode(arg0);
return _return;
}
func double fmod_channel_control_set_pitch(double channel_control_ref, double pitch);
-(double) fmod_channel_control_set_pitch:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_pitch(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_pitch(double channel_control_ref);
-(double) fmod_channel_control_get_pitch:(double) arg0 {
auto _return = (double) fmod_channel_control_get_pitch(arg0);
return _return;
}
func double fmod_channel_control_get_audibility(double channel_control_ref);
-(double) fmod_channel_control_get_audibility:(double) arg0 {
auto _return = (double) fmod_channel_control_get_audibility(arg0);
return _return;
}
func double fmod_channel_control_set_volume(double channel_control_ref, double volume);
-(double) fmod_channel_control_set_volume:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_volume(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_volume(double channel_control_ref);
-(double) fmod_channel_control_get_volume:(double) arg0 {
auto _return = (double) fmod_channel_control_get_volume(arg0);
return _return;
}
func double fmod_channel_control_set_volume_ramp(double channel_control_ref, double ramp);
-(double) fmod_channel_control_set_volume_ramp:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_volume_ramp(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_volume_ramp(double channel_control_ref);
-(double) fmod_channel_control_get_volume_ramp:(double) arg0 {
auto _return = (double) fmod_channel_control_get_volume_ramp(arg0);
return _return;
}
func double fmod_channel_control_set_mute(double channel_control_ref, double mute);
-(double) fmod_channel_control_set_mute:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_mute(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_mute(double channel_control_ref);
-(double) fmod_channel_control_get_mute:(double) arg0 {
auto _return = (double) fmod_channel_control_get_mute(arg0);
return _return;
}
func double fmod_channel_control_set_3d_attributes_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_set_3d_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_set_3d_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_3d_attributes_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_3d_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_3d_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_3d_cone_orientation_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_set_3d_cone_orientation_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_set_3d_cone_orientation_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_3d_cone_orientation_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_3d_cone_orientation_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_3d_cone_orientation_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_3d_cone_settings(double channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
-(double) fmod_channel_control_set_3d_cone_settings:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_channel_control_set_3d_cone_settings(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_channel_control_get_3d_cone_settings_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_3d_cone_settings_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_3d_cone_settings_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_3d_custom_rolloff_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_set_3d_custom_rolloff_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_set_3d_custom_rolloff_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_3d_custom_rolloff_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_3d_custom_rolloff_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_3d_custom_rolloff_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_3d_distance_filter(double channel_control_ref, double custom, double custom_level, double center_freq);
-(double) fmod_channel_control_set_3d_distance_filter:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_channel_control_set_3d_distance_filter(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_channel_control_get_3d_distance_filter_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_3d_distance_filter_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_3d_distance_filter_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_3d_doppler_level(double channel_control_ref, double level);
-(double) fmod_channel_control_set_3d_doppler_level:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_3d_doppler_level(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_3d_doppler_level(double channel_control_ref);
-(double) fmod_channel_control_get_3d_doppler_level:(double) arg0 {
auto _return = (double) fmod_channel_control_get_3d_doppler_level(arg0);
return _return;
}
func double fmod_channel_control_set_3d_level(double channel_control_ref, double level);
-(double) fmod_channel_control_set_3d_level:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_3d_level(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_3d_level(double channel_control_ref);
-(double) fmod_channel_control_get_3d_level:(double) arg0 {
auto _return = (double) fmod_channel_control_get_3d_level(arg0);
return _return;
}
func double fmod_channel_control_set_3d_min_max_distance(double channel_control_ref, double min, double max);
-(double) fmod_channel_control_set_3d_min_max_distance:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_channel_control_set_3d_min_max_distance(arg0, arg1, arg2);
return _return;
}
func double fmod_channel_control_get_3d_min_max_distance_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_3d_min_max_distance_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_3d_min_max_distance_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_3d_occlusion(double channel_control_ref, double direct_occlusion, double reverb_occlusion);
-(double) fmod_channel_control_set_3d_occlusion:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_channel_control_set_3d_occlusion(arg0, arg1, arg2);
return _return;
}
func double fmod_channel_control_get_3d_occlusion_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_3d_occlusion_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_3d_occlusion_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_3d_spread(double channel_control_ref, double angle);
-(double) fmod_channel_control_set_3d_spread:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_3d_spread(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_3d_spread(double channel_control_ref);
-(double) fmod_channel_control_get_3d_spread:(double) arg0 {
auto _return = (double) fmod_channel_control_get_3d_spread(arg0);
return _return;
}
func double fmod_channel_control_set_pan(double channel_control_ref, double pan);
-(double) fmod_channel_control_set_pan:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_pan(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_mix_levels_input_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_set_mix_levels_input_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_set_mix_levels_input_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_mix_levels_output(double channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right);
-(double) fmod_channel_control_set_mix_levels_output:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 arg4:(double) arg4 arg5:(double) arg5 arg6:(double) arg6 arg7:(double) arg7 arg8:(double) arg8 {
auto _return = (double) fmod_channel_control_set_mix_levels_output(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
return _return;
}
func double fmod_channel_control_set_mix_matrix_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_set_mix_matrix_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_set_mix_matrix_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_mix_matrix_multiplatform(double channel_control_ref, double in_channel_hop, char* buff_return);
-(double) fmod_channel_control_get_mix_matrix_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_channel_control_get_mix_matrix_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_channel_control_set_reverb_properties(double channel_control_ref, double reverb_instance, double wet);
-(double) fmod_channel_control_set_reverb_properties:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_channel_control_set_reverb_properties(arg0, arg1, arg2);
return _return;
}
func double fmod_channel_control_get_reverb_properties(double channel_control_ref, double reverb_instance);
-(double) fmod_channel_control_get_reverb_properties:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_get_reverb_properties(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_low_pass_gain(double channel_control_ref, double gain);
-(double) fmod_channel_control_set_low_pass_gain:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_low_pass_gain(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_low_pass_gain(double channel_control_ref);
-(double) fmod_channel_control_get_low_pass_gain:(double) arg0 {
auto _return = (double) fmod_channel_control_get_low_pass_gain(arg0);
return _return;
}
func double fmod_channel_control_add_dsp(double channel_control_ref, double dsp_chain_offset, double dsp_ref);
-(double) fmod_channel_control_add_dsp:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_channel_control_add_dsp(arg0, arg1, arg2);
return _return;
}
func double fmod_channel_control_remove_dsp(double channel_control_ref, double dsp_ref);
-(double) fmod_channel_control_remove_dsp:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_remove_dsp(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_num_dsps(double channel_control_ref);
-(double) fmod_channel_control_get_num_dsps:(double) arg0 {
auto _return = (double) fmod_channel_control_get_num_dsps(arg0);
return _return;
}
func double fmod_channel_control_get_dsp(double channel_control_ref, double index);
-(double) fmod_channel_control_get_dsp:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_get_dsp(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_dsp_index(double channel_control_ref, double dsp_ref, double chain_index);
-(double) fmod_channel_control_set_dsp_index:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_channel_control_set_dsp_index(arg0, arg1, arg2);
return _return;
}
func double fmod_channel_control_get_dsp_index(double channel_control_ref, double dsp_ref);
-(double) fmod_channel_control_get_dsp_index:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_get_dsp_index(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_dsp_clock_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_dsp_clock_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_dsp_clock_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_delay_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_set_delay_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_set_delay_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_delay_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_delay_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_delay_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_add_fade_point_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_add_fade_point_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_add_fade_point_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_fade_point_ramp_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_set_fade_point_ramp_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_set_fade_point_ramp_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_remove_fade_points_multiplatform(double channel_control_ref, char* buff_args);
-(double) fmod_channel_control_remove_fade_points_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_remove_fade_points_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_fade_points_multiplatform(double channel_control_ref, char* buff_return);
-(double) fmod_channel_control_get_fade_points_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_channel_control_get_fade_points_multiplatform(arg0, arg1);
return _return;
}
func double fmod_channel_control_set_callback(double channel_control_ref);
-(double) fmod_channel_control_set_callback:(double) arg0 {
auto _return = (double) fmod_channel_control_set_callback(arg0);
return _return;
}
func double fmod_channel_control_get_system_object(double channel_control_ref);
-(double) fmod_channel_control_get_system_object:(double) arg0 {
auto _return = (double) fmod_channel_control_get_system_object(arg0);
return _return;
}
func double fmod_channel_control_set_user_data(double channel_control_ref, double data);
-(double) fmod_channel_control_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_control_set_user_data(arg0, arg1);
return _return;
}
func double fmod_channel_control_get_user_data(double channel_control_ref);
-(double) fmod_channel_control_get_user_data:(double) arg0 {
auto _return = (double) fmod_channel_control_get_user_data(arg0);
return _return;
}
func double fmod_channel_group_get_num_channels(double channel_group_ref);
-(double) fmod_channel_group_get_num_channels:(double) arg0 {
auto _return = (double) fmod_channel_group_get_num_channels(arg0);
return _return;
}
func double fmod_channel_group_get_channel(double channel_group_ref, double index);
-(double) fmod_channel_group_get_channel:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_group_get_channel(arg0, arg1);
return _return;
}
func double fmod_channel_group_add_group_multiplatform(double channel_group_ref, double child_channel_group_ref, double propagate_dsp_clock);
-(double) fmod_channel_group_add_group_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_channel_group_add_group_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_channel_group_get_num_groups(double channel_group_ref);
-(double) fmod_channel_group_get_num_groups:(double) arg0 {
auto _return = (double) fmod_channel_group_get_num_groups(arg0);
return _return;
}
func double fmod_channel_group_get_group(double channel_group_ref, double group_index);
-(double) fmod_channel_group_get_group:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_channel_group_get_group(arg0, arg1);
return _return;
}
func double fmod_channel_group_get_parent_group(double channel_group_ref);
-(double) fmod_channel_group_get_parent_group:(double) arg0 {
auto _return = (double) fmod_channel_group_get_parent_group(arg0);
return _return;
}
func char* fmod_channel_group_get_name(double channel_group_ref);
-(char*) fmod_channel_group_get_name:(double) arg0 {
auto _return = (char*) fmod_channel_group_get_name(arg0);
return _return;
}
func double fmod_channel_group_release(double channel_group_ref);
-(double) fmod_channel_group_release:(double) arg0 {
auto _return = (double) fmod_channel_group_release(arg0);
return _return;
}
func double fmod_channel_group_get_system_object(double channel_group_ref);
-(double) fmod_channel_group_get_system_object:(double) arg0 {
auto _return = (double) fmod_channel_group_get_system_object(arg0);
return _return;
}
func double fmod_file_get_disk_busy();
-(double) fmod_file_get_disk_busy {
auto _return = (double) fmod_file_get_disk_busy();
return _return;
}
func double fmod_file_set_disk_busy(double busy);
-(double) fmod_file_set_disk_busy:(double) arg0 {
auto _return = (double) fmod_file_set_disk_busy(arg0);
return _return;
}
func double fmod_memory_get_stats_multiplatform(double blocking, char* buff_return);
-(double) fmod_memory_get_stats_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_memory_get_stats_multiplatform(arg0, arg1);
return _return;
}
func double fmod_debug_initialize_multiplatform(double flags, double mode, char* filename);
-(double) fmod_debug_initialize_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_debug_initialize_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_thread_set_attributes(double type, double affinity, double priority, double stacksize);
-(double) fmod_thread_set_attributes:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_thread_set_attributes(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_dsp_add_input_multiplatform(double dsp_ref, double dsp_input_ref, double dsp_connection_type);
-(double) fmod_dsp_add_input_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_dsp_add_input_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_input_multiplatform(double dsp_ref, double dsp_input_index, char* buff_return);
-(double) fmod_dsp_get_input_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_dsp_get_input_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_output_multiplatform(double dsp_ref, double dsp_output_index, char* buff_return);
-(double) fmod_dsp_get_output_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_dsp_get_output_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_num_inputs(double dsp_ref);
-(double) fmod_dsp_get_num_inputs:(double) arg0 {
auto _return = (double) fmod_dsp_get_num_inputs(arg0);
return _return;
}
func double fmod_dsp_get_num_outputs(double dsp_ref);
-(double) fmod_dsp_get_num_outputs:(double) arg0 {
auto _return = (double) fmod_dsp_get_num_outputs(arg0);
return _return;
}
func double fmod_dsp_disconnect_all(double dsp_ref, double inputs, double outputs);
-(double) fmod_dsp_disconnect_all:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_dsp_disconnect_all(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_disconnect_from_mutliplatform(double dsp_ref, double dsp_other_ref, double dsp_connection_ref);
-(double) fmod_dsp_disconnect_from_mutliplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_dsp_disconnect_from_mutliplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_data_parameter_index(double dsp_ref, double data_type);
-(double) fmod_dsp_get_data_parameter_index:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_get_data_parameter_index(arg0, arg1);
return _return;
}
func double fmod_dsp_get_num_parameters(double dsp_ref);
-(double) fmod_dsp_get_num_parameters:(double) arg0 {
auto _return = (double) fmod_dsp_get_num_parameters(arg0);
return _return;
}
func double fmod_dsp_set_parameter_bool(double dsp_ref, double parameter_index, double value);
-(double) fmod_dsp_set_parameter_bool:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_dsp_set_parameter_bool(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_parameter_bool(double dsp_ref, double parameter_index);
-(double) fmod_dsp_get_parameter_bool:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_get_parameter_bool(arg0, arg1);
return _return;
}
func double fmod_dsp_set_parameter_data_multiplatform(double dsp_ref, double parameter_index, char* buff, double length);
-(double) fmod_dsp_set_parameter_data_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_dsp_set_parameter_data_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_dsp_get_parameter_data_multiplatform(double dsp_ref, double parameter_index, char* buff, double length);
-(double) fmod_dsp_get_parameter_data_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_dsp_get_parameter_data_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_dsp_set_parameter_float(double dsp_ref, double parameter_index, double value);
-(double) fmod_dsp_set_parameter_float:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_dsp_set_parameter_float(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_parameter_float(double dsp_ref, double parameter_index);
-(double) fmod_dsp_get_parameter_float:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_get_parameter_float(arg0, arg1);
return _return;
}
func double fmod_dsp_set_parameter_int(double dsp_ref, double parameter_index, double value);
-(double) fmod_dsp_set_parameter_int:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_dsp_set_parameter_int(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_parameter_int(double dsp_ref, double parameter_index);
-(double) fmod_dsp_get_parameter_int:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_get_parameter_int(arg0, arg1);
return _return;
}
func double fmod_dsp_get_parameter_info_multiplatform(double dsp_ref, double parameter_index, char* buff_return);
-(double) fmod_dsp_get_parameter_info_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_dsp_get_parameter_info_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_set_channel_format(double dsp_ref, double channel_mask, double num_channels, double speaker_mode);
-(double) fmod_dsp_set_channel_format:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_dsp_set_channel_format(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_dsp_get_channel_format_multiplatform(double dsp_ref, char* buff_return);
-(double) fmod_dsp_get_channel_format_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_dsp_get_channel_format_multiplatform(arg0, arg1);
return _return;
}
func double fmod_dsp_get_output_channel_format_multiplatform(double dsp_ref, char* buff_args, char* buff_return);
-(double) fmod_dsp_get_output_channel_format_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_dsp_get_output_channel_format_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_metering_info_multiplatform(double dsp_ref, char* buff_return);
-(double) fmod_dsp_get_metering_info_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_dsp_get_metering_info_multiplatform(arg0, arg1);
return _return;
}
func double fmod_dsp_set_metering_enabled(double dsp_ref, double enabled_in, double enabled_out);
-(double) fmod_dsp_set_metering_enabled:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_dsp_set_metering_enabled(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_get_metering_enabled_multiplatform(double dsp_ref, char* buff_return);
-(double) fmod_dsp_get_metering_enabled_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_dsp_get_metering_enabled_multiplatform(arg0, arg1);
return _return;
}
func double fmod_dsp_set_active(double dsp_ref, double active);
-(double) fmod_dsp_set_active:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_set_active(arg0, arg1);
return _return;
}
func double fmod_dsp_get_active(double dsp_ref);
-(double) fmod_dsp_get_active:(double) arg0 {
auto _return = (double) fmod_dsp_get_active(arg0);
return _return;
}
func double fmod_dsp_set_bypass(double dsp_ref, double bypass);
-(double) fmod_dsp_set_bypass:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_set_bypass(arg0, arg1);
return _return;
}
func double fmod_dsp_get_bypass(double dsp_ref);
-(double) fmod_dsp_get_bypass:(double) arg0 {
auto _return = (double) fmod_dsp_get_bypass(arg0);
return _return;
}
func double fmod_dsp_set_wet_dry_mix(double dsp_ref, double prewet, double postwet, double dry);
-(double) fmod_dsp_set_wet_dry_mix:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_dsp_set_wet_dry_mix(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_dsp_get_wet_dry_mix_multiplatform(double dsp_ref, char* buff_return);
-(double) fmod_dsp_get_wet_dry_mix_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_dsp_get_wet_dry_mix_multiplatform(arg0, arg1);
return _return;
}
func double fmod_dsp_get_idle(double dsp_ref);
-(double) fmod_dsp_get_idle:(double) arg0 {
auto _return = (double) fmod_dsp_get_idle(arg0);
return _return;
}
func double fmod_dsp_reset(double dsp_ref);
-(double) fmod_dsp_reset:(double) arg0 {
auto _return = (double) fmod_dsp_reset(arg0);
return _return;
}
func double fmod_dsp_release(double dsp_ref);
-(double) fmod_dsp_release:(double) arg0 {
auto _return = (double) fmod_dsp_release(arg0);
return _return;
}
func double fmod_dsp_get_type(double dsp_ref);
-(double) fmod_dsp_get_type:(double) arg0 {
auto _return = (double) fmod_dsp_get_type(arg0);
return _return;
}
func double fmod_dsp_get_info_multiplatform(double dsp_ref, char* buff_return);
-(double) fmod_dsp_get_info_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_dsp_get_info_multiplatform(arg0, arg1);
return _return;
}
func double fmod_dsp_get_cpu_usage_multiplatform(double dsp_ref, char* buff_return);
-(double) fmod_dsp_get_cpu_usage_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_dsp_get_cpu_usage_multiplatform(arg0, arg1);
return _return;
}
func double fmod_dsp_set_user_data(double dsp_ref, double data);
-(double) fmod_dsp_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_set_user_data(arg0, arg1);
return _return;
}
func double fmod_dsp_get_user_data(double dsp_ref);
-(double) fmod_dsp_get_user_data:(double) arg0 {
auto _return = (double) fmod_dsp_get_user_data(arg0);
return _return;
}
func double fmod_dsp_set_callback(double dsp_ref);
-(double) fmod_dsp_set_callback:(double) arg0 {
auto _return = (double) fmod_dsp_set_callback(arg0);
return _return;
}
func double fmod_dsp_get_system_object(double dsp_ref);
-(double) fmod_dsp_get_system_object:(double) arg0 {
auto _return = (double) fmod_dsp_get_system_object(arg0);
return _return;
}
func double fmod_dsp_connection_set_mix(double dsp_connection_ref, double volume);
-(double) fmod_dsp_connection_set_mix:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_connection_set_mix(arg0, arg1);
return _return;
}
func double fmod_dsp_connection_get_mix(double dsp_connection_ref);
-(double) fmod_dsp_connection_get_mix:(double) arg0 {
auto _return = (double) fmod_dsp_connection_get_mix(arg0);
return _return;
}
func double fmod_dsp_connection_set_mix_matrix_multiplatform(double dsp_connection_ref, char* buff_args);
-(double) fmod_dsp_connection_set_mix_matrix_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_dsp_connection_set_mix_matrix_multiplatform(arg0, arg1);
return _return;
}
func double fmod_dsp_connection_get_mix_matrix_multiplatform(double dsp_connection_ref, double inchannel_hop, char* buff_return);
-(double) fmod_dsp_connection_get_mix_matrix_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_dsp_connection_get_mix_matrix_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_dsp_connection_get_input(double dsp_connection_ref);
-(double) fmod_dsp_connection_get_input:(double) arg0 {
auto _return = (double) fmod_dsp_connection_get_input(arg0);
return _return;
}
func double fmod_dsp_connection_get_output(double dsp_connection_ref);
-(double) fmod_dsp_connection_get_output:(double) arg0 {
auto _return = (double) fmod_dsp_connection_get_output(arg0);
return _return;
}
func double fmod_dsp_connection_get_type(double dsp_connection_ref);
-(double) fmod_dsp_connection_get_type:(double) arg0 {
auto _return = (double) fmod_dsp_connection_get_type(arg0);
return _return;
}
func double fmod_dsp_connection_set_user_data(double dsp_connection_ref, double data);
-(double) fmod_dsp_connection_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_dsp_connection_set_user_data(arg0, arg1);
return _return;
}
func double fmod_dsp_connection_get_user_data(double dsp_connection_ref);
-(double) fmod_dsp_connection_get_user_data:(double) arg0 {
auto _return = (double) fmod_dsp_connection_get_user_data(arg0);
return _return;
}
func double fmod_geometry_set_polygon_attributes(double geometry_ref, double polygon_index, double direct_occlusion, double reverb_occlusion, double double_sided);
-(double) fmod_geometry_set_polygon_attributes:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 arg4:(double) arg4 {
auto _return = (double) fmod_geometry_set_polygon_attributes(arg0, arg1, arg2, arg3, arg4);
return _return;
}
func double fmod_geometry_get_polygon_attributes_multiplatform(double geometry_ref, double polygon_index, char* buff_return);
-(double) fmod_geometry_get_polygon_attributes_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_geometry_get_polygon_attributes_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_geometry_get_polygon_num_vertices(double geometry_ref, double polygon_index);
-(double) fmod_geometry_get_polygon_num_vertices:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_geometry_get_polygon_num_vertices(arg0, arg1);
return _return;
}
func double fmod_geometry_set_polygon_vertex_multiplatform(double geometry_ref, double polygon_index, double vertex_index, char* buff_args);
-(double) fmod_geometry_set_polygon_vertex_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(char*) arg3 {
auto _return = (double) fmod_geometry_set_polygon_vertex_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_geometry_get_polygon_vertex_multiplatform(double geometry_ref, double polygon_index, double vertex_index, char* buff_return);
-(double) fmod_geometry_get_polygon_vertex_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(char*) arg3 {
auto _return = (double) fmod_geometry_get_polygon_vertex_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_geometry_set_position_multiplatform(double geometry_ref, char* buff_args);
-(double) fmod_geometry_set_position_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_set_position_multiplatform(arg0, arg1);
return _return;
}
func double fmod_geometry_get_position_multiplatform(double geometry_ref, char* buff_return);
-(double) fmod_geometry_get_position_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_get_position_multiplatform(arg0, arg1);
return _return;
}
func double fmod_geometry_set_rotation_multiplatform(double geometry_ref, char* buff_args);
-(double) fmod_geometry_set_rotation_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_set_rotation_multiplatform(arg0, arg1);
return _return;
}
func double fmod_geometry_get_rotation_multiplatform(double geometry_ref, char* buff_return);
-(double) fmod_geometry_get_rotation_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_get_rotation_multiplatform(arg0, arg1);
return _return;
}
func double fmod_geometry_set_scale_multiplatform(double geometry_ref, char* buff_args);
-(double) fmod_geometry_set_scale_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_set_scale_multiplatform(arg0, arg1);
return _return;
}
func double fmod_geometry_get_scale_multiplatform(double geometry_ref, char* buff_return);
-(double) fmod_geometry_get_scale_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_get_scale_multiplatform(arg0, arg1);
return _return;
}
func double fmod_geometry_add_polygon_multiplatform(double geometry_ref, char* buff_args);
-(double) fmod_geometry_add_polygon_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_add_polygon_multiplatform(arg0, arg1);
return _return;
}
func double fmod_geometry_set_active(double geometry_ref, double active);
-(double) fmod_geometry_set_active:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_geometry_set_active(arg0, arg1);
return _return;
}
func double fmod_geometry_get_active(double geometry_ref);
-(double) fmod_geometry_get_active:(double) arg0 {
auto _return = (double) fmod_geometry_get_active(arg0);
return _return;
}
func double fmod_geometry_get_max_polygons_multiplatform(double geometry_ref, char* buff_return);
-(double) fmod_geometry_get_max_polygons_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_get_max_polygons_multiplatform(arg0, arg1);
return _return;
}
func double fmod_geometry_get_num_polygons(double geometry_ref);
-(double) fmod_geometry_get_num_polygons:(double) arg0 {
auto _return = (double) fmod_geometry_get_num_polygons(arg0);
return _return;
}
func double fmod_geometry_set_user_data(double geometry_ref, double data);
-(double) fmod_geometry_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_geometry_set_user_data(arg0, arg1);
return _return;
}
func double fmod_geometry_get_user_data(double geometry_ref);
-(double) fmod_geometry_get_user_data:(double) arg0 {
auto _return = (double) fmod_geometry_get_user_data(arg0);
return _return;
}
func double fmod_geometry_release(double geometry_ref);
-(double) fmod_geometry_release:(double) arg0 {
auto _return = (double) fmod_geometry_release(arg0);
return _return;
}
func double fmod_geometry_save_multiplatform(double geometry_ref, char* buff_args);
-(double) fmod_geometry_save_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_geometry_save_multiplatform(arg0, arg1);
return _return;
}
func double fmod_reverb_3d_set_3d_attributes_multiplatform(double reverb_3d_ref, char* buff_args, double min_distance, double max_distance);
-(double) fmod_reverb_3d_set_3d_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_reverb_3d_set_3d_attributes_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_reverb_3d_get_3d_attributes_multiplatform(double reverb_3d_ref, char* buff_return);
-(double) fmod_reverb_3d_get_3d_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_reverb_3d_get_3d_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_reverb_3d_set_properties(double reverb_3d_ref, double decay_time, double early_delay, double late_delay, double hf_reference, double hf_decay_ratio, double diffusion, double density, double low_shelf_frequency, double low_shelf_gain, double high_cut, double early_late_mix, double wet_level);
-(double) fmod_reverb_3d_set_properties:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 arg4:(double) arg4 arg5:(double) arg5 arg6:(double) arg6 arg7:(double) arg7 arg8:(double) arg8 arg9:(double) arg9 arg10:(double) arg10 arg11:(double) arg11 arg12:(double) arg12 {
auto _return = (double) fmod_reverb_3d_set_properties(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
return _return;
}
func double fmod_reverb_3d_get_properties_multiplatform(double reverb_3d_ref, char* buff_return);
-(double) fmod_reverb_3d_get_properties_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_reverb_3d_get_properties_multiplatform(arg0, arg1);
return _return;
}
func double fmod_reverb_3d_set_active(double reverb_3d_ref, double active);
-(double) fmod_reverb_3d_set_active:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_reverb_3d_set_active(arg0, arg1);
return _return;
}
func double fmod_reverb_3d_get_active(double reverb_3d_ref);
-(double) fmod_reverb_3d_get_active:(double) arg0 {
auto _return = (double) fmod_reverb_3d_get_active(arg0);
return _return;
}
func double fmod_reverb_3d_release(double reverb_3d_ref);
-(double) fmod_reverb_3d_release:(double) arg0 {
auto _return = (double) fmod_reverb_3d_release(arg0);
return _return;
}
func double fmod_reverb_3d_set_user_data(double reverb_3d_ref, double data);
-(double) fmod_reverb_3d_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_reverb_3d_set_user_data(arg0, arg1);
return _return;
}
func double fmod_reverb_3d_get_user_data(double reverb_3d_ref);
-(double) fmod_reverb_3d_get_user_data:(double) arg0 {
auto _return = (double) fmod_reverb_3d_get_user_data(arg0);
return _return;
}
func char* fmod_sound_get_name(double sound_ref);
-(char*) fmod_sound_get_name:(double) arg0 {
auto _return = (char*) fmod_sound_get_name(arg0);
return _return;
}
func double fmod_sound_get_format_multiplatform(double sound_ref, char* buff_return);
-(double) fmod_sound_get_format_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_get_format_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_get_length(double sound_ref, double length_type);
-(double) fmod_sound_get_length:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_get_length(arg0, arg1);
return _return;
}
func double fmod_sound_get_num_tags_multiplatform(double sound_ref, char* buff_return);
-(double) fmod_sound_get_num_tags_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_get_num_tags_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_get_tag_multiplatform(double sound_ref, double tag_index, char* buff_args, char* buff_return);
-(double) fmod_sound_get_tag_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 arg3:(char*) arg3 {
auto _return = (double) fmod_sound_get_tag_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_sound_set_3d_cone_settings(double sound_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
-(double) fmod_sound_set_3d_cone_settings:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_sound_set_3d_cone_settings(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_sound_get_3d_cone_settings_multiplatform(double sound_ref, char* buff_return);
-(double) fmod_sound_get_3d_cone_settings_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_get_3d_cone_settings_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_set_3d_custom_rolloff_multiplatform(double sound_ref, char* buff_args);
-(double) fmod_sound_set_3d_custom_rolloff_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_set_3d_custom_rolloff_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_get_3d_custom_rolloff_multiplatform(double sound_ref, char* buff_return);
-(double) fmod_sound_get_3d_custom_rolloff_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_get_3d_custom_rolloff_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_set_3d_min_max_distance(double sound_ref, double min, double max);
-(double) fmod_sound_set_3d_min_max_distance:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_sound_set_3d_min_max_distance(arg0, arg1, arg2);
return _return;
}
func double fmod_sound_get_3d_min_max_distance_multiplatform(double sound_ref, char* buff_return);
-(double) fmod_sound_get_3d_min_max_distance_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_get_3d_min_max_distance_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_set_defaults(double sound_ref, double frequency, double priority);
-(double) fmod_sound_set_defaults:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_sound_set_defaults(arg0, arg1, arg2);
return _return;
}
func double fmod_sound_get_defaults_multiplatform(double sound_ref, char* buff_return);
-(double) fmod_sound_get_defaults_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_get_defaults_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_set_mode(double sound_ref, double mode);
-(double) fmod_sound_set_mode:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_set_mode(arg0, arg1);
return _return;
}
func double fmod_sound_get_mode(double sound_ref);
-(double) fmod_sound_get_mode:(double) arg0 {
auto _return = (double) fmod_sound_get_mode(arg0);
return _return;
}
func double fmod_sound_set_loop_count(double sound_ref, double count);
-(double) fmod_sound_set_loop_count:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_set_loop_count(arg0, arg1);
return _return;
}
func double fmod_sound_get_loop_count(double sound_ref);
-(double) fmod_sound_get_loop_count:(double) arg0 {
auto _return = (double) fmod_sound_get_loop_count(arg0);
return _return;
}
func double fmod_sound_set_loop_points(double sound_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
-(double) fmod_sound_set_loop_points:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 arg4:(double) arg4 {
auto _return = (double) fmod_sound_set_loop_points(arg0, arg1, arg2, arg3, arg4);
return _return;
}
func double fmod_sound_get_loop_points_multiplatform(double sound_ref, double loop_start_type, double loop_end_type, char* buff_return);
-(double) fmod_sound_get_loop_points_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(char*) arg3 {
auto _return = (double) fmod_sound_get_loop_points_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_sound_set_sound_group(double sound_ref, double sound_group_ref);
-(double) fmod_sound_set_sound_group:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_set_sound_group(arg0, arg1);
return _return;
}
func double fmod_sound_get_sound_group(double sound_ref);
-(double) fmod_sound_get_sound_group:(double) arg0 {
auto _return = (double) fmod_sound_get_sound_group(arg0);
return _return;
}
func double fmod_sound_get_num_sub_sounds(double sound_ref);
-(double) fmod_sound_get_num_sub_sounds:(double) arg0 {
auto _return = (double) fmod_sound_get_num_sub_sounds(arg0);
return _return;
}
func double fmod_sound_get_sub_sound(double sound_ref, double sub_sound_index);
-(double) fmod_sound_get_sub_sound:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_get_sub_sound(arg0, arg1);
return _return;
}
func double fmod_sound_get_sub_sound_parent(double sound_ref);
-(double) fmod_sound_get_sub_sound_parent:(double) arg0 {
auto _return = (double) fmod_sound_get_sub_sound_parent(arg0);
return _return;
}
func double fmod_sound_get_open_state_multiplatform(double sound_ref, char* buff_return);
-(double) fmod_sound_get_open_state_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_get_open_state_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_read_data_multiplatform(double sound_ref, char* buff_args);
-(double) fmod_sound_read_data_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_read_data_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_seek_data(double sound_ref, double pcm);
-(double) fmod_sound_seek_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_seek_data(arg0, arg1);
return _return;
}
func double fmod_sound_lock_multiplatform(double sound_ref, char* buff_args, char* buff_return);
-(double) fmod_sound_lock_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_sound_lock_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_sound_unlock_multiplatform(double sound_ref, char* buff_args);
-(double) fmod_sound_unlock_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_sound_unlock_multiplatform(arg0, arg1);
return _return;
}
func double fmod_sound_get_music_num_channels(double sound_ref);
-(double) fmod_sound_get_music_num_channels:(double) arg0 {
auto _return = (double) fmod_sound_get_music_num_channels(arg0);
return _return;
}
func double fmod_sound_set_music_channel_volume(double sound_ref, double channel_index, double volume);
-(double) fmod_sound_set_music_channel_volume:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_sound_set_music_channel_volume(arg0, arg1, arg2);
return _return;
}
func double fmod_sound_get_music_channel_volume(double sound_ref, double channel_index);
-(double) fmod_sound_get_music_channel_volume:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_get_music_channel_volume(arg0, arg1);
return _return;
}
func double fmod_sound_set_music_speed(double sound_ref, double speed);
-(double) fmod_sound_set_music_speed:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_set_music_speed(arg0, arg1);
return _return;
}
func double fmod_sound_get_music_speed(double sound_ref);
-(double) fmod_sound_get_music_speed:(double) arg0 {
auto _return = (double) fmod_sound_get_music_speed(arg0);
return _return;
}
func double fmod_sound_get_sync_point_multiplatform(double sound_ref, double point_index, double offset_type, char* buff_return);
-(double) fmod_sound_get_sync_point_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(char*) arg3 {
auto _return = (double) fmod_sound_get_sync_point_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_sound_get_num_sync_points(double sound_ref);
-(double) fmod_sound_get_num_sync_points:(double) arg0 {
auto _return = (double) fmod_sound_get_num_sync_points(arg0);
return _return;
}
func double fmod_sound_add_sync_point(double sound_ref, double offset, double offset_type, char* name);
-(double) fmod_sound_add_sync_point:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(char*) arg3 {
auto _return = (double) fmod_sound_add_sync_point(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_sound_delete_sync_point(double sound_ref, double point_index);
-(double) fmod_sound_delete_sync_point:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_delete_sync_point(arg0, arg1);
return _return;
}
func double fmod_sound_release(double sound_ref);
-(double) fmod_sound_release:(double) arg0 {
auto _return = (double) fmod_sound_release(arg0);
return _return;
}
func double fmod_sound_get_system_object(double sound_ref);
-(double) fmod_sound_get_system_object:(double) arg0 {
auto _return = (double) fmod_sound_get_system_object(arg0);
return _return;
}
func double fmod_sound_set_user_data(double sound_ref, double data);
-(double) fmod_sound_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_set_user_data(arg0, arg1);
return _return;
}
func double fmod_sound_get_user_data(double sound_ref);
-(double) fmod_sound_get_user_data:(double) arg0 {
auto _return = (double) fmod_sound_get_user_data(arg0);
return _return;
}
func double fmod_sound_group_set_max_audible(double sound_group_ref, double max_audible);
-(double) fmod_sound_group_set_max_audible:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_group_set_max_audible(arg0, arg1);
return _return;
}
func double fmod_sound_group_get_max_audible(double sound_group_ref);
-(double) fmod_sound_group_get_max_audible:(double) arg0 {
auto _return = (double) fmod_sound_group_get_max_audible(arg0);
return _return;
}
func double fmod_sound_group_set_max_audible_behavior(double sound_group_ref, double behavior);
-(double) fmod_sound_group_set_max_audible_behavior:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_group_set_max_audible_behavior(arg0, arg1);
return _return;
}
func double fmod_sound_group_get_max_audible_behavior(double sound_group_ref);
-(double) fmod_sound_group_get_max_audible_behavior:(double) arg0 {
auto _return = (double) fmod_sound_group_get_max_audible_behavior(arg0);
return _return;
}
func double fmod_sound_group_set_mute_fade_speed(double sound_group_ref, double speed);
-(double) fmod_sound_group_set_mute_fade_speed:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_group_set_mute_fade_speed(arg0, arg1);
return _return;
}
func double fmod_sound_group_get_mute_fade_speed(double sound_group_ref);
-(double) fmod_sound_group_get_mute_fade_speed:(double) arg0 {
auto _return = (double) fmod_sound_group_get_mute_fade_speed(arg0);
return _return;
}
func double fmod_sound_group_set_volume(double sound_group_ref, double volume);
-(double) fmod_sound_group_set_volume:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_group_set_volume(arg0, arg1);
return _return;
}
func double fmod_sound_group_get_volume(double sound_group_ref);
-(double) fmod_sound_group_get_volume:(double) arg0 {
auto _return = (double) fmod_sound_group_get_volume(arg0);
return _return;
}
func double fmod_sound_group_get_num_sounds(double sound_group_ref);
-(double) fmod_sound_group_get_num_sounds:(double) arg0 {
auto _return = (double) fmod_sound_group_get_num_sounds(arg0);
return _return;
}
func double fmod_sound_group_get_sound(double sound_group_ref, double sound_index);
-(double) fmod_sound_group_get_sound:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_group_get_sound(arg0, arg1);
return _return;
}
func double fmod_sound_group_get_num_playing(double sound_group_ref);
-(double) fmod_sound_group_get_num_playing:(double) arg0 {
auto _return = (double) fmod_sound_group_get_num_playing(arg0);
return _return;
}
func double fmod_sound_group_stop(double sound_group_ref);
-(double) fmod_sound_group_stop:(double) arg0 {
auto _return = (double) fmod_sound_group_stop(arg0);
return _return;
}
func char* fmod_sound_group_get_name(double sound_group_ref);
-(char*) fmod_sound_group_get_name:(double) arg0 {
auto _return = (char*) fmod_sound_group_get_name(arg0);
return _return;
}
func double fmod_sound_group_release(double sound_group_ref);
-(double) fmod_sound_group_release:(double) arg0 {
auto _return = (double) fmod_sound_group_release(arg0);
return _return;
}
func double fmod_sound_group_get_system_object(double sound_group_ref);
-(double) fmod_sound_group_get_system_object:(double) arg0 {
auto _return = (double) fmod_sound_group_get_system_object(arg0);
return _return;
}
func double fmod_sound_group_set_user_data(double sound_group_ref, double data);
-(double) fmod_sound_group_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_sound_group_set_user_data(arg0, arg1);
return _return;
}
func double fmod_sound_group_get_user_data(double sound_group_ref);
-(double) fmod_sound_group_get_user_data:(double) arg0 {
auto _return = (double) fmod_sound_group_get_user_data(arg0);
return _return;
}
func double fmod_studio_bank_get_loading_state(double bank_ref);
-(double) fmod_studio_bank_get_loading_state:(double) arg0 {
auto _return = (double) fmod_studio_bank_get_loading_state(arg0);
return _return;
}
func double fmod_studio_bank_load_sample_data(double bank_ref);
-(double) fmod_studio_bank_load_sample_data:(double) arg0 {
auto _return = (double) fmod_studio_bank_load_sample_data(arg0);
return _return;
}
func double fmod_studio_bank_unload_sample_data(double bank_ref);
-(double) fmod_studio_bank_unload_sample_data:(double) arg0 {
auto _return = (double) fmod_studio_bank_unload_sample_data(arg0);
return _return;
}
func double fmod_studio_bank_get_sample_loading_state(double bank_ref);
-(double) fmod_studio_bank_get_sample_loading_state:(double) arg0 {
auto _return = (double) fmod_studio_bank_get_sample_loading_state(arg0);
return _return;
}
func double fmod_studio_bank_unload(double bank_ref);
-(double) fmod_studio_bank_unload:(double) arg0 {
auto _return = (double) fmod_studio_bank_unload(arg0);
return _return;
}
func double fmod_studio_bank_get_bus_count(double bank_ref);
-(double) fmod_studio_bank_get_bus_count:(double) arg0 {
auto _return = (double) fmod_studio_bank_get_bus_count(arg0);
return _return;
}
func double fmod_studio_bank_get_bus_list_multiplatform(double bank_ref, char* buff_return);
-(double) fmod_studio_bank_get_bus_list_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_bank_get_bus_list_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_bank_get_event_count(double bank_ref);
-(double) fmod_studio_bank_get_event_count:(double) arg0 {
auto _return = (double) fmod_studio_bank_get_event_count(arg0);
return _return;
}
func double fmod_studio_bank_get_event_description_list_multiplatform(double bank_ref, char* buff_return);
-(double) fmod_studio_bank_get_event_description_list_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_bank_get_event_description_list_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_bank_get_string_count(double bank_ref);
-(double) fmod_studio_bank_get_string_count:(double) arg0 {
auto _return = (double) fmod_studio_bank_get_string_count(arg0);
return _return;
}
func double fmod_studio_bank_get_string_info_multiplatform(double bank_ref, double string_index, char* buff_return);
-(double) fmod_studio_bank_get_string_info_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_bank_get_string_info_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_bank_get_vca_count(double bank_ref);
-(double) fmod_studio_bank_get_vca_count:(double) arg0 {
auto _return = (double) fmod_studio_bank_get_vca_count(arg0);
return _return;
}
func double fmod_studio_bank_get_vca_list_multiplatform(double bank_ref, char* buff_return);
-(double) fmod_studio_bank_get_vca_list_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_bank_get_vca_list_multiplatform(arg0, arg1);
return _return;
}
func char* fmod_studio_bank_get_id(double bank_ref);
-(char*) fmod_studio_bank_get_id:(double) arg0 {
auto _return = (char*) fmod_studio_bank_get_id(arg0);
return _return;
}
func char* fmod_studio_bank_get_path(double bank_ref);
-(char*) fmod_studio_bank_get_path:(double) arg0 {
auto _return = (char*) fmod_studio_bank_get_path(arg0);
return _return;
}
func double fmod_studio_bank_is_valid(double bank_ref);
-(double) fmod_studio_bank_is_valid:(double) arg0 {
auto _return = (double) fmod_studio_bank_is_valid(arg0);
return _return;
}
func double fmod_studio_bank_set_user_data(double bank_ref, double data);
-(double) fmod_studio_bank_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_bank_set_user_data(arg0, arg1);
return _return;
}
func double fmod_studio_bank_get_user_data(double bank_ref);
-(double) fmod_studio_bank_get_user_data:(double) arg0 {
auto _return = (double) fmod_studio_bank_get_user_data(arg0);
return _return;
}
func double fmod_studio_bus_set_paused(double bus_ref, double pause);
-(double) fmod_studio_bus_set_paused:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_bus_set_paused(arg0, arg1);
return _return;
}
func double fmod_studio_bus_get_paused(double bus_ref);
-(double) fmod_studio_bus_get_paused:(double) arg0 {
auto _return = (double) fmod_studio_bus_get_paused(arg0);
return _return;
}
func double fmod_studio_bus_stop_all_events(double bus_ref, double stop_mode);
-(double) fmod_studio_bus_stop_all_events:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_bus_stop_all_events(arg0, arg1);
return _return;
}
func double fmod_studio_bus_set_volume(double bus_ref, double volumen);
-(double) fmod_studio_bus_set_volume:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_bus_set_volume(arg0, arg1);
return _return;
}
func double fmod_studio_bus_get_volume(double bus_ref);
-(double) fmod_studio_bus_get_volume:(double) arg0 {
auto _return = (double) fmod_studio_bus_get_volume(arg0);
return _return;
}
func double fmod_studio_bus_set_mute(double bus_ref, double mute);
-(double) fmod_studio_bus_set_mute:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_bus_set_mute(arg0, arg1);
return _return;
}
func double fmod_studio_bus_get_mute(double bus_ref);
-(double) fmod_studio_bus_get_mute:(double) arg0 {
auto _return = (double) fmod_studio_bus_get_mute(arg0);
return _return;
}
func double fmod_studio_bus_set_port_index_multiplatform(double bus_ref, char* buff_args);
-(double) fmod_studio_bus_set_port_index_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_bus_set_port_index_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_bus_get_port_index_multiplatform(double bus_ref, char* buff_return);
-(double) fmod_studio_bus_get_port_index_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_bus_get_port_index_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_bus_get_channel_group(double bus_ref);
-(double) fmod_studio_bus_get_channel_group:(double) arg0 {
auto _return = (double) fmod_studio_bus_get_channel_group(arg0);
return _return;
}
func double fmod_studio_bus_lock_channel_group(double bus_ref);
-(double) fmod_studio_bus_lock_channel_group:(double) arg0 {
auto _return = (double) fmod_studio_bus_lock_channel_group(arg0);
return _return;
}
func double fmod_studio_bus_unlock_channel_group(double bus_ref);
-(double) fmod_studio_bus_unlock_channel_group:(double) arg0 {
auto _return = (double) fmod_studio_bus_unlock_channel_group(arg0);
return _return;
}
func double fmod_studio_bus_get_cpu_usage_multiplatform(double bus_ref, char* buff_return);
-(double) fmod_studio_bus_get_cpu_usage_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_bus_get_cpu_usage_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_bus_get_memory_usage_multiplatform(double bus_ref, char* buff_return);
-(double) fmod_studio_bus_get_memory_usage_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_bus_get_memory_usage_multiplatform(arg0, arg1);
return _return;
}
func char* fmod_studio_bus_get_id(double bus_ref);
-(char*) fmod_studio_bus_get_id:(double) arg0 {
auto _return = (char*) fmod_studio_bus_get_id(arg0);
return _return;
}
func char* fmod_studio_bus_get_path(double bus_ref);
-(char*) fmod_studio_bus_get_path:(double) arg0 {
auto _return = (char*) fmod_studio_bus_get_path(arg0);
return _return;
}
func double fmod_studio_bus_is_valid(double bus_ref);
-(double) fmod_studio_bus_is_valid:(double) arg0 {
auto _return = (double) fmod_studio_bus_is_valid(arg0);
return _return;
}
func double fmod_studio_command_replay_set_bank_path(double command_replay_ref, char* path);
-(double) fmod_studio_command_replay_set_bank_path:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_command_replay_set_bank_path(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_set_create_instance_callback(double command_replay_ref);
-(double) fmod_studio_command_replay_set_create_instance_callback:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_set_create_instance_callback(arg0);
return _return;
}
func double fmod_studio_command_replay_set_frame_callback(double command_replay_ref);
-(double) fmod_studio_command_replay_set_frame_callback:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_set_frame_callback(arg0);
return _return;
}
func double fmod_studio_command_replay_set_load_bank_callback(double command_replay_ref, char* path);
-(double) fmod_studio_command_replay_set_load_bank_callback:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_command_replay_set_load_bank_callback(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_start(double command_replay_ref);
-(double) fmod_studio_command_replay_start:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_start(arg0);
return _return;
}
func double fmod_studio_command_replay_stop(double command_replay_ref);
-(double) fmod_studio_command_replay_stop:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_stop(arg0);
return _return;
}
func double fmod_studio_command_replay_get_current_command_multiplatform(double command_replay_ref, char* buff_return);
-(double) fmod_studio_command_replay_get_current_command_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_command_replay_get_current_command_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_get_playback_state(double command_replay_ref);
-(double) fmod_studio_command_replay_get_playback_state:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_get_playback_state(arg0);
return _return;
}
func double fmod_studio_command_replay_set_paused(double command_replay_ref, double pause);
-(double) fmod_studio_command_replay_set_paused:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_command_replay_set_paused(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_get_paused(double command_replay_ref);
-(double) fmod_studio_command_replay_get_paused:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_get_paused(arg0);
return _return;
}
func double fmod_studio_command_replay_seek_to_command(double command_replay_ref, double command_index);
-(double) fmod_studio_command_replay_seek_to_command:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_command_replay_seek_to_command(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_seek_to_time(double command_replay_ref, double time);
-(double) fmod_studio_command_replay_seek_to_time:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_command_replay_seek_to_time(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_get_command_at_time(double command_replay_ref, double time);
-(double) fmod_studio_command_replay_get_command_at_time:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_command_replay_get_command_at_time(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_get_command_count(double command_replay_ref);
-(double) fmod_studio_command_replay_get_command_count:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_get_command_count(arg0);
return _return;
}
func double fmod_studio_command_replay_get_command_info_multiplatform(double command_replay_ref, double command_index, char* buff_return);
-(double) fmod_studio_command_replay_get_command_info_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_command_replay_get_command_info_multiplatform(arg0, arg1, arg2);
return _return;
}
func char* fmod_studio_command_replay_get_command_string(double command_replay_ref, double command_index);
-(char*) fmod_studio_command_replay_get_command_string:(double) arg0 arg1:(double) arg1 {
auto _return = (char*) fmod_studio_command_replay_get_command_string(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_get_length(double command_replay_ref);
-(double) fmod_studio_command_replay_get_length:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_get_length(arg0);
return _return;
}
func double fmod_studio_command_replay_get_system_object(double command_replay_ref);
-(double) fmod_studio_command_replay_get_system_object:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_get_system_object(arg0);
return _return;
}
func double fmod_studio_command_replay_is_valid(double command_replay_ref);
-(double) fmod_studio_command_replay_is_valid:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_is_valid(arg0);
return _return;
}
func double fmod_studio_command_replay_set_user_data(double command_replay_ref, double data);
-(double) fmod_studio_command_replay_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_command_replay_set_user_data(arg0, arg1);
return _return;
}
func double fmod_studio_command_replay_get_user_data(double command_replay_ref);
-(double) fmod_studio_command_replay_get_user_data:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_get_user_data(arg0);
return _return;
}
func double fmod_studio_command_replay_release(double command_replay_ref);
-(double) fmod_studio_command_replay_release:(double) arg0 {
auto _return = (double) fmod_studio_command_replay_release(arg0);
return _return;
}
func double fmod_studio_event_description_create_instance(double event_description_ref);
-(double) fmod_studio_event_description_create_instance:(double) arg0 {
auto _return = (double) fmod_studio_event_description_create_instance(arg0);
return _return;
}
func double fmod_studio_event_description_get_instance_count(double event_description_ref);
-(double) fmod_studio_event_description_get_instance_count:(double) arg0 {
auto _return = (double) fmod_studio_event_description_get_instance_count(arg0);
return _return;
}
func double fmod_studio_event_description_get_instance_list_multiplatform(double event_description_ref, char* buff_return);
-(double) fmod_studio_event_description_get_instance_list_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_event_description_get_instance_list_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_event_description_release_all_instances(double event_description_ref);
-(double) fmod_studio_event_description_release_all_instances:(double) arg0 {
auto _return = (double) fmod_studio_event_description_release_all_instances(arg0);
return _return;
}
func double fmod_studio_event_description_load_sample_data(double event_description_ref);
-(double) fmod_studio_event_description_load_sample_data:(double) arg0 {
auto _return = (double) fmod_studio_event_description_load_sample_data(arg0);
return _return;
}
func double fmod_studio_event_description_unload_sample_data(double event_description_ref);
-(double) fmod_studio_event_description_unload_sample_data:(double) arg0 {
auto _return = (double) fmod_studio_event_description_unload_sample_data(arg0);
return _return;
}
func double fmod_studio_event_description_get_sample_loading_state(double event_description_ref);
-(double) fmod_studio_event_description_get_sample_loading_state:(double) arg0 {
auto _return = (double) fmod_studio_event_description_get_sample_loading_state(arg0);
return _return;
}
func double fmod_studio_event_description_is_3d(double event_description_ref);
-(double) fmod_studio_event_description_is_3d:(double) arg0 {
auto _return = (double) fmod_studio_event_description_is_3d(arg0);
return _return;
}
func double fmod_studio_event_description_is_doppler_enabled(double event_description_ref);
-(double) fmod_studio_event_description_is_doppler_enabled:(double) arg0 {
auto _return = (double) fmod_studio_event_description_is_doppler_enabled(arg0);
return _return;
}
func double fmod_studio_event_description_is_oneshot(double event_description_ref);
-(double) fmod_studio_event_description_is_oneshot:(double) arg0 {
auto _return = (double) fmod_studio_event_description_is_oneshot(arg0);
return _return;
}
func double fmod_studio_event_description_is_snapshot(double event_description_ref);
-(double) fmod_studio_event_description_is_snapshot:(double) arg0 {
auto _return = (double) fmod_studio_event_description_is_snapshot(arg0);
return _return;
}
func double fmod_studio_event_description_is_stream(double event_description_ref);
-(double) fmod_studio_event_description_is_stream:(double) arg0 {
auto _return = (double) fmod_studio_event_description_is_stream(arg0);
return _return;
}
func double fmod_studio_event_description_has_sustain_point(double event_description_ref);
-(double) fmod_studio_event_description_has_sustain_point:(double) arg0 {
auto _return = (double) fmod_studio_event_description_has_sustain_point(arg0);
return _return;
}
func double fmod_studio_event_description_get_min_max_distance_multiplatform(double event_description_ref, char* buff_return);
-(double) fmod_studio_event_description_get_min_max_distance_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_event_description_get_min_max_distance_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_event_description_get_sound_size(double event_description_ref);
-(double) fmod_studio_event_description_get_sound_size:(double) arg0 {
auto _return = (double) fmod_studio_event_description_get_sound_size(arg0);
return _return;
}
func double fmod_studio_event_description_get_parameter_description_by_name_multiplatform(double event_description_ref, char* name, char* buff_return);
-(double) fmod_studio_event_description_get_parameter_description_by_name_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_event_description_get_parameter_description_by_name_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_description_get_parameter_description_by_id_multiplatform(double event_description_ref, char* buff_args, char* buff_return);
-(double) fmod_studio_event_description_get_parameter_description_by_id_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_event_description_get_parameter_description_by_id_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_description_get_parameter_description_by_index_multiplatform(double event_description_ref, double index, char* buff_return);
-(double) fmod_studio_event_description_get_parameter_description_by_index_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_event_description_get_parameter_description_by_index_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_description_get_parameter_description_count(double event_description_ref);
-(double) fmod_studio_event_description_get_parameter_description_count:(double) arg0 {
auto _return = (double) fmod_studio_event_description_get_parameter_description_count(arg0);
return _return;
}
func char* fmod_studio_event_description_get_parameter_label_by_name(double event_description_ref, char* name, double label_index);
-(char*) fmod_studio_event_description_get_parameter_label_by_name:(double) arg0 arg1:(char*) arg1 arg2:(double) arg2 {
auto _return = (char*) fmod_studio_event_description_get_parameter_label_by_name(arg0, arg1, arg2);
return _return;
}
func char* fmod_studio_event_description_get_parameter_label_by_id_multiplatform(double event_description_ref, char* buff_args, double label_index);
-(char*) fmod_studio_event_description_get_parameter_label_by_id_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(double) arg2 {
auto _return = (char*) fmod_studio_event_description_get_parameter_label_by_id_multiplatform(arg0, arg1, arg2);
return _return;
}
func char* fmod_studio_event_description_get_parameter_label_by_index(double event_description_ref, double index, double label_index);
-(char*) fmod_studio_event_description_get_parameter_label_by_index:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (char*) fmod_studio_event_description_get_parameter_label_by_index(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_description_get_user_property_multiplatform(double event_description_ref, char* name, char* buff_return);
-(double) fmod_studio_event_description_get_user_property_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_event_description_get_user_property_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_description_get_user_property_by_index_multiplatform(double event_description_ref, double index, char* buff_return);
-(double) fmod_studio_event_description_get_user_property_by_index_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_event_description_get_user_property_by_index_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_description_get_user_property_count(double event_description_ref);
-(double) fmod_studio_event_description_get_user_property_count:(double) arg0 {
auto _return = (double) fmod_studio_event_description_get_user_property_count(arg0);
return _return;
}
func char* fmod_studio_event_description_get_id(double event_description_ref);
-(char*) fmod_studio_event_description_get_id:(double) arg0 {
auto _return = (char*) fmod_studio_event_description_get_id(arg0);
return _return;
}
func double fmod_studio_event_description_get_length(double event_description_ref);
-(double) fmod_studio_event_description_get_length:(double) arg0 {
auto _return = (double) fmod_studio_event_description_get_length(arg0);
return _return;
}
func char* fmod_studio_event_description_get_path(double event_description_ref);
-(char*) fmod_studio_event_description_get_path:(double) arg0 {
auto _return = (char*) fmod_studio_event_description_get_path(arg0);
return _return;
}
func double fmod_studio_event_description_set_callback(double event_description_ref, double type);
-(double) fmod_studio_event_description_set_callback:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_description_set_callback(arg0, arg1);
return _return;
}
func double fmod_studio_event_description_set_user_data(double event_description_ref, double data);
-(double) fmod_studio_event_description_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_description_set_user_data(arg0, arg1);
return _return;
}
func double fmod_studio_event_description_get_user_data(double event_description_ref);
-(double) fmod_studio_event_description_get_user_data:(double) arg0 {
auto _return = (double) fmod_studio_event_description_get_user_data(arg0);
return _return;
}
func double fmod_studio_event_description_is_valid(double event_description_ref);
-(double) fmod_studio_event_description_is_valid:(double) arg0 {
auto _return = (double) fmod_studio_event_description_is_valid(arg0);
return _return;
}
func double fmod_studio_event_instance_start(double event_instance_ref);
-(double) fmod_studio_event_instance_start:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_start(arg0);
return _return;
}
func double fmod_studio_event_instance_stop(double event_instance_ref, double mode);
-(double) fmod_studio_event_instance_stop:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_stop(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_playback_state(double event_instance_ref);
-(double) fmod_studio_event_instance_get_playback_state:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_get_playback_state(arg0);
return _return;
}
func double fmod_studio_event_instance_set_paused(double event_instance_ref, double pause);
-(double) fmod_studio_event_instance_set_paused:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_set_paused(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_paused(double event_instance_ref);
-(double) fmod_studio_event_instance_get_paused:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_get_paused(arg0);
return _return;
}
func double fmod_studio_event_instance_keyoff(double event_instance_ref);
-(double) fmod_studio_event_instance_keyoff:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_keyoff(arg0);
return _return;
}
func double fmod_studio_event_instance_set_pitch(double event_instance_ref, double pitch);
-(double) fmod_studio_event_instance_set_pitch:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_set_pitch(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_pitch(double event_instance_ref);
-(double) fmod_studio_event_instance_get_pitch:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_get_pitch(arg0);
return _return;
}
func double fmod_studio_event_instance_set_property(double event_instance_ref, double property, double value);
-(double) fmod_studio_event_instance_set_property:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_studio_event_instance_set_property(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_instance_get_property(double event_instance_ref, double property);
-(double) fmod_studio_event_instance_get_property:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_get_property(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_set_timeline_position(double event_instance_ref, double position);
-(double) fmod_studio_event_instance_set_timeline_position:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_set_timeline_position(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_timeline_position(double event_instance_ref);
-(double) fmod_studio_event_instance_get_timeline_position:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_get_timeline_position(arg0);
return _return;
}
func double fmod_studio_event_instance_set_volume(double event_instance_ref, double volume);
-(double) fmod_studio_event_instance_set_volume:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_set_volume(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_volume_multiplatform(double event_instance_ref, char* buff_return);
-(double) fmod_studio_event_instance_get_volume_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_event_instance_get_volume_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_is_virtual(double event_instance_ref);
-(double) fmod_studio_event_instance_is_virtual:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_is_virtual(arg0);
return _return;
}
func double fmod_studio_event_instance_set_3d_attributes_multiplatform(double event_instance_ref, char* buff_args);
-(double) fmod_studio_event_instance_set_3d_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_event_instance_set_3d_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_3d_attributes_multiplatform(double event_instance_ref, char* buff_return);
-(double) fmod_studio_event_instance_get_3d_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_event_instance_get_3d_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_set_listener_mask(double event_instance_ref, double mask);
-(double) fmod_studio_event_instance_set_listener_mask:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_set_listener_mask(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_listener_mask(double event_instance_ref);
-(double) fmod_studio_event_instance_get_listener_mask:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_get_listener_mask(arg0);
return _return;
}
func double fmod_studio_event_instance_get_min_max_distance_multiplatform(double event_instance_ref, char* buff_return);
-(double) fmod_studio_event_instance_get_min_max_distance_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_event_instance_get_min_max_distance_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_set_parameter_by_name_multiplatform(double event_instance_ref, char* name, double value, double ignore_seek_speed);
-(double) fmod_studio_event_instance_set_parameter_by_name_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_studio_event_instance_set_parameter_by_name_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_studio_event_instance_set_parameter_by_name_with_label(double event_instance_ref, char* name, char* label, double ignore_seek_speed);
-(double) fmod_studio_event_instance_set_parameter_by_name_with_label:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_studio_event_instance_set_parameter_by_name_with_label(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_studio_event_instance_get_parameter_by_name_multiplatform(double event_instance_ref, char* name, char* buff_return);
-(double) fmod_studio_event_instance_get_parameter_by_name_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_event_instance_get_parameter_by_name_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_instance_set_parameter_by_id_multiplatform(double event_instance_ref, char* buff_args, double value, double ignore_seek_speed);
-(double) fmod_studio_event_instance_set_parameter_by_id_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_studio_event_instance_set_parameter_by_id_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(double event_instance_ref, char* buff_args, char* label, double ignore_seek_speed);
-(double) fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_studio_event_instance_get_parameter_by_id_multiplatform(double event_instance_ref, char* buff_args, char* buff_return);
-(double) fmod_studio_event_instance_get_parameter_by_id_multiplatform:(double) arg0 arg1:(char*) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_studio_event_instance_get_parameter_by_id_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_instance_get_channel_group(double event_instance_ref);
-(double) fmod_studio_event_instance_get_channel_group:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_get_channel_group(arg0);
return _return;
}
func double fmod_studio_event_instance_set_reverb_level(double event_instance_ref, double index, double level);
-(double) fmod_studio_event_instance_set_reverb_level:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_studio_event_instance_set_reverb_level(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_event_instance_get_reverb_level(double event_instance_ref, double index);
-(double) fmod_studio_event_instance_get_reverb_level:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_get_reverb_level(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_cpu_usage_multiplatform(double event_instance_ref, char* buff_return);
-(double) fmod_studio_event_instance_get_cpu_usage_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_event_instance_get_cpu_usage_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_memory_usage_multiplatform(double event_instance_ref, char* buff_return);
-(double) fmod_studio_event_instance_get_memory_usage_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_event_instance_get_memory_usage_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_set_callback(double event_instance_ref, double type);
-(double) fmod_studio_event_instance_set_callback:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_set_callback(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_set_user_data(double event_instance_ref, double data);
-(double) fmod_studio_event_instance_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_event_instance_set_user_data(arg0, arg1);
return _return;
}
func double fmod_studio_event_instance_get_user_data(double event_instance_ref);
-(double) fmod_studio_event_instance_get_user_data:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_get_user_data(arg0);
return _return;
}
func double fmod_studio_event_instance_get_description(double event_instance_ref);
-(double) fmod_studio_event_instance_get_description:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_get_description(arg0);
return _return;
}
func double fmod_studio_event_instance_release(double event_instance_ref);
-(double) fmod_studio_event_instance_release:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_release(arg0);
return _return;
}
func double fmod_studio_event_instance_is_valid(double event_instance_ref);
-(double) fmod_studio_event_instance_is_valid:(double) arg0 {
auto _return = (double) fmod_studio_event_instance_is_valid(arg0);
return _return;
}
func double fmod_studio_system_create();
-(double) fmod_studio_system_create {
auto _return = (double) fmod_studio_system_create();
return _return;
}
func double fmod_studio_system_init(double max_channels, double studio_flags, double core_flags);
-(double) fmod_studio_system_init:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
    
    AVAudioSession *session = [AVAudioSession sharedInstance];
    NSError *error = nil;
    BOOL success;
    
    success = [session setActive:FALSE error:nil];
    if (strcmp(extOptGetString((char*)"FMOD", (char*)"tvosMicAccess"), "1") == 0) {
        // Add playback and record category to allow microphone access (NOT DYNAMIC)
        success = [session setCategory:AVAudioSessionCategoryPlayAndRecord
                                withOptions:AVAudioSessionCategoryOptionAllowBluetooth |
                                            AVAudioSessionCategoryOptionAllowBluetoothA2DP |
                                            AVAudioSessionCategoryOptionAllowAirPlay
                                 error:&error];
        if (!success) {
            NSLog(@"Error setting category: %@", error.localizedDescription);
        }
    }
    success = [session setActive:TRUE error:nil];

auto _return = (double) fmod_studio_system_init(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_system_release();
-(double) fmod_studio_system_release {
auto _return = (double) fmod_studio_system_release();
return _return;
}
func double fmod_studio_system_update_multiplatform();
-(double) fmod_studio_system_update_multiplatform {
auto _return = (double) fmod_studio_system_update_multiplatform();
return _return;
}
func double fmod_studio_system_flush_commands();
-(double) fmod_studio_system_flush_commands {
auto _return = (double) fmod_studio_system_flush_commands();
return _return;
}
func double fmod_studio_system_flush_sample_loading();
-(double) fmod_studio_system_flush_sample_loading {
auto _return = (double) fmod_studio_system_flush_sample_loading();
return _return;
}
func double fmod_studio_system_load_bank_custom(double flags);
-(double) fmod_studio_system_load_bank_custom:(double) arg0 {
auto _return = (double) fmod_studio_system_load_bank_custom(arg0);
return _return;
}
func double fmod_studio_system_load_bank_file(char* filename, double flags);
-(double) fmod_studio_system_load_bank_file:(char*) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_system_load_bank_file(arg0, arg1);
return _return;
}
func double fmod_studio_system_load_bank_memory_multiplatform(char* buff_data, double length, double mode, double flags);
-(double) fmod_studio_system_load_bank_memory_multiplatform:(char*) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_studio_system_load_bank_memory_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_studio_system_unload_all();
-(double) fmod_studio_system_unload_all {
auto _return = (double) fmod_studio_system_unload_all();
return _return;
}
func double fmod_studio_system_get_bank(char* path);
-(double) fmod_studio_system_get_bank:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_bank(arg0);
return _return;
}
func double fmod_studio_system_get_bank_by_id(char* guid_str);
-(double) fmod_studio_system_get_bank_by_id:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_bank_by_id(arg0);
return _return;
}
func double fmod_studio_system_get_bank_count();
-(double) fmod_studio_system_get_bank_count {
auto _return = (double) fmod_studio_system_get_bank_count();
return _return;
}
func double fmod_studio_system_get_bank_list_multiplatform(char* buff_return);
-(double) fmod_studio_system_get_bank_list_multiplatform:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_bank_list_multiplatform(arg0);
return _return;
}
func double fmod_studio_system_set_listener_attributes_multiplatform(double listener_index, char* buff_args);
-(double) fmod_studio_system_set_listener_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_system_set_listener_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_system_get_listener_attributes_multiplatform(double listener_index, char* buff_return);
-(double) fmod_studio_system_get_listener_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_system_get_listener_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_system_set_listener_weight(double listener_index, double weight);
-(double) fmod_studio_system_set_listener_weight:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_system_set_listener_weight(arg0, arg1);
return _return;
}
func double fmod_studio_system_get_listener_weight(double listener_index);
-(double) fmod_studio_system_get_listener_weight:(double) arg0 {
auto _return = (double) fmod_studio_system_get_listener_weight(arg0);
return _return;
}
func double fmod_studio_system_set_num_listeners(double num);
-(double) fmod_studio_system_set_num_listeners:(double) arg0 {
auto _return = (double) fmod_studio_system_set_num_listeners(arg0);
return _return;
}
func double fmod_studio_system_get_num_listeners();
-(double) fmod_studio_system_get_num_listeners {
auto _return = (double) fmod_studio_system_get_num_listeners();
return _return;
}
func double fmod_studio_system_get_bus(char* path);
-(double) fmod_studio_system_get_bus:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_bus(arg0);
return _return;
}
func double fmod_studio_system_get_bus_by_id(char* guid);
-(double) fmod_studio_system_get_bus_by_id:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_bus_by_id(arg0);
return _return;
}
func double fmod_studio_system_get_event(char* path);
-(double) fmod_studio_system_get_event:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_event(arg0);
return _return;
}
func double fmod_studio_system_get_event_by_id(char* guid_str);
-(double) fmod_studio_system_get_event_by_id:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_event_by_id(arg0);
return _return;
}
func double fmod_studio_system_get_parameter_by_id_multiplatform(char* buff_args, char* buff_return);
-(double) fmod_studio_system_get_parameter_by_id_multiplatform:(char*) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_system_get_parameter_by_id_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_system_set_parameter_by_id_multiplatform(char* buff_args, double value, double ignore_seek_speed);
-(double) fmod_studio_system_set_parameter_by_id_multiplatform:(char*) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_studio_system_set_parameter_by_id_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_system_set_parameter_by_id_with_label_multiplatform(char* buff_args, char* label, double ignore_seek_speed);
-(double) fmod_studio_system_set_parameter_by_id_with_label_multiplatform:(char*) arg0 arg1:(char*) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_studio_system_set_parameter_by_id_with_label_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_system_get_parameter_by_name_multiplatform(char* name, char* buff_return);
-(double) fmod_studio_system_get_parameter_by_name_multiplatform:(char*) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_system_get_parameter_by_name_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_system_set_parameter_by_name_multiplatform(char* name, double value, double ignore_seek_speed);
-(double) fmod_studio_system_set_parameter_by_name_multiplatform:(char*) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_studio_system_set_parameter_by_name_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_system_set_parameter_by_name_with_label_multiplatform(char* name, char* label, double ignore_seek_speed);
-(double) fmod_studio_system_set_parameter_by_name_with_label_multiplatform:(char*) arg0 arg1:(char*) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_studio_system_set_parameter_by_name_with_label_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_studio_system_get_parameter_description_by_name_multiplatform(char* name, char* buff_return);
-(double) fmod_studio_system_get_parameter_description_by_name_multiplatform:(char*) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_system_get_parameter_description_by_name_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_system_get_parameter_description_by_id_multiplatform(char* buff_args, char* buff_return);
-(double) fmod_studio_system_get_parameter_description_by_id_multiplatform:(char*) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_system_get_parameter_description_by_id_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_system_get_parameter_description_count();
-(double) fmod_studio_system_get_parameter_description_count {
auto _return = (double) fmod_studio_system_get_parameter_description_count();
return _return;
}
func double fmod_studio_system_get_parameter_description_list_multiplatform(char* buff_return);
-(double) fmod_studio_system_get_parameter_description_list_multiplatform:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_parameter_description_list_multiplatform(arg0);
return _return;
}
func char* fmod_studio_system_get_parameter_label_by_name(char* name, double labelindex);
-(char*) fmod_studio_system_get_parameter_label_by_name:(char*) arg0 arg1:(double) arg1 {
auto _return = (char*) fmod_studio_system_get_parameter_label_by_name(arg0, arg1);
return _return;
}
func char* fmod_studio_system_get_parameter_label_by_id_multiplatform(char* buff_args, double label_index);
-(char*) fmod_studio_system_get_parameter_label_by_id_multiplatform:(char*) arg0 arg1:(double) arg1 {
auto _return = (char*) fmod_studio_system_get_parameter_label_by_id_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_system_get_vca(char* path);
-(double) fmod_studio_system_get_vca:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_vca(arg0);
return _return;
}
func double fmod_studio_system_get_vca_by_id(char* guid_str);
-(double) fmod_studio_system_get_vca_by_id:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_vca_by_id(arg0);
return _return;
}
func double fmod_studio_system_set_advanced_settings_multiplatform(char* buff_args);
-(double) fmod_studio_system_set_advanced_settings_multiplatform:(char*) arg0 {
auto _return = (double) fmod_studio_system_set_advanced_settings_multiplatform(arg0);
return _return;
}
func double fmod_studio_system_get_advanced_settings_multiplatform(char* buff_return);
-(double) fmod_studio_system_get_advanced_settings_multiplatform:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_advanced_settings_multiplatform(arg0);
return _return;
}
func double fmod_studio_system_start_command_capture(char* filename, double flags);
-(double) fmod_studio_system_start_command_capture:(char*) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_system_start_command_capture(arg0, arg1);
return _return;
}
func double fmod_studio_system_stop_command_capture();
-(double) fmod_studio_system_stop_command_capture {
auto _return = (double) fmod_studio_system_stop_command_capture();
return _return;
}
func double fmod_studio_system_load_command_replay(char* filename, double flags);
-(double) fmod_studio_system_load_command_replay:(char*) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_system_load_command_replay(arg0, arg1);
return _return;
}
func double fmod_studio_system_get_buffer_usage_multiplatform(char* buff_return);
-(double) fmod_studio_system_get_buffer_usage_multiplatform:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_buffer_usage_multiplatform(arg0);
return _return;
}
func double fmod_studio_system_reset_buffer_usage();
-(double) fmod_studio_system_reset_buffer_usage {
auto _return = (double) fmod_studio_system_reset_buffer_usage();
return _return;
}
func double fmod_studio_system_get_cpu_usage_multiplatform(char* buff_return);
-(double) fmod_studio_system_get_cpu_usage_multiplatform:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_cpu_usage_multiplatform(arg0);
return _return;
}
func double fmod_studio_system_get_memory_usage_multiplatform(char* buff_return);
-(double) fmod_studio_system_get_memory_usage_multiplatform:(char*) arg0 {
auto _return = (double) fmod_studio_system_get_memory_usage_multiplatform(arg0);
return _return;
}
func double fmod_studio_system_set_callback(double type);
-(double) fmod_studio_system_set_callback:(double) arg0 {
auto _return = (double) fmod_studio_system_set_callback(arg0);
return _return;
}
func double fmod_studio_system_set_user_data(double data);
-(double) fmod_studio_system_set_user_data:(double) arg0 {
auto _return = (double) fmod_studio_system_set_user_data(arg0);
return _return;
}
func double fmod_studio_system_get_user_data();
-(double) fmod_studio_system_get_user_data {
auto _return = (double) fmod_studio_system_get_user_data();
return _return;
}
func double fmod_studio_system_get_sound_info_multiplatform(char* key, char* buff_return);
-(double) fmod_studio_system_get_sound_info_multiplatform:(char*) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_studio_system_get_sound_info_multiplatform(arg0, arg1);
return _return;
}
func double fmod_studio_system_get_core_system();
-(double) fmod_studio_system_get_core_system {
auto _return = (double) fmod_studio_system_get_core_system();
return _return;
}
func char* fmod_studio_system_lookup_id(char* path);
-(char*) fmod_studio_system_lookup_id:(char*) arg0 {
auto _return = (char*) fmod_studio_system_lookup_id(arg0);
return _return;
}
func char* fmod_studio_system_lookup_path(char* str_guid);
-(char*) fmod_studio_system_lookup_path:(char*) arg0 {
auto _return = (char*) fmod_studio_system_lookup_path(arg0);
return _return;
}
func double fmod_studio_system_is_valid();
-(double) fmod_studio_system_is_valid {
auto _return = (double) fmod_studio_system_is_valid();
return _return;
}
func double fmod_studio_vca_set_volume(double vca_ref, double volume);
-(double) fmod_studio_vca_set_volume:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_studio_vca_set_volume(arg0, arg1);
return _return;
}
func double fmod_studio_vca_get_volume(double vca_ref);
-(double) fmod_studio_vca_get_volume:(double) arg0 {
auto _return = (double) fmod_studio_vca_get_volume(arg0);
return _return;
}
func char* fmod_studio_vca_get_id(double vca_ref);
-(char*) fmod_studio_vca_get_id:(double) arg0 {
auto _return = (char*) fmod_studio_vca_get_id(arg0);
return _return;
}
func char* fmod_studio_vca_get_path(double vca_ref);
-(char*) fmod_studio_vca_get_path:(double) arg0 {
auto _return = (char*) fmod_studio_vca_get_path(arg0);
return _return;
}
func double fmod_studio_vca_is_valid(double vca_ref);
-(double) fmod_studio_vca_is_valid:(double) arg0 {
auto _return = (double) fmod_studio_vca_is_valid(arg0);
return _return;
}
func double fmod_system_create();
-(double) fmod_system_create {
auto _return = (double) fmod_system_create();
return _return;
}
func double fmod_system_select(double system_ref);
-(double) fmod_system_select:(double) arg0 {
auto _return = (double) fmod_system_select(arg0);
return _return;
}
func double fmod_system_count();
-(double) fmod_system_count {
auto _return = (double) fmod_system_count();
return _return;
}
func double fmod_system_init(double max_channels, double flags);
-(double) fmod_system_init:(double) arg0 arg1:(double) arg1 {
    
    AVAudioSession *session = [AVAudioSession sharedInstance];
    NSError *error = nil;
    BOOL success;
    
    success = [session setActive:FALSE error:nil];
    if (strcmp(extOptGetString((char*)"FMOD", (char*)"tvosMicAccess"), "1") == 0) {
        // Add playback and record category to allow microphone access (NOT DYNAMIC)
        success = [session setCategory:AVAudioSessionCategoryPlayAndRecord
                                withOptions:AVAudioSessionCategoryOptionAllowBluetooth |
                                            AVAudioSessionCategoryOptionAllowBluetoothA2DP |
                                            AVAudioSessionCategoryOptionAllowAirPlay
                                 error:&error];
        if (!success) {
            NSLog(@"Error setting category: %@", error.localizedDescription);
        }
    }
    success = [session setActive:TRUE error:nil];
    
auto _return = (double) fmod_system_init(arg0, arg1);
return _return;
}
func double fmod_system_release(double system_ref);
-(double) fmod_system_release:(double) arg0 {
auto _return = (double) fmod_system_release(arg0);
return _return;
}
func double fmod_system_close(double system_ref);
-(double) fmod_system_close:(double) arg0 {
auto _return = (double) fmod_system_close(arg0);
return _return;
}
func double fmod_system_update_multiplatform();
-(double) fmod_system_update_multiplatform {
auto _return = (double) fmod_system_update_multiplatform();
return _return;
}
func double fmod_system_mixer_suspend();
-(double) fmod_system_mixer_suspend {
auto _return = (double) fmod_system_mixer_suspend();
return _return;
}
func double fmod_system_mixer_resume();
-(double) fmod_system_mixer_resume {
auto _return = (double) fmod_system_mixer_resume();
return _return;
}
func double fmod_system_set_output(double output);
-(double) fmod_system_set_output:(double) arg0 {
auto _return = (double) fmod_system_set_output(arg0);
return _return;
}
func double fmod_system_get_output();
-(double) fmod_system_get_output {
auto _return = (double) fmod_system_get_output();
return _return;
}
func double fmod_system_get_num_drivers();
-(double) fmod_system_get_num_drivers {
auto _return = (double) fmod_system_get_num_drivers();
return _return;
}
func double fmod_system_get_driver_info_multiplatform(double driver_index, char* buff_return);
-(double) fmod_system_get_driver_info_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_system_get_driver_info_multiplatform(arg0, arg1);
return _return;
}
func double fmod_system_set_driver(double driver);
-(double) fmod_system_set_driver:(double) arg0 {
auto _return = (double) fmod_system_set_driver(arg0);
return _return;
}
func double fmod_system_get_driver();
-(double) fmod_system_get_driver {
auto _return = (double) fmod_system_get_driver();
return _return;
}
func double fmod_system_set_software_channels(double software_channels);
-(double) fmod_system_set_software_channels:(double) arg0 {
auto _return = (double) fmod_system_set_software_channels(arg0);
return _return;
}
func double fmod_system_get_software_channels();
-(double) fmod_system_get_software_channels {
auto _return = (double) fmod_system_get_software_channels();
return _return;
}
func double fmod_system_set_software_format(double sample_rate, double speaker_mode, double num_raw_speakers);
-(double) fmod_system_set_software_format:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
    
    NSError *error = nil;
    BOOL success = NO;
    AVAudioSession *session = [AVAudioSession sharedInstance];
    success = [session setPreferredSampleRate:arg0 error:&error];
    if (!success) {
        NSLog(@"Error setting preferred sample rate: %@", error.localizedDescription);
    }
    
auto _return = (double) fmod_system_set_software_format(arg0, arg1, arg2);
return _return;
}
func double fmod_system_get_software_format_multiplatform(char* buff_return);
-(double) fmod_system_get_software_format_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_software_format_multiplatform(arg0);
return _return;
}
func double fmod_system_set_dsp_buffer_size(double buff_size, double num_buffers);
-(double) fmod_system_set_dsp_buffer_size:(double) arg0 arg1:(double) arg1 {
    
    NSError *error = nil;
    BOOL success = NO;
    AVAudioSession *session = [AVAudioSession sharedInstance];
    double currentSampleRate = session.sampleRate;
    
    // Set preferred IO buffer duration
    double blockSize = arg0 / currentSampleRate; // Calculate buffer duration based on sample rate
    success = [session setPreferredIOBufferDuration:blockSize error:&error];
    if (!success) {
        NSLog(@"Error setting preferred IO buffer duration: %@", error.localizedDescription);
    }
    
auto _return = (double) fmod_system_set_dsp_buffer_size(arg0, arg1);
return _return;
}
func double fmod_system_get_dsp_buffer_size_multiplatform(char* buff_return);
-(double) fmod_system_get_dsp_buffer_size_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_dsp_buffer_size_multiplatform(arg0);
return _return;
}
func double fmod_system_set_stream_buffer_size(double file_buffer_size, double file_buffer_size_type);
-(double) fmod_system_set_stream_buffer_size:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_system_set_stream_buffer_size(arg0, arg1);
return _return;
}
func double fmod_system_get_stream_buffer_size_multiplatform(char* buff_return);
-(double) fmod_system_get_stream_buffer_size_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_stream_buffer_size_multiplatform(arg0);
return _return;
}
func double fmod_system_set_advanced_settings_multiplatform(char* buff_args);
-(double) fmod_system_set_advanced_settings_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_set_advanced_settings_multiplatform(arg0);
return _return;
}
func double fmod_system_get_advanced_settings_multiplatform(char* buff_return);
-(double) fmod_system_get_advanced_settings_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_advanced_settings_multiplatform(arg0);
return _return;
}
func double fmod_system_set_speaker_position(double speaker, double x, double y, double active);
-(double) fmod_system_set_speaker_position:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(double) arg3 {
auto _return = (double) fmod_system_set_speaker_position(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_system_get_speaker_position_multiplatform(double speaker, char* buff_return);
-(double) fmod_system_get_speaker_position_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_system_get_speaker_position_multiplatform(arg0, arg1);
return _return;
}
func double fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale);
-(double) fmod_system_set_3d_settings:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_system_set_3d_settings(arg0, arg1, arg2);
return _return;
}
func double fmod_system_get_3d_settings_multiplatform(char* buff_return);
-(double) fmod_system_get_3d_settings_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_3d_settings_multiplatform(arg0);
return _return;
}
func double fmod_system_set_3d_num_listeners(double num);
-(double) fmod_system_set_3d_num_listeners:(double) arg0 {
auto _return = (double) fmod_system_set_3d_num_listeners(arg0);
return _return;
}
func double fmod_system_get_3d_num_listeners();
-(double) fmod_system_get_3d_num_listeners {
auto _return = (double) fmod_system_get_3d_num_listeners();
return _return;
}
func double fmod_system_set_3d_rolloff_callback();
-(double) fmod_system_set_3d_rolloff_callback {
auto _return = (double) fmod_system_set_3d_rolloff_callback();
return _return;
}
func double fmod_system_set_network_proxy(char* proxy);
-(double) fmod_system_set_network_proxy:(char*) arg0 {
auto _return = (double) fmod_system_set_network_proxy(arg0);
return _return;
}
func char* fmod_system_get_network_proxy();
-(char*) fmod_system_get_network_proxy {
auto _return = (char*) fmod_system_get_network_proxy();
return _return;
}
func double fmod_system_set_network_timeout(double timeout);
-(double) fmod_system_set_network_timeout:(double) arg0 {
auto _return = (double) fmod_system_set_network_timeout(arg0);
return _return;
}
func double fmod_system_get_network_timeout();
-(double) fmod_system_get_network_timeout {
auto _return = (double) fmod_system_get_network_timeout();
return _return;
}
func double fmod_system_get_version();
-(double) fmod_system_get_version {
auto _return = (double) fmod_system_get_version();
return _return;
}
func double fmod_system_get_channels_playing_multiplatform(char* buff_return);
-(double) fmod_system_get_channels_playing_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_channels_playing_multiplatform(arg0);
return _return;
}
func double fmod_system_get_cpu_usage_multiplatform(char* buff_return);
-(double) fmod_system_get_cpu_usage_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_cpu_usage_multiplatform(arg0);
return _return;
}
func double fmod_system_get_file_usage_multiplatform(char* buff_return);
-(double) fmod_system_get_file_usage_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_file_usage_multiplatform(arg0);
return _return;
}
func double fmod_system_get_default_mix_matrix_multiplatform(double source_speaker_mode, double target_speaker_mode, double matrix_hop, char* buff_return);
-(double) fmod_system_get_default_mix_matrix_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 arg3:(char*) arg3 {
auto _return = (double) fmod_system_get_default_mix_matrix_multiplatform(arg0, arg1, arg2, arg3);
return _return;
}
func double fmod_system_get_speaker_mode_channels(double mode);
-(double) fmod_system_get_speaker_mode_channels:(double) arg0 {
auto _return = (double) fmod_system_get_speaker_mode_channels(arg0);
return _return;
}
func double fmod_system_create_sound_multiplatform(char* name_or_data, double mode, char* buff_extra);
-(double) fmod_system_create_sound_multiplatform:(char*) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_system_create_sound_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_system_create_stream_multiplatform(char* name_or_data, double mode, char* buff_extra);
-(double) fmod_system_create_stream_multiplatform:(char*) arg0 arg1:(double) arg1 arg2:(char*) arg2 {
auto _return = (double) fmod_system_create_stream_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_system_create_dsp();
-(double) fmod_system_create_dsp {
auto _return = (double) fmod_system_create_dsp();
return _return;
}
func double fmod_system_create_dsp_by_type(double type);
-(double) fmod_system_create_dsp_by_type:(double) arg0 {
auto _return = (double) fmod_system_create_dsp_by_type(arg0);
return _return;
}
func double fmod_system_create_channel_group(char* name);
-(double) fmod_system_create_channel_group:(char*) arg0 {
auto _return = (double) fmod_system_create_channel_group(arg0);
return _return;
}
func double fmod_system_create_sound_group(char* name);
-(double) fmod_system_create_sound_group:(char*) arg0 {
auto _return = (double) fmod_system_create_sound_group(arg0);
return _return;
}
func double fmod_system_create_reverb_3d();
-(double) fmod_system_create_reverb_3d {
auto _return = (double) fmod_system_create_reverb_3d();
return _return;
}
func double fmod_system_play_sound_multiplatform(double sound_ref, double channel_group_ref, double pause);
-(double) fmod_system_play_sound_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_system_play_sound_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_system_play_dsp_multiplatform(double dsp_ref, double channel_group_ref, double pause);
-(double) fmod_system_play_dsp_multiplatform:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_system_play_dsp_multiplatform(arg0, arg1, arg2);
return _return;
}
func double fmod_system_get_channel(double index);
-(double) fmod_system_get_channel:(double) arg0 {
auto _return = (double) fmod_system_get_channel(arg0);
return _return;
}
func double fmod_system_get_master_channel_group();
-(double) fmod_system_get_master_channel_group {
auto _return = (double) fmod_system_get_master_channel_group();
return _return;
}
func double fmod_system_get_master_sound_group();
-(double) fmod_system_get_master_sound_group {
auto _return = (double) fmod_system_get_master_sound_group();
return _return;
}
func double fmod_system_set_3d_listener_attributes_multiplatform(double listener_index, char* buff_args);
-(double) fmod_system_set_3d_listener_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_system_set_3d_listener_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_system_get_3d_listener_attributes_multiplatform(double listener_index, char* buff_return);
-(double) fmod_system_get_3d_listener_attributes_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_system_get_3d_listener_attributes_multiplatform(arg0, arg1);
return _return;
}
func double fmod_system_set_reverb_properties_multiplatform(double instance_index, char* buff_args);
-(double) fmod_system_set_reverb_properties_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_system_set_reverb_properties_multiplatform(arg0, arg1);
return _return;
}
func double fmod_system_get_reverb_properties_multiplatform(double instance_index, char* buff_return);
-(double) fmod_system_get_reverb_properties_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_system_get_reverb_properties_multiplatform(arg0, arg1);
return _return;
}
func double fmod_system_attach_channel_group_to_port_multiplatform(char* buff_args);
-(double) fmod_system_attach_channel_group_to_port_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_attach_channel_group_to_port_multiplatform(arg0);
return _return;
}
func double fmod_system_detach_channel_group_from_port(double channel_group_ref);
-(double) fmod_system_detach_channel_group_from_port:(double) arg0 {
auto _return = (double) fmod_system_detach_channel_group_from_port(arg0);
return _return;
}
func double fmod_system_get_record_num_drivers_multiplatform(char* buff_return);
-(double) fmod_system_get_record_num_drivers_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_record_num_drivers_multiplatform(arg0);
return _return;
}
func double fmod_system_get_record_driver_info_multiplatform(double recording_device_index, char* buff_return);
-(double) fmod_system_get_record_driver_info_multiplatform:(double) arg0 arg1:(char*) arg1 {
auto _return = (double) fmod_system_get_record_driver_info_multiplatform(arg0, arg1);
return _return;
}
func double fmod_system_get_record_position(double device_index);
-(double) fmod_system_get_record_position:(double) arg0 {
auto _return = (double) fmod_system_get_record_position(arg0);
return _return;
}
func double fmod_system_record_start(double device_index, double sound_ref, double loop);
-(double) fmod_system_record_start:(double) arg0 arg1:(double) arg1 arg2:(double) arg2 {
auto _return = (double) fmod_system_record_start(arg0, arg1, arg2);
return _return;
}
func double fmod_system_record_stop(double device_index);
-(double) fmod_system_record_stop:(double) arg0 {
auto _return = (double) fmod_system_record_stop(arg0);
return _return;
}
func double fmod_system_is_recording(double device_index);
-(double) fmod_system_is_recording:(double) arg0 {
auto _return = (double) fmod_system_is_recording(arg0);
return _return;
}
func double fmod_system_create_geometry(double max_polygons, double max_vertices);
-(double) fmod_system_create_geometry:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_system_create_geometry(arg0, arg1);
return _return;
}
func double fmod_system_set_geometry_settings(double max_world_size);
-(double) fmod_system_set_geometry_settings:(double) arg0 {
auto _return = (double) fmod_system_set_geometry_settings(arg0);
return _return;
}
func double fmod_system_get_geometry_settings();
-(double) fmod_system_get_geometry_settings {
auto _return = (double) fmod_system_get_geometry_settings();
return _return;
}
func double fmod_system_load_geometry_multiplatform(char* buff_args, double length);
-(double) fmod_system_load_geometry_multiplatform:(char*) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_system_load_geometry_multiplatform(arg0, arg1);
return _return;
}
func double fmod_system_get_geometry_occlusion_multiplatform(char* buff_return);
-(double) fmod_system_get_geometry_occlusion_multiplatform:(char*) arg0 {
auto _return = (double) fmod_system_get_geometry_occlusion_multiplatform(arg0);
return _return;
}
func double fmod_system_lock_dsp();
-(double) fmod_system_lock_dsp {
auto _return = (double) fmod_system_lock_dsp();
return _return;
}
func double fmod_system_unlock_dsp();
-(double) fmod_system_unlock_dsp {
auto _return = (double) fmod_system_unlock_dsp();
return _return;
}
func double fmod_system_set_callback(double type);
-(double) fmod_system_set_callback:(double) arg0 {
auto _return = (double) fmod_system_set_callback(arg0);
return _return;
}
func double fmod_system_set_user_data(double channel_control_ref, double data);
-(double) fmod_system_set_user_data:(double) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_system_set_user_data(arg0, arg1);
return _return;
}
func double fmod_system_get_user_data(double channel_control_ref);
-(double) fmod_system_get_user_data:(double) arg0 {
auto _return = (double) fmod_system_get_user_data(arg0);
return _return;
}
func double fmod_fetch_callbacks(char* buffer, double length);
-(double) fmod_fetch_callbacks:(char*) arg0 arg1:(double) arg1 {
auto _return = (double) fmod_fetch_callbacks(arg0, arg1);
return _return;
}
func double fmod_last_result();
-(double) fmod_last_result {
auto _return = (double) fmod_last_result();
return _return;
}

//////////////////////////////////////// CALLBACKS

-(void) Init
{
}

@end

