#include "K_OpenGLRenderer.h"


void K_OpenGLRenderer::contextsetting(void)
{

	int iPixelFormat = ChoosePixelFormat(deviceContextHandle, &pixelFormatStructure);
	SetPixelFormat(deviceContextHandle, iPixelFormat, &pixelFormatStructure);
	renderingContext = wglCreateContext(deviceContextHandle);
	wglMakeCurrent(deviceContextHandle, renderingContext);
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	SwapBuffers(deviceContextHandle);
}

K_OpenGLRenderer::K_OpenGLRenderer(K_WindowPtr windowAddress):K_Renderer(windowAddress)
{
	contextsetting();
	
}


