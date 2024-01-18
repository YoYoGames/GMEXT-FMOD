
var _state = false;

with(obj_fmod_dsp_speaker)
{
	var _bypass = fmod_dsp_get_bypass(dsp_highpass)
	fmod_dsp_set_bypass(dsp_highpass, !_bypass)
	_state = bool(_bypass);
}

text = $"{effect_name} : {_state ? "On" : "Off"}";