#include<windows.h>
#include<GL/glut.h>
void project()
{
glColor3ub(235, 190, 9);
glLineWidth(5);
glBegin(GL_POLYGON);
glVertex2f(-8,10);
glVertex2f(-8,-10);
glVertex2f(6,-10);
glVertex2f(6,10);

glEnd();
glColor3ub(88, 78, 40);
float x1=-8,y1=-6,x2=6,y2=-6;
glLineWidth(5);
glBegin(GL_LINES);
for(int i=0;i<4;i++)
{
glVertex2f(x1,y1);
glVertex2f(x2,y2);
y1+=4;y2+=4;
}
glEnd();
glColor3ub(255,255,255);
float x=-6,y=-5,xn=0;
glBegin(GL_QUADS);
for(int i=0;i<4;i++)
{
glVertex2f(x,y);
glVertex2f(x+4,y);
glVertex2f(x+4,y+2);
glVertex2f(x,y+2);
glVertex2f(xn,y);
glVertex2f(xn+4,y);
glVertex2f(xn+4,y+2);
glVertex2f(xn,y+2);
y=y+4;
}
glColor3ub(255, 0, 243);
glVertex2f(-4,-7);
glVertex2f(-4,-10);
glVertex2f(2,-10);
glVertex2f(2,-7);
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
glutInit(&argc, argv);
glutInitWindowSize(500,500);
glutInitWindowPosition(160,160);
glutCreateWindow("five storied building with windows and a front door ");
glutDisplayFunc(display);
gluOrtho2D(-14,26,-14,14);
glutMainLoop();
}
