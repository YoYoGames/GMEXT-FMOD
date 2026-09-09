#include "GMFMOD_common.h"

using namespace gm_structs;

// ============================================================
// DSP Connection - Mix Control
// ============================================================

double fmod_dsp_connection_set_mix(uint64_t connection_ref, double volume)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
		return 0;

	g_fmod_last_result = connection->setMix((float)volume);
	return 0;
}

double fmod_dsp_connection_get_mix(uint64_t connection_ref)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
		return 0;

	float volume = 0.0f;
	g_fmod_last_result = connection->getMix(&volume);
	return (double)volume;
}

double fmod_dsp_connection_set_mix_matrix(
	uint64_t connection_ref,
	gm::wire::GMBuffer matrix,
	double out_channels,
	double in_channels,
	double in_channel_hop)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
		return 0;

	int out = (int)out_channels;
	int in = (int)in_channels;
	int hop = (int)in_channel_hop;

	// FMOD reads a null matrix as "drop back to the default mix". The generated
	// GML wrapper rejects anything that is not an existing buffer, so this branch
	// is unreachable from GML today - a GML caller that wants the default back
	// writes an identity matrix. It is kept because the check costs nothing and
	// the alternative is dereferencing a null pointer if that ever changes.
	if (matrix.data() == nullptr)
	{
		g_fmod_last_result = connection->setMixMatrix(nullptr, out, in, hop);
		return 0;
	}

	if (out <= 0 || in <= 0)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0;
	}

	// FMOD indexes the caller's storage as matrix[t * hop + s], so the hop -
	// not in_channels - is what decides how far the last row reaches.
	uint64_t required = (uint64_t)out * (uint64_t)(hop > 0 ? hop : in) * sizeof(float);
	if (matrix.length() < required)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0;
	}

	// setMixMatrix copies into FMOD's own matrix, so the GML buffer may be
	// freed the moment this returns.
	g_fmod_last_result = connection->setMixMatrix((float*)matrix.data(), out, in, hop);
	return 0;
}

FmodDSPMixMatrix fmod_dsp_connection_get_mix_matrix(
	uint64_t connection_ref,
	gm::wire::GMBuffer matrix,
	double in_channel_hop)
{
	FmodDSPMixMatrix result{};
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	int out_channels = 0, in_channels = 0;
	int hop = (int)in_channel_hop;
	g_fmod_last_result = connection->getMixMatrix(nullptr, &out_channels, &in_channels, hop);

	result.out_channels = (double)out_channels;
	result.in_channels = (double)in_channels;
	if (g_fmod_last_result != FMOD_OK)
		return result;

	// FMOD indexes the caller's storage as matrix[t * hop + s], so the hop -
	// not in_channels - is what decides the size needed.
	uint64_t required = (uint64_t)out_channels * (uint64_t)(hop > 0 ? hop : in_channels) * sizeof(float);
	result.required_bytes = (double)required;

	// Nothing is written unless the whole matrix fits. The caller resizes to
	// required_bytes and calls again.
	if (required == 0 || matrix.data() == nullptr || matrix.length() < required)
		return result;

	g_fmod_last_result = connection->getMixMatrix((float*)matrix.data(), &out_channels, &in_channels, hop);
	return result;
}

// ============================================================
// DSP Connection - Input/Output Access
// ============================================================

uint64_t fmod_dsp_connection_get_input(uint64_t connection_ref)
{
	uint64_t result = 0;
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
		return result;

	FMOD::DSP* input_dsp = nullptr;
	g_fmod_last_result = connection->getInput(&input_dsp);

	if (g_fmod_last_result == FMOD_OK && input_dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(input_dsp, index_dsps, map_dsps);
		result = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

uint64_t fmod_dsp_connection_get_output(uint64_t connection_ref)
{
	uint64_t result = 0;
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
		return result;

	FMOD::DSP* output_dsp = nullptr;
	g_fmod_last_result = connection->getOutput(&output_dsp);

	if (g_fmod_last_result == FMOD_OK && output_dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(output_dsp, index_dsps, map_dsps);
		result = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

// ============================================================
// DSP Connection - Properties
// ============================================================

double fmod_dsp_connection_get_type(uint64_t connection_ref)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
		return 0;

	FMOD_DSPCONNECTION_TYPE type;
	g_fmod_last_result = connection->getType(&type);
	return (double)type;
}

// ============================================================
// DSP Connection - User Data
// ============================================================

double fmod_dsp_connection_set_user_data(uint64_t connection_ref, double user_data)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
		return 0;

	setResourceUserData(connection, user_data);
	return 0;
}

double fmod_dsp_connection_get_user_data(uint64_t connection_ref)
{
	FMOD::DSPConnection* connection = nullptr;
	validate_fmod_dsp_connection(connection_ref, connection);

	if (connection == nullptr)
		return 0;

	return getResourceUserData(connection);
}
