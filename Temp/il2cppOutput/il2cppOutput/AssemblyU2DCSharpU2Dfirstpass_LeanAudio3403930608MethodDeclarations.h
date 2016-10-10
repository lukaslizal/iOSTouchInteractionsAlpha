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

// LeanAudio
struct LeanAudio_t3403930608;
// LeanAudioOptions
struct LeanAudioOptions_t3707303054;
// LeanAudioStream
struct LeanAudioStream_t4117062544;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LeanAudioOptions3707303054.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void LeanAudio::.ctor()
extern "C"  void LeanAudio__ctor_m2567807815 (LeanAudio_t3403930608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudio::.cctor()
extern "C"  void LeanAudio__cctor_m1810534726 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LeanAudioOptions LeanAudio::options()
extern "C"  LeanAudioOptions_t3707303054 * LeanAudio_options_m2030717946 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LeanAudioStream LeanAudio::createAudioStream(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,LeanAudioOptions)
extern "C"  LeanAudioStream_t4117062544 * LeanAudio_createAudioStream_m3357338708 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3667593487 * ___volume0, AnimationCurve_t3667593487 * ___frequency1, LeanAudioOptions_t3707303054 * ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip LeanAudio::createAudio(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,LeanAudioOptions)
extern "C"  AudioClip_t794140988 * LeanAudio_createAudio_m2764644085 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3667593487 * ___volume0, AnimationCurve_t3667593487 * ___frequency1, LeanAudioOptions_t3707303054 * ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanAudio::createAudioWave(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,LeanAudioOptions)
extern "C"  int32_t LeanAudio_createAudioWave_m2068413888 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3667593487 * ___volume0, AnimationCurve_t3667593487 * ___frequency1, LeanAudioOptions_t3707303054 * ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip LeanAudio::createAudioFromWave(System.Int32,LeanAudioOptions)
extern "C"  AudioClip_t794140988 * LeanAudio_createAudioFromWave_m2441919009 (Il2CppObject * __this /* static, unused */, int32_t ___waveLength0, LeanAudioOptions_t3707303054 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudio::OnAudioSetPosition(System.Int32)
extern "C"  void LeanAudio_OnAudioSetPosition_m3321622754 (Il2CppObject * __this /* static, unused */, int32_t ___newPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip LeanAudio::generateAudioFromCurve(UnityEngine.AnimationCurve,System.Int32)
extern "C"  AudioClip_t794140988 * LeanAudio_generateAudioFromCurve_m3586672252 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3667593487 * ___curve0, int32_t ___frequencyRate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::play(UnityEngine.AudioClip,System.Single)
extern "C"  AudioSource_t1740077639 * LeanAudio_play_m3743582800 (Il2CppObject * __this /* static, unused */, AudioClip_t794140988 * ___audio0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::play(UnityEngine.AudioClip)
extern "C"  AudioSource_t1740077639 * LeanAudio_play_m2147124907 (Il2CppObject * __this /* static, unused */, AudioClip_t794140988 * ___audio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::play(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  AudioSource_t1740077639 * LeanAudio_play_m1236592830 (Il2CppObject * __this /* static, unused */, AudioClip_t794140988 * ___audio0, Vector3_t4282066566  ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::play(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  AudioSource_t1740077639 * LeanAudio_play_m3310505763 (Il2CppObject * __this /* static, unused */, AudioClip_t794140988 * ___audio0, Vector3_t4282066566  ___pos1, float ___volume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::playClipAt(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  AudioSource_t1740077639 * LeanAudio_playClipAt_m3158193755 (Il2CppObject * __this /* static, unused */, AudioClip_t794140988 * ___clip0, Vector3_t4282066566  ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudio::printOutAudioClip(UnityEngine.AudioClip,UnityEngine.AnimationCurve&,System.Single)
extern "C"  void LeanAudio_printOutAudioClip_m924778214 (Il2CppObject * __this /* static, unused */, AudioClip_t794140988 * ___audioClip0, AnimationCurve_t3667593487 ** ___curve1, float ___scaleX2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
