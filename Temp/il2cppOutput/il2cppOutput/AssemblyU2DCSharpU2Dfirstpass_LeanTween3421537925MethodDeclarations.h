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

// LeanTween
struct LeanTween_t3421537925;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// LTDescrImpl
struct LTDescrImpl_t751309081;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// LTRect
struct LTRect_t2255934348;
// LTDescr
struct LTDescr_t1201573721;
// LTDescr[]
struct LTDescrU5BU5D_t1413804836;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Object>
struct Action_1_t271665211;
// LTBezierPath
struct LTBezierPath_t2218404684;
// LTSpline
struct LTSpline_t3328440185;
// System.Action`1<System.Single>
struct Action_1_t392767812;
// System.Action`2<System.Single,System.Single>
struct Action_2_t1327107275;
// System.Action`1<UnityEngine.Color>
struct Action_1_t295395745;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t382915405;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t382915406;
// System.Action`2<System.Single,System.Object>
struct Action_2_t1206004674;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// System.Action`1<LTEvent>
struct Action_1_t1598806714;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1080795294.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM3067001883.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTDescrImpl751309081.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTRect2255934348.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TweenAction327588961.h"
#include "UnityEngine_UnityEngine_CanvasGroup3702418109.h"
#include "System_Core_System_Action3771233898.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTBezierPath2218404684.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTSpline3328440185.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void LeanTween::.ctor()
extern "C"  void LeanTween__ctor_m4183756882 (LeanTween_t3421537925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::.cctor()
extern "C"  void LeanTween__cctor_m365348251 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::init()
extern "C"  void LeanTween_init_m2803744674 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanTween::get_maxSearch()
extern "C"  int32_t LeanTween_get_maxSearch_m477897417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanTween::get_maxSimulataneousTweens()
extern "C"  int32_t LeanTween_get_maxSimulataneousTweens_m3718985343 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanTween::get_tweensRunning()
extern "C"  int32_t LeanTween_get_tweensRunning_m76317460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::init(System.Int32)
extern "C"  void LeanTween_init_m2867794419 (Il2CppObject * __this /* static, unused */, int32_t ___maxSimultaneousTweens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::reset()
extern "C"  void LeanTween_reset_m165536543 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::Update()
extern "C"  void LeanTween_Update_m2574306555 (LeanTween_t3421537925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::onLevelWasLoaded54(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void LeanTween_onLevelWasLoaded54_m2196348987 (Il2CppObject * __this /* static, unused */, Scene_t1080795294  ___scene0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::internalOnLevelWasLoaded(System.Int32)
extern "C"  void LeanTween_internalOnLevelWasLoaded_m1535355305 (Il2CppObject * __this /* static, unused */, int32_t ___lvl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::update()
extern "C"  void LeanTween_update_m2509662427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::alphaRecursive(UnityEngine.Transform,System.Single,System.Boolean)
extern "C"  void LeanTween_alphaRecursive_m2129299233 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, float ___val1, bool ___useRecursion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::colorRecursive(UnityEngine.Transform,UnityEngine.Color,System.Boolean)
extern "C"  void LeanTween_colorRecursive_m1152750689 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, Color_t4194546905  ___toColor1, bool ___useRecursion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::alphaRecursive(UnityEngine.RectTransform,System.Single,System.Int32)
extern "C"  void LeanTween_alphaRecursive_m3524651767 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, float ___val1, int32_t ___recursiveLevel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::alphaRecursiveSprite(UnityEngine.Transform,System.Single)
extern "C"  void LeanTween_alphaRecursiveSprite_m318186711 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::colorRecursiveSprite(UnityEngine.Transform,UnityEngine.Color)
extern "C"  void LeanTween_colorRecursiveSprite_m3218399831 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, Color_t4194546905  ___toColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::colorRecursive(UnityEngine.RectTransform,UnityEngine.Color)
extern "C"  void LeanTween_colorRecursive_m1013566496 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, Color_t4194546905  ___toColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::textAlphaRecursive(UnityEngine.Transform,System.Single,System.Boolean)
extern "C"  void LeanTween_textAlphaRecursive_m3008092334 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, float ___val1, bool ___useRecursion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::textColorRecursive(UnityEngine.Transform,UnityEngine.Color)
extern "C"  void LeanTween_textColorRecursive_m634894383 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, Color_t4194546905  ___toColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color LeanTween::tweenColor(LTDescrImpl,System.Single)
extern "C"  Color_t4194546905  LeanTween_tweenColor_m2809151003 (Il2CppObject * __this /* static, unused */, LTDescrImpl_t751309081 * ___tween0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::removeTween(System.Int32,System.Int32)
extern "C"  void LeanTween_removeTween_m3528462895 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::removeTween(System.Int32)
extern "C"  void LeanTween_removeTween_m3845602216 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] LeanTween::add(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t215400611* LeanTween_add_m3680542305 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___a0, Vector3_t4282066566  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::closestRot(System.Single,System.Single)
extern "C"  float LeanTween_closestRot_m4197010188 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancelAll()
extern "C"  void LeanTween_cancelAll_m1884647703 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancelAll(System.Boolean)
extern "C"  void LeanTween_cancelAll_m2795041358 (Il2CppObject * __this /* static, unused */, bool ___callComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.GameObject)
extern "C"  void LeanTween_cancel_m3395101892 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.GameObject,System.Boolean)
extern "C"  void LeanTween_cancel_m3525611065 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, bool ___callOnComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(UnityEngine.GameObject,System.Int32)
extern "C"  void LeanTween_cancel_m3255752339 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(LTRect,System.Int32)
extern "C"  void LeanTween_cancel_m531558103 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___ltRect0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(System.Int32)
extern "C"  void LeanTween_cancel_m1979472285 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::cancel(System.Int32,System.Boolean)
extern "C"  void LeanTween_cancel_m1784409152 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, bool ___callOnComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::descr(System.Int32)
extern "C"  Il2CppObject * LeanTween_descr_m1873412732 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::description(System.Int32)
extern "C"  Il2CppObject * LeanTween_description_m930196599 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr[] LeanTween::descriptions(UnityEngine.GameObject)
extern "C"  LTDescrU5BU5D_t1413804836* LeanTween_descriptions_m3874095945 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(UnityEngine.GameObject,System.Int32)
extern "C"  void LeanTween_pause_m2819474585 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(System.Int32)
extern "C"  void LeanTween_pause_m1399011927 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pause(UnityEngine.GameObject)
extern "C"  void LeanTween_pause_m3939886334 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::pauseAll()
extern "C"  void LeanTween_pauseAll_m2531129117 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resumeAll()
extern "C"  void LeanTween_resumeAll_m3377262404 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(UnityEngine.GameObject,System.Int32)
extern "C"  void LeanTween_resume_m3430572224 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(System.Int32)
extern "C"  void LeanTween_resume_m1501265424 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::resume(UnityEngine.GameObject)
extern "C"  void LeanTween_resume_m2801505655 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(UnityEngine.GameObject)
extern "C"  bool LeanTween_isTweening_m2606222735 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(System.Int32)
extern "C"  bool LeanTween_isTweening_m740455464 (Il2CppObject * __this /* static, unused */, int32_t ___uniqueId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::isTweening(LTRect)
extern "C"  bool LeanTween_isTweening_m1743424715 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___ltRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::drawBezierPath(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Transform)
extern "C"  void LeanTween_drawBezierPath_m1764834196 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___a0, Vector3_t4282066566  ___b1, Vector3_t4282066566  ___c2, Vector3_t4282066566  ___d3, float ___arrowSize4, Transform_t1659122786 * ___arrowTransform5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LeanTween::logError(System.String)
extern "C"  Il2CppObject * LeanTween_logError_m89289985 (Il2CppObject * __this /* static, unused */, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::options(LTDescr)
extern "C"  Il2CppObject * LeanTween_options_m3340311665 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::options()
extern "C"  Il2CppObject * LeanTween_options_m160390856 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LeanTween::get_tweenEmpty()
extern "C"  GameObject_t3674682005 * LeanTween_get_tweenEmpty_m911670528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::pushNewTween(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,TweenAction,LTDescr)
extern "C"  Il2CppObject * LeanTween_pushNewTween_m2925894443 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___to1, float ___time2, int32_t ___tweenAction3, Il2CppObject * ___tween4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::play(UnityEngine.RectTransform,UnityEngine.Sprite[])
extern "C"  Il2CppObject * LeanTween_play_m26097459 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, SpriteU5BU5D_t2761310900* ___sprites1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_alpha_m2006555210 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(LTRect,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_alpha_m1731324294 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___ltRect0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::textAlpha(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_textAlpha_m485283664 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alphaText(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_alphaText_m2528516758 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alphaCanvas(UnityEngine.CanvasGroup,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_alphaCanvas_m510275084 (Il2CppObject * __this /* static, unused */, CanvasGroup_t3702418109 * ___canvasGroup0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alphaVertex(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_alphaVertex_m3791781070 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::color(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * LeanTween_color_m2905329034 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Color_t4194546905  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::textColor(UnityEngine.RectTransform,UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * LeanTween_textColor_m896280422 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, Color_t4194546905  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::colorText(UnityEngine.RectTransform,UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * LeanTween_colorText_m4174869036 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, Color_t4194546905  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(System.Single,System.Action)
extern "C"  Il2CppObject * LeanTween_delayedCall_m3630031064 (Il2CppObject * __this /* static, unused */, float ___delayTime0, Action_t3771233898 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(System.Single,System.Action`1<System.Object>)
extern "C"  Il2CppObject * LeanTween_delayedCall_m1285387599 (Il2CppObject * __this /* static, unused */, float ___delayTime0, Action_1_t271665211 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action)
extern "C"  Il2CppObject * LeanTween_delayedCall_m1410517982 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___delayTime1, Action_t3771233898 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action`1<System.Object>)
extern "C"  Il2CppObject * LeanTween_delayedCall_m3043440393 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___delayTime1, Action_1_t271665211 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::destroyAfter(LTRect,System.Single)
extern "C"  Il2CppObject * LeanTween_destroyAfter_m1246039315 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___rect0, float ___delayTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_move_m3260697657 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector2,System.Single)
extern "C"  Il2CppObject * LeanTween_move_m3771231834 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector2_t4282066565  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  Il2CppObject * LeanTween_move_m549339607 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3U5BU5D_t215400611* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,LTBezierPath,System.Single)
extern "C"  Il2CppObject * LeanTween_move_m4098920126 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, LTBezierPath_t2218404684 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,LTSpline,System.Single)
extern "C"  Il2CppObject * LeanTween_move_m3956326641 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, LTSpline_t3328440185 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveSpline(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  Il2CppObject * LeanTween_moveSpline_m4038936648 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3U5BU5D_t215400611* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveSpline(UnityEngine.GameObject,LTSpline,System.Single)
extern "C"  Il2CppObject * LeanTween_moveSpline_m3105036000 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, LTSpline_t3328440185 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveSplineLocal(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  Il2CppObject * LeanTween_moveSplineLocal_m1524503745 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3U5BU5D_t215400611* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  Il2CppObject * LeanTween_move_m1376846486 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___ltRect0, Vector2_t4282066565  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveMargin(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  Il2CppObject * LeanTween_moveMargin_m1024527588 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___ltRect0, Vector2_t4282066565  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveX_m4039394579 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveY_m2113861268 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveZ_m188327957 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_moveLocal_m1253521844 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C"  Il2CppObject * LeanTween_moveLocal_m93699218 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3U5BU5D_t215400611* ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveLocalX_m2627835576 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveLocalY_m702302265 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocalZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveLocalZ_m3071736250 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,LTBezierPath,System.Single)
extern "C"  Il2CppObject * LeanTween_moveLocal_m2586838435 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, LTBezierPath_t2218404684 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,LTSpline,System.Single)
extern "C"  Il2CppObject * LeanTween_moveLocal_m1440838230 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, LTSpline_t3328440185 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Transform,System.Single)
extern "C"  Il2CppObject * LeanTween_move_m4189800925 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Transform_t1659122786 * ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_rotate_m1583721347 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(LTRect,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotate_m3303224017 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___ltRect0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_rotateLocal_m406182058 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotateX_m1677262729 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotateY_m4046696714 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotateZ_m2121163403 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAround(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotateAround_m503061653 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___axis1, float ___add2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAroundLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotateAroundLocal_m1844692674 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___axis1, float ___add2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_scale_m1109431652 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(LTRect,UnityEngine.Vector2,System.Single)
extern "C"  Il2CppObject * LeanTween_scale_m2804744641 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___ltRect0, Vector2_t4282066565  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleX(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_scaleX_m727297288 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleY(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_scaleY_m3096731273 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scaleZ(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_scaleZ_m1171197962 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m2029153026 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, float ___from1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m30732768 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector2_t4282066565  ___from1, Vector2_t4282066565  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m1470498846 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Vector3_t4282066566  ___from1, Vector3_t4282066566  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m560055608 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Color_t4194546905  ___from1, Color_t4194546905  ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<System.Single>,System.Single,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m3361152085 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Action_1_t392767812 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`2<System.Single,System.Single>,System.Single,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m2837789649 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Action_2_t1327107275 * ___callOnUpdateRatio1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Color>,UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m112324784 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Action_1_t295395745 * ___callOnUpdate1, Color_t4194546905  ___from2, Color_t4194546905  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Vector2>,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m3451652612 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Action_1_t382915405 * ___callOnUpdate1, Vector2_t4282066565  ___from2, Vector2_t4282066565  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`1<UnityEngine.Vector3>,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m1226910019 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Action_1_t382915406 * ___callOnUpdate1, Vector3_t4282066566  ___from2, Vector3_t4282066566  ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Action`2<System.Single,System.Object>,System.Single,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_value_m2647917640 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, Action_2_t1206004674 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedSound(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_delayedSound_m2770091254 (Il2CppObject * __this /* static, unused */, AudioClip_t794140988 * ___audio0, Vector3_t4282066566  ___pos1, float ___volume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::delayedSound(UnityEngine.GameObject,UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_delayedSound_m214996242 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, AudioClip_t794140988 * ___audio1, Vector3_t4282066566  ___pos2, float ___volume3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::move(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_move_m4071701264 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, Vector3_t4282066566  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveX(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveX_m1193865114 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveY(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveY_m1214202489 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::moveZ(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_moveZ_m1234539864 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotate(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotate_m3089784792 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAround(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotateAround_m3409276254 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, Vector3_t4282066566  ___axis1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::rotateAroundLocal(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_rotateAroundLocal_m2973366289 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, Vector3_t4282066566  ___axis1, float ___to2, float ___time3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::scale(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * LeanTween_scale_m913169925 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, Vector3_t4282066566  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::alpha(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  Il2CppObject * LeanTween_alpha_m4210064131 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LeanTween::color(UnityEngine.RectTransform,UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * LeanTween_color_m1556134297 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTrans0, Color_t4194546905  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::tweenOnCurve(LTDescrImpl,System.Single)
extern "C"  float LeanTween_tweenOnCurve_m995930643 (Il2CppObject * __this /* static, unused */, LTDescrImpl_t751309081 * ___tweenDescr0, float ___ratioPassed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LeanTween::tweenOnCurveVector(LTDescrImpl,System.Single)
extern "C"  Vector3_t4282066566  LeanTween_tweenOnCurveVector_m1670550526 (Il2CppObject * __this /* static, unused */, LTDescrImpl_t751309081 * ___tweenDescr0, float ___ratioPassed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuadOpt_m3077785635 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuadOpt_m1513154048 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuadOpt_m616945854 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::linear(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_linear_m2403636650 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::clerp(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_clerp_m1072796351 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::spring(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_spring_m1448763842 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuad_m2271976085 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuad_m1318200146 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuad_m1382273175 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInCubic_m1802737122 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutCubic_m2300454085 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutCubic_m4286717984 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuart_m1013626957 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuart_m1511343920 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuart_m3497607819 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInQuint_m2644777793 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutQuint_m3142494756 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutQuint_m833791359 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInSine_m1574669711 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutSine_m620893772 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutSine(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutSine_m684966801 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInExpo_m2712429834 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutExpo_m1758653895 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutExpo(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutExpo_m1822726924 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInCirc_m3940769989 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutCirc_m2986994050 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutCirc(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutCirc_m3051067079 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInBounce_m4124740788 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutBounce_m2374097457 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutBounce_m3818736182 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInBack(System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInBack_m2398907674 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutBack(System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutBack_m3272763159 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutBack(System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutBack_m3289708444 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInElastic(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInElastic_m225079297 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, float ___period4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeOutElastic(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeOutElastic_m252841892 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, float ___period4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LeanTween::easeInOutElastic(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float LeanTween_easeInOutElastic_m558627263 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, float ___overshoot3, float ___period4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::addListener(System.Int32,System.Action`1<LTEvent>)
extern "C"  void LeanTween_addListener_m3782673678 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Action_1_t1598806714 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::addListener(UnityEngine.GameObject,System.Int32,System.Action`1<LTEvent>)
extern "C"  void LeanTween_addListener_m560706602 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___caller0, int32_t ___eventId1, Action_1_t1598806714 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::removeListener(System.Int32,System.Action`1<LTEvent>)
extern "C"  bool LeanTween_removeListener_m2453094053 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Action_1_t1598806714 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LeanTween::removeListener(UnityEngine.GameObject,System.Int32,System.Action`1<LTEvent>)
extern "C"  bool LeanTween_removeListener_m2523308211 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___caller0, int32_t ___eventId1, Action_1_t1598806714 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::dispatchEvent(System.Int32)
extern "C"  void LeanTween_dispatchEvent_m3531687457 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanTween::dispatchEvent(System.Int32,System.Object)
extern "C"  void LeanTween_dispatchEvent_m2395849519 (Il2CppObject * __this /* static, unused */, int32_t ___eventId0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
