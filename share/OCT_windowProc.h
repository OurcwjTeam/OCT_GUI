#pragma once
#include <Windows.h>

namespace Oporc {

	typedef LRESULT(*fun)(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


}


