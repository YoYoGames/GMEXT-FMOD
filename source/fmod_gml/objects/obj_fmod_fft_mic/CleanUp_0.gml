///@desc Free Resources

// Recording has to stop before the sound it writes into goes away
fmod_system_record_stop(DEVICE_INDEX);

fmod_sound_release(sound);
fmod_dsp_release(dsp_fft);

buffer_delete(fft_buffer);
