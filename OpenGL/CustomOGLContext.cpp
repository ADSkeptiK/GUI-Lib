#include "CustomOGLContext.h"
void CustomOGLContext::renderingProcedure(void)
{
	while (evaluator())
	{
		openGLCustomPtr->userGLproc();
		SwapBuffers(deviceContextHandle);
	}
}
