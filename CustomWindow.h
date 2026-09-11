#pragma once
#include "K_Window.h"
typedef MSG* msgPtr;
class CustomWindow :
    public K_Window
{
public:
	using K_Window::K_Window;
	LPARAM enterLoop(void) override;
	static LRESULT CALLBACK windowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
	void setWinProc(void) override;

};

