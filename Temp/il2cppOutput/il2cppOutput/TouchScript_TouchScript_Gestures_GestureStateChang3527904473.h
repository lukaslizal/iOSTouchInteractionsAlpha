#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_EventArgs2540831021.h"
#include "TouchScript_TouchScript_Gestures_Gesture_GestureSt1286634734.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.GestureStateChangeEventArgs
struct  GestureStateChangeEventArgs_t3527904473  : public EventArgs_t2540831021
{
public:
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_1;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPreviousStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GestureStateChangeEventArgs_t3527904473, ___U3CPreviousStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CPreviousStateU3Ek__BackingField_1() const { return ___U3CPreviousStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPreviousStateU3Ek__BackingField_1() { return &___U3CPreviousStateU3Ek__BackingField_1; }
	inline void set_U3CPreviousStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CPreviousStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GestureStateChangeEventArgs_t3527904473, ___U3CStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CStateU3Ek__BackingField_2() const { return ___U3CStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_2() { return &___U3CStateU3Ek__BackingField_2; }
	inline void set_U3CStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CStateU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
