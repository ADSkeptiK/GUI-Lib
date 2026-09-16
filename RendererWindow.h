#pragma once
#include "CustomWindow.h"
#include "OpenGL/CustomOGLContext.h"
class RendererWindow :
    public CustomWindow, public CustomOGLContext
{
  
    void userFunc(void) override;
    void userGLproc(void)override;
    bool evaluator(void)override;
};

