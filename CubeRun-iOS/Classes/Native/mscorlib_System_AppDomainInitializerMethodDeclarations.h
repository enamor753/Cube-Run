﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.AppDomainInitializer
struct AppDomainInitializer_t1620;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t576;
// System.IAsyncResult
struct IAsyncResult_t205;
// System.AsyncCallback
struct AsyncCallback_t206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m10758 (AppDomainInitializer_t1620 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m10759 (AppDomainInitializer_t1620 * __this, StringU5BU5D_t576* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1620(Il2CppObject* delegate, StringU5BU5D_t576* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m10760 (AppDomainInitializer_t1620 * __this, StringU5BU5D_t576* ___args, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m10761 (AppDomainInitializer_t1620 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
