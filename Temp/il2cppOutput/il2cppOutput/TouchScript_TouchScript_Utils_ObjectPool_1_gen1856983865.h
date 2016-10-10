#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<TouchScript.Hit.TouchHit>
struct Stack_1_t2848479716;
// UnityEngine.Events.UnityAction`1<TouchScript.Hit.TouchHit>
struct UnityAction_1_t3939066091;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<TouchScript.Hit.TouchHit,TouchScript.Hit.TouchHit>
struct UnityFunc_1_t1404548735;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>
struct  ObjectPool_1_t1856983865  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<T> TouchScript.Utils.ObjectPool`1::stack
	Stack_1_t2848479716 * ___stack_0;
	// UnityEngine.Events.UnityAction`1<T> TouchScript.Utils.ObjectPool`1::onGet
	UnityAction_1_t3939066091 * ___onGet_1;
	// UnityEngine.Events.UnityAction`1<T> TouchScript.Utils.ObjectPool`1::onRelease
	UnityAction_1_t3939066091 * ___onRelease_2;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<T,T> TouchScript.Utils.ObjectPool`1::onNew
	UnityFunc_1_t1404548735 * ___onNew_3;
	// System.Int32 TouchScript.Utils.ObjectPool`1::<CountAll>k__BackingField
	int32_t ___U3CCountAllU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t1856983865, ___stack_0)); }
	inline Stack_1_t2848479716 * get_stack_0() const { return ___stack_0; }
	inline Stack_1_t2848479716 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_1_t2848479716 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier(&___stack_0, value);
	}

	inline static int32_t get_offset_of_onGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t1856983865, ___onGet_1)); }
	inline UnityAction_1_t3939066091 * get_onGet_1() const { return ___onGet_1; }
	inline UnityAction_1_t3939066091 ** get_address_of_onGet_1() { return &___onGet_1; }
	inline void set_onGet_1(UnityAction_1_t3939066091 * value)
	{
		___onGet_1 = value;
		Il2CppCodeGenWriteBarrier(&___onGet_1, value);
	}

	inline static int32_t get_offset_of_onRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t1856983865, ___onRelease_2)); }
	inline UnityAction_1_t3939066091 * get_onRelease_2() const { return ___onRelease_2; }
	inline UnityAction_1_t3939066091 ** get_address_of_onRelease_2() { return &___onRelease_2; }
	inline void set_onRelease_2(UnityAction_1_t3939066091 * value)
	{
		___onRelease_2 = value;
		Il2CppCodeGenWriteBarrier(&___onRelease_2, value);
	}

	inline static int32_t get_offset_of_onNew_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t1856983865, ___onNew_3)); }
	inline UnityFunc_1_t1404548735 * get_onNew_3() const { return ___onNew_3; }
	inline UnityFunc_1_t1404548735 ** get_address_of_onNew_3() { return &___onNew_3; }
	inline void set_onNew_3(UnityFunc_1_t1404548735 * value)
	{
		___onNew_3 = value;
		Il2CppCodeGenWriteBarrier(&___onNew_3, value);
	}

	inline static int32_t get_offset_of_U3CCountAllU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ObjectPool_1_t1856983865, ___U3CCountAllU3Ek__BackingField_4)); }
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
