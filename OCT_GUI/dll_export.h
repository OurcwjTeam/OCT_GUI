#pragma once
#include"pch.h"
#include<Windows.h>

#ifdef IS_DLL
#define DLL_IMPORT_PRC _declspec(dllexport)		// DLL函数导出修饰器
#else
#define DLL_IMPORT_PRC _declspec(dllimport)		// DLL函数导入修饰器
#endif // IS_DLL

DLL_IMPORT_PRC void test(LPCSTR text);