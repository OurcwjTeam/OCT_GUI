#pragma once
#include <Windows.h>
#include <string>


// 窗口样式结构体
typedef struct window_sytle
{
	UINT	wndclass_sytle;		// 窗口类样式
	DWORD	window_sytle;		// 窗口基本样式
	DWORD	window_ExSytle;		// 窗口扩展样式
};

// 窗口信息结构体
typedef struct window_info
{
	LPCSTR			windowName;				// 窗口名称(标题)
	LPCSTR			windowClassName;		// 窗口类名称
	int				windowID;				// 窗口ID
	window_sytle	sytle;					// 窗口样式 使用窗口样式结构体
	std::string		Window_description;		// 窗口描述 没有用可以不定义,就是删掉相关代码都行.不影响运行
};
