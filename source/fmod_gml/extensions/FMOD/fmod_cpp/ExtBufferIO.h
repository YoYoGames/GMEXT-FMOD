#pragma once

#include <stdint.h>
#include <cstdarg>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#define LOG(tag, format, ...)                                  \
	{                                                          \
		char temp[1024]{};                                     \
		snprintf(temp, sizeof(temp), (format), ##__VA_ARGS__); \
		printf("[%s] %s :: %s\n", tag, __FUNCTION__, temp);    \
		fflush(stdout);                                        \
	}

#define LOG_ERROR(format, ...) LOG("ERROR", format, ##__VA_ARGS__);
#define LOG_INFO(format, ...) LOG("INFO", format, ##__VA_ARGS__);
#define LOG_WARNING(format, ...) LOG("WARNING", format, ##__VA_ARGS__);
#define LOG_DEBUG(format, ...) LOG("DEBUG", format, ##__VA_ARGS__);

enum class GMValueType : uint8_t
{
	UInt8 = 1,
	Int8 = 2,
	UInt16 = 3,
	Int16 = 4,
	UInt32 = 5,
	Int32 = 6,
	UInt64 = 12,
	Float16 = 7,
	Float = 8,
	Double = 9,
	Bool = 10,
	String = 11,
	Text = 13,

	TypedArray = 250,
	Undefined = 251,
	Pointer = 252,
	Buffer = 253,
	Array = 254,
	Struct = 255
};

// Utility structure to create a dependent false value
template <typename T>
struct dependent_false : std::false_type {};

class ISerializable {
public:
	virtual void serializeTo(std::vector<std::byte>& buffer) const = 0;
	virtual ~ISerializable() = default;
};

class SerializationUtils {
public:
	template <typename T>
	static inline void serializeNumber(std::vector<std::byte>& buffer, T input) {
		static_assert(std::is_arithmetic_v<T>, "serializeNumber only supports arithmetic types.");
		auto bytePtr = reinterpret_cast<const std::byte*>(&input);
		buffer.insert(buffer.end(), bytePtr, bytePtr + sizeof(T));
	}

	template <typename T>
	static inline void serializeEnumerator(std::vector<std::byte>& buffer, T input) {
		static_assert(std::is_enum_v<T>, "serializeEnumerator only supports enums."); 
		auto bytePtr = reinterpret_cast<const std::byte*>(&input);
		buffer.insert(buffer.end(), bytePtr, bytePtr + sizeof(T));
	}

	static inline void serializeBool(std::vector<std::byte>& buffer, bool input) {
		std::byte byteValue = input ? std::byte(1) : std::byte(0);
		buffer.push_back(byteValue);
	}

	static inline void serializeString(std::vector<std::byte>& buffer, const char* input) {
		std::size_t len = std::strlen(input);
		buffer.insert(buffer.end(), reinterpret_cast<const std::byte*>(input), reinterpret_cast<const std::byte*>(input + len));
		buffer.push_back(std::byte('\0'));  // Null-terminate
	}

	static inline void serializeISerializable(std::vector<std::byte>& buffer, const ISerializable& serializable) {
		serializable.serializeTo(buffer);
	}

	template <typename T>
	static inline GMValueType getGMValueType() {
		if constexpr (std::is_same_v<T, uint8_t>)
		{
			return GMValueType::UInt8;
		}
		else if constexpr (std::is_same_v<T, int8_t>)
		{
			return GMValueType::Int8;
		}
		else if constexpr (std::is_same_v<T, uint16_t>)
		{
			return GMValueType::UInt16;
		}
		else if constexpr (std::is_same_v<T, int16_t>)
		{
			return GMValueType::Int16;
		}
		else if constexpr (std::is_same_v<T, uint32_t>)
		{
			return GMValueType::UInt32;
		}
		else if constexpr (std::is_same_v<T, int32_t>)
		{
			return GMValueType::Int32;
		}
		else if constexpr (std::is_same_v<T, uint64_t>)
		{
			return GMValueType::UInt64;
		}
		else if constexpr (std::is_same_v<T, float>)
		{
			return GMValueType::Float;
		}
		else if constexpr (std::is_same_v<T, double>)
		{
			return GMValueType::Double;
		}
		else if constexpr (std::is_same_v<T, bool>)
		{
			return GMValueType::Bool;
		}
		else if constexpr (std::is_convertible_v<T, std::string>)
		{
			return GMValueType::String;
		}
		else {
			static_assert(dependent_false<T>::value, "Unsupported type for serialization.");
		}
	}

	template <typename T>
	static inline void serializeType(std::vector<std::byte>& buffer) {
		serializeEnumerator(buffer, getGMValueType<T>());
	}

	template <typename T>
	static inline void serialize(std::vector<std::byte>& buffer, const T& input) {
		if constexpr (std::is_arithmetic_v<T>) {
			serializeNumber(buffer, input);
		}
		else if constexpr (std::is_enum_v<T>) {
			serializeEnumerator(buffer, input);
		}
		else if constexpr (std::is_same_v<T, bool>) {
			serializeBool(buffer, input);
		}
		else if constexpr (std::is_same_v<T, const char*> || (std::is_array_v<T> && std::is_same_v<std::remove_extent_t<T>, char>)) {
			// Handles both const char* and C-style strings
			serializeString(buffer, input);
		}
		else if constexpr (std::is_same_v<T, std::string>) {
			serializeString(buffer, input.c_str());
		}
		else if constexpr (std::is_base_of_v<ISerializable, T>) {
			serializeISerializable(buffer, input);
		}
		else {
			static_assert(dependent_false<T>::value, "Unsupported type for serialization.");
		}
	}
};

class DataStream : public ISerializable {
private:
	std::vector<std::byte> buffer;

protected:
	void serializeTo(std::vector<std::byte>& buffer) const override {
		const auto& internalBuffer = getBuffer();
		buffer.insert(buffer.end(), internalBuffer.begin(), internalBuffer.end());
	}

public:
	explicit DataStream(size_t reserveSize) {
		buffer.reserve(reserveSize);
	}

	DataStream() : DataStream(512) {}  // Delegating to the other constructor

	template <typename T>
	DataStream& operator<<(const T& value) {
		static_assert(std::is_arithmetic_v<T> || std::is_same_v<T, bool> || std::is_convertible_v<T, std::string> || std::is_base_of_v<ISerializable, T>, "DataStream only supports arithmetic types, enums, strings and ISerializable classes.");
		if constexpr (!std::is_base_of_v<ISerializable, T>) {
			SerializationUtils::serializeType<T>(buffer); 
		}
		SerializationUtils::serialize(buffer, value);
		return *this;
	}

	// Access to internal buffer if needed
	const std::vector<std::byte>& getBuffer() const { return buffer; }

	virtual void clear() { buffer.clear(); }

	virtual void writeTo(char* output) const {
		// Calculate the size to copy (in bytes)
		size_t sizeToCopy = buffer.size() * sizeof(std::byte);

		// Copy the vector contents to the destination pointer
		std::memcpy(output, buffer.data(), sizeToCopy);
	}
};

class CollectionStream : public DataStream {
private:
	uint16_t length = 0;

protected:
	explicit CollectionStream(size_t reserveSize) : DataStream(reserveSize) {
		// Additional initialization as needed
	}

	void updateLength() {
		++length;
	}

	const uint16_t getLength() const { return length; }

public:
	void clear() override 
	{
		length = 0;
		DataStream::clear();
	}
};

class ArrayStream : public CollectionStream {
protected:
	void serializeTo(std::vector<std::byte>& buffer) const override {
		SerializationUtils::serializeEnumerator(buffer, GMValueType::Array);
		SerializationUtils::serializeNumber(buffer, getLength());
		DataStream::serializeTo(buffer);
	}

public:
	explicit ArrayStream(size_t reserveSize) : CollectionStream(reserveSize) {
		// Additional initialization as needed
	}

	ArrayStream() : ArrayStream(512) {}  // Delegating to the other constructor

	template <typename T>
	ArrayStream& operator<<(const T& value) {
		updateLength();
		DataStream::operator<<(value);
		return *this;
	}

	void writeTo(char* output) const override {
		if (output == nullptr) {
			return;
		}

		// Write 1 byte with the value enum GMValueType::Array
		*output = static_cast<char>(GMValueType::Array);
		output += sizeof(GMValueType);

		// Write uint16_t length value
		uint16_t length = getLength();
		std::memcpy(output, &length, sizeof(length));
		output += sizeof(length);

		// Call base class writeTo with the updated output pointer
		DataStream::writeTo(output);
	}
};

class StructStream : public CollectionStream {
protected:
	void serializeTo(std::vector<std::byte>& buffer) const override {
		SerializationUtils::serializeEnumerator(buffer, GMValueType::Struct);
		SerializationUtils::serializeNumber(buffer, getLength());
		DataStream::serializeTo(buffer);
	}

public:
	explicit StructStream(size_t reserveSize) : CollectionStream(reserveSize) {
		// Additional initialization as needed
	}

	StructStream() : StructStream(512) {}  // Delegating to the other constructor

	template <typename T>
	void addKeyValue(const char* key, const T& value) {
		updateLength();
		DataStream::operator<<(key);
		DataStream::operator<<(value);
	}

	template <typename T>
	StructStream& operator<<(const std::pair<const char*, const T&>& pair) {
		addKeyValue(pair.first, pair.second);
		return *this;
	}

	void writeTo(char* output) const override {
		if (output == nullptr) {
			return;
		}

		// Write 1 byte with the value enum GMValueType::Struct
		*output = static_cast<char>(GMValueType::Struct);
		output += sizeof(GMValueType);

		// Write uint16_t length value
		uint16_t length = getLength();
		std::memcpy(output, &length, sizeof(length));
		output += sizeof(length);

		// Call base class writeTo with the updated output pointer
		DataStream::writeTo(output);
	}
};

template <typename T>
class TypedArrayStream : public CollectionStream {
	static_assert(std::is_arithmetic_v<T> || std::is_same_v<T, bool> || std::is_same_v<T, const char*>, "CollectionStream only supports arithmetic types, enums and strings");
protected:
	void serializeTo(std::vector<std::byte>& buffer) const override {
		SerializationUtils::serializeEnumerator(buffer, GMValueType::TypedArray);
		SerializationUtils::serializeNumber(buffer, getLength());
		SerializationUtils::serializeType<T>(buffer);
		DataStream::serializeTo(buffer);
	}

public:
	explicit TypedArrayStream(size_t reserveSize = 512) : CollectionStream(reserveSize) {
		// Additional initialization as needed
	}

	TypedArrayStream() : TypedArrayStream(512) {}  // Delegating to the other constructor


	TypedArrayStream& operator<<(const T& value) {
		updateLength();
		// Serialize just the value as type information is homogeneous
		if constexpr (std::is_arithmetic<T>::value || std::is_enum<T>::value) {
			SerializationUtils::serializeNumber(getBuffer(), value);
		}
		else if constexpr (std::is_same_v<T, bool>) {
			SerializationUtils::serializeBool(getBuffer(), value);
		}
		else if constexpr (std::is_same_v<T, const char*> || std::is_same_v<T, char*>) {
			SerializationUtils::serializeString(getBuffer(), value);
		}
		return *this;
	}

	void writeTo(char* output) const override {
		if (output == nullptr) {
			return;
		}

		// Write 1 byte with the value enum GMValueType::TypedArray
		*output = static_cast<char>(GMValueType::TypedArray);
		output += sizeof(GMValueType);

		// Write uint16_t length value
		uint16_t length = getLength();
		std::memcpy(output, &length, sizeof(length));
		output += sizeof(length);

		// Write 1 byte with the T converted to enum GMValueType
		std::memcpy(output, &length, SerializationUtils::getGMValueType<T>());
		output += sizeof(GMValueType);

		// Call base class writeTo with the updated output pointer
		DataStream::writeTo(output);
	}
};

void trace(const char* function, const char* format, ...);

// Define a macro to call Trace with __FUNCTION__
#define TRACE(format, ...) trace(__FUNCTION__, format, ##__VA_ARGS__)

GMValueType YYGetKind(const uint8_t* buff);
uint8_t YYGetUint8(const uint8_t* buff);
int8_t YYGetInt8(const uint8_t* buff);
uint16_t YYGetUint16(const uint8_t* buff);
int16_t YYGetInt16(const uint8_t* buff);
uint32_t YYGetUint32(const uint8_t* buff);
int32_t YYGetInt32(const uint8_t* buff);
uint64_t YYGetUint64(const uint8_t* buff);
float YYGetFloat(const uint8_t* buff);
double YYGetReal(const uint8_t* buff);
bool YYGetBool(const uint8_t* buff);
const char* YYGetString(const uint8_t* buff);
void* YYGetPointer(const uint8_t* buff);
void* YYGetBuffer(const uint8_t* buff, uint32_t& length);
std::vector<const uint8_t*> YYGetArray(const uint8_t* buff);
std::map<std::string, const uint8_t*> YYGetStruct(const uint8_t* buff);

std::vector<const uint8_t*> buffer_unpack(const uint8_t* buff);

void printBufferHex(const void* buffer, size_t length);
