#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_t2109190251;

#include "TouchScript_TouchScript_Layers_TouchLayer334681980.h"
#include "TouchScript_TouchScript_Layers_FullscreenLayer_Laye450685578.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.FullscreenLayer
struct  FullscreenLayer_t1429169520  : public TouchLayer_t334681980
{
public:
	// TouchScript.Layers.FullscreenLayer/LayerType TouchScript.Layers.FullscreenLayer::type
	int32_t ___type_4;
	// UnityEngine.Camera TouchScript.Layers.FullscreenLayer::_camera
	Camera_t2727095145 * ____camera_5;
	// UnityEngine.Transform TouchScript.Layers.FullscreenLayer::cameraTransform
	Transform_t1659122786 * ___cameraTransform_6;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.FullscreenLayer::tmpHitTestList
	List_1_t2109190251 * ___tmpHitTestList_7;

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(FullscreenLayer_t1429169520, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of__camera_5() { return static_cast<int32_t>(offsetof(FullscreenLayer_t1429169520, ____camera_5)); }
	inline Camera_t2727095145 * get__camera_5() const { return ____camera_5; }
	inline Camera_t2727095145 ** get_address_of__camera_5() { return &____camera_5; }
	inline void set__camera_5(Camera_t2727095145 * value)
	{
		____camera_5 = value;
		Il2CppCodeGenWriteBarrier(&____camera_5, value);
	}

	inline static int32_t get_offset_of_cameraTransform_6() { return static_cast<int32_t>(offsetof(FullscreenLayer_t1429169520, ___cameraTransform_6)); }
	inline Transform_t1659122786 * get_cameraTransform_6() const { return ___cameraTransform_6; }
	inline Transform_t1659122786 ** get_address_of_cameraTransform_6() { return &___cameraTransform_6; }
	inline void set_cameraTransform_6(Transform_t1659122786 * value)
	{
		___cameraTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_6, value);
	}

	inline static int32_t get_offset_of_tmpHitTestList_7() { return static_cast<int32_t>(offsetof(FullscreenLayer_t1429169520, ___tmpHitTestList_7)); }
	inline List_1_t2109190251 * get_tmpHitTestList_7() const { return ___tmpHitTestList_7; }
	inline List_1_t2109190251 ** get_address_of_tmpHitTestList_7() { return &___tmpHitTestList_7; }
	inline void set_tmpHitTestList_7(List_1_t2109190251 * value)
	{
		___tmpHitTestList_7 = value;
		Il2CppCodeGenWriteBarrier(&___tmpHitTestList_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
