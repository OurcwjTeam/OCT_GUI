#include"dll_export.h"

#include "pch.h"

void test(LPCSTR text)
{
	MessageBoxA(NULL, text, "test from dll", MB_OK);
}
