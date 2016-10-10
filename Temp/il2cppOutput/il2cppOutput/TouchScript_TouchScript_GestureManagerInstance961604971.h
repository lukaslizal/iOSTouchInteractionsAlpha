#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.GestureManagerInstance
struct GestureManagerInstance_t961604971;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t1099957779;
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>
struct Action_2_t981648151;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t2054938922;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
struct Dictionary_2_t1611647945;
// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>
struct Dictionary_2_t1702977604;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>>
struct ObjectPool_1_t3207022852;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>
struct ObjectPool_1_t3159412905;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Transform>>
struct ObjectPool_1_t839406115;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>,System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>>
struct UnityFunc_1_t2694276851;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>>
struct UnityAction_1_t994137782;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.ITouch>,System.Collections.Generic.List`1<TouchScript.ITouch>>
struct UnityFunc_1_t4215300799;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.ITouch>>
struct UnityAction_1_t946527835;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<UnityEngine.Transform>,System.Collections.Generic.List`1<UnityEngine.Transform>>
struct UnityFunc_1_t235330455;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Transform>>
struct UnityAction_1_t2921488341;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.GestureManagerInstance
struct  GestureManagerInstance_t961604971  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::gesturesToReset
	List_1_t1099957779 * ___gesturesToReset_4;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::_updateBegan
	Action_2_t981648151 * ____updateBegan_5;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::_updateMoved
	Action_2_t981648151 * ____updateMoved_6;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::_updateEnded
	Action_2_t981648151 * ____updateEnded_7;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::_updateCancelled
	Action_2_t981648151 * ____updateCancelled_8;
	// System.Action`1<UnityEngine.Transform> TouchScript.GestureManagerInstance::_processTarget
	Action_1_t2054938922 * ____processTarget_9;
	// System.Action`1<UnityEngine.Transform> TouchScript.GestureManagerInstance::_processTargetBegan
	Action_1_t2054938922 * ____processTargetBegan_10;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::targetTouches
	Dictionary_2_t1611647945 * ___targetTouches_11;
	// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::gestureTouches
	Dictionary_2_t1702977604 * ___gestureTouches_12;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::activeGestures
	List_1_t1099957779 * ___activeGestures_13;

public:
	inline static int32_t get_offset_of_gesturesToReset_4() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ___gesturesToReset_4)); }
	inline List_1_t1099957779 * get_gesturesToReset_4() const { return ___gesturesToReset_4; }
	inline List_1_t1099957779 ** get_address_of_gesturesToReset_4() { return &___gesturesToReset_4; }
	inline void set_gesturesToReset_4(List_1_t1099957779 * value)
	{
		___gesturesToReset_4 = value;
		Il2CppCodeGenWriteBarrier(&___gesturesToReset_4, value);
	}

	inline static int32_t get_offset_of__updateBegan_5() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ____updateBegan_5)); }
	inline Action_2_t981648151 * get__updateBegan_5() const { return ____updateBegan_5; }
	inline Action_2_t981648151 ** get_address_of__updateBegan_5() { return &____updateBegan_5; }
	inline void set__updateBegan_5(Action_2_t981648151 * value)
	{
		____updateBegan_5 = value;
		Il2CppCodeGenWriteBarrier(&____updateBegan_5, value);
	}

	inline static int32_t get_offset_of__updateMoved_6() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ____updateMoved_6)); }
	inline Action_2_t981648151 * get__updateMoved_6() const { return ____updateMoved_6; }
	inline Action_2_t981648151 ** get_address_of__updateMoved_6() { return &____updateMoved_6; }
	inline void set__updateMoved_6(Action_2_t981648151 * value)
	{
		____updateMoved_6 = value;
		Il2CppCodeGenWriteBarrier(&____updateMoved_6, value);
	}

	inline static int32_t get_offset_of__updateEnded_7() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ____updateEnded_7)); }
	inline Action_2_t981648151 * get__updateEnded_7() const { return ____updateEnded_7; }
	inline Action_2_t981648151 ** get_address_of__updateEnded_7() { return &____updateEnded_7; }
	inline void set__updateEnded_7(Action_2_t981648151 * value)
	{
		____updateEnded_7 = value;
		Il2CppCodeGenWriteBarrier(&____updateEnded_7, value);
	}

	inline static int32_t get_offset_of__updateCancelled_8() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ____updateCancelled_8)); }
	inline Action_2_t981648151 * get__updateCancelled_8() const { return ____updateCancelled_8; }
	inline Action_2_t981648151 ** get_address_of__updateCancelled_8() { return &____updateCancelled_8; }
	inline void set__updateCancelled_8(Action_2_t981648151 * value)
	{
		____updateCancelled_8 = value;
		Il2CppCodeGenWriteBarrier(&____updateCancelled_8, value);
	}

	inline static int32_t get_offset_of__processTarget_9() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ____processTarget_9)); }
	inline Action_1_t2054938922 * get__processTarget_9() const { return ____processTarget_9; }
	inline Action_1_t2054938922 ** get_address_of__processTarget_9() { return &____processTarget_9; }
	inline void set__processTarget_9(Action_1_t2054938922 * value)
	{
		____processTarget_9 = value;
		Il2CppCodeGenWriteBarrier(&____processTarget_9, value);
	}

	inline static int32_t get_offset_of__processTargetBegan_10() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ____processTargetBegan_10)); }
	inline Action_1_t2054938922 * get__processTargetBegan_10() const { return ____processTargetBegan_10; }
	inline Action_1_t2054938922 ** get_address_of__processTargetBegan_10() { return &____processTargetBegan_10; }
	inline void set__processTargetBegan_10(Action_1_t2054938922 * value)
	{
		____processTargetBegan_10 = value;
		Il2CppCodeGenWriteBarrier(&____processTargetBegan_10, value);
	}

	inline static int32_t get_offset_of_targetTouches_11() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ___targetTouches_11)); }
	inline Dictionary_2_t1611647945 * get_targetTouches_11() const { return ___targetTouches_11; }
	inline Dictionary_2_t1611647945 ** get_address_of_targetTouches_11() { return &___targetTouches_11; }
	inline void set_targetTouches_11(Dictionary_2_t1611647945 * value)
	{
		___targetTouches_11 = value;
		Il2CppCodeGenWriteBarrier(&___targetTouches_11, value);
	}

	inline static int32_t get_offset_of_gestureTouches_12() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ___gestureTouches_12)); }
	inline Dictionary_2_t1702977604 * get_gestureTouches_12() const { return ___gestureTouches_12; }
	inline Dictionary_2_t1702977604 ** get_address_of_gestureTouches_12() { return &___gestureTouches_12; }
	inline void set_gestureTouches_12(Dictionary_2_t1702977604 * value)
	{
		___gestureTouches_12 = value;
		Il2CppCodeGenWriteBarrier(&___gestureTouches_12, value);
	}

	inline static int32_t get_offset_of_activeGestures_13() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971, ___activeGestures_13)); }
	inline List_1_t1099957779 * get_activeGestures_13() const { return ___activeGestures_13; }
	inline List_1_t1099957779 ** get_address_of_activeGestures_13() { return &___activeGestures_13; }
	inline void set_activeGestures_13(List_1_t1099957779 * value)
	{
		___activeGestures_13 = value;
		Il2CppCodeGenWriteBarrier(&___activeGestures_13, value);
	}
};

struct GestureManagerInstance_t961604971_StaticFields
{
public:
	// TouchScript.GestureManagerInstance TouchScript.GestureManagerInstance::instance
	GestureManagerInstance_t961604971 * ___instance_2;
	// System.Boolean TouchScript.GestureManagerInstance::shuttingDown
	bool ___shuttingDown_3;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>> TouchScript.GestureManagerInstance::gestureListPool
	ObjectPool_1_t3207022852 * ___gestureListPool_14;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::touchListPool
	ObjectPool_1_t3159412905 * ___touchListPool_15;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Transform>> TouchScript.GestureManagerInstance::transformListPool
	ObjectPool_1_t839406115 * ___transformListPool_16;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>,System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>> TouchScript.GestureManagerInstance::<>f__am$cacheF
	UnityFunc_1_t2694276851 * ___U3CU3Ef__amU24cacheF_17;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>> TouchScript.GestureManagerInstance::<>f__am$cache10
	UnityAction_1_t994137782 * ___U3CU3Ef__amU24cache10_18;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.ITouch>,System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::<>f__am$cache11
	UnityFunc_1_t4215300799 * ___U3CU3Ef__amU24cache11_19;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::<>f__am$cache12
	UnityAction_1_t946527835 * ___U3CU3Ef__amU24cache12_20;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<UnityEngine.Transform>,System.Collections.Generic.List`1<UnityEngine.Transform>> TouchScript.GestureManagerInstance::<>f__am$cache13
	UnityFunc_1_t235330455 * ___U3CU3Ef__amU24cache13_21;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Transform>> TouchScript.GestureManagerInstance::<>f__am$cache14
	UnityAction_1_t2921488341 * ___U3CU3Ef__amU24cache14_22;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___instance_2)); }
	inline GestureManagerInstance_t961604971 * get_instance_2() const { return ___instance_2; }
	inline GestureManagerInstance_t961604971 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GestureManagerInstance_t961604971 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_shuttingDown_3() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___shuttingDown_3)); }
	inline bool get_shuttingDown_3() const { return ___shuttingDown_3; }
	inline bool* get_address_of_shuttingDown_3() { return &___shuttingDown_3; }
	inline void set_shuttingDown_3(bool value)
	{
		___shuttingDown_3 = value;
	}

	inline static int32_t get_offset_of_gestureListPool_14() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___gestureListPool_14)); }
	inline ObjectPool_1_t3207022852 * get_gestureListPool_14() const { return ___gestureListPool_14; }
	inline ObjectPool_1_t3207022852 ** get_address_of_gestureListPool_14() { return &___gestureListPool_14; }
	inline void set_gestureListPool_14(ObjectPool_1_t3207022852 * value)
	{
		___gestureListPool_14 = value;
		Il2CppCodeGenWriteBarrier(&___gestureListPool_14, value);
	}

	inline static int32_t get_offset_of_touchListPool_15() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___touchListPool_15)); }
	inline ObjectPool_1_t3159412905 * get_touchListPool_15() const { return ___touchListPool_15; }
	inline ObjectPool_1_t3159412905 ** get_address_of_touchListPool_15() { return &___touchListPool_15; }
	inline void set_touchListPool_15(ObjectPool_1_t3159412905 * value)
	{
		___touchListPool_15 = value;
		Il2CppCodeGenWriteBarrier(&___touchListPool_15, value);
	}

	inline static int32_t get_offset_of_transformListPool_16() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___transformListPool_16)); }
	inline ObjectPool_1_t839406115 * get_transformListPool_16() const { return ___transformListPool_16; }
	inline ObjectPool_1_t839406115 ** get_address_of_transformListPool_16() { return &___transformListPool_16; }
	inline void set_transformListPool_16(ObjectPool_1_t839406115 * value)
	{
		___transformListPool_16 = value;
		Il2CppCodeGenWriteBarrier(&___transformListPool_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_17() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___U3CU3Ef__amU24cacheF_17)); }
	inline UnityFunc_1_t2694276851 * get_U3CU3Ef__amU24cacheF_17() const { return ___U3CU3Ef__amU24cacheF_17; }
	inline UnityFunc_1_t2694276851 ** get_address_of_U3CU3Ef__amU24cacheF_17() { return &___U3CU3Ef__amU24cacheF_17; }
	inline void set_U3CU3Ef__amU24cacheF_17(UnityFunc_1_t2694276851 * value)
	{
		___U3CU3Ef__amU24cacheF_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_18() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___U3CU3Ef__amU24cache10_18)); }
	inline UnityAction_1_t994137782 * get_U3CU3Ef__amU24cache10_18() const { return ___U3CU3Ef__amU24cache10_18; }
	inline UnityAction_1_t994137782 ** get_address_of_U3CU3Ef__amU24cache10_18() { return &___U3CU3Ef__amU24cache10_18; }
	inline void set_U3CU3Ef__amU24cache10_18(UnityAction_1_t994137782 * value)
	{
		___U3CU3Ef__amU24cache10_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_19() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___U3CU3Ef__amU24cache11_19)); }
	inline UnityFunc_1_t4215300799 * get_U3CU3Ef__amU24cache11_19() const { return ___U3CU3Ef__amU24cache11_19; }
	inline UnityFunc_1_t4215300799 ** get_address_of_U3CU3Ef__amU24cache11_19() { return &___U3CU3Ef__amU24cache11_19; }
	inline void set_U3CU3Ef__amU24cache11_19(UnityFunc_1_t4215300799 * value)
	{
		___U3CU3Ef__amU24cache11_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache11_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_20() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___U3CU3Ef__amU24cache12_20)); }
	inline UnityAction_1_t946527835 * get_U3CU3Ef__amU24cache12_20() const { return ___U3CU3Ef__amU24cache12_20; }
	inline UnityAction_1_t946527835 ** get_address_of_U3CU3Ef__amU24cache12_20() { return &___U3CU3Ef__amU24cache12_20; }
	inline void set_U3CU3Ef__amU24cache12_20(UnityAction_1_t946527835 * value)
	{
		___U3CU3Ef__amU24cache12_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache12_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_21() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___U3CU3Ef__amU24cache13_21)); }
	inline UnityFunc_1_t235330455 * get_U3CU3Ef__amU24cache13_21() const { return ___U3CU3Ef__amU24cache13_21; }
	inline UnityFunc_1_t235330455 ** get_address_of_U3CU3Ef__amU24cache13_21() { return &___U3CU3Ef__amU24cache13_21; }
	inline void set_U3CU3Ef__amU24cache13_21(UnityFunc_1_t235330455 * value)
	{
		___U3CU3Ef__amU24cache13_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache13_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_22() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t961604971_StaticFields, ___U3CU3Ef__amU24cache14_22)); }
	inline UnityAction_1_t2921488341 * get_U3CU3Ef__amU24cache14_22() const { return ___U3CU3Ef__amU24cache14_22; }
	inline UnityAction_1_t2921488341 ** get_address_of_U3CU3Ef__amU24cache14_22() { return &___U3CU3Ef__amU24cache14_22; }
	inline void set_U3CU3Ef__amU24cache14_22(UnityAction_1_t2921488341 * value)
	{
		___U3CU3Ef__amU24cache14_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache14_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
