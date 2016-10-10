#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TouchScript.ITouch>
struct List_1_t1052347832;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Utils.TimedSequence`1<TouchScript.ITouch>
struct  TimedSequence_1_t2806751324  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<T> TouchScript.Utils.TimedSequence`1::points
	List_1_t1052347832 * ___points_0;
	// System.Collections.Generic.List`1<System.Single> TouchScript.Utils.TimedSequence`1::timestamps
	List_1_t1365137228 * ___timestamps_1;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(TimedSequence_1_t2806751324, ___points_0)); }
	inline List_1_t1052347832 * get_points_0() const { return ___points_0; }
	inline List_1_t1052347832 ** get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(List_1_t1052347832 * value)
	{
		___points_0 = value;
		Il2CppCodeGenWriteBarrier(&___points_0, value);
	}

	inline static int32_t get_offset_of_timestamps_1() { return static_cast<int32_t>(offsetof(TimedSequence_1_t2806751324, ___timestamps_1)); }
	inline List_1_t1365137228 * get_timestamps_1() const { return ___timestamps_1; }
	inline List_1_t1365137228 ** get_address_of_timestamps_1() { return &___timestamps_1; }
	inline void set_timestamps_1(List_1_t1365137228 * value)
	{
		___timestamps_1 = value;
		Il2CppCodeGenWriteBarrier(&___timestamps_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
