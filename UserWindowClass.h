#pragma once
#include "CustomWindow.h"
//Must implement the CustomWindow's virtuals
class UserWindowClass :
    public CustomWindow
{
public:
    void userFunc(void)override;
    void initialization() override;
    //statics
    static LRESULT CALLBACK windowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);



};

