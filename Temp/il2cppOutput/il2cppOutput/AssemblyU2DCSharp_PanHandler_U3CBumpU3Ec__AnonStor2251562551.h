#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t2939674232;
// PanHandler
struct PanHandler_t3022430221;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanHandler/<Bump>c__AnonStorey0
struct  U3CBumpU3Ec__AnonStorey0_t2251562551  : public Il2CppObject
{
public:
	// UnityEngine.Collider PanHandler/<Bump>c__AnonStorey0::col
	Collider_t2939674232 * ___col_0;
	// PanHandler PanHandler/<Bump>c__AnonStorey0::<>f__this
	PanHandler_t3022430221 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_col_0() { return static_cast<int32_t>(offsetof(U3CBumpU3Ec__AnonStorey0_t2251562551, ___col_0)); }
	inline Collider_t2939674232 * get_col_0() const { return ___col_0; }
	inline Collider_t2939674232 ** get_address_of_col_0() { return &___col_0; }
	inline void set_col_0(Collider_t2939674232 * value)
	{
		___col_0 = value;
		Il2CppCodeGenWriteBarrier(&___col_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CBumpU3Ec__AnonStorey0_t2251562551, ___U3CU3Ef__this_1)); }
	inline PanHandler_t3022430221 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline PanHandler_t3022430221 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(PanHandler_t3022430221 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
