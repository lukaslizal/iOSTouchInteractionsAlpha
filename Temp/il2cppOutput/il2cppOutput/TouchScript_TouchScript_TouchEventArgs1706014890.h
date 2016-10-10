#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.TouchEventArgs
struct TouchEventArgs_t1706014890;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;

#include "mscorlib_System_EventArgs2540831021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchEventArgs
struct  TouchEventArgs_t1706014890  : public EventArgs_t2540831021
{
public:
	// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.TouchEventArgs::<Touches>k__BackingField
	Il2CppObject* ___U3CTouchesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTouchesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TouchEventArgs_t1706014890, ___U3CTouchesU3Ek__BackingField_2)); }
	inline Il2CppObject* get_U3CTouchesU3Ek__BackingField_2() const { return ___U3CTouchesU3Ek__BackingField_2; }
	inline Il2CppObject** get_address_of_U3CTouchesU3Ek__BackingField_2() { return &___U3CTouchesU3Ek__BackingField_2; }
	inline void set_U3CTouchesU3Ek__BackingField_2(Il2CppObject* value)
	{
		___U3CTouchesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTouchesU3Ek__BackingField_2, value);
	}
};

struct TouchEventArgs_t1706014890_StaticFields
{
public:
	// TouchScript.TouchEventArgs TouchScript.TouchEventArgs::instance
	TouchEventArgs_t1706014890 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(TouchEventArgs_t1706014890_StaticFields, ___instance_1)); }
	inline TouchEventArgs_t1706014890 * get_instance_1() const { return ___instance_1; }
	inline TouchEventArgs_t1706014890 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(TouchEventArgs_t1706014890 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
