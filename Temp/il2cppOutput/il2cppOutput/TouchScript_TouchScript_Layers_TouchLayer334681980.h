#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
struct EventHandler_1_t91064721;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.TouchLayer
struct  TouchLayer_t334681980  : public MonoBehaviour_t667441552
{
public:
	// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs> TouchScript.Layers.TouchLayer::touchBeganInvoker
	EventHandler_1_t91064721 * ___touchBeganInvoker_2;
	// System.String TouchScript.Layers.TouchLayer::Name
	String_t* ___Name_3;

public:
	inline static int32_t get_offset_of_touchBeganInvoker_2() { return static_cast<int32_t>(offsetof(TouchLayer_t334681980, ___touchBeganInvoker_2)); }
	inline EventHandler_1_t91064721 * get_touchBeganInvoker_2() const { return ___touchBeganInvoker_2; }
	inline EventHandler_1_t91064721 ** get_address_of_touchBeganInvoker_2() { return &___touchBeganInvoker_2; }
	inline void set_touchBeganInvoker_2(EventHandler_1_t91064721 * value)
	{
		___touchBeganInvoker_2 = value;
		Il2CppCodeGenWriteBarrier(&___touchBeganInvoker_2, value);
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(TouchLayer_t334681980, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier(&___Name_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
