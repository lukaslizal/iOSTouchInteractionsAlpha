#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t1076393982;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_t2109190251;

#include "TouchScript_TouchScript_Layers_CameraLayerBase1349924151.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.CameraLayer
struct  CameraLayer_t2949803078  : public CameraLayerBase_t1349924151
{
public:
	// System.Collections.Generic.List`1<UnityEngine.RaycastHit> TouchScript.Layers.CameraLayer::sortedHits
	List_1_t1076393982 * ___sortedHits_6;
	// UnityEngine.Transform TouchScript.Layers.CameraLayer::cachedTransform
	Transform_t1659122786 * ___cachedTransform_7;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.CameraLayer::tmpHitTestList
	List_1_t2109190251 * ___tmpHitTestList_8;

public:
	inline static int32_t get_offset_of_sortedHits_6() { return static_cast<int32_t>(offsetof(CameraLayer_t2949803078, ___sortedHits_6)); }
	inline List_1_t1076393982 * get_sortedHits_6() const { return ___sortedHits_6; }
	inline List_1_t1076393982 ** get_address_of_sortedHits_6() { return &___sortedHits_6; }
	inline void set_sortedHits_6(List_1_t1076393982 * value)
	{
		___sortedHits_6 = value;
		Il2CppCodeGenWriteBarrier(&___sortedHits_6, value);
	}

	inline static int32_t get_offset_of_cachedTransform_7() { return static_cast<int32_t>(offsetof(CameraLayer_t2949803078, ___cachedTransform_7)); }
	inline Transform_t1659122786 * get_cachedTransform_7() const { return ___cachedTransform_7; }
	inline Transform_t1659122786 ** get_address_of_cachedTransform_7() { return &___cachedTransform_7; }
	inline void set_cachedTransform_7(Transform_t1659122786 * value)
	{
		___cachedTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_7, value);
	}

	inline static int32_t get_offset_of_tmpHitTestList_8() { return static_cast<int32_t>(offsetof(CameraLayer_t2949803078, ___tmpHitTestList_8)); }
	inline List_1_t2109190251 * get_tmpHitTestList_8() const { return ___tmpHitTestList_8; }
	inline List_1_t2109190251 ** get_address_of_tmpHitTestList_8() { return &___tmpHitTestList_8; }
	inline void set_tmpHitTestList_8(List_1_t2109190251 * value)
	{
		___tmpHitTestList_8 = value;
		Il2CppCodeGenWriteBarrier(&___tmpHitTestList_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
