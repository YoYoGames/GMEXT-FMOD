package ${YYAndroidPackageName};
import ${YYAndroidPackageName}.R;
import com.yoyogames.runner.RunnerJNILib;
import java.lang.String;
import java.nio.ByteBuffer;
import android.util.Log;
import static com.ACOMPANY.APROJECT.MainActivity.*;
public class Fmod_Android extends RunnerSocial {
public Fmod_Android()
{
    org.fmod.FMOD.init(RunnerActivity.CurrentActivity);
}
public void onDestroy()
{
    fmod_system_mixer_resume();
    org.fmod.FMOD.close();
}
public void onStart()
{
    fmod_system_mixer_resume();
}
public void onStop()
{
    fmod_system_mixer_suspend();
}

public double fmod_channel_set_frequency(double arg0,double arg1)
{
    return JNIfmodchannelsetfrequency(arg0,arg1);
}
public double fmod_channel_get_frequency(double arg0)
{
    return JNIfmodchannelgetfrequency(arg0);
}
public double fmod_channel_set_priority(double arg0,double arg1)
{
    return JNIfmodchannelsetpriority(arg0,arg1);
}
public double fmod_channel_get_priority(double arg0)
{
    return JNIfmodchannelgetpriority(arg0);
}
public double fmod_channel_set_position(double arg0,double arg1,double arg2)
{
    return JNIfmodchannelsetposition(arg0,arg1,arg2);
}
public double fmod_channel_get_position(double arg0,double arg1)
{
    return JNIfmodchannelgetposition(arg0,arg1);
}
public double fmod_channel_set_channel_group(double arg0,double arg1)
{
    return JNIfmodchannelsetchannelgroup(arg0,arg1);
}
public double fmod_channel_get_channel_group(double arg0)
{
    return JNIfmodchannelgetchannelgroup(arg0);
}
public double fmod_channel_set_loop_count(double arg0,double arg1)
{
    return JNIfmodchannelsetloopcount(arg0,arg1);
}
public double fmod_channel_get_loop_count(double arg0)
{
    return JNIfmodchannelgetloopcount(arg0);
}
public double fmod_channel_set_loop_points(double arg0,double arg1,double arg2,double arg3,double arg4)
{
    return JNIfmodchannelsetlooppoints(arg0,arg1,arg2,arg3,arg4);
}
public double fmod_channel_get_loop_points_multiplatform(double arg0,double arg1,double arg2,ByteBuffer arg3)
{
    return JNIfmodchannelgetlooppointsmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_channel_is_virtual(double arg0)
{
    return JNIfmodchannelisvirtual(arg0);
}
public double fmod_channel_get_current_sound(double arg0)
{
    return JNIfmodchannelgetcurrentsound(arg0);
}
public double fmod_channel_get_index(double arg0)
{
    return JNIfmodchannelgetindex(arg0);
}
public double fmod_channel_get_system_object(double arg0)
{
    return JNIfmodchannelgetsystemobject(arg0);
}
public double fmod_channel_control_is_playing(double arg0)
{
    return JNIfmodchannelcontrolisplaying(arg0);
}
public double fmod_channel_control_stop(double arg0)
{
    return JNIfmodchannelcontrolstop(arg0);
}
public double fmod_channel_control_set_paused(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetpaused(arg0,arg1);
}
public double fmod_channel_control_get_paused(double arg0)
{
    return JNIfmodchannelcontrolgetpaused(arg0);
}
public double fmod_channel_control_set_mode(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetmode(arg0,arg1);
}
public double fmod_channel_control_get_mode(double arg0)
{
    return JNIfmodchannelcontrolgetmode(arg0);
}
public double fmod_channel_control_set_pitch(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetpitch(arg0,arg1);
}
public double fmod_channel_control_get_pitch(double arg0)
{
    return JNIfmodchannelcontrolgetpitch(arg0);
}
public double fmod_channel_control_get_audibility(double arg0)
{
    return JNIfmodchannelcontrolgetaudibility(arg0);
}
public double fmod_channel_control_set_volume(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetvolume(arg0,arg1);
}
public double fmod_channel_control_get_volume(double arg0)
{
    return JNIfmodchannelcontrolgetvolume(arg0);
}
public double fmod_channel_control_set_volume_ramp(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetvolumeramp(arg0,arg1);
}
public double fmod_channel_control_get_volume_ramp(double arg0)
{
    return JNIfmodchannelcontrolgetvolumeramp(arg0);
}
public double fmod_channel_control_set_mute(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetmute(arg0,arg1);
}
public double fmod_channel_control_get_mute(double arg0)
{
    return JNIfmodchannelcontrolgetmute(arg0);
}
public double fmod_channel_control_set_3d_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolset3dattributesmultiplatform(arg0,arg1);
}
public double fmod_channel_control_get_3d_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolget3dattributesmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_3d_cone_orientation_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolset3dconeorientationmultiplatform(arg0,arg1);
}
public double fmod_channel_control_get_3d_cone_orientation_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolget3dconeorientationmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_3d_cone_settings(double arg0,double arg1,double arg2,double arg3)
{
    return JNIfmodchannelcontrolset3dconesettings(arg0,arg1,arg2,arg3);
}
public double fmod_channel_control_get_3d_cone_settings_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolget3dconesettingsmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_3d_custom_rolloff_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolset3dcustomrolloffmultiplatform(arg0,arg1);
}
public double fmod_channel_control_get_3d_custom_rolloff_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolget3dcustomrolloffmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_3d_distance_filter(double arg0,double arg1,double arg2,double arg3)
{
    return JNIfmodchannelcontrolset3ddistancefilter(arg0,arg1,arg2,arg3);
}
public double fmod_channel_control_get_3d_distance_filter_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolget3ddistancefiltermultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_3d_doppler_level(double arg0,double arg1)
{
    return JNIfmodchannelcontrolset3ddopplerlevel(arg0,arg1);
}
public double fmod_channel_control_get_3d_doppler_level(double arg0)
{
    return JNIfmodchannelcontrolget3ddopplerlevel(arg0);
}
public double fmod_channel_control_set_3d_level(double arg0,double arg1)
{
    return JNIfmodchannelcontrolset3dlevel(arg0,arg1);
}
public double fmod_channel_control_get_3d_level(double arg0)
{
    return JNIfmodchannelcontrolget3dlevel(arg0);
}
public double fmod_channel_control_set_3d_min_max_distance(double arg0,double arg1,double arg2)
{
    return JNIfmodchannelcontrolset3dminmaxdistance(arg0,arg1,arg2);
}
public double fmod_channel_control_get_3d_min_max_distance_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolget3dminmaxdistancemultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_3d_occlusion(double arg0,double arg1,double arg2)
{
    return JNIfmodchannelcontrolset3docclusion(arg0,arg1,arg2);
}
public double fmod_channel_control_get_3d_occlusion_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolget3docclusionmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_3d_spread(double arg0,double arg1)
{
    return JNIfmodchannelcontrolset3dspread(arg0,arg1);
}
public double fmod_channel_control_get_3d_spread(double arg0)
{
    return JNIfmodchannelcontrolget3dspread(arg0);
}
public double fmod_channel_control_set_pan(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetpan(arg0,arg1);
}
public double fmod_channel_control_set_mix_levels_input_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolsetmixlevelsinputmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_mix_levels_output(double arg0,double arg1,double arg2,double arg3,double arg4,double arg5,double arg6,double arg7,double arg8)
{
    return JNIfmodchannelcontrolsetmixlevelsoutput(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}
public double fmod_channel_control_set_mix_matrix_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolsetmixmatrixmultiplatform(arg0,arg1);
}
public double fmod_channel_control_get_mix_matrix_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmodchannelcontrolgetmixmatrixmultiplatform(arg0,arg1,arg2);
}
public double fmod_channel_control_set_reverb_properties(double arg0,double arg1,double arg2)
{
    return JNIfmodchannelcontrolsetreverbproperties(arg0,arg1,arg2);
}
public double fmod_channel_control_get_reverb_properties(double arg0,double arg1)
{
    return JNIfmodchannelcontrolgetreverbproperties(arg0,arg1);
}
public double fmod_channel_control_set_low_pass_gain(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetlowpassgain(arg0,arg1);
}
public double fmod_channel_control_get_low_pass_gain(double arg0)
{
    return JNIfmodchannelcontrolgetlowpassgain(arg0);
}
public double fmod_channel_control_add_dsp(double arg0,double arg1,double arg2)
{
    return JNIfmodchannelcontroladddsp(arg0,arg1,arg2);
}
public double fmod_channel_control_remove_dsp(double arg0,double arg1)
{
    return JNIfmodchannelcontrolremovedsp(arg0,arg1);
}
public double fmod_channel_control_get_num_dsps(double arg0)
{
    return JNIfmodchannelcontrolgetnumdsps(arg0);
}
public double fmod_channel_control_get_dsp(double arg0,double arg1)
{
    return JNIfmodchannelcontrolgetdsp(arg0,arg1);
}
public double fmod_channel_control_set_dsp_index(double arg0,double arg1,double arg2)
{
    return JNIfmodchannelcontrolsetdspindex(arg0,arg1,arg2);
}
public double fmod_channel_control_get_dsp_index(double arg0,double arg1)
{
    return JNIfmodchannelcontrolgetdspindex(arg0,arg1);
}
public double fmod_channel_control_get_dsp_clock_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolgetdspclockmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_delay_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolsetdelaymultiplatform(arg0,arg1);
}
public double fmod_channel_control_get_delay_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolgetdelaymultiplatform(arg0,arg1);
}
public double fmod_channel_control_add_fade_point_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontroladdfadepointmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_fade_point_ramp_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolsetfadepointrampmultiplatform(arg0,arg1);
}
public double fmod_channel_control_remove_fade_points_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolremovefadepointsmultiplatform(arg0,arg1);
}
public double fmod_channel_control_get_fade_points_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodchannelcontrolgetfadepointsmultiplatform(arg0,arg1);
}
public double fmod_channel_control_set_callback(double arg0)
{
    return JNIfmodchannelcontrolsetcallback(arg0);
}
public double fmod_channel_control_get_system_object(double arg0)
{
    return JNIfmodchannelcontrolgetsystemobject(arg0);
}
public double fmod_channel_control_set_user_data(double arg0,double arg1)
{
    return JNIfmodchannelcontrolsetuserdata(arg0,arg1);
}
public double fmod_channel_control_get_user_data(double arg0)
{
    return JNIfmodchannelcontrolgetuserdata(arg0);
}
public double fmod_channel_group_get_num_channels(double arg0)
{
    return JNIfmodchannelgroupgetnumchannels(arg0);
}
public double fmod_channel_group_get_channel(double arg0,double arg1)
{
    return JNIfmodchannelgroupgetchannel(arg0,arg1);
}
public double fmod_channel_group_add_group_multiplatform(double arg0,double arg1,double arg2)
{
    return JNIfmodchannelgroupaddgroupmultiplatform(arg0,arg1,arg2);
}
public double fmod_channel_group_get_num_groups(double arg0)
{
    return JNIfmodchannelgroupgetnumgroups(arg0);
}
public double fmod_channel_group_get_group(double arg0,double arg1)
{
    return JNIfmodchannelgroupgetgroup(arg0,arg1);
}
public double fmod_channel_group_get_parent_group(double arg0)
{
    return JNIfmodchannelgroupgetparentgroup(arg0);
}
public String fmod_channel_group_get_name(double arg0)
{
    return JNIfmodchannelgroupgetname(arg0);
}
public double fmod_channel_group_release(double arg0)
{
    return JNIfmodchannelgrouprelease(arg0);
}
public double fmod_channel_group_get_system_object(double arg0)
{
    return JNIfmodchannelgroupgetsystemobject(arg0);
}
public double fmod_file_get_disk_busy()
{
    return JNIfmodfilegetdiskbusy();
}
public double fmod_file_set_disk_busy(double arg0)
{
    return JNIfmodfilesetdiskbusy(arg0);
}
public double fmod_memory_get_stats_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodmemorygetstatsmultiplatform(arg0,arg1);
}
public double fmod_debug_initialize_multiplatform(double arg0,double arg1,String arg2)
{
    return JNIfmoddebuginitializemultiplatform(arg0,arg1,arg2);
}
public double fmod_thread_set_attributes(double arg0,double arg1,double arg2,double arg3)
{
    return JNIfmodthreadsetattributes(arg0,arg1,arg2,arg3);
}
public double fmod_dsp_add_input_multiplatform(double arg0,double arg1,double arg2)
{
    return JNIfmoddspaddinputmultiplatform(arg0,arg1,arg2);
}
public double fmod_dsp_get_input_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmoddspgetinputmultiplatform(arg0,arg1,arg2);
}
public double fmod_dsp_get_output_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmoddspgetoutputmultiplatform(arg0,arg1,arg2);
}
public double fmod_dsp_get_num_inputs(double arg0)
{
    return JNIfmoddspgetnuminputs(arg0);
}
public double fmod_dsp_get_num_outputs(double arg0)
{
    return JNIfmoddspgetnumoutputs(arg0);
}
public double fmod_dsp_disconnect_all(double arg0,double arg1,double arg2)
{
    return JNIfmoddspdisconnectall(arg0,arg1,arg2);
}
public double fmod_dsp_disconnect_from_mutliplatform(double arg0,double arg1,double arg2)
{
    return JNIfmoddspdisconnectfrommutliplatform(arg0,arg1,arg2);
}
public double fmod_dsp_get_data_parameter_index(double arg0,double arg1)
{
    return JNIfmoddspgetdataparameterindex(arg0,arg1);
}
public double fmod_dsp_get_num_parameters(double arg0)
{
    return JNIfmoddspgetnumparameters(arg0);
}
public double fmod_dsp_set_parameter_bool(double arg0,double arg1,double arg2)
{
    return JNIfmoddspsetparameterbool(arg0,arg1,arg2);
}
public double fmod_dsp_get_parameter_bool(double arg0,double arg1)
{
    return JNIfmoddspgetparameterbool(arg0,arg1);
}
public double fmod_dsp_set_parameter_data_multiplatform(double arg0,double arg1,ByteBuffer arg2,double arg3)
{
    return JNIfmoddspsetparameterdatamultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_dsp_get_parameter_data_multiplatform(double arg0,double arg1,ByteBuffer arg2,double arg3)
{
    return JNIfmoddspgetparameterdatamultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_dsp_set_parameter_float(double arg0,double arg1,double arg2)
{
    return JNIfmoddspsetparameterfloat(arg0,arg1,arg2);
}
public double fmod_dsp_get_parameter_float(double arg0,double arg1)
{
    return JNIfmoddspgetparameterfloat(arg0,arg1);
}
public double fmod_dsp_set_parameter_int(double arg0,double arg1,double arg2)
{
    return JNIfmoddspsetparameterint(arg0,arg1,arg2);
}
public double fmod_dsp_get_parameter_int(double arg0,double arg1)
{
    return JNIfmoddspgetparameterint(arg0,arg1);
}
public double fmod_dsp_get_parameter_info_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmoddspgetparameterinfomultiplatform(arg0,arg1,arg2);
}
public double fmod_dsp_set_channel_format(double arg0,double arg1,double arg2,double arg3)
{
    return JNIfmoddspsetchannelformat(arg0,arg1,arg2,arg3);
}
public double fmod_dsp_get_channel_format_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmoddspgetchannelformatmultiplatform(arg0,arg1);
}
public double fmod_dsp_get_output_channel_format_multiplatform(double arg0,ByteBuffer arg1,ByteBuffer arg2)
{
    return JNIfmoddspgetoutputchannelformatmultiplatform(arg0,arg1,arg2);
}
public double fmod_dsp_get_metering_info_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmoddspgetmeteringinfomultiplatform(arg0,arg1);
}
public double fmod_dsp_set_metering_enabled(double arg0,double arg1,double arg2)
{
    return JNIfmoddspsetmeteringenabled(arg0,arg1,arg2);
}
public double fmod_dsp_get_metering_enabled_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmoddspgetmeteringenabledmultiplatform(arg0,arg1);
}
public double fmod_dsp_set_active(double arg0,double arg1)
{
    return JNIfmoddspsetactive(arg0,arg1);
}
public double fmod_dsp_get_active(double arg0)
{
    return JNIfmoddspgetactive(arg0);
}
public double fmod_dsp_set_bypass(double arg0,double arg1)
{
    return JNIfmoddspsetbypass(arg0,arg1);
}
public double fmod_dsp_get_bypass(double arg0)
{
    return JNIfmoddspgetbypass(arg0);
}
public double fmod_dsp_set_wet_dry_mix(double arg0,double arg1,double arg2,double arg3)
{
    return JNIfmoddspsetwetdrymix(arg0,arg1,arg2,arg3);
}
public double fmod_dsp_get_wet_dry_mix_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmoddspgetwetdrymixmultiplatform(arg0,arg1);
}
public double fmod_dsp_get_idle(double arg0)
{
    return JNIfmoddspgetidle(arg0);
}
public double fmod_dsp_reset(double arg0)
{
    return JNIfmoddspreset(arg0);
}
public double fmod_dsp_release(double arg0)
{
    return JNIfmoddsprelease(arg0);
}
public double fmod_dsp_get_type(double arg0)
{
    return JNIfmoddspgettype(arg0);
}
public double fmod_dsp_get_info_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmoddspgetinfomultiplatform(arg0,arg1);
}
public double fmod_dsp_get_cpu_usage_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmoddspgetcpuusagemultiplatform(arg0,arg1);
}
public double fmod_dsp_set_user_data(double arg0,double arg1)
{
    return JNIfmoddspsetuserdata(arg0,arg1);
}
public double fmod_dsp_get_user_data(double arg0)
{
    return JNIfmoddspgetuserdata(arg0);
}
public double fmod_dsp_set_callback(double arg0)
{
    return JNIfmoddspsetcallback(arg0);
}
public double fmod_dsp_get_system_object(double arg0)
{
    return JNIfmoddspgetsystemobject(arg0);
}
public double fmod_dsp_connection_set_mix(double arg0,double arg1)
{
    return JNIfmoddspconnectionsetmix(arg0,arg1);
}
public double fmod_dsp_connection_get_mix(double arg0)
{
    return JNIfmoddspconnectiongetmix(arg0);
}
public double fmod_dsp_connection_set_mix_matrix_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmoddspconnectionsetmixmatrixmultiplatform(arg0,arg1);
}
public double fmod_dsp_connection_get_mix_matrix_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmoddspconnectiongetmixmatrixmultiplatform(arg0,arg1,arg2);
}
public double fmod_dsp_connection_get_input(double arg0)
{
    return JNIfmoddspconnectiongetinput(arg0);
}
public double fmod_dsp_connection_get_output(double arg0)
{
    return JNIfmoddspconnectiongetoutput(arg0);
}
public double fmod_dsp_connection_get_type(double arg0)
{
    return JNIfmoddspconnectiongettype(arg0);
}
public double fmod_dsp_connection_set_user_data(double arg0,double arg1)
{
    return JNIfmoddspconnectionsetuserdata(arg0,arg1);
}
public double fmod_dsp_connection_get_user_data(double arg0)
{
    return JNIfmoddspconnectiongetuserdata(arg0);
}
public double fmod_geometry_set_polygon_attributes(double arg0,double arg1,double arg2,double arg3,double arg4)
{
    return JNIfmodgeometrysetpolygonattributes(arg0,arg1,arg2,arg3,arg4);
}
public double fmod_geometry_get_polygon_attributes_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmodgeometrygetpolygonattributesmultiplatform(arg0,arg1,arg2);
}
public double fmod_geometry_get_polygon_num_vertices(double arg0,double arg1)
{
    return JNIfmodgeometrygetpolygonnumvertices(arg0,arg1);
}
public double fmod_geometry_set_polygon_vertex_multiplatform(double arg0,double arg1,double arg2,ByteBuffer arg3)
{
    return JNIfmodgeometrysetpolygonvertexmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_geometry_get_polygon_vertex_multiplatform(double arg0,double arg1,double arg2,ByteBuffer arg3)
{
    return JNIfmodgeometrygetpolygonvertexmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_geometry_set_position_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometrysetpositionmultiplatform(arg0,arg1);
}
public double fmod_geometry_get_position_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometrygetpositionmultiplatform(arg0,arg1);
}
public double fmod_geometry_set_rotation_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometrysetrotationmultiplatform(arg0,arg1);
}
public double fmod_geometry_get_rotation_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometrygetrotationmultiplatform(arg0,arg1);
}
public double fmod_geometry_set_scale_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometrysetscalemultiplatform(arg0,arg1);
}
public double fmod_geometry_get_scale_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometrygetscalemultiplatform(arg0,arg1);
}
public double fmod_geometry_add_polygon_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometryaddpolygonmultiplatform(arg0,arg1);
}
public double fmod_geometry_set_active(double arg0,double arg1)
{
    return JNIfmodgeometrysetactive(arg0,arg1);
}
public double fmod_geometry_get_active(double arg0)
{
    return JNIfmodgeometrygetactive(arg0);
}
public double fmod_geometry_get_max_polygons_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometrygetmaxpolygonsmultiplatform(arg0,arg1);
}
public double fmod_geometry_get_num_polygons(double arg0)
{
    return JNIfmodgeometrygetnumpolygons(arg0);
}
public double fmod_geometry_set_user_data(double arg0,double arg1)
{
    return JNIfmodgeometrysetuserdata(arg0,arg1);
}
public double fmod_geometry_get_user_data(double arg0)
{
    return JNIfmodgeometrygetuserdata(arg0);
}
public double fmod_geometry_release(double arg0)
{
    return JNIfmodgeometryrelease(arg0);
}
public double fmod_geometry_save_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodgeometrysavemultiplatform(arg0,arg1);
}
public double fmod_reverb_3d_set_3d_attributes_multiplatform(double arg0,ByteBuffer arg1,double arg2,double arg3)
{
    return JNIfmodreverb3dset3dattributesmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_reverb_3d_get_3d_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodreverb3dget3dattributesmultiplatform(arg0,arg1);
}
public double fmod_reverb_3d_set_properties(double arg0,double arg1,double arg2,double arg3,double arg4,double arg5,double arg6,double arg7,double arg8,double arg9,double arg10,double arg11,double arg12)
{
    return JNIfmodreverb3dsetproperties(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);
}
public double fmod_reverb_3d_get_properties_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodreverb3dgetpropertiesmultiplatform(arg0,arg1);
}
public double fmod_reverb_3d_set_active(double arg0,double arg1)
{
    return JNIfmodreverb3dsetactive(arg0,arg1);
}
public double fmod_reverb_3d_get_active(double arg0)
{
    return JNIfmodreverb3dgetactive(arg0);
}
public double fmod_reverb_3d_release(double arg0)
{
    return JNIfmodreverb3drelease(arg0);
}
public double fmod_reverb_3d_set_user_data(double arg0,double arg1)
{
    return JNIfmodreverb3dsetuserdata(arg0,arg1);
}
public double fmod_reverb_3d_get_user_data(double arg0)
{
    return JNIfmodreverb3dgetuserdata(arg0);
}
public String fmod_sound_get_name(double arg0)
{
    return JNIfmodsoundgetname(arg0);
}
public double fmod_sound_get_format_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundgetformatmultiplatform(arg0,arg1);
}
public double fmod_sound_get_length(double arg0,double arg1)
{
    return JNIfmodsoundgetlength(arg0,arg1);
}
public double fmod_sound_get_num_tags_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundgetnumtagsmultiplatform(arg0,arg1);
}
public double fmod_sound_get_tag_multiplatform(double arg0,double arg1,ByteBuffer arg2,ByteBuffer arg3)
{
    return JNIfmodsoundgettagmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_sound_set_3d_cone_settings(double arg0,double arg1,double arg2,double arg3)
{
    return JNIfmodsoundset3dconesettings(arg0,arg1,arg2,arg3);
}
public double fmod_sound_get_3d_cone_settings_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundget3dconesettingsmultiplatform(arg0,arg1);
}
public double fmod_sound_set_3d_custom_rolloff_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundset3dcustomrolloffmultiplatform(arg0,arg1);
}
public double fmod_sound_get_3d_custom_rolloff_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundget3dcustomrolloffmultiplatform(arg0,arg1);
}
public double fmod_sound_set_3d_min_max_distance(double arg0,double arg1,double arg2)
{
    return JNIfmodsoundset3dminmaxdistance(arg0,arg1,arg2);
}
public double fmod_sound_get_3d_min_max_distance_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundget3dminmaxdistancemultiplatform(arg0,arg1);
}
public double fmod_sound_set_defaults(double arg0,double arg1,double arg2)
{
    return JNIfmodsoundsetdefaults(arg0,arg1,arg2);
}
public double fmod_sound_get_defaults_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundgetdefaultsmultiplatform(arg0,arg1);
}
public double fmod_sound_set_mode(double arg0,double arg1)
{
    return JNIfmodsoundsetmode(arg0,arg1);
}
public double fmod_sound_get_mode(double arg0)
{
    return JNIfmodsoundgetmode(arg0);
}
public double fmod_sound_set_loop_count(double arg0,double arg1)
{
    return JNIfmodsoundsetloopcount(arg0,arg1);
}
public double fmod_sound_get_loop_count(double arg0)
{
    return JNIfmodsoundgetloopcount(arg0);
}
public double fmod_sound_set_loop_points(double arg0,double arg1,double arg2,double arg3,double arg4)
{
    return JNIfmodsoundsetlooppoints(arg0,arg1,arg2,arg3,arg4);
}
public double fmod_sound_get_loop_points_multiplatform(double arg0,double arg1,double arg2,ByteBuffer arg3)
{
    return JNIfmodsoundgetlooppointsmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_sound_set_sound_group(double arg0,double arg1)
{
    return JNIfmodsoundsetsoundgroup(arg0,arg1);
}
public double fmod_sound_get_sound_group(double arg0)
{
    return JNIfmodsoundgetsoundgroup(arg0);
}
public double fmod_sound_get_num_sub_sounds(double arg0)
{
    return JNIfmodsoundgetnumsubsounds(arg0);
}
public double fmod_sound_get_sub_sound(double arg0,double arg1)
{
    return JNIfmodsoundgetsubsound(arg0,arg1);
}
public double fmod_sound_get_sub_sound_parent(double arg0)
{
    return JNIfmodsoundgetsubsoundparent(arg0);
}
public double fmod_sound_get_open_state_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundgetopenstatemultiplatform(arg0,arg1);
}
public double fmod_sound_read_data_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundreaddatamultiplatform(arg0,arg1);
}
public double fmod_sound_seek_data(double arg0,double arg1)
{
    return JNIfmodsoundseekdata(arg0,arg1);
}
public double fmod_sound_lock_multiplatform(double arg0,ByteBuffer arg1,ByteBuffer arg2)
{
    return JNIfmodsoundlockmultiplatform(arg0,arg1,arg2);
}
public double fmod_sound_unlock_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsoundunlockmultiplatform(arg0,arg1);
}
public double fmod_sound_get_music_num_channels(double arg0)
{
    return JNIfmodsoundgetmusicnumchannels(arg0);
}
public double fmod_sound_set_music_channel_volume(double arg0,double arg1,double arg2)
{
    return JNIfmodsoundsetmusicchannelvolume(arg0,arg1,arg2);
}
public double fmod_sound_get_music_channel_volume(double arg0,double arg1)
{
    return JNIfmodsoundgetmusicchannelvolume(arg0,arg1);
}
public double fmod_sound_set_music_speed(double arg0,double arg1)
{
    return JNIfmodsoundsetmusicspeed(arg0,arg1);
}
public double fmod_sound_get_music_speed(double arg0)
{
    return JNIfmodsoundgetmusicspeed(arg0);
}
public double fmod_sound_get_sync_point_multiplatform(double arg0,double arg1,double arg2,ByteBuffer arg3)
{
    return JNIfmodsoundgetsyncpointmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_sound_get_num_sync_points(double arg0)
{
    return JNIfmodsoundgetnumsyncpoints(arg0);
}
public double fmod_sound_add_sync_point(double arg0,double arg1,double arg2,String arg3)
{
    return JNIfmodsoundaddsyncpoint(arg0,arg1,arg2,arg3);
}
public double fmod_sound_delete_sync_point(double arg0,double arg1)
{
    return JNIfmodsounddeletesyncpoint(arg0,arg1);
}
public double fmod_sound_release(double arg0)
{
    return JNIfmodsoundrelease(arg0);
}
public double fmod_sound_get_system_object(double arg0)
{
    return JNIfmodsoundgetsystemobject(arg0);
}
public double fmod_sound_set_user_data(double arg0,double arg1)
{
    return JNIfmodsoundsetuserdata(arg0,arg1);
}
public double fmod_sound_get_user_data(double arg0)
{
    return JNIfmodsoundgetuserdata(arg0);
}
public double fmod_sound_group_set_max_audible(double arg0,double arg1)
{
    return JNIfmodsoundgroupsetmaxaudible(arg0,arg1);
}
public double fmod_sound_group_get_max_audible(double arg0)
{
    return JNIfmodsoundgroupgetmaxaudible(arg0);
}
public double fmod_sound_group_set_max_audible_behavior(double arg0,double arg1)
{
    return JNIfmodsoundgroupsetmaxaudiblebehavior(arg0,arg1);
}
public double fmod_sound_group_get_max_audible_behavior(double arg0)
{
    return JNIfmodsoundgroupgetmaxaudiblebehavior(arg0);
}
public double fmod_sound_group_set_mute_fade_speed(double arg0,double arg1)
{
    return JNIfmodsoundgroupsetmutefadespeed(arg0,arg1);
}
public double fmod_sound_group_get_mute_fade_speed(double arg0)
{
    return JNIfmodsoundgroupgetmutefadespeed(arg0);
}
public double fmod_sound_group_set_volume(double arg0,double arg1)
{
    return JNIfmodsoundgroupsetvolume(arg0,arg1);
}
public double fmod_sound_group_get_volume(double arg0)
{
    return JNIfmodsoundgroupgetvolume(arg0);
}
public double fmod_sound_group_get_num_sounds(double arg0)
{
    return JNIfmodsoundgroupgetnumsounds(arg0);
}
public double fmod_sound_group_get_sound(double arg0,double arg1)
{
    return JNIfmodsoundgroupgetsound(arg0,arg1);
}
public double fmod_sound_group_get_num_playing(double arg0)
{
    return JNIfmodsoundgroupgetnumplaying(arg0);
}
public double fmod_sound_group_stop(double arg0)
{
    return JNIfmodsoundgroupstop(arg0);
}
public String fmod_sound_group_get_name(double arg0)
{
    return JNIfmodsoundgroupgetname(arg0);
}
public double fmod_sound_group_release(double arg0)
{
    return JNIfmodsoundgrouprelease(arg0);
}
public double fmod_sound_group_get_system_object(double arg0)
{
    return JNIfmodsoundgroupgetsystemobject(arg0);
}
public double fmod_sound_group_set_user_data(double arg0,double arg1)
{
    return JNIfmodsoundgroupsetuserdata(arg0,arg1);
}
public double fmod_sound_group_get_user_data(double arg0)
{
    return JNIfmodsoundgroupgetuserdata(arg0);
}
public double fmod_studio_bank_get_loading_state(double arg0)
{
    return JNIfmodstudiobankgetloadingstate(arg0);
}
public double fmod_studio_bank_load_sample_data(double arg0)
{
    return JNIfmodstudiobankloadsampledata(arg0);
}
public double fmod_studio_bank_unload_sample_data(double arg0)
{
    return JNIfmodstudiobankunloadsampledata(arg0);
}
public double fmod_studio_bank_get_sample_loading_state(double arg0)
{
    return JNIfmodstudiobankgetsampleloadingstate(arg0);
}
public double fmod_studio_bank_unload(double arg0)
{
    return JNIfmodstudiobankunload(arg0);
}
public double fmod_studio_bank_get_bus_count(double arg0)
{
    return JNIfmodstudiobankgetbuscount(arg0);
}
public double fmod_studio_bank_get_bus_list_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiobankgetbuslistmultiplatform(arg0,arg1);
}
public double fmod_studio_bank_get_event_count(double arg0)
{
    return JNIfmodstudiobankgeteventcount(arg0);
}
public double fmod_studio_bank_get_event_description_list_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiobankgeteventdescriptionlistmultiplatform(arg0,arg1);
}
public double fmod_studio_bank_get_string_count(double arg0)
{
    return JNIfmodstudiobankgetstringcount(arg0);
}
public double fmod_studio_bank_get_string_info_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmodstudiobankgetstringinfomultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_bank_get_vca_count(double arg0)
{
    return JNIfmodstudiobankgetvcacount(arg0);
}
public double fmod_studio_bank_get_vca_list_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiobankgetvcalistmultiplatform(arg0,arg1);
}
public String fmod_studio_bank_get_id(double arg0)
{
    return JNIfmodstudiobankgetid(arg0);
}
public String fmod_studio_bank_get_path(double arg0)
{
    return JNIfmodstudiobankgetpath(arg0);
}
public double fmod_studio_bank_is_valid(double arg0)
{
    return JNIfmodstudiobankisvalid(arg0);
}
public double fmod_studio_bank_set_user_data(double arg0,double arg1)
{
    return JNIfmodstudiobanksetuserdata(arg0,arg1);
}
public double fmod_studio_bank_get_user_data(double arg0)
{
    return JNIfmodstudiobankgetuserdata(arg0);
}
public double fmod_studio_bus_set_paused(double arg0,double arg1)
{
    return JNIfmodstudiobussetpaused(arg0,arg1);
}
public double fmod_studio_bus_get_paused(double arg0)
{
    return JNIfmodstudiobusgetpaused(arg0);
}
public double fmod_studio_bus_stop_all_events(double arg0,double arg1)
{
    return JNIfmodstudiobusstopallevents(arg0,arg1);
}
public double fmod_studio_bus_set_volume(double arg0,double arg1)
{
    return JNIfmodstudiobussetvolume(arg0,arg1);
}
public double fmod_studio_bus_get_volume(double arg0)
{
    return JNIfmodstudiobusgetvolume(arg0);
}
public double fmod_studio_bus_set_mute(double arg0,double arg1)
{
    return JNIfmodstudiobussetmute(arg0,arg1);
}
public double fmod_studio_bus_get_mute(double arg0)
{
    return JNIfmodstudiobusgetmute(arg0);
}
public double fmod_studio_bus_set_port_index_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiobussetportindexmultiplatform(arg0,arg1);
}
public double fmod_studio_bus_get_port_index_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiobusgetportindexmultiplatform(arg0,arg1);
}
public double fmod_studio_bus_get_channel_group(double arg0)
{
    return JNIfmodstudiobusgetchannelgroup(arg0);
}
public double fmod_studio_bus_lock_channel_group(double arg0)
{
    return JNIfmodstudiobuslockchannelgroup(arg0);
}
public double fmod_studio_bus_unlock_channel_group(double arg0)
{
    return JNIfmodstudiobusunlockchannelgroup(arg0);
}
public double fmod_studio_bus_get_cpu_usage_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiobusgetcpuusagemultiplatform(arg0,arg1);
}
public double fmod_studio_bus_get_memory_usage_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiobusgetmemoryusagemultiplatform(arg0,arg1);
}
public String fmod_studio_bus_get_id(double arg0)
{
    return JNIfmodstudiobusgetid(arg0);
}
public String fmod_studio_bus_get_path(double arg0)
{
    return JNIfmodstudiobusgetpath(arg0);
}
public double fmod_studio_bus_is_valid(double arg0)
{
    return JNIfmodstudiobusisvalid(arg0);
}
public double fmod_studio_command_replay_set_bank_path(double arg0,String arg1)
{
    return JNIfmodstudiocommandreplaysetbankpath(arg0,arg1);
}
public double fmod_studio_command_replay_set_create_instance_callback(double arg0)
{
    return JNIfmodstudiocommandreplaysetcreateinstancecallback(arg0);
}
public double fmod_studio_command_replay_set_frame_callback(double arg0)
{
    return JNIfmodstudiocommandreplaysetframecallback(arg0);
}
public double fmod_studio_command_replay_set_load_bank_callback(double arg0,String arg1)
{
    return JNIfmodstudiocommandreplaysetloadbankcallback(arg0,arg1);
}
public double fmod_studio_command_replay_start(double arg0)
{
    return JNIfmodstudiocommandreplaystart(arg0);
}
public double fmod_studio_command_replay_stop(double arg0)
{
    return JNIfmodstudiocommandreplaystop(arg0);
}
public double fmod_studio_command_replay_get_current_command_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiocommandreplaygetcurrentcommandmultiplatform(arg0,arg1);
}
public double fmod_studio_command_replay_get_playback_state(double arg0)
{
    return JNIfmodstudiocommandreplaygetplaybackstate(arg0);
}
public double fmod_studio_command_replay_set_paused(double arg0,double arg1)
{
    return JNIfmodstudiocommandreplaysetpaused(arg0,arg1);
}
public double fmod_studio_command_replay_get_paused(double arg0)
{
    return JNIfmodstudiocommandreplaygetpaused(arg0);
}
public double fmod_studio_command_replay_seek_to_command(double arg0,double arg1)
{
    return JNIfmodstudiocommandreplayseektocommand(arg0,arg1);
}
public double fmod_studio_command_replay_seek_to_time(double arg0,double arg1)
{
    return JNIfmodstudiocommandreplayseektotime(arg0,arg1);
}
public double fmod_studio_command_replay_get_command_at_time(double arg0,double arg1)
{
    return JNIfmodstudiocommandreplaygetcommandattime(arg0,arg1);
}
public double fmod_studio_command_replay_get_command_count(double arg0)
{
    return JNIfmodstudiocommandreplaygetcommandcount(arg0);
}
public double fmod_studio_command_replay_get_command_info_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmodstudiocommandreplaygetcommandinfomultiplatform(arg0,arg1,arg2);
}
public String fmod_studio_command_replay_get_command_string(double arg0,double arg1)
{
    return JNIfmodstudiocommandreplaygetcommandstring(arg0,arg1);
}
public double fmod_studio_command_replay_get_length(double arg0)
{
    return JNIfmodstudiocommandreplaygetlength(arg0);
}
public double fmod_studio_command_replay_get_system_object(double arg0)
{
    return JNIfmodstudiocommandreplaygetsystemobject(arg0);
}
public double fmod_studio_command_replay_is_valid(double arg0)
{
    return JNIfmodstudiocommandreplayisvalid(arg0);
}
public double fmod_studio_command_replay_set_user_data(double arg0,double arg1)
{
    return JNIfmodstudiocommandreplaysetuserdata(arg0,arg1);
}
public double fmod_studio_command_replay_get_user_data(double arg0)
{
    return JNIfmodstudiocommandreplaygetuserdata(arg0);
}
public double fmod_studio_command_replay_release(double arg0)
{
    return JNIfmodstudiocommandreplayrelease(arg0);
}
public double fmod_studio_event_description_create_instance(double arg0)
{
    return JNIfmodstudioeventdescriptioncreateinstance(arg0);
}
public double fmod_studio_event_description_get_instance_count(double arg0)
{
    return JNIfmodstudioeventdescriptiongetinstancecount(arg0);
}
public double fmod_studio_event_description_get_instance_list_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudioeventdescriptiongetinstancelistmultiplatform(arg0,arg1);
}
public double fmod_studio_event_description_release_all_instances(double arg0)
{
    return JNIfmodstudioeventdescriptionreleaseallinstances(arg0);
}
public double fmod_studio_event_description_load_sample_data(double arg0)
{
    return JNIfmodstudioeventdescriptionloadsampledata(arg0);
}
public double fmod_studio_event_description_unload_sample_data(double arg0)
{
    return JNIfmodstudioeventdescriptionunloadsampledata(arg0);
}
public double fmod_studio_event_description_get_sample_loading_state(double arg0)
{
    return JNIfmodstudioeventdescriptiongetsampleloadingstate(arg0);
}
public double fmod_studio_event_description_is_3d(double arg0)
{
    return JNIfmodstudioeventdescriptionis3d(arg0);
}
public double fmod_studio_event_description_is_doppler_enabled(double arg0)
{
    return JNIfmodstudioeventdescriptionisdopplerenabled(arg0);
}
public double fmod_studio_event_description_is_oneshot(double arg0)
{
    return JNIfmodstudioeventdescriptionisoneshot(arg0);
}
public double fmod_studio_event_description_is_snapshot(double arg0)
{
    return JNIfmodstudioeventdescriptionissnapshot(arg0);
}
public double fmod_studio_event_description_is_stream(double arg0)
{
    return JNIfmodstudioeventdescriptionisstream(arg0);
}
public double fmod_studio_event_description_has_sustain_point(double arg0)
{
    return JNIfmodstudioeventdescriptionhassustainpoint(arg0);
}
public double fmod_studio_event_description_get_min_max_distance_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudioeventdescriptiongetminmaxdistancemultiplatform(arg0,arg1);
}
public double fmod_studio_event_description_get_sound_size(double arg0)
{
    return JNIfmodstudioeventdescriptiongetsoundsize(arg0);
}
public double fmod_studio_event_description_get_parameter_description_by_name_multiplatform(double arg0,String arg1,ByteBuffer arg2)
{
    return JNIfmodstudioeventdescriptiongetparameterdescriptionbynamemultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_event_description_get_parameter_description_by_id_multiplatform(double arg0,ByteBuffer arg1,ByteBuffer arg2)
{
    return JNIfmodstudioeventdescriptiongetparameterdescriptionbyidmultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_event_description_get_parameter_description_by_index_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmodstudioeventdescriptiongetparameterdescriptionbyindexmultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_event_description_get_parameter_description_count(double arg0)
{
    return JNIfmodstudioeventdescriptiongetparameterdescriptioncount(arg0);
}
public String fmod_studio_event_description_get_parameter_label_by_name(double arg0,String arg1,double arg2)
{
    return JNIfmodstudioeventdescriptiongetparameterlabelbyname(arg0,arg1,arg2);
}
public String fmod_studio_event_description_get_parameter_label_by_id_multiplatform(double arg0,ByteBuffer arg1,double arg2)
{
    return JNIfmodstudioeventdescriptiongetparameterlabelbyidmultiplatform(arg0,arg1,arg2);
}
public String fmod_studio_event_description_get_parameter_label_by_index(double arg0,double arg1,double arg2)
{
    return JNIfmodstudioeventdescriptiongetparameterlabelbyindex(arg0,arg1,arg2);
}
public double fmod_studio_event_description_get_user_property_multiplatform(double arg0,String arg1,ByteBuffer arg2)
{
    return JNIfmodstudioeventdescriptiongetuserpropertymultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_event_description_get_user_property_by_index_multiplatform(double arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmodstudioeventdescriptiongetuserpropertybyindexmultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_event_description_get_user_property_count(double arg0)
{
    return JNIfmodstudioeventdescriptiongetuserpropertycount(arg0);
}
public String fmod_studio_event_description_get_id(double arg0)
{
    return JNIfmodstudioeventdescriptiongetid(arg0);
}
public double fmod_studio_event_description_get_length(double arg0)
{
    return JNIfmodstudioeventdescriptiongetlength(arg0);
}
public String fmod_studio_event_description_get_path(double arg0)
{
    return JNIfmodstudioeventdescriptiongetpath(arg0);
}
public double fmod_studio_event_description_set_callback(double arg0,double arg1)
{
    return JNIfmodstudioeventdescriptionsetcallback(arg0,arg1);
}
public double fmod_studio_event_description_set_user_data(double arg0,double arg1)
{
    return JNIfmodstudioeventdescriptionsetuserdata(arg0,arg1);
}
public double fmod_studio_event_description_get_user_data(double arg0)
{
    return JNIfmodstudioeventdescriptiongetuserdata(arg0);
}
public double fmod_studio_event_description_is_valid(double arg0)
{
    return JNIfmodstudioeventdescriptionisvalid(arg0);
}
public double fmod_studio_event_instance_start(double arg0)
{
    return JNIfmodstudioeventinstancestart(arg0);
}
public double fmod_studio_event_instance_stop(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancestop(arg0,arg1);
}
public double fmod_studio_event_instance_get_playback_state(double arg0)
{
    return JNIfmodstudioeventinstancegetplaybackstate(arg0);
}
public double fmod_studio_event_instance_set_paused(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancesetpaused(arg0,arg1);
}
public double fmod_studio_event_instance_get_paused(double arg0)
{
    return JNIfmodstudioeventinstancegetpaused(arg0);
}
public double fmod_studio_event_instance_keyoff(double arg0)
{
    return JNIfmodstudioeventinstancekeyoff(arg0);
}
public double fmod_studio_event_instance_set_pitch(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancesetpitch(arg0,arg1);
}
public double fmod_studio_event_instance_get_pitch(double arg0)
{
    return JNIfmodstudioeventinstancegetpitch(arg0);
}
public double fmod_studio_event_instance_set_property(double arg0,double arg1,double arg2)
{
    return JNIfmodstudioeventinstancesetproperty(arg0,arg1,arg2);
}
public double fmod_studio_event_instance_get_property(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancegetproperty(arg0,arg1);
}
public double fmod_studio_event_instance_set_timeline_position(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancesettimelineposition(arg0,arg1);
}
public double fmod_studio_event_instance_get_timeline_position(double arg0)
{
    return JNIfmodstudioeventinstancegettimelineposition(arg0);
}
public double fmod_studio_event_instance_set_volume(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancesetvolume(arg0,arg1);
}
public double fmod_studio_event_instance_get_volume_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudioeventinstancegetvolumemultiplatform(arg0,arg1);
}
public double fmod_studio_event_instance_is_virtual(double arg0)
{
    return JNIfmodstudioeventinstanceisvirtual(arg0);
}
public double fmod_studio_event_instance_set_3d_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudioeventinstanceset3dattributesmultiplatform(arg0,arg1);
}
public double fmod_studio_event_instance_get_3d_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudioeventinstanceget3dattributesmultiplatform(arg0,arg1);
}
public double fmod_studio_event_instance_set_listener_mask(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancesetlistenermask(arg0,arg1);
}
public double fmod_studio_event_instance_get_listener_mask(double arg0)
{
    return JNIfmodstudioeventinstancegetlistenermask(arg0);
}
public double fmod_studio_event_instance_get_min_max_distance_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudioeventinstancegetminmaxdistancemultiplatform(arg0,arg1);
}
public double fmod_studio_event_instance_set_parameter_by_name_multiplatform(double arg0,String arg1,double arg2,double arg3)
{
    return JNIfmodstudioeventinstancesetparameterbynamemultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_studio_event_instance_set_parameter_by_name_with_label(double arg0,String arg1,String arg2,double arg3)
{
    return JNIfmodstudioeventinstancesetparameterbynamewithlabel(arg0,arg1,arg2,arg3);
}
public double fmod_studio_event_instance_get_parameter_by_name_multiplatform(double arg0,String arg1,ByteBuffer arg2)
{
    return JNIfmodstudioeventinstancegetparameterbynamemultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_event_instance_set_parameter_by_id_multiplatform(double arg0,ByteBuffer arg1,double arg2,double arg3)
{
    return JNIfmodstudioeventinstancesetparameterbyidmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(double arg0,ByteBuffer arg1,String arg2,double arg3)
{
    return JNIfmodstudioeventinstancesetparameterbyidwithlabelmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_studio_event_instance_get_parameter_by_id_multiplatform(double arg0,ByteBuffer arg1,ByteBuffer arg2)
{
    return JNIfmodstudioeventinstancegetparameterbyidmultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_event_instance_get_channel_group(double arg0)
{
    return JNIfmodstudioeventinstancegetchannelgroup(arg0);
}
public double fmod_studio_event_instance_set_reverb_level(double arg0,double arg1,double arg2)
{
    return JNIfmodstudioeventinstancesetreverblevel(arg0,arg1,arg2);
}
public double fmod_studio_event_instance_get_reverb_level(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancegetreverblevel(arg0,arg1);
}
public double fmod_studio_event_instance_get_cpu_usage_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudioeventinstancegetcpuusagemultiplatform(arg0,arg1);
}
public double fmod_studio_event_instance_get_memory_usage_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudioeventinstancegetmemoryusagemultiplatform(arg0,arg1);
}
public double fmod_studio_event_instance_set_callback(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancesetcallback(arg0,arg1);
}
public double fmod_studio_event_instance_set_user_data(double arg0,double arg1)
{
    return JNIfmodstudioeventinstancesetuserdata(arg0,arg1);
}
public double fmod_studio_event_instance_get_user_data(double arg0)
{
    return JNIfmodstudioeventinstancegetuserdata(arg0);
}
public double fmod_studio_event_instance_get_description(double arg0)
{
    return JNIfmodstudioeventinstancegetdescription(arg0);
}
public double fmod_studio_event_instance_release(double arg0)
{
    return JNIfmodstudioeventinstancerelease(arg0);
}
public double fmod_studio_event_instance_is_valid(double arg0)
{
    return JNIfmodstudioeventinstanceisvalid(arg0);
}
public double fmod_studio_system_create()
{
    return JNIfmodstudiosystemcreate();
}
public double fmod_studio_system_init(double arg0,double arg1,double arg2)
{
    return JNIfmodstudiosysteminit(arg0,arg1,arg2);
}
public double fmod_studio_system_release()
{
    return JNIfmodstudiosystemrelease();
}
public double fmod_studio_system_update_multiplatform()
{
    return JNIfmodstudiosystemupdatemultiplatform();
}
public double fmod_studio_system_flush_commands()
{
    return JNIfmodstudiosystemflushcommands();
}
public double fmod_studio_system_flush_sample_loading()
{
    return JNIfmodstudiosystemflushsampleloading();
}
public double fmod_studio_system_load_bank_custom(double arg0)
{
    return JNIfmodstudiosystemloadbankcustom(arg0);
}
public double fmod_studio_system_load_bank_file(String arg0,double arg1)
{
    return JNIfmodstudiosystemloadbankfile(arg0,arg1);
}
public double fmod_studio_system_load_bank_memory_multiplatform(ByteBuffer arg0,double arg1,double arg2,double arg3)
{
    return JNIfmodstudiosystemloadbankmemorymultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_studio_system_unload_all()
{
    return JNIfmodstudiosystemunloadall();
}
public double fmod_studio_system_get_bank(String arg0)
{
    return JNIfmodstudiosystemgetbank(arg0);
}
public double fmod_studio_system_get_bank_by_id(String arg0)
{
    return JNIfmodstudiosystemgetbankbyid(arg0);
}
public double fmod_studio_system_get_bank_count()
{
    return JNIfmodstudiosystemgetbankcount();
}
public double fmod_studio_system_get_bank_list_multiplatform(ByteBuffer arg0)
{
    return JNIfmodstudiosystemgetbanklistmultiplatform(arg0);
}
public double fmod_studio_system_set_listener_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiosystemsetlistenerattributesmultiplatform(arg0,arg1);
}
public double fmod_studio_system_get_listener_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodstudiosystemgetlistenerattributesmultiplatform(arg0,arg1);
}
public double fmod_studio_system_set_listener_weight(double arg0,double arg1)
{
    return JNIfmodstudiosystemsetlistenerweight(arg0,arg1);
}
public double fmod_studio_system_get_listener_weight(double arg0)
{
    return JNIfmodstudiosystemgetlistenerweight(arg0);
}
public double fmod_studio_system_set_num_listeners(double arg0)
{
    return JNIfmodstudiosystemsetnumlisteners(arg0);
}
public double fmod_studio_system_get_num_listeners()
{
    return JNIfmodstudiosystemgetnumlisteners();
}
public double fmod_studio_system_get_bus(String arg0)
{
    return JNIfmodstudiosystemgetbus(arg0);
}
public double fmod_studio_system_get_bus_by_id(String arg0)
{
    return JNIfmodstudiosystemgetbusbyid(arg0);
}
public double fmod_studio_system_get_event(String arg0)
{
    return JNIfmodstudiosystemgetevent(arg0);
}
public double fmod_studio_system_get_event_by_id(String arg0)
{
    return JNIfmodstudiosystemgeteventbyid(arg0);
}
public double fmod_studio_system_get_parameter_by_id_multiplatform(ByteBuffer arg0,ByteBuffer arg1)
{
    return JNIfmodstudiosystemgetparameterbyidmultiplatform(arg0,arg1);
}
public double fmod_studio_system_set_parameter_by_id_multiplatform(ByteBuffer arg0,double arg1,double arg2)
{
    return JNIfmodstudiosystemsetparameterbyidmultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_system_set_parameter_by_id_with_label_multiplatform(ByteBuffer arg0,String arg1,double arg2)
{
    return JNIfmodstudiosystemsetparameterbyidwithlabelmultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_system_get_parameter_by_name_multiplatform(String arg0,ByteBuffer arg1)
{
    return JNIfmodstudiosystemgetparameterbynamemultiplatform(arg0,arg1);
}
public double fmod_studio_system_set_parameter_by_name_multiplatform(String arg0,double arg1,double arg2)
{
    return JNIfmodstudiosystemsetparameterbynamemultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_system_set_parameter_by_name_with_label_multiplatform(String arg0,String arg1,double arg2)
{
    return JNIfmodstudiosystemsetparameterbynamewithlabelmultiplatform(arg0,arg1,arg2);
}
public double fmod_studio_system_get_parameter_description_by_name_multiplatform(String arg0,ByteBuffer arg1)
{
    return JNIfmodstudiosystemgetparameterdescriptionbynamemultiplatform(arg0,arg1);
}
public double fmod_studio_system_get_parameter_description_by_id_multiplatform(ByteBuffer arg0,ByteBuffer arg1)
{
    return JNIfmodstudiosystemgetparameterdescriptionbyidmultiplatform(arg0,arg1);
}
public double fmod_studio_system_get_parameter_description_count()
{
    return JNIfmodstudiosystemgetparameterdescriptioncount();
}
public double fmod_studio_system_get_parameter_description_list_multiplatform(ByteBuffer arg0)
{
    return JNIfmodstudiosystemgetparameterdescriptionlistmultiplatform(arg0);
}
public String fmod_studio_system_get_parameter_label_by_name(String arg0,double arg1)
{
    return JNIfmodstudiosystemgetparameterlabelbyname(arg0,arg1);
}
public String fmod_studio_system_get_parameter_label_by_id_multiplatform(ByteBuffer arg0,double arg1)
{
    return JNIfmodstudiosystemgetparameterlabelbyidmultiplatform(arg0,arg1);
}
public double fmod_studio_system_get_vca(String arg0)
{
    return JNIfmodstudiosystemgetvca(arg0);
}
public double fmod_studio_system_get_vca_by_id(String arg0)
{
    return JNIfmodstudiosystemgetvcabyid(arg0);
}
public double fmod_studio_system_set_advanced_settings_multiplatform(ByteBuffer arg0)
{
    return JNIfmodstudiosystemsetadvancedsettingsmultiplatform(arg0);
}
public double fmod_studio_system_get_advanced_settings_multiplatform(ByteBuffer arg0)
{
    return JNIfmodstudiosystemgetadvancedsettingsmultiplatform(arg0);
}
public double fmod_studio_system_start_command_capture(String arg0,double arg1)
{
    return JNIfmodstudiosystemstartcommandcapture(arg0,arg1);
}
public double fmod_studio_system_stop_command_capture()
{
    return JNIfmodstudiosystemstopcommandcapture();
}
public double fmod_studio_system_load_command_replay(String arg0,double arg1)
{
    return JNIfmodstudiosystemloadcommandreplay(arg0,arg1);
}
public double fmod_studio_system_get_buffer_usage_multiplatform(ByteBuffer arg0)
{
    return JNIfmodstudiosystemgetbufferusagemultiplatform(arg0);
}
public double fmod_studio_system_reset_buffer_usage()
{
    return JNIfmodstudiosystemresetbufferusage();
}
public double fmod_studio_system_get_cpu_usage_multiplatform(ByteBuffer arg0)
{
    return JNIfmodstudiosystemgetcpuusagemultiplatform(arg0);
}
public double fmod_studio_system_get_memory_usage_multiplatform(ByteBuffer arg0)
{
    return JNIfmodstudiosystemgetmemoryusagemultiplatform(arg0);
}
public double fmod_studio_system_set_callback(double arg0)
{
    return JNIfmodstudiosystemsetcallback(arg0);
}
public double fmod_studio_system_set_user_data(double arg0)
{
    return JNIfmodstudiosystemsetuserdata(arg0);
}
public double fmod_studio_system_get_user_data()
{
    return JNIfmodstudiosystemgetuserdata();
}
public double fmod_studio_system_get_sound_info_multiplatform(String arg0,ByteBuffer arg1)
{
    return JNIfmodstudiosystemgetsoundinfomultiplatform(arg0,arg1);
}
public double fmod_studio_system_get_core_system()
{
    return JNIfmodstudiosystemgetcoresystem();
}
public String fmod_studio_system_lookup_id(String arg0)
{
    return JNIfmodstudiosystemlookupid(arg0);
}
public String fmod_studio_system_lookup_path(String arg0)
{
    return JNIfmodstudiosystemlookuppath(arg0);
}
public double fmod_studio_system_is_valid()
{
    return JNIfmodstudiosystemisvalid();
}
public double fmod_studio_vca_set_volume(double arg0,double arg1)
{
    return JNIfmodstudiovcasetvolume(arg0,arg1);
}
public double fmod_studio_vca_get_volume(double arg0)
{
    return JNIfmodstudiovcagetvolume(arg0);
}
public String fmod_studio_vca_get_id(double arg0)
{
    return JNIfmodstudiovcagetid(arg0);
}
public String fmod_studio_vca_get_path(double arg0)
{
    return JNIfmodstudiovcagetpath(arg0);
}
public double fmod_studio_vca_is_valid(double arg0)
{
    return JNIfmodstudiovcaisvalid(arg0);
}
public double fmod_system_create()
{
    return JNIfmodsystemcreate();
}
public double fmod_system_select(double arg0)
{
    return JNIfmodsystemselect(arg0);
}
public double fmod_system_count()
{
    return JNIfmodsystemcount();
}
public double fmod_system_init(double arg0,double arg1)
{
    return JNIfmodsysteminit(arg0,arg1);
}
public double fmod_system_release(double arg0)
{
    return JNIfmodsystemrelease(arg0);
}
public double fmod_system_close(double arg0)
{
    return JNIfmodsystemclose(arg0);
}
public double fmod_system_update_multiplatform()
{
    return JNIfmodsystemupdatemultiplatform();
}
public double fmod_system_mixer_suspend()
{
    return JNIfmodsystemmixersuspend();
}
public double fmod_system_mixer_resume()
{
    return JNIfmodsystemmixerresume();
}
public double fmod_system_set_output(double arg0)
{
    return JNIfmodsystemsetoutput(arg0);
}
public double fmod_system_get_output()
{
    return JNIfmodsystemgetoutput();
}
public double fmod_system_get_num_drivers()
{
    return JNIfmodsystemgetnumdrivers();
}
public double fmod_system_get_driver_info_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsystemgetdriverinfomultiplatform(arg0,arg1);
}
public double fmod_system_set_driver(double arg0)
{
    return JNIfmodsystemsetdriver(arg0);
}
public double fmod_system_get_driver()
{
    return JNIfmodsystemgetdriver();
}
public double fmod_system_set_software_channels(double arg0)
{
    return JNIfmodsystemsetsoftwarechannels(arg0);
}
public double fmod_system_get_software_channels()
{
    return JNIfmodsystemgetsoftwarechannels();
}
public double fmod_system_set_software_format(double arg0,double arg1,double arg2)
{
    return JNIfmodsystemsetsoftwareformat(arg0,arg1,arg2);
}
public double fmod_system_get_software_format_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetsoftwareformatmultiplatform(arg0);
}
public double fmod_system_set_dsp_buffer_size(double arg0,double arg1)
{
    return JNIfmodsystemsetdspbuffersize(arg0,arg1);
}
public double fmod_system_get_dsp_buffer_size_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetdspbuffersizemultiplatform(arg0);
}
public double fmod_system_set_stream_buffer_size(double arg0,double arg1)
{
    return JNIfmodsystemsetstreambuffersize(arg0,arg1);
}
public double fmod_system_get_stream_buffer_size_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetstreambuffersizemultiplatform(arg0);
}
public double fmod_system_set_advanced_settings_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemsetadvancedsettingsmultiplatform(arg0);
}
public double fmod_system_get_advanced_settings_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetadvancedsettingsmultiplatform(arg0);
}
public double fmod_system_set_speaker_position(double arg0,double arg1,double arg2,double arg3)
{
    return JNIfmodsystemsetspeakerposition(arg0,arg1,arg2,arg3);
}
public double fmod_system_get_speaker_position_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsystemgetspeakerpositionmultiplatform(arg0,arg1);
}
public double fmod_system_set_3d_settings(double arg0,double arg1,double arg2)
{
    return JNIfmodsystemset3dsettings(arg0,arg1,arg2);
}
public double fmod_system_get_3d_settings_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemget3dsettingsmultiplatform(arg0);
}
public double fmod_system_set_3d_num_listeners(double arg0)
{
    return JNIfmodsystemset3dnumlisteners(arg0);
}
public double fmod_system_get_3d_num_listeners()
{
    return JNIfmodsystemget3dnumlisteners();
}
public double fmod_system_set_3d_rolloff_callback()
{
    return JNIfmodsystemset3drolloffcallback();
}
public double fmod_system_set_network_proxy(String arg0)
{
    return JNIfmodsystemsetnetworkproxy(arg0);
}
public String fmod_system_get_network_proxy()
{
    return JNIfmodsystemgetnetworkproxy();
}
public double fmod_system_set_network_timeout(double arg0)
{
    return JNIfmodsystemsetnetworktimeout(arg0);
}
public double fmod_system_get_network_timeout()
{
    return JNIfmodsystemgetnetworktimeout();
}
public double fmod_system_get_version()
{
    return JNIfmodsystemgetversion();
}
public double fmod_system_get_channels_playing_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetchannelsplayingmultiplatform(arg0);
}
public double fmod_system_get_cpu_usage_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetcpuusagemultiplatform(arg0);
}
public double fmod_system_get_file_usage_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetfileusagemultiplatform(arg0);
}
public double fmod_system_get_default_mix_matrix_multiplatform(double arg0,double arg1,double arg2,ByteBuffer arg3)
{
    return JNIfmodsystemgetdefaultmixmatrixmultiplatform(arg0,arg1,arg2,arg3);
}
public double fmod_system_get_speaker_mode_channels(double arg0)
{
    return JNIfmodsystemgetspeakermodechannels(arg0);
}
public double fmod_system_create_sound_multiplatform(String arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmodsystemcreatesoundmultiplatform(arg0,arg1,arg2);
}
public double fmod_system_create_stream_multiplatform(String arg0,double arg1,ByteBuffer arg2)
{
    return JNIfmodsystemcreatestreammultiplatform(arg0,arg1,arg2);
}
public double fmod_system_create_dsp()
{
    return JNIfmodsystemcreatedsp();
}
public double fmod_system_create_dsp_by_type(double arg0)
{
    return JNIfmodsystemcreatedspbytype(arg0);
}
public double fmod_system_create_channel_group(String arg0)
{
    return JNIfmodsystemcreatechannelgroup(arg0);
}
public double fmod_system_create_sound_group(String arg0)
{
    return JNIfmodsystemcreatesoundgroup(arg0);
}
public double fmod_system_create_reverb_3d()
{
    return JNIfmodsystemcreatereverb3d();
}
public double fmod_system_play_sound_multiplatform(double arg0,double arg1,double arg2)
{
    return JNIfmodsystemplaysoundmultiplatform(arg0,arg1,arg2);
}
public double fmod_system_play_dsp_multiplatform(double arg0,double arg1,double arg2)
{
    return JNIfmodsystemplaydspmultiplatform(arg0,arg1,arg2);
}
public double fmod_system_get_channel(double arg0)
{
    return JNIfmodsystemgetchannel(arg0);
}
public double fmod_system_get_master_channel_group()
{
    return JNIfmodsystemgetmasterchannelgroup();
}
public double fmod_system_get_master_sound_group()
{
    return JNIfmodsystemgetmastersoundgroup();
}
public double fmod_system_set_3d_listener_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsystemset3dlistenerattributesmultiplatform(arg0,arg1);
}
public double fmod_system_get_3d_listener_attributes_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsystemget3dlistenerattributesmultiplatform(arg0,arg1);
}
public double fmod_system_set_reverb_properties_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsystemsetreverbpropertiesmultiplatform(arg0,arg1);
}
public double fmod_system_get_reverb_properties_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsystemgetreverbpropertiesmultiplatform(arg0,arg1);
}
public double fmod_system_attach_channel_group_to_port_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemattachchannelgrouptoportmultiplatform(arg0);
}
public double fmod_system_detach_channel_group_from_port(double arg0)
{
    return JNIfmodsystemdetachchannelgroupfromport(arg0);
}
public double fmod_system_get_record_num_drivers_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetrecordnumdriversmultiplatform(arg0);
}
public double fmod_system_get_record_driver_info_multiplatform(double arg0,ByteBuffer arg1)
{
    return JNIfmodsystemgetrecorddriverinfomultiplatform(arg0,arg1);
}
public double fmod_system_get_record_position(double arg0)
{
    return JNIfmodsystemgetrecordposition(arg0);
}
public double fmod_system_record_start(double arg0,double arg1,double arg2)
{
    return JNIfmodsystemrecordstart(arg0,arg1,arg2);
}
public double fmod_system_record_stop(double arg0)
{
    return JNIfmodsystemrecordstop(arg0);
}
public double fmod_system_is_recording(double arg0)
{
    return JNIfmodsystemisrecording(arg0);
}
public double fmod_system_create_geometry(double arg0,double arg1)
{
    return JNIfmodsystemcreategeometry(arg0,arg1);
}
public double fmod_system_set_geometry_settings(double arg0)
{
    return JNIfmodsystemsetgeometrysettings(arg0);
}
public double fmod_system_get_geometry_settings()
{
    return JNIfmodsystemgetgeometrysettings();
}
public double fmod_system_load_geometry_multiplatform(ByteBuffer arg0,double arg1)
{
    return JNIfmodsystemloadgeometrymultiplatform(arg0,arg1);
}
public double fmod_system_get_geometry_occlusion_multiplatform(ByteBuffer arg0)
{
    return JNIfmodsystemgetgeometryocclusionmultiplatform(arg0);
}
public double fmod_system_lock_dsp()
{
    return JNIfmodsystemlockdsp();
}
public double fmod_system_unlock_dsp()
{
    return JNIfmodsystemunlockdsp();
}
public double fmod_system_set_callback(double arg0)
{
    return JNIfmodsystemsetcallback(arg0);
}
public double fmod_system_set_user_data(double arg0,double arg1)
{
    return JNIfmodsystemsetuserdata(arg0,arg1);
}
public double fmod_system_get_user_data(double arg0)
{
    return JNIfmodsystemgetuserdata(arg0);
}
public double fmod_fetch_callbacks(ByteBuffer arg0,double arg1)
{
    return JNIfmodfetchcallbacks(arg0,arg1);
}
public double fmod_last_result()
{
    return JNIfmodlastresult();
}

};