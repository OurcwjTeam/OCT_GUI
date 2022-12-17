#pragma once
#include <Windows.h>

typedef struct window_sytle
{
	UINT winclass_sytle; // 窗口类样式
	DWORD window_ExSytle; // 创建窗口扩展样式
	DWORD window_style; // 创建窗口样式
};

typedef struct window_info
{
	LPCSTR window_title; // 窗口标题
	int window_ID; // DLL内部使用的窗口识别ID
	LPCSTR windowClass_name; // 窗口类名称

};