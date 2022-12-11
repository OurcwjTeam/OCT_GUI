#pragma once
#include<map>

// 未完工代码

class WndClassManager
{
public:
	WndClassManager();
	~WndClassManager();


	std::map<int, WNDCLASSEXA*>* WndClass_list;

private:
	typedef std::map<int, WNDCLASSEXA*>::iterator wnd_it;

};

