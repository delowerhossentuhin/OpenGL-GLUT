#include<windows.h>
#include<GL/glut.h>
void project()
{
glColor3ub(255,0,0);
glBegin(GL_POLYGON);
glVertex2f(-4.09,-2.55);
glVertex2f(3.92,-2.55);
glVertex2f(3.92,-1.85);
glVertex2f(-4.09,-1.85);
glEnd();
glColor3ub(255,255,0);
glBegin(GL_POLYGON);
glVertex2f(-4.09,-1.85);//4 to 1, 3 to 2
glVertex2f(3.92,-1.85);
glVertex2f(3.92,-1.15);
glVertex2f(-4.09,-1.15);
glEnd();
glColor3ub(225, 163, 47);
glBegin(GL_POLYGON);
glVertex2f(-4.09,-1.15);
glVertex2f(3.92,-1.15);
glVertex2f(3.92,-0.45);
glVertex2f(-4.09,-0.45);

glEnd();
glColor3ub(0,255,0);
glBegin(GL_POLYGON);
glVertex2f(-4.09,-0.45);
glVertex2f(3.92,-0.45);
glVertex2f(3.92,0.23);
glVertex2f(-4.09,0.23);
glEnd();
glColor3ub(21, 203, 235 );
glBegin(GL_POLYGON);
glVertex2f(-4.09,0.23);
glVertex2f(3.92,0.23);
glVertex2f(3.92,1);
glVertex2f(-4.09,1);
glEnd();

glColor3ub(21, 164, 235 );
glBegin(GL_POLYGON);
glVertex2f(-4.09,1);
glVertex2f(3.92,1);
glVertex2f(3.92,1.63);
glVertex2f(-4.09,1.63);
glEnd();
glColor3ub(154, 61, 210 );
glBegin(GL_POLYGON);
glVertex2f(-4.09,1.63);
glVertex2f(3.92,1.63);
glVertex2f(3.92,2.26);
glVertex2f(-4.09,2.26);
glEnd();
//lines
glColor3ub(0,0,0);
glBegin(GL_LINE_LOOP);
glVertex2f(-4.09,-2.55);
glVertex2f(3.92,-2.55);
glVertex2f(3.92,-1.85);
glVertex2f(-4.09,-1.85);
glVertex2f(-4.09,-1.85);

glVertex2f(3.92,-1.85);
glVertex2f(3.92,-1.15);
glVertex2f(-4.09,-1.15);
glVertex2f(-4.09,-1.15);
glVertex2f(3.92,-1.15);
glVertex2f(3.92,-0.45);
glVertex2f(-4.09,-0.45);
glVertex2f(-4.09,-0.45);
glVertex2f(3.92,-0.45);
glVertex2f(3.92,0.23);
glVertex2f(-4.09,0.23);
glVertex2f(-4.09,0.23);
glVertex2f(3.92,0.23);
glVertex2f(3.92,1);
glVertex2f(-4.09,1);
glVertex2f(-4.09,1);
glVertex2f(3.92,1);
glVertex2f(3.92,1.63);
glVertex2f(-4.09,1.63);
glVertex2f(-4.09,1.63);
glVertex2f(3.92,1.63);
glVertex2f(3.92,2.26);
glVertex2f(-4.09,2.26);

glEnd();
}
void display()
{
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);
project();
glFlush();
}
int main(int argc, char** argv)
{
glutInit(&argc,argv);

glutInitWindowSize(700,500);
glutInitWindowPosition(200,80);
glutCreateWindow("LAB CLASS: 25-06-24");
glutInitWindowPosition(250,80);
glutDisplayFunc(display);
gluOrtho2D(-7,7,-7,7);
glutMainLoop();
}
