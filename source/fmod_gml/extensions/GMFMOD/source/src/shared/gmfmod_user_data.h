#pragma once

#include "fmod_common.h"
#include <atomic>
#include <cstdint>

namespace gmfmod
{

// GML user data lives in FMOD's own user-data slot, as it did before the
// extgen port: the integer is the pointer, so there is nothing to allocate or
// free and the value dies with the object. On a 32-bit target the pointer
// cannot hold every int64; a value that does not round-trip is rejected rather
// than truncated. Callers have already validated the ref, so a null resource
// never reaches these.
template <typename T>
void setUserData(T* resource, int64_t data, std::atomic<FMOD_RESULT>& status)
{
	const intptr_t packed = static_cast<intptr_t>(data);
	if (static_cast<int64_t>(packed) != data)
	{
		status = FMOD_ERR_INVALID_PARAM;
		return;
	}
	status = resource->setUserData(reinterpret_cast<void*>(packed));
}

template <typename T>
int64_t getUserData(T* resource, std::atomic<FMOD_RESULT>& status)
{
	void* userData = nullptr;
	status = resource->getUserData(&userData);
	return static_cast<int64_t>(reinterpret_cast<intptr_t>(userData));
}

} // namespace gmfmod
