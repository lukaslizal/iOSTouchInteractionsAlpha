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

// LTRect
struct LTRect_t2255934348;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_String7231557.h"

// System.Void LTRect::.ctor()
extern "C"  void LTRect__ctor_m973882947 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(UnityEngine.Rect)
extern "C"  void LTRect__ctor_m3859666440 (LTRect_t2255934348 * __this, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m3191601335 (LTRect_t2255934348 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m2201843548 (LTRect_t2255934348 * __this, float ___x0, float ___y1, float ___width2, float ___height3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m3677745473 (LTRect_t2255934348 * __this, float ___x0, float ___y1, float ___width2, float ___height3, float ___alpha4, float ___rotation5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTRect::get_hasInitiliazed()
extern "C"  bool LTRect_get_hasInitiliazed_m667192346 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTRect::get_id()
extern "C"  int32_t LTRect_get_id_m212560411 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::setId(System.Int32,System.Int32)
extern "C"  void LTRect_setId_m1376256904 (LTRect_t2255934348 * __this, int32_t ___id0, int32_t ___counter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::reset()
extern "C"  void LTRect_reset_m1250629904 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::resetForRotation()
extern "C"  void LTRect_resetForRotation_m3808443161 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_x()
extern "C"  float LTRect_get_x_m3191672388 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_x(System.Single)
extern "C"  void LTRect_set_x_m1204100751 (LTRect_t2255934348 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_y()
extern "C"  float LTRect_get_y_m3191673349 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_y(System.Single)
extern "C"  void LTRect_set_y_m693566574 (LTRect_t2255934348 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_width()
extern "C"  float LTRect_get_width_m1581171346 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_width(System.Single)
extern "C"  void LTRect_set_width_m3811362049 (LTRect_t2255934348 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_height()
extern "C"  float LTRect_get_height_m2275485821 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_height(System.Single)
extern "C"  void LTRect_set_height_m339155110 (LTRect_t2255934348 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect LTRect::get_rect()
extern "C"  Rect_t4241904616  LTRect_get_rect_m1800290136 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_rect(UnityEngine.Rect)
extern "C"  void LTRect_set_rect_m1517369255 (LTRect_t2255934348 * __this, Rect_t4241904616  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setStyle(UnityEngine.GUIStyle)
extern "C"  LTRect_t2255934348 * LTRect_setStyle_m3184343548 (LTRect_t2255934348 * __this, GUIStyle_t2990928826 * ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setFontScaleToFit(System.Boolean)
extern "C"  LTRect_t2255934348 * LTRect_setFontScaleToFit_m1563120028 (LTRect_t2255934348 * __this, bool ___fontScaleToFit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setColor(UnityEngine.Color)
extern "C"  LTRect_t2255934348 * LTRect_setColor_m21882507 (LTRect_t2255934348 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setAlpha(System.Single)
extern "C"  LTRect_t2255934348 * LTRect_setAlpha_m2167554357 (LTRect_t2255934348 * __this, float ___alpha0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setLabel(System.String)
extern "C"  LTRect_t2255934348 * LTRect_setLabel_m2971628086 (LTRect_t2255934348 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setUseSimpleScale(System.Boolean,UnityEngine.Rect)
extern "C"  LTRect_t2255934348 * LTRect_setUseSimpleScale_m627938905 (LTRect_t2255934348 * __this, bool ___useSimpleScale0, Rect_t4241904616  ___relativeRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setUseSimpleScale(System.Boolean)
extern "C"  LTRect_t2255934348 * LTRect_setUseSimpleScale_m2767126066 (LTRect_t2255934348 * __this, bool ___useSimpleScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setSizeByHeight(System.Boolean)
extern "C"  LTRect_t2255934348 * LTRect_setSizeByHeight_m305889600 (LTRect_t2255934348 * __this, bool ___sizeByHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LTRect::ToString()
extern "C"  String_t* LTRect_ToString_m3406069360 (LTRect_t2255934348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
