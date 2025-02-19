#include "ExtBufferIO.h"

void trace(const char* function, const char* format, ...)
{
	va_list args;
	va_start(args, format);
	printf("%s :: ", function);
	vprintf(format, args);
	printf("\n");
	va_end(args);
	fflush(stdout);
}

static bool isNumber(GMValueType kind) {
	switch (kind) {
	case GMValueType::UInt8:
	case GMValueType::Int8:
	case GMValueType::UInt16:
	case GMValueType::Int16:
	case GMValueType::UInt32:
	case GMValueType::Int32:
	case GMValueType::UInt64:
	case GMValueType::Float16:
	case GMValueType::Float:
	case GMValueType::Double:
		return true; // These are all supported arithmetic types
	default:
		return false; // Other values are not supported arithmetic types
	}
}

template <typename T>
T deserializeNumber(const uint8_t* buffer) {
	static_assert(std::is_arithmetic<T>::value, "T must be an arithmetic type.");

	T value{};
	// Directly copy the bytes from buffer to value without reversing the byte order
	std::memcpy(&value, buffer, sizeof(T));

	return value;
}

template <typename T>
T YYGetNumber(const uint8_t* buff) {
	static_assert(std::is_arithmetic<T>::value, "T must be a numeric type");

	GMValueType kind = YYGetKind(buff);
	size_t offset = sizeof(kind); 

	// Ensure that the buffer's kind matches the requested type (or casting is allowed)
	if (!isNumber(kind)) {
		LOG_ERROR("Invalid argument type; expected %s or compatible.", typeid(T).name());
		return T();
	}

	// Deserialize based on actual type and then cast to T
	switch (kind) {
	case GMValueType::UInt8:
		return static_cast<T>(deserializeNumber<uint8_t>(buff + offset));
	case GMValueType::Int8:
		return static_cast<T>(deserializeNumber<int8_t>(buff + offset));
	case GMValueType::UInt16:
		return static_cast<T>(deserializeNumber<uint16_t>(buff + offset));
	case GMValueType::Int16:
		return static_cast<T>(deserializeNumber<int16_t>(buff + offset));
	case GMValueType::UInt32:
		return static_cast<T>(deserializeNumber<uint32_t>(buff + offset));
	case GMValueType::Int32:
		return static_cast<T>(deserializeNumber<int32_t>(buff + offset));
	case GMValueType::UInt64:
		return static_cast<T>(deserializeNumber<uint64_t>(buff + offset)); 
	case GMValueType::Float:
		return static_cast<T>(deserializeNumber<float>(buff + offset));
	case GMValueType::Double:
		return static_cast<T>(deserializeNumber<double>(buff + offset)); 
	default:
		LOG_ERROR("Unsupported or mismatched type.");
		return T();
	}
}

GMValueType YYGetKind(const uint8_t* buff)
{
	uint8_t value = (uint8_t)buff[0];
	return (GMValueType)value;
}

uint8_t YYGetUint8(const uint8_t* buff)
{
	return YYGetNumber<uint8_t>(buff);
}

int8_t YYGetInt8(const uint8_t* buff)
{
	return YYGetNumber<int8_t>(buff);
}

uint16_t YYGetUint16(const uint8_t* buff)
{
	return YYGetNumber<uint16_t>(buff);
}

int16_t YYGetInt16(const uint8_t* buff)
{
	return YYGetNumber<int16_t>(buff);
}

uint32_t YYGetUint32(const uint8_t* buff)
{
	return YYGetNumber<uint32_t>(buff);
}

int32_t YYGetInt32(const uint8_t* buff)
{
	return YYGetNumber<int32_t>(buff);
}

uint64_t YYGetUint64(const uint8_t* buff)
{
	return YYGetNumber<uint64_t>(buff);
}

float YYGetFloat(const uint8_t* buff)
{
	return YYGetNumber<float>(buff);
}

double YYGetReal(const uint8_t* buff)
{
	return YYGetNumber<double>(buff);
}

bool YYGetBool(const uint8_t* buff)
{
	GMValueType kind = YYGetKind(buff);
	if (kind == GMValueType::Bool)
	{
		return (bool)buff[1];
	}
	return YYGetNumber<double>(buff);
}

const char* YYGetString(const uint8_t* buff)
{
	GMValueType kind = YYGetKind(buff);
	if (kind == GMValueType::String)
	{
		return (char*)&buff[1];
	}
	else if (kind == GMValueType::Pointer)
	{
		return (const char*)YYGetPointer(buff);
	}
	LOG_ERROR("Invalid argument type; expected string.");
	return nullptr;
}

void* YYGetPointer(const uint8_t* buff)
{
	if (YYGetKind(buff) != GMValueType::Pointer)
	{
		LOG_ERROR("Invalid argument type; expected pointer.");
		return nullptr;
	}
	size_t offset = sizeof(GMValueType);
	uint64_t addr = deserializeNumber<uint64_t>(buff + offset);

	return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

void* YYGetBuffer(const uint8_t* buff, uint32_t& length)
{
	if (YYGetKind(buff) != GMValueType::Buffer)
	{
		LOG_ERROR("Invalid argument type; expected pointer.");
		return nullptr;
	}
	size_t offset = sizeof(GMValueType);
	length = deserializeNumber<uint32_t>(buff + offset);
	offset += sizeof(length);
	uint64_t addr = deserializeNumber<uint64_t>(buff + offset);

	return reinterpret_cast<void*>(addr);
}

void buffer_unpack_value(const uint8_t* buff, size_t& index);

static std::map<std::string, const uint8_t*> buffer_unpack_struct(const uint8_t* buff, size_t& index)
{
	std::map<std::string, const uint8_t*> output;

	// Read a u16 for length and skip the index (2 bytes)
	uint16_t size = deserializeNumber<uint16_t>(&buff[index]);
	index += sizeof(size);

	for (int i = 0; i < size; i++)
	{
		// Read a string for key and skip the index (strlen + 1)
		const char* key = (char*)&buff[index];
		index += strlen(key) + 1;

		const uint8_t* value_address = &buff[index];

		buffer_unpack_value(buff, index);

		output.insert({ key, value_address });
	}
	return output;
}

std::map<std::string, const uint8_t*> YYGetStruct(const uint8_t* buff)
{
	if (YYGetKind(buff) != GMValueType::Struct)
	{
		LOG_ERROR("Invalid argument type; expected struct.");
		return {};
	}
	size_t offset = sizeof(GMValueType);
	return buffer_unpack_struct(buff, offset);
}

static std::vector<const uint8_t*> buffer_unpack_array(const uint8_t* buff, size_t& index)
{
	std::vector<const uint8_t*> output;

	// Read a u16 for length and skip the index (2 bytes)
	uint16_t size = deserializeNumber<uint16_t>(&buff[index]);
	index += sizeof(size);

	output.reserve(size);
	for (int i = 0; i < size; i++)
	{
		const uint8_t* value_address = &buff[index];

		buffer_unpack_value(buff, index);

		output.push_back(value_address);
	}

	return output;
}

std::vector<const uint8_t*> YYGetArray(const uint8_t* buff)
{
	if (YYGetKind(buff) != GMValueType::Array)
	{
		LOG_ERROR("Invalid argument type; expected array.");
		return {};
	}
	size_t offset = sizeof(GMValueType);
	return buffer_unpack_array(buff, offset);
}

void buffer_unpack_value(const uint8_t* buff, size_t& index)
{
	GMValueType kind = YYGetKind(&buff[index]);
	index += sizeof(kind);

	switch (kind)
	{
		case GMValueType::UInt8:
		case GMValueType::Int8:
		{
			index++;
		}
		break;

		case GMValueType::UInt16:
		case GMValueType::Int16:
		{
			index += 2;
		}
		break;

		case GMValueType::UInt32:
		case GMValueType::Int32:
		case GMValueType::Float:
		{
			index += 4;
		}
		break;

		case GMValueType::UInt64:
		case GMValueType::Double:
		{
			index += 8;
		}
		break;

		case GMValueType::Bool:
		{
			index += 1;
		}
		break;

		case GMValueType::String:
		{
			index += strlen((const char*)&buff[index]) + 1;
		}
		break;

		case GMValueType::Pointer:
		{
			index += 8;	 // address
		}
		break;

		case GMValueType::Buffer:
		{
			index += 4;	 // length
			index += 8;	 // address
		}
		break;

		case GMValueType::Array:
		{
			buffer_unpack_array(buff, index);
		}
		break;

		case GMValueType::Struct:
		{
			buffer_unpack_struct(buff, index);
		}
		break;

		default:
			LOG_ERROR("Unpacking unsupported type: %d", (int)kind);
			break;
	}
}

std::vector<const uint8_t*> buffer_unpack(const uint8_t* buff)
{
	size_t index = 0;
	return buffer_unpack_array(buff, index);
}

void printBufferHex(const void* buffer, size_t length)
{
	const uint8_t* byteBuffer = static_cast<const uint8_t*>(buffer);

	std::cout << std::hex << std::setfill('0');
	for (size_t i = 0; i < length; ++i)
	{
		std::cout << std::setw(2) << static_cast<unsigned>(byteBuffer[i]);
		if (i < length - 1)
		{
			std::cout << " ";
		}
	}
	std::cout << std::dec << std::endl;	 // Switch back to decimal output
}
