#include "UserWindowClass.h"

void UserWindowClass::userFunc(void)
{
}
LRESULT UserWindowClass::windowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
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
