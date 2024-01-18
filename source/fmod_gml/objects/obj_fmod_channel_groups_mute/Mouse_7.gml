
var _group = group;
var _name = name;
var _text = text;

with(obj_fmod_channel_groups)
{
	var _control = channel_groups[$ _group];
	var _mute = fmod_channel_control_get_mute(_control)
	fmod_channel_control_set_mute(_control, !_mute);
	_text = _name + (!_mute ? ": Play":": Mute")
}

text = _text;
