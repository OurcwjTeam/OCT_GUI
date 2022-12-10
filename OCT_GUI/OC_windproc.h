#pragma once
#include<Windows.h>
#include <map>
#include "OCT_windowProc.h"

using procFunction_pointer = LRESULT(*)(HWND, UINT, WPARAM, LPARAM);

class OC_windproc
{
// 共有
public:


	//typedef LRESULT(*tmp)();

	OC_windproc();  // 构建函数
	~OC_windproc(); // 析构函数

	//LRESULT(*get_proc(int proc_id))(HWND, UINT, WPARAM, LPARAM);
	
	
	// 获取黄口过程
	procFunction_pointer get_proc(int proc_id);

	//Oporc::fun getProcFun(int proc_id);


// 私有
private:

	//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


	// 窗口过程查找表
	std::map<int, procFunction_pointer>* procID_list = new std::map<int, procFunction_pointer>;


};

