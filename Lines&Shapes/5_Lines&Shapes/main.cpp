#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void project()
{
glColor3ub(220,0,0);
glBegin(GL_POLYGON);
glVertex2f(0.48,2.81);
glVertex2f(-3.3,1.01);
glVertex2f(0.54,-0.81);
glVertex2f(4.3,0.97);
glEnd();
glColor3ub(255,255,0);

glBegin(GL_POLYGON);
glVertex2f(0.44,0.53);
glVertex2f(-1.58,-2.51);
glVertex2f(2.46,-2.47);
glEnd();
glColor3ub(249, 161, 25 );
glLineWidth(5);
glBegin(GL_LINES);
glVertex2f(-1.72,3.35);
glVertex2f(3.28,-1.45);
glVertex2f(-2.2,-1.59);
glVertex2f(2.66,3.79);
glEnd();
glColor3ub(14, 210, 237 );
glLineWidth(5);
glBegin(GL_LINES);
glVertex2f(-1.18,0.55);
glVertex2f(1.94,0.57);
glVertex2f(1.94,0.57);
glVertex2f(1.94,1.79);
glVertex2f(1.94,1.79);
glVertex2f(-1.18,1.79);
glVertex2f(-1.18,1.79);
glVertex2f(-1.18,0.55);
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
glutCreateWindow("Lab Class 02 task 03"); // Create a window with the given title
glutDisplayFunc(display);
gluOrtho2D(-5,5,-5,5); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
