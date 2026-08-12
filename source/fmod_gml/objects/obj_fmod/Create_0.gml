
show_debug_message("Obj_Fmod::Create")

var _max_channels = 1024
var _flags_core = FmodInitFlags.Normal;
var _flags_studio = FmodStudioInitFlags.LiveUpdate;

// Auto-detects the Studio extension so the demo falls back to Core-only when
// GMFMODStudio is disabled or removed from the project. Hardcode to false to
// force the Core path even while GMFMODStudio is present.
#macro USE_FMOD_STUDIO extension_exists("GMFMODStudio")
#macro USE_DEBUG_CALLBACKS false

if (USE_DEBUG_CALLBACKS) {
	fmod_debug_initialize(FmodDebugFlags.LevelLog, FmodDebugMode.Callback);
}

if (USE_FMOD_STUDIO) {
	/*
		If you are only using Studio you need this.
	*/
	fmod_studio_system_create();
	show_debug_message("fmod_studio_system_create: " + string(fmod_studio_last_result()));

	fmod_studio_system_init(_max_channels, _flags_studio, _flags_core);
	show_debug_message("fmod_studio_system_init: " + string(fmod_studio_last_result()));
	
	/*
		FMOD Studio creates and initializes an underlying core system to work with.

		GMFMOD and GMFMODStudio are separate DLLs with separate handle registries,
		so the ref from fmod_studio_system_get_core_system() means nothing to the
		core extension. Hand the raw pointer over instead: fmod_system_adopt()
		registers that same system in GMFMOD and selects it, so the systemless
		core API (fmod_system_create_sound, etc.) drives Studio's core system.
	*/
	fmod_main_system = fmod_system_adopt(fmod_studio_system_get_core_system_ptr());
	show_debug_message("fmod_system_adopt: " + string(fmod_last_result()));
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

