#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<TouchScript.Gestures.ITransformGesture>
struct List_1_t1109283728;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Behaviors.Transformer
struct  Transformer_t3651541879  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform TouchScript.Behaviors.Transformer::cachedTransform
	Transform_t1659122786 * ___cachedTransform_2;
	// System.Collections.Generic.List`1<TouchScript.Gestures.ITransformGesture> TouchScript.Behaviors.Transformer::gestures
	List_1_t1109283728 * ___gestures_3;

public:
	inline static int32_t get_offset_of_cachedTransform_2() { return static_cast<int32_t>(offsetof(Transformer_t3651541879, ___cachedTransform_2)); }
	inline Transform_t1659122786 * get_cachedTransform_2() const { return ___cachedTransform_2; }
	inline Transform_t1659122786 ** get_address_of_cachedTransform_2() { return &___cachedTransform_2; }
	inline void set_cachedTransform_2(Transform_t1659122786 * value)
	{
		___cachedTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_2, value);
	}

	inline static int32_t get_offset_of_gestures_3() { return static_cast<int32_t>(offsetof(Transformer_t3651541879, ___gestures_3)); }
	inline List_1_t1109283728 * get_gestures_3() const { return ___gestures_3; }
	inline List_1_t1109283728 ** get_address_of_gestures_3() { return &___gestures_3; }
	inline void set_gestures_3(List_1_t1109283728 * value)
	{
		___gestures_3 = value;
		Il2CppCodeGenWriteBarrier(&___gestures_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
