#include <jni.h>



extern "C" double fmod_channel_set_frequency(double channel_ref, double frequency);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelsetfrequency(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_set_frequency(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_get_frequency(double channel_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetfrequency(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_get_frequency(arg0);
    return _return;
}
extern "C" double fmod_channel_set_priority(double channel_ref, double priority);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelsetpriority(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_set_priority(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_get_priority(double channel_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetpriority(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_get_priority(arg0);
    return _return;
}
extern "C" double fmod_channel_set_position(double channel_ref, double position, double time_unit);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelsetposition(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_channel_set_position(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_channel_get_position(double channel_ref, double time_unit);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetposition(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_get_position(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_set_channel_group(double channel_ref, double channel_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelsetchannelgroup(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_set_channel_group(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_get_channel_group(double channel_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetchannelgroup(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_get_channel_group(arg0);
    return _return;
}
extern "C" double fmod_channel_set_loop_count(double channel_ref, double loop_count);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelsetloopcount(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_set_loop_count(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_get_loop_count(double channel_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetloopcount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_get_loop_count(arg0);
    return _return;
}
extern "C" double fmod_channel_set_loop_points(double channel_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelsetlooppoints(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4)
{
    auto _return = (jdouble) fmod_channel_set_loop_points(arg0,arg1,arg2,arg3,arg4);
    return _return;
}
extern "C" double fmod_channel_get_loop_points_multiplatform(double channel_ref, double loop_start_type, double loop_end_type, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetlooppointsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jobject arg3)
{
	char* _arg3 = (char*)env->GetDirectBufferAddress(arg3);
    auto _return = (jdouble) fmod_channel_get_loop_points_multiplatform(arg0,arg1,arg2,_arg3);
    return _return;
}
extern "C" double fmod_channel_is_virtual(double channel_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelisvirtual(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_is_virtual(arg0);
    return _return;
}
extern "C" double fmod_channel_get_current_sound(double channel_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetcurrentsound(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_get_current_sound(arg0);
    return _return;
}
extern "C" double fmod_channel_get_index(double channel_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetindex(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_get_index(arg0);
    return _return;
}
extern "C" double fmod_channel_get_system_object(double channel_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgetsystemobject(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_get_system_object(arg0);
    return _return;
}
extern "C" double fmod_channel_control_is_playing(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolisplaying(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_is_playing(arg0);
    return _return;
}
extern "C" double fmod_channel_control_stop(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolstop(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_stop(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_paused(double channel_control_ref, double paused);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetpaused(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_paused(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_paused(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetpaused(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_paused(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_mode(double channel_control_ref, double mode);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetmode(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_mode(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_mode(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetmode(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_mode(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_pitch(double channel_control_ref, double pitch);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetpitch(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_pitch(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_pitch(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetpitch(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_pitch(arg0);
    return _return;
}
extern "C" double fmod_channel_control_get_audibility(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetaudibility(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_audibility(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_volume(double channel_control_ref, double volume);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetvolume(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_volume(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_volume(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetvolume(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_volume(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_volume_ramp(double channel_control_ref, double ramp);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetvolumeramp(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_volume_ramp(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_volume_ramp(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetvolumeramp(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_volume_ramp(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_mute(double channel_control_ref, double mute);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetmute(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_mute(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_mute(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetmute(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_mute(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_attributes_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3dattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_set_3d_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_attributes_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3dattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_3d_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_cone_orientation_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3dconeorientationmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_set_3d_cone_orientation_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_cone_orientation_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3dconeorientationmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_3d_cone_orientation_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_cone_settings(double channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3dconesettings(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
{
    auto _return = (jdouble) fmod_channel_control_set_3d_cone_settings(arg0,arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_cone_settings_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3dconesettingsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_3d_cone_settings_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_custom_rolloff_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3dcustomrolloffmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_set_3d_custom_rolloff_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_custom_rolloff_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3dcustomrolloffmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_3d_custom_rolloff_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_distance_filter(double channel_control_ref, double custom, double custom_level, double center_freq);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3ddistancefilter(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
{
    auto _return = (jdouble) fmod_channel_control_set_3d_distance_filter(arg0,arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_distance_filter_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3ddistancefiltermultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_3d_distance_filter_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_doppler_level(double channel_control_ref, double level);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3ddopplerlevel(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_3d_doppler_level(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_doppler_level(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3ddopplerlevel(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_3d_doppler_level(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_level(double channel_control_ref, double level);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3dlevel(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_3d_level(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_level(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3dlevel(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_3d_level(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_min_max_distance(double channel_control_ref, double min, double max);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3dminmaxdistance(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_channel_control_set_3d_min_max_distance(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_min_max_distance_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3dminmaxdistancemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_3d_min_max_distance_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_occlusion(double channel_control_ref, double direct_occlusion, double reverb_occlusion);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3docclusion(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_channel_control_set_3d_occlusion(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_occlusion_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3docclusionmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_3d_occlusion_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_3d_spread(double channel_control_ref, double angle);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolset3dspread(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_3d_spread(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_3d_spread(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolget3dspread(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_3d_spread(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_pan(double channel_control_ref, double pan);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetpan(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_pan(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_mix_levels_input_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetmixlevelsinputmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_set_mix_levels_input_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_mix_levels_output(double channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetmixlevelsoutput(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6, jdouble arg7, jdouble arg8)
{
    auto _return = (jdouble) fmod_channel_control_set_mix_levels_output(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
    return _return;
}
extern "C" double fmod_channel_control_set_mix_matrix_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetmixmatrixmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_set_mix_matrix_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_mix_matrix_multiplatform(double channel_control_ref, double in_channel_hop, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetmixmatrixmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_channel_control_get_mix_matrix_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_channel_control_set_reverb_properties(double channel_control_ref, double reverb_instance, double wet);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetreverbproperties(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_channel_control_set_reverb_properties(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_channel_control_get_reverb_properties(double channel_control_ref, double reverb_instance);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetreverbproperties(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_get_reverb_properties(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_low_pass_gain(double channel_control_ref, double gain);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetlowpassgain(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_low_pass_gain(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_low_pass_gain(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetlowpassgain(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_low_pass_gain(arg0);
    return _return;
}
extern "C" double fmod_channel_control_add_dsp(double channel_control_ref, double dsp_chain_offset, double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontroladddsp(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_channel_control_add_dsp(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_channel_control_remove_dsp(double channel_control_ref, double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolremovedsp(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_remove_dsp(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_num_dsps(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetnumdsps(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_num_dsps(arg0);
    return _return;
}
extern "C" double fmod_channel_control_get_dsp(double channel_control_ref, double index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetdsp(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_get_dsp(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_dsp_index(double channel_control_ref, double dsp_ref, double chain_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetdspindex(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_channel_control_set_dsp_index(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_channel_control_get_dsp_index(double channel_control_ref, double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetdspindex(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_get_dsp_index(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_dsp_clock_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetdspclockmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_dsp_clock_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_delay_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetdelaymultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_set_delay_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_delay_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetdelaymultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_delay_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_add_fade_point_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontroladdfadepointmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_add_fade_point_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_fade_point_ramp_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetfadepointrampmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_set_fade_point_ramp_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_remove_fade_points_multiplatform(double channel_control_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolremovefadepointsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_remove_fade_points_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_fade_points_multiplatform(double channel_control_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetfadepointsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_channel_control_get_fade_points_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_channel_control_set_callback(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetcallback(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_set_callback(arg0);
    return _return;
}
extern "C" double fmod_channel_control_get_system_object(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetsystemobject(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_system_object(arg0);
    return _return;
}
extern "C" double fmod_channel_control_set_user_data(double channel_control_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolsetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_control_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_control_get_user_data(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelcontrolgetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_control_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_channel_group_get_num_channels(double channel_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgroupgetnumchannels(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_group_get_num_channels(arg0);
    return _return;
}
extern "C" double fmod_channel_group_get_channel(double channel_group_ref, double index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgroupgetchannel(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_group_get_channel(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_group_add_group_multiplatform(double channel_group_ref, double child_channel_group_ref, double propagate_dsp_clock);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgroupaddgroupmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_channel_group_add_group_multiplatform(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_channel_group_get_num_groups(double channel_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgroupgetnumgroups(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_group_get_num_groups(arg0);
    return _return;
}
extern "C" double fmod_channel_group_get_group(double channel_group_ref, double group_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgroupgetgroup(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_channel_group_get_group(arg0,arg1);
    return _return;
}
extern "C" double fmod_channel_group_get_parent_group(double channel_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgroupgetparentgroup(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_group_get_parent_group(arg0);
    return _return;
}
extern "C" char* fmod_channel_group_get_name(double channel_group_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgroupgetname(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_channel_group_get_name(arg0));
    return _return;
}
extern "C" double fmod_channel_group_release(double channel_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgrouprelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_group_release(arg0);
    return _return;
}
extern "C" double fmod_channel_group_get_system_object(double channel_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodchannelgroupgetsystemobject(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_channel_group_get_system_object(arg0);
    return _return;
}
extern "C" double fmod_file_get_disk_busy();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodfilegetdiskbusy(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_file_get_disk_busy();
    return _return;
}
extern "C" double fmod_file_set_disk_busy(double busy);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodfilesetdiskbusy(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_file_set_disk_busy(arg0);
    return _return;
}
extern "C" double fmod_memory_get_stats_multiplatform(double blocking, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodmemorygetstatsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_memory_get_stats_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_debug_initialize_multiplatform(double flags, double mode, char* filename);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddebuginitializemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jstring arg2)
{
	char* _arg2 = (char*)env->GetStringUTFChars(arg2, 0);
    auto _return = (jdouble) fmod_debug_initialize_multiplatform(arg0,arg1,_arg2);
	env->ReleaseStringUTFChars(arg2, _arg2);
    return _return;
}
extern "C" double fmod_thread_set_attributes(double type, double affinity, double priority, double stacksize);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodthreadsetattributes(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
{
    auto _return = (jdouble) fmod_thread_set_attributes(arg0,arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_dsp_add_input_multiplatform(double dsp_ref, double dsp_input_ref, double dsp_connection_type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspaddinputmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_dsp_add_input_multiplatform(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_dsp_get_input_multiplatform(double dsp_ref, double dsp_input_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetinputmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_dsp_get_input_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_dsp_get_output_multiplatform(double dsp_ref, double dsp_output_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetoutputmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_dsp_get_output_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_dsp_get_num_inputs(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetnuminputs(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_num_inputs(arg0);
    return _return;
}
extern "C" double fmod_dsp_get_num_outputs(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetnumoutputs(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_num_outputs(arg0);
    return _return;
}
extern "C" double fmod_dsp_disconnect_all(double dsp_ref, double inputs, double outputs);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspdisconnectall(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_dsp_disconnect_all(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_dsp_disconnect_from_mutliplatform(double dsp_ref, double dsp_other_ref, double dsp_connection_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspdisconnectfrommutliplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_dsp_disconnect_from_mutliplatform(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_dsp_get_data_parameter_index(double dsp_ref, double data_type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetdataparameterindex(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_get_data_parameter_index(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_get_num_parameters(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetnumparameters(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_num_parameters(arg0);
    return _return;
}
extern "C" double fmod_dsp_set_parameter_bool(double dsp_ref, double parameter_index, double value);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetparameterbool(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_dsp_set_parameter_bool(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_dsp_get_parameter_bool(double dsp_ref, double parameter_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetparameterbool(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_get_parameter_bool(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_set_parameter_data_multiplatform(double dsp_ref, double parameter_index, char* buff, double length);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetparameterdatamultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2, jdouble arg3)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_dsp_set_parameter_data_multiplatform(arg0,arg1,_arg2,arg3);
    return _return;
}
extern "C" double fmod_dsp_get_parameter_data_multiplatform(double dsp_ref, double parameter_index, char* buff, double length);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetparameterdatamultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2, jdouble arg3)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_dsp_get_parameter_data_multiplatform(arg0,arg1,_arg2,arg3);
    return _return;
}
extern "C" double fmod_dsp_set_parameter_float(double dsp_ref, double parameter_index, double value);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetparameterfloat(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_dsp_set_parameter_float(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_dsp_get_parameter_float(double dsp_ref, double parameter_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetparameterfloat(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_get_parameter_float(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_set_parameter_int(double dsp_ref, double parameter_index, double value);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetparameterint(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_dsp_set_parameter_int(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_dsp_get_parameter_int(double dsp_ref, double parameter_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetparameterint(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_get_parameter_int(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_get_parameter_info_multiplatform(double dsp_ref, double parameter_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetparameterinfomultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_dsp_get_parameter_info_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_dsp_set_channel_format(double dsp_ref, double channel_mask, double num_channels, double speaker_mode);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetchannelformat(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
{
    auto _return = (jdouble) fmod_dsp_set_channel_format(arg0,arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_dsp_get_channel_format_multiplatform(double dsp_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetchannelformatmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_dsp_get_channel_format_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_dsp_get_output_channel_format_multiplatform(double dsp_ref, char* buff_args, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetoutputchannelformatmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1, jobject arg2)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_dsp_get_output_channel_format_multiplatform(arg0,_arg1,_arg2);
    return _return;
}
extern "C" double fmod_dsp_get_metering_info_multiplatform(double dsp_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetmeteringinfomultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_dsp_get_metering_info_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_dsp_set_metering_enabled(double dsp_ref, double enabled_in, double enabled_out);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetmeteringenabled(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_dsp_set_metering_enabled(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_dsp_get_metering_enabled_multiplatform(double dsp_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetmeteringenabledmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_dsp_get_metering_enabled_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_dsp_set_active(double dsp_ref, double active);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetactive(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_set_active(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_get_active(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetactive(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_active(arg0);
    return _return;
}
extern "C" double fmod_dsp_set_bypass(double dsp_ref, double bypass);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetbypass(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_set_bypass(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_get_bypass(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetbypass(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_bypass(arg0);
    return _return;
}
extern "C" double fmod_dsp_set_wet_dry_mix(double dsp_ref, double prewet, double postwet, double dry);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetwetdrymix(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
{
    auto _return = (jdouble) fmod_dsp_set_wet_dry_mix(arg0,arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_dsp_get_wet_dry_mix_multiplatform(double dsp_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetwetdrymixmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_dsp_get_wet_dry_mix_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_dsp_get_idle(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetidle(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_idle(arg0);
    return _return;
}
extern "C" double fmod_dsp_reset(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspreset(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_reset(arg0);
    return _return;
}
extern "C" double fmod_dsp_release(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddsprelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_release(arg0);
    return _return;
}
extern "C" double fmod_dsp_get_type(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgettype(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_type(arg0);
    return _return;
}
extern "C" double fmod_dsp_get_info_multiplatform(double dsp_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetinfomultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_dsp_get_info_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_dsp_get_cpu_usage_multiplatform(double dsp_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetcpuusagemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_dsp_get_cpu_usage_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_dsp_set_user_data(double dsp_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_get_user_data(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_dsp_set_callback(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspsetcallback(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_set_callback(arg0);
    return _return;
}
extern "C" double fmod_dsp_get_system_object(double dsp_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspgetsystemobject(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_get_system_object(arg0);
    return _return;
}
extern "C" double fmod_dsp_connection_set_mix(double dsp_connection_ref, double volume);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectionsetmix(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_connection_set_mix(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_connection_get_mix(double dsp_connection_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectiongetmix(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_connection_get_mix(arg0);
    return _return;
}
extern "C" double fmod_dsp_connection_set_mix_matrix_multiplatform(double dsp_connection_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectionsetmixmatrixmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_dsp_connection_set_mix_matrix_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_dsp_connection_get_mix_matrix_multiplatform(double dsp_connection_ref, double inchannel_hop, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectiongetmixmatrixmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_dsp_connection_get_mix_matrix_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_dsp_connection_get_input(double dsp_connection_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectiongetinput(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_connection_get_input(arg0);
    return _return;
}
extern "C" double fmod_dsp_connection_get_output(double dsp_connection_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectiongetoutput(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_connection_get_output(arg0);
    return _return;
}
extern "C" double fmod_dsp_connection_get_type(double dsp_connection_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectiongettype(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_connection_get_type(arg0);
    return _return;
}
extern "C" double fmod_dsp_connection_set_user_data(double dsp_connection_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectionsetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_dsp_connection_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_dsp_connection_get_user_data(double dsp_connection_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmoddspconnectiongetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_dsp_connection_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_geometry_set_polygon_attributes(double geometry_ref, double polygon_index, double direct_occlusion, double reverb_occlusion, double double_sided);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrysetpolygonattributes(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4)
{
    auto _return = (jdouble) fmod_geometry_set_polygon_attributes(arg0,arg1,arg2,arg3,arg4);
    return _return;
}
extern "C" double fmod_geometry_get_polygon_attributes_multiplatform(double geometry_ref, double polygon_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetpolygonattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_geometry_get_polygon_attributes_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_geometry_get_polygon_num_vertices(double geometry_ref, double polygon_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetpolygonnumvertices(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_geometry_get_polygon_num_vertices(arg0,arg1);
    return _return;
}
extern "C" double fmod_geometry_set_polygon_vertex_multiplatform(double geometry_ref, double polygon_index, double vertex_index, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrysetpolygonvertexmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jobject arg3)
{
	char* _arg3 = (char*)env->GetDirectBufferAddress(arg3);
    auto _return = (jdouble) fmod_geometry_set_polygon_vertex_multiplatform(arg0,arg1,arg2,_arg3);
    return _return;
}
extern "C" double fmod_geometry_get_polygon_vertex_multiplatform(double geometry_ref, double polygon_index, double vertex_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetpolygonvertexmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jobject arg3)
{
	char* _arg3 = (char*)env->GetDirectBufferAddress(arg3);
    auto _return = (jdouble) fmod_geometry_get_polygon_vertex_multiplatform(arg0,arg1,arg2,_arg3);
    return _return;
}
extern "C" double fmod_geometry_set_position_multiplatform(double geometry_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrysetpositionmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_set_position_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_geometry_get_position_multiplatform(double geometry_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetpositionmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_get_position_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_geometry_set_rotation_multiplatform(double geometry_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrysetrotationmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_set_rotation_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_geometry_get_rotation_multiplatform(double geometry_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetrotationmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_get_rotation_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_geometry_set_scale_multiplatform(double geometry_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrysetscalemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_set_scale_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_geometry_get_scale_multiplatform(double geometry_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetscalemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_get_scale_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_geometry_add_polygon_multiplatform(double geometry_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometryaddpolygonmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_add_polygon_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_geometry_set_active(double geometry_ref, double active);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrysetactive(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_geometry_set_active(arg0,arg1);
    return _return;
}
extern "C" double fmod_geometry_get_active(double geometry_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetactive(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_geometry_get_active(arg0);
    return _return;
}
extern "C" double fmod_geometry_get_max_polygons_multiplatform(double geometry_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetmaxpolygonsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_get_max_polygons_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_geometry_get_num_polygons(double geometry_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetnumpolygons(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_geometry_get_num_polygons(arg0);
    return _return;
}
extern "C" double fmod_geometry_set_user_data(double geometry_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrysetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_geometry_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_geometry_get_user_data(double geometry_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrygetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_geometry_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_geometry_release(double geometry_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometryrelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_geometry_release(arg0);
    return _return;
}
extern "C" double fmod_geometry_save_multiplatform(double geometry_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodgeometrysavemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_geometry_save_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_reverb_3d_set_3d_attributes_multiplatform(double reverb_3d_ref, char* buff_args, double min_distance, double max_distance);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3dset3dattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1, jdouble arg2, jdouble arg3)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_reverb_3d_set_3d_attributes_multiplatform(arg0,_arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_reverb_3d_get_3d_attributes_multiplatform(double reverb_3d_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3dget3dattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_reverb_3d_get_3d_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_reverb_3d_set_properties(double reverb_3d_ref, double decay_time, double early_delay, double late_delay, double hf_reference, double hf_decay_ratio, double diffusion, double density, double low_shelf_frequency, double low_shelf_gain, double high_cut, double early_late_mix, double wet_level);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3dsetproperties(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6, jdouble arg7, jdouble arg8, jdouble arg9, jdouble arg10, jdouble arg11, jdouble arg12)
{
    auto _return = (jdouble) fmod_reverb_3d_set_properties(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
    return _return;
}
extern "C" double fmod_reverb_3d_get_properties_multiplatform(double reverb_3d_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3dgetpropertiesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_reverb_3d_get_properties_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_reverb_3d_set_active(double reverb_3d_ref, double active);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3dsetactive(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_reverb_3d_set_active(arg0,arg1);
    return _return;
}
extern "C" double fmod_reverb_3d_get_active(double reverb_3d_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3dgetactive(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_reverb_3d_get_active(arg0);
    return _return;
}
extern "C" double fmod_reverb_3d_release(double reverb_3d_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3drelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_reverb_3d_release(arg0);
    return _return;
}
extern "C" double fmod_reverb_3d_set_user_data(double reverb_3d_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3dsetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_reverb_3d_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_reverb_3d_get_user_data(double reverb_3d_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodreverb3dgetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_reverb_3d_get_user_data(arg0);
    return _return;
}
extern "C" char* fmod_sound_get_name(double sound_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetname(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_sound_get_name(arg0));
    return _return;
}
extern "C" double fmod_sound_get_format_multiplatform(double sound_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetformatmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_get_format_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_get_length(double sound_ref, double length_type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetlength(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_get_length(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_get_num_tags_multiplatform(double sound_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetnumtagsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_get_num_tags_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_get_tag_multiplatform(double sound_ref, double tag_index, char* buff_args, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgettagmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2, jobject arg3)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
	char* _arg3 = (char*)env->GetDirectBufferAddress(arg3);
    auto _return = (jdouble) fmod_sound_get_tag_multiplatform(arg0,arg1,_arg2,_arg3);
    return _return;
}
extern "C" double fmod_sound_set_3d_cone_settings(double sound_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundset3dconesettings(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
{
    auto _return = (jdouble) fmod_sound_set_3d_cone_settings(arg0,arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_sound_get_3d_cone_settings_multiplatform(double sound_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundget3dconesettingsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_get_3d_cone_settings_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_set_3d_custom_rolloff_multiplatform(double sound_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundset3dcustomrolloffmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_set_3d_custom_rolloff_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_get_3d_custom_rolloff_multiplatform(double sound_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundget3dcustomrolloffmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_get_3d_custom_rolloff_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_set_3d_min_max_distance(double sound_ref, double min, double max);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundset3dminmaxdistance(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_sound_set_3d_min_max_distance(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_sound_get_3d_min_max_distance_multiplatform(double sound_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundget3dminmaxdistancemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_get_3d_min_max_distance_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_set_defaults(double sound_ref, double frequency, double priority);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundsetdefaults(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_sound_set_defaults(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_sound_get_defaults_multiplatform(double sound_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetdefaultsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_get_defaults_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_set_mode(double sound_ref, double mode);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundsetmode(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_set_mode(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_get_mode(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetmode(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_mode(arg0);
    return _return;
}
extern "C" double fmod_sound_set_loop_count(double sound_ref, double count);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundsetloopcount(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_set_loop_count(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_get_loop_count(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetloopcount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_loop_count(arg0);
    return _return;
}
extern "C" double fmod_sound_set_loop_points(double sound_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundsetlooppoints(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4)
{
    auto _return = (jdouble) fmod_sound_set_loop_points(arg0,arg1,arg2,arg3,arg4);
    return _return;
}
extern "C" double fmod_sound_get_loop_points_multiplatform(double sound_ref, double loop_start_type, double loop_end_type, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetlooppointsmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jobject arg3)
{
	char* _arg3 = (char*)env->GetDirectBufferAddress(arg3);
    auto _return = (jdouble) fmod_sound_get_loop_points_multiplatform(arg0,arg1,arg2,_arg3);
    return _return;
}
extern "C" double fmod_sound_set_sound_group(double sound_ref, double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundsetsoundgroup(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_set_sound_group(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_get_sound_group(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetsoundgroup(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_sound_group(arg0);
    return _return;
}
extern "C" double fmod_sound_get_num_sub_sounds(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetnumsubsounds(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_num_sub_sounds(arg0);
    return _return;
}
extern "C" double fmod_sound_get_sub_sound(double sound_ref, double sub_sound_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetsubsound(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_get_sub_sound(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_get_sub_sound_parent(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetsubsoundparent(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_sub_sound_parent(arg0);
    return _return;
}
extern "C" double fmod_sound_get_open_state_multiplatform(double sound_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetopenstatemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_get_open_state_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_read_data_multiplatform(double sound_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundreaddatamultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_read_data_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_seek_data(double sound_ref, double pcm);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundseekdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_seek_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_lock_multiplatform(double sound_ref, char* buff_args, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundlockmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1, jobject arg2)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_sound_lock_multiplatform(arg0,_arg1,_arg2);
    return _return;
}
extern "C" double fmod_sound_unlock_multiplatform(double sound_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundunlockmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_sound_unlock_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_sound_get_music_num_channels(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetmusicnumchannels(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_music_num_channels(arg0);
    return _return;
}
extern "C" double fmod_sound_set_music_channel_volume(double sound_ref, double channel_index, double volume);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundsetmusicchannelvolume(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_sound_set_music_channel_volume(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_sound_get_music_channel_volume(double sound_ref, double channel_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetmusicchannelvolume(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_get_music_channel_volume(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_set_music_speed(double sound_ref, double speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundsetmusicspeed(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_set_music_speed(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_get_music_speed(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetmusicspeed(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_music_speed(arg0);
    return _return;
}
extern "C" double fmod_sound_get_sync_point_multiplatform(double sound_ref, double point_index, double offset_type, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetsyncpointmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jobject arg3)
{
	char* _arg3 = (char*)env->GetDirectBufferAddress(arg3);
    auto _return = (jdouble) fmod_sound_get_sync_point_multiplatform(arg0,arg1,arg2,_arg3);
    return _return;
}
extern "C" double fmod_sound_get_num_sync_points(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetnumsyncpoints(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_num_sync_points(arg0);
    return _return;
}
extern "C" double fmod_sound_add_sync_point(double sound_ref, double offset, double offset_type, char* name);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundaddsyncpoint(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jstring arg3)
{
	char* _arg3 = (char*)env->GetStringUTFChars(arg3, 0);
    auto _return = (jdouble) fmod_sound_add_sync_point(arg0,arg1,arg2,_arg3);
	env->ReleaseStringUTFChars(arg3, _arg3);
    return _return;
}
extern "C" double fmod_sound_delete_sync_point(double sound_ref, double point_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsounddeletesyncpoint(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_delete_sync_point(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_release(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundrelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_release(arg0);
    return _return;
}
extern "C" double fmod_sound_get_system_object(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetsystemobject(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_system_object(arg0);
    return _return;
}
extern "C" double fmod_sound_set_user_data(double sound_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundsetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_get_user_data(double sound_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_sound_group_set_max_audible(double sound_group_ref, double max_audible);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupsetmaxaudible(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_group_set_max_audible(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_group_get_max_audible(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetmaxaudible(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_get_max_audible(arg0);
    return _return;
}
extern "C" double fmod_sound_group_set_max_audible_behavior(double sound_group_ref, double behavior);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupsetmaxaudiblebehavior(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_group_set_max_audible_behavior(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_group_get_max_audible_behavior(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetmaxaudiblebehavior(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_get_max_audible_behavior(arg0);
    return _return;
}
extern "C" double fmod_sound_group_set_mute_fade_speed(double sound_group_ref, double speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupsetmutefadespeed(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_group_set_mute_fade_speed(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_group_get_mute_fade_speed(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetmutefadespeed(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_get_mute_fade_speed(arg0);
    return _return;
}
extern "C" double fmod_sound_group_set_volume(double sound_group_ref, double volume);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupsetvolume(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_group_set_volume(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_group_get_volume(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetvolume(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_get_volume(arg0);
    return _return;
}
extern "C" double fmod_sound_group_get_num_sounds(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetnumsounds(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_get_num_sounds(arg0);
    return _return;
}
extern "C" double fmod_sound_group_get_sound(double sound_group_ref, double sound_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetsound(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_group_get_sound(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_group_get_num_playing(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetnumplaying(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_get_num_playing(arg0);
    return _return;
}
extern "C" double fmod_sound_group_stop(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupstop(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_stop(arg0);
    return _return;
}
extern "C" char* fmod_sound_group_get_name(double sound_group_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetname(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_sound_group_get_name(arg0));
    return _return;
}
extern "C" double fmod_sound_group_release(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgrouprelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_release(arg0);
    return _return;
}
extern "C" double fmod_sound_group_get_system_object(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetsystemobject(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_get_system_object(arg0);
    return _return;
}
extern "C" double fmod_sound_group_set_user_data(double sound_group_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupsetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_sound_group_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_sound_group_get_user_data(double sound_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsoundgroupgetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_sound_group_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_get_loading_state(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetloadingstate(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_get_loading_state(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_load_sample_data(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankloadsampledata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_load_sample_data(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_unload_sample_data(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankunloadsampledata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_unload_sample_data(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_get_sample_loading_state(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetsampleloadingstate(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_get_sample_loading_state(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_unload(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankunload(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_unload(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_get_bus_count(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetbuscount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_get_bus_count(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_get_bus_list_multiplatform(double bank_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetbuslistmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_bank_get_bus_list_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_bank_get_event_count(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgeteventcount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_get_event_count(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_get_event_description_list_multiplatform(double bank_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgeteventdescriptionlistmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_bank_get_event_description_list_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_bank_get_string_count(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetstringcount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_get_string_count(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_get_string_info_multiplatform(double bank_ref, double string_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetstringinfomultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_bank_get_string_info_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_studio_bank_get_vca_count(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetvcacount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_get_vca_count(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_get_vca_list_multiplatform(double bank_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetvcalistmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_bank_get_vca_list_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" char* fmod_studio_bank_get_id(double bank_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_studio_bank_get_id(arg0));
    return _return;
}
extern "C" char* fmod_studio_bank_get_path(double bank_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetpath(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_studio_bank_get_path(arg0));
    return _return;
}
extern "C" double fmod_studio_bank_is_valid(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankisvalid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_is_valid(arg0);
    return _return;
}
extern "C" double fmod_studio_bank_set_user_data(double bank_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobanksetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_bank_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_bank_get_user_data(double bank_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobankgetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bank_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_studio_bus_set_paused(double bus_ref, double pause);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobussetpaused(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_bus_set_paused(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_bus_get_paused(double bus_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetpaused(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bus_get_paused(arg0);
    return _return;
}
extern "C" double fmod_studio_bus_stop_all_events(double bus_ref, double stop_mode);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusstopallevents(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_bus_stop_all_events(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_bus_set_volume(double bus_ref, double volumen);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobussetvolume(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_bus_set_volume(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_bus_get_volume(double bus_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetvolume(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bus_get_volume(arg0);
    return _return;
}
extern "C" double fmod_studio_bus_set_mute(double bus_ref, double mute);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobussetmute(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_bus_set_mute(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_bus_get_mute(double bus_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetmute(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bus_get_mute(arg0);
    return _return;
}
extern "C" double fmod_studio_bus_set_port_index_multiplatform(double bus_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobussetportindexmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_bus_set_port_index_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_bus_get_port_index_multiplatform(double bus_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetportindexmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_bus_get_port_index_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_bus_get_channel_group(double bus_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetchannelgroup(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bus_get_channel_group(arg0);
    return _return;
}
extern "C" double fmod_studio_bus_lock_channel_group(double bus_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobuslockchannelgroup(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bus_lock_channel_group(arg0);
    return _return;
}
extern "C" double fmod_studio_bus_unlock_channel_group(double bus_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusunlockchannelgroup(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bus_unlock_channel_group(arg0);
    return _return;
}
extern "C" double fmod_studio_bus_get_cpu_usage_multiplatform(double bus_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetcpuusagemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_bus_get_cpu_usage_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_bus_get_memory_usage_multiplatform(double bus_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetmemoryusagemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_bus_get_memory_usage_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" char* fmod_studio_bus_get_id(double bus_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_studio_bus_get_id(arg0));
    return _return;
}
extern "C" char* fmod_studio_bus_get_path(double bus_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusgetpath(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_studio_bus_get_path(arg0));
    return _return;
}
extern "C" double fmod_studio_bus_is_valid(double bus_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiobusisvalid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_bus_is_valid(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_set_bank_path(double command_replay_ref, char* path);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaysetbankpath(JNIEnv* env, jclass cl, jdouble arg0, jstring arg1)
{
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
    auto _return = (jdouble) fmod_studio_command_replay_set_bank_path(arg0,_arg1);
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" double fmod_studio_command_replay_set_create_instance_callback(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaysetcreateinstancecallback(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_set_create_instance_callback(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_set_frame_callback(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaysetframecallback(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_set_frame_callback(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_set_load_bank_callback(double command_replay_ref, char* path);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaysetloadbankcallback(JNIEnv* env, jclass cl, jdouble arg0, jstring arg1)
{
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
    auto _return = (jdouble) fmod_studio_command_replay_set_load_bank_callback(arg0,_arg1);
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" double fmod_studio_command_replay_start(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaystart(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_start(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_stop(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaystop(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_stop(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_get_current_command_multiplatform(double command_replay_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetcurrentcommandmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_command_replay_get_current_command_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_command_replay_get_playback_state(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetplaybackstate(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_get_playback_state(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_set_paused(double command_replay_ref, double pause);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaysetpaused(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_command_replay_set_paused(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_command_replay_get_paused(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetpaused(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_get_paused(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_seek_to_command(double command_replay_ref, double command_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplayseektocommand(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_command_replay_seek_to_command(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_command_replay_seek_to_time(double command_replay_ref, double time);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplayseektotime(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_command_replay_seek_to_time(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_command_replay_get_command_at_time(double command_replay_ref, double time);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetcommandattime(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_command_replay_get_command_at_time(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_command_replay_get_command_count(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetcommandcount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_get_command_count(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_get_command_info_multiplatform(double command_replay_ref, double command_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetcommandinfomultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_command_replay_get_command_info_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" char* fmod_studio_command_replay_get_command_string(double command_replay_ref, double command_index);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetcommandstring(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = env->NewStringUTF(fmod_studio_command_replay_get_command_string(arg0,arg1));
    return _return;
}
extern "C" double fmod_studio_command_replay_get_length(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetlength(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_get_length(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_get_system_object(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetsystemobject(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_get_system_object(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_is_valid(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplayisvalid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_is_valid(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_set_user_data(double command_replay_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaysetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_command_replay_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_command_replay_get_user_data(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplaygetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_studio_command_replay_release(double command_replay_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiocommandreplayrelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_command_replay_release(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_create_instance(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptioncreateinstance(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_create_instance(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_get_instance_count(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetinstancecount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_get_instance_count(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_get_instance_list_multiplatform(double event_description_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetinstancelistmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_description_get_instance_list_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_event_description_release_all_instances(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionreleaseallinstances(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_release_all_instances(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_load_sample_data(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionloadsampledata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_load_sample_data(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_unload_sample_data(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionunloadsampledata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_unload_sample_data(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_get_sample_loading_state(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetsampleloadingstate(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_get_sample_loading_state(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_is_3d(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionis3d(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_is_3d(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_is_doppler_enabled(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionisdopplerenabled(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_is_doppler_enabled(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_is_oneshot(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionisoneshot(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_is_oneshot(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_is_snapshot(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionissnapshot(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_is_snapshot(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_is_stream(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionisstream(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_is_stream(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_has_sustain_point(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionhassustainpoint(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_has_sustain_point(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_get_min_max_distance_multiplatform(double event_description_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetminmaxdistancemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_description_get_min_max_distance_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_event_description_get_sound_size(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetsoundsize(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_get_sound_size(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_get_parameter_description_by_name_multiplatform(double event_description_ref, char* name, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetparameterdescriptionbynamemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jstring arg1, jobject arg2)
{
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_event_description_get_parameter_description_by_name_multiplatform(arg0,_arg1,_arg2);
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" double fmod_studio_event_description_get_parameter_description_by_id_multiplatform(double event_description_ref, char* buff_args, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetparameterdescriptionbyidmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1, jobject arg2)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_event_description_get_parameter_description_by_id_multiplatform(arg0,_arg1,_arg2);
    return _return;
}
extern "C" double fmod_studio_event_description_get_parameter_description_by_index_multiplatform(double event_description_ref, double index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetparameterdescriptionbyindexmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_event_description_get_parameter_description_by_index_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_studio_event_description_get_parameter_description_count(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetparameterdescriptioncount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_get_parameter_description_count(arg0);
    return _return;
}
extern "C" char* fmod_studio_event_description_get_parameter_label_by_name(double event_description_ref, char* name, double label_index);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetparameterlabelbyname(JNIEnv* env, jclass cl, jdouble arg0, jstring arg1, jdouble arg2)
{
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
    auto _return = env->NewStringUTF(fmod_studio_event_description_get_parameter_label_by_name(arg0,_arg1,arg2));
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" char* fmod_studio_event_description_get_parameter_label_by_id_multiplatform(double event_description_ref, char* buff_args, double label_index);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetparameterlabelbyidmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1, jdouble arg2)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = env->NewStringUTF(fmod_studio_event_description_get_parameter_label_by_id_multiplatform(arg0,_arg1,arg2));
    return _return;
}
extern "C" char* fmod_studio_event_description_get_parameter_label_by_index(double event_description_ref, double index, double label_index);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetparameterlabelbyindex(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = env->NewStringUTF(fmod_studio_event_description_get_parameter_label_by_index(arg0,arg1,arg2));
    return _return;
}
extern "C" double fmod_studio_event_description_get_user_property_multiplatform(double event_description_ref, char* name, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetuserpropertymultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jstring arg1, jobject arg2)
{
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_event_description_get_user_property_multiplatform(arg0,_arg1,_arg2);
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" double fmod_studio_event_description_get_user_property_by_index_multiplatform(double event_description_ref, double index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetuserpropertybyindexmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jobject arg2)
{
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_event_description_get_user_property_by_index_multiplatform(arg0,arg1,_arg2);
    return _return;
}
extern "C" double fmod_studio_event_description_get_user_property_count(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetuserpropertycount(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_get_user_property_count(arg0);
    return _return;
}
extern "C" char* fmod_studio_event_description_get_id(double event_description_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_studio_event_description_get_id(arg0));
    return _return;
}
extern "C" double fmod_studio_event_description_get_length(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetlength(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_get_length(arg0);
    return _return;
}
extern "C" char* fmod_studio_event_description_get_path(double event_description_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetpath(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_studio_event_description_get_path(arg0));
    return _return;
}
extern "C" double fmod_studio_event_description_set_callback(double event_description_ref, double type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionsetcallback(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_description_set_callback(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_description_set_user_data(double event_description_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionsetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_description_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_description_get_user_data(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptiongetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_studio_event_description_is_valid(double event_description_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventdescriptionisvalid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_description_is_valid(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_start(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancestart(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_start(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_stop(double event_instance_ref, double mode);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancestop(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_stop(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_playback_state(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetplaybackstate(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_playback_state(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_paused(double event_instance_ref, double pause);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetpaused(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_paused(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_paused(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetpaused(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_paused(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_keyoff(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancekeyoff(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_keyoff(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_pitch(double event_instance_ref, double pitch);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetpitch(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_pitch(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_pitch(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetpitch(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_pitch(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_property(double event_instance_ref, double property, double value);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetproperty(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_property(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_property(double event_instance_ref, double property);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetproperty(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_property(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_timeline_position(double event_instance_ref, double position);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesettimelineposition(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_timeline_position(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_timeline_position(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegettimelineposition(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_timeline_position(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_volume(double event_instance_ref, double volume);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetvolume(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_volume(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_volume_multiplatform(double event_instance_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetvolumemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_instance_get_volume_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_is_virtual(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstanceisvirtual(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_is_virtual(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_3d_attributes_multiplatform(double event_instance_ref, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstanceset3dattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_instance_set_3d_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_3d_attributes_multiplatform(double event_instance_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstanceget3dattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_instance_get_3d_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_listener_mask(double event_instance_ref, double mask);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetlistenermask(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_listener_mask(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_listener_mask(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetlistenermask(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_listener_mask(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_min_max_distance_multiplatform(double event_instance_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetminmaxdistancemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_instance_get_min_max_distance_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_parameter_by_name_multiplatform(double event_instance_ref, char* name, double value, double ignore_seek_speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetparameterbynamemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jstring arg1, jdouble arg2, jdouble arg3)
{
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
    auto _return = (jdouble) fmod_studio_event_instance_set_parameter_by_name_multiplatform(arg0,_arg1,arg2,arg3);
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_parameter_by_name_with_label(double event_instance_ref, char* name, char* label, double ignore_seek_speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetparameterbynamewithlabel(JNIEnv* env, jclass cl, jdouble arg0, jstring arg1, jstring arg2, jdouble arg3)
{
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
	char* _arg2 = (char*)env->GetStringUTFChars(arg2, 0);
    auto _return = (jdouble) fmod_studio_event_instance_set_parameter_by_name_with_label(arg0,_arg1,_arg2,arg3);
	env->ReleaseStringUTFChars(arg1, _arg1);
	env->ReleaseStringUTFChars(arg2, _arg2);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_parameter_by_name_multiplatform(double event_instance_ref, char* name, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetparameterbynamemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jstring arg1, jobject arg2)
{
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_event_instance_get_parameter_by_name_multiplatform(arg0,_arg1,_arg2);
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_parameter_by_id_multiplatform(double event_instance_ref, char* buff_args, double value, double ignore_seek_speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetparameterbyidmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1, jdouble arg2, jdouble arg3)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_instance_set_parameter_by_id_multiplatform(arg0,_arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(double event_instance_ref, char* buff_args, char* label, double ignore_seek_speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetparameterbyidwithlabelmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1, jstring arg2, jdouble arg3)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
	char* _arg2 = (char*)env->GetStringUTFChars(arg2, 0);
    auto _return = (jdouble) fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(arg0,_arg1,_arg2,arg3);
	env->ReleaseStringUTFChars(arg2, _arg2);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_parameter_by_id_multiplatform(double event_instance_ref, char* buff_args, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetparameterbyidmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1, jobject arg2)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_studio_event_instance_get_parameter_by_id_multiplatform(arg0,_arg1,_arg2);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_channel_group(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetchannelgroup(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_channel_group(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_reverb_level(double event_instance_ref, double index, double level);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetreverblevel(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_reverb_level(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_reverb_level(double event_instance_ref, double index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetreverblevel(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_reverb_level(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_cpu_usage_multiplatform(double event_instance_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetcpuusagemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_instance_get_cpu_usage_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_memory_usage_multiplatform(double event_instance_ref, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetmemoryusagemultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_event_instance_get_memory_usage_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_callback(double event_instance_ref, double type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetcallback(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_callback(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_set_user_data(double event_instance_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancesetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_event_instance_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_user_data(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_get_description(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancegetdescription(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_get_description(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_release(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstancerelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_release(arg0);
    return _return;
}
extern "C" double fmod_studio_event_instance_is_valid(double event_instance_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudioeventinstanceisvalid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_event_instance_is_valid(arg0);
    return _return;
}
extern "C" double fmod_studio_system_create();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemcreate(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_create();
    return _return;
}
extern "C" double fmod_studio_system_init(double max_channels, double studio_flags, double core_flags);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosysteminit(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_studio_system_init(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_studio_system_release();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemrelease(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_release();
    return _return;
}
extern "C" double fmod_studio_system_update_multiplatform();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemupdatemultiplatform(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_update_multiplatform();
    return _return;
}
extern "C" double fmod_studio_system_flush_commands();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemflushcommands(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_flush_commands();
    return _return;
}
extern "C" double fmod_studio_system_flush_sample_loading();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemflushsampleloading(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_flush_sample_loading();
    return _return;
}
extern "C" double fmod_studio_system_load_bank_custom(double flags);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemloadbankcustom(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_system_load_bank_custom(arg0);
    return _return;
}
extern "C" double fmod_studio_system_load_bank_file(char* filename, double flags);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemloadbankfile(JNIEnv* env, jclass cl, jstring arg0, jdouble arg1)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_load_bank_file(_arg0,arg1);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_load_bank_memory_multiplatform(char* buff_data, double length, double mode, double flags);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemloadbankmemorymultiplatform(JNIEnv* env, jclass cl, jobject arg0, jdouble arg1, jdouble arg2, jdouble arg3)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_load_bank_memory_multiplatform(_arg0,arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_studio_system_unload_all();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemunloadall(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_unload_all();
    return _return;
}
extern "C" double fmod_studio_system_get_bank(char* path);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetbank(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_get_bank(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_bank_by_id(char* guid_str);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetbankbyid(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_get_bank_by_id(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_bank_count();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetbankcount(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_get_bank_count();
    return _return;
}
extern "C" double fmod_studio_system_get_bank_list_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetbanklistmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_get_bank_list_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_studio_system_set_listener_attributes_multiplatform(double listener_index, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetlistenerattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_system_set_listener_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_system_get_listener_attributes_multiplatform(double listener_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetlistenerattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_system_get_listener_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_system_set_listener_weight(double listener_index, double weight);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetlistenerweight(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_system_set_listener_weight(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_system_get_listener_weight(double listener_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetlistenerweight(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_system_get_listener_weight(arg0);
    return _return;
}
extern "C" double fmod_studio_system_set_num_listeners(double num);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetnumlisteners(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_system_set_num_listeners(arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_num_listeners();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetnumlisteners(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_get_num_listeners();
    return _return;
}
extern "C" double fmod_studio_system_get_bus(char* path);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetbus(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_get_bus(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_bus_by_id(char* guid);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetbusbyid(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_get_bus_by_id(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_event(char* path);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetevent(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_get_event(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_event_by_id(char* guid_str);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgeteventbyid(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_get_event_by_id(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_parameter_by_id_multiplatform(char* buff_args, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetparameterbyidmultiplatform(JNIEnv* env, jclass cl, jobject arg0, jobject arg1)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_system_get_parameter_by_id_multiplatform(_arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_system_set_parameter_by_id_multiplatform(char* buff_args, double value, double ignore_seek_speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetparameterbyidmultiplatform(JNIEnv* env, jclass cl, jobject arg0, jdouble arg1, jdouble arg2)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_set_parameter_by_id_multiplatform(_arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_studio_system_set_parameter_by_id_with_label_multiplatform(char* buff_args, char* label, double ignore_seek_speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetparameterbyidwithlabelmultiplatform(JNIEnv* env, jclass cl, jobject arg0, jstring arg1, jdouble arg2)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
    auto _return = (jdouble) fmod_studio_system_set_parameter_by_id_with_label_multiplatform(_arg0,_arg1,arg2);
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" double fmod_studio_system_get_parameter_by_name_multiplatform(char* name, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetparameterbynamemultiplatform(JNIEnv* env, jclass cl, jstring arg0, jobject arg1)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_system_get_parameter_by_name_multiplatform(_arg0,_arg1);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_set_parameter_by_name_multiplatform(char* name, double value, double ignore_seek_speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetparameterbynamemultiplatform(JNIEnv* env, jclass cl, jstring arg0, jdouble arg1, jdouble arg2)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_set_parameter_by_name_multiplatform(_arg0,arg1,arg2);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_set_parameter_by_name_with_label_multiplatform(char* name, char* label, double ignore_seek_speed);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetparameterbynamewithlabelmultiplatform(JNIEnv* env, jclass cl, jstring arg0, jstring arg1, jdouble arg2)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
	char* _arg1 = (char*)env->GetStringUTFChars(arg1, 0);
    auto _return = (jdouble) fmod_studio_system_set_parameter_by_name_with_label_multiplatform(_arg0,_arg1,arg2);
	env->ReleaseStringUTFChars(arg0, _arg0);
	env->ReleaseStringUTFChars(arg1, _arg1);
    return _return;
}
extern "C" double fmod_studio_system_get_parameter_description_by_name_multiplatform(char* name, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetparameterdescriptionbynamemultiplatform(JNIEnv* env, jclass cl, jstring arg0, jobject arg1)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_system_get_parameter_description_by_name_multiplatform(_arg0,_arg1);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_parameter_description_by_id_multiplatform(char* buff_args, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetparameterdescriptionbyidmultiplatform(JNIEnv* env, jclass cl, jobject arg0, jobject arg1)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_system_get_parameter_description_by_id_multiplatform(_arg0,_arg1);
    return _return;
}
extern "C" double fmod_studio_system_get_parameter_description_count();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetparameterdescriptioncount(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_get_parameter_description_count();
    return _return;
}
extern "C" double fmod_studio_system_get_parameter_description_list_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetparameterdescriptionlistmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_get_parameter_description_list_multiplatform(_arg0);
    return _return;
}
extern "C" char* fmod_studio_system_get_parameter_label_by_name(char* name, double labelindex);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetparameterlabelbyname(JNIEnv* env, jclass cl, jstring arg0, jdouble arg1)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = env->NewStringUTF(fmod_studio_system_get_parameter_label_by_name(_arg0,arg1));
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" char* fmod_studio_system_get_parameter_label_by_id_multiplatform(char* buff_args, double label_index);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetparameterlabelbyidmultiplatform(JNIEnv* env, jclass cl, jobject arg0, jdouble arg1)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = env->NewStringUTF(fmod_studio_system_get_parameter_label_by_id_multiplatform(_arg0,arg1));
    return _return;
}
extern "C" double fmod_studio_system_get_vca(char* path);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetvca(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_get_vca(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_vca_by_id(char* guid_str);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetvcabyid(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_get_vca_by_id(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_set_advanced_settings_multiplatform(char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetadvancedsettingsmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_set_advanced_settings_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_advanced_settings_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetadvancedsettingsmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_get_advanced_settings_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_studio_system_start_command_capture(char* filename, double flags);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemstartcommandcapture(JNIEnv* env, jclass cl, jstring arg0, jdouble arg1)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_start_command_capture(_arg0,arg1);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_stop_command_capture();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemstopcommandcapture(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_stop_command_capture();
    return _return;
}
extern "C" double fmod_studio_system_load_command_replay(char* filename, double flags);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemloadcommandreplay(JNIEnv* env, jclass cl, jstring arg0, jdouble arg1)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_studio_system_load_command_replay(_arg0,arg1);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_buffer_usage_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetbufferusagemultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_get_buffer_usage_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_studio_system_reset_buffer_usage();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemresetbufferusage(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_reset_buffer_usage();
    return _return;
}
extern "C" double fmod_studio_system_get_cpu_usage_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetcpuusagemultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_get_cpu_usage_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_memory_usage_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetmemoryusagemultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_studio_system_get_memory_usage_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_studio_system_set_callback(double type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetcallback(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_system_set_callback(arg0);
    return _return;
}
extern "C" double fmod_studio_system_set_user_data(double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemsetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_system_set_user_data(arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_user_data();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetuserdata(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_get_user_data();
    return _return;
}
extern "C" double fmod_studio_system_get_sound_info_multiplatform(char* key, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetsoundinfomultiplatform(JNIEnv* env, jclass cl, jstring arg0, jobject arg1)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_studio_system_get_sound_info_multiplatform(_arg0,_arg1);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_get_core_system();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemgetcoresystem(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_get_core_system();
    return _return;
}
extern "C" char* fmod_studio_system_lookup_id(char* path);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemlookupid(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = env->NewStringUTF(fmod_studio_system_lookup_id(_arg0));
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" char* fmod_studio_system_lookup_path(char* str_guid);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemlookuppath(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = env->NewStringUTF(fmod_studio_system_lookup_path(_arg0));
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_studio_system_is_valid();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiosystemisvalid(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_studio_system_is_valid();
    return _return;
}
extern "C" double fmod_studio_vca_set_volume(double vca_ref, double volume);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiovcasetvolume(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_studio_vca_set_volume(arg0,arg1);
    return _return;
}
extern "C" double fmod_studio_vca_get_volume(double vca_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiovcagetvolume(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_vca_get_volume(arg0);
    return _return;
}
extern "C" char* fmod_studio_vca_get_id(double vca_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiovcagetid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_studio_vca_get_id(arg0));
    return _return;
}
extern "C" char* fmod_studio_vca_get_path(double vca_ref);
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiovcagetpath(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = env->NewStringUTF(fmod_studio_vca_get_path(arg0));
    return _return;
}
extern "C" double fmod_studio_vca_is_valid(double vca_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodstudiovcaisvalid(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_studio_vca_is_valid(arg0);
    return _return;
}
extern "C" double fmod_system_create();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreate(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_create();
    return _return;
}
extern "C" double fmod_system_select(double system_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemselect(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_select(arg0);
    return _return;
}
extern "C" double fmod_system_count();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcount(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_count();
    return _return;
}
extern "C" double fmod_system_init(double max_channels, double flags);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsysteminit(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_system_init(arg0,arg1);
    return _return;
}
extern "C" double fmod_system_release(double system_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemrelease(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_release(arg0);
    return _return;
}
extern "C" double fmod_system_close(double system_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemclose(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_close(arg0);
    return _return;
}
extern "C" double fmod_system_update_multiplatform();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemupdatemultiplatform(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_update_multiplatform();
    return _return;
}
extern "C" double fmod_system_mixer_suspend();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemmixersuspend(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_mixer_suspend();
    return _return;
}
extern "C" double fmod_system_mixer_resume();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemmixerresume(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_mixer_resume();
    return _return;
}
extern "C" double fmod_system_set_output(double output);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetoutput(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_set_output(arg0);
    return _return;
}
extern "C" double fmod_system_get_output();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetoutput(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_output();
    return _return;
}
extern "C" double fmod_system_get_num_drivers();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetnumdrivers(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_num_drivers();
    return _return;
}
extern "C" double fmod_system_get_driver_info_multiplatform(double driver_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetdriverinfomultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_system_get_driver_info_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_system_set_driver(double driver);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetdriver(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_set_driver(arg0);
    return _return;
}
extern "C" double fmod_system_get_driver();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetdriver(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_driver();
    return _return;
}
extern "C" double fmod_system_set_software_channels(double software_channels);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetsoftwarechannels(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_set_software_channels(arg0);
    return _return;
}
extern "C" double fmod_system_get_software_channels();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetsoftwarechannels(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_software_channels();
    return _return;
}
extern "C" double fmod_system_set_software_format(double sample_rate, double speaker_mode, double num_raw_speakers);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetsoftwareformat(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_system_set_software_format(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_system_get_software_format_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetsoftwareformatmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_software_format_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_set_dsp_buffer_size(double buff_size, double num_buffers);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetdspbuffersize(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_system_set_dsp_buffer_size(arg0,arg1);
    return _return;
}
extern "C" double fmod_system_get_dsp_buffer_size_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetdspbuffersizemultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_dsp_buffer_size_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_set_stream_buffer_size(double file_buffer_size, double file_buffer_size_type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetstreambuffersize(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_system_set_stream_buffer_size(arg0,arg1);
    return _return;
}
extern "C" double fmod_system_get_stream_buffer_size_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetstreambuffersizemultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_stream_buffer_size_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_set_advanced_settings_multiplatform(char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetadvancedsettingsmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_set_advanced_settings_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_get_advanced_settings_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetadvancedsettingsmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_advanced_settings_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_set_speaker_position(double speaker, double x, double y, double active);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetspeakerposition(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
{
    auto _return = (jdouble) fmod_system_set_speaker_position(arg0,arg1,arg2,arg3);
    return _return;
}
extern "C" double fmod_system_get_speaker_position_multiplatform(double speaker, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetspeakerpositionmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_system_get_speaker_position_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemset3dsettings(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_system_set_3d_settings(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_system_get_3d_settings_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemget3dsettingsmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_3d_settings_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_set_3d_num_listeners(double num);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemset3dnumlisteners(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_set_3d_num_listeners(arg0);
    return _return;
}
extern "C" double fmod_system_get_3d_num_listeners();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemget3dnumlisteners(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_3d_num_listeners();
    return _return;
}
extern "C" double fmod_system_set_3d_rolloff_callback();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemset3drolloffcallback(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_set_3d_rolloff_callback();
    return _return;
}
extern "C" double fmod_system_set_network_proxy(char* proxy);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetnetworkproxy(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_system_set_network_proxy(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" char* fmod_system_get_network_proxy();
extern "C" JNIEXPORT jstring JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetnetworkproxy(JNIEnv* env, jclass cl)
{
    auto _return = env->NewStringUTF(fmod_system_get_network_proxy());
    return _return;
}
extern "C" double fmod_system_set_network_timeout(double timeout);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetnetworktimeout(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_set_network_timeout(arg0);
    return _return;
}
extern "C" double fmod_system_get_network_timeout();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetnetworktimeout(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_network_timeout();
    return _return;
}
extern "C" double fmod_system_get_version();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetversion(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_version();
    return _return;
}
extern "C" double fmod_system_get_channels_playing_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetchannelsplayingmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_channels_playing_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_get_cpu_usage_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetcpuusagemultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_cpu_usage_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_get_file_usage_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetfileusagemultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_file_usage_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_get_default_mix_matrix_multiplatform(double source_speaker_mode, double target_speaker_mode, double matrix_hop, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetdefaultmixmatrixmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2, jobject arg3)
{
	char* _arg3 = (char*)env->GetDirectBufferAddress(arg3);
    auto _return = (jdouble) fmod_system_get_default_mix_matrix_multiplatform(arg0,arg1,arg2,_arg3);
    return _return;
}
extern "C" double fmod_system_get_speaker_mode_channels(double mode);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetspeakermodechannels(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_get_speaker_mode_channels(arg0);
    return _return;
}
extern "C" double fmod_system_create_sound_multiplatform(char* name_or_data, double mode, char* buff_extra);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreatesoundmultiplatform(JNIEnv* env, jclass cl, jstring arg0, jdouble arg1, jobject arg2)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_system_create_sound_multiplatform(_arg0,arg1,_arg2);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_system_create_stream_multiplatform(char* name_or_data, double mode, char* buff_extra);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreatestreammultiplatform(JNIEnv* env, jclass cl, jstring arg0, jdouble arg1, jobject arg2)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
	char* _arg2 = (char*)env->GetDirectBufferAddress(arg2);
    auto _return = (jdouble) fmod_system_create_stream_multiplatform(_arg0,arg1,_arg2);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_system_create_dsp();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreatedsp(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_create_dsp();
    return _return;
}
extern "C" double fmod_system_create_dsp_by_type(double type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreatedspbytype(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_create_dsp_by_type(arg0);
    return _return;
}
extern "C" double fmod_system_create_channel_group(char* name);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreatechannelgroup(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_system_create_channel_group(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_system_create_sound_group(char* name);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreatesoundgroup(JNIEnv* env, jclass cl, jstring arg0)
{
	char* _arg0 = (char*)env->GetStringUTFChars(arg0, 0);
    auto _return = (jdouble) fmod_system_create_sound_group(_arg0);
	env->ReleaseStringUTFChars(arg0, _arg0);
    return _return;
}
extern "C" double fmod_system_create_reverb_3d();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreatereverb3d(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_create_reverb_3d();
    return _return;
}
extern "C" double fmod_system_play_sound_multiplatform(double sound_ref, double channel_group_ref, double pause);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemplaysoundmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_system_play_sound_multiplatform(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_system_play_dsp_multiplatform(double dsp_ref, double channel_group_ref, double pause);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemplaydspmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_system_play_dsp_multiplatform(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_system_get_channel(double index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetchannel(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_get_channel(arg0);
    return _return;
}
extern "C" double fmod_system_get_master_channel_group();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetmasterchannelgroup(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_master_channel_group();
    return _return;
}
extern "C" double fmod_system_get_master_sound_group();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetmastersoundgroup(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_master_sound_group();
    return _return;
}
extern "C" double fmod_system_set_3d_listener_attributes_multiplatform(double listener_index, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemset3dlistenerattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_system_set_3d_listener_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_system_get_3d_listener_attributes_multiplatform(double listener_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemget3dlistenerattributesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_system_get_3d_listener_attributes_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_system_set_reverb_properties_multiplatform(double instance_index, char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetreverbpropertiesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_system_set_reverb_properties_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_system_get_reverb_properties_multiplatform(double instance_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetreverbpropertiesmultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_system_get_reverb_properties_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_system_attach_channel_group_to_port_multiplatform(char* buff_args);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemattachchannelgrouptoportmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_attach_channel_group_to_port_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_detach_channel_group_from_port(double channel_group_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemdetachchannelgroupfromport(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_detach_channel_group_from_port(arg0);
    return _return;
}
extern "C" double fmod_system_get_record_num_drivers_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetrecordnumdriversmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_record_num_drivers_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_get_record_driver_info_multiplatform(double recording_device_index, char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetrecorddriverinfomultiplatform(JNIEnv* env, jclass cl, jdouble arg0, jobject arg1)
{
	char* _arg1 = (char*)env->GetDirectBufferAddress(arg1);
    auto _return = (jdouble) fmod_system_get_record_driver_info_multiplatform(arg0,_arg1);
    return _return;
}
extern "C" double fmod_system_get_record_position(double device_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetrecordposition(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_get_record_position(arg0);
    return _return;
}
extern "C" double fmod_system_record_start(double device_index, double sound_ref, double loop);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemrecordstart(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1, jdouble arg2)
{
    auto _return = (jdouble) fmod_system_record_start(arg0,arg1,arg2);
    return _return;
}
extern "C" double fmod_system_record_stop(double device_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemrecordstop(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_record_stop(arg0);
    return _return;
}
extern "C" double fmod_system_is_recording(double device_index);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemisrecording(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_is_recording(arg0);
    return _return;
}
extern "C" double fmod_system_create_geometry(double max_polygons, double max_vertices);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemcreategeometry(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_system_create_geometry(arg0,arg1);
    return _return;
}
extern "C" double fmod_system_set_geometry_settings(double max_world_size);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetgeometrysettings(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_set_geometry_settings(arg0);
    return _return;
}
extern "C" double fmod_system_get_geometry_settings();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetgeometrysettings(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_get_geometry_settings();
    return _return;
}
extern "C" double fmod_system_load_geometry_multiplatform(char* buff_args, double length);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemloadgeometrymultiplatform(JNIEnv* env, jclass cl, jobject arg0, jdouble arg1)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_load_geometry_multiplatform(_arg0,arg1);
    return _return;
}
extern "C" double fmod_system_get_geometry_occlusion_multiplatform(char* buff_return);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetgeometryocclusionmultiplatform(JNIEnv* env, jclass cl, jobject arg0)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_system_get_geometry_occlusion_multiplatform(_arg0);
    return _return;
}
extern "C" double fmod_system_lock_dsp();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemlockdsp(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_lock_dsp();
    return _return;
}
extern "C" double fmod_system_unlock_dsp();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemunlockdsp(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_system_unlock_dsp();
    return _return;
}
extern "C" double fmod_system_set_callback(double type);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetcallback(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_set_callback(arg0);
    return _return;
}
extern "C" double fmod_system_set_user_data(double channel_control_ref, double data);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemsetuserdata(JNIEnv* env, jclass cl, jdouble arg0, jdouble arg1)
{
    auto _return = (jdouble) fmod_system_set_user_data(arg0,arg1);
    return _return;
}
extern "C" double fmod_system_get_user_data(double channel_control_ref);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodsystemgetuserdata(JNIEnv* env, jclass cl, jdouble arg0)
{
    auto _return = (jdouble) fmod_system_get_user_data(arg0);
    return _return;
}
extern "C" double fmod_fetch_callbacks(char* buffer, double length);
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodfetchcallbacks(JNIEnv* env, jclass cl, jobject arg0, jdouble arg1)
{
	char* _arg0 = (char*)env->GetDirectBufferAddress(arg0);
    auto _return = (jdouble) fmod_fetch_callbacks(_arg0,arg1);
    return _return;
}
extern "C" double fmod_last_result();
extern "C" JNIEXPORT jdouble JNICALL Java_com_ACOMPANY_APROJECT_MainActivity_JNIfmodlastresult(JNIEnv* env, jclass cl)
{
    auto _return = (jdouble) fmod_last_result();
    return _return;
}
