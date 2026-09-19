#include "CustomWindow.h"
//Shouldn't give error

CustomWindow::CustomWindow(int iCmdShow, HINSTANCE hInstance,
PCTSTR TemplateName, PCTSTR windowTitle,WNDPROC wProcedure,
DWORD type, const int style, int x, int y, int size_x, int size_y,
HWND parentHandleP, HMENU menuHandle,LPVOID param) :K_Window( iCmdShow,
hInstance,TemplateName,windowTitle,wProcedure,type,
style, x, y, size_x,size_y,parentHandleP,menuHandle,param)
{
	//Just run  the constructor with the right arguments
}
LPARAM CustomWindow::enterLoop(void)
{
	regClass();
	createWindow();
	showWindow();
	firstRender();
	while (windowLoopState)
	{
		userfunction();
	}
	return message.wParam;
}

/*void CustomWindow::setUserfunction(EVALUATOR function)
{
	userfunction = function;
}
*/

/*LPARAM CustomWindow::enterLoop(void)
{
	
}
*/


