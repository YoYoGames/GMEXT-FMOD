
sound_file = fmod_path_bundle("drumloop.wav");

/*
    In this special case we want to use stereo output and not worry about varying matrix sizes depending on user speaker mode.
*/
fmod_system_set_software_format(48000, FMOD_SPEAKERMODE.STEREO, 0);

/*
    Initialize the Sound
*/
sound = fmod_system_create_sound(sound_file, FMOD_MODE.DEFAULT);

channel = fmod_system_play_sound(sound, false);


/*
    Create the DSP effects.
*/ 
dsp_lowpass = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.LOWPASS);
fmod_dsp_set_parameter_float(dsp_lowpass, FMOD_DSP_LOWPASS.CUTOFF, 1000);
fmod_dsp_set_parameter_float(dsp_lowpass, FMOD_DSP_LOWPASS.RESONANCE, 4);

dsp_highpass = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.HIGHPASS)
fmod_dsp_set_parameter_float(dsp_lowpass, FMOD_DSP_HIGHPASS.CUTOFF, 4000);
fmod_dsp_set_parameter_float(dsp_lowpass, FMOD_DSP_HIGHPASS.RESONANCE, 4);


/*
    Connect up the DSP network
*/

/*
    When a sound is played, a subnetwork is set up in the DSP network which looks like this.
    Wavetable is the drumloop sound, and it feeds its data from right to left.

    [DSPHEAD]<------------[DSPCHANNELMIXER]<------------[CHANNEL HEAD]<------------[WAVETABLE - DRUMLOOP.WAV]
*/

master_group_channel = fmod_system_get_master_channel_group();

dsp_head = fmod_channel_control_get_dsp(master_group_channel, FMOD_CHANNELCONTROL_DSP_INDEX.HEAD)

dsp_channel_mixer_connection_info = fmod_dsp_get_input(dsp_head, 0); // { dsp_ref: <dsp_ref>, dsp_connection_ref: <dsp_connection_ref> }
dsp_channel_mixer = dsp_channel_mixer_connection_info.dsp_ref

/*
    Now disconnect channel dsp_head from wavetable to look like this.

    [DSPHEAD]             [DSPCHANNELMIXER]<------------[CHANNEL HEAD]<------------[WAVETABLE - DRUMLOOP.WAV]
*/
fmod_dsp_disconnect_from(dsp_head, dsp_channel_mixer);

/*
    Now connect the 2 effects to channel dsp_head.  
    Store the 2 connections this makes so we can set their matrix later.

              [DSPLOWPASS]
             /x           
    [DSPHEAD]             [DSPCHANNELMIXER]<------------[CHANNEL HEAD]<------------[WAVETABLE - DRUMLOOP.WAV]
             \y           
              [DSPHIGHPASS]
*/

lowpass_connection = fmod_dsp_add_input(dsp_head, dsp_lowpass);
highpass_connection = fmod_dsp_add_input(dsp_head, dsp_highpass);

/*
    Now connect the channelmixer to the 2 effects

              [DSPLOWPASS]
             /x          \
    [DSPHEAD]             [DSPCHANNELMIXER]<------------[CHANNEL HEAD]<------------[WAVETABLE - DRUMLOOP.WAV]
             \y          /
              [DSPHIGHPASS]
*/

fmod_dsp_add_input(dsp_lowpass, dsp_channel_mixer); /* Ignore connection - we dont care about it. */
fmod_dsp_add_input(dsp_highpass, dsp_channel_mixer); /* Ignore connection - we dont care about it. */


/*
    Now the drumloop will be twice as loud, because it is being split into 2, then recombined at the end.
    What we really want is to only feed the dsphead<-dsplowpass through the left speaker for that effect, and 
    dsphead<-dsphighpass to the right speaker for that effect.
    We can do that simply by setting the pan, or speaker matrix of the connections.

              [DSPLOWPASS]
             /x=1,0      \
    [DSPHEAD]             [DSPCHANNELMIXER]<------------[CHANNEL HEAD]<------------[WAVETABLE - DRUMLOOP.WAV]
             \y=0,1      /
              [DSPHIGHPASS]
*/    

var _lowpass_matrix = [
	1, 0, // <- output to front left.  Take front left input signal at 1.0.
	0, 0  // <- output to front right.  Silence
];

var _highpass_matrix = [
	0, 0, // <- output to front left.  Silence
	0, 1  // <- output to front right.  Take front right input signal at 1.0
];

/* 
    Upgrade the signal coming from the channel mixer from mono to stereo.  Otherwise the lowpass and highpass will get mono signals 
*/
fmod_dsp_set_channel_format(dsp_channel_mixer, 0, 0, FMOD_SPEAKERMODE.STEREO);

/*
    Now set the above matrices.
*/
fmod_dsp_connection_set_mix_matrix(lowpass_connection, _lowpass_matrix, 2, 2);
fmod_dsp_connection_set_mix_matrix(highpass_connection, _highpass_matrix, 2, 2);

fmod_dsp_set_bypass(dsp_lowpass, true);
fmod_dsp_set_bypass(dsp_highpass, true);

fmod_dsp_set_active(dsp_lowpass, true);
fmod_dsp_set_active(dsp_highpass, true);

panning = 0