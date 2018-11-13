#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <glad/glad.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace std;

class Shader
{
public:
	Shader(const char* vertexPath, const char* fragmentPath);

	void use();

	void setBool(const string& name, bool value);
	void setInt(const string& name, int value);
	void setFloat(const string& name, float value);
	void setMat4(const string& name, const glm::mat4& value);

	GLuint ID;
};