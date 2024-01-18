with(obj_fmod_multi_system)
{
	selected++
	if(selected == array_length(array_systems))
		selected --
	
	show_debug_message(array_systems)
	fmod_system_select(array_systems[selected])
}
