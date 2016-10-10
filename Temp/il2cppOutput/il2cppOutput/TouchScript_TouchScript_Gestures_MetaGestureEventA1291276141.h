#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.ITouch
struct ITouch_t3979129576;

#include "mscorlib_System_EventArgs2540831021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.MetaGestureEventArgs
struct  MetaGestureEventArgs_t1291276141  : public EventArgs_t2540831021
{
public:
	// TouchScript.ITouch TouchScript.Gestures.MetaGestureEventArgs::<Touch>k__BackingField
	Il2CppObject * ___U3CTouchU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTouchU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaGestureEventArgs_t1291276141, ___U3CTouchU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CTouchU3Ek__BackingField_1() const { return ___U3CTouchU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CTouchU3Ek__BackingField_1() { return &___U3CTouchU3Ek__BackingField_1; }
	inline void set_U3CTouchU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CTouchU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTouchU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
