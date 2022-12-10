#include "pch.h"
#include "OC_windproc.h"
#include "OCT_windowProc.h"

//LRESULT OC_windproc::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
//{
//    return DefWindowProc(hwnd, uMsg, wParam, lParam);
//}

OC_windproc::OC_windproc()
{
    //LRESULT (OC_windproc::*fun001)(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    //fun001 = WindowProc;
    procID_list->insert(std::pair<int, procFunction_pointer>(0, &Oporc::WindowProc));
}

OC_windproc::~OC_windproc()
{
    delete procID_list;
}

procFunction_pointer OC_windproc::get_proc(int proc_id)
{

    // 在查找表中查询过程ID(proc_id) , 如果不存在则返回NULL
    int tmp = procID_list->count(proc_id);  
    if (tmp == 0)
    {
        return NULL;
    }

    std::map<int, procFunction_pointer>::iterator tmp_01 = procID_list->find(proc_id);
    if (tmp_01 != procID_list->end())
    {
        return tmp_01->second;
    }
    else {
        return NULL;
    }

    //LRESULT(*tmp_1)(HWND, UINT, WPARAM, LPARAM);
    //tmp_1 = procID_list[proc_id];

    //return procID_list[proc_id];
}

//LRESULT(*OC_windproc::get_proc(int proc_id))(HWND, UINT, WPARAM, LPARAM)
//{
//    int tmp = procID_list->count(proc_id);
//    if (tmp == 0)
//    {
//        return NULL;
//    }
//
//    LRESULT(*qh)(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//    qh = procID_list[0];
//
//
//    return 0;
//}
//
//Oporc::fun OC_windproc::getProcFun(int proc_id)
//{
//    int tmp = procID_list->count(proc_id);
//    if (tmp == 0)
//    {
//        return NULL;
//    }
//
//    LRESULT(*qh)(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//
//
//    return (Oporc::fun)procID_list[proc_id];
//}
