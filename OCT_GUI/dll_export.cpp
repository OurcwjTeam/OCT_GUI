#include"dll_export.h"

#include "pch.h"


// 测试用的导出函数
void test(LPCSTR text)
{
	MessageBoxA(NULL, text, "test from dll", MB_OK);
}
