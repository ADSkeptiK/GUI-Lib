#pragma once
//Shouldn't give error
#include "K_Shader.h"
class K_Shader_OpenGL :
    public K_Shader
{
    using K_Shader::K_Shader;
    void hardCodedsetdir(void)override;
};

