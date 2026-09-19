#pragma once
#include <Windows.h>
#include<tchar.h>
//Shouldn't give error

class K_Shader
{
public:
	K_Shader(void);
	virtual void hardCodedsetdir(void);
	//void loadShader(void);
protected:
	TCHAR current_directory[MAX_PATH];
};