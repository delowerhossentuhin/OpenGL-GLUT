#include<windows.h>
#include<GL/glut.h>
#include<math.h>
float angel;
void turbine()
{
//piller
glColor3ub(128,128,128);
glBegin(GL_QUADS);
glVertex2f(-1.34,-3.81);
glVertex2f(1.88,-3.81);
glVertex2f(1,1.17);
glVertex2f(-0.52,1.17);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(1,1.17);
glVertex2f(-0.52,1.17);
glVertex2f(0.257,2.14);
glEnd();
//circle
float theta;
float x_center=0.24;
float y_center=1.83;
float radius=0.42;
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
theta=(i*3.1416)/180;
float x=x_center+radius*cos(theta);
float y=y_center+radius*sin(theta);
glVertex2f(x,y);
}
glEnd();
//blades
glPushMatrix();
glTranslatef(x_center,y_center,0);
glRotatef(angel,0,0,1);
glTranslatef(-x_center,-y_center,0);
//triangle

glColor3ub(66, 35, 21);
glBegin(GL_TRIANGLES);
glVertex2f(0.26,1.855);
glVertex2f(3.64,0.07);
glVertex2f(2.52,-1.21);
glVertex2f(0.26,1.78);
glVertex2f(-3.11,3.58);
glVertex2f(-1.97,4.89);
glVertex2f(0.27,1.92);
glVertex2f(2.53,4.43);
glVertex2f(4.2,3.56);
glVertex2f(0.26,1.83);
glVertex2f(-3.70,0.09);
glVertex2f(-2,-0.76);
glEnd();
//quads
glColor3ub(255,255,0);
glBegin(GL_QUADS);
glVertex2f(-1.84,-0.87);
glVertex2f(-2,-0.76);
glVertex2f(0.14,1.7);
glVertex2f(0.34,1.74);
glVertex2f(0.14,1.7);
glVertex2f(0.34,1.74);
glVertex2f(-3.11,3.58);
glVertex2f(-3.22,3.47);

glVertex2f(0.23,1.88);
glVertex2f(0.14,1.98);
glVertex2f(2.37,4.53);
glVertex2f(2.53,4.43);
glVertex2f(0.23,1.88);
glVertex2f(0.3,2);
glVertex2f(3.75,0.18);
glVertex2f(3.64,0.07);
glEnd();
glPopMatrix();
glutSwapBuffers();

}
void display()
{
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);
turbine();
glFlush();
}
void update(int values)
{
angel+=0.2;
if(angel>360)angel-=360;
glutPostRedisplay();
glutTimerFunc(10,update,0);
}
int main(int argc, char ** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Turbine");
glutDisplayFunc(display);
gluOrtho2D(-6,6,-7,7);
glutTimerFunc(10, update, 0); //Add a timer
glutMainLoop();
return 0;
}
