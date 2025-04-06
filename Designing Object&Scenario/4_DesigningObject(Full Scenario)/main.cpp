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
glLineWidth(4);
glBegin(GL_LINES);
glVertex2f(16,0);
glVertex2f(19.45,0);
glColor3ub(46, 42, 31);
glVertex2f(14.7,-10);

glVertex2f(20.45,-10);
glEnd();
glColor3ub(254, 208, 4 );
glBegin(GL_QUADS);
glVertex2f(16,0);
glVertex2f(19.45,0);
glVertex2f(20.45,4);
glVertex2f(14.7,4);
glEnd();
}
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
project();
tree();
lamppost();

bench();
glFlush();
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize(500,500);
glutInitWindowPosition(160,160);
glutCreateWindow("SCENARIO");
glutDisplayFunc(display);
gluOrtho2D(-14,40,-14,14);
glutMainLoop();
}
