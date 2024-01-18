
with(obj_fmod_studio_event_parameter)
{
	if(param_description.minimum < parameter_description_value)
	{
		parameter_description_value--
		fmod_studio_event_instance_set_parameter_by_id(footsteps_index,param_description.parameter_id ,parameter_description_value)
	}
}
