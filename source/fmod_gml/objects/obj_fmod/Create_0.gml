
show_debug_message("Obj_Fmod::Create")

var _max_channels = 1024
var _flags_core = FMOD_INIT.NORMAL;
var _flags_studio = FMOD_STUDIO_INIT.LIVEUPDATE;

#macro USE_FMOD_STUDIO true
#macro USE_DEBUG_CALLBACKS false

if (USE_DEBUG_CALLBACKS) {
	fmod_debug_initialize(FMOD_DEBUG_FLAGS.LEVEL_LOG, FMOD_DEBUG_MODE.CALLBACK);
}

if (USE_FMOD_STUDIO) {
	/*
		If you are only using Studio you need this.
	*/
	fmod_studio_system_create();	
	show_debug_message("fmod_studio_system_create: " + string(fmod_last_result()));
	
	fmod_studio_system_init(_max_channels, _flags_studio, _flags_core);
	show_debug_message("fmod_studio_system_init: " + string(fmod_last_result()));
	
	/*
		FMOD Studio will create an initialize an underlying core system to work with.
	*/
	fmod_main_system = fmod_studio_system_get_core_system();
}
else {
	/*
		If you are only using Core you only need this.
	*/
	fmod_main_system = fmod_system_create()
	show_debug_message("fmod_system_create: " + string(fmod_last_result()))
	fmod_system_init(_max_channels, _flags_core)
	show_debug_message("fmod_system_init: " + string(fmod_last_result()))
}
