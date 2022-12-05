#include "pch.h"
#include "OC_windproc.h"

LRESULT OC_windproc::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

OC_windproc::OC_windproc()
{
    //LRESULT (OC_windproc::*fun001)(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    //fun001 = WindowProc;
    procID_list->insert(std::make_pair(0, &OC_windproc::WindowProc));
}

LRESULT(*OC_windproc::get_proc(int proc_id))(HWND, UINT, WPARAM, LPARAM)
{
    return nullptr;
}
