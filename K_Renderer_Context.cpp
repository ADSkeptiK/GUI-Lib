#include "K_Renderer_Context.h"
#include "K_Window.h"
//Shouldn't give error

K_Renderer_Context::K_Renderer_Context(K_WindowPtr windowAddress)
{	//Obtain an HDC for the window using it's handle
	deviceContextHandle= GetDC(windowAddress->getWindowHandle());
}

/*
void K_Renderer_Context::renderW(void)
{
	//Just set the context
	rendererPtr->contextsetting();
	
}
*/
