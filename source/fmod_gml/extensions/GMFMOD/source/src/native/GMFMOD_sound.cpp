#include "GMFMOD_sound.h"
#include <string_view>

using namespace gm_structs;

// ============================================================
// Sound - Creation & Loading
// ============================================================

FmodSoundRef fmod_system_create_sound(std::string_view name_or_data, double mode)
{
	FmodSoundRef result{};

	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = map_systems.begin()->second;
	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = system->createSound(name_or_data.data(), (FMOD_MODE)(int)mode, nullptr, &sound);

	if (g_fmod_last_result == FMOD_OK && sound != nullptr)
	{
		uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
		result._ref = packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
	}
	return result;
}

FmodSoundRef fmod_system_create_stream(std::string_view name_or_data, double mode)
{
	FmodSoundRef result{};

	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = map_systems.begin()->second;
	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = system->createStream(name_or_data.data(), (FMOD_MODE)(int)mode, nullptr, &sound);

	if (g_fmod_last_result == FMOD_OK && sound != nullptr)
	{
		uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
		result._ref = packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
	}
	return result;
}

FmodChannelRef fmod_system_play_sound(const FmodSoundRef& sound_ref, const FmodChannelGroupRef& channel_group_ref, double pause)
{
	FmodChannelRef result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return result;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref._ref, channel_group);

	if (channel_group == nullptr)
		return result;

	if (map_systems.empty() || map_systems.begin()->second == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = map_systems.begin()->second;
	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = system->playSound(sound, channel_group, (pause != 0.0), &channel);

	if (g_fmod_last_result == FMOD_OK && channel != nullptr)
	{
		uint32_t channel_id = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(channel));
		result._ref = packIndexIntoRef(channel_id, GM_FMOD_TYPE_CHANNEL);
	}
	return result;
}

// ============================================================
// Sound - Properties
// ============================================================

double fmod_sound_get_length(const FmodSoundRef& sound_ref, double length_type)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0.0;

	unsigned int length = 0;
	g_fmod_last_result = sound->getLength(&length, (FMOD_TIMEUNIT)(int)length_type);
	return (double)length;
}

double fmod_sound_set_defaults(const FmodSoundRef& sound_ref, double frequency, double priority)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setDefaults((float)frequency, (int)priority);
	return 0;
}

double fmod_sound_set_mode(const FmodSoundRef& sound_ref, double mode)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setMode((FMOD_MODE)(int)mode);
	return 0;
}

double fmod_sound_get_mode(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0.0;

	FMOD_MODE mode = FMOD_MODE(0);
	g_fmod_last_result = sound->getMode(&mode);
	return (double)mode;
}

// ============================================================
// Sound - Loop
// ============================================================

double fmod_sound_set_loop_count(const FmodSoundRef& sound_ref, double count)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setLoopCount((int)count);
	return 0;
}

double fmod_sound_get_loop_count(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0.0;

	int count = 0;
	g_fmod_last_result = sound->getLoopCount(&count);
	return (double)count;
}

double fmod_sound_set_loop_points(const FmodSoundRef& sound_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setLoopPoints(
		(unsigned int)loop_start, (FMOD_TIMEUNIT)(int)loop_start_type,
		(unsigned int)loop_end, (FMOD_TIMEUNIT)(int)loop_end_type
	);
	return 0;
}

// ============================================================
// Sound - 3D & Distance
// ============================================================

double fmod_sound_set_3d_min_max_distance(const FmodSoundRef& sound_ref, double min, double max)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->set3DMinMaxDistance((float)min, (float)max);
	return 0;
}

double fmod_sound_set_3d_cone_settings(const FmodSoundRef& sound_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->set3DConeSettings((float)inside_cone_angle, (float)outside_cone_angle, (float)outside_volume);
	return 0;
}

// ============================================================
// Sound - Release
// ============================================================

double fmod_sound_release(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(sound, map_sounds);
	}
	return 0;
}

FmodSystemRef fmod_sound_get_system_object(const FmodSoundRef& sound_ref)
{
	FmodSystemRef result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = sound->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result._ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}

// ============================================================
// Sound - Additional Properties
// ============================================================

double fmod_sound_get_format(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	FMOD_SOUND_FORMAT format = FMOD_SOUND_FORMAT_NONE;
	int channels = 0;
	int bits = 0;
	g_fmod_last_result = sound->getFormat(nullptr, &format, &channels, &bits);
	return (double)format;
}

std::string fmod_sound_get_name(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return "";

	char name[512]{};
	g_fmod_last_result = sound->getName(name, sizeof(name));
	return std::string(name);
}

FmodSoundDefaults fmod_sound_get_defaults(const FmodSoundRef& sound_ref)
{
	FmodSoundDefaults result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
	{
		return result;
	}

	float frequency = 0.0f;
	int priority = 0;
	g_fmod_last_result = sound->getDefaults(&frequency, &priority);
	result.frequency = (double)frequency;
	result.priority = (double)priority;
	return result;
}

FmodLoopPoints fmod_sound_get_loop_points(const FmodSoundRef& sound_ref, double start_type, double end_type)
{
	FmodLoopPoints result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return result;

	unsigned int loop_start = 0, loop_end = 0;
	g_fmod_last_result = sound->getLoopPoints(
		&loop_start, (FMOD_TIMEUNIT)(int)start_type,
		&loop_end, (FMOD_TIMEUNIT)(int)end_type
	);
	result.loop_start = (double)loop_start;
	result.loop_end = (double)loop_end;
	return result;
}

FmodSoundMinMaxDistance fmod_sound_get_3d_min_max_distance(const FmodSoundRef& sound_ref)
{
	FmodSoundMinMaxDistance result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return result;

	float min_distance = 0.0f, max_distance = 0.0f;
	g_fmod_last_result = sound->get3DMinMaxDistance(&min_distance, &max_distance);
	result.min_distance = (double)min_distance;
	result.max_distance = (double)max_distance;
	return result;
}

FmodConeSettings fmod_sound_get_3d_cone_settings(const FmodSoundRef& sound_ref)
{
	FmodConeSettings result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return result;

	float inside_cone_angle = 0.0f, outside_cone_angle = 0.0f, outside_volume = 0.0f;
	g_fmod_last_result = sound->get3DConeSettings(&inside_cone_angle, &outside_cone_angle, &outside_volume);
	result.inside_cone_angle = (double)inside_cone_angle;
	result.outside_cone_angle = (double)outside_cone_angle;
	result.outside_volume = (double)outside_volume;
	return result;
}

double fmod_sound_set_3d_custom_rolloff(const FmodSoundRef& sound_ref, const gm::wire::GMValue& points, double num_points)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	// Custom rolloff requires array conversion - for now return unsupported
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0;
}

void fmod_sound_get_3d_custom_rolloff(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return;

	// Custom rolloff requires array conversion - for now return unsupported
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
}

// ============================================================
// Sound - Sync Points
// ============================================================

double fmod_sound_get_num_sync_points(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	int num_sync_points = 0;
	g_fmod_last_result = sound->getNumSyncPoints(&num_sync_points);
	return (double)num_sync_points;
}

FmodSyncPointInfo fmod_sound_get_sync_point(const FmodSoundRef& sound_ref, double sync_point_index, double offset_type)
{
	FmodSyncPointInfo result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return result;

	FMOD_SYNCPOINT* sync_point = nullptr;
	unsigned int offset = 0;
	g_fmod_last_result = sound->getSyncPoint((int)sync_point_index, &sync_point);
	if (g_fmod_last_result == FMOD_OK)
	{
		g_fmod_last_result = sound->getSyncPointInfo(sync_point, nullptr, 0, &offset, (FMOD_TIMEUNIT)(int)offset_type);
		result.offset = (double)offset;
	}
	return result;
}

double fmod_sound_add_sync_point(const FmodSoundRef& sound_ref, double offset, double offset_type, std::string_view name)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	FMOD_SYNCPOINT* sync_point = nullptr;
	g_fmod_last_result = sound->addSyncPoint((unsigned int)offset, (FMOD_TIMEUNIT)(int)offset_type, name.data(), &sync_point);
	return (double)(uintptr_t)sync_point;
}

double fmod_sound_delete_sync_point(const FmodSoundRef& sound_ref, double sync_point_index)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	FMOD_SYNCPOINT* sync_point = nullptr;
	g_fmod_last_result = sound->getSyncPoint((int)sync_point_index, &sync_point);
	if (g_fmod_last_result == FMOD_OK)
	{
		g_fmod_last_result = sound->deleteSyncPoint(sync_point);
	}
	return 0;
}

// ============================================================
// Sound - Music (MOD/S3M/XM/IT/MIDI)
// ============================================================

double fmod_sound_get_music_num_channels(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	int num_channels = 0;
	g_fmod_last_result = sound->getMusicNumChannels(&num_channels);
	return (double)num_channels;
}

double fmod_sound_set_music_channel_volume(const FmodSoundRef& sound_ref, double channel_index, double volume)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setMusicChannelVolume((int)channel_index, (float)volume);
	return 0;
}

double fmod_sound_get_music_channel_volume(const FmodSoundRef& sound_ref, double channel_index)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	float volume = 0.0f;
	g_fmod_last_result = sound->getMusicChannelVolume((int)channel_index, &volume);
	return (double)volume;
}

double fmod_sound_set_music_speed(const FmodSoundRef& sound_ref, double speed)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setMusicSpeed((float)speed);
	return 0;
}

double fmod_sound_get_music_speed(const FmodSoundRef& sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	float speed = 0.0f;
	g_fmod_last_result = sound->getMusicSpeed(&speed);
	return (double)speed;
}

// ============================================================
// Sound - Sound Groups
// ============================================================

double fmod_sound_set_sound_group(const FmodSoundRef& sound_ref, const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return 0;

	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound->setSoundGroup(sound_group);
	return 0;
}

FmodSoundGroupRef fmod_sound_get_sound_group(const FmodSoundRef& sound_ref)
{
	FmodSoundGroupRef result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref._ref, sound);

	if (sound == nullptr)
		return result;

	FMOD::SoundGroup* sound_group = nullptr;
	g_fmod_last_result = sound->getSoundGroup(&sound_group);

	if (g_fmod_last_result == FMOD_OK && sound_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);
		result._ref = packIndexIntoRef(group_id, GM_FMOD_TYPE_SOUND_GROUP);
	}
	return result;
}
