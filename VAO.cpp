#include"VAO.h"

VAO::VAO() {
	// generate with only 1 object
	glGenVertexArrays(1, &ID);
}

void VAO::LinkVBO(VBO VBO, GLuint layout) {
	VBO.Bind();
	// configure Vertex Attribute for OpenGL (/how to read it)
	glVertexAttribPointer(layout, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
	// enable Vertex Attribute for OpenGL (/to use it)
	glEnableVertexAttribArray(layout);
	VBO.Unbind();
}

void VAO::Bind() {
	glBindVertexArray(ID);
}

void VAO::Unbind() {
	glBindVertexArray(0);
}

void VAO::Delete() {
	glDeleteBuffers(1, &ID);
}
