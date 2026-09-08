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

double fmod_fetch_callbacks()
{
	// No callback detail can reach GML today (see GMFMOD_common.h) - this just
	// drains the fired-callback counter so callers can at least detect activity.
	return (double)g_fmod_callback_count.exchange(0);
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

gm_structs::FmodMemoryStats fmod_memory_get_stats(double blocking)
{
	gm_structs::FmodMemoryStats result{};
	int current_alloced = 0, max_alloced = 0;
	g_fmod_last_result = FMOD::Memory_GetStats(&current_alloced, &max_alloced, blocking != 0.0);
	result.current_alloced = (double)current_alloced;
	result.max_alloced = (double)max_alloced;
	return result;
}

double fmod_thread_set_attributes(double thread_type, double affinity, double priority)
{
	g_fmod_last_result = FMOD::Thread_SetAttributes(
		(FMOD_THREAD_TYPE)(int)thread_type,
		(FMOD_THREAD_AFFINITY)(long long)affinity,
		(FMOD_THREAD_PRIORITY)(int)priority,
		FMOD_THREAD_STACK_SIZE_DEFAULT);
	return 0;
}
