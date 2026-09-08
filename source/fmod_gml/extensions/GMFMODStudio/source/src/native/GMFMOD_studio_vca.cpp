#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_vca.h"

using namespace gm_structs;

std::string fmod_studio_vca_get_path(uint64_t vca_ref)
{
	FMOD::Studio::VCA* vca = nullptr;
	validate_fmod_studio_vca(vca_ref, vca);
	if (vca == nullptr) return "";
	return fmod_read_string([vca](char* buf, int size, int* got) {
		return vca->getPath(buf, size, got);
	});
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
