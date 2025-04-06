#include<windows.h>
#include<GL/glut.h>

void bench()
{
glColor3ub(125,125,125);
glBegin(GL_QUADS);
glVertex2f(22.6,-7.8);
glVertex2f(23.2,-7.8);
glVertex2f(23.2,-9.5);
glVertex2f(22.6,-9.5);
glVertex2f(35.4,-7.8);
glVertex2f(36,-7.8);
glVertex2f(36,-9.5);
glVertex2f(35.4,-9.5);
glVertex2f(22.6,-9.5);
glVertex2f(23.2,-9.5);
glVertex2f(23.6,-10);
glVertex2f(22.2,-10);
glVertex2f(35.4,-9.5);
glVertex2f(36,-9.5);
glVertex2f(36.4,-10);
glVertex2f(35,-10);

glVertex2f(24.4,-5.6);
glVertex2f(25,-5.6);
glVertex2f(25,-9.13);
glVertex2f(24.4,-9.13);

glVertex2f(25,-9.13);
glVertex2f(24.4,-9.13);
glVertex2f(24,-9.63);
glVertex2f(25.4,-9.63);
glVertex2f(34.4,-5.6);
glVertex2f(33.8,-5.6);
glVertex2f(33.8,-9.13);
glVertex2f(34.4,-9.13);
glVertex2f(33.8,-9.13);
glVertex2f(34.4,-9.13);
glVertex2f(34.8,-9.63);
glVertex2f(33.4,-9.63);
glColor3ub(245, 176, 65);
glVertex2f(21,-7.8);
glVertex2f(21,-7);
glVertex2f(37.7,-7);
glVertex2f(37.7,-7.8);
glColor3ub(248, 196, 113 );
glVertex2f(21,-7);
glVertex2f(37.7,-7);
glVertex2f(36,-6.28);
glVertex2f(22.7,-6.28);
glVertex2f(22.7,-5.6);
glVertex2f(22.7,-4.3);
glVertex2f(35.9,-4.3);
glVertex2f(35.9,-5.6);
glVertex2f(22.7,-4);
glVertex2f(22.7,-2.7);
glVertex2f(35.9,-2.7);
glVertex2f(35.9,-4);

glEnd();
}
void display()
{
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);
//project();
//tree();
//lamppost();
bench();
glFlush();
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize(500,500);
glutInitWindowPosition(160,160);
glutCreateWindow("TREE");
glutDisplayFunc(display);
gluOrtho2D(-14,40,-14,14);
glutMainLoop();
}

