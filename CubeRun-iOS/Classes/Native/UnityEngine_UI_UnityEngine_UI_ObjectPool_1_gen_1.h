﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1852;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1853;

#include "mscorlib_System_Object.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t1851  : public Object_t
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1<System.Object>::m_Stack
	Stack_1_t1852 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Object>::m_ActionOnGet
	UnityAction_1_t1853 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Object>::m_ActionOnRelease
	UnityAction_1_t1853 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;
};
