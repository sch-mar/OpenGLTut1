#include"EBO.h"

EBO::EBO(GLuint* indices, GLsizeiptr size) {
	// generate with only 1 object
	glGenBuffers(1, &ID);
	// binding container as a GL_ELEMENT_ARRAY_BUFFER
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	// introdcue indices into EBO
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, indices, GL_STATIC_DRAW);
}

void EBO::Bind() {
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
}

void EBO::Unbind() {
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

void EBO::Delete() {
	glDeleteBuffers(1, &ID);
}
