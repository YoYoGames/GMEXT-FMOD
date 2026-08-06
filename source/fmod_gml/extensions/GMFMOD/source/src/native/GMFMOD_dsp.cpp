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

void fmod_dsp_set_parameter_float(const FmodDSPRef& dsp_ref, double index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;
	g_fmod_last_result = dsp->setParameterFloat((int)index, (float)value);
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

void fmod_dsp_set_parameter_int(const FmodDSPRef& dsp_ref, double index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;
	g_fmod_last_result = dsp->setParameterInt((int)index, (int)value);
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

void fmod_dsp_set_parameter_bool(const FmodDSPRef& dsp_ref, double index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;
	g_fmod_last_result = dsp->setParameterBool((int)index, value != 0.0);
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

void fmod_dsp_release(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;
	g_fmod_last_result = dsp->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(dsp, map_dsps);
	}
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

// ============================================================
// DSP - Input/Output
// ============================================================

FmodDSPRef fmod_dsp_get_input(const FmodDSPRef& dsp_ref, double index)
{
	FmodDSPRef result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	FMOD::DSP* input_dsp = nullptr;
	FMOD::DSPConnection* input_connection = nullptr;
	g_fmod_last_result = dsp->getInput((int)index, &input_dsp, &input_connection);

	if (g_fmod_last_result == FMOD_OK && input_dsp != nullptr)
	{
		uint32_t dsp_id = registerOrFindResource(input_dsp, index_dsps, map_dsps);
		result._ref = packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP);
	}
	return result;
}

FmodDSPConnectionRef fmod_dsp_get_output(const FmodDSPRef& dsp_ref, double index)
{
	FmodDSPConnectionRef result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	FMOD::DSP* output_dsp = nullptr;
	FMOD::DSPConnection* output_connection = nullptr;
	g_fmod_last_result = dsp->getOutput((int)index, &output_dsp, &output_connection);

	if (g_fmod_last_result == FMOD_OK && output_connection != nullptr)
	{
		uint32_t connection_id = registerOrFindResource(output_connection, index_dsp_connections, map_dsp_connections);
		result._ref = packIndexIntoRef(connection_id, GM_FMOD_TYPE_DSP_CONNECTION);
	}
	return result;
}

void fmod_dsp_disconnect_from(const FmodDSPRef& dsp_ref, const FmodDSPRef& target_dsp)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;

	FMOD::DSP* target = nullptr;
	validate_fmod_dsp(target_dsp._ref, target);
	if (target == nullptr) return;

	g_fmod_last_result = dsp->disconnectFrom(target);
}

// ============================================================
// DSP - Parameter Data
// ============================================================

double fmod_dsp_get_data_parameter_index(const FmodDSPRef& dsp_ref, double data_type)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return -1.0;

	int param_index = -1;
	g_fmod_last_result = dsp->getDataParameterIndex((int)data_type, &param_index);
	return (double)param_index;
}

void fmod_dsp_set_parameter_data(const FmodDSPRef& dsp_ref, double index, const gm::wire::GMValue& buffer, double length)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;

	// Note: buffer handling requires proper conversion from GMValue
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
}

double fmod_dsp_get_parameter_data(const FmodDSPRef& dsp_ref, double index, const gm::wire::GMValue& buffer, double length)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;

	// Note: buffer handling requires proper conversion from GMValue
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0;
}

gm::wire::DataStream fmod_dsp_get_parameter_info(const FmodDSPRef& dsp_ref, double index)
{
	gm::wire::DataStream result;
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	FMOD_DSP_PARAMETER_DESC* param_desc = nullptr;
	g_fmod_last_result = dsp->getParameterInfo((int)index, &param_desc);

	if (g_fmod_last_result == FMOD_OK && param_desc != nullptr)
	{
		// Build a DataStream with parameter info
		// This would need proper struct serialization
		g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	}
	return result;
}

// ============================================================
// DSP - Channel Format
// ============================================================

void fmod_dsp_set_channel_format(const FmodDSPRef& dsp_ref, double channel_mask, double num_channels)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;

	g_fmod_last_result = dsp->setChannelFormat((FMOD_CHANNELMASK)(uint32_t)channel_mask, (int)num_channels, FMOD_SPEAKERMODE_DEFAULT);
}

FmodDSPChannelFormat fmod_dsp_get_channel_format(const FmodDSPRef& dsp_ref)
{
	FmodDSPChannelFormat result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	FMOD_CHANNELMASK channel_mask = FMOD_CHANNELMASK_STEREO;
	int num_channels = 0;
	FMOD_SPEAKERMODE source_speaker_mode = FMOD_SPEAKERMODE_DEFAULT;
	g_fmod_last_result = dsp->getChannelFormat(&channel_mask, &num_channels, &source_speaker_mode);

	result.channel_mask = (double)channel_mask;
	result.num_channels = (double)num_channels;
	return result;
}

FmodDSPChannelFormat fmod_dsp_get_output_channel_format(const FmodDSPRef& dsp_ref)
{
	FmodDSPChannelFormat result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	FMOD_CHANNELMASK out_mask = FMOD_CHANNELMASK_STEREO;
	int out_channels = 0;
	FMOD_SPEAKERMODE out_speaker_mode = FMOD_SPEAKERMODE_DEFAULT;
	g_fmod_last_result = dsp->getOutputChannelFormat(FMOD_CHANNELMASK_STEREO, 2, FMOD_SPEAKERMODE_DEFAULT, &out_mask, &out_channels, &out_speaker_mode);

	result.channel_mask = (double)out_mask;
	result.num_channels = (double)out_channels;
	return result;
}

// ============================================================
// DSP - Metering
// ============================================================

FmodDSPMeteringInfo fmod_dsp_get_metering_info(const FmodDSPRef& dsp_ref)
{
	FmodDSPMeteringInfo result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	FMOD_DSP_METERING_INFO input_info{}, output_info{};
	g_fmod_last_result = dsp->getMeteringInfo(&input_info, &output_info);

	result.num_samples_analysed = (double)output_info.numsamples;
	return result;
}

void fmod_dsp_set_metering_enabled(const FmodDSPRef& dsp_ref, double input_enabled, double output_enabled)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;

	g_fmod_last_result = dsp->setMeteringEnabled(input_enabled != 0.0, output_enabled != 0.0);
}

FmodDSPMeteringEnabled fmod_dsp_get_metering_enabled(const FmodDSPRef& dsp_ref)
{
	FmodDSPMeteringEnabled result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	bool input_enabled = false, output_enabled = false;
	g_fmod_last_result = dsp->getMeteringEnabled(&input_enabled, &output_enabled);

	result.input_enabled = input_enabled ? 1.0 : 0.0;
	result.output_enabled = output_enabled ? 1.0 : 0.0;
	return result;
}

// ============================================================
// DSP - Active/Bypass
// ============================================================

void fmod_dsp_set_active(const FmodDSPRef& dsp_ref, double active)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;

	g_fmod_last_result = dsp->setActive(active != 0.0);
}

double fmod_dsp_get_active(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;

	bool active = false;
	g_fmod_last_result = dsp->getActive(&active);
	return active ? 1.0 : 0.0;
}

void fmod_dsp_set_bypass(const FmodDSPRef& dsp_ref, double bypass)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;

	g_fmod_last_result = dsp->setBypass(bypass != 0.0);
}

double fmod_dsp_get_bypass(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;

	bool bypass = false;
	g_fmod_last_result = dsp->getBypass(&bypass);
	return bypass ? 1.0 : 0.0;
}

// ============================================================
// DSP - Wet/Dry Mix
// ============================================================

void fmod_dsp_set_wet_dry_mix(const FmodDSPRef& dsp_ref, double prewet, double postwet, double dry)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;

	g_fmod_last_result = dsp->setWetDryMix((float)prewet, (float)postwet, (float)dry);
}

FmodDSPWetDryMix fmod_dsp_get_wet_dry_mix(const FmodDSPRef& dsp_ref)
{
	FmodDSPWetDryMix result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	float prewet = 0.0f, postwet = 0.0f, dry = 0.0f;
	g_fmod_last_result = dsp->getWetDryMix(&prewet, &postwet, &dry);

	result.prewet = (double)prewet;
	result.postwet = (double)postwet;
	result.dry = (double)dry;
	return result;
}

// ============================================================
// DSP - Info & Status
// ============================================================

double fmod_dsp_get_idle(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;

	bool idle = false;
	g_fmod_last_result = dsp->getIdle(&idle);
	return idle ? 1.0 : 0.0;
}

void fmod_dsp_reset(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return;

	g_fmod_last_result = dsp->reset();
}

double fmod_dsp_get_type(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;

	FMOD_DSP_TYPE dsp_type = FMOD_DSP_TYPE_UNKNOWN;
	g_fmod_last_result = dsp->getType(&dsp_type);
	return (double)dsp_type;
}

FmodDSPInfo fmod_dsp_get_info(const FmodDSPRef& dsp_ref)
{
	FmodDSPInfo result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	char name[256]{};
	unsigned int version = 0;
	int channels = 0;
	int config_width = 0;
	int config_height = 0;
	g_fmod_last_result = dsp->getInfo(name, &version, &channels, &config_width, &config_height);

	result.name = std::string(name);
	result.version = (double)version;
	result.channels = (double)channels;
	result.configwidth = (double)config_width;
	result.configheight = (double)config_height;
	return result;
}

FmodDSPCPUUsage fmod_dsp_get_cpu_usage(const FmodDSPRef& dsp_ref)
{
	FmodDSPCPUUsage result{};
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return result;

	unsigned int exclusive = 0, inclusive = 0;
	g_fmod_last_result = dsp->getCPUUsage(&exclusive, &inclusive);

	result.exclusive = (double)exclusive;
	result.inclusive = (double)inclusive;
	return result;
}

// ============================================================
// DSP - User Data & Callbacks
// ============================================================

double fmod_dsp_set_user_data(const FmodDSPRef& dsp_ref, double user_data)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;

	void* user_ptr = reinterpret_cast<void*>((uintptr_t)user_data);
	g_fmod_last_result = dsp->setUserData(user_ptr);
	return 0;
}

double fmod_dsp_get_user_data(const FmodDSPRef& dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0.0;

	void* user_ptr = nullptr;
	g_fmod_last_result = dsp->getUserData(&user_ptr);
	return (double)(uintptr_t)user_ptr;
}

double fmod_dsp_set_callback(const FmodDSPRef& dsp_ref, const std::optional<gm::wire::GMFunction>& callback)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref._ref, dsp);
	if (dsp == nullptr) return 0;

	// Callback support would require FMOD_DSP_READ_CALLBACK setup
	// For now, mark as unsupported
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0;
}
