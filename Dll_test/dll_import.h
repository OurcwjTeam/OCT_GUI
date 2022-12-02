#pragma once
#include<Windows.h>

#define DLL_IMPORT_PRC _declspec(dllimport)

DLL_IMPORT_PRC void test(LPCSTR text);