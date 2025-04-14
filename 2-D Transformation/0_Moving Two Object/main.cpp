#include<iostream>
#include<GL/gl.h>
#include<GL/glut.h>
float _red=0.0,_green=0;
void drawScene()
{
glColor3ub(255,0,0);
glPushMatrix();
glTranslatef(_red,0,0);

glBegin(GL_QUADS);
glVertex2f(-4,1);
glVertex2f(-2,1);
glVertex2f(-2,-1);
glVertex2f(-4,-1);
glColor3ub(0,255,0);
glEnd();
glPopMatrix();
glColor3ub(0,255,0);
glPushMatrix();
glTranslatef(_green,0,0);
glBegin(GL_QUADS);
glVertex2f(2,1);
glVertex2f(4,1);
glVertex2f(4,-1);
glVertex2f(2,-1);
glEnd();
glPopMatrix();
glutSwapBuffers();
}
void update(int value)
{
_red-=0.02;
_green+=0.02;
if(_red<-10 && _green>10)
{
_red=-2;
_green=2;
}
glutPostRedisplay();
glutTimerFunc(10,update,0);
}
void display()
{
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);
drawScene();
glFlush();
}
int main(int argc, char ** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

glutInitWindowSize(800, 800);
glutCreateWindow("Moving two boxes");
glutDisplayFunc(display);
gluOrtho2D(-10,10,-8,8);
glutTimerFunc(10, update, 0); //Add a timer
glutMainLoop();
return 0;
}
