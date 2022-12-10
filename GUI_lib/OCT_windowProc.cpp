#include "pch.h"
#include "OCT_windowProc.h"


LRESULT Oporc::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

    switch (uMsg){

    // �����û�����ر�ʱ����Ϣ
    case WM_CLOSE: {

        if (MessageBoxA(hwnd, "���Ҫ�˳���?", "��ʾ", MB_OKCANCEL) == IDOK)
        {
            DestroyWindow(hwnd);
        }

    }

    // ��������˳���Ϣ
    case WM_DESTROY: {

        PostQuitMessage(0);  
    }

    // �����ڻ�����Ϣ  �����Ⳮ��,��Ҳ������
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

	return DefWindowProc(hwnd, uMsg, wParam, lParam);  // Ĭ����Ϣ����
}
