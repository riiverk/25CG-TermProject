#pragma once
#include <gl/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Pikmin {
private:
	GLuint VAO, VBO, EBO;
	float x, y, z;
	float speed, direction;
	bool captured;

	void init();

public:
	Pikmin();
	~Pikmin();

	void update();
	void draw();
	bool ifCaptured() { return captured; }
};