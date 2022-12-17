#include"pch.h"
#include"dll_export.h"
#include<Windows.h>
#include"windows_main.h"

namespace std 
{
	// DLL初始化函数
	windows_main init(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) 
	{
		return windows_main(hInstance,hPrevInstance,pCmdLine,nCmdShow);
	}
}

