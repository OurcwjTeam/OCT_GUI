#pragma once
#include<Windows.h>

class windows_main
{
public:
	windows_main(HINSTANCE* hInstance, HINSTANCE* hPrevInstance, PWSTR* pCmdLine, int* nCmdShow);
	~windows_main();



private:

	HINSTANCE*	O_hInstance;		// 称为“实例句柄”或“模块句柄”。操作系统使用此值在内存中加载可执行文件时标识可执行文件 (EXE) 。 某些Windows函数需要实例句柄，例如加载图标或位图。
	HINSTANCE*	O_hPrevInstance;	// 没有意义。 它在 16 位Windows中使用，但现在始终为零。
	PWSTR*		O_pCmdLine;			// 包含命令行参数作为 Unicode 字符串。
	int*		O_nCmdShow;			// 是一个标志，指示主应用程序窗口是最小化、最大化还是正常显示。

};
