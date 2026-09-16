#pragma once

#include "fmod.hpp"
#include "fmod_studio.hpp"
#include <cstdint>
#include <map>
#include <string>
#include <optional>
#include <atomic>
#include <mutex>
#include <native/GMFMODStudioInternal_native.h>

// ============================================================
// Global State
// ============================================================

// Written by every exported function and by the callback trampolines, which
// on the Studio side run on Studio's own worker thread - so the store has to
// be atomic. (That makes the race safe; it does not make "the last result"
// meaningful when a background callback can land between a call and the read.
// Returning the code per-call instead is an API change, left to the owner.)
extern std::atomic<FMOD_RESULT> g_fmod_last_result;
extern enum gm_enums::FmodStudioResult fmod_studio_last_result();

// ============================================================
// Helper Functions
// ============================================================

uint64_t packIndexIntoRef(uint32_t index, uint8_t type);

// Pointer-backed handles (Channel, ChannelControl and every Studio type) carry
// the object address in the low 32 bits. FMOD's opaque handles fit there by
// construction, but if a future SDK ever widens one, two objects would silently
// alias onto the same ref - so fail loudly instead of quietly.
uint64_t packPointerIntoRef(const void* pointer, uint8_t type);

// GML user data lives in FMOD's own user-data slot, as it did before the
// extgen port: the integer is the pointer, so there is nothing to allocate or
// free and the value dies with the object. On a 32-bit target the pointer
// cannot hold every int64; a value that does not round-trip is rejected rather
// than truncated. Callers have already validated the ref, so a null resource
// never reaches these.
template <typename T>
void setResourceUserData(T resource, int64_t data)
{
	const intptr_t packed = static_cast<intptr_t>(data);
	if (static_cast<int64_t>(packed) != data)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return;
	}
	g_fmod_last_result = resource->setUserData(reinterpret_cast<void*>(packed));
}

template <typename T>
int64_t getResourceUserData(T resource)
{
	void* userData = nullptr;
	g_fmod_last_result = resource->getUserData(&userData);
	return static_cast<int64_t>(reinterpret_cast<intptr_t>(userData));
}

// ============================================================
// Reference Layout
// ============================================================

// Every handle handed to GML is a plain 64-bit integer packed by
// packIndexIntoRef():
//
//     10bit      |     8bit      |      32bit
//   extension    |     type      |       ref
//
// The extension code rejects handles minted by some other GM extension; the
// type code rejects passing e.g. a bank ref to a bus call. Every Studio type
// is pointer-backed, so the low 32 bits are always the truncated address.
//
// GMFMOD packs refs the same way and uses the same GM_FMOD_EXT, so a ref that
// crosses between the two DLLs is not rejected - it resolves against the other
// side's state. Nothing here mints a ref for GMFMOD to consume: a handle that
// has to cross is handed over as a raw pointer, for GMFMOD to adopt.

#define GM_FMOD_EXT 0x01

#define gm_fmod_ref_ext(ref) ((uint32_t)(((uint64_t)(ref) >> 40) & 0x3FF))
#define gm_fmod_ref_type(ref) ((uint8_t)(((uint64_t)(ref) >> 32) & 0xFF))
#define gm_fmod_ref_id(ref) ((uint32_t)((uint64_t)(ref) & 0xFFFFFFFF))

// ============================================================
// Studio Type Codes
// ============================================================

#define GM_FMOD_STUDIO_TYPE_SYSTEM 0x10
#define GM_FMOD_STUDIO_TYPE_BANK 0x11
#define GM_FMOD_STUDIO_TYPE_BUS 0x12
#define GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE 0x13
#define GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION 0x14
#define GM_FMOD_STUDIO_TYPE_VCA 0x15
#define GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY 0x16

// ============================================================
// Validation Macros
// ============================================================

// A rejected ref leaves `output` null and sets g_fmod_last_result; every
// call site already null-checks before touching the handle.
#define gm_fmod_ref_reject(output) \
	{ \
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE; \
		output = nullptr; \
	}

// Payload is the truncated pointer itself.
#define validate_fmod_ref_ptr(ref, type_code, cpp_type, output) \
	{ \
		if (gm_fmod_ref_ext(ref) == GM_FMOD_EXT && gm_fmod_ref_type(ref) == (type_code)) \
		{ \
			output = reinterpret_cast<cpp_type*>(static_cast<uintptr_t>(gm_fmod_ref_id(ref))); \
		} \
		else gm_fmod_ref_reject(output) \
	}

#define validate_fmod_studio_system(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_SYSTEM, FMOD::Studio::System, output)

#define validate_fmod_studio_bank(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_BANK, FMOD::Studio::Bank, output)

#define validate_fmod_studio_bus(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_BUS, FMOD::Studio::Bus, output)

#define validate_fmod_studio_event_instance(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE, FMOD::Studio::EventInstance, output)

#define validate_fmod_studio_event_description(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION, FMOD::Studio::EventDescription, output)

#define validate_fmod_studio_vca(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_VCA, FMOD::Studio::VCA, output)

#define validate_fmod_studio_command_replay(ref, output) \
	validate_fmod_ref_ptr(ref, GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY, FMOD::Studio::CommandReplay, output)

// ============================================================
// Callback Contexts
// ============================================================

struct FmodCommandReplayCallbackContext
{
	std::optional<gm::wire::GMFunction> frame_callback;
	std::optional<gm::wire::GMFunction> create_instance_callback;
	std::optional<gm::wire::GMFunction> load_bank_callback;
};

extern std::mutex g_command_replay_callback_mutex;
extern std::map<uintptr_t, FmodCommandReplayCallbackContext> g_command_replay_callbacks;

// FMOD_GUID in Studio's own {8-4-4-4-12} spelling, which is what
// fmod_studio_system_get_bank_by_id() parses back.
std::string format_guid(const FMOD_GUID& guid);

// ============================================================
// Per-module state hooks
// ============================================================

// Each file owning a file-local map exposes a reset entry point rather than
// promoting the map to a global. fmod_studio_shutdown() drives them all.
void fmod_studio_event_instance_reset_state();
void fmod_studio_command_replay_reset_state();
void fmod_studio_event_description_reset_state();

// A description lives as long as its bank and gets no DESTROYED callback, so
// the description-keyed callback map is swept here instead.
void fmod_studio_event_description_forget_bank(FMOD::Studio::Bank* bank);

// Shared by both event trampolines: turns FMOD's (type, event, parameters)
// into the (event_instance_ref, type, properties) call GML sees. One decoder
// so the description and instance paths cannot drift apart.
void fmod_studio_event_call(
	const gm::wire::GMFunction& callback,
	FMOD_STUDIO_EVENT_CALLBACK_TYPE type,
	FMOD_STUDIO_EVENTINSTANCE* event,
	void* parameters);

// ============================================================
// Truncation-safe string reads
// ============================================================

// FMOD's Studio string getters all take (buffer, size, retrieved) and return
// FMOD_ERR_TRUNCATED when the buffer was too small - with `retrieved` set to
// the size actually needed, including the NUL. (Measured against the vendored
// SDK: a 4-byte buffer on a 13-byte path returns TRUNCATED with retrieved=13.)
// So read into a stack buffer first and only pay for a second call when the
// name really is longer than the common case.
template <typename Fn>
std::string fmod_read_string(Fn&& read)
{
	char stack[256] = {};
	int retrieved = 0;

	g_fmod_last_result = read(stack, (int)sizeof(stack), &retrieved);
	if (g_fmod_last_result == FMOD_OK)
		return std::string(stack);
	if (g_fmod_last_result != FMOD_ERR_TRUNCATED || retrieved <= 1)
		return std::string();

	std::string heap((size_t)retrieved, '\0');
	const int capacity = retrieved;
	g_fmod_last_result = read(&heap[0], capacity, &retrieved);
	if (g_fmod_last_result != FMOD_OK)
		return std::string();

	// retrieved counts the NUL; refuse to trust a value the second call did not
	// leave sane rather than underflowing the resize.
	if (retrieved < 1 || retrieved > capacity)
		return std::string();

	heap.resize((size_t)retrieved - 1);
	return heap;
}

