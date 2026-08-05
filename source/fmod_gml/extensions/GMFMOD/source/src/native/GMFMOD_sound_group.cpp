#include "GMFMOD_sound_group.h"
#include <string>

using namespace gm_structs;

// ============================================================
// SoundGroup - Configuration
// ============================================================

double fmod_sound_group_set_max_audible(const FmodSoundGroupRef& sound_group_ref, double max_audible)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->setMaxAudible((int)max_audible);
	return 0;
}

double fmod_sound_group_get_max_audible(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0.0;

	int max_audible = 0;
	g_fmod_last_result = sound_group->getMaxAudible(&max_audible);
	return (double)max_audible;
}

double fmod_sound_group_set_max_audible_behavior(const FmodSoundGroupRef& sound_group_ref, double behavior)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->setMaxAudibleBehavior((FMOD_SOUNDGROUP_BEHAVIOR)(int)behavior);
	return 0;
}

double fmod_sound_group_get_max_audible_behavior(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0.0;

	FMOD_SOUNDGROUP_BEHAVIOR behavior = FMOD_SOUNDGROUP_BEHAVIOR(0);
	g_fmod_last_result = sound_group->getMaxAudibleBehavior(&behavior);
	return (double)behavior;
}

double fmod_sound_group_set_mute_fade_speed(const FmodSoundGroupRef& sound_group_ref, double speed)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->setMuteFadeSpeed((float)speed);
	return 0;
}

double fmod_sound_group_get_mute_fade_speed(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0.0;

	float speed = 0.0f;
	g_fmod_last_result = sound_group->getMuteFadeSpeed(&speed);
	return (double)speed;
}

double fmod_sound_group_set_volume(const FmodSoundGroupRef& sound_group_ref, double volume)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->setVolume((float)volume);
	return 0;
}

double fmod_sound_group_get_volume(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0.0;

	float volume = 0.0f;
	g_fmod_last_result = sound_group->getVolume(&volume);
	return (double)volume;
}

// ============================================================
// SoundGroup - Sound Management
// ============================================================

double fmod_sound_group_get_num_sounds(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0.0;

	int num_sounds = 0;
	g_fmod_last_result = sound_group->getNumSounds(&num_sounds);
	return (double)num_sounds;
}

FmodSoundRef fmod_sound_group_get_sound(const FmodSoundGroupRef& sound_group_ref, double sound_index)
{
	FmodSoundRef result{};

	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return result;

	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = sound_group->getSound((int)sound_index, &sound);

	if (g_fmod_last_result == FMOD_OK && sound != nullptr)
	{
		uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
		result._ref = packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
	}
	return result;
}

double fmod_sound_group_get_num_playing(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0.0;

	int num_playing = 0;
	g_fmod_last_result = sound_group->getNumPlaying(&num_playing);
	return (double)num_playing;
}

double fmod_sound_group_stop(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->stop();
	return 0;
}

// ============================================================
// SoundGroup - General
// ============================================================

std::string fmod_sound_group_get_name(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return "";

	char buffer[256] = {};
	g_fmod_last_result = sound_group->getName(buffer, sizeof(buffer));
	return std::string(buffer);
}

double fmod_sound_group_release(const FmodSoundGroupRef& sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(sound_group, map_sound_groups);
	}
	return 0;
}

FmodSystemRef fmod_sound_group_get_system_object(const FmodSoundGroupRef& sound_group_ref)
{
	FmodSystemRef result{};

	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref._ref, sound_group);

	if (sound_group == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = sound_group->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result._ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}
