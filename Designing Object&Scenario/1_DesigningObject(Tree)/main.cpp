#include<windows.h>
#include<GL/glut.h>
void tree()
{
glColor3ub(99, 73, 18 );
glBegin(GL_QUADS);
glVertex2f(10.5,-10);
glVertex2f(11.5,-10);
glVertex2f(11.5,-4);
glVertex2f(10.5,-4);
glEnd();
glColor3ub(11, 138, 2 );
glBegin(GL_TRIANGLES);
glVertex2f(7,-4);
glVertex2f(15,-4);
glVertex2f(11,0);
glVertex2f(8,-2);
glVertex2f(14,-2);
glVertex2f(11,4);

glEnd();
}
void display()
{
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);
tree();
glFlush();
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize(500,500);
glutInitWindowPosition(160,160);
glutCreateWindow("TREE");
glutDisplayFunc(display);
gluOrtho2D(-14,18,-14,14);
glutMainLoop();
}
