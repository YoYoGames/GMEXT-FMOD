#pragma once

#include "fmod_common.h"
#include "gmfmod_registry.h"
#include <atomic>
#include <cstdint>

// The handle contract GMFMOD and GMFMODStudio share. Both extensions compile
// this layer, so it is header-only and holds no state: on iOS the two
// extensions are static libraries linked into one app, and a global or a
// non-inline function defined here would be a duplicate symbol at that link.
// Anything that can fail takes the calling extension's status slot instead.
namespace gmfmod
{

// Every handle handed to GML is a plain 64-bit integer:
//
//     10bit      |     8bit      |      32bit
//   extension    |     type      |       id
//
// The extension code rejects handles minted by some other GM extension; the
// type code rejects passing e.g. a sound ref to a channel call. The low 32
// bits are either a registry id (registry-backed types) or the truncated
// pointer itself (pointer-backed types).
//
// Both extensions pack refs the same way and use the same extension code, so
// a ref that crosses between the two DLLs is not rejected - it resolves
// against the other side's state. A handle that has to cross is handed over
// as a raw pointer for the other side to adopt, never as a ref.
constexpr uint32_t kExtensionId = 0x01;

// One enum for both families: the code space is allocated here and nowhere
// else, so a Core code can never collide with a Studio code by accident.
enum class RefType : uint8_t
{
	// Core - registry-backed, except Channel which carries the pointer.
	Channel = 0x01,
	ChannelGroup = 0x02,
	Sound = 0x03,
	SoundGroup = 0x04,
	Dsp = 0x05,
	DspConnection = 0x06,
	Reverb3D = 0x07,
	Geometry = 0x08,
	System = 0x09,

	// Studio - every one pointer-backed.
	StudioSystem = 0x10,
	StudioBank = 0x11,
	StudioBus = 0x12,
	StudioEventInstance = 0x13,
	StudioEventDescription = 0x14,
	StudioVca = 0x15,
	StudioCommandReplay = 0x16,
};

constexpr uint64_t packRef(uint32_t id, RefType type) noexcept
{
	return (static_cast<uint64_t>(kExtensionId) << 40)
		| (static_cast<uint64_t>(type) << 32)
		| static_cast<uint64_t>(id);
}

constexpr uint32_t refExtension(uint64_t ref) noexcept
{
	return static_cast<uint32_t>((ref >> 40) & 0x3FF);
}

constexpr RefType refType(uint64_t ref) noexcept
{
	return static_cast<RefType>((ref >> 32) & 0xFF);
}

constexpr uint32_t refId(uint64_t ref) noexcept
{
	return static_cast<uint32_t>(ref & 0xFFFFFFFFu);
}

constexpr bool refIs(uint64_t ref, RefType type) noexcept
{
	return refExtension(ref) == kExtensionId && refType(ref) == type;
}

// The low 32 bits of a pointer - the id a pointer-backed ref carries, and the
// key every callback-side map for those types uses.
inline uint32_t pointerKey(const void* pointer) noexcept
{
	return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pointer) & 0xFFFFFFFFu);
}

// Pointer-backed handles (Channel, ChannelControl and every Studio type) carry
// the object address in the low 32 bits. FMOD's opaque handles fit there by
// construction, but if a future SDK ever widens one, two objects would silently
// alias onto the same ref - so fail loudly instead of quietly.
inline uint64_t packPointerRef(const void* pointer, RefType type, std::atomic<FMOD_RESULT>& status)
{
	const uintptr_t address = reinterpret_cast<uintptr_t>(pointer);
	if (static_cast<uint64_t>(address) > 0xFFFFFFFFull)
	{
		status = FMOD_ERR_INVALID_HANDLE;
		return 0;
	}
	return packRef(static_cast<uint32_t>(address), type);
}

// A rejected ref sets FMOD_ERR_INVALID_HANDLE and yields nullptr; every call
// site null-checks before touching the handle. An accepted ref leaves the
// status alone.
template <typename T>
T* resolvePointerRef(uint64_t ref, RefType type, std::atomic<FMOD_RESULT>& status)
{
	if (!refIs(ref, type))
	{
		status = FMOD_ERR_INVALID_HANDLE;
		return nullptr;
	}
	return reinterpret_cast<T*>(static_cast<uintptr_t>(refId(ref)));
}

template <typename T>
T* resolveRegistryRef(uint64_t ref, RefType type, const Registry<T>& registry, std::atomic<FMOD_RESULT>& status)
{
	T* object = refIs(ref, type) ? registry.find(refId(ref)) : nullptr;
	if (object == nullptr)
		status = FMOD_ERR_INVALID_HANDLE;
	return object;
}

} // namespace gmfmod
