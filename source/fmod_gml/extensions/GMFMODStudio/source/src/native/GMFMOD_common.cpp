#include "GMFMOD_common.h"
#include <cstdio>

// ============================================================
// Global State Definitions
// ============================================================

std::atomic<FMOD_RESULT> g_fmod_last_result{ FMOD_OK };

// ============================================================
// Helper Functions
// ============================================================

//     10bit      |     8bit      |      32bit
//   extension    |     type      |       ref
//

uint64_t packIndexIntoRef(uint32_t index, uint8_t type)
{
	uint64_t ext_id = 0x01;  // GM_FMOD_EXT
	uint64_t packed = (ext_id << 40) | ((uint64_t)type << 32) | index;
	return packed;
}

uint64_t packPointerIntoRef(const void* pointer, uint8_t type)
{
	uintptr_t address = reinterpret_cast<uintptr_t>(pointer);
	if ((uint64_t)address > 0xFFFFFFFFull)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}
	return packIndexIntoRef((uint32_t)address, type);
}

uint32_t fmod_flag_word(double value)
{
	if (!(value > 0.0)) return 0;
	if (value >= 4294967295.0) return 0xFFFFFFFFu;
	return (uint32_t)value;
}

// ============================================================
// Utility Functions
// ============================================================

std::string format_guid(const FMOD_GUID& guid)
{
	char buffer[64]{};
	std::snprintf(buffer, sizeof(buffer),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
	return std::string(buffer);
}

enum gm_enums::FmodStudioResult fmod_studio_last_result()
{
	return (enum gm_enums::FmodStudioResult)g_fmod_last_result.load();
}
