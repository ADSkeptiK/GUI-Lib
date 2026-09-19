#include "K_Shader_OpenGL.h"
//Shouldn't give error

void K_Shader_OpenGL::hardCodedsetdir(void)
{
	_tcscpy_s(current_directory, MAX_PATH, TEXT("shaders/"));
}
