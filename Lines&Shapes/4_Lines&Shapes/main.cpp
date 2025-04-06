#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void project()
{
glColor3ub(0,0,1);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2f(-3.0682770148196,0.3810930840648);
glVertex2f(3.6930169749414,0.3810930840648);
glVertex2f(0.0849018527952,2.7342116419862);

glVertex2f(0.0849018527952,-2.7342116419862);
glEnd();
glColor3ub(255,0,0);
glBegin(GL_POLYGON);
glVertex2f(-2.2211543339679,2.42046250093);
glVertex2f(-2.2211543339679,0.9615289950187);
glVertex2f(-0.5269089722644,0.9615289950187);
glVertex2f(-0.5269089722644,2.4361499579828);
glEnd();
glColor3ub(104, 89, 214);
glBegin(GL_POLYGON);
glVertex2f(-2.2211543339679,-0.7170289096319);
glVertex2f(-0.6367211716341,-1.6739637898533);
glVertex2f(-0.6367211716341,0.2242185135367);
glEnd();
glColor3ub(255, 243, 0 );
glBegin(GL_POLYGON);
glVertex2f(1.8105221286042,-0.0738431704667);
glVertex2f(0.9477119906997,-1.281777363533);
glVertex2f(2.6733322665087,-1.281777363533);
glEnd();
glColor3ub(134, 243, 122 );
glBegin(GL_POLYGON);
glVertex2f(0.9006496195413,1.3066530501805);
glVertex2f(0.9006496195413,2);
glVertex2f(2.6576448094559,2);
glVertex2f(2.6419573524031,1.3066530501805);
glEnd();
glColor3ub(134, 243, 122 );
glBegin(GL_POLYGON);
glVertex2f(2.6419573524031,0.8674042527019);
glVertex2f(3.4890800332548,1.6988394765008);
glVertex2f(2.6419573524031,2.5459621573525);
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
