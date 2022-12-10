#include "pch.h"
#include "OC_windproc.h"
#include "OCT_windowProc.h"

//LRESULT OC_windproc::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
//{
//    return DefWindowProc(hwnd, uMsg, wParam, lParam);
//}

OC_windproc::OC_windproc()
// 构建函数  将在类被实例化时被调用
{

    // 将一个算是测试用的 windowproc 加入查找表
    procID_list->insert(std::pair<int, procFunction_pointer>(0, &Oproc::WindowProc));

}

OC_windproc::~OC_windproc()
// 析构函数  将在类被删除时被调用
{
    delete procID_list;  // 删除查找表,释放内存
}

procFunction_pointer OC_windproc::get_proc(int proc_id)
{

    // 在查找表中查询 过程ID(proc_id) 所对应的 windowproc指针是否存在 , 如果不存在则返回NULL
    int tmp = procID_list->count(proc_id);  
    if (tmp == 0)
    {
        return NULL;
    }

    // 在查找表中查找 过程ID(proc_id) 所对应的 windowproc指针 , 如果存在则返回 windowproc指针 , 如果不存在则返回NULL
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

/*所以,看到这个注释的人,你看着下面这一堆注释是什么感受?
这个绝对不是我技术不行 (PS:好像真的不行) ,是我确实没研究明白这个指针类型的问题.
如果你闲的无聊可以简单看一下.
看看有森马问题!*/

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
