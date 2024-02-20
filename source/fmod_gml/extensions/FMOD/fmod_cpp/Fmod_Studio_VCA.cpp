
#include "Fmod_Tools.h"

// link

// Volume:

func double fmod_studio_vca_set_volume(double vca_ref, double volume)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);

	g_fmod_last_result = vca->setVolume((float)volume);
	return 0;
}

func double fmod_studio_vca_get_volume(double vca_ref)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);

	float volume;
	g_fmod_last_result = vca->getVolume(&volume);
	return volume;
}

// General :

func char* fmod_studio_vca_get_id(double vca_ref)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);

	FMOD_GUID id;
	g_fmod_last_result = vca->getID(&id);

	gStringBuffer[0] = '\0';

	if (g_fmod_last_result != FMOD_OK)
	{
		return gStringBuffer;
	}

	strncpy_s(gStringBuffer, GUIDtoString(id).c_str(), sizeof(gStringBuffer) - 1);
	gStringBuffer[sizeof(gStringBuffer) - 1] = '\0';  // Ensure null termination
	return gStringBuffer;
}

func char* fmod_studio_vca_get_path(double vca_ref)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);

	int retrieved;

	g_fmod_last_result = vca->getPath(gStringBuffer, sizeof(gStringBuffer), &retrieved);
	return gStringBuffer;
}

func double fmod_studio_vca_is_valid(double vca_ref)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);

	return vca->isValid() ? 1.0 : 0.0;
}
