#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_TouchPhase1567063616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.TouchState
struct  TouchState_t3704565748 
{
public:
	// System.Int32 TouchScript.InputSources.TouchState::Id
	int32_t ___Id_0;
	// UnityEngine.TouchPhase TouchScript.InputSources.TouchState::Phase
	int32_t ___Phase_1;
	// UnityEngine.Vector2 TouchScript.InputSources.TouchState::Position
	Vector2_t4282066565  ___Position_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(TouchState_t3704565748, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Phase_1() { return static_cast<int32_t>(offsetof(TouchState_t3704565748, ___Phase_1)); }
	inline int32_t get_Phase_1() const { return ___Phase_1; }
	inline int32_t* get_address_of_Phase_1() { return &___Phase_1; }
	inline void set_Phase_1(int32_t value)
	{
		___Phase_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(TouchState_t3704565748, ___Position_2)); }
	inline Vector2_t4282066565  get_Position_2() const { return ___Position_2; }
	inline Vector2_t4282066565 * get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(Vector2_t4282066565  value)
	{
		___Position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: TouchScript.InputSources.TouchState
struct TouchState_t3704565748_marshaled_pinvoke
{
	int32_t ___Id_0;
	int32_t ___Phase_1;
	Vector2_t4282066565_marshaled_pinvoke ___Position_2;
};
// Native definition for marshalling of: TouchScript.InputSources.TouchState
struct TouchState_t3704565748_marshaled_com
{
	int32_t ___Id_0;
	int32_t ___Phase_1;
	Vector2_t4282066565_marshaled_com ___Position_2;
};
