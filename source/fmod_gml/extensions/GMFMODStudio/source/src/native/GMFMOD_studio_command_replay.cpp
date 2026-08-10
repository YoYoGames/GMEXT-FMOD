#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_command_replay.h"
#include "GMFMOD_common.h"
#include <optional>
#include <string>
#include <string_view>

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
		uint64_t replay_ref = 0;
		replay_ref = packIndexIntoRef((uint32_t)replay_ptr, GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY);

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
		uint64_t replay_ref = 0;
		replay_ref = packIndexIntoRef((uint32_t)replay_ptr, GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY);

		uint64_t desc_ref = 0;
		desc_ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(event_description),
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
		uint64_t replay_ref = 0;
		replay_ref = packIndexIntoRef((uint32_t)replay_ptr, GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY);

		it->second.load_bank_callback.value().call(
			replay_ref,
			(double)command_index,
			std::string(bank_filename ? bank_filename : ""),
			(double)flags
		);
	}
	return FMOD_OK;
}

double fmod_studio_command_replay_get_playback_state(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0.0;
	FMOD_STUDIO_PLAYBACK_STATE state = FMOD_STUDIO_PLAYBACK_STOPPED;
	g_fmod_last_result = replay->getPlaybackState(&state);
	return (double)state;
}

double fmod_studio_command_replay_start(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;
	g_fmod_last_result = replay->start();
	return 0;
}

double fmod_studio_command_replay_stop(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;
	g_fmod_last_result = replay->stop();
	return 0;
}

double fmod_studio_command_replay_get_current_command(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0.0;

	int command_index = 0;
	float current_time = 0.0f;
	g_fmod_last_result = replay->getCurrentCommand(&command_index, &current_time);
	return (double)command_index;
}

double fmod_studio_command_replay_release(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;

	// Clean up callbacks
	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	g_command_replay_callbacks.erase(replay_ptr);

	g_fmod_last_result = replay->release();
	return 0;
}

double fmod_studio_command_replay_set_frame_callback(
	uint64_t replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
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
	uint64_t replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
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
	uint64_t replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
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
// ============================================================
// Command Replay - Info
// ============================================================

double fmod_studio_command_replay_get_command_count(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0.0;

	int count = 0;
	g_fmod_last_result = replay->getCommandCount(&count);
	return (double)count;
}

double fmod_studio_command_replay_get_length(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0.0;

	float length = 0.0f;
	g_fmod_last_result = replay->getLength(&length);
	return (double)length;
}

uint64_t fmod_studio_command_replay_get_system_object(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;

	FMOD::Studio::System* system = nullptr;
	g_fmod_last_result = replay->getSystem(&system);
	if (g_fmod_last_result != FMOD_OK || system == nullptr) return 0;

	return packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(system), GM_FMOD_STUDIO_TYPE_SYSTEM);
}

double fmod_studio_command_replay_is_valid(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0.0;

	return replay->isValid() ? 1.0 : 0.0;
}

FmodStudioCommandInfo fmod_studio_command_replay_get_command_info(uint64_t replay_ref, double command_index)
{
	FmodStudioCommandInfo result{};
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return result;

	FMOD_STUDIO_COMMAND_INFO info{};
	g_fmod_last_result = replay->getCommandInfo((int)command_index, &info);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.command_name = info.commandname != nullptr ? std::string(info.commandname) : std::string();
	result.parent_command_index = (double)info.parentcommandindex;
	result.frame_time = (double)info.frametime;
	result.instance_type = (double)info.instancetype;
	result.output_type = (double)info.outputtype;
	result.instance_handle = (double)info.instancehandle;
	result.output_handle = (double)info.outputhandle;
	return result;
}

std::string fmod_studio_command_replay_get_command_string(uint64_t replay_ref, double command_index)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return std::string();

	char buffer[256] = {};
	g_fmod_last_result = replay->getCommandString((int)command_index, buffer, sizeof(buffer));
	if (g_fmod_last_result != FMOD_OK) return std::string();

	return std::string(buffer);
}

double fmod_studio_command_replay_get_command_at_time(uint64_t replay_ref, double time)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0.0;

	int command_index = 0;
	g_fmod_last_result = replay->getCommandAtTime((float)time, &command_index);
	return (double)command_index;
}

double fmod_studio_command_replay_seek_to_command(uint64_t replay_ref, double command_index)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;

	g_fmod_last_result = replay->seekToCommand((int)command_index);
	return 0;
}

double fmod_studio_command_replay_seek_to_time(uint64_t replay_ref, double time)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;

	g_fmod_last_result = replay->seekToTime((float)time);
	return 0;
}

double fmod_studio_command_replay_set_bank_path(uint64_t replay_ref, std::string_view path)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;

	std::string path_str(path);
	g_fmod_last_result = replay->setBankPath(path_str.c_str());
	return 0;
}

double fmod_studio_command_replay_get_paused(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0.0;

	bool paused = false;
	g_fmod_last_result = replay->getPaused(&paused);
	return paused ? 1.0 : 0.0;
}

double fmod_studio_command_replay_set_paused(uint64_t replay_ref, double paused)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;

	g_fmod_last_result = replay->setPaused(paused != 0.0);
	return 0;
}

double fmod_studio_command_replay_get_user_data(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0.0;

	auto it = g_user_data.find(reinterpret_cast<uintptr_t>(replay));
	return it != g_user_data.end() ? it->second : 0.0;
}

double fmod_studio_command_replay_set_user_data(uint64_t replay_ref, double user_data)
{
	FMOD::Studio::CommandReplay* replay = nullptr;
	validate_fmod_studio_command_replay(replay_ref, replay);
	if (replay == nullptr) return 0;

	g_user_data[reinterpret_cast<uintptr_t>(replay)] = user_data;
	return 0;
}
