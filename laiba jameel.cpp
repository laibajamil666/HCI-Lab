#include <GL/glut.h>

void drawHouse() {
    // House base  
    glColor3f(1.0f, 0.85f, 0.45f); // light yellow
    glBegin(GL_POLYGON); 
        glVertex2f(-0.4f, -0.4f);
        glVertex2f(0.4f, -0.4f);
        glVertex2f(0.4f, 0.1f);
        glVertex2f(-0.4f, 0.1f);
    glEnd();
    
    // for grass (unchanged)
    glColor3f(0.259f, 0.761f, 0.153f); // green colour
    glBegin(GL_POLYGON); 
        glVertex2f(-1.0f, -1.0f); 
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, -0.4f); 
        glVertex2f(-1.0f, -0.4f);
    glEnd();

    // Roof
    glColor3f(0.541f, 0.157f, 0.2f); // red
    glBegin(GL_POLYGON); 
        glVertex2f(-0.45f, 0.1f);
        glVertex2f(0.45f, 0.1f);
        glVertex2f(0.0f, 0.5f);
    glEnd();

    // Door
    glColor4f(0.4f, 0.2f, 0.0f, 1.0f); // brown
    glBegin(GL_POLYGON); 
        glVertex2f(-0.05f, -0.4f);
        glVertex2f(0.05f, -0.4f);
        glVertex2f(0.05f, -0.1f);
        glVertex2f(-0.05f, -0.1f);
    glEnd();

    // Left window
    glColor4f(0.53f, 0.81f, 0.98f, 1.0f); // sky blue
    glBegin(GL_POLYGON); 
        glVertex2f(-0.3f, -0.1f);
        glVertex2f(-0.15f, -0.1f);
        glVertex2f(-0.15f, 0.05f);
        glVertex2f(-0.3f, 0.05f);
    glEnd();

    // Right window
    glBegin(GL_POLYGON); 
        glVertex2f(0.15f, -0.1f);
        glVertex2f(0.3f, -0.1f);
        glVertex2f(0.3f, 0.05f);
        glVertex2f(0.15f, 0.05f);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT); 
    glLoadIdentity(); 
    drawHouse(); 
    glFlush();
}

void init() {
    glClearColor(0.529f, 0.808f, 0.922f, 1.0f); // new background: sky blue
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    
    glutCreateWindow("Simple House");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}