#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() {

	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// window object
	GLFWwindow* window = glfwCreateWindow(800, 800, "OpenGLTut1", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	// GLAD configures OpenGL
	gladLoadGL();

	// set viewport: area which is being rendered
	glViewport(0, 0, 800, 800);
	// set back buffer
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	// clean back buffer and assign new color
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	while (!glfwWindowShouldClose(window)) {
		// prevent "not responding" = manage all GLFW events
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;

}