#include <Windows.h>
#include <iostream>
#include <string>
#ifndef K_WINDOW_H
#define K_WINDOW_H


class K_Window
{
public:
	//Mandatorily get the Name , HInstance and style
	K_Window(int iCmdShow, HINSTANCE hInstance, PCTSTR TemplateName,
		PCTSTR windowTitle, WNDPROC MessagePump, DWORD type = WS_OVERLAPPEDWINDOW, const int style = 3,
		int x = CW_USEDEFAULT, int y = CW_USEDEFAULT, int size_x = CW_USEDEFAULT,
		int size_y = CW_USEDEFAULT, HWND parentHandleP = NULL, HMENU menuHandle = NULL, LPVOID param = NULL);
	void setIcon(LPCTSTR iconId);
	void setCursor(LPCTSTR iconId);
	void setWinProc(WNDPROC winproc);
	//Signs Extra bytes for the shared memory of the class
	void setExtraByteForClass(const int count);
	//Signs Extra byte for indivial instances of class
	void setExtraByteForWindow(const int count);
	void setBackgroundStock(const int color);
	void setMenuName(LPCTSTR menu);
	void regClass(void);
	void setRenderingStyle(DWORD window_type);
	//void setWindowName(LPCTSTR name);
	void setWindowInX(int x);
	void setWindowInY(int y);
	void setWindowInSizeX(int size_x);
	void setWindowInSizeY(int size_y);
	void setParentWindowHandle(HWND parentHandle);
	void setWindowMenuHandle(HMENU menu_Handle);
	void setIcmdShow(int icmdShow);
	void createWindow(void);
	void showWindow(void);
	void firstRender(void);
	LPARAM enterLoop(void);
	//~K_Window();
private:
	// *** MANDATORIES ***
		//Window's 
		WNDCLASS windowStructure;
		PCTSTR szAppName, windowTitle;
		DWORD dwStyle;
		//Handle to keep hold of the generated window
		HWND windowHandle, parentHandle;
		HMENU windowMenuHandle;
		LPVOID creationParameters;
		int x, y, size_x, size_y, icmdshow;
		MSG message;
	// *** MANDATORIES ***
	//Handle for keeping track of generated window
	
};
#endif