#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void project()
{
glColor3ub(255,0,0);
glLineWidth(10);
glBegin(GL_POLYGON);
glVertex2f(-1.2014696255352,-0.4660295967869);
glVertex2f(-1.8917177358588,-2.3955868142825);
glVertex2f(-0.0092228895217,-1.3131522776387);
glVertex2f(-0.0092228895217,-1.3131522776387);
glVertex2f(1.9360217850267,-2.442649185441);
glVertex2f(1.2300862176503,-0.4817170538398);
glVertex2f(1.2300862176503,-0.4817170538398);
glVertex2f(3.0968936069346,0.6634673110153);
glVertex2f(0.7280875919604,0.7575920533322);
glVertex2f(0.7280875919604,0.7575920533322);
glVertex2f(0.0535269386896,2.5773370714581);
glVertex2f(-0.7465333710037,0.7262171392266);
glVertex2f(-0.7465333710037,0.7262171392266);
glVertex2f(-3.0996519289252,0.6791547680682);
glVertex2f(-1.2014696255352,-0.4660295967869);
glEnd();
glColor3ub(0,0,1);
glLineWidth(5);
glBegin(GL_LINE_LOOP);
glVertex2f(-1.2014696255352,-0.4660295967869);
glVertex2f(-1.8917177358588,-2.3955868142825);
glVertex2f(-0.0092228895217,-1.3131522776387);
glVertex2f(1.9360217850267,-2.442649185441);
glVertex2f(1.2300862176503,-0.4817170538398);
glVertex2f(3.0968936069346,0.6634673110153);
glVertex2f(0.7280875919604,0.7575920533322);
glVertex2f(0.0535269386896,2.5773370714581);
glVertex2f(-0.7465333710037,0.7262171392266);
glVertex2f(-3.0996519289252,0.6791547680682);

glVertex2f(-1.2014696255352,-0.4660295967869);
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
