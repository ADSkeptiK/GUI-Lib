#include "CustomWindow.h"
LPARAM CustomWindow::enterLoop(void)
{
	while (GetMessage(getterMessage(), NULL, 0, 0))
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
        
	}
	return message.lParam;
}
void CustomWindow::setWinProc(void)
{
    windowStructure.lpfnWndProc = windowProc;

}
LRESULT CustomWindow::windowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    HDC         hdc;
    PAINTSTRUCT ps;
    RECT        rect;
    switch (message)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    case WM_CLOSE:
        DestroyWindow(hwnd);
        return 0;
    }
    return DefWindowProc(hwnd, message, wParam, lParam);
}
