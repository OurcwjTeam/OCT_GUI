#include "pch.h"
#include "OCT_windowProc.h"


LRESULT Oporc::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

    switch (uMsg){

    // 处理用户点击关闭时的消息
    case WM_CLOSE: {

        if (MessageBoxA(hwnd, "真的要退出吗?", "提示", MB_OKCANCEL) == IDOK)
        {
            DestroyWindow(hwnd);
        }

    }

    // 处理进程退出消息
    case WM_DESTROY: {

        PostQuitMessage(0);  
    }

    // 处理窗口绘制消息  这玩意抄的,我也看不懂
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        // All painting occurs here, between BeginPaint and EndPaint.

        FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1));

        EndPaint(hwnd, &ps);
    }

    return 0;
    }

	return DefWindowProc(hwnd, uMsg, wParam, lParam);  // 默认消息处理
}
