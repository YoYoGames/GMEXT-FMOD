#include <native/GMFMODInternal_native.h>
#include "GMFMOD_studio_vca.h"

using namespace gm_structs;

std::string fmod_studio_vca_get_path(uint64_t vca_ref)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);
	if (vca == nullptr) return "";
	char path[256] = {};
	int capacity = sizeof(path);
	g_fmod_last_result = vca->getPath(path, capacity, nullptr);
	return std::string(path);
}

double fmod_studio_vca_get_volume(uint64_t vca_ref)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);
	if (vca == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_last_result = vca->getVolume(&volume);
	return (double)volume;
}

double fmod_studio_vca_set_volume(uint64_t vca_ref, double volume)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);
	if (vca == nullptr) return 0;
	g_fmod_last_result = vca->setVolume((float)volume);
	return 0;
}
