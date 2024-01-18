
mix = 1
vol = 1

fmod_system_set_software_format(48000, FMOD_SPEAKERMODE.STEREO, 0);

/*
    Create a new channel group to hold the convolution DSP unit
*/
reverb_channel_group_index = fmod_system_create_channel_group("reverb");

/*
    Create a new channel group to hold all the channels and process the dry path
*/
main_channel_group_index = fmod_system_create_channel_group("main");

/*
    Create the convultion DSP unit and set it as the tail of the channel group
*/
reverb_dsp = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.CONVOLUTIONREVERB);
fmod_channel_control_add_dsp(reverb_channel_group_index, FMOD_CHANNELCONTROL_DSP_INDEX.TAIL, reverb_dsp);

/*
    Open the impulse response wav file, but use FMOD_MODE.OPENONLY as we want
    to read the data into a seperate buffer
*/
sound_file = "standrews.wav"
ir_sound_index = fmod_system_create_sound(fmod_path_bundle(sound_file), FMOD_MODE.DEFAULT | FMOD_MODE.OPENONLY);

/*
    Retrieve the sound information for the Impulse Response input file
*/
ir_format = fmod_sound_get_format(ir_sound_index)
ir_length = fmod_sound_get_length(ir_sound_index, FMOD_TIMEUNIT.PCM)


/*
    The reverb unit expects a block of data containing a single 16 bit int containing
    the number of channels in the impulse response, followed by PCM 16 data
*/
ir_data_length = buffer_sizeof(buffer_u16) * (ir_length * ir_format.channels + 1);

var _buff = buffer_create(ir_data_length, buffer_fixed, 1);
buffer_write(_buff, buffer_u16, ir_format.channels);
fmod_sound_read_data(ir_sound_index, _buff, ir_data_length - 2, 2);

fmod_dsp_set_parameter_data(reverb_dsp, FMOD_DSP_CONVOLUTION_REVERB_PARAM.IR, _buff, ir_data_length);

/*
    Don't pass any dry signal from the reverb unit, instead take the dry part
    of the mix from the main signal path
*/
fmod_dsp_set_parameter_float(reverb_dsp, FMOD_DSP_CONVOLUTION_REVERB_PARAM.DRY, -80);

/*
    We can now free our copy of the IR data and release the sound object, the reverb unit 
    has created it's internal data
*/
buffer_delete(_buff);
fmod_sound_release(ir_sound_index);

/*
    Load up and play a sample clip recorded in an anechoic chamber
*/
sound_index = fmod_system_create_sound(fmod_path_bundle("singing.wav"), FMOD_MODE.AS_3D | FMOD_MODE.LOOP_NORMAL);
channel_index = fmod_system_play_sound(sound_index, true, main_channel_group_index);

/*
    Create a send connection between the channel head and the reverb unit
*/
head_dsp = fmod_channel_control_get_dsp(channel_index, FMOD_CHANNELCONTROL_DSP_INDEX.HEAD);
dsp_reverb_connection = fmod_dsp_add_input(reverb_dsp, head_dsp, FMOD_DSPCONNECTION_TYPE.SEND);

/*
    Unpause the audio channel
*/
fmod_channel_control_set_paused(channel_index, false);


