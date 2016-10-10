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

// System.Object
struct Il2CppObject;
// UnityEngine.UI.ColorBlock
struct ColorBlock_t508458230;
struct ColorBlock_t508458230_marshaled_pinvoke;
struct ColorBlock_t508458230_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock508458230.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_Object4170816371.h"

// UnityEngine.Color UnityEngine.UI.ColorBlock::get_normalColor()
extern "C"  Color_t4194546905  ColorBlock_get_normalColor_m1021113593 (ColorBlock_t508458230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.ColorBlock::get_highlightedColor()
extern "C"  Color_t4194546905  ColorBlock_get_highlightedColor_m2834784533 (ColorBlock_t508458230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.ColorBlock::get_pressedColor()
extern "C"  Color_t4194546905  ColorBlock_get_pressedColor_m2014354534 (ColorBlock_t508458230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.ColorBlock::get_disabledColor()
extern "C"  Color_t4194546905  ColorBlock_get_disabledColor_m2484721348 (ColorBlock_t508458230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ColorBlock::get_colorMultiplier()
extern "C"  float ColorBlock_get_colorMultiplier_m2799886278 (ColorBlock_t508458230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ColorBlock::set_colorMultiplier(System.Single)
extern "C"  void ColorBlock_set_colorMultiplier_m1029562789 (ColorBlock_t508458230 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ColorBlock::get_fadeDuration()
extern "C"  float ColorBlock_get_fadeDuration_m2386809488 (ColorBlock_t508458230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ColorBlock::set_fadeDuration(System.Single)
extern "C"  void ColorBlock_set_fadeDuration_m1171991323 (ColorBlock_t508458230 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::get_defaultColorBlock()
extern "C"  ColorBlock_t508458230  ColorBlock_get_defaultColorBlock_m533915527 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ColorBlock::Equals(System.Object)
extern "C"  bool ColorBlock_Equals_m4183618976 (ColorBlock_t508458230 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ColorBlock::Equals(UnityEngine.UI.ColorBlock)
extern "C"  bool ColorBlock_Equals_m3761062129 (ColorBlock_t508458230 * __this, ColorBlock_t508458230  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.ColorBlock::GetHashCode()
extern "C"  int32_t ColorBlock_GetHashCode_m2259731448 (ColorBlock_t508458230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ColorBlock_t508458230;
struct ColorBlock_t508458230_marshaled_pinvoke;

extern "C" void ColorBlock_t508458230_marshal_pinvoke(const ColorBlock_t508458230& unmarshaled, ColorBlock_t508458230_marshaled_pinvoke& marshaled);
extern "C" void ColorBlock_t508458230_marshal_pinvoke_back(const ColorBlock_t508458230_marshaled_pinvoke& marshaled, ColorBlock_t508458230& unmarshaled);
extern "C" void ColorBlock_t508458230_marshal_pinvoke_cleanup(ColorBlock_t508458230_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ColorBlock_t508458230;
struct ColorBlock_t508458230_marshaled_com;

extern "C" void ColorBlock_t508458230_marshal_com(const ColorBlock_t508458230& unmarshaled, ColorBlock_t508458230_marshaled_com& marshaled);
extern "C" void ColorBlock_t508458230_marshal_com_back(const ColorBlock_t508458230_marshaled_com& marshaled, ColorBlock_t508458230& unmarshaled);
extern "C" void ColorBlock_t508458230_marshal_com_cleanup(ColorBlock_t508458230_marshaled_com& marshaled);
