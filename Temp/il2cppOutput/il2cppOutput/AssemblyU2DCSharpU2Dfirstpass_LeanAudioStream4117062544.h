#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanAudioStream
struct  LeanAudioStream_t4117062544  : public Il2CppObject
{
public:
	// System.Int32 LeanAudioStream::position
	int32_t ___position_0;
	// UnityEngine.AudioClip LeanAudioStream::audioClip
	AudioClip_t794140988 * ___audioClip_1;
	// System.Single[] LeanAudioStream::audioArr
	SingleU5BU5D_t2316563989* ___audioArr_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(LeanAudioStream_t4117062544, ___position_0)); }
	inline int32_t get_position_0() const { return ___position_0; }
	inline int32_t* get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(int32_t value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_audioClip_1() { return static_cast<int32_t>(offsetof(LeanAudioStream_t4117062544, ___audioClip_1)); }
	inline AudioClip_t794140988 * get_audioClip_1() const { return ___audioClip_1; }
	inline AudioClip_t794140988 ** get_address_of_audioClip_1() { return &___audioClip_1; }
	inline void set_audioClip_1(AudioClip_t794140988 * value)
	{
		___audioClip_1 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_1, value);
	}

	inline static int32_t get_offset_of_audioArr_2() { return static_cast<int32_t>(offsetof(LeanAudioStream_t4117062544, ___audioArr_2)); }
	inline SingleU5BU5D_t2316563989* get_audioArr_2() const { return ___audioArr_2; }
	inline SingleU5BU5D_t2316563989** get_address_of_audioArr_2() { return &___audioArr_2; }
	inline void set_audioArr_2(SingleU5BU5D_t2316563989* value)
	{
		___audioArr_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioArr_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
