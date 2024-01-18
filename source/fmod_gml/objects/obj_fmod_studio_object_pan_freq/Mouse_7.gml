
with(obj_fmod_studio_object_pan)
{
	if(freq_struct.value == 3)
		fmod_studio_event_instance_set_parameter_by_name(ins_index,"Freq", 0, false)
	else
		fmod_studio_event_instance_set_parameter_by_name(ins_index,"Freq", freq_struct.value+1.5, false)
}
