#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t763695022;
// UnityEngine.Object
struct Object_t3071478659;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
struct List_1_t1702867532;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "TouchScript_TouchScript_TouchManager_MessageType1717756772.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchManager
struct  TouchManager_t3931142912  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Object TouchScript.TouchManager::displayDevice
	Object_t3071478659 * ___displayDevice_6;
	// System.Boolean TouchScript.TouchManager::shouldCreateCameraLayer
	bool ___shouldCreateCameraLayer_7;
	// System.Boolean TouchScript.TouchManager::useSendMessage
	bool ___useSendMessage_8;
	// TouchScript.TouchManager/MessageType TouchScript.TouchManager::sendMessageEvents
	int32_t ___sendMessageEvents_9;
	// UnityEngine.GameObject TouchScript.TouchManager::sendMessageTarget
	GameObject_t3674682005 * ___sendMessageTarget_10;
	// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManager::layers
	List_1_t1702867532 * ___layers_11;

public:
	inline static int32_t get_offset_of_displayDevice_6() { return static_cast<int32_t>(offsetof(TouchManager_t3931142912, ___displayDevice_6)); }
	inline Object_t3071478659 * get_displayDevice_6() const { return ___displayDevice_6; }
	inline Object_t3071478659 ** get_address_of_displayDevice_6() { return &___displayDevice_6; }
	inline void set_displayDevice_6(Object_t3071478659 * value)
	{
		___displayDevice_6 = value;
		Il2CppCodeGenWriteBarrier(&___displayDevice_6, value);
	}

	inline static int32_t get_offset_of_shouldCreateCameraLayer_7() { return static_cast<int32_t>(offsetof(TouchManager_t3931142912, ___shouldCreateCameraLayer_7)); }
	inline bool get_shouldCreateCameraLayer_7() const { return ___shouldCreateCameraLayer_7; }
	inline bool* get_address_of_shouldCreateCameraLayer_7() { return &___shouldCreateCameraLayer_7; }
	inline void set_shouldCreateCameraLayer_7(bool value)
	{
		___shouldCreateCameraLayer_7 = value;
	}

	inline static int32_t get_offset_of_useSendMessage_8() { return static_cast<int32_t>(offsetof(TouchManager_t3931142912, ___useSendMessage_8)); }
	inline bool get_useSendMessage_8() const { return ___useSendMessage_8; }
	inline bool* get_address_of_useSendMessage_8() { return &___useSendMessage_8; }
	inline void set_useSendMessage_8(bool value)
	{
		___useSendMessage_8 = value;
	}

	inline static int32_t get_offset_of_sendMessageEvents_9() { return static_cast<int32_t>(offsetof(TouchManager_t3931142912, ___sendMessageEvents_9)); }
	inline int32_t get_sendMessageEvents_9() const { return ___sendMessageEvents_9; }
	inline int32_t* get_address_of_sendMessageEvents_9() { return &___sendMessageEvents_9; }
	inline void set_sendMessageEvents_9(int32_t value)
	{
		___sendMessageEvents_9 = value;
	}

	inline static int32_t get_offset_of_sendMessageTarget_10() { return static_cast<int32_t>(offsetof(TouchManager_t3931142912, ___sendMessageTarget_10)); }
	inline GameObject_t3674682005 * get_sendMessageTarget_10() const { return ___sendMessageTarget_10; }
	inline GameObject_t3674682005 ** get_address_of_sendMessageTarget_10() { return &___sendMessageTarget_10; }
	inline void set_sendMessageTarget_10(GameObject_t3674682005 * value)
	{
		___sendMessageTarget_10 = value;
		Il2CppCodeGenWriteBarrier(&___sendMessageTarget_10, value);
	}

	inline static int32_t get_offset_of_layers_11() { return static_cast<int32_t>(offsetof(TouchManager_t3931142912, ___layers_11)); }
	inline List_1_t1702867532 * get_layers_11() const { return ___layers_11; }
	inline List_1_t1702867532 ** get_address_of_layers_11() { return &___layers_11; }
	inline void set_layers_11(List_1_t1702867532 * value)
	{
		___layers_11 = value;
		Il2CppCodeGenWriteBarrier(&___layers_11, value);
	}
};

struct TouchManager_t3931142912_StaticFields
{
public:
	// UnityEngine.Vector2 TouchScript.TouchManager::INVALID_POSITION
	Vector2_t4282066565  ___INVALID_POSITION_4;
	// System.Version TouchScript.TouchManager::VERSION
	Version_t763695022 * ___VERSION_5;

public:
	inline static int32_t get_offset_of_INVALID_POSITION_4() { return static_cast<int32_t>(offsetof(TouchManager_t3931142912_StaticFields, ___INVALID_POSITION_4)); }
	inline Vector2_t4282066565  get_INVALID_POSITION_4() const { return ___INVALID_POSITION_4; }
	inline Vector2_t4282066565 * get_address_of_INVALID_POSITION_4() { return &___INVALID_POSITION_4; }
	inline void set_INVALID_POSITION_4(Vector2_t4282066565  value)
	{
		___INVALID_POSITION_4 = value;
	}

	inline static int32_t get_offset_of_VERSION_5() { return static_cast<int32_t>(offsetof(TouchManager_t3931142912_StaticFields, ___VERSION_5)); }
	inline Version_t763695022 * get_VERSION_5() const { return ___VERSION_5; }
	inline Version_t763695022 ** get_address_of_VERSION_5() { return &___VERSION_5; }
	inline void set_VERSION_5(Version_t763695022 * value)
	{
		___VERSION_5 = value;
		Il2CppCodeGenWriteBarrier(&___VERSION_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
