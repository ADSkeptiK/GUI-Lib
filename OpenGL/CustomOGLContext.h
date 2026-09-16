#pragma once
#include "K_OpenGLRenderer.h"

class CustomOGLContext :
    public K_OpenGLRenderer
{
public:
    void renderingProcedure(void)override;
    virtual void userGLproc(void) = 0;
    virtual bool evaluator(void) = 0;
private:
    CustomOGLContext* openGLCustomPtr = this;
};

