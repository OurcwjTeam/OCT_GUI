#pragma once
#include<Windows.h>
#include <map>

class OC_windproc
{
public:
	OC_windproc();

	LRESULT(*get_proc(int proc_id))(HWND, UINT, WPARAM, LPARAM);

private:

	typedef LRESULT (OC_windproc::*fun)(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


	//fun proc_00 = printf;
	std::map<int, fun>* procID_list = new std::map<int, fun>;


};

