#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t1846014262;
// System.String
struct String_t;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputMod15847059.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirect2840182460.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Behaviors.TouchScriptInputModule
struct  TouchScriptInputModule_t1248396140  : public BaseInputModule_t15847059
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> TouchScript.Behaviors.TouchScriptInputModule::pointerEvents
	Dictionary_2_t1846014262 * ___pointerEvents_6;
	// System.String TouchScript.Behaviors.TouchScriptInputModule::horizontalAxis
	String_t* ___horizontalAxis_7;
	// System.String TouchScript.Behaviors.TouchScriptInputModule::verticalAxis
	String_t* ___verticalAxis_8;
	// System.String TouchScript.Behaviors.TouchScriptInputModule::submitButton
	String_t* ___submitButton_9;
	// System.String TouchScript.Behaviors.TouchScriptInputModule::cancelButton
	String_t* ___cancelButton_10;
	// System.Single TouchScript.Behaviors.TouchScriptInputModule::inputActionsPerSecond
	float ___inputActionsPerSecond_11;
	// System.Single TouchScript.Behaviors.TouchScriptInputModule::repeatDelay
	float ___repeatDelay_12;
	// System.Single TouchScript.Behaviors.TouchScriptInputModule::nextActionTime
	float ___nextActionTime_13;
	// UnityEngine.EventSystems.MoveDirection TouchScript.Behaviors.TouchScriptInputModule::lastMoveDirection
	int32_t ___lastMoveDirection_14;
	// System.Single TouchScript.Behaviors.TouchScriptInputModule::lastMoveStartTime
	float ___lastMoveStartTime_15;

public:
	inline static int32_t get_offset_of_pointerEvents_6() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___pointerEvents_6)); }
	inline Dictionary_2_t1846014262 * get_pointerEvents_6() const { return ___pointerEvents_6; }
	inline Dictionary_2_t1846014262 ** get_address_of_pointerEvents_6() { return &___pointerEvents_6; }
	inline void set_pointerEvents_6(Dictionary_2_t1846014262 * value)
	{
		___pointerEvents_6 = value;
		Il2CppCodeGenWriteBarrier(&___pointerEvents_6, value);
	}

	inline static int32_t get_offset_of_horizontalAxis_7() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___horizontalAxis_7)); }
	inline String_t* get_horizontalAxis_7() const { return ___horizontalAxis_7; }
	inline String_t** get_address_of_horizontalAxis_7() { return &___horizontalAxis_7; }
	inline void set_horizontalAxis_7(String_t* value)
	{
		___horizontalAxis_7 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxis_7, value);
	}

	inline static int32_t get_offset_of_verticalAxis_8() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___verticalAxis_8)); }
	inline String_t* get_verticalAxis_8() const { return ___verticalAxis_8; }
	inline String_t** get_address_of_verticalAxis_8() { return &___verticalAxis_8; }
	inline void set_verticalAxis_8(String_t* value)
	{
		___verticalAxis_8 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxis_8, value);
	}

	inline static int32_t get_offset_of_submitButton_9() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___submitButton_9)); }
	inline String_t* get_submitButton_9() const { return ___submitButton_9; }
	inline String_t** get_address_of_submitButton_9() { return &___submitButton_9; }
	inline void set_submitButton_9(String_t* value)
	{
		___submitButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___submitButton_9, value);
	}

	inline static int32_t get_offset_of_cancelButton_10() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___cancelButton_10)); }
	inline String_t* get_cancelButton_10() const { return ___cancelButton_10; }
	inline String_t** get_address_of_cancelButton_10() { return &___cancelButton_10; }
	inline void set_cancelButton_10(String_t* value)
	{
		___cancelButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___cancelButton_10, value);
	}

	inline static int32_t get_offset_of_inputActionsPerSecond_11() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___inputActionsPerSecond_11)); }
	inline float get_inputActionsPerSecond_11() const { return ___inputActionsPerSecond_11; }
	inline float* get_address_of_inputActionsPerSecond_11() { return &___inputActionsPerSecond_11; }
	inline void set_inputActionsPerSecond_11(float value)
	{
		___inputActionsPerSecond_11 = value;
	}

	inline static int32_t get_offset_of_repeatDelay_12() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___repeatDelay_12)); }
	inline float get_repeatDelay_12() const { return ___repeatDelay_12; }
	inline float* get_address_of_repeatDelay_12() { return &___repeatDelay_12; }
	inline void set_repeatDelay_12(float value)
	{
		___repeatDelay_12 = value;
	}

	inline static int32_t get_offset_of_nextActionTime_13() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___nextActionTime_13)); }
	inline float get_nextActionTime_13() const { return ___nextActionTime_13; }
	inline float* get_address_of_nextActionTime_13() { return &___nextActionTime_13; }
	inline void set_nextActionTime_13(float value)
	{
		___nextActionTime_13 = value;
	}

	inline static int32_t get_offset_of_lastMoveDirection_14() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___lastMoveDirection_14)); }
	inline int32_t get_lastMoveDirection_14() const { return ___lastMoveDirection_14; }
	inline int32_t* get_address_of_lastMoveDirection_14() { return &___lastMoveDirection_14; }
	inline void set_lastMoveDirection_14(int32_t value)
	{
		___lastMoveDirection_14 = value;
	}

	inline static int32_t get_offset_of_lastMoveStartTime_15() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t1248396140, ___lastMoveStartTime_15)); }
	inline float get_lastMoveStartTime_15() const { return ___lastMoveStartTime_15; }
	inline float* get_address_of_lastMoveStartTime_15() { return &___lastMoveStartTime_15; }
	inline void set_lastMoveStartTime_15(float value)
	{
		___lastMoveStartTime_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
