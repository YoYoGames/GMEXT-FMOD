#include "GMFMOD_common.h"

using namespace gm_structs;

// ============================================================
// DSP Connection - Mix Control
// ============================================================

double fmod_dsp_connection_set_mix(const FmodDSPConnectionRef& connection_ref, double volume)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
		return 0;

	g_fmod_last_result = connection->setMix((float)volume);
	return 0;
}

double fmod_dsp_connection_get_mix(const FmodDSPConnectionRef& connection_ref)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
		return 0;

	float volume = 0.0f;
	g_fmod_last_result = connection->getMix(&volume);
	return (double)volume;
}

double fmod_dsp_connection_set_mix_matrix(
	const FmodDSPConnectionRef& connection_ref,
	double matrix,
	double out_channels,
	double in_channels,
	double in_channel_hop)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
		return 0;

	// Note: matrix parameter handling would require array conversion
	// For now, return unsupported as this requires special handling
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0;
}

FmodDSPMixMatrix fmod_dsp_connection_get_mix_matrix(
	const FmodDSPConnectionRef& connection_ref,
	double in_channel_hop)
{
	FmodDSPMixMatrix result{};
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	int out_channels = 0, in_channels = 0;
	g_fmod_last_result = connection->getMixMatrix(nullptr, &out_channels, &in_channels, (int)in_channel_hop);

	result.out_channels = (double)out_channels;
	result.in_channels = (double)in_channels;
	result.matrix = 0.0;
	return result;
}

// ============================================================
// DSP Connection - Input/Output Access
// ============================================================

FmodDSPRef fmod_dsp_connection_get_input(const FmodDSPConnectionRef& connection_ref)
{
	FmodDSPRef result{};
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
		return result;

	FMOD::DSP* input_dsp = nullptr;
	g_fmod_last_result = connection->getInput(&input_dsp);

	if (g_fmod_last_result == FMOD_OK && input_dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(input_dsp, index_dsps, map_dsps);
		result._ref = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

FmodDSPRef fmod_dsp_connection_get_output(const FmodDSPConnectionRef& connection_ref)
{
	FmodDSPRef result{};
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
		return result;

	FMOD::DSP* output_dsp = nullptr;
	g_fmod_last_result = connection->getOutput(&output_dsp);

	if (g_fmod_last_result == FMOD_OK && output_dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(output_dsp, index_dsps, map_dsps);
		result._ref = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

// ============================================================
// DSP Connection - Properties
// ============================================================

double fmod_dsp_connection_get_type(const FmodDSPConnectionRef& connection_ref)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
		return 0;

	FMOD_DSPCONNECTION_TYPE type;
	g_fmod_last_result = connection->getType(&type);
	return (double)type;
}

// ============================================================
// DSP Connection - User Data
// ============================================================

double fmod_dsp_connection_set_user_data(const FmodDSPConnectionRef& connection_ref, double user_data)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
		return 0;

	void* user_ptr = reinterpret_cast<void*>((uintptr_t)user_data);
	g_fmod_last_result = connection->setUserData(user_ptr);
	return 0;
}

double fmod_dsp_connection_get_user_data(const FmodDSPConnectionRef& connection_ref)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref._ref, connection);

	if (connection == nullptr)
		return 0;

	void* user_ptr = nullptr;
	g_fmod_last_result = connection->getUserData(&user_ptr);
	return (double)(uintptr_t)user_ptr;
}
