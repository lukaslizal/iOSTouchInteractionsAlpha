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

#include "TouchScript_TouchScript_Layers_TouchLayer334681980.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.CameraLayerBase
struct  CameraLayerBase_t1349924151  : public TouchLayer_t334681980
{
public:
	// UnityEngine.LayerMask TouchScript.Layers.CameraLayerBase::layerMask
	LayerMask_t3236759763  ___layerMask_4;
	// UnityEngine.Camera TouchScript.Layers.CameraLayerBase::_camera
	Camera_t2727095145 * ____camera_5;

public:
	inline static int32_t get_offset_of_layerMask_4() { return static_cast<int32_t>(offsetof(CameraLayerBase_t1349924151, ___layerMask_4)); }
	inline LayerMask_t3236759763  get_layerMask_4() const { return ___layerMask_4; }
	inline LayerMask_t3236759763 * get_address_of_layerMask_4() { return &___layerMask_4; }
	inline void set_layerMask_4(LayerMask_t3236759763  value)
	{
		___layerMask_4 = value;
	}

	inline static int32_t get_offset_of__camera_5() { return static_cast<int32_t>(offsetof(CameraLayerBase_t1349924151, ____camera_5)); }
	inline Camera_t2727095145 * get__camera_5() const { return ____camera_5; }
	inline Camera_t2727095145 ** get_address_of__camera_5() { return &____camera_5; }
	inline void set__camera_5(Camera_t2727095145 * value)
	{
		____camera_5 = value;
		Il2CppCodeGenWriteBarrier(&____camera_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
