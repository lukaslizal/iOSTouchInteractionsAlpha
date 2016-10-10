#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapBreaker
struct  TapBreaker_t875268329  : public MonoBehaviour_t667441552
{
public:
	// System.Single TapBreaker::power
	float ___power_2;
	// UnityEngine.Vector3[] TapBreaker::directions
	Vector3U5BU5D_t215400611* ___directions_3;

public:
	inline static int32_t get_offset_of_power_2() { return static_cast<int32_t>(offsetof(TapBreaker_t875268329, ___power_2)); }
	inline float get_power_2() const { return ___power_2; }
	inline float* get_address_of_power_2() { return &___power_2; }
	inline void set_power_2(float value)
	{
		___power_2 = value;
	}

	inline static int32_t get_offset_of_directions_3() { return static_cast<int32_t>(offsetof(TapBreaker_t875268329, ___directions_3)); }
	inline Vector3U5BU5D_t215400611* get_directions_3() const { return ___directions_3; }
	inline Vector3U5BU5D_t215400611** get_address_of_directions_3() { return &___directions_3; }
	inline void set_directions_3(Vector3U5BU5D_t215400611* value)
	{
		___directions_3 = value;
		Il2CppCodeGenWriteBarrier(&___directions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
