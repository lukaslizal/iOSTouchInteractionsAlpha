#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
struct EventHandler_1_t3672855019;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;
// System.Collections.Generic.List`1<TouchScript.ITouch>
struct List_1_t1052347832;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// TouchScript.Gestures.Gesture
struct Gesture_t4026739523;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t1099957779;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.ITouch>
struct ReadOnlyCollection_1_t1241239816;
// TouchScript.Utils.TimedSequence`1<TouchScript.ITouch>
struct TimedSequence_1_t2806751324;
// TouchScript.GestureManagerInstance
struct GestureManagerInstance_t961604971;
// TouchScript.IGestureDelegate
struct IGestureDelegate_t288588759;
// TouchScript.ITouchManager
struct ITouchManager_t3852293377;

#include "TouchScript_TouchScript_DebuggableMonoBehaviour2316489590.h"
#include "TouchScript_TouchScript_Gestures_Gesture_GestureSt1286634734.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "TouchScript_TouchScript_Gestures_Gesture_TouchesNu2411368978.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Gesture
struct  Gesture_t4026739523  : public DebuggableMonoBehaviour_t2316489590
{
public:
	// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs> TouchScript.Gestures.Gesture::stateChangedInvoker
	EventHandler_1_t3672855019 * ___stateChangedInvoker_4;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Gesture::cancelledInvoker
	EventHandler_1_t2685781567 * ___cancelledInvoker_5;
	// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.Gestures.Gesture::activeTouches
	List_1_t1052347832 * ___activeTouches_6;
	// UnityEngine.Transform TouchScript.Gestures.Gesture::cachedTransform
	Transform_t1659122786 * ___cachedTransform_7;
	// System.Boolean TouchScript.Gestures.Gesture::advancedProps
	bool ___advancedProps_8;
	// System.Int32 TouchScript.Gestures.Gesture::minTouches
	int32_t ___minTouches_9;
	// System.Int32 TouchScript.Gestures.Gesture::maxTouches
	int32_t ___maxTouches_10;
	// System.Boolean TouchScript.Gestures.Gesture::combineTouches
	bool ___combineTouches_11;
	// System.Single TouchScript.Gestures.Gesture::combineTouchesInterval
	float ___combineTouchesInterval_12;
	// System.Boolean TouchScript.Gestures.Gesture::useSendMessage
	bool ___useSendMessage_13;
	// System.Boolean TouchScript.Gestures.Gesture::sendStateChangeMessages
	bool ___sendStateChangeMessages_14;
	// UnityEngine.GameObject TouchScript.Gestures.Gesture::sendMessageTarget
	GameObject_t3674682005 * ___sendMessageTarget_15;
	// TouchScript.Gestures.Gesture TouchScript.Gestures.Gesture::requireGestureToFail
	Gesture_t4026739523 * ___requireGestureToFail_16;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.Gestures.Gesture::friendlyGestures
	List_1_t1099957779 * ___friendlyGestures_17;
	// System.Int32 TouchScript.Gestures.Gesture::numTouches
	int32_t ___numTouches_18;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.ITouch> TouchScript.Gestures.Gesture::readonlyActiveTouches
	ReadOnlyCollection_1_t1241239816 * ___readonlyActiveTouches_19;
	// TouchScript.Utils.TimedSequence`1<TouchScript.ITouch> TouchScript.Gestures.Gesture::touchSequence
	TimedSequence_1_t2806751324 * ___touchSequence_20;
	// TouchScript.GestureManagerInstance TouchScript.Gestures.Gesture::gestureManagerInstance
	GestureManagerInstance_t961604971 * ___gestureManagerInstance_21;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::delayedStateChange
	int32_t ___delayedStateChange_22;
	// System.Boolean TouchScript.Gestures.Gesture::requiredGestureFailed
	bool ___requiredGestureFailed_23;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::state
	int32_t ___state_24;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedScreenPosition
	Vector2_t4282066565  ___cachedScreenPosition_25;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedPreviousScreenPosition
	Vector2_t4282066565  ___cachedPreviousScreenPosition_26;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_27;
	// TouchScript.IGestureDelegate TouchScript.Gestures.Gesture::<Delegate>k__BackingField
	Il2CppObject * ___U3CDelegateU3Ek__BackingField_28;
	// TouchScript.ITouchManager TouchScript.Gestures.Gesture::<touchManager>k__BackingField
	Il2CppObject * ___U3CtouchManagerU3Ek__BackingField_29;
	// TouchScript.Gestures.Gesture/TouchesNumState TouchScript.Gestures.Gesture::<touchesNumState>k__BackingField
	int32_t ___U3CtouchesNumStateU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_stateChangedInvoker_4() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___stateChangedInvoker_4)); }
	inline EventHandler_1_t3672855019 * get_stateChangedInvoker_4() const { return ___stateChangedInvoker_4; }
	inline EventHandler_1_t3672855019 ** get_address_of_stateChangedInvoker_4() { return &___stateChangedInvoker_4; }
	inline void set_stateChangedInvoker_4(EventHandler_1_t3672855019 * value)
	{
		___stateChangedInvoker_4 = value;
		Il2CppCodeGenWriteBarrier(&___stateChangedInvoker_4, value);
	}

	inline static int32_t get_offset_of_cancelledInvoker_5() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___cancelledInvoker_5)); }
	inline EventHandler_1_t2685781567 * get_cancelledInvoker_5() const { return ___cancelledInvoker_5; }
	inline EventHandler_1_t2685781567 ** get_address_of_cancelledInvoker_5() { return &___cancelledInvoker_5; }
	inline void set_cancelledInvoker_5(EventHandler_1_t2685781567 * value)
	{
		___cancelledInvoker_5 = value;
		Il2CppCodeGenWriteBarrier(&___cancelledInvoker_5, value);
	}

	inline static int32_t get_offset_of_activeTouches_6() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___activeTouches_6)); }
	inline List_1_t1052347832 * get_activeTouches_6() const { return ___activeTouches_6; }
	inline List_1_t1052347832 ** get_address_of_activeTouches_6() { return &___activeTouches_6; }
	inline void set_activeTouches_6(List_1_t1052347832 * value)
	{
		___activeTouches_6 = value;
		Il2CppCodeGenWriteBarrier(&___activeTouches_6, value);
	}

	inline static int32_t get_offset_of_cachedTransform_7() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___cachedTransform_7)); }
	inline Transform_t1659122786 * get_cachedTransform_7() const { return ___cachedTransform_7; }
	inline Transform_t1659122786 ** get_address_of_cachedTransform_7() { return &___cachedTransform_7; }
	inline void set_cachedTransform_7(Transform_t1659122786 * value)
	{
		___cachedTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_7, value);
	}

	inline static int32_t get_offset_of_advancedProps_8() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___advancedProps_8)); }
	inline bool get_advancedProps_8() const { return ___advancedProps_8; }
	inline bool* get_address_of_advancedProps_8() { return &___advancedProps_8; }
	inline void set_advancedProps_8(bool value)
	{
		___advancedProps_8 = value;
	}

	inline static int32_t get_offset_of_minTouches_9() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___minTouches_9)); }
	inline int32_t get_minTouches_9() const { return ___minTouches_9; }
	inline int32_t* get_address_of_minTouches_9() { return &___minTouches_9; }
	inline void set_minTouches_9(int32_t value)
	{
		___minTouches_9 = value;
	}

	inline static int32_t get_offset_of_maxTouches_10() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___maxTouches_10)); }
	inline int32_t get_maxTouches_10() const { return ___maxTouches_10; }
	inline int32_t* get_address_of_maxTouches_10() { return &___maxTouches_10; }
	inline void set_maxTouches_10(int32_t value)
	{
		___maxTouches_10 = value;
	}

	inline static int32_t get_offset_of_combineTouches_11() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___combineTouches_11)); }
	inline bool get_combineTouches_11() const { return ___combineTouches_11; }
	inline bool* get_address_of_combineTouches_11() { return &___combineTouches_11; }
	inline void set_combineTouches_11(bool value)
	{
		___combineTouches_11 = value;
	}

	inline static int32_t get_offset_of_combineTouchesInterval_12() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___combineTouchesInterval_12)); }
	inline float get_combineTouchesInterval_12() const { return ___combineTouchesInterval_12; }
	inline float* get_address_of_combineTouchesInterval_12() { return &___combineTouchesInterval_12; }
	inline void set_combineTouchesInterval_12(float value)
	{
		___combineTouchesInterval_12 = value;
	}

	inline static int32_t get_offset_of_useSendMessage_13() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___useSendMessage_13)); }
	inline bool get_useSendMessage_13() const { return ___useSendMessage_13; }
	inline bool* get_address_of_useSendMessage_13() { return &___useSendMessage_13; }
	inline void set_useSendMessage_13(bool value)
	{
		___useSendMessage_13 = value;
	}

	inline static int32_t get_offset_of_sendStateChangeMessages_14() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___sendStateChangeMessages_14)); }
	inline bool get_sendStateChangeMessages_14() const { return ___sendStateChangeMessages_14; }
	inline bool* get_address_of_sendStateChangeMessages_14() { return &___sendStateChangeMessages_14; }
	inline void set_sendStateChangeMessages_14(bool value)
	{
		___sendStateChangeMessages_14 = value;
	}

	inline static int32_t get_offset_of_sendMessageTarget_15() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___sendMessageTarget_15)); }
	inline GameObject_t3674682005 * get_sendMessageTarget_15() const { return ___sendMessageTarget_15; }
	inline GameObject_t3674682005 ** get_address_of_sendMessageTarget_15() { return &___sendMessageTarget_15; }
	inline void set_sendMessageTarget_15(GameObject_t3674682005 * value)
	{
		___sendMessageTarget_15 = value;
		Il2CppCodeGenWriteBarrier(&___sendMessageTarget_15, value);
	}

	inline static int32_t get_offset_of_requireGestureToFail_16() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___requireGestureToFail_16)); }
	inline Gesture_t4026739523 * get_requireGestureToFail_16() const { return ___requireGestureToFail_16; }
	inline Gesture_t4026739523 ** get_address_of_requireGestureToFail_16() { return &___requireGestureToFail_16; }
	inline void set_requireGestureToFail_16(Gesture_t4026739523 * value)
	{
		___requireGestureToFail_16 = value;
		Il2CppCodeGenWriteBarrier(&___requireGestureToFail_16, value);
	}

	inline static int32_t get_offset_of_friendlyGestures_17() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___friendlyGestures_17)); }
	inline List_1_t1099957779 * get_friendlyGestures_17() const { return ___friendlyGestures_17; }
	inline List_1_t1099957779 ** get_address_of_friendlyGestures_17() { return &___friendlyGestures_17; }
	inline void set_friendlyGestures_17(List_1_t1099957779 * value)
	{
		___friendlyGestures_17 = value;
		Il2CppCodeGenWriteBarrier(&___friendlyGestures_17, value);
	}

	inline static int32_t get_offset_of_numTouches_18() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___numTouches_18)); }
	inline int32_t get_numTouches_18() const { return ___numTouches_18; }
	inline int32_t* get_address_of_numTouches_18() { return &___numTouches_18; }
	inline void set_numTouches_18(int32_t value)
	{
		___numTouches_18 = value;
	}

	inline static int32_t get_offset_of_readonlyActiveTouches_19() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___readonlyActiveTouches_19)); }
	inline ReadOnlyCollection_1_t1241239816 * get_readonlyActiveTouches_19() const { return ___readonlyActiveTouches_19; }
	inline ReadOnlyCollection_1_t1241239816 ** get_address_of_readonlyActiveTouches_19() { return &___readonlyActiveTouches_19; }
	inline void set_readonlyActiveTouches_19(ReadOnlyCollection_1_t1241239816 * value)
	{
		___readonlyActiveTouches_19 = value;
		Il2CppCodeGenWriteBarrier(&___readonlyActiveTouches_19, value);
	}

	inline static int32_t get_offset_of_touchSequence_20() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___touchSequence_20)); }
	inline TimedSequence_1_t2806751324 * get_touchSequence_20() const { return ___touchSequence_20; }
	inline TimedSequence_1_t2806751324 ** get_address_of_touchSequence_20() { return &___touchSequence_20; }
	inline void set_touchSequence_20(TimedSequence_1_t2806751324 * value)
	{
		___touchSequence_20 = value;
		Il2CppCodeGenWriteBarrier(&___touchSequence_20, value);
	}

	inline static int32_t get_offset_of_gestureManagerInstance_21() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___gestureManagerInstance_21)); }
	inline GestureManagerInstance_t961604971 * get_gestureManagerInstance_21() const { return ___gestureManagerInstance_21; }
	inline GestureManagerInstance_t961604971 ** get_address_of_gestureManagerInstance_21() { return &___gestureManagerInstance_21; }
	inline void set_gestureManagerInstance_21(GestureManagerInstance_t961604971 * value)
	{
		___gestureManagerInstance_21 = value;
		Il2CppCodeGenWriteBarrier(&___gestureManagerInstance_21, value);
	}

	inline static int32_t get_offset_of_delayedStateChange_22() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___delayedStateChange_22)); }
	inline int32_t get_delayedStateChange_22() const { return ___delayedStateChange_22; }
	inline int32_t* get_address_of_delayedStateChange_22() { return &___delayedStateChange_22; }
	inline void set_delayedStateChange_22(int32_t value)
	{
		___delayedStateChange_22 = value;
	}

	inline static int32_t get_offset_of_requiredGestureFailed_23() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___requiredGestureFailed_23)); }
	inline bool get_requiredGestureFailed_23() const { return ___requiredGestureFailed_23; }
	inline bool* get_address_of_requiredGestureFailed_23() { return &___requiredGestureFailed_23; }
	inline void set_requiredGestureFailed_23(bool value)
	{
		___requiredGestureFailed_23 = value;
	}

	inline static int32_t get_offset_of_state_24() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___state_24)); }
	inline int32_t get_state_24() const { return ___state_24; }
	inline int32_t* get_address_of_state_24() { return &___state_24; }
	inline void set_state_24(int32_t value)
	{
		___state_24 = value;
	}

	inline static int32_t get_offset_of_cachedScreenPosition_25() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___cachedScreenPosition_25)); }
	inline Vector2_t4282066565  get_cachedScreenPosition_25() const { return ___cachedScreenPosition_25; }
	inline Vector2_t4282066565 * get_address_of_cachedScreenPosition_25() { return &___cachedScreenPosition_25; }
	inline void set_cachedScreenPosition_25(Vector2_t4282066565  value)
	{
		___cachedScreenPosition_25 = value;
	}

	inline static int32_t get_offset_of_cachedPreviousScreenPosition_26() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___cachedPreviousScreenPosition_26)); }
	inline Vector2_t4282066565  get_cachedPreviousScreenPosition_26() const { return ___cachedPreviousScreenPosition_26; }
	inline Vector2_t4282066565 * get_address_of_cachedPreviousScreenPosition_26() { return &___cachedPreviousScreenPosition_26; }
	inline void set_cachedPreviousScreenPosition_26(Vector2_t4282066565  value)
	{
		___cachedPreviousScreenPosition_26 = value;
	}

	inline static int32_t get_offset_of_U3CPreviousStateU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___U3CPreviousStateU3Ek__BackingField_27)); }
	inline int32_t get_U3CPreviousStateU3Ek__BackingField_27() const { return ___U3CPreviousStateU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CPreviousStateU3Ek__BackingField_27() { return &___U3CPreviousStateU3Ek__BackingField_27; }
	inline void set_U3CPreviousStateU3Ek__BackingField_27(int32_t value)
	{
		___U3CPreviousStateU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CDelegateU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___U3CDelegateU3Ek__BackingField_28)); }
	inline Il2CppObject * get_U3CDelegateU3Ek__BackingField_28() const { return ___U3CDelegateU3Ek__BackingField_28; }
	inline Il2CppObject ** get_address_of_U3CDelegateU3Ek__BackingField_28() { return &___U3CDelegateU3Ek__BackingField_28; }
	inline void set_U3CDelegateU3Ek__BackingField_28(Il2CppObject * value)
	{
		___U3CDelegateU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDelegateU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_U3CtouchManagerU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___U3CtouchManagerU3Ek__BackingField_29)); }
	inline Il2CppObject * get_U3CtouchManagerU3Ek__BackingField_29() const { return ___U3CtouchManagerU3Ek__BackingField_29; }
	inline Il2CppObject ** get_address_of_U3CtouchManagerU3Ek__BackingField_29() { return &___U3CtouchManagerU3Ek__BackingField_29; }
	inline void set_U3CtouchManagerU3Ek__BackingField_29(Il2CppObject * value)
	{
		___U3CtouchManagerU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtouchManagerU3Ek__BackingField_29, value);
	}

	inline static int32_t get_offset_of_U3CtouchesNumStateU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Gesture_t4026739523, ___U3CtouchesNumStateU3Ek__BackingField_30)); }
	inline int32_t get_U3CtouchesNumStateU3Ek__BackingField_30() const { return ___U3CtouchesNumStateU3Ek__BackingField_30; }
	inline int32_t* get_address_of_U3CtouchesNumStateU3Ek__BackingField_30() { return &___U3CtouchesNumStateU3Ek__BackingField_30; }
	inline void set_U3CtouchesNumStateU3Ek__BackingField_30(int32_t value)
	{
		___U3CtouchesNumStateU3Ek__BackingField_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
