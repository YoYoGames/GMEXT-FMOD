#include "GMFMODStudio_common.h"

// ============================================================
// Global State Definitions
// ============================================================

std::atomic<FMOD_RESULT> g_fmod_studio_last_result{ FMOD_OK };

enum gm_enums::FmodStudioResult fmod_studio_last_result()
{
	return (enum gm_enums::FmodStudioResult)g_fmod_studio_last_result.load();
}
