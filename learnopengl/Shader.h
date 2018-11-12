#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <glad/glad.h>

using namespace std;

class Shader
{
public:
	Shader(const char* vertexPath, const char* fragmentPath);

	void use();

	void setBool(const string& name, bool value);
	void setInt(const string& name, int value);
	void setFloat(const string& name, float value);

	GLuint ID;
};