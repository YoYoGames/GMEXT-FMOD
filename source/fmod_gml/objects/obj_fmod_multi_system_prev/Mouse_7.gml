with(obj_fmod_multi_system)
{
	selected--
	if(selected < 0)
		selected = 0
	
	show_debug_message(array_systems)
	fmod_system_select(array_systems[selected])
}
