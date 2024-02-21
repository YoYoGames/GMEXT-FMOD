
#include "Fmod_Tools.h"

// Setup

func double fmod_studio_command_replay_set_bank_path(double command_replay_ref, char* path)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->setBankPath((const char*)path);
	return 0;
}

static FMOD_RESULT CALLBACK_fmod_studio_command_replay_create_instance(FMOD_STUDIO_COMMANDREPLAY* commandReplay,
																	   int commandIndex,
																	   FMOD_STUDIO_EVENTDESCRIPTION* eventDescription,
																	   FMOD_STUDIO_EVENTINSTANCE** eventInstance,
																	   void* userdata)
{
	StructStream async_map = {};

	async_map.addKeyValue("type", "fmod_studio_command_replay_set_create_instance_callback");

	FMOD::Studio::CommandReplay* command_replay = (FMOD::Studio::CommandReplay*)commandReplay;
	if (command_replay != nullptr)
	{
		async_map.addKeyValue(
			"command_replay_ref", (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(command_replay), GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY));
	}

	FMOD::Studio::EventDescription* event_description = (FMOD::Studio::EventDescription*)eventDescription;
	if (event_description != nullptr)
	{
		async_map.addKeyValue("event_description_ref",
						  (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(event_description), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION));
	}

	FMOD::Studio::EventInstance* event_instance = (FMOD::Studio::EventInstance*)eventInstance;
	if (event_description != nullptr)
	{
		async_map.addKeyValue(
			"event_instance_ref", (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(event_instance), GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE));
	}

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_studio_command_replay_set_create_instance_callback(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->setCreateInstanceCallback(CALLBACK_fmod_studio_command_replay_create_instance);
	return 0;
}

static FMOD_RESULT CALLBACK_fmod_studio_command_replay_frame(FMOD_STUDIO_COMMANDREPLAY* replay, int commandindex, float currenttime, void* userdata)
{
	StructStream async_map = {};
	async_map.addKeyValue("type", "fmod_studio_command_replay_set_frame_callback");

	FMOD::Studio::CommandReplay* command_replay = (FMOD::Studio::CommandReplay*)replay;

	async_map.addKeyValue(
		"command_replay_ref", (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(command_replay), GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY));
	async_map.addKeyValue("command_index", commandindex);
	async_map.addKeyValue("current_time", currenttime);

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_studio_command_replay_set_frame_callback(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->setFrameCallback(CALLBACK_fmod_studio_command_replay_frame);
	return 0;
}

static FMOD_RESULT CALLBACK_fmod_studio_command_replay_load_bank(FMOD_STUDIO_COMMANDREPLAY* replay,
																 int commandindex,
																 const FMOD_GUID* bankguid,
																 const char* bankfilename,
																 FMOD_STUDIO_LOAD_BANK_FLAGS flags,
																 FMOD_STUDIO_BANK** bank,
																 void* userdata)
{
	StructStream async_map = {};

	async_map.addKeyValue("type", "fmod_studio_command_replay_set_load_bank_callback");
	async_map.addKeyValue("command_replay_ref",
					  packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>((FMOD::Studio::CommandReplay*)replay), GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY));
	async_map.addKeyValue("command_index", commandindex);
	async_map.addKeyValue("bank_ref", packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>((FMOD::Studio::Bank*)bank), GM_FMOD_STUDIO_TYPE_BANK));
	async_map.addKeyValue("bank_guid", GUIDtoString(*bankguid));
	async_map.addKeyValue("bank_filename", bankfilename);

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_studio_command_replay_set_load_bank_callback(double command_replay_ref, char* path)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->setLoadBankCallback(CALLBACK_fmod_studio_command_replay_load_bank);
	return 0;
}

// Playback

func double fmod_studio_command_replay_start(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->start();
	return 0;
}

func double fmod_studio_command_replay_stop(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->stop();
	return 0;
}

func double fmod_studio_command_replay_get_current_command_multiplatform(double command_replay_ref, char* buff_return)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	int commandindex;
	float currenttime;

	g_fmod_last_result = command_replay->getCurrentCommand(&commandindex, &currenttime);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("command_index", (double)commandindex);
	map_return.addKeyValue("current_time", (double)currenttime);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_command_replay_get_playback_state(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	FMOD_STUDIO_PLAYBACK_STATE state;
	g_fmod_last_result = command_replay->getPlaybackState(&state);

	return (double)state;
}

func double fmod_studio_command_replay_set_paused(double command_replay_ref, double pause)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->setPaused(pause >= 0.5);

	return 0;
}

func double fmod_studio_command_replay_get_paused(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	bool pause;
	g_fmod_last_result = command_replay->getPaused(&pause);

	return pause ? 1.0 : 0.0;
}

func double fmod_studio_command_replay_seek_to_command(double command_replay_ref, double command_index)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->seekToCommand((int)command_index);

	return 0;
}

func double fmod_studio_command_replay_seek_to_time(double command_replay_ref, double time)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->seekToTime((float)time);

	return 0;
}

// Query

func double fmod_studio_command_replay_get_command_at_time(double command_replay_ref, double time)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	int command_index;
	g_fmod_last_result = command_replay->getCommandAtTime((float)time, &command_index);

	return (double)command_index;
}

func double fmod_studio_command_replay_get_command_count(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	int count;
	g_fmod_last_result = command_replay->getCommandCount(&count);

	return (double)count;
}

func double fmod_studio_command_replay_get_command_info_multiplatform(double command_replay_ref, double command_index, char* buff_return)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	FMOD_STUDIO_COMMAND_INFO info;
	g_fmod_last_result = command_replay->getCommandInfo((int)command_index, &info);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("command_name", info.commandname);
	map_return.addKeyValue("parent_command_index", info.parentcommandindex);
	map_return.addKeyValue("frame_time", info.frametime);
	map_return.addKeyValue("instance_type", (int)info.instancetype);
	map_return.addKeyValue("output_type", (int)info.outputtype);
	map_return.addKeyValue("instance_handle", info.instancehandle);
	map_return.addKeyValue("output_handle", info.outputhandle);

	map_return.writeTo(buff_return);

	return 0;
}

func char* fmod_studio_command_replay_get_command_string(double command_replay_ref, double command_index)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	gStringBuffer[0] = '\0';
	g_fmod_last_result = command_replay->getCommandString((int)command_index, gStringBuffer, sizeof(gStringBuffer));

	return gStringBuffer;
}

func double fmod_studio_command_replay_get_length(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	float length = 0;
	g_fmod_last_result = command_replay->getLength(&length);

	return (double)length;
}

func double fmod_studio_command_replay_get_system_object(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	FMOD::Studio::System* fmod_studio_system = nullptr;
	g_fmod_last_result = command_replay->getSystem(&fmod_studio_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(fmod_studio_system), GM_FMOD_STUDIO_TYPE_SYSTEM);
}

func double fmod_studio_command_replay_is_valid(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	bool valid = command_replay->isValid();

	return valid ? 1.0 : 0.0;
}

func double fmod_studio_command_replay_set_user_data(double command_replay_ref, double data)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	command_replay->setUserData((void*)(uint64_t)data);

	return 0;
}

func double fmod_studio_command_replay_get_user_data(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	void* userData = nullptr;
	command_replay->getUserData(&userData);

	return userData ? (double)(uint64_t)userData : NAN;
}

// Lifetime

func double fmod_studio_command_replay_release(double command_replay_ref)
{
	FMOD::Studio::CommandReplay* command_replay = nullptr;
	validate_fmod_studio_command_replay(command_replay_ref, command_replay);

	g_fmod_last_result = command_replay->release();

	return 0;
}
