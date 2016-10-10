#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TouchScript.Hit.TouchHitFactory
struct TouchHitFactory_t3215215724;
// TouchScript.Hit.ITouchHitFactory
struct ITouchHitFactory_t2826472545;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;
// UnityEngine.Transform
struct Transform_t1659122786;
// TouchScript.Hit.TouchHit3D
struct TouchHit3D_t952972793;
// TouchScript.Hit.TouchHit2D
struct TouchHit2D_t952972762;
// TouchScript.Hit.TouchHit
struct TouchHit_t4044886088;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"
#include "UnityEngine_UnityEngine_RaycastHit2D1374744384.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "TouchScript_TouchScript_Hit_TouchHit3D952972793.h"
#include "TouchScript_TouchScript_Hit_TouchHit2D952972762.h"
#include "TouchScript_TouchScript_Hit_TouchHit4044886088.h"

// System.Void TouchScript.Hit.TouchHitFactory::.ctor()
extern "C"  void TouchHitFactory__ctor_m1626705976 (TouchHitFactory_t3215215724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHitFactory TouchScript.Hit.TouchHitFactory::get_Instance()
extern "C"  Il2CppObject * TouchHitFactory_get_Instance_m1884441697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.RaycastHit)
extern "C"  Il2CppObject * TouchHitFactory_GetTouchHit_m1965829780 (TouchHitFactory_t3215215724 * __this, RaycastHit_t4003175726  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.RaycastHit2D)
extern "C"  Il2CppObject * TouchHitFactory_GetTouchHit_m3671786434 (TouchHitFactory_t3215215724 * __this, RaycastHit2D_t1374744384  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.Transform)
extern "C"  Il2CppObject * TouchHitFactory_GetTouchHit_m143905288 (TouchHitFactory_t3215215724 * __this, Transform_t1659122786 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Hit.TouchHitFactory::ReleaseTouchHit(TouchScript.Hit.ITouchHit)
extern "C"  void TouchHitFactory_ReleaseTouchHit_m2430265187 (TouchHitFactory_t3215215724 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Hit.TouchHitFactory::<touchHit3DPool>m__6(TouchScript.Hit.TouchHit3D)
extern "C"  void TouchHitFactory_U3CtouchHit3DPoolU3Em__6_m1379018034 (Il2CppObject * __this /* static, unused */, TouchHit3D_t952972793 * ___h0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Hit.TouchHitFactory::<touchHit2DPool>m__7(TouchScript.Hit.TouchHit2D)
extern "C"  void TouchHitFactory_U3CtouchHit2DPoolU3Em__7_m2994802353 (Il2CppObject * __this /* static, unused */, TouchHit2D_t952972762 * ___h0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Hit.TouchHitFactory::<touchHitPool>m__8(TouchScript.Hit.TouchHit)
extern "C"  void TouchHitFactory_U3CtouchHitPoolU3Em__8_m2572823638 (Il2CppObject * __this /* static, unused */, TouchHit_t4044886088 * ___h0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
