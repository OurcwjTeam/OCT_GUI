#pragma once
#include"pch.h"
#include<Windows.h>

#ifdef IS_DLL
#define DLL_IMPORT_PRC _declspec(dllexport)		// DLL��������������
#else
#define DLL_IMPORT_PRC _declspec(dllimport)		// DLL��������������
#endif // IS_DLL

DLL_IMPORT_PRC void test(LPCSTR text);