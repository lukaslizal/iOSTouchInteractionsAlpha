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

// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.UI.SpriteState
struct SpriteState_t2895308594;
struct SpriteState_t2895308594_marshaled_pinvoke;
struct SpriteState_t2895308594_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_SpriteState2895308594.h"

// UnityEngine.Sprite UnityEngine.UI.SpriteState::get_highlightedSprite()
extern "C"  Sprite_t3199167241 * SpriteState_get_highlightedSprite_m2511270273 (SpriteState_t2895308594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.SpriteState::get_pressedSprite()
extern "C"  Sprite_t3199167241 * SpriteState_get_pressedSprite_m591013456 (SpriteState_t2895308594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.SpriteState::get_disabledSprite()
extern "C"  Sprite_t3199167241 * SpriteState_get_disabledSprite_m1512804506 (SpriteState_t2895308594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.SpriteState::Equals(UnityEngine.UI.SpriteState)
extern "C"  bool SpriteState_Equals_m895455353 (SpriteState_t2895308594 * __this, SpriteState_t2895308594  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SpriteState_t2895308594;
struct SpriteState_t2895308594_marshaled_pinvoke;

extern "C" void SpriteState_t2895308594_marshal_pinvoke(const SpriteState_t2895308594& unmarshaled, SpriteState_t2895308594_marshaled_pinvoke& marshaled);
extern "C" void SpriteState_t2895308594_marshal_pinvoke_back(const SpriteState_t2895308594_marshaled_pinvoke& marshaled, SpriteState_t2895308594& unmarshaled);
extern "C" void SpriteState_t2895308594_marshal_pinvoke_cleanup(SpriteState_t2895308594_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SpriteState_t2895308594;
struct SpriteState_t2895308594_marshaled_com;

extern "C" void SpriteState_t2895308594_marshal_com(const SpriteState_t2895308594& unmarshaled, SpriteState_t2895308594_marshaled_com& marshaled);
extern "C" void SpriteState_t2895308594_marshal_com_back(const SpriteState_t2895308594_marshaled_com& marshaled, SpriteState_t2895308594& unmarshaled);
extern "C" void SpriteState_t2895308594_marshal_com_cleanup(SpriteState_t2895308594_marshaled_com& marshaled);
