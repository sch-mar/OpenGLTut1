#include"VAO.h"

VAO::VAO() {
	// generate with only 1 object
	glGenVertexArrays(1, &ID);
}

void VAO::LinkAttrib(VBO VBO, GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset) {
	VBO.Bind();
	// configure Vertex Attribute for OpenGL (/how to read it)
	glVertexAttribPointer(layout, numComponents, type, GL_FALSE, stride, offset);
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
