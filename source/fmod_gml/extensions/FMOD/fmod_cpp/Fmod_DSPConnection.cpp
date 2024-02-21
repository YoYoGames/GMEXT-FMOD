
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.02/api/core-api-dspconnection.html

std::map<uint32_t, FMOD::DSPConnection*> map_dsp_connections = {};
uint32_t index_dsp_connections = 0;

// Mix Properties

func double fmod_dsp_connection_set_mix(double dsp_connection_ref, double volume)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	g_fmod_last_result = dsp_connection->setMix((float)volume);

	return 0;
}

func double fmod_dsp_connection_get_mix(double dsp_connection_ref)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	float volume;
	g_fmod_last_result = dsp_connection->getMix(&volume);

	return volume;
}

func double fmod_dsp_connection_set_mix_matrix_multiplatform(double dsp_connection_ref, char* buff_args)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto array_matrix = YYGetArray(args[0]);
	auto outchannels = YYGetInt32(args[1]);
	auto inchannels = YYGetInt32(args[2]);
	auto inchannel_hop = YYGetInt32(args[3]);

	float matrix[100]{};
	for (int i = 0; i < array_matrix.size(); i++)
	{
		matrix[i] = YYGetFloat(array_matrix[i]);
	}

	g_fmod_last_result = dsp_connection->setMixMatrix(matrix, outchannels, inchannels, inchannel_hop);

	return 0;
}

func double fmod_dsp_connection_get_mix_matrix_multiplatform(double dsp_connection_ref, double inchannel_hop, char* buff_return)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	float matrix[255]{};
	int outchannels;
	int inchannels;
	g_fmod_last_result = dsp_connection->getMixMatrix(matrix, &outchannels, &inchannels, (int)inchannel_hop);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_matrix = {};
	for (int i = 0; i < outchannels * inchannels; i++)
	{
		vec_matrix << matrix[i];
	}

	StructStream map_return = {};
	map_return.addKeyValue("matrix", vec_matrix);
	map_return.addKeyValue("out_channels", outchannels);
	map_return.addKeyValue("in_channels", inchannels);

	map_return.writeTo(buff_return);

	return 0;
}

// General

func double fmod_dsp_connection_get_input(double dsp_connection_ref)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	FMOD::DSP* dsp;
	g_fmod_last_result = dsp_connection->getInput(&dsp);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);

	return (double)packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
}

func double fmod_dsp_connection_get_output(double dsp_connection_ref)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	FMOD::DSP* dsp;
	g_fmod_last_result = dsp_connection->getOutput(&dsp);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);

	return (double)packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
}

func double fmod_dsp_connection_get_type(double dsp_connection_ref)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	FMOD_DSPCONNECTION_TYPE type;
	g_fmod_last_result = dsp_connection->getType(&type);

	return type;
}

func double fmod_dsp_connection_set_user_data(double dsp_connection_ref, double data)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	setCustomUserData(dsp_connection, data);
	return 0;
}

func double fmod_dsp_connection_get_user_data(double dsp_connection_ref)
{
	FMOD::DSPConnection* dsp_connection = nullptr;
	validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);

	return getCustomUserData(dsp_connection);
}
