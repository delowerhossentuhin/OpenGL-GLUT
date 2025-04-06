#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void project()
{
glColor3ub(255,0,0);
glLineWidth(5);
glBegin(GL_POLYGON);
glVertex2f(-2.78,-1.24);
glVertex2f(2.84,-1.24);
glVertex2f(1.98,2.34);
glVertex2f(-1.9,2.34);
glEnd();
}
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
project();
glFlush(); // Render now
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowSize(800, 400); // Set the window's initial width & height
glutInitWindowPosition(220,150);
glutCreateWindow("Lab Class 02 task 02"); // Create a window with the given title

glutDisplayFunc(display);
gluOrtho2D(-5,5,-5,5); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
