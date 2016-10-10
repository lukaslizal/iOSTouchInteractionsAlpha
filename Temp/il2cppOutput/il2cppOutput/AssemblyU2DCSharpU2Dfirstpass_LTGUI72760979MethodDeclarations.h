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

// LTGUI
struct LTGUI_t72760979;
// LTRect
struct LTRect_t2255934348;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2526458961;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTRect2255934348.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void LTGUI::.ctor()
extern "C"  void LTGUI__ctor_m4048880132 (LTGUI_t72760979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::.cctor()
extern "C"  void LTGUI__cctor_m479136297 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::init()
extern "C"  void LTGUI_init_m3769225136 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::initRectCheck()
extern "C"  void LTGUI_initRectCheck_m3374272406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::reset()
extern "C"  void LTGUI_reset_m30659793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::update(System.Int32)
extern "C"  void LTGUI_update_m1963887930 (Il2CppObject * __this /* static, unused */, int32_t ___updateLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTGUI::checkOnScreen(UnityEngine.Rect)
extern "C"  bool LTGUI_checkOnScreen_m4204356150 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::destroy(System.Int32)
extern "C"  void LTGUI_destroy_m1338288077 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTGUI::destroyAll(System.Int32)
extern "C"  void LTGUI_destroyAll_m2278162360 (Il2CppObject * __this /* static, unused */, int32_t ___depth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::label(UnityEngine.Rect,System.String,System.Int32)
extern "C"  LTRect_t2255934348 * LTGUI_label_m849687943 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, String_t* ___label1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::label(LTRect,System.String,System.Int32)
extern "C"  LTRect_t2255934348 * LTGUI_label_m1386950264 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___rect0, String_t* ___label1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::texture(UnityEngine.Rect,UnityEngine.Texture,System.Int32)
extern "C"  LTRect_t2255934348 * LTGUI_texture_m1352923156 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, Texture_t2526458961 * ___texture1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::texture(LTRect,UnityEngine.Texture,System.Int32)
extern "C"  LTRect_t2255934348 * LTGUI_texture_m605154181 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___rect0, Texture_t2526458961 * ___texture1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTGUI::element(LTRect,System.Int32)
extern "C"  LTRect_t2255934348 * LTGUI_element_m2123169644 (Il2CppObject * __this /* static, unused */, LTRect_t2255934348 * ___rect0, int32_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTGUI::hasNoOverlap(UnityEngine.Rect,System.Int32)
extern "C"  bool LTGUI_hasNoOverlap_m2736339682 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, int32_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTGUI::pressedWithinRect(UnityEngine.Rect)
extern "C"  bool LTGUI_pressedWithinRect_m1590018708 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTGUI::checkWithinRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  bool LTGUI_checkWithinRect_m403348806 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___vec20, Rect_t4241904616  ___rect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 LTGUI::firstTouch()
extern "C"  Vector2_t4282066565  LTGUI_firstTouch_m860491988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
