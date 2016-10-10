#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Devices.Display.DisplayDevice
struct  DisplayDevice_t2746177942  : public ScriptableObject_t2970544072
{
public:
	// System.String TouchScript.Devices.Display.DisplayDevice::name
	String_t* ___name_2;
	// System.Single TouchScript.Devices.Display.DisplayDevice::dpi
	float ___dpi_3;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DisplayDevice_t2746177942, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_dpi_3() { return static_cast<int32_t>(offsetof(DisplayDevice_t2746177942, ___dpi_3)); }
	inline float get_dpi_3() const { return ___dpi_3; }
	inline float* get_address_of_dpi_3() { return &___dpi_3; }
	inline void set_dpi_3(float value)
	{
		___dpi_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
