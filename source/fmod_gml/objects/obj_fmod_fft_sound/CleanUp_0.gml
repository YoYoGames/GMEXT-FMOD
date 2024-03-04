///@desc Free Resources

// I probably missed something obvious here, was going to double-check
// this after getting the spectrum display to work. Sorry. :(
fmod_sound_release(sound);
fmod_dsp_release(dsp_fft);

buffer_delete(fft_buffer);

