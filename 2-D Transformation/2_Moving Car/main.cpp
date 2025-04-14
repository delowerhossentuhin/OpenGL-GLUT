#include<iostream>
#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>
float _angel=0;float move=0.0;
void car_Body()
{
glColor3ub(128,128,128);
glBegin(GL_QUADS);
glVertex2f(-3.63,-0.41);
glVertex2f(-3.92,-0.25);
glVertex2f(-3.92,0);
glVertex2f(-3.67,0.1);

glEnd();
glColor3ub(0,0,0);
glBegin(GL_TRIANGLES);
glVertex2f(-3.92,0);
glVertex2f(-3.67,0.1);
glVertex2f(-3.60,.2);
glEnd();
glColor3ub(205,32,44);
glBegin(GL_TRIANGLES);
glVertex2f(-3.60,.2);
glVertex2f(-3.25,0.58);
glVertex2f(-3.31,0.78);

glEnd();
glColor3ub(205,32,44);
glBegin(GL_QUADS);
glVertex2f(-3.31,0.78);
glVertex2f(-3.25,0.58);
glVertex2f(-1.2,1);
glVertex2f(-1.2,0.68);
glVertex2f(-3.31,0.78);
glVertex2f(-3.25,0.58);
glVertex2f(-2,0.5);
glVertex2f(-1.2,1);
glVertex2f(-2,0.5);
glVertex2f(-1.51,-0.35);
glVertex2f(0.63,-0.32);
glVertex2f(-1.2,1);
glVertex2f(-1.2,0.68);
glVertex2f(-1.2,1);
glVertex2f(0.63,-0.32);
glVertex2f(0.68,1);
glVertex2f(-1.2,0.68);
glVertex2f(-0.71,2.1);
glVertex2f(-0.58,1.91);
glVertex2f(-0.95,1.02);
glVertex2f(-0.66,2.04);
glVertex2f(-0.6,1.91);
glVertex2f(0.53,1.9);
glVertex2f(0.81,2.04);

glVertex2f(0.53,1.9);
glVertex2f(0.81,2.04);
glVertex2f(1.11,0.96);
glVertex2f(0.52,1);
glVertex2f(0.63,-0.32);
glVertex2f(0.63,1.01);
glVertex2f(3.32,1.04);
glVertex2f(3.32,-0.39);

glEnd();
glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-0.67,2.1);
glVertex2f(-0.67,2.04);
glVertex2f(0.81,2.04);
glVertex2f(0.81,2.2);
glVertex2f(0.6,2.2);
glVertex2f(1.11,0.96);
glVertex2f(3.32,0.96);
glVertex2f(3.14,2.19);
glVertex2f(3.46,1.48);
glVertex2f(3.9,1.48);
glVertex2f(3.9,0.06);
glVertex2f(3.53,0.06);
glEnd();
glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINE_LOOP);
glVertex2f(-0.58,1.91);
glVertex2f(-0.95,1.02);
glVertex2f(0.52,1.02);
glVertex2f(0.52,1.91);
glEnd();
glColor3ub(128,128,128);
glBegin(GL_QUADS);
glVertex2f(0.94,1.91);
glVertex2f(1.26,1.15);
glVertex2f(3,1.15);
glVertex2f(2.91,1.91);
glVertex2f(-1.51,-.3);
glVertex2f(0.9,-0.3);
glVertex2f(1,-0.52);
glVertex2f(-1.51,-0.52);
glEnd();

glColor3ub(205, 32, 44);
glBegin(GL_QUADS);
glVertex2f(3.32,1.04);
glVertex2f(3.7,0.76);
glVertex2f(3.7,0.08);
glVertex2f(3.33,0.1);
glEnd();
}
void road()
{
glColor3ub(0,0,0);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2f(-10,-1.2);
glVertex2f(10,-1.2);
glEnd();
}
void car_Wheel0()
{
glColor3ub(128,128,128);
glPointSize(1);
glBegin(GL_LINES);
float theta;
float x_center=2.07;
float y_center=-0.50;
float radius0=1.21;
float radius1=1.01;
for(int i=0;i<180;i++)
{
theta=(i*3.1416)/180;
float x0=x_center+radius0*cos(theta);
float y0=y_center+radius0*sin(theta);
glVertex2f(x0,y0);
float x1=x_center+radius1*cos(theta);
float y1=y_center+radius1*sin(theta);
glVertex2f(x1,y1);
}
glEnd();
glColor3ub(0,0,0);
glPointSize(1);
glBegin(GL_LINES);

float theta1;
x_center=2.07;
y_center=-0.50;
float radius2=0.7;
radius1=1.01;
for(int i=0;i<180;i++)
{
theta1=(i*3.1416)/180;
float x2=x_center+radius1*cos(theta1);
float y2=y_center+radius1*sin(theta1);
glVertex2f(x2,y2);
float x1=x_center+radius2*cos(theta1);
float y1=y_center+radius2*sin(theta1);
glVertex2f(x1,y1);
}
glEnd();
//wheel
glPushMatrix();
glTranslatef(2.07,-0.50,0);
glRotatef(_angel,0,0,1);
glTranslatef(-2.07,0.50,0);
glColor3ub(128,128,128);
//glPointSize(1);
glBegin(GL_POLYGON);
x_center=2.07;
y_center=-0.50;
radius2=0.71;
for(int i=0;i<360;i++)
{
theta1=(i*3.1416)/180;
float x2=x_center+radius2*cos(theta1);
float y2=y_center+radius2*sin(theta1);
glVertex2f(x2,y2);
}
glEnd();
glColor3ub(0,0,0);
glPointSize(1);
glBegin(GL_POLYGON);
x_center=2.07;
y_center=-0.50;
float radius3=0.55;
for(int i=0;i<360;i++)

{
theta1=(i*3.1416)/180;
float x3=x_center+radius3*cos(theta1);
float y3=y_center+radius3*sin(theta1);
glVertex2f(x3,y3);

}
glEnd();
glColor3ub(128,128,128);
glBegin(GL_QUADS);
glVertex2f(1.97,-0.11);
glVertex2f(2.17,-0.11);
glVertex2f(2.12,-0.32);
glVertex2f(2.03,-0.32);
glVertex2f(2.42,-0.29);
glVertex2f(2.51,-0.51);
glVertex2f(2.26,-0.50);
glVertex2f(2.26,-0.42);
glVertex2f(2.23,-0.64);
glVertex2f(2.40,-0.78);
glVertex2f(2.21,-0.91);
glVertex2f(2.15,-0.69);
glVertex2f(2,-0.7);
glVertex2f(1.93,-0.91);
glVertex2f(1.73,-0.76);
glVertex2f(1.91,-0.64);
glVertex2f(1.87,-0.49);
glVertex2f(1.66,-0.48);
glVertex2f(1.72,-0.27);
glVertex2f(1.9,-0.4);
glEnd();
glColor3ub(128,128,128);
glLineWidth(3);
glBegin(GL_LINE_LOOP);
float radius4=0.18;
for(int i=0;i<360;i++)
{

theta1=(i*3.1416)/180;
float x4=x_center+radius4*cos(theta1);
float y4=y_center+radius4*sin(theta1);
glVertex2f(x4,y4);
}
glEnd();
glPopMatrix();
}
void car_Wheel1()
{
glPushMatrix();
glTranslated(-4.78,0,0);
glColor3ub(128,128,128);
glPointSize(1);
glBegin(GL_LINES);
float theta;
float x_center=2.07;
float y_center=-0.50;
float radius0=1.21;
float radius1=1.01;
for(int i=0;i<180;i++)
{
theta=(i*3.1416)/180;
float x0=x_center+radius0*cos(theta);
float y0=y_center+radius0*sin(theta);
glVertex2f(x0,y0);
float x1=x_center+radius1*cos(theta);
float y1=y_center+radius1*sin(theta);
glVertex2f(x1,y1);
}
glEnd();
glColor3ub(0,0,0);
glPointSize(1);
glBegin(GL_LINES);
float theta1;
x_center=2.07;
y_center=-0.50;
float radius2=0.7;
radius1=1.01;
for(int i=0;i<180;i++)

{
theta1=(i*3.1416)/180;
float x2=x_center+radius1*cos(theta1);
float y2=y_center+radius1*sin(theta1);
glVertex2f(x2,y2);
float x1=x_center+radius2*cos(theta1);
float y1=y_center+radius2*sin(theta1);
glVertex2f(x1,y1);
}
glEnd();
//wheel
glPushMatrix();
glTranslatef(2.07,-0.50,0);
glRotatef(_angel,0,0,1);
glTranslatef(-2.07,0.50,0);
glColor3ub(128,128,128);
glPointSize(1);
glBegin(GL_POLYGON);
x_center=2.07;
y_center=-0.50;
radius2=0.71;
for(int i=0;i<360;i++)
{
theta1=(i*3.1416)/180;
float x2=x_center+radius2*cos(theta1);
float y2=y_center+radius2*sin(theta1);
glVertex2f(x2,y2);
}
glEnd();
glColor3ub(0,0,0);
glPointSize(1);
glBegin(GL_POLYGON);
x_center=2.07;
y_center=-0.50;
float radius3=0.55;
for(int i=0;i<360;i++)
{
theta1=(i*3.1416)/180;
float x3=x_center+radius3*cos(theta1);
float y3=y_center+radius3*sin(theta1);
glVertex2f(x3,y3);
}

glEnd();
glColor3ub(128,128,128);
glBegin(GL_QUADS);
glVertex2f(1.97,-0.11);
glVertex2f(2.17,-0.11);
glVertex2f(2.12,-0.32);
glVertex2f(2.03,-0.32);
glVertex2f(2.42,-0.29);
glVertex2f(2.51,-0.51);
glVertex2f(2.26,-0.50);
glVertex2f(2.26,-0.42);
glVertex2f(2.23,-0.64);
glVertex2f(2.40,-0.78);
glVertex2f(2.21,-0.91);
glVertex2f(2.15,-0.69);
glVertex2f(2,-0.7);
glVertex2f(1.93,-0.91);
glVertex2f(1.73,-0.76);
glVertex2f(1.91,-0.64);
glVertex2f(1.87,-0.49);
glVertex2f(1.66,-0.48);
glVertex2f(1.72,-0.27);
glVertex2f(1.9,-0.4);
glEnd();
glColor3ub(128,128,128);
glLineWidth(3);
glBegin(GL_LINE_LOOP);
float radius4=0.18;
for(int i=0;i<360;i++)
{
theta1=(i*3.1416)/180;
float x4=x_center+radius4*cos(theta1);
float y4=y_center+radius4*sin(theta1);
glVertex2f(x4,y4);
}
glEnd();
glPopMatrix();
glPopMatrix();

}
void display()
{
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glTranslatef(move,0,0);
car_Body();
car_Wheel0();
car_Wheel1();
glPopMatrix();
road();
glutSwapBuffers();
glFlush();
}
void update(int value) {
_angel+=2.0f;
if(_angel > 360.0)
{
_angel-=360;
}
move-=0.02;
if(move<-15)
move+=30;
glutPostRedisplay(); //Notify GLUT that the display has changed
glutTimerFunc(10, update, 0); //Notify GLUT to call update again in 25 milliseconds
}
int main(int argc, char ** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Car");
glutDisplayFunc(display);
gluOrtho2D(-10,10,-8,8);
glutTimerFunc(10, update, 0); //Add a timer
glutMainLoop();
return 0;
}
