// 本文件未完成,可以编译但不能被调用或投入使用

#include "pch.h"
#include "WndClassManager.h"

WndClassManager::WndClassManager()
{
	// 未完工代码

	WndClass_list = new std::map<int, WNDCLASSEXA*>;					// 实例化
	WNDCLASSEXA* wc = new WNDCLASSEXA;									// 创建指针
	WndClass_list->insert(std::pair<int, WNDCLASSEXA*>(0, wc));			// 将指针插入查找表
	wnd_it it = WndClass_list->find(0);									// 获得 指针wc 在查找表的映射. (wnd_it 是自定义迭代器)
	
	// 通过映射赋值
	it->second->style = CS_HREDRAW | CS_VREDRAW;
	// 赋值未完成,有点懒,做个标记.  下次写

}

WndClassManager::~WndClassManager()
{
	// 释放内存
	delete WndClass_list;
}
