#include "pch.h"
#include "windows_main.h"

windows_main::windows_main(HINSTANCE* hInstance, HINSTANCE* hPrevInstance, PWSTR* pCmdLine, int* nCmdShow)
{
	O_hInstance		= hInstance;
	O_hPrevInstance = hPrevInstance;
	O_nCmdShow		= nCmdShow;
	O_pCmdLine		= pCmdLine;
}

windows_main::~windows_main()
{
	delete O_hInstance;
	delete O_hPrevInstance;
	delete O_pCmdLine;
	delete O_nCmdShow;

}
