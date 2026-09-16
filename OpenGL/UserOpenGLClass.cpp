#include "UserOpenGLClass.h"

void UserOpenGLClass::userGLproc(void)
{
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}

bool UserOpenGLClass::evaluator(void)
{
	return false;
}
