#include "GMFMOD_dsp.h"

using namespace gm_structs;

// ============================================================
// Connections
// ============================================================

FmodDSPConnectionRef fmod_dsp_add_input(const FmodDSPRef& dsp_ref, const FmodDSPRef& dsp_input_ref, double dsp_connection_type)
{
	FmodDSPConnectionRef result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;
	FMOD::DSP* dsp_input = nullptr;
	validate_fmod_dsp(dsp_input_ref._ref, dsp_input);
	if (dsp_input == nullptr) return result;
	FMOD::DSPConnection* dsp_connection = nullptr;
	g_fmod_last_result = dsp->addInput(dsp_input, &dsp_connection, (FMOD_DSPCONNECTION_TYPE)(int)dsp_connection_type);
	if (g_fmod_last_result == FMOD_OK && dsp_connection != nullptr)
	{
		uint32_t dsp_connection_id = registerOrFindResource(dsp_connection, index_dsp_connections, map_dsp_connections);
		result._ref = packIndexIntoRef(dsp_connection_id, GM_FMOD_TYPE_DSP_CONNECTION);
	}
	return result;
}

double fmod_dsp_get_num_inputs(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;
	int num_inputs = 0;
	g_fmod_last_result = dsp->getNumInputs(&num_inputs);
	return (double)num_inputs;
}

double fmod_dsp_get_num_outputs(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;
	int num_outputs = 0;
	g_fmod_last_result = dsp->getNumOutputs(&num_outputs);
	return (double)num_outputs;
}

double fmod_dsp_disconnect_all(const FmodDSPRef& dsp_ref, double inputs, double outputs)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = dsp->disconnectAll(inputs != 0.0, outputs != 0.0);
	return 0;
}

// ============================================================
// Parameters
// ============================================================

double fmod_dsp_get_num_parameters(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;
	int num_parameters = 0;
	g_fmod_last_result = dsp->getNumParameters(&num_parameters);
	return (double)num_parameters;
}

double fmod_dsp_set_parameter_float(const FmodDSPRef& dsp_ref, double index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = dsp->setParameterFloat((int)index, (float)value);
	return 0;
}

double fmod_dsp_get_parameter_float(const FmodDSPRef& dsp_ref, double index)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;
	float value = 0.0f;
	g_fmod_last_result = dsp->getParameterFloat((int)index, &value, nullptr, 0);
	return (double)value;
}

double fmod_dsp_set_parameter_int(const FmodDSPRef& dsp_ref, double index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = dsp->setParameterInt((int)index, (int)value);
	return 0;
}

double fmod_dsp_get_parameter_int(const FmodDSPRef& dsp_ref, double index)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;
	int value = 0;
	g_fmod_last_result = dsp->getParameterInt((int)index, &value, nullptr, 0);
	return (double)value;
}

double fmod_dsp_set_parameter_bool(const FmodDSPRef& dsp_ref, double index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = dsp->setParameterBool((int)index, value != 0.0);
	return 0;
}

double fmod_dsp_get_parameter_bool(const FmodDSPRef& dsp_ref, double index)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;
	bool value = false;
	g_fmod_last_result = dsp->getParameterBool((int)index, &value, nullptr, 0);
	return value ? 1.0 : 0.0;
}

// ============================================================
// General
// ============================================================

double fmod_dsp_release(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;
	g_fmod_last_result = dsp->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(dsp, map_dsps);
	}
	return 0;
}

FmodSystemRef fmod_dsp_get_system_object(const FmodDSPRef& dsp_ref)
{
	FmodSystemRef result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;
	FMOD::System* system = nullptr;
	g_fmod_last_result = dsp->getSystemObject(&system);
	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result._ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}
