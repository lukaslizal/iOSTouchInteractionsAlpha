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

// LTDescrImpl
struct LTDescrImpl_t751309081;
// UnityEngine.Transform
struct Transform_t1659122786;
// LTRect
struct LTRect_t2255934348;
// LTBezierPath
struct LTBezierPath_t2218404684;
// LTSpline
struct LTSpline_t3328440185;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// System.Action`1<System.Single>
struct Action_1_t392767812;
// System.Action`2<System.Single,System.Single>
struct Action_2_t1327107275;
// System.Action`2<System.Single,System.Object>
struct Action_2_t1206004674;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t382915405;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t382915406;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t3399808592;
// System.Action`1<UnityEngine.Color>
struct Action_1_t295395745;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Object>
struct Action_1_t271665211;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// LTDescr
struct LTDescr_t1201573721;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTRect2255934348.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTBezierPath2218404684.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTSpline3328440185.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TweenAction327588961.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LeanTweenType3149381471.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"

// System.Void LTDescrImpl::.ctor()
extern "C"  void LTDescrImpl__ctor_m3831025470 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::.cctor()
extern "C"  void LTDescrImpl__cctor_m2315576367 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_toggle()
extern "C"  bool LTDescrImpl_get_toggle_m3633718631 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_toggle(System.Boolean)
extern "C"  void LTDescrImpl_set_toggle_m4045886766 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_useEstimatedTime()
extern "C"  bool LTDescrImpl_get_useEstimatedTime_m2171041525 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_useEstimatedTime(System.Boolean)
extern "C"  void LTDescrImpl_set_useEstimatedTime_m2107630140 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_useFrames()
extern "C"  bool LTDescrImpl_get_useFrames_m2090905468 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_useFrames(System.Boolean)
extern "C"  void LTDescrImpl_set_useFrames_m2051037027 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_useManualTime()
extern "C"  bool LTDescrImpl_get_useManualTime_m1863075017 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_useManualTime(System.Boolean)
extern "C"  void LTDescrImpl_set_useManualTime_m588704240 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_hasInitiliazed()
extern "C"  bool LTDescrImpl_get_hasInitiliazed_m3222773063 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_hasInitiliazed(System.Boolean)
extern "C"  void LTDescrImpl_set_hasInitiliazed_m3450729742 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_hasPhysics()
extern "C"  bool LTDescrImpl_get_hasPhysics_m1397023008 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_hasPhysics(System.Boolean)
extern "C"  void LTDescrImpl_set_hasPhysics_m1025691943 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_onCompleteOnRepeat()
extern "C"  bool LTDescrImpl_get_onCompleteOnRepeat_m4218487877 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onCompleteOnRepeat(System.Boolean)
extern "C"  void LTDescrImpl_set_onCompleteOnRepeat_m2302181260 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_onCompleteOnStart()
extern "C"  bool LTDescrImpl_get_onCompleteOnStart_m608287578 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onCompleteOnStart(System.Boolean)
extern "C"  void LTDescrImpl_set_onCompleteOnStart_m704501441 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_useRecursion()
extern "C"  bool LTDescrImpl_get_useRecursion_m3172705390 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_useRecursion(System.Boolean)
extern "C"  void LTDescrImpl_set_useRecursion_m807423989 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTDescrImpl::get_passed()
extern "C"  float LTDescrImpl_get_passed_m3867704659 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_passed(System.Single)
extern "C"  void LTDescrImpl_set_passed_m1747107448 (LTDescrImpl_t751309081 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTDescrImpl::get_delay()
extern "C"  float LTDescrImpl_get_delay_m3436986786 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_delay(System.Single)
extern "C"  void LTDescrImpl_set_delay_m2424361993 (LTDescrImpl_t751309081 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTDescrImpl::get_time()
extern "C"  float LTDescrImpl_get_time_m3620703472 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_time(System.Single)
extern "C"  void LTDescrImpl_set_time_m2491844091 (LTDescrImpl_t751309081 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTDescrImpl::get_lastVal()
extern "C"  float LTDescrImpl_get_lastVal_m2589363018 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_lastVal(System.Single)
extern "C"  void LTDescrImpl_set_lastVal_m2970438497 (LTDescrImpl_t751309081 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTDescrImpl::get_loopCount()
extern "C"  int32_t LTDescrImpl_get_loopCount_m1821870356 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_loopCount(System.Int32)
extern "C"  void LTDescrImpl_set_loopCount_m967698811 (LTDescrImpl_t751309081 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 LTDescrImpl::get_counter()
extern "C"  uint32_t LTDescrImpl_get_counter_m1165295338 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_counter(System.UInt32)
extern "C"  void LTDescrImpl_set_counter_m1818109247 (LTDescrImpl_t751309081 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTDescrImpl::get_direction()
extern "C"  float LTDescrImpl_get_direction_m2141512094 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_direction(System.Single)
extern "C"  void LTDescrImpl_set_direction_m956870029 (LTDescrImpl_t751309081 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTDescrImpl::get_directionLast()
extern "C"  float LTDescrImpl_get_directionLast_m3115875412 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_directionLast(System.Single)
extern "C"  void LTDescrImpl_set_directionLast_m3921693335 (LTDescrImpl_t751309081 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTDescrImpl::get_overshoot()
extern "C"  float LTDescrImpl_get_overshoot_m1181164266 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_overshoot(System.Single)
extern "C"  void LTDescrImpl_set_overshoot_m1536157633 (LTDescrImpl_t751309081 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTDescrImpl::get_period()
extern "C"  float LTDescrImpl_get_period_m3085185636 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_period(System.Single)
extern "C"  void LTDescrImpl_set_period_m2985266439 (LTDescrImpl_t751309081 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_destroyOnComplete()
extern "C"  bool LTDescrImpl_get_destroyOnComplete_m1636200193 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_destroyOnComplete(System.Boolean)
extern "C"  void LTDescrImpl_set_destroyOnComplete_m3920599592 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform LTDescrImpl::get_trans()
extern "C"  Transform_t1659122786 * LTDescrImpl_get_trans_m3476635417 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_trans(UnityEngine.Transform)
extern "C"  void LTDescrImpl_set_trans_m350171350 (LTDescrImpl_t751309081 * __this, Transform_t1659122786 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform LTDescrImpl::get_toTrans()
extern "C"  Transform_t1659122786 * LTDescrImpl_get_toTrans_m76020766 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_toTrans(UnityEngine.Transform)
extern "C"  void LTDescrImpl_set_toTrans_m1525660785 (LTDescrImpl_t751309081 * __this, Transform_t1659122786 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTDescrImpl::get_ltRect()
extern "C"  LTRect_t2255934348 * LTDescrImpl_get_ltRect_m3838383362 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_ltRect(LTRect)
extern "C"  void LTDescrImpl_set_ltRect_m2645674915 (LTDescrImpl_t751309081 * __this, LTRect_t2255934348 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescrImpl::get_from()
extern "C"  Vector3_t4282066566  LTDescrImpl_get_from_m1725299487 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_from(UnityEngine.Vector3)
extern "C"  void LTDescrImpl_set_from_m2763329388 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescrImpl::get_to()
extern "C"  Vector3_t4282066566  LTDescrImpl_get_to_m3783208624 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_to(UnityEngine.Vector3)
extern "C"  void LTDescrImpl_set_to_m2071823547 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescrImpl::get_diff()
extern "C"  Vector3_t4282066566  LTDescrImpl_get_diff_m1659454650 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_diff(UnityEngine.Vector3)
extern "C"  void LTDescrImpl_set_diff_m1994387953 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescrImpl::get_point()
extern "C"  Vector3_t4282066566  LTDescrImpl_get_point_m2138453021 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_point(UnityEngine.Vector3)
extern "C"  void LTDescrImpl_set_point_m1305453002 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescrImpl::get_axis()
extern "C"  Vector3_t4282066566  LTDescrImpl_get_axis_m1587521878 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_axis(UnityEngine.Vector3)
extern "C"  void LTDescrImpl_set_axis_m1640345557 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion LTDescrImpl::get_origRotation()
extern "C"  Quaternion_t1553702882  LTDescrImpl_get_origRotation_m1009987550 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_origRotation(UnityEngine.Quaternion)
extern "C"  void LTDescrImpl_set_origRotation_m406202253 (LTDescrImpl_t751309081 * __this, Quaternion_t1553702882  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTBezierPath LTDescrImpl::get_path()
extern "C"  LTBezierPath_t2218404684 * LTDescrImpl_get_path_m3842664219 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_path(LTBezierPath)
extern "C"  void LTDescrImpl_set_path_m1178254524 (LTDescrImpl_t751309081 * __this, LTBezierPath_t2218404684 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTSpline LTDescrImpl::get_spline()
extern "C"  LTSpline_t3328440185 * LTDescrImpl_get_spline_m2394562548 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_spline(LTSpline)
extern "C"  void LTDescrImpl_set_spline_m1240562139 (LTDescrImpl_t751309081 * __this, LTSpline_t3328440185 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenAction LTDescrImpl::get_type()
extern "C"  int32_t LTDescrImpl_get_type_m2465577431 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_type(TweenAction)
extern "C"  void LTDescrImpl_set_type_m778168500 (LTDescrImpl_t751309081 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LeanTweenType LTDescrImpl::get_tweenType()
extern "C"  int32_t LTDescrImpl_get_tweenType_m2145329516 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_tweenType(LeanTweenType)
extern "C"  void LTDescrImpl_set_tweenType_m3904148623 (LTDescrImpl_t751309081 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve LTDescrImpl::get_animationCurve()
extern "C"  AnimationCurve_t3667593487 * LTDescrImpl_get_animationCurve_m1291359927 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_animationCurve(UnityEngine.AnimationCurve)
extern "C"  void LTDescrImpl_set_animationCurve_m1875037164 (LTDescrImpl_t751309081 * __this, AnimationCurve_t3667593487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LeanTweenType LTDescrImpl::get_loopType()
extern "C"  int32_t LTDescrImpl_get_loopType_m47092569 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_loopType(LeanTweenType)
extern "C"  void LTDescrImpl_set_loopType_m2284485170 (LTDescrImpl_t751309081 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescrImpl::get_hasUpdateCallback()
extern "C"  bool LTDescrImpl_get_hasUpdateCallback_m3906039575 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_hasUpdateCallback(System.Boolean)
extern "C"  void LTDescrImpl_set_hasUpdateCallback_m177585086 (LTDescrImpl_t751309081 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.Single> LTDescrImpl::get_onUpdateFloat()
extern "C"  Action_1_t392767812 * LTDescrImpl_get_onUpdateFloat_m3728827903 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onUpdateFloat(System.Action`1<System.Single>)
extern "C"  void LTDescrImpl_set_onUpdateFloat_m3233932198 (LTDescrImpl_t751309081 * __this, Action_1_t392767812 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<System.Single,System.Single> LTDescrImpl::get_onUpdateFloatRatio()
extern "C"  Action_2_t1327107275 * LTDescrImpl_get_onUpdateFloatRatio_m3781952818 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onUpdateFloatRatio(System.Action`2<System.Single,System.Single>)
extern "C"  void LTDescrImpl_set_onUpdateFloatRatio_m2076034153 (LTDescrImpl_t751309081 * __this, Action_2_t1327107275 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<System.Single,System.Object> LTDescrImpl::get_onUpdateFloatObject()
extern "C"  Action_2_t1206004674 * LTDescrImpl_get_onUpdateFloatObject_m1013302865 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onUpdateFloatObject(System.Action`2<System.Single,System.Object>)
extern "C"  void LTDescrImpl_set_onUpdateFloatObject_m772491000 (LTDescrImpl_t751309081 * __this, Action_2_t1206004674 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<UnityEngine.Vector2> LTDescrImpl::get_onUpdateVector2()
extern "C"  Action_1_t382915405 * LTDescrImpl_get_onUpdateVector2_m3474292803 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onUpdateVector2(System.Action`1<UnityEngine.Vector2>)
extern "C"  void LTDescrImpl_set_onUpdateVector2_m2087790314 (LTDescrImpl_t751309081 * __this, Action_1_t382915405 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<UnityEngine.Vector3> LTDescrImpl::get_onUpdateVector3()
extern "C"  Action_1_t382915406 * LTDescrImpl_get_onUpdateVector3_m3804059525 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onUpdateVector3(System.Action`1<UnityEngine.Vector3>)
extern "C"  void LTDescrImpl_set_onUpdateVector3_m1165107692 (LTDescrImpl_t751309081 * __this, Action_1_t382915406 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrImpl::get_onUpdateVector3Object()
extern "C"  Action_2_t3399808592 * LTDescrImpl_get_onUpdateVector3Object_m2893962839 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onUpdateVector3Object(System.Action`2<UnityEngine.Vector3,System.Object>)
extern "C"  void LTDescrImpl_set_onUpdateVector3Object_m3980444606 (LTDescrImpl_t751309081 * __this, Action_2_t3399808592 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<UnityEngine.Color> LTDescrImpl::get_onUpdateColor()
extern "C"  Action_1_t295395745 * LTDescrImpl_get_onUpdateColor_m127949355 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onUpdateColor(System.Action`1<UnityEngine.Color>)
extern "C"  void LTDescrImpl_set_onUpdateColor_m659544466 (LTDescrImpl_t751309081 * __this, Action_1_t295395745 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action LTDescrImpl::get_onComplete()
extern "C"  Action_t3771233898 * LTDescrImpl_get_onComplete_m212923273 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onComplete(System.Action)
extern "C"  void LTDescrImpl_set_onComplete_m2377766530 (LTDescrImpl_t751309081 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.Object> LTDescrImpl::get_onCompleteObject()
extern "C"  Action_1_t271665211 * LTDescrImpl_get_onCompleteObject_m2400096695 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onCompleteObject(System.Action`1<System.Object>)
extern "C"  void LTDescrImpl_set_onCompleteObject_m2196926660 (LTDescrImpl_t751309081 * __this, Action_1_t271665211 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LTDescrImpl::get_onCompleteParam()
extern "C"  Il2CppObject * LTDescrImpl_get_onCompleteParam_m1721852669 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onCompleteParam(System.Object)
extern "C"  void LTDescrImpl_set_onCompleteParam_m3975616896 (LTDescrImpl_t751309081 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LTDescrImpl::get_onUpdateParam()
extern "C"  Il2CppObject * LTDescrImpl_get_onUpdateParam_m4151812973 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onUpdateParam(System.Object)
extern "C"  void LTDescrImpl_set_onUpdateParam_m2933812560 (LTDescrImpl_t751309081 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action LTDescrImpl::get_onStart()
extern "C"  Action_t3771233898 * LTDescrImpl_get_onStart_m1765331892 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::set_onStart(System.Action)
extern "C"  void LTDescrImpl_set_onStart_m204197659 (LTDescrImpl_t751309081 * __this, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LTDescrImpl::ToString()
extern "C"  String_t* LTDescrImpl_ToString_m2028186799 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::cancel(UnityEngine.GameObject)
extern "C"  Il2CppObject * LTDescrImpl_cancel_m3944994110 (LTDescrImpl_t751309081 * __this, GameObject_t3674682005 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTDescrImpl::get_uniqueId()
extern "C"  int32_t LTDescrImpl_get_uniqueId_m3587120069 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTDescrImpl::get_id()
extern "C"  int32_t LTDescrImpl_get_id_m4292642388 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::reset()
extern "C"  void LTDescrImpl_reset_m4107772427 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::cleanup()
extern "C"  void LTDescrImpl_cleanup_m1493296992 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescrImpl::init()
extern "C"  void LTDescrImpl_init_m3485102902 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setFromColor(UnityEngine.Color)
extern "C"  Il2CppObject * LTDescrImpl_setFromColor_m2068988067 (LTDescrImpl_t751309081 * __this, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::pause()
extern "C"  Il2CppObject * LTDescrImpl_pause_m2391027404 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::resume()
extern "C"  Il2CppObject * LTDescrImpl_resume_m3792959289 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setAxis(UnityEngine.Vector3)
extern "C"  Il2CppObject * LTDescrImpl_setAxis_m3658128320 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setDelay(System.Single)
extern "C"  Il2CppObject * LTDescrImpl_setDelay_m2905399614 (LTDescrImpl_t751309081 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setEase(LeanTweenType)
extern "C"  Il2CppObject * LTDescrImpl_setEase_m738314093 (LTDescrImpl_t751309081 * __this, int32_t ___easeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOvershoot(System.Single)
extern "C"  Il2CppObject * LTDescrImpl_setOvershoot_m4233646710 (LTDescrImpl_t751309081 * __this, float ___overshoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setPeriod(System.Single)
extern "C"  Il2CppObject * LTDescrImpl_setPeriod_m717563506 (LTDescrImpl_t751309081 * __this, float ___period0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setEase(UnityEngine.AnimationCurve)
extern "C"  Il2CppObject * LTDescrImpl_setEase_m2197302724 (LTDescrImpl_t751309081 * __this, AnimationCurve_t3667593487 * ___easeCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setTo(UnityEngine.Vector3)
extern "C"  Il2CppObject * LTDescrImpl_setTo_m357724006 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___to0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setTo(UnityEngine.Transform)
extern "C"  Il2CppObject * LTDescrImpl_setTo_m2725896074 (LTDescrImpl_t751309081 * __this, Transform_t1659122786 * ___to0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setFrom(UnityEngine.Vector3)
extern "C"  Il2CppObject * LTDescrImpl_setFrom_m486144855 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setFrom(System.Single)
extern "C"  Il2CppObject * LTDescrImpl_setFrom_m99337129 (LTDescrImpl_t751309081 * __this, float ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setDiff(UnityEngine.Vector3)
extern "C"  Il2CppObject * LTDescrImpl_setDiff_m4012170716 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___diff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setHasInitialized(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setHasInitialized_m249647785 (LTDescrImpl_t751309081 * __this, bool ___has0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setId(System.UInt32)
extern "C"  Il2CppObject * LTDescrImpl_setId_m18451367 (LTDescrImpl_t751309081 * __this, uint32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setTime(System.Single)
extern "C"  Il2CppObject * LTDescrImpl_setTime_m2923003430 (LTDescrImpl_t751309081 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setRepeat(System.Int32)
extern "C"  Il2CppObject * LTDescrImpl_setRepeat_m3635760644 (LTDescrImpl_t751309081 * __this, int32_t ___repeat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setLoopType(LeanTweenType)
extern "C"  Il2CppObject * LTDescrImpl_setLoopType_m570385629 (LTDescrImpl_t751309081 * __this, int32_t ___loopType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setUseEstimatedTime(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setUseEstimatedTime_m12634097 (LTDescrImpl_t751309081 * __this, bool ___useEstimatedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setIgnoreTimeScale(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setIgnoreTimeScale_m2003752012 (LTDescrImpl_t751309081 * __this, bool ___useUnScaledTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setUseFrames(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setUseFrames_m4068819790 (LTDescrImpl_t751309081 * __this, bool ___useFrames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setUseManualTime(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setUseManualTime_m3588089947 (LTDescrImpl_t751309081 * __this, bool ___useManualTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setLoopCount(System.Int32)
extern "C"  Il2CppObject * LTDescrImpl_setLoopCount_m3548566566 (LTDescrImpl_t751309081 * __this, int32_t ___loopCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setLoopOnce()
extern "C"  Il2CppObject * LTDescrImpl_setLoopOnce_m316754589 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setLoopClamp()
extern "C"  Il2CppObject * LTDescrImpl_setLoopClamp_m3405517569 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setLoopClamp(System.Int32)
extern "C"  Il2CppObject * LTDescrImpl_setLoopClamp_m4018687698 (LTDescrImpl_t751309081 * __this, int32_t ___loops0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setLoopPingPong()
extern "C"  Il2CppObject * LTDescrImpl_setLoopPingPong_m227355878 (LTDescrImpl_t751309081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setLoopPingPong(System.Int32)
extern "C"  Il2CppObject * LTDescrImpl_setLoopPingPong_m124827959 (LTDescrImpl_t751309081 * __this, int32_t ___loops0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnComplete(System.Action)
extern "C"  Il2CppObject * LTDescrImpl_setOnComplete_m100581997 (LTDescrImpl_t751309081 * __this, Action_t3771233898 * ___onComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnComplete(System.Action`1<System.Object>)
extern "C"  Il2CppObject * LTDescrImpl_setOnComplete_m3013824602 (LTDescrImpl_t751309081 * __this, Action_1_t271665211 * ___onComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnComplete(System.Action`1<System.Object>,System.Object)
extern "C"  Il2CppObject * LTDescrImpl_setOnComplete_m1618015656 (LTDescrImpl_t751309081 * __this, Action_1_t271665211 * ___onComplete0, Il2CppObject * ___onCompleteParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnCompleteParam(System.Object)
extern "C"  Il2CppObject * LTDescrImpl_setOnCompleteParam_m2467293301 (LTDescrImpl_t751309081 * __this, Il2CppObject * ___onCompleteParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdate(System.Action`1<System.Single>)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdate_m2876540979 (LTDescrImpl_t751309081 * __this, Action_1_t392767812 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdateRatio(System.Action`2<System.Single,System.Single>)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdateRatio_m2705568444 (LTDescrImpl_t751309081 * __this, Action_2_t1327107275 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdateObject(System.Action`2<System.Single,System.Object>)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdateObject_m3108184837 (LTDescrImpl_t751309081 * __this, Action_2_t1206004674 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdateVector2(System.Action`1<UnityEngine.Vector2>)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdateVector2_m3922613333 (LTDescrImpl_t751309081 * __this, Action_1_t382915405 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdateVector3(System.Action`1<UnityEngine.Vector3>)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdateVector3_m2999930711 (LTDescrImpl_t751309081 * __this, Action_1_t382915406 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdateColor(System.Action`1<UnityEngine.Color>)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdateColor_m3264902269 (LTDescrImpl_t751309081 * __this, Action_1_t295395745 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdate(System.Action`1<UnityEngine.Color>)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdate_m1210587672 (LTDescrImpl_t751309081 * __this, Action_1_t295395745 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdate(System.Action`2<System.Single,System.Object>,System.Object)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdate_m5023092 (LTDescrImpl_t751309081 * __this, Action_2_t1206004674 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdate(System.Action`2<UnityEngine.Vector3,System.Object>,System.Object)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdate_m3149703622 (LTDescrImpl_t751309081 * __this, Action_2_t3399808592 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdate(System.Action`1<UnityEngine.Vector2>,System.Object)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdate_m2611490898 (LTDescrImpl_t751309081 * __this, Action_1_t382915405 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdate(System.Action`1<UnityEngine.Vector3>,System.Object)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdate_m3964800595 (LTDescrImpl_t751309081 * __this, Action_1_t382915406 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnUpdateParam(System.Object)
extern "C"  Il2CppObject * LTDescrImpl_setOnUpdateParam_m2337830277 (LTDescrImpl_t751309081 * __this, Il2CppObject * ___onUpdateParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOrientToPath(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setOrientToPath_m739916916 (LTDescrImpl_t751309081 * __this, bool ___doesOrient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOrientToPath2d(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setOrientToPath2d_m1964777446 (LTDescrImpl_t751309081 * __this, bool ___doesOrient2d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setRect(LTRect)
extern "C"  Il2CppObject * LTDescrImpl_setRect_m640346288 (LTDescrImpl_t751309081 * __this, LTRect_t2255934348 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setRect(UnityEngine.Rect)
extern "C"  Il2CppObject * LTDescrImpl_setRect_m3423761089 (LTDescrImpl_t751309081 * __this, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setPath(LTBezierPath)
extern "C"  Il2CppObject * LTDescrImpl_setPath_m360878897 (LTDescrImpl_t751309081 * __this, LTBezierPath_t2218404684 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setPoint(UnityEngine.Vector3)
extern "C"  Il2CppObject * LTDescrImpl_setPoint_m3727176511 (LTDescrImpl_t751309081 * __this, Vector3_t4282066566  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setDestroyOnComplete(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setDestroyOnComplete_m3400231699 (LTDescrImpl_t751309081 * __this, bool ___doesDestroy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setAudio(System.Object)
extern "C"  Il2CppObject * LTDescrImpl_setAudio_m2184605300 (LTDescrImpl_t751309081 * __this, Il2CppObject * ___audio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnCompleteOnRepeat(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setOnCompleteOnRepeat_m3350645761 (LTDescrImpl_t751309081 * __this, bool ___isOn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnCompleteOnStart(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setOnCompleteOnStart_m184133548 (LTDescrImpl_t751309081 * __this, bool ___isOn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setRect(UnityEngine.RectTransform)
extern "C"  Il2CppObject * LTDescrImpl_setRect_m2013910725 (LTDescrImpl_t751309081 * __this, RectTransform_t972643934 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setSprites(UnityEngine.Sprite[])
extern "C"  Il2CppObject * LTDescrImpl_setSprites_m2163718266 (LTDescrImpl_t751309081 * __this, SpriteU5BU5D_t2761310900* ___sprites0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setFrameRate(System.Single)
extern "C"  Il2CppObject * LTDescrImpl_setFrameRate_m3804039700 (LTDescrImpl_t751309081 * __this, float ___frameRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setOnStart(System.Action)
extern "C"  Il2CppObject * LTDescrImpl_setOnStart_m2919850768 (LTDescrImpl_t751309081 * __this, Action_t3771233898 * ___onStart0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setDirection(System.Single)
extern "C"  Il2CppObject * LTDescrImpl_setDirection_m3654359106 (LTDescrImpl_t751309081 * __this, float ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescrImpl::setRecursive(System.Boolean)
extern "C"  Il2CppObject * LTDescrImpl_setRecursive_m1931872371 (LTDescrImpl_t751309081 * __this, bool ___useRecursion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
