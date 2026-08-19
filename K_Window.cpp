#include "K_Window.h"
#include <tchar.h>

K_Window::K_Window(int iCmdShow,HINSTANCE hInstance,PCTSTR TemplateName,
PCTSTR windowTitle, WNDPROC MessagePump, DWORD type, const int style ,
int x , int y, int size_x ,
int size_y  ,HWND parentHandleP, HMENU menuHandle, LPVOID param) : szAppName{TemplateName }
,parentHandle{parentHandleP},windowMenuHandle{menuHandle}, creationParameters{param},dwStyle{type},x{x},y{y},size_x{size_x},size_y{size_y}
{
	this->icmdshow = iCmdShow;
	//Do the initializations
windowStructure.hInstance = hInstance;
windowStructure.lpszClassName = TemplateName;
windowStructure.style = style;
this->windowTitle = windowTitle;
windowStructure.cbClsExtra = 0;
windowStructure.cbWndExtra = 0;
windowStructure.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
windowStructure.lpszMenuName = NULL;
windowStructure.lpfnWndProc = MessagePump;
}
void K_Window::setIcon(LPCTSTR iconId)
{
	windowStructure.hIcon=LoadIcon(windowStructure.hInstance , MAKEINTRESOURCE(iconId));
}
void K_Window::setCursor(LPCTSTR iconId)
{
	windowStructure.hCursor=LoadCursor(NULL, MAKEINTRESOURCE(iconId));
}
void K_Window::setWinProc(WNDPROC winproc)
{
	windowStructure.lpfnWndProc = winproc;
}
void K_Window::setExtraByteForClass(const int count)
{
	windowStructure.cbClsExtra = count;
}
void K_Window::setExtraByteForWindow(const int count)
{
	windowStructure.cbWndExtra = count;

}
void K_Window::setBackgroundStock(const int color)
{
	windowStructure.hbrBackground=(HBRUSH)GetStockObject(color);
}
void K_Window::setMenuName(LPCTSTR menu)
{
	windowStructure.lpszMenuName = menu;
}
void K_Window::regClass(void)
{
	//Register
	if (!RegisterClass(&windowStructure))
	{
		MessageBox(NULL, TEXT("This program requires Windows NT!"),
			szAppName, MB_ICONERROR);
	}

}
void K_Window::setRenderingStyle(DWORD window_type)
{
	dwStyle = window_type;
}
/*
void K_Window::setWindowName(LPCTSTR name)
{
	windowTitle = name;
}
*/
void K_Window::setWindowInX(int x)
{
	this->x = x;
}
void K_Window::setWindowInY(int y)
{
	this->y = y;

}
void K_Window::setWindowInSizeX(int size_x)
{
	this->size_x = size_x;
}
void K_Window::setWindowInSizeY(int size_y)
{
	this->size_y = size_y;
}
void K_Window::setParentWindowHandle(HWND parentHandle)
{
	this->parentHandle = parentHandle;
}
void K_Window::setWindowMenuHandle(HMENU menu_Handle)
{
	windowMenuHandle = menu_Handle;
}
void K_Window::setIcmdShow(int icmdShow)
{
	this->icmdshow = icmdShow;
}
void K_Window::createWindow(void)
{
	windowHandle=CreateWindow(szAppName, windowTitle, dwStyle, x, y, size_x, size_y, parentHandle, windowMenuHandle, (windowStructure.hInstance), creationParameters);

}
void K_Window::showWindow(void)
{
	ShowWindow(windowHandle, this->icmdshow);
}

void K_Window::firstRender(void)
{
	ShowWindow(windowHandle, this->icmdshow);
	UpdateWindow(windowHandle);
}

LPARAM K_Window::enterLoop(void)
{

	while (GetMessage(&message, NULL, 0, 0))
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
		
	}
	return message.wParam;
}




