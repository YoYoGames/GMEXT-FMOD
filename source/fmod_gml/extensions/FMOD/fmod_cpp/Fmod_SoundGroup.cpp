
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.03/api/core-api-soundgroup.html

std::map<uint32_t, FMOD::SoundGroup*> map_sound_groups = {};
uint32_t index_sound_groups = 0;

// Group Functions

func double fmod_sound_group_set_max_audible(double sound_group_ref, double max_audible)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	g_fmod_last_result = sound_group->setMaxAudible((int)max_audible);

	return 0;
}

func double fmod_sound_group_get_max_audible(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	int max_audible;
	g_fmod_last_result = sound_group->getMaxAudible(&max_audible);

	return (double)max_audible;
}

func double fmod_sound_group_set_max_audible_behavior(double sound_group_ref, double behavior)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	g_fmod_last_result = sound_group->setMaxAudibleBehavior((FMOD_SOUNDGROUP_BEHAVIOR)behavior);

	return 0;
}

func double fmod_sound_group_get_max_audible_behavior(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	FMOD_SOUNDGROUP_BEHAVIOR behavior;
	g_fmod_last_result = sound_group->getMaxAudibleBehavior(&behavior);

	return (double)behavior;
}

func double fmod_sound_group_set_mute_fade_speed(double sound_group_ref, double speed)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	g_fmod_last_result = sound_group->setMuteFadeSpeed((float)speed);

	return 0;
}

func double fmod_sound_group_get_mute_fade_speed(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	float speed;
	g_fmod_last_result = sound_group->getMuteFadeSpeed(&speed);

	return (double)speed;
}

func double fmod_sound_group_set_volume(double sound_group_ref, double volume)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	g_fmod_last_result = sound_group->setVolume((float)volume);

	return 0;
}

func double fmod_sound_group_get_volume(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	float volume;
	g_fmod_last_result = sound_group->getVolume(&volume);

	return volume;
}

// Sound Functions

func double fmod_sound_group_get_num_sounds(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	int numsounds = 0;
	g_fmod_last_result = sound_group->getNumSounds(&numsounds);

	return (double)numsounds;
}

func double fmod_sound_group_get_sound(double sound_group_ref, double sound_index)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = sound_group->getSound((int)sound_index, &sound);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto sound_id = registerOrFindResource(sound, index_sounds, map_sounds);

	return (double)packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
}

func double fmod_sound_group_get_num_playing(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	int numplaying = 0;
	g_fmod_last_result = sound_group->getNumPlaying(&numplaying);

	return (double)numplaying;
}

func double fmod_sound_group_stop(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	g_fmod_last_result = sound_group->stop();

	return 0;
}

// General

func char* fmod_sound_group_get_name(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	g_fmod_last_result = sound_group->getName(gStringBuffer, sizeof(gStringBuffer));

	return gStringBuffer;
}

func double fmod_sound_group_release(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	// Make sure we free the user data
	unregisterResource(sound_group, map_sound_groups);

	g_fmod_last_result = sound_group->release();

	return 0;
}

func double fmod_sound_group_get_system_object(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	FMOD::System* fmod_system = nullptr;
	g_fmod_last_result = sound_group->getSystemObject(&fmod_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto system_id = registerOrFindResource(fmod_system, index_systems, map_systems);

	return (double)packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
}

func double fmod_sound_group_set_user_data(double sound_group_ref, double data)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	setCustomUserData(sound_group, data);
	return 0;
}

func double fmod_sound_group_get_user_data(double sound_group_ref)
{
	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	return getCustomUserData(sound_group);
}
