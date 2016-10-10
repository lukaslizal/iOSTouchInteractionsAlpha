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

// LeanAudioStream
struct LeanAudioStream_t4117062544;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "codegen/il2cpp-codegen.h"

// System.Void LeanAudioStream::.ctor(System.Single[])
extern "C"  void LeanAudioStream__ctor_m356544130 (LeanAudioStream_t4117062544 * __this, SingleU5BU5D_t2316563989* ___audioArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudioStream::OnAudioRead(System.Single[])
extern "C"  void LeanAudioStream_OnAudioRead_m760826071 (LeanAudioStream_t4117062544 * __this, SingleU5BU5D_t2316563989* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudioStream::OnAudioSetPosition(System.Int32)
extern "C"  void LeanAudioStream_OnAudioSetPosition_m3023570818 (LeanAudioStream_t4117062544 * __this, int32_t ___newPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
