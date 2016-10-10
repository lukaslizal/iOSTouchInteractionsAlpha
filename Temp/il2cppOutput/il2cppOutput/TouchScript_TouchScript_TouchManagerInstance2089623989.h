#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<TouchScript.TouchEventArgs>
struct EventHandler_1_t1850965436;
// System.EventHandler
struct EventHandler_t2463957060;
// TouchScript.TouchManagerInstance
struct TouchManagerInstance_t2089623989;
// TouchScript.Devices.Display.IDisplayDevice
struct IDisplayDevice_t1943414159;
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
struct List_1_t1702867532;
// System.Collections.Generic.List`1<TouchScript.TouchPoint>
struct List_1_t4259543283;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>
struct Dictionary_2_t2888620970;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t308267276;
// System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>
struct List_1_t1235727750;
// TouchScript.Utils.ObjectPool`1<TouchScript.TouchPoint>
struct ObjectPool_1_t703455508;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>
struct ObjectPool_1_t3159412905;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>>
struct ObjectPool_1_t2071641060;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t334121829;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>
struct ObjectPool_1_t3342792823;
// UnityEngine.Events.UnityAction`1<TouchScript.TouchPoint>
struct UnityAction_1_t2785537734;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.ITouch>,System.Collections.Generic.List`1<TouchScript.ITouch>>
struct UnityFunc_1_t4215300799;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.ITouch>>
struct UnityAction_1_t946527835;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>,System.Collections.Generic.List`1<TouchScript.TouchPoint>>
struct UnityFunc_1_t4122992499;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>>
struct UnityAction_1_t4153723286;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>>
struct UnityFunc_1_t3462976591;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t2416204055;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>,System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>
struct UnityFunc_1_t2085024711;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>
struct UnityAction_1_t1129907753;
// System.Predicate`1<TouchScript.Layers.TouchLayer>
struct Predicate_1_t4240706159;

#include "TouchScript_TouchScript_DebuggableMonoBehaviour2316489590.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchManagerInstance
struct  TouchManagerInstance_t2089623989  : public DebuggableMonoBehaviour_t2316489590
{
public:
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesBeganInvoker
	EventHandler_1_t1850965436 * ___touchesBeganInvoker_2;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesMovedInvoker
	EventHandler_1_t1850965436 * ___touchesMovedInvoker_3;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesEndedInvoker
	EventHandler_1_t1850965436 * ___touchesEndedInvoker_4;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesCancelledInvoker
	EventHandler_1_t1850965436 * ___touchesCancelledInvoker_5;
	// System.EventHandler TouchScript.TouchManagerInstance::frameStartedInvoker
	EventHandler_t2463957060 * ___frameStartedInvoker_6;
	// System.EventHandler TouchScript.TouchManagerInstance::frameFinishedInvoker
	EventHandler_t2463957060 * ___frameFinishedInvoker_7;
	// System.Boolean TouchScript.TouchManagerInstance::shouldCreateCameraLayer
	bool ___shouldCreateCameraLayer_10;
	// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManagerInstance::displayDevice
	Il2CppObject * ___displayDevice_11;
	// System.Single TouchScript.TouchManagerInstance::dpi
	float ___dpi_12;
	// System.Single TouchScript.TouchManagerInstance::dotsPerCentimeter
	float ___dotsPerCentimeter_13;
	// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::layers
	List_1_t1702867532 * ___layers_14;
	// System.Collections.Generic.List`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::touches
	List_1_t4259543283 * ___touches_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint> TouchScript.TouchManagerInstance::idToTouch
	Dictionary_2_t2888620970 * ___idToTouch_16;
	// System.Collections.Generic.List`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::touchesBegan
	List_1_t4259543283 * ___touchesBegan_17;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesUpdated
	HashSet_1_t308267276 * ___touchesUpdated_18;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesEnded
	HashSet_1_t308267276 * ___touchesEnded_19;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesCancelled
	HashSet_1_t308267276 * ___touchesCancelled_20;
	// System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch> TouchScript.TouchManagerInstance::touchesManuallyCancelled
	List_1_t1235727750 * ___touchesManuallyCancelled_21;
	// System.Int32 TouchScript.TouchManagerInstance::nextTouchId
	int32_t ___nextTouchId_27;

public:
	inline static int32_t get_offset_of_touchesBeganInvoker_2() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesBeganInvoker_2)); }
	inline EventHandler_1_t1850965436 * get_touchesBeganInvoker_2() const { return ___touchesBeganInvoker_2; }
	inline EventHandler_1_t1850965436 ** get_address_of_touchesBeganInvoker_2() { return &___touchesBeganInvoker_2; }
	inline void set_touchesBeganInvoker_2(EventHandler_1_t1850965436 * value)
	{
		___touchesBeganInvoker_2 = value;
		Il2CppCodeGenWriteBarrier(&___touchesBeganInvoker_2, value);
	}

	inline static int32_t get_offset_of_touchesMovedInvoker_3() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesMovedInvoker_3)); }
	inline EventHandler_1_t1850965436 * get_touchesMovedInvoker_3() const { return ___touchesMovedInvoker_3; }
	inline EventHandler_1_t1850965436 ** get_address_of_touchesMovedInvoker_3() { return &___touchesMovedInvoker_3; }
	inline void set_touchesMovedInvoker_3(EventHandler_1_t1850965436 * value)
	{
		___touchesMovedInvoker_3 = value;
		Il2CppCodeGenWriteBarrier(&___touchesMovedInvoker_3, value);
	}

	inline static int32_t get_offset_of_touchesEndedInvoker_4() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesEndedInvoker_4)); }
	inline EventHandler_1_t1850965436 * get_touchesEndedInvoker_4() const { return ___touchesEndedInvoker_4; }
	inline EventHandler_1_t1850965436 ** get_address_of_touchesEndedInvoker_4() { return &___touchesEndedInvoker_4; }
	inline void set_touchesEndedInvoker_4(EventHandler_1_t1850965436 * value)
	{
		___touchesEndedInvoker_4 = value;
		Il2CppCodeGenWriteBarrier(&___touchesEndedInvoker_4, value);
	}

	inline static int32_t get_offset_of_touchesCancelledInvoker_5() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesCancelledInvoker_5)); }
	inline EventHandler_1_t1850965436 * get_touchesCancelledInvoker_5() const { return ___touchesCancelledInvoker_5; }
	inline EventHandler_1_t1850965436 ** get_address_of_touchesCancelledInvoker_5() { return &___touchesCancelledInvoker_5; }
	inline void set_touchesCancelledInvoker_5(EventHandler_1_t1850965436 * value)
	{
		___touchesCancelledInvoker_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchesCancelledInvoker_5, value);
	}

	inline static int32_t get_offset_of_frameStartedInvoker_6() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___frameStartedInvoker_6)); }
	inline EventHandler_t2463957060 * get_frameStartedInvoker_6() const { return ___frameStartedInvoker_6; }
	inline EventHandler_t2463957060 ** get_address_of_frameStartedInvoker_6() { return &___frameStartedInvoker_6; }
	inline void set_frameStartedInvoker_6(EventHandler_t2463957060 * value)
	{
		___frameStartedInvoker_6 = value;
		Il2CppCodeGenWriteBarrier(&___frameStartedInvoker_6, value);
	}

	inline static int32_t get_offset_of_frameFinishedInvoker_7() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___frameFinishedInvoker_7)); }
	inline EventHandler_t2463957060 * get_frameFinishedInvoker_7() const { return ___frameFinishedInvoker_7; }
	inline EventHandler_t2463957060 ** get_address_of_frameFinishedInvoker_7() { return &___frameFinishedInvoker_7; }
	inline void set_frameFinishedInvoker_7(EventHandler_t2463957060 * value)
	{
		___frameFinishedInvoker_7 = value;
		Il2CppCodeGenWriteBarrier(&___frameFinishedInvoker_7, value);
	}

	inline static int32_t get_offset_of_shouldCreateCameraLayer_10() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___shouldCreateCameraLayer_10)); }
	inline bool get_shouldCreateCameraLayer_10() const { return ___shouldCreateCameraLayer_10; }
	inline bool* get_address_of_shouldCreateCameraLayer_10() { return &___shouldCreateCameraLayer_10; }
	inline void set_shouldCreateCameraLayer_10(bool value)
	{
		___shouldCreateCameraLayer_10 = value;
	}

	inline static int32_t get_offset_of_displayDevice_11() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___displayDevice_11)); }
	inline Il2CppObject * get_displayDevice_11() const { return ___displayDevice_11; }
	inline Il2CppObject ** get_address_of_displayDevice_11() { return &___displayDevice_11; }
	inline void set_displayDevice_11(Il2CppObject * value)
	{
		___displayDevice_11 = value;
		Il2CppCodeGenWriteBarrier(&___displayDevice_11, value);
	}

	inline static int32_t get_offset_of_dpi_12() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___dpi_12)); }
	inline float get_dpi_12() const { return ___dpi_12; }
	inline float* get_address_of_dpi_12() { return &___dpi_12; }
	inline void set_dpi_12(float value)
	{
		___dpi_12 = value;
	}

	inline static int32_t get_offset_of_dotsPerCentimeter_13() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___dotsPerCentimeter_13)); }
	inline float get_dotsPerCentimeter_13() const { return ___dotsPerCentimeter_13; }
	inline float* get_address_of_dotsPerCentimeter_13() { return &___dotsPerCentimeter_13; }
	inline void set_dotsPerCentimeter_13(float value)
	{
		___dotsPerCentimeter_13 = value;
	}

	inline static int32_t get_offset_of_layers_14() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___layers_14)); }
	inline List_1_t1702867532 * get_layers_14() const { return ___layers_14; }
	inline List_1_t1702867532 ** get_address_of_layers_14() { return &___layers_14; }
	inline void set_layers_14(List_1_t1702867532 * value)
	{
		___layers_14 = value;
		Il2CppCodeGenWriteBarrier(&___layers_14, value);
	}

	inline static int32_t get_offset_of_touches_15() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touches_15)); }
	inline List_1_t4259543283 * get_touches_15() const { return ___touches_15; }
	inline List_1_t4259543283 ** get_address_of_touches_15() { return &___touches_15; }
	inline void set_touches_15(List_1_t4259543283 * value)
	{
		___touches_15 = value;
		Il2CppCodeGenWriteBarrier(&___touches_15, value);
	}

	inline static int32_t get_offset_of_idToTouch_16() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___idToTouch_16)); }
	inline Dictionary_2_t2888620970 * get_idToTouch_16() const { return ___idToTouch_16; }
	inline Dictionary_2_t2888620970 ** get_address_of_idToTouch_16() { return &___idToTouch_16; }
	inline void set_idToTouch_16(Dictionary_2_t2888620970 * value)
	{
		___idToTouch_16 = value;
		Il2CppCodeGenWriteBarrier(&___idToTouch_16, value);
	}

	inline static int32_t get_offset_of_touchesBegan_17() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesBegan_17)); }
	inline List_1_t4259543283 * get_touchesBegan_17() const { return ___touchesBegan_17; }
	inline List_1_t4259543283 ** get_address_of_touchesBegan_17() { return &___touchesBegan_17; }
	inline void set_touchesBegan_17(List_1_t4259543283 * value)
	{
		___touchesBegan_17 = value;
		Il2CppCodeGenWriteBarrier(&___touchesBegan_17, value);
	}

	inline static int32_t get_offset_of_touchesUpdated_18() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesUpdated_18)); }
	inline HashSet_1_t308267276 * get_touchesUpdated_18() const { return ___touchesUpdated_18; }
	inline HashSet_1_t308267276 ** get_address_of_touchesUpdated_18() { return &___touchesUpdated_18; }
	inline void set_touchesUpdated_18(HashSet_1_t308267276 * value)
	{
		___touchesUpdated_18 = value;
		Il2CppCodeGenWriteBarrier(&___touchesUpdated_18, value);
	}

	inline static int32_t get_offset_of_touchesEnded_19() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesEnded_19)); }
	inline HashSet_1_t308267276 * get_touchesEnded_19() const { return ___touchesEnded_19; }
	inline HashSet_1_t308267276 ** get_address_of_touchesEnded_19() { return &___touchesEnded_19; }
	inline void set_touchesEnded_19(HashSet_1_t308267276 * value)
	{
		___touchesEnded_19 = value;
		Il2CppCodeGenWriteBarrier(&___touchesEnded_19, value);
	}

	inline static int32_t get_offset_of_touchesCancelled_20() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesCancelled_20)); }
	inline HashSet_1_t308267276 * get_touchesCancelled_20() const { return ___touchesCancelled_20; }
	inline HashSet_1_t308267276 ** get_address_of_touchesCancelled_20() { return &___touchesCancelled_20; }
	inline void set_touchesCancelled_20(HashSet_1_t308267276 * value)
	{
		___touchesCancelled_20 = value;
		Il2CppCodeGenWriteBarrier(&___touchesCancelled_20, value);
	}

	inline static int32_t get_offset_of_touchesManuallyCancelled_21() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___touchesManuallyCancelled_21)); }
	inline List_1_t1235727750 * get_touchesManuallyCancelled_21() const { return ___touchesManuallyCancelled_21; }
	inline List_1_t1235727750 ** get_address_of_touchesManuallyCancelled_21() { return &___touchesManuallyCancelled_21; }
	inline void set_touchesManuallyCancelled_21(List_1_t1235727750 * value)
	{
		___touchesManuallyCancelled_21 = value;
		Il2CppCodeGenWriteBarrier(&___touchesManuallyCancelled_21, value);
	}

	inline static int32_t get_offset_of_nextTouchId_27() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989, ___nextTouchId_27)); }
	inline int32_t get_nextTouchId_27() const { return ___nextTouchId_27; }
	inline int32_t* get_address_of_nextTouchId_27() { return &___nextTouchId_27; }
	inline void set_nextTouchId_27(int32_t value)
	{
		___nextTouchId_27 = value;
	}
};

struct TouchManagerInstance_t2089623989_StaticFields
{
public:
	// System.Boolean TouchScript.TouchManagerInstance::shuttingDown
	bool ___shuttingDown_8;
	// TouchScript.TouchManagerInstance TouchScript.TouchManagerInstance::instance
	TouchManagerInstance_t2089623989 * ___instance_9;
	// TouchScript.Utils.ObjectPool`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::touchPointPool
	ObjectPool_1_t703455508 * ___touchPointPool_22;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.TouchManagerInstance::touchListPool
	ObjectPool_1_t3159412905 * ___touchListPool_23;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>> TouchScript.TouchManagerInstance::touchPointListPool
	ObjectPool_1_t2071641060 * ___touchPointListPool_24;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>> TouchScript.TouchManagerInstance::intListPool
	ObjectPool_1_t334121829 * ___intListPool_25;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>> TouchScript.TouchManagerInstance::cancelledListPool
	ObjectPool_1_t3342792823 * ___cancelledListPool_26;
	// UnityEngine.Events.UnityAction`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::<>f__am$cache1A
	UnityAction_1_t2785537734 * ___U3CU3Ef__amU24cache1A_28;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.ITouch>,System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.TouchManagerInstance::<>f__am$cache1B
	UnityFunc_1_t4215300799 * ___U3CU3Ef__amU24cache1B_29;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.TouchManagerInstance::<>f__am$cache1C
	UnityAction_1_t946527835 * ___U3CU3Ef__amU24cache1C_30;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>,System.Collections.Generic.List`1<TouchScript.TouchPoint>> TouchScript.TouchManagerInstance::<>f__am$cache1D
	UnityFunc_1_t4122992499 * ___U3CU3Ef__amU24cache1D_31;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>> TouchScript.TouchManagerInstance::<>f__am$cache1E
	UnityAction_1_t4153723286 * ___U3CU3Ef__amU24cache1E_32;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>> TouchScript.TouchManagerInstance::<>f__am$cache1F
	UnityFunc_1_t3462976591 * ___U3CU3Ef__amU24cache1F_33;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>> TouchScript.TouchManagerInstance::<>f__am$cache20
	UnityAction_1_t2416204055 * ___U3CU3Ef__amU24cache20_34;
	// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>,System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>> TouchScript.TouchManagerInstance::<>f__am$cache21
	UnityFunc_1_t2085024711 * ___U3CU3Ef__amU24cache21_35;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>> TouchScript.TouchManagerInstance::<>f__am$cache22
	UnityAction_1_t1129907753 * ___U3CU3Ef__amU24cache22_36;
	// System.Predicate`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::<>f__am$cache23
	Predicate_1_t4240706159 * ___U3CU3Ef__amU24cache23_37;

public:
	inline static int32_t get_offset_of_shuttingDown_8() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___shuttingDown_8)); }
	inline bool get_shuttingDown_8() const { return ___shuttingDown_8; }
	inline bool* get_address_of_shuttingDown_8() { return &___shuttingDown_8; }
	inline void set_shuttingDown_8(bool value)
	{
		___shuttingDown_8 = value;
	}

	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___instance_9)); }
	inline TouchManagerInstance_t2089623989 * get_instance_9() const { return ___instance_9; }
	inline TouchManagerInstance_t2089623989 ** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(TouchManagerInstance_t2089623989 * value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier(&___instance_9, value);
	}

	inline static int32_t get_offset_of_touchPointPool_22() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___touchPointPool_22)); }
	inline ObjectPool_1_t703455508 * get_touchPointPool_22() const { return ___touchPointPool_22; }
	inline ObjectPool_1_t703455508 ** get_address_of_touchPointPool_22() { return &___touchPointPool_22; }
	inline void set_touchPointPool_22(ObjectPool_1_t703455508 * value)
	{
		___touchPointPool_22 = value;
		Il2CppCodeGenWriteBarrier(&___touchPointPool_22, value);
	}

	inline static int32_t get_offset_of_touchListPool_23() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___touchListPool_23)); }
	inline ObjectPool_1_t3159412905 * get_touchListPool_23() const { return ___touchListPool_23; }
	inline ObjectPool_1_t3159412905 ** get_address_of_touchListPool_23() { return &___touchListPool_23; }
	inline void set_touchListPool_23(ObjectPool_1_t3159412905 * value)
	{
		___touchListPool_23 = value;
		Il2CppCodeGenWriteBarrier(&___touchListPool_23, value);
	}

	inline static int32_t get_offset_of_touchPointListPool_24() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___touchPointListPool_24)); }
	inline ObjectPool_1_t2071641060 * get_touchPointListPool_24() const { return ___touchPointListPool_24; }
	inline ObjectPool_1_t2071641060 ** get_address_of_touchPointListPool_24() { return &___touchPointListPool_24; }
	inline void set_touchPointListPool_24(ObjectPool_1_t2071641060 * value)
	{
		___touchPointListPool_24 = value;
		Il2CppCodeGenWriteBarrier(&___touchPointListPool_24, value);
	}

	inline static int32_t get_offset_of_intListPool_25() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___intListPool_25)); }
	inline ObjectPool_1_t334121829 * get_intListPool_25() const { return ___intListPool_25; }
	inline ObjectPool_1_t334121829 ** get_address_of_intListPool_25() { return &___intListPool_25; }
	inline void set_intListPool_25(ObjectPool_1_t334121829 * value)
	{
		___intListPool_25 = value;
		Il2CppCodeGenWriteBarrier(&___intListPool_25, value);
	}

	inline static int32_t get_offset_of_cancelledListPool_26() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___cancelledListPool_26)); }
	inline ObjectPool_1_t3342792823 * get_cancelledListPool_26() const { return ___cancelledListPool_26; }
	inline ObjectPool_1_t3342792823 ** get_address_of_cancelledListPool_26() { return &___cancelledListPool_26; }
	inline void set_cancelledListPool_26(ObjectPool_1_t3342792823 * value)
	{
		___cancelledListPool_26 = value;
		Il2CppCodeGenWriteBarrier(&___cancelledListPool_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1A_28() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache1A_28)); }
	inline UnityAction_1_t2785537734 * get_U3CU3Ef__amU24cache1A_28() const { return ___U3CU3Ef__amU24cache1A_28; }
	inline UnityAction_1_t2785537734 ** get_address_of_U3CU3Ef__amU24cache1A_28() { return &___U3CU3Ef__amU24cache1A_28; }
	inline void set_U3CU3Ef__amU24cache1A_28(UnityAction_1_t2785537734 * value)
	{
		___U3CU3Ef__amU24cache1A_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1A_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_29() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache1B_29)); }
	inline UnityFunc_1_t4215300799 * get_U3CU3Ef__amU24cache1B_29() const { return ___U3CU3Ef__amU24cache1B_29; }
	inline UnityFunc_1_t4215300799 ** get_address_of_U3CU3Ef__amU24cache1B_29() { return &___U3CU3Ef__amU24cache1B_29; }
	inline void set_U3CU3Ef__amU24cache1B_29(UnityFunc_1_t4215300799 * value)
	{
		___U3CU3Ef__amU24cache1B_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1B_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_30() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache1C_30)); }
	inline UnityAction_1_t946527835 * get_U3CU3Ef__amU24cache1C_30() const { return ___U3CU3Ef__amU24cache1C_30; }
	inline UnityAction_1_t946527835 ** get_address_of_U3CU3Ef__amU24cache1C_30() { return &___U3CU3Ef__amU24cache1C_30; }
	inline void set_U3CU3Ef__amU24cache1C_30(UnityAction_1_t946527835 * value)
	{
		___U3CU3Ef__amU24cache1C_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1C_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1D_31() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache1D_31)); }
	inline UnityFunc_1_t4122992499 * get_U3CU3Ef__amU24cache1D_31() const { return ___U3CU3Ef__amU24cache1D_31; }
	inline UnityFunc_1_t4122992499 ** get_address_of_U3CU3Ef__amU24cache1D_31() { return &___U3CU3Ef__amU24cache1D_31; }
	inline void set_U3CU3Ef__amU24cache1D_31(UnityFunc_1_t4122992499 * value)
	{
		___U3CU3Ef__amU24cache1D_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1D_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1E_32() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache1E_32)); }
	inline UnityAction_1_t4153723286 * get_U3CU3Ef__amU24cache1E_32() const { return ___U3CU3Ef__amU24cache1E_32; }
	inline UnityAction_1_t4153723286 ** get_address_of_U3CU3Ef__amU24cache1E_32() { return &___U3CU3Ef__amU24cache1E_32; }
	inline void set_U3CU3Ef__amU24cache1E_32(UnityAction_1_t4153723286 * value)
	{
		___U3CU3Ef__amU24cache1E_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1E_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1F_33() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache1F_33)); }
	inline UnityFunc_1_t3462976591 * get_U3CU3Ef__amU24cache1F_33() const { return ___U3CU3Ef__amU24cache1F_33; }
	inline UnityFunc_1_t3462976591 ** get_address_of_U3CU3Ef__amU24cache1F_33() { return &___U3CU3Ef__amU24cache1F_33; }
	inline void set_U3CU3Ef__amU24cache1F_33(UnityFunc_1_t3462976591 * value)
	{
		___U3CU3Ef__amU24cache1F_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1F_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache20_34() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache20_34)); }
	inline UnityAction_1_t2416204055 * get_U3CU3Ef__amU24cache20_34() const { return ___U3CU3Ef__amU24cache20_34; }
	inline UnityAction_1_t2416204055 ** get_address_of_U3CU3Ef__amU24cache20_34() { return &___U3CU3Ef__amU24cache20_34; }
	inline void set_U3CU3Ef__amU24cache20_34(UnityAction_1_t2416204055 * value)
	{
		___U3CU3Ef__amU24cache20_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache20_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache21_35() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache21_35)); }
	inline UnityFunc_1_t2085024711 * get_U3CU3Ef__amU24cache21_35() const { return ___U3CU3Ef__amU24cache21_35; }
	inline UnityFunc_1_t2085024711 ** get_address_of_U3CU3Ef__amU24cache21_35() { return &___U3CU3Ef__amU24cache21_35; }
	inline void set_U3CU3Ef__amU24cache21_35(UnityFunc_1_t2085024711 * value)
	{
		___U3CU3Ef__amU24cache21_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache21_35, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache22_36() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache22_36)); }
	inline UnityAction_1_t1129907753 * get_U3CU3Ef__amU24cache22_36() const { return ___U3CU3Ef__amU24cache22_36; }
	inline UnityAction_1_t1129907753 ** get_address_of_U3CU3Ef__amU24cache22_36() { return &___U3CU3Ef__amU24cache22_36; }
	inline void set_U3CU3Ef__amU24cache22_36(UnityAction_1_t1129907753 * value)
	{
		___U3CU3Ef__amU24cache22_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache22_36, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache23_37() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2089623989_StaticFields, ___U3CU3Ef__amU24cache23_37)); }
	inline Predicate_1_t4240706159 * get_U3CU3Ef__amU24cache23_37() const { return ___U3CU3Ef__amU24cache23_37; }
	inline Predicate_1_t4240706159 ** get_address_of_U3CU3Ef__amU24cache23_37() { return &___U3CU3Ef__amU24cache23_37; }
	inline void set_U3CU3Ef__amU24cache23_37(Predicate_1_t4240706159 * value)
	{
		___U3CU3Ef__amU24cache23_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache23_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
