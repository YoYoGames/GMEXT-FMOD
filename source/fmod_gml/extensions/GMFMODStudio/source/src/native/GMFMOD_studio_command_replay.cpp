#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_command_replay.h"
#include "GMFMODStudio_common.h"
#include <optional>
#include <string>
#include <string_view>
#include <map>
#include <mutex>

using namespace gm_structs;

// ============================================================
// Callback Storage
// ============================================================

std::mutex g_command_replay_callback_mutex;
std::map<uintptr_t, FmodCommandReplayCallbackContext> g_command_replay_callbacks;

void fmod_studio_command_replay_reset_state()
{
	std::lock_guard<std::mutex> lock(g_command_replay_callback_mutex);
	g_command_replay_callbacks.clear();
}

// ============================================================
// Native Callback Handlers
// ============================================================

// The Studio update thread fires these while the game thread sets them, so
// the context is copied out under the lock and used after it is released.
static std::optional<FmodCommandReplayCallbackContext> command_replay_context(
	FMOD_STUDIO_COMMANDREPLAY* replay)
{
	std::lock_guard<std::mutex> lock(g_command_replay_callback_mutex);
	auto it = g_command_replay_callbacks.find(reinterpret_cast<uintptr_t>(replay));
	if (it == g_command_replay_callbacks.end()) return std::nullopt;
	return it->second;
}

static FMOD_RESULT F_CALL CALLBACK_fmod_studio_command_replay_frame(
	FMOD_STUDIO_COMMANDREPLAY* replay, int command_index, float current_time, void* /* userdata */)
{
	if (replay == nullptr) return FMOD_OK;

	std::optional<FmodCommandReplayCallbackContext> ctx = command_replay_context(replay);
	if (!ctx.has_value() || !ctx->frame_callback.has_value()) return FMOD_OK;

	ctx->frame_callback.value().call(
		ctx->replay_ref,
		(double)command_index,
		(double)current_time
	);
	return FMOD_OK;
}

// FMOD is asking the host to create the instance: what it gets back in
// *event_instance is what the rest of the replay addresses, and a null there
// silences every later command for that instance. A queued GML call cannot
// answer, so this does what FMOD does when no callback is set - creates the
// instance - and GML is told what was created, and whether it worked.
static FMOD_RESULT F_CALL CALLBACK_fmod_studio_command_replay_create_instance(
	FMOD_STUDIO_COMMANDREPLAY* replay,
	int command_index,
	FMOD_STUDIO_EVENTDESCRIPTION* event_description,
	FMOD_STUDIO_EVENTINSTANCE** event_instance,
	void* /* userdata */)
{
	if (replay == nullptr || event_description == nullptr || event_instance == nullptr) return FMOD_OK;

	FMOD::Studio::EventInstance* created = nullptr;
	FMOD_RESULT result = ((FMOD::Studio::EventDescription*)event_description)->createInstance(&created);
	*event_instance = (FMOD_STUDIO_EVENTINSTANCE*)created;

	std::optional<FmodCommandReplayCallbackContext> ctx = command_replay_context(replay);
	if (!ctx.has_value() || !ctx->create_instance_callback.has_value()) return FMOD_OK;

	// Refs packed from the pointer rather than through fmod_pointer_ref, which
	// would write the status slot from Studio's thread.
	uint64_t desc_ref = gmfmod::packRef(gmfmod::pointerKey(event_description), gmfmod::RefType::StudioEventDescription);
	uint64_t instance_ref = created != nullptr
		? gmfmod::packRef(gmfmod::pointerKey(created), gmfmod::RefType::StudioEventInstance)
		: 0;

	ctx->create_instance_callback.value().call(
		ctx->replay_ref,
		(double)command_index,
		desc_ref,
		instance_ref,
		(double)(int)result
	);
	return FMOD_OK;
}

// Same shape: the host loads the bank, FMOD reads *bank. bank_filename is what
// FMOD would have opened itself - setBankPath is already applied by the time
// the callback runs (probed against the vendored 2.03.06 SDK on 2026-09-21), so
// it is loaded verbatim. A bank recorded from loadBankMemory arrives with no
// filename; the extension cannot know which file holds it, so that load is
// answered FILE_NOTFOUND, which is what FMOD's own no-callback path does
// with those commands - the difference is that GML now hears about it.
// bank_guid and bank_filename are both optional in FMOD's contract, and go
// out as undefined rather than as an empty string when absent.
static FMOD_RESULT F_CALL CALLBACK_fmod_studio_command_replay_load_bank(
	FMOD_STUDIO_COMMANDREPLAY* replay,
	int command_index,
	const FMOD_GUID* bank_guid,
	const char* bank_filename,
	FMOD_STUDIO_LOAD_BANK_FLAGS flags,
	FMOD_STUDIO_BANK** bank,
	void* /* userdata */)
{
	if (replay == nullptr || bank == nullptr) return FMOD_OK;

	FMOD::Studio::Bank* loaded = nullptr;
	FMOD_RESULT result = FMOD_ERR_FILE_NOTFOUND;
	if (bank_filename != nullptr)
	{
		FMOD::Studio::System* system = nullptr;
		result = ((FMOD::Studio::CommandReplay*)replay)->getSystem(&system);
		if (result == FMOD_OK && system != nullptr)
			result = system->loadBankFile(bank_filename, flags, &loaded);
	}
	*bank = (FMOD_STUDIO_BANK*)loaded;

	std::optional<FmodCommandReplayCallbackContext> ctx = command_replay_context(replay);
	if (!ctx.has_value() || !ctx->load_bank_callback.has_value()) return FMOD_OK;

	std::optional<std::string> guid;
	if (bank_guid != nullptr) guid = gmfmod::formatGuid(*bank_guid);
	std::optional<std::string> filename;
	if (bank_filename != nullptr) filename = std::string(bank_filename);
	uint64_t bank_ref = loaded != nullptr
		? gmfmod::packRef(gmfmod::pointerKey(loaded), gmfmod::RefType::StudioBank)
		: 0;

	ctx->load_bank_callback.value().call(
		ctx->replay_ref,
		(double)command_index,
		guid,
		filename,
		(double)flags,
		bank_ref,
		(double)(int)result
	);
	return FMOD_OK;
}

gm_enums::FmodStudioPlaybackState fmod_studio_command_replay_get_playback_state(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return (gm_enums::FmodStudioPlaybackState)0;
	FMOD_STUDIO_PLAYBACK_STATE state = FMOD_STUDIO_PLAYBACK_STOPPED;
	g_fmod_studio_last_result = replay->getPlaybackState(&state);
	return (gm_enums::FmodStudioPlaybackState)state;
}

double fmod_studio_command_replay_start(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;
	g_fmod_studio_last_result = replay->start();
	return 0;
}

double fmod_studio_command_replay_stop(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;
	g_fmod_studio_last_result = replay->stop();
	return 0;
}

double fmod_studio_command_replay_get_current_command(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0.0;

	int command_index = 0;
	float current_time = 0.0f;
	g_fmod_studio_last_result = replay->getCurrentCommand(&command_index, &current_time);
	return (double)command_index;
}

double fmod_studio_command_replay_release(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	// Clean up callbacks
	uintptr_t replay_ptr = reinterpret_cast<uintptr_t>(replay);
	{
		std::lock_guard<std::mutex> lock(g_command_replay_callback_mutex);
		g_command_replay_callbacks.erase(replay_ptr);
	}

	g_fmod_studio_last_result = replay->release();
	return 0;
}

// Writes one slot of the replay's context under the lock, dropping the entry
// when its last slot is cleared so a released-and-recycled pointer does not
// inherit it.
static void command_replay_set_slot(
	FMOD::Studio::CommandReplay* replay,
	uint64_t replay_ref,
	std::optional<gm::wire::GMFunction> FmodCommandReplayCallbackContext::* slot,
	const std::optional<gm::wire::GMFunction>& callback)
{
	std::lock_guard<std::mutex> lock(g_command_replay_callback_mutex);
	const uintptr_t key = reinterpret_cast<uintptr_t>(replay);
	FmodCommandReplayCallbackContext& ctx = g_command_replay_callbacks[key];
	ctx.replay_ref = replay_ref;
	ctx.*slot = callback;
	if (!ctx.frame_callback && !ctx.create_instance_callback && !ctx.load_bank_callback)
		g_command_replay_callbacks.erase(key);
}

double fmod_studio_command_replay_set_frame_callback(
	uint64_t replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	command_replay_set_slot(replay, replay_ref, &FmodCommandReplayCallbackContext::frame_callback, callback);
	g_fmod_studio_last_result = replay->setFrameCallback(
		callback.has_value() ? &CALLBACK_fmod_studio_command_replay_frame : nullptr);
	return 0;
}

double fmod_studio_command_replay_set_create_instance_callback(
	uint64_t replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	command_replay_set_slot(replay, replay_ref, &FmodCommandReplayCallbackContext::create_instance_callback, callback);
	g_fmod_studio_last_result = replay->setCreateInstanceCallback(
		callback.has_value() ? &CALLBACK_fmod_studio_command_replay_create_instance : nullptr);
	return 0;
}

double fmod_studio_command_replay_set_load_bank_callback(
	uint64_t replay_ref,
	const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	command_replay_set_slot(replay, replay_ref, &FmodCommandReplayCallbackContext::load_bank_callback, callback);
	g_fmod_studio_last_result = replay->setLoadBankCallback(
		callback.has_value() ? &CALLBACK_fmod_studio_command_replay_load_bank : nullptr);
	return 0;
}
// ============================================================
// Command Replay - Info
// ============================================================

double fmod_studio_command_replay_get_command_count(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0.0;

	int count = 0;
	g_fmod_studio_last_result = replay->getCommandCount(&count);
	return (double)count;
}

double fmod_studio_command_replay_get_length(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0.0;

	float length = 0.0f;
	g_fmod_studio_last_result = replay->getLength(&length);
	return (double)length;
}

uint64_t fmod_studio_command_replay_get_system(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	FMOD::Studio::System* system = nullptr;
	g_fmod_studio_last_result = replay->getSystem(&system);
	if (g_fmod_studio_last_result != FMOD_OK || system == nullptr) return 0;

	return fmod_pointer_ref(system, gmfmod::RefType::StudioSystem);
}

bool fmod_studio_command_replay_is_valid(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return false;

	return replay->isValid();
}

FmodStudioCommandInfo fmod_studio_command_replay_get_command_info(uint64_t replay_ref, double command_index)
{
	FmodStudioCommandInfo result{};
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return result;

	FMOD_STUDIO_COMMAND_INFO info{};
	g_fmod_studio_last_result = replay->getCommandInfo((int)command_index, &info);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	result.command_name = info.commandname != nullptr ? std::string(info.commandname) : std::string();
	result.parent_command_index = (double)info.parentcommandindex;
	result.frame_time = (double)info.frametime;
	result.instance_type = (gm_enums::FmodStudioInstanceType)info.instancetype;
	result.output_type = (gm_enums::FmodStudioInstanceType)info.outputtype;
	result.instance_handle = (double)info.instancehandle;
	result.output_handle = (double)info.outputhandle;
	return result;
}

std::string fmod_studio_command_replay_get_command_string(uint64_t replay_ref, double command_index)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return std::string();

	// getCommandString has no `retrieved` out-parameter (fmod_studio.hpp:373), so
	// unlike every other Studio string getter there is no size handshake to use -
	// a longer command string is truncated and FMOD offers no way to learn it.
	char buffer[256] = {};
	g_fmod_studio_last_result = replay->getCommandString((int)command_index, buffer, sizeof(buffer));
	if (g_fmod_studio_last_result != FMOD_OK) return std::string();

	return std::string(buffer);
}

double fmod_studio_command_replay_get_command_at_time(uint64_t replay_ref, double time)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0.0;

	int command_index = 0;
	g_fmod_studio_last_result = replay->getCommandAtTime((float)time, &command_index);
	return (double)command_index;
}

double fmod_studio_command_replay_seek_to_command(uint64_t replay_ref, double command_index)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	g_fmod_studio_last_result = replay->seekToCommand((int)command_index);
	return 0;
}

double fmod_studio_command_replay_seek_to_time(uint64_t replay_ref, double time)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	g_fmod_studio_last_result = replay->seekToTime((float)time);
	return 0;
}

double fmod_studio_command_replay_set_bank_path(uint64_t replay_ref, std::string_view path)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	std::string path_str(path);
	g_fmod_studio_last_result = replay->setBankPath(path_str.c_str());
	return 0;
}

bool fmod_studio_command_replay_get_paused(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return false;

	bool paused = false;
	g_fmod_studio_last_result = replay->getPaused(&paused);
	return paused;
}

double fmod_studio_command_replay_set_paused(uint64_t replay_ref, bool paused)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	g_fmod_studio_last_result = replay->setPaused(paused);
	return 0;
}

int64_t fmod_studio_command_replay_get_user_data(uint64_t replay_ref)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	return gmfmod::getUserData(replay, g_fmod_studio_last_result);
}

double fmod_studio_command_replay_set_user_data(uint64_t replay_ref, int64_t user_data)
{
	FMOD::Studio::CommandReplay* replay = resolve_fmod_studio_command_replay(replay_ref);
	if (replay == nullptr) return 0;

	gmfmod::setUserData(replay, user_data, g_fmod_studio_last_result);
	return 0;
}
