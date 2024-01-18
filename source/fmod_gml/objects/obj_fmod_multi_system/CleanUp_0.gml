
for(var a = 0 ; a < array_length(array_systems) ; a++)
	
	fmod_system_release(array_systems[a])
	
with(obj_fmod)
{
	fmod_system_select(fmod_main_system)
}
