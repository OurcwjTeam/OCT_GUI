#include "pch.h"
#include "OC_window.h"

OC_window::OC_window()
{
	wc->style = CS_HREDRAW | CS_VREDRAW;


	wc->cbSize = sizeof(WNDCLASSEXA);
}

OC_window::~OC_window()
{
	delete wc;
}
