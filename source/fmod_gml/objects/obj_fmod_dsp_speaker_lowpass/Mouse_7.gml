
var _state = false;

with(obj_fmod_dsp_speaker)
{
	var _bypass = fmod_dsp_get_bypass(dsp_lowpass);
	fmod_dsp_set_bypass(dsp_lowpass, !_bypass)
	_state = bool(_bypass);
}

text = $"{effect_name} : {_state ? "On" : "Off"}";