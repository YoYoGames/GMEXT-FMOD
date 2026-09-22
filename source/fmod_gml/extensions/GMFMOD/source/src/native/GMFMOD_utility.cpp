#include <native/GMFMODInternal_native.h>
#include "GMFMOD_common.h"
#include "fmod_errors.h"
#include <string>

// ============================================================
// Utility Functions
// ============================================================

enum gm_enums::FmodResult fmod_last_result()
{
	return (enum gm_enums::FmodResult)g_fmod_last_result.load();
}

void fmod_debug_initialize(
	enum gm_enums::FmodDebugFlags flags,
	enum gm_enums::FmodDebugMode mode)
{
	FMOD_DEBUG_FLAGS fmod_flags = (FMOD_DEBUG_FLAGS)(int)flags;
	FMOD_DEBUG_MODE fmod_mode = (FMOD_DEBUG_MODE)(int)mode;
	g_fmod_last_result = FMOD_Debug_Initialize(fmod_flags, fmod_mode, nullptr, nullptr);
}

std::string fmod_error_string(enum gm_enums::FmodResult result)
{
	// gm_enums::FmodResult mirrors FMOD_RESULT value-for-value.
	return std::string(FMOD_ErrorString((FMOD_RESULT)(int)result));
}

double fmod_file_get_disk_busy()
{
	int busy = 0;
	g_fmod_last_result = FMOD::File_GetDiskBusy(&busy);
	return (double)busy;
}

double fmod_file_set_disk_busy(double busy)
{
	g_fmod_last_result = FMOD::File_SetDiskBusy((int)busy);
	return 0;
}

gm_structs::FmodMemoryStats fmod_memory_get_stats(bool blocking)
{
	gm_structs::FmodMemoryStats result{};
	int current_alloced = 0, max_alloced = 0;
	g_fmod_last_result = FMOD::Memory_GetStats(&current_alloced, &max_alloced, blocking);
	result.current_alloced = (double)current_alloced;
	result.max_alloced = (double)max_alloced;
	return result;
}

double fmod_thread_set_attributes(gm_enums::FmodThreadType thread_type, double affinity, gm_enums::FmodThreadPriority priority, gm_enums::FmodThreadStackSize stack_size)
{
	g_fmod_last_result = FMOD::Thread_SetAttributes(
		(FMOD_THREAD_TYPE)(int)thread_type,
		(FMOD_THREAD_AFFINITY)(long long)affinity,
		(FMOD_THREAD_PRIORITY)(int)priority,
		(FMOD_THREAD_STACK_SIZE)(unsigned int)stack_size);
	return 0;
}

// ============================================================
// Reverb presets
// ============================================================

// The FMOD_PRESET_* macros are FMOD_REVERB_PROPERTIES initialisers, so the
// values come from the header this build compiled against. Indexed by
// FmodReverbPreset, which follows the header's order.
static const FMOD_REVERB_PROPERTIES k_reverb_presets[] = {
	FMOD_PRESET_OFF,
	FMOD_PRESET_GENERIC,
	FMOD_PRESET_PADDEDCELL,
	FMOD_PRESET_ROOM,
	FMOD_PRESET_BATHROOM,
	FMOD_PRESET_LIVINGROOM,
	FMOD_PRESET_STONEROOM,
	FMOD_PRESET_AUDITORIUM,
	FMOD_PRESET_CONCERTHALL,
	FMOD_PRESET_CAVE,
	FMOD_PRESET_ARENA,
	FMOD_PRESET_HANGAR,
	FMOD_PRESET_CARPETTEDHALLWAY,
	FMOD_PRESET_HALLWAY,
	FMOD_PRESET_STONECORRIDOR,
	FMOD_PRESET_ALLEY,
	FMOD_PRESET_FOREST,
	FMOD_PRESET_CITY,
	FMOD_PRESET_MOUNTAINS,
	FMOD_PRESET_QUARRY,
	FMOD_PRESET_PLAIN,
	FMOD_PRESET_PARKINGLOT,
	FMOD_PRESET_SEWERPIPE,
	FMOD_PRESET_UNDERWATER,
};

gm_structs::FmodReverbProperties fmod_reverb_preset_properties(gm_enums::FmodReverbPreset preset)
{
	gm_structs::FmodReverbProperties result{};

	const long long index = (long long)preset;
	if (index < 0 || index >= (long long)(sizeof(k_reverb_presets) / sizeof(k_reverb_presets[0])))
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return result;
	}

	const FMOD_REVERB_PROPERTIES& props = k_reverb_presets[index];
	result.decay_time = (double)props.DecayTime;
	result.early_delay = (double)props.EarlyDelay;
	result.late_delay = (double)props.LateDelay;
	result.hf_reference = (double)props.HFReference;
	result.hf_decay_ratio = (double)props.HFDecayRatio;
	result.diffusion = (double)props.Diffusion;
	result.density = (double)props.Density;
	result.low_shelf_frequency = (double)props.LowShelfFrequency;
	result.low_shelf_gain = (double)props.LowShelfGain;
	result.high_cut = (double)props.HighCut;
	result.early_late_mix = (double)props.EarlyLateMix;
	result.wet_level = (double)props.WetLevel;
	g_fmod_last_result = FMOD_OK;
	return result;
}
