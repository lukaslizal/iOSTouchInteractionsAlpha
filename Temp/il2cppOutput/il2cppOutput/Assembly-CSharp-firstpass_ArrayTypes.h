#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// LTDescr
struct LTDescr_t1201573721;
// LTDescrImpl
struct LTDescrImpl_t751309081;
// LTBezier
struct LTBezier_t2832002695;
// LTRect
struct LTRect_t2255934348;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTDescrImpl751309081.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTBezier2832002695.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTRect2255934348.h"

#pragma once
// LTDescr[]
struct LTDescrU5BU5D_t1413804836  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// LTDescrImpl[]
struct LTDescrImplU5BU5D_t1482846820  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LTDescrImpl_t751309081 * m_Items[1];

public:
	inline LTDescrImpl_t751309081 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LTDescrImpl_t751309081 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LTDescrImpl_t751309081 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// LTBezier[]
struct LTBezierU5BU5D_t3390536574  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LTBezier_t2832002695 * m_Items[1];

public:
	inline LTBezier_t2832002695 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LTBezier_t2832002695 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LTBezier_t2832002695 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// LTRect[]
struct LTRectU5BU5D_t540905669  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LTRect_t2255934348 * m_Items[1];

public:
	inline LTRect_t2255934348 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LTRect_t2255934348 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LTRect_t2255934348 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
