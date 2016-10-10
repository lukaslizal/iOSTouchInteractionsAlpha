#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t1325617680;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t2416204055;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>>
struct UnityFunc_1_t3462976591;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t334121829  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<T> TouchScript.Utils.ObjectPool`1::stack
	Stack_1_t1325617680 * ___stack_0;
	// UnityEngine.Events.UnityAction`1<T> TouchScript.Utils.ObjectPool`1::onGet
	UnityAction_1_t2416204055 * ___onGet_1;
	// UnityEngine.Events.UnityAction`1<T> TouchScript.Utils.ObjectPool`1::onRelease
	UnityAction_1_t2416204055 * ___onRelease_2;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<T,T> TouchScript.Utils.ObjectPool`1::onNew
	UnityFunc_1_t3462976591 * ___onNew_3;
	// System.Int32 TouchScript.Utils.ObjectPool`1::<CountAll>k__BackingField
	int32_t ___U3CCountAllU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t334121829, ___stack_0)); }
	inline Stack_1_t1325617680 * get_stack_0() const { return ___stack_0; }
	inline Stack_1_t1325617680 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_1_t1325617680 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier(&___stack_0, value);
	}

	inline static int32_t get_offset_of_onGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t334121829, ___onGet_1)); }
	inline UnityAction_1_t2416204055 * get_onGet_1() const { return ___onGet_1; }
	inline UnityAction_1_t2416204055 ** get_address_of_onGet_1() { return &___onGet_1; }
	inline void set_onGet_1(UnityAction_1_t2416204055 * value)
	{
		___onGet_1 = value;
		Il2CppCodeGenWriteBarrier(&___onGet_1, value);
	}

	inline static int32_t get_offset_of_onRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t334121829, ___onRelease_2)); }
	inline UnityAction_1_t2416204055 * get_onRelease_2() const { return ___onRelease_2; }
	inline UnityAction_1_t2416204055 ** get_address_of_onRelease_2() { return &___onRelease_2; }
	inline void set_onRelease_2(UnityAction_1_t2416204055 * value)
	{
		___onRelease_2 = value;
		Il2CppCodeGenWriteBarrier(&___onRelease_2, value);
	}

	inline static int32_t get_offset_of_onNew_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t334121829, ___onNew_3)); }
	inline UnityFunc_1_t3462976591 * get_onNew_3() const { return ___onNew_3; }
	inline UnityFunc_1_t3462976591 ** get_address_of_onNew_3() { return &___onNew_3; }
	inline void set_onNew_3(UnityFunc_1_t3462976591 * value)
	{
		___onNew_3 = value;
		Il2CppCodeGenWriteBarrier(&___onNew_3, value);
	}

	inline static int32_t get_offset_of_U3CCountAllU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ObjectPool_1_t334121829, ___U3CCountAllU3Ek__BackingField_4)); }
	inline int32_t get_U3CCountAllU3Ek__BackingField_4() const { return ___U3CCountAllU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCountAllU3Ek__BackingField_4() { return &___U3CCountAllU3Ek__BackingField_4; }
	inline void set_U3CCountAllU3Ek__BackingField_4(int32_t value)
	{
		___U3CCountAllU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
