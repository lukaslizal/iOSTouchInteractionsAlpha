#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Interval
struct  Interval_t635062501  : public MonoBehaviour_t667441552
{
public:
	// System.Single Interval::start
	float ___start_2;
	// System.Single Interval::end
	float ___end_3;
	// System.Single Interval::center
	float ___center_4;
	// System.Single Interval::reach
	float ___reach_5;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(Interval_t635062501, ___start_2)); }
	inline float get_start_2() const { return ___start_2; }
	inline float* get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(float value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(Interval_t635062501, ___end_3)); }
	inline float get_end_3() const { return ___end_3; }
	inline float* get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(float value)
	{
		___end_3 = value;
	}

	inline static int32_t get_offset_of_center_4() { return static_cast<int32_t>(offsetof(Interval_t635062501, ___center_4)); }
	inline float get_center_4() const { return ___center_4; }
	inline float* get_address_of_center_4() { return &___center_4; }
	inline void set_center_4(float value)
	{
		___center_4 = value;
	}

	inline static int32_t get_offset_of_reach_5() { return static_cast<int32_t>(offsetof(Interval_t635062501, ___reach_5)); }
	inline float get_reach_5() const { return ___reach_5; }
	inline float* get_address_of_reach_5() { return &___reach_5; }
	inline void set_reach_5(float value)
	{
		___reach_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
