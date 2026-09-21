#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_vca.h"

using namespace gm_structs;

std::string fmod_studio_vca_get_path(uint64_t vca_ref)
{
	FMOD::Studio::VCA* vca = resolve_fmod_studio_vca(vca_ref);
	if (vca == nullptr) return "";
	return gmfmod::readString([vca](char* buf, int size, int* got) {
		return vca->getPath(buf, size, got);
	}, g_fmod_studio_last_result);
}

double fmod_studio_vca_get_volume(uint64_t vca_ref)
{
	FMOD::Studio::VCA* vca = resolve_fmod_studio_vca(vca_ref);
	if (vca == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_studio_last_result = vca->getVolume(&volume);
	return (double)volume;
}

double fmod_studio_vca_set_volume(uint64_t vca_ref, double volume)
{
	FMOD::Studio::VCA* vca = resolve_fmod_studio_vca(vca_ref);
	if (vca == nullptr) return 0;
	g_fmod_studio_last_result = vca->setVolume((float)volume);
	return 0;
}

std::string fmod_studio_vca_get_id(uint64_t vca_ref)
{
	FMOD::Studio::VCA* vca = resolve_fmod_studio_vca(vca_ref);
	if (vca == nullptr) return std::string();

	FMOD_GUID guid{};
	g_fmod_studio_last_result = vca->getID(&guid);
	if (g_fmod_studio_last_result != FMOD_OK) return std::string();

	return gmfmod::formatGuid(guid);
}

bool fmod_studio_vca_is_valid(uint64_t vca_ref)
{
	FMOD::Studio::VCA* vca = resolve_fmod_studio_vca(vca_ref);
	if (vca == nullptr) return false;

	return vca->isValid();
}
