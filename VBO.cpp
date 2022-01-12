#include"VBO.h"

VBO::VBO(GLfloat* vertices, GLsizeiptr size) {
	// generate with only 1 object
	glGenBuffers(1, &ID);
	// binding container as a GL_ARRAY_BUFFER
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	// introdcue vertices into VBO
	glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW);
}

void VBO::Bind() {
	glBindBuffer(GL_ARRAY_BUFFER, ID);
}

void VBO::Unbind() {
	glBindBuffer(GL_ARRAY_BUFFER, ID);
}

void VBO::Delete() {
	glDeleteBuffers(1, &ID);
}
