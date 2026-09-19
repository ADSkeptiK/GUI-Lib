#include "CustomOGLContext.h"
//Shouldn't give error

void CustomOGLContext::renderW(void)
{
	glClearColor(0.1f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	SwapBuffers(deviceContextHandle);
}


