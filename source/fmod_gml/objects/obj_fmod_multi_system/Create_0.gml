
selected = 0;

var count = fmod_system_get_num_drivers()

array_systems = []

for(var a = 0 ; a < count ; a++)
{
	var system_index = fmod_system_create()
	array_systems[a] = system_index
	fmod_system_set_driver(a)
	fmod_system_init(64,FMOD_INIT.NORMAL)
}
fmod_system_select(array_systems[selected])
