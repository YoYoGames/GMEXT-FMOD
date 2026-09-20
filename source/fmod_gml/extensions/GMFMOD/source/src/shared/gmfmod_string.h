#pragma once

#include "fmod_common.h"
#include <atomic>
#include <cstdio>
#include <string>

namespace gmfmod
{

// FMOD's Studio string getters all take (buffer, size, retrieved) and return
// FMOD_ERR_TRUNCATED when the buffer was too small - with `retrieved` set to
// the size actually needed, including the NUL. (Measured against the vendored
// SDK: a 4-byte buffer on a 13-byte path returns TRUNCATED with retrieved=13.)
// So read into a stack buffer first and only pay for a second call when the
// name really is longer than the common case.
template <typename Fn>
std::string readString(Fn&& read, std::atomic<FMOD_RESULT>& status)
{
	char stack[256] = {};
	int retrieved = 0;

	status = read(stack, (int)sizeof(stack), &retrieved);
	if (status == FMOD_OK)
		return std::string(stack);
	if (status != FMOD_ERR_TRUNCATED || retrieved <= 1)
		return std::string();

	std::string heap((size_t)retrieved, '\0');
	const int capacity = retrieved;
	status = read(&heap[0], capacity, &retrieved);
	if (status != FMOD_OK)
		return std::string();

	// retrieved counts the NUL; refuse to trust a value the second call did not
	// leave sane rather than underflowing the resize.
	if (retrieved < 1 || retrieved > capacity)
		return std::string();

	heap.resize((size_t)retrieved - 1);
	return heap;
}

// FMOD_GUID in Studio's own {8-4-4-4-12} spelling - the one string form every
// GUID this extension pair hands to GML uses, and what
// fmod_studio_system_get_bank_by_id() parses back.
inline std::string formatGuid(const FMOD_GUID& guid)
{
	char buffer[64]{};
	std::snprintf(buffer, sizeof(buffer),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
	return std::string(buffer);
}

} // namespace gmfmod
