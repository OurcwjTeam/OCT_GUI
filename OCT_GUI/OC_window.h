#pragma once
#include <Windows.h>
class OC_window
{
private:
	WNDCLASSEXA* wc = new WNDCLASSEXA;


public:
	OC_window();
	~OC_window();

};

