#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanAudio
struct  LeanAudio_t3403930608  : public Il2CppObject
{
public:

public:
};

struct LeanAudio_t3403930608_StaticFields
{
public:
	// System.Single LeanAudio::MIN_FREQEUNCY_PERIOD
	float ___MIN_FREQEUNCY_PERIOD_0;
	// System.Int32 LeanAudio::PROCESSING_ITERATIONS_MAX
	int32_t ___PROCESSING_ITERATIONS_MAX_1;
	// System.Single[] LeanAudio::generatedWaveDistances
	SingleU5BU5D_t2316563989* ___generatedWaveDistances_2;
	// System.Int32 LeanAudio::generatedWaveDistancesCount
	int32_t ___generatedWaveDistancesCount_3;
	// System.Single[] LeanAudio::longList
	SingleU5BU5D_t2316563989* ___longList_4;

public:
	inline static int32_t get_offset_of_MIN_FREQEUNCY_PERIOD_0() { return static_cast<int32_t>(offsetof(LeanAudio_t3403930608_StaticFields, ___MIN_FREQEUNCY_PERIOD_0)); }
	inline float get_MIN_FREQEUNCY_PERIOD_0() const { return ___MIN_FREQEUNCY_PERIOD_0; }
	inline float* get_address_of_MIN_FREQEUNCY_PERIOD_0() { return &___MIN_FREQEUNCY_PERIOD_0; }
	inline void set_MIN_FREQEUNCY_PERIOD_0(float value)
	{
		___MIN_FREQEUNCY_PERIOD_0 = value;
	}

	inline static int32_t get_offset_of_PROCESSING_ITERATIONS_MAX_1() { return static_cast<int32_t>(offsetof(LeanAudio_t3403930608_StaticFields, ___PROCESSING_ITERATIONS_MAX_1)); }
	inline int32_t get_PROCESSING_ITERATIONS_MAX_1() const { return ___PROCESSING_ITERATIONS_MAX_1; }
	inline int32_t* get_address_of_PROCESSING_ITERATIONS_MAX_1() { return &___PROCESSING_ITERATIONS_MAX_1; }
	inline void set_PROCESSING_ITERATIONS_MAX_1(int32_t value)
	{
		___PROCESSING_ITERATIONS_MAX_1 = value;
	}

	inline static int32_t get_offset_of_generatedWaveDistances_2() { return static_cast<int32_t>(offsetof(LeanAudio_t3403930608_StaticFields, ___generatedWaveDistances_2)); }
	inline SingleU5BU5D_t2316563989* get_generatedWaveDistances_2() const { return ___generatedWaveDistances_2; }
	inline SingleU5BU5D_t2316563989** get_address_of_generatedWaveDistances_2() { return &___generatedWaveDistances_2; }
	inline void set_generatedWaveDistances_2(SingleU5BU5D_t2316563989* value)
	{
		___generatedWaveDistances_2 = value;
		Il2CppCodeGenWriteBarrier(&___generatedWaveDistances_2, value);
	}

	inline static int32_t get_offset_of_generatedWaveDistancesCount_3() { return static_cast<int32_t>(offsetof(LeanAudio_t3403930608_StaticFields, ___generatedWaveDistancesCount_3)); }
	inline int32_t get_generatedWaveDistancesCount_3() const { return ___generatedWaveDistancesCount_3; }
	inline int32_t* get_address_of_generatedWaveDistancesCount_3() { return &___generatedWaveDistancesCount_3; }
	inline void set_generatedWaveDistancesCount_3(int32_t value)
	{
		___generatedWaveDistancesCount_3 = value;
	}

	inline static int32_t get_offset_of_longList_4() { return static_cast<int32_t>(offsetof(LeanAudio_t3403930608_StaticFields, ___longList_4)); }
	inline SingleU5BU5D_t2316563989* get_longList_4() const { return ___longList_4; }
	inline SingleU5BU5D_t2316563989** get_address_of_longList_4() { return &___longList_4; }
	inline void set_longList_4(SingleU5BU5D_t2316563989* value)
	{
		___longList_4 = value;
		Il2CppCodeGenWriteBarrier(&___longList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
