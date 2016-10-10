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

// TouchScript.InputSources.InputSource
struct InputSource_t3009306351;
// TouchScript.InputSources.ICoordinatesRemapper
struct ICoordinatesRemapper_t1801499272;
// TouchScript.ITouch
struct ITouch_t3979129576;
// TouchScript.Tags
struct Tags_t4162305963;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "TouchScript_TouchScript_Tags4162305963.h"

// System.Void TouchScript.InputSources.InputSource::.ctor()
extern "C"  void InputSource__ctor_m2558273966 (InputSource_t3009306351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.InputSources.ICoordinatesRemapper TouchScript.InputSources.InputSource::get_CoordinatesRemapper()
extern "C"  Il2CppObject * InputSource_get_CoordinatesRemapper_m3031672993 (InputSource_t3009306351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::set_CoordinatesRemapper(TouchScript.InputSources.ICoordinatesRemapper)
extern "C"  void InputSource_set_CoordinatesRemapper_m2368642002 (InputSource_t3009306351 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::OnEnable()
extern "C"  void InputSource_OnEnable_m1416632088 (InputSource_t3009306351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::OnDisable()
extern "C"  void InputSource_OnDisable_m1406859029 (InputSource_t3009306351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::Update()
extern "C"  void InputSource_Update_m3723943711 (InputSource_t3009306351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2)
extern "C"  Il2CppObject * InputSource_beginTouch_m2735821043 (InputSource_t3009306351 * __this, Vector2_t4282066565  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2,TouchScript.Tags)
extern "C"  Il2CppObject * InputSource_beginTouch_m991796918 (InputSource_t3009306351 * __this, Vector2_t4282066565  ___position0, Tags_t4162305963 * ___tags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::updateTouch(System.Int32)
extern "C"  void InputSource_updateTouch_m3154334579 (InputSource_t3009306351 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::moveTouch(System.Int32,UnityEngine.Vector2)
extern "C"  void InputSource_moveTouch_m4094891039 (InputSource_t3009306351 * __this, int32_t ___id0, Vector2_t4282066565  ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32)
extern "C"  void InputSource_endTouch_m4188816299 (InputSource_t3009306351 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::cancelTouch(System.Int32)
extern "C"  void InputSource_cancelTouch_m939030050 (InputSource_t3009306351 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
