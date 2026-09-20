#include "GMFMOD_sound_group.h"
#include <string>

using namespace gm_structs;

// ============================================================
// SoundGroup - Configuration
// ============================================================

double fmod_sound_group_set_max_audible(uint64_t sound_group_ref, double max_audible)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->setMaxAudible((int)max_audible);
	return 0;
}

double fmod_sound_group_get_max_audible(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0.0;

	int max_audible = 0;
	g_fmod_last_result = sound_group->getMaxAudible(&max_audible);
	return (double)max_audible;
}

double fmod_sound_group_set_max_audible_behavior(uint64_t sound_group_ref, gm_enums::FmodSoundGroupBehavior behavior)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->setMaxAudibleBehavior((FMOD_SOUNDGROUP_BEHAVIOR)(int)behavior);
	return 0;
}

gm_enums::FmodSoundGroupBehavior fmod_sound_group_get_max_audible_behavior(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return (gm_enums::FmodSoundGroupBehavior)0;

	FMOD_SOUNDGROUP_BEHAVIOR behavior = FMOD_SOUNDGROUP_BEHAVIOR(0);
	g_fmod_last_result = sound_group->getMaxAudibleBehavior(&behavior);
	return (gm_enums::FmodSoundGroupBehavior)behavior;
}

double fmod_sound_group_set_mute_fade_speed(uint64_t sound_group_ref, double speed)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->setMuteFadeSpeed((float)speed);
	return 0;
}

double fmod_sound_group_get_mute_fade_speed(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0.0;

	float speed = 0.0f;
	g_fmod_last_result = sound_group->getMuteFadeSpeed(&speed);
	return (double)speed;
}

double fmod_sound_group_set_volume(uint64_t sound_group_ref, double volume)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->setVolume((float)volume);
	return 0;
}

double fmod_sound_group_get_volume(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0.0;

	float volume = 0.0f;
	g_fmod_last_result = sound_group->getVolume(&volume);
	return (double)volume;
}

// ============================================================
// SoundGroup - Sound Management
// ============================================================

double fmod_sound_group_get_num_sounds(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0.0;

	int num_sounds = 0;
	g_fmod_last_result = sound_group->getNumSounds(&num_sounds);
	return (double)num_sounds;
}

uint64_t fmod_sound_group_get_sound(uint64_t sound_group_ref, double sound_index)
{
	uint64_t result = 0;

	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return result;

	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = sound_group->getSound((int)sound_index, &sound);

	if (g_fmod_last_result == FMOD_OK && sound != nullptr)
	{
		uint32_t sound_id = g_registries.sounds.registerOrFind(sound);
		result = gmfmod::packRef(sound_id, gmfmod::RefType::Sound);
	}
	return result;
}

double fmod_sound_group_get_num_playing(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0.0;

	int num_playing = 0;
	g_fmod_last_result = sound_group->getNumPlaying(&num_playing);
	return (double)num_playing;
}

double fmod_sound_group_stop(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound_group->stop();
	return 0;
}

// ============================================================
// SoundGroup - General
// ============================================================

std::string fmod_sound_group_get_name(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return "";

	char buffer[256] = {};
	g_fmod_last_result = sound_group->getName(buffer, sizeof(buffer));
	return std::string(buffer);
}

double fmod_sound_group_release(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return 0;

	g_registries.soundGroups.unregister(sound_group);
	g_fmod_last_result = sound_group->release();
	return 0;
}

uint64_t fmod_sound_group_get_system_object(uint64_t sound_group_ref)
{
	uint64_t result = 0;

	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);

	if (sound_group == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = sound_group->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = g_registries.systems.registerOrFind(system);
		result = gmfmod::packRef(system_id, gmfmod::RefType::System);
	}
	return result;
}

double fmod_sound_group_set_user_data(uint64_t sound_group_ref, int64_t user_data)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);
	if (sound_group == nullptr) return 0;

	gmfmod::setUserData(sound_group, user_data, g_fmod_last_result);
	return 0;
}

int64_t fmod_sound_group_get_user_data(uint64_t sound_group_ref)
{
	FMOD::SoundGroup* sound_group = resolve_fmod_sound_group(sound_group_ref);
	if (sound_group == nullptr) return 0;

	return gmfmod::getUserData(sound_group, g_fmod_last_result);
}
