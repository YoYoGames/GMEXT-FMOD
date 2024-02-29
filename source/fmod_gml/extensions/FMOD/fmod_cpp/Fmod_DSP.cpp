
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.02/api/core-api-dsp.html

std::map<uint32_t, FMOD::DSP*> map_dsps = {};
uint32_t index_dsps = 0;

// Connections

func double fmod_dsp_add_input_multiplatform(double dsp_ref, double dsp_input_ref, double dsp_connection_type)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD::DSP* dsp_input = nullptr;
	validate_fmod_dsp(dsp_input_ref, dsp_input);

	FMOD::DSPConnection* dsp_connection = nullptr;
	g_fmod_last_result = dsp->addInput(dsp_input, &dsp_connection, (FMOD_DSPCONNECTION_TYPE)dsp_connection_type);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t dsp_connection_id = registerOrFindResource(dsp_connection, index_dsp_connections, map_dsp_connections);

	return (double)packIndexIntoRef(dsp_connection_id, GM_FMOD_TYPE_DSP_CONNECTION);
}

func double fmod_dsp_get_input_multiplatform(double dsp_ref, double dsp_input_index, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD::DSP* dsp_input = nullptr;
	FMOD::DSPConnection* dsp_connection = nullptr;
	g_fmod_last_result = dsp->getInput((int)dsp_input_index, &dsp_input, &dsp_connection);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t dsp_input_id = registerOrFindResource(dsp_input, index_dsps, map_dsps);
	uint32_t dsp_connection_id = registerOrFindResource(dsp_connection, index_dsp_connections, map_dsp_connections);
	
	StructStream map_return = {};
	map_return.addKeyValue( "dsp_ref", (double)packIndexIntoRef(dsp_input_id, GM_FMOD_TYPE_DSP) );
	map_return.addKeyValue( "dsp_connection_ref", (double)packIndexIntoRef(dsp_connection_id, GM_FMOD_TYPE_DSP_CONNECTION) );
	
	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_dsp_get_output_multiplatform(double dsp_ref, double dsp_output_index, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD::DSP* dsp_output;
	FMOD::DSPConnection* dsp_connection;
	g_fmod_last_result = dsp->getOutput((int)dsp_output_index, &dsp_output, &dsp_connection);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t dsp_id = registerOrFindResource(dsp_output, index_dsps, map_dsps);
	uint32_t dsp_connection_id = registerOrFindResource(dsp_connection, index_dsp_connections, map_dsp_connections);
	
	StructStream map_return = {};
	map_return.addKeyValue("dsp_ref", (double)packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP));
	map_return.addKeyValue("dsp_connection_ref", (double)packIndexIntoRef(dsp_connection_id, GM_FMOD_TYPE_DSP_CONNECTION));

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_dsp_get_num_inputs(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	int num;
	g_fmod_last_result = dsp->getNumInputs(&num);

	return num;
}

func double fmod_dsp_get_num_outputs(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	int num;
	g_fmod_last_result = dsp->getNumOutputs(&num);

	return num;
}

func double fmod_dsp_disconnect_all(double dsp_ref, double inputs, double outputs)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD::DSPConnection* dsp_connection = nullptr;

	// Should unlink inputs?
	if (inputs >= 0.5)
	{
		int32_t input_num = 0;
		dsp->getNumInputs(&input_num);

		for (auto i = 0; i < input_num; ++i, dsp_connection = nullptr)
		{
			dsp->getInput(i, nullptr, &dsp_connection);

			if (!dsp_connection)
				continue;

			unregisterResource(dsp_connection, map_dsp_connections);
		}
	}

	// Should unlink outputs?
	if (outputs >= 0.5)
	{
		int32_t output_num = 0;
		dsp->getNumOutputs(&output_num);

		for (auto i = 0; i < output_num; ++i, dsp_connection = nullptr)
		{
			dsp->getOutput(i, nullptr, &dsp_connection);

			if (!dsp_connection)
				continue;

			unregisterResource(dsp_connection, map_dsp_connections);
		}
	}

	g_fmod_last_result = dsp->disconnectAll(inputs >= 0.5, outputs >= 0.5);

	return 0;
}

func double fmod_dsp_disconnect_from_mutliplatform(double dsp_ref, double dsp_other_ref, double dsp_connection_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD::DSP* dsp_other = nullptr;
	if (dsp_other_ref == 0) {
		return fmod_dsp_disconnect_all(dsp_ref, 1, 1);
	}
	validate_fmod_dsp(dsp_other_ref, dsp_other);

	FMOD::DSPConnection* dsp_connection = nullptr;
	// A connection was specified validate it.
	if (dsp_connection_ref != 0) {
		validate_fmod_dsp_connection(dsp_connection_ref, dsp_connection);
		FMOD::DSP* dsp_check = nullptr;
		dsp_connection->getOutput(&dsp_check);

		FMOD::DSP* dsp_other_check = nullptr;
		dsp_connection->getInput(&dsp_other_check);

		if (dsp_check == dsp && dsp_other_check == dsp_other) {
			unregisterResource(dsp_connection, map_dsp_connections);
		}
	}
	else
	{
		// We will need to loop through all connections to unregister the correct ones
		int32_t input_num = 0;
		dsp->getNumInputs(&input_num);

		FMOD::DSP* it_dsp = nullptr;
		FMOD::DSPConnection* it_dsp_connection = nullptr;
		for (auto i = 0; i < input_num; ++i, it_dsp_connection = nullptr)
		{
			dsp->getInput(i, &it_dsp, &it_dsp_connection);
			if (it_dsp == dsp_other) {
				unregisterResource(it_dsp_connection, map_dsp_connections);
			}
		}
	}

	g_fmod_last_result = dsp->disconnectFrom(dsp_other, dsp_connection);

	return 0;
}

// Parameters

func double fmod_dsp_get_data_parameter_index(double dsp_ref, double data_type)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	int return_index;
	g_fmod_last_result = dsp->getDataParameterIndex((int)data_type, &return_index);

	return return_index;
}

func double fmod_dsp_get_num_parameters(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	int num;
	g_fmod_last_result = dsp->getNumParameters(&num);

	return num;
}

func double fmod_dsp_set_parameter_bool(double dsp_ref, double parameter_index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setParameterBool((int)parameter_index, value >= 0.5);

	return 0;
}

func double fmod_dsp_get_parameter_bool(double dsp_ref, double parameter_index)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	bool value;
	g_fmod_last_result = dsp->getParameterBool((int)parameter_index, &value, nullptr, 0);

	return value;
}

func double fmod_dsp_set_parameter_data_multiplatform(double dsp_ref, double parameter_index, char* buff, double length)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setParameterData((int)parameter_index, (void*)buff, (int)length);

	return 0;
}

template<typename T>
void writeDataToBuffer(char* buff, T data, int &offset) {
	constexpr size_t size = sizeof(T);
	memcpy(buff + offset, &data, size);
	offset += size;
}

func double fmod_dsp_get_parameter_data_multiplatform(double dsp_ref, double parameter_index, char* buff, double length)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	void* data;
	uint32_t data_length;
	g_fmod_last_result = dsp->getParameterData((int)parameter_index, &data, &data_length, nullptr, 0);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	// We will used the return value as a way to specify overflow
	// A return value != than 0 means that the input buffer needs to be resized
	if (data_length > (uint32_t)length) {
		return data_length;
	}

	FMOD_DSP_TYPE dsp_type;
	g_fmod_last_result = dsp->getType(&dsp_type);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	// We need to handle FFT manually (there are pointers involved)
	if (dsp_type == FMOD_DSP_TYPE::FMOD_DSP_TYPE_FFT && ((int)parameter_index == FMOD_DSP_FFT::FMOD_DSP_FFT_SPECTRUMDATA)) {

		int offset = 0, size = 0;
		FMOD_DSP_PARAMETER_FFT* fft = (FMOD_DSP_PARAMETER_FFT*)data;

		// Check the size required to write the data
		uint32_t required_size = sizeof(int) * 2 // For length and numchannels
                         + sizeof(float) * static_cast<unsigned long long>(fft->numchannels) * fft->length;
		if ((uint32_t)length < required_size)
			return required_size;

		// Write the length of the window (int)
		writeDataToBuffer(buff, fft->length, offset);

		// Write the number of channels (int)
		writeDataToBuffer(buff, fft->numchannels, offset);

		// Write the spectrum data (float[32][length])
		for (int channel_idx = 0; channel_idx < fft->numchannels; channel_idx++) {
			size = sizeof(float) * fft->length;
			memcpy(buff + offset, fft->spectrum[channel_idx], size);
			offset += size;
		}
		return 0;
	}
	
	// By default just copy the data
	memcpy(buff, data, data_length);

	return 0;
}

func double fmod_dsp_set_parameter_float(double dsp_ref, double parameter_index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setParameterFloat((int)parameter_index, (float)value);

	return 0;
}

func double fmod_dsp_get_parameter_float(double dsp_ref, double parameter_index)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	float value;
	g_fmod_last_result = dsp->getParameterFloat((int)parameter_index, &value, nullptr, 0);

	return (double)value;
}

func double fmod_dsp_set_parameter_int(double dsp_ref, double parameter_index, double value)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setParameterInt((int)parameter_index, (int)value);

	return 0;
}

func double fmod_dsp_get_parameter_int(double dsp_ref, double parameter_index)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	int value;
	g_fmod_last_result = dsp->getParameterInt((int)parameter_index, &value, nullptr, 0);

	return (double)value;
}

func double fmod_dsp_get_parameter_info_multiplatform(double dsp_ref, double parameter_index, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD_DSP_PARAMETER_DESC* info;

	g_fmod_last_result = dsp->getParameterInfo((int)parameter_index, &info);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};

	map_return.addKeyValue("type", (double)info->type);
	map_return.addKeyValue("name", (const char*)info->name);
	map_return.addKeyValue("label", (const char*)info->label);
	map_return.addKeyValue("description", (const char*)info->description);

	StructStream map_int = {};
	map_int.addKeyValue("default", (double)info->intdesc.defaultval);
	map_int.addKeyValue("max", (double)info->intdesc.max);
	map_int.addKeyValue("min", (double)info->intdesc.min);
	map_return.addKeyValue("int_value", map_int);

	StructStream map_float = {};
	map_float.addKeyValue("default", (double)info->floatdesc.defaultval);
	map_float.addKeyValue("max", (double)info->floatdesc.max);
	map_float.addKeyValue("min", (double)info->floatdesc.min);
	map_return.addKeyValue("float_value", map_float);

	StructStream map_bool = {};
	map_bool.addKeyValue("default", (double)info->booldesc.defaultval);
	map_return.addKeyValue("bool_value", map_bool);

	map_return.writeTo(buff_return);

	return 0;
}

// Channel format

func double fmod_dsp_set_channel_format(double dsp_ref, double channel_mask, double num_channels, double speaker_mode)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setChannelFormat((FMOD_CHANNELMASK)channel_mask, (int)num_channels, (FMOD_SPEAKERMODE)speaker_mode);

	return 0;
}

func double fmod_dsp_get_channel_format_multiplatform(double dsp_ref, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD_CHANNELMASK channel_mask;
	int num_channels;
	FMOD_SPEAKERMODE speaker_mode;

	g_fmod_last_result = dsp->getChannelFormat(&channel_mask, &num_channels, &speaker_mode);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("channel_mask", (double)channel_mask);
	map_return.addKeyValue("num_channels", num_channels);
	map_return.addKeyValue("speaker_mode", (double)speaker_mode);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_dsp_get_output_channel_format_multiplatform(double dsp_ref, char* buff_args, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	auto args = buffer_unpack((uint8_t*)buff_args);
	FMOD_CHANNELMASK channel_mask_in = YYGetUint32(args[0]);
	int num_channels_in = YYGetInt32(args[0]);
	FMOD_SPEAKERMODE speaker_mode_in = (FMOD_SPEAKERMODE)YYGetUint32(args[0]);

	FMOD_CHANNELMASK channel_mask_out;
	int num_channels_out;
	FMOD_SPEAKERMODE speaker_mode_out;

	g_fmod_last_result = dsp->getOutputChannelFormat(channel_mask_in, num_channels_in, speaker_mode_in, &channel_mask_out, &num_channels_out, &speaker_mode_out);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("channel_mask", (int)channel_mask_out);
	map_return.addKeyValue("num_channels", num_channels_out);
	map_return.addKeyValue("speaker_mode", (int)speaker_mode_out);

	map_return.writeTo(buff_return);

	return 0;
}

// Metering

StructStream FmodDspMeteringInfoToMap(const FMOD_DSP_METERING_INFO& info)
{
	StructStream map = {};

	map.addKeyValue("num_channels", info.numchannels);
	map.addKeyValue("num_samples", info.numsamples);

	ArrayStream vec_peaklevel(sizeof(info.peaklevel));
	ArrayStream vec_rmslevel(sizeof(info.rmslevel));
	for (int i = 0; i < 32; i++)
	{
		vec_peaklevel << info.peaklevel[i];
		vec_rmslevel << info.rmslevel[i];
	}
	map.addKeyValue("peak_level", vec_peaklevel);
	map.addKeyValue("rms_level", vec_rmslevel);

	return map;
}

func double fmod_dsp_get_metering_info_multiplatform(double dsp_ref, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD_DSP_METERING_INFO in, out;
	g_fmod_last_result = dsp->getMeteringInfo(&in, &out);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	StructStream map_in = FmodDspMeteringInfoToMap(in);
	StructStream map_out = FmodDspMeteringInfoToMap(out);

	map_return.addKeyValue("in", map_in);
	map_return.addKeyValue("out", map_out);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_dsp_set_metering_enabled(double dsp_ref, double enabled_in, double enabled_out)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setMeteringEnabled(enabled_in >= 0.5, enabled_out >= 0.5);
	return 0;
}

func double fmod_dsp_get_metering_enabled_multiplatform(double dsp_ref, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	bool enabled_in;
	bool enabled_out;
	g_fmod_last_result = dsp->getMeteringEnabled(&enabled_in, &enabled_out);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("enabled_in ", enabled_in);
	map_return.addKeyValue("enabled_out", enabled_out);

	map_return.writeTo(buff_return);

	return 0;
}

// Processing

func double fmod_dsp_set_active(double dsp_ref, double active)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setActive(active >= 0.5);

	return 0;
}

func double fmod_dsp_get_active(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	bool active;
	g_fmod_last_result = dsp->getActive(&active);

	return active ? 1.0 : 0.0;
}

func double fmod_dsp_set_bypass(double dsp_ref, double bypass)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setBypass(bypass >= 0.5);

	return 0;
}

func double fmod_dsp_get_bypass(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	bool bypass;
	g_fmod_last_result = dsp->getBypass(&bypass);

	return bypass ? 1.0 : 0.0;
}

func double fmod_dsp_set_wet_dry_mix(double dsp_ref, double prewet, double postwet, double dry)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setWetDryMix((float)prewet, (float)postwet, (float)dry);

	return 0;
}

func double fmod_dsp_get_wet_dry_mix_multiplatform(double dsp_ref, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	float prewet;
	float postwet;
	float dry;
	g_fmod_last_result = dsp->getWetDryMix(&prewet, &postwet, &dry);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("pre_wet", prewet);
	map_return.addKeyValue("post_wet", postwet);
	map_return.addKeyValue("dry", dry);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_dsp_get_idle(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	bool idle;
	g_fmod_last_result = dsp->getIdle(&idle);

	return idle ? 1.0 : 0.0;
}

// General

// func double fmod_dsp_show_config_dialog(double dsp_ref) // IGNORE

func double fmod_dsp_reset(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->reset();

	return 0;
}

func double fmod_dsp_release(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD::DSPConnection* dsp_connection = nullptr;

	int32_t inputs = 0;
	dsp->getNumInputs(&inputs);

	// Unlink inputs
	for (auto i = 0; i < inputs; ++i, dsp_connection = nullptr)
	{
		dsp->getInput(i, nullptr, &dsp_connection);

		if (!dsp_connection)
			continue;

		unregisterResource(dsp_connection, map_dsp_connections);
	}

	int32_t outputs = 0;
	dsp->getNumOutputs(&outputs);

	// Unlink outputs
	for (auto i = 0; i < outputs; ++i, dsp_connection = nullptr)
	{
		dsp->getOutput(i, nullptr, &dsp_connection);

		if (!dsp_connection)
			continue;

		unregisterResource(dsp_connection, map_dsp_connections);
	}

	unregisterResource(dsp, map_dsps);

	g_fmod_last_result = dsp->release();

	return 0;
}

func double fmod_dsp_get_type(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD_DSP_TYPE type;
	g_fmod_last_result = dsp->getType(&type);

	return (int)type;
}

func double fmod_dsp_get_info_multiplatform(double dsp_ref, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	char name[100]{};
	unsigned int version;
	int channels;
	int configwidth;
	int configheight;

	g_fmod_last_result = dsp->getInfo(name, &version, &channels, &configwidth, &configheight);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("name", name);
	map_return.addKeyValue("version", (int)version);
	map_return.addKeyValue("channels", channels);
	map_return.addKeyValue("config_width", configwidth);
	map_return.addKeyValue("config_height", configheight);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_dsp_get_cpu_usage_multiplatform(double dsp_ref, char* buff_return)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	unsigned int exclusive;
	unsigned int inclusive;
	g_fmod_last_result = dsp->getCPUUsage(&exclusive, &inclusive);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("exclusive", (int)exclusive);
	map_return.addKeyValue("inclusive", (int)inclusive);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_dsp_set_user_data(double dsp_ref, double data) {
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	setCustomUserData(dsp, data);
	return 0;
}

func double fmod_dsp_get_user_data(double dsp_ref) {
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	return getCustomUserData(dsp);
}

static FMOD_RESULT CALLBACK_fmod_dsp(FMOD_DSP* fmod_dsp, FMOD_DSP_CALLBACK_TYPE type, void* data)
{
	StructStream async_map = {};

	FMOD::DSP* dsp = (FMOD::DSP*)fmod_dsp;

	async_map.addKeyValue("type", "fmod_dsp_set_callback");
	async_map.addKeyValue("kind", (int)type);

	uint32_t dsp_id = registerOrFindResource(dsp, index_dsps, map_dsps);
	async_map.addKeyValue("dsp_ref", packIndexIntoRef(dsp_id, GM_FMOD_TYPE_DSP));

	switch (type)
	{
		case FMOD_DSP_CALLBACK_DATAPARAMETERRELEASE:
		{
			FMOD_DSP_DATA_PARAMETER_INFO* parameter_info = (FMOD_DSP_DATA_PARAMETER_INFO*)data;
			async_map.addKeyValue( "parameter_index", parameter_info->index );
			// paramter_info->data;	// ignore..
			// paramter_info->length;	// ignore...
			break;
		}
		default:
			break;
	}

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_dsp_set_callback(double dsp_ref)
{
	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	g_fmod_last_result = dsp->setCallback(CALLBACK_fmod_dsp);

	return 0;
}

func double fmod_dsp_get_system_object(double dsp_ref) {

	FMOD::DSP* dsp = nullptr;
	validate_fmod_dsp(dsp_ref, dsp);

	FMOD::System* fmod_system = nullptr;
	g_fmod_last_result = dsp->getSystemObject(&fmod_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto system_id = registerOrFindResource(fmod_system, index_systems, map_systems);

	return (double)packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
}

