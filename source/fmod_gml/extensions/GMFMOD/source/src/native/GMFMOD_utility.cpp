#include <native/GMFMODInternal_native.h>
#include "GMFMOD_common.h"
#include <string>

// ============================================================
// Utility Functions
// ============================================================

enum gm_enums::FmodResult fmod_last_result()
{
	return (enum gm_enums::FmodResult)g_fmod_last_result;
}

void fmod_debug_initialize(
	enum gm_enums::FmodDebugFlags flags,
	enum gm_enums::FmodDebugMode mode)
{
	FMOD_DEBUG_FLAGS fmod_flags = (FMOD_DEBUG_FLAGS)(int)flags;
	FMOD_DEBUG_MODE fmod_mode = (FMOD_DEBUG_MODE)(int)mode;
	g_fmod_last_result = FMOD_Debug_Initialize(fmod_flags, fmod_mode, nullptr, nullptr);
}

std::string fmod_path_bundle(std::string_view filename)
{
	// Return bundled asset path (typically DataFiles/ or similar)
	// For now, just return the filename as-is
	// The actual path handling would be game-specific
	return std::string(filename);
}

std::string fmod_path_user(std::string_view filename)
{
	// Return user data path (typically platform-specific documents/appdata folder)
	// For now, just return the filename as-is
	// The actual path handling would be game-specific
	return std::string(filename);
}
