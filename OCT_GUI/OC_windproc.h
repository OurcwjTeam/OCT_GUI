#pragma once
#include<Windows.h>
#include <map>
#include "OCT_windowProc.h"

using procFunction_pointer = LRESULT(*)(HWND, UINT, WPARAM, LPARAM);

class OC_windproc
{
public:
	typedef LRESULT(*tmp)();

	OC_windproc();
	~OC_windproc();

	//LRESULT(*get_proc(int proc_id))(HWND, UINT, WPARAM, LPARAM);

	procFunction_pointer get_proc(int proc_id);

	//Oporc::fun getProcFun(int proc_id);

private:

	LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


	//fun proc_00 = printf;
	std::map<int, procFunction_pointer>* procID_list = new std::map<int, procFunction_pointer>;


};

