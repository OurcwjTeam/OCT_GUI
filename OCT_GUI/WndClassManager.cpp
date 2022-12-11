#include "pch.h"
#include "WndClassManager.h"

WndClassManager::WndClassManager()
{
	// 未完工代码

	WndClass_list = new std::map<int, WNDCLASSEXA*>;
	WNDCLASSEXA* wc = new WNDCLASSEXA;
	WndClass_list->insert(std::pair<int, WNDCLASSEXA*>(0, wc));
	wnd_it it = WndClass_list->find(0);
	it->second->style = CS_HREDRAW | CS_VREDRAW;


}

WndClassManager::~WndClassManager()
{
	delete WndClass_list;
}
