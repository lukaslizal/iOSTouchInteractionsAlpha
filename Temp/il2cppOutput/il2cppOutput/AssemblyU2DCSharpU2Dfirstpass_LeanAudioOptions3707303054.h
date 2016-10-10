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
// LeanAudioStream
struct LeanAudioStream_t4117062544;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LeanAudioOptions_Lea1045997385.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanAudioOptions
struct  LeanAudioOptions_t3707303054  : public Il2CppObject
{
public:
	// LeanAudioOptions/LeanAudioWaveStyle LeanAudioOptions::waveStyle
	int32_t ___waveStyle_0;
	// UnityEngine.Vector3[] LeanAudioOptions::vibrato
	Vector3U5BU5D_t215400611* ___vibrato_1;
	// UnityEngine.Vector3[] LeanAudioOptions::modulation
	Vector3U5BU5D_t215400611* ___modulation_2;
	// System.Int32 LeanAudioOptions::frequencyRate
	int32_t ___frequencyRate_3;
	// System.Single LeanAudioOptions::waveNoiseScale
	float ___waveNoiseScale_4;
	// System.Single LeanAudioOptions::waveNoiseInfluence
	float ___waveNoiseInfluence_5;
	// System.Boolean LeanAudioOptions::useSetData
	bool ___useSetData_6;
	// LeanAudioStream LeanAudioOptions::stream
	LeanAudioStream_t4117062544 * ___stream_7;

public:
	inline static int32_t get_offset_of_waveStyle_0() { return static_cast<int32_t>(offsetof(LeanAudioOptions_t3707303054, ___waveStyle_0)); }
	inline int32_t get_waveStyle_0() const { return ___waveStyle_0; }
	inline int32_t* get_address_of_waveStyle_0() { return &___waveStyle_0; }
	inline void set_waveStyle_0(int32_t value)
	{
		___waveStyle_0 = value;
	}

	inline static int32_t get_offset_of_vibrato_1() { return static_cast<int32_t>(offsetof(LeanAudioOptions_t3707303054, ___vibrato_1)); }
	inline Vector3U5BU5D_t215400611* get_vibrato_1() const { return ___vibrato_1; }
	inline Vector3U5BU5D_t215400611** get_address_of_vibrato_1() { return &___vibrato_1; }
	inline void set_vibrato_1(Vector3U5BU5D_t215400611* value)
	{
		___vibrato_1 = value;
		Il2CppCodeGenWriteBarrier(&___vibrato_1, value);
	}

	inline static int32_t get_offset_of_modulation_2() { return static_cast<int32_t>(offsetof(LeanAudioOptions_t3707303054, ___modulation_2)); }
	inline Vector3U5BU5D_t215400611* get_modulation_2() const { return ___modulation_2; }
	inline Vector3U5BU5D_t215400611** get_address_of_modulation_2() { return &___modulation_2; }
	inline void set_modulation_2(Vector3U5BU5D_t215400611* value)
	{
		___modulation_2 = value;
		Il2CppCodeGenWriteBarrier(&___modulation_2, value);
	}

	inline static int32_t get_offset_of_frequencyRate_3() { return static_cast<int32_t>(offsetof(LeanAudioOptions_t3707303054, ___frequencyRate_3)); }
	inline int32_t get_frequencyRate_3() const { return ___frequencyRate_3; }
	inline int32_t* get_address_of_frequencyRate_3() { return &___frequencyRate_3; }
	inline void set_frequencyRate_3(int32_t value)
	{
		___frequencyRate_3 = value;
	}

	inline static int32_t get_offset_of_waveNoiseScale_4() { return static_cast<int32_t>(offsetof(LeanAudioOptions_t3707303054, ___waveNoiseScale_4)); }
	inline float get_waveNoiseScale_4() const { return ___waveNoiseScale_4; }
	inline float* get_address_of_waveNoiseScale_4() { return &___waveNoiseScale_4; }
	inline void set_waveNoiseScale_4(float value)
	{
		___waveNoiseScale_4 = value;
	}

	inline static int32_t get_offset_of_waveNoiseInfluence_5() { return static_cast<int32_t>(offsetof(LeanAudioOptions_t3707303054, ___waveNoiseInfluence_5)); }
	inline float get_waveNoiseInfluence_5() const { return ___waveNoiseInfluence_5; }
	inline float* get_address_of_waveNoiseInfluence_5() { return &___waveNoiseInfluence_5; }
	inline void set_waveNoiseInfluence_5(float value)
	{
		___waveNoiseInfluence_5 = value;
	}

	inline static int32_t get_offset_of_useSetData_6() { return static_cast<int32_t>(offsetof(LeanAudioOptions_t3707303054, ___useSetData_6)); }
	inline bool get_useSetData_6() const { return ___useSetData_6; }
	inline bool* get_address_of_useSetData_6() { return &___useSetData_6; }
	inline void set_useSetData_6(bool value)
	{
		___useSetData_6 = value;
	}

	inline static int32_t get_offset_of_stream_7() { return static_cast<int32_t>(offsetof(LeanAudioOptions_t3707303054, ___stream_7)); }
	inline LeanAudioStream_t4117062544 * get_stream_7() const { return ___stream_7; }
	inline LeanAudioStream_t4117062544 ** get_address_of_stream_7() { return &___stream_7; }
	inline void set_stream_7(LeanAudioStream_t4117062544 * value)
	{
		___stream_7 = value;
		Il2CppCodeGenWriteBarrier(&___stream_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
