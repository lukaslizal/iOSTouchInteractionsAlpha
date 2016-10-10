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

// TouchScript.InputSources.TouchState
struct TouchState_t3704565748;
struct TouchState_t3704565748_marshaled_pinvoke;
struct TouchState_t3704565748_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_InputSources_TouchState3704565748.h"
#include "UnityEngine_UnityEngine_TouchPhase1567063616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.InputSources.TouchState::.ctor(System.Int32,UnityEngine.TouchPhase,UnityEngine.Vector2)
extern "C"  void TouchState__ctor_m3361796597 (TouchState_t3704565748 * __this, int32_t ___anId0, int32_t ___aPhase1, Vector2_t4282066565  ___aPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TouchState_t3704565748;
struct TouchState_t3704565748_marshaled_pinvoke;

extern "C" void TouchState_t3704565748_marshal_pinvoke(const TouchState_t3704565748& unmarshaled, TouchState_t3704565748_marshaled_pinvoke& marshaled);
extern "C" void TouchState_t3704565748_marshal_pinvoke_back(const TouchState_t3704565748_marshaled_pinvoke& marshaled, TouchState_t3704565748& unmarshaled);
extern "C" void TouchState_t3704565748_marshal_pinvoke_cleanup(TouchState_t3704565748_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TouchState_t3704565748;
struct TouchState_t3704565748_marshaled_com;

extern "C" void TouchState_t3704565748_marshal_com(const TouchState_t3704565748& unmarshaled, TouchState_t3704565748_marshaled_com& marshaled);
extern "C" void TouchState_t3704565748_marshal_com_back(const TouchState_t3704565748_marshaled_com& marshaled, TouchState_t3704565748& unmarshaled);
extern "C" void TouchState_t3704565748_marshal_com_cleanup(TouchState_t3704565748_marshaled_com& marshaled);
