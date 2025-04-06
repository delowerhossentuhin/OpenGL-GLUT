#include<windows.h>
#include<GL/glut.h>
void lamppost()
{
glColor3ub(46, 42, 31 );
glBegin(GL_QUADS);
glVertex2f(17.5,-10);
glVertex2f(18,-10);
glVertex2f(18,0);
glVertex2f(17.5,0);
glEnd();
glColor3ub(99, 73, 18);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f(16,0);
glVertex2f(19.45,0);
glColor3ub(46, 42, 31);
glVertex2f(14.7,-10);
glVertex2f(20.45,-10);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2f(16,0);

glVertex2f(19.45,0);
glVertex2f(20.45,4);
glVertex2f(14.7,4);
glEnd();
}
void display()
{
glClearColor(0,0,0,1);
glClear(GL_COLOR_BUFFER_BIT);
lamppost();
glFlush();
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize(500,500);
glutInitWindowPosition(160,160);
glutCreateWindow("LAMPPOST");
glutDisplayFunc(display);
gluOrtho2D(-14,22,-14,14);
glutMainLoop();
}
