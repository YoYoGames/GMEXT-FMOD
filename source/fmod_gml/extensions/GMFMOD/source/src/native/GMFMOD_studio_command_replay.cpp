#include <native/GMFMODInternal_native.h>
#include "GMFMOD_studio_command_replay.h"
#include "GMFMOD_common.h"
#include <optional>

using namespace gm_structs;

// ============================================================
// Callback Storage
// ============================================================

std::map<uintptr_t, FmodCommandReplayCallbackContext> g_command_replay_callbacks;

// ============================================================
// Native Callback Handlers
// ============================================================

static FMOD_RESULT CALLBACK_fmod_studio_command_replay_frame(
	FMOD_STUDIO_COMMANDREPLAY* replay, int command_index, float current_time, void* userdata)
{
	if (!replay) return FMOD_OK;

	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	auto it = g_command_replay_callbacks.find(replay_ptr);
	if (it != g_command_replay_callbacks.end() && it->second.frame_callback)
	{
		FmodStudioCommandReplayRef replay_ref{};
		replay_ref._ref = packIndexIntoRef((uint32_t)replay_ptr, GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY);

		it->second.frame_callback.value().call(
			replay_ref,
			(double)command_index,
			(double)current_time
		);
	}
	return FMOD_OK;
}

static FMOD_RESULT CALLBACK_fmod_studio_command_replay_create_instance(
	FMOD_STUDIO_COMMANDREPLAY* replay,
	int command_index,
	FMOD_STUDIO_EVENTDESCRIPTION* event_description,
	FMOD_STUDIO_EVENTINSTANCE** event_instance,
	void* userdata)
{
	if (!replay || !event_description) return FMOD_OK;

	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	auto it = g_command_replay_callbacks.find(replay_ptr);
	if (it != g_command_replay_callbacks.end() && it->second.create_instance_callback)
	{
		FmodStudioCommandReplayRef replay_ref{};
		replay_ref._ref = packIndexIntoRef((uint32_t)replay_ptr, GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY);

		FmodStudioEventDescriptionRef desc_ref{};
		desc_ref._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(event_description),
			GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);

		it->second.create_instance_callback.value().call(
			replay_ref,
			(double)command_index,
			desc_ref
		);
	}
	return FMOD_OK;
}

static FMOD_RESULT CALLBACK_fmod_studio_command_replay_load_bank(
	FMOD_STUDIO_COMMANDREPLAY* replay,
	int command_index,
	const FMOD_GUID* bank_guid,
	const char* bank_filename,
	FMOD_STUDIO_LOAD_BANK_FLAGS flags,
	FMOD_STUDIO_BANK** bank,
	void* userdata)
{
	if (!replay) return FMOD_OK;

	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	auto it = g_command_replay_callbacks.find(replay_ptr);
	if (it != g_command_replay_callbacks.end() && it->second.load_bank_callback)
	{
		FmodStudioCommandReplayRef replay_ref{};
		replay_ref._ref = packIndexIntoRef((uint32_t)replay_ptr, GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY);

		it->second.load_bank_callback.value().call(
			replay_ref,
			(double)command_index,
			std::string(bank_filename ? bank_filename : ""),
			(double)flags
		);
	}
	return FMOD_OK;
}

double fmod_studio_command_replay_get_playback_state(const FmodStudioCommandReplayRef& replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref._ref, replay);
	if (replay == nullptr) return 0.0;
	FMOD_STUDIO_PLAYBACK_STATE state = FMOD_STUDIO_PLAYBACK_STOPPED;
	g_fmod_last_result = replay->getPlaybackState(&state);
	return (double)state;
}

double fmod_studio_command_replay_start(const FmodStudioCommandReplayRef& replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref._ref, replay);
	if (replay == nullptr) return 0;
	g_fmod_last_result = replay->start();
	return 0;
}

double fmod_studio_command_replay_stop(const FmodStudioCommandReplayRef& replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref._ref, replay);
	if (replay == nullptr) return 0;
	g_fmod_last_result = replay->stop();
	return 0;
}

double fmod_studio_command_replay_get_current_command(const FmodStudioCommandReplayRef& replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref._ref, replay);
	if (replay == nullptr) return 0.0;
	// getCurrentCommand signature may differ in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0.0;
}

double fmod_studio_command_replay_release(const FmodStudioCommandReplayRef& replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref._ref, replay);
	if (replay == nullptr) return 0;

	// Clean up callbacks
	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	g_command_replay_callbacks.erase(replay_ptr);

	g_fmod_last_result = replay->release();
	return 0;
}

double fmod_studio_command_replay_set_frame_callback(
	const FmodStudioCommandReplayRef& replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref._ref, replay);
	if (replay == nullptr) return 0;

	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	auto& ctx = g_command_replay_callbacks[replay_ptr];
	ctx.frame_callback = callback;

	if (callback)
	{
		g_fmod_last_result = replay->setFrameCallback(&CALLBACK_fmod_studio_command_replay_frame);
	}
	else
	{
		g_fmod_last_result = replay->setFrameCallback(nullptr);
	}
	return 0;
}

double fmod_studio_command_replay_set_create_instance_callback(
	const FmodStudioCommandReplayRef& replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref._ref, replay);
	if (replay == nullptr) return 0;

	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	auto& ctx = g_command_replay_callbacks[replay_ptr];
	ctx.create_instance_callback = callback;

	if (callback)
	{
		g_fmod_last_result = replay->setCreateInstanceCallback(&CALLBACK_fmod_studio_command_replay_create_instance);
	}
	else
	{
		g_fmod_last_result = replay->setCreateInstanceCallback(nullptr);
	}
	return 0;
}

double fmod_studio_command_replay_set_load_bank_callback(
	const FmodStudioCommandReplayRef& replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref._ref, replay);
	if (replay == nullptr) return 0;

	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	auto& ctx = g_command_replay_callbacks[replay_ptr];
	ctx.load_bank_callback = callback;

	if (callback)
	{
		g_fmod_last_result = replay->setLoadBankCallback(&CALLBACK_fmod_studio_command_replay_load_bank);
	}
	else
	{
		g_fmod_last_result = replay->setLoadBankCallback(nullptr);
	}
	return 0;
}