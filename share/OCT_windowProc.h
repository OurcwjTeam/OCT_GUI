#pragma once
#include <Windows.h>

// 这个 namespace 没有什么好解释的.
namespace Oproc {

	typedef LRESULT(*fun)(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);				// 函数指针类型的定义  这个好像用不到了,解决一个报错搞得.忘记有没有用了,你看一下,没用的话删掉
	LRESULT WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);					// 测试 windowproc 的签名


}


