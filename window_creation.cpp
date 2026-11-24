
#include <iostream>
#include <glad/gl.h>
#include <GLFW/glfw3.h>

using namespace std;

int main()
{
   
    if (!glfwInit())
    {
        cout << "GLFW initialization failed" << endl;
        return -1;
    }

    
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(
        800, 600,
        "CUDA Image Processing",
        NULL, NULL
    );

    if (window == NULL)
    {
        cout << "Window creation failed" << endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    if (!gladLoadGL((GLADloadfunc)glfwGetProcAddress))
    {
        cout << "GLAD initialization failed" << endl;
        glfwDestroyWindow(window);
        glfwTerminate();
        return -1;
    }

    cout << "OpenGL Version: " << glGetString(GL_VERSION) << endl;
    glViewport(0, 0, 800, 600);
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}

