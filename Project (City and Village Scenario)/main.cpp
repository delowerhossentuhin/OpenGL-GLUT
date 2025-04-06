#include<iostream>
#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>
    float _angel=0;float move_car1=0.0,move_car2=0,move_train=0,move_boat=0,speed=0.1;
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
void road1()
{
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-32,-22);
    glVertex2f(-24,-22);
    glVertex2f(-24,-20.5);
    glVertex2f(-32,-20.5);
    glEnd();
}
void road2()
{
    glColor3ub(61,61,92);
    glBegin(GL_POLYGON);
    glVertex2f(-40,-20.5);
    glVertex2f(40,-20.5);
    glVertex2f(40,-14.3);
    glVertex2f(-40,-14.3);
    glEnd();
}
void line()
{
    glPushMatrix();
    glTranslatef(-1.7,0,0);
    int x=0;
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    for(int i=0;i<15;i++)
    {
        glVertex2f(-35.1+x,-17.4);
        glVertex2f(-32.7+x,-17.4);
        x+=5;
    }
    glEnd();
    glPopMatrix();
}
void car()
{
        glPushMatrix();
    glTranslatef(0,-17.6,0);
    glTranslatef(move_car1,-1,1);
    glScalef(1.5,1.5,0);
    car_Body();
    car_Wheel0();
    car_Wheel1();
    glPopMatrix();
}
void car2()
{
    glPushMatrix();
    glTranslatef(15,-9.6,0);
    glTranslatef(move_car2,-1,1);
    glScalef(1.5,1.5,0);
    car_Body();
    car_Wheel0();
    car_Wheel1();
    glPopMatrix();
}
void train_line()
{
    glColor3ub(153,153,102);
    glBegin(GL_QUADS);
    glVertex2f(-32,-13.7);
    glVertex2f(-30.3,-13.7);
    glVertex2f(-30.3,-9.3);
    glVertex2f(-32,-9.3);
    glEnd();
}
void train_window()
{
    glColor3ub(160,212,235);
    glBegin(GL_POLYGON);
    glVertex2f(-29.4,-7.73);
    glVertex2f(-28.6,-7.73);
    glVertex2f(-28.6,-7.03);
    glVertex2f(-29.4,-7.03);
    glEnd();
}
void train_compartment()
{
    glColor3ub(43,50,54);
    glBegin(GL_POLYGON);
    glVertex2f(-17.3,-8.7);
    glVertex2f(-17.3,-6.25);
    glVertex2f(-30.1,-6.25);
    glVertex2f(-30.1,-8.7);
    glEnd();
    glColor3ub(65,90,173);
    glBegin(GL_POLYGON);
    glVertex2f(-30,-6.8);
    glVertex2f(-17.4,-6.8);
    glVertex2f(-17.4,-6.4);
    glVertex2f(-30,-6.4);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(-30,-8.46);
    glVertex2f(-17.4,-8.46);
    glVertex2f(-17.4,-7.88);
    glVertex2f(-30,-7.88);
    glEnd();
    glColor3ub(65,90,173);
    glBegin(GL_POLYGON);
    glVertex2f(-29.5,-8.46);
    glVertex2f(-17.4,-8.46);
    glVertex2f(-17.4,-8.08);
    glVertex2f(-29.5,-8.08);

    glVertex2f(-30,-8.46);
    glVertex2f(-29.5,-8.46);
    glVertex2f(-29.5,-8.08);
    glEnd();
    train_window();
    glPushMatrix();
    for(int i=0;i<8;i++)
    {
        glTranslated(1.3,0,0);
        train_window();
    }

    glPopMatrix();

}
void Train_head()
{
    glColor3ub(43,50,54);
    glBegin(GL_POLYGON);
    glVertex2f(-31.7,-8.73);
    glVertex2f(-30.1,-8.73);
    glVertex2f(-30.1,-6.2);
    glEnd();
    glColor3ub(160,212,235);
    glBegin(GL_POLYGON);
    //glVertex2f(-31.15,-7.55);
    glVertex2f(-31.15,-7.8);
    glVertex2f(-30.5,-7.8);
    glVertex2f(-30.5,-7.2);
    glEnd();
}
void train()
{
    train_compartment();
    train_window();
    glPushMatrix();
    glTranslated(13.94,0,0);
    train_compartment();
    glPopMatrix();
    glPushMatrix();
    glTranslated(13.94*2,0,0);
    train_compartment();
    glPopMatrix();
    Train_head();
}
void boat()
{
    glPushMatrix();
    glTranslatef(-300,-490,0);
    glTranslatef(move_boat,0,1);
    glBegin(GL_QUADS);   //gun boat lower part
glColor3ub (56,56,52);
glVertex2i(350,10);
glVertex2i(410,60);
glVertex2i(40,35);
glVertex2i(50,10);
glEnd();


glBegin(GL_QUADS);   //lower upper part
glColor3ub(132,132,130);
glVertex2i(60,35);
glVertex2i(257,47);
glVertex2i(250,70);
glVertex2i(65,55);
glEnd();

glBegin(GL_QUADS);    //middle upper part
glColor3ub(92,92,88);
glVertex2i(250,47);
glVertex2i(275,50);
glVertex2i(270,62);
glVertex2i(250,60);
glEnd();

glBegin(GL_QUADS);   //upper part
glColor3ub(69,69,68);
glVertex2i(90,55);
glVertex2i(200,60);
glVertex2i(180,90);
glVertex2i(95,80);
glEnd();

glBegin(GL_QUADS);   //bridge covering part
glColor3ub(69,69,68);
glVertex2i(110,80);
glVertex2i(180,75);
glVertex2i(160,110);
glVertex2i(115,100);
glEnd();


glBegin(GL_QUADS);    //gun
glColor3ub(54,54,54);
glVertex2i(187,80);
glVertex2i(240,100);
glVertex2i(235,105);
glVertex2i(183,85);
glEnd();
glPopMatrix();
}
void building1()
{
    glColor3ub(122,122,82);
    glBegin(GL_QUADS);
    glVertex2f(-20,-5.5);
    glVertex2f(0,-5.5);
    glVertex2f(0,4.5);
    glVertex2f(-20,4.5);
    glEnd();
    glColor3ub(108,155,214);
    glBegin(GL_QUADS);
    glVertex2f(-18.3,-5.5);
    glVertex2f(-12,-5.5);
    glVertex2f(-12,2.5);
    glVertex2f(-18.3,2.5);
    glEnd();

    glPushMatrix();
    glTranslatef(10,0,0);
    glColor3ub(108,155,214);
    glBegin(GL_QUADS);
    glVertex2f(-18.3,-5.5);
    glVertex2f(-12,-5.5);
    glVertex2f(-12,2.5);
    glVertex2f(-18.3,2.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-.4,0,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3,0,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();
    float y=0;
    for(float i=0;i<3;i++)
    {

        glPushMatrix();
    glTranslatef(0,y,0);
    glPushMatrix();
    glTranslatef(-.4,0,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3,0,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    y+=2.5;
    }
    y=0;
    for(int i=0;i<3;i++)
    {
    glPushMatrix();
    glTranslatef(9.7,y,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();
    y+=2.5;
    }
    y=0;
    for(int i=0;i<3;i++)
    {
        glPushMatrix();
    glTranslatef(13,y,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();
    y+=2.5;
    }

    glColor3ub(79,140,141);
    glBegin(GL_QUADS);
    glVertex2f(-11.5,-5.5);
    glVertex2f(-8.7,-5.5);
    glVertex2f(-8.7,-2.8);
    glVertex2f(-11.5,-2.8);
    glEnd();
     y=0;
    for(int i=0;i<2;i++)
    {
        glPushMatrix();
        glTranslatef(0,y,0);
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2f(-11.5,-1.8);
        glVertex2f(-8.7,-1.8);
        glVertex2f(-8.7,0.2);
        glVertex2f(-11.5,0.2);
        glEnd();
        glPopMatrix();
        y+=2.5;
    }

    //semicircle
    glColor3ub(122,122,82);
    glBegin(GL_POLYGON);
    float theta;
    float x_center=-10.1;
    float y_center=4;
    float radius0=3.7;
    //float radius1=1.01;
    for(int i=0;i<180;i++)
    {
        theta=(i*3.1416)/180;
        float x0=x_center+radius0*cos(theta);
        float y0=y_center+radius0*sin(theta);
        glVertex2f(x0,y0);

        //float x1=x_center+radius1*cos(theta);
        //float y1=y_center+radius1*sin(theta);
        //glVertex2f(x1,y1);
    }
    glEnd();

    glColor3ub(130,23,10);
    glBegin(GL_QUADS);
    glVertex2f(-10.7,6.5);
    glVertex2f(-9.5,6.5);
    glVertex2f(-9.5,3.7);
    glVertex2f(-10.7,3.7);
    glVertex2f(-12.3,4.6);
    glVertex2f(-12.3,5.5);
    glVertex2f(-8,5.5);
    glVertex2f(-8,4.6);
    glEnd();

}
void background()
{
    glColor3ub(128,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-40,-5.5);
    glVertex2f(40,-5.5);
    glVertex2f(40,30);
    glVertex2f(-40,30);
    glEnd();
}
void building2()
{
    glColor3ub(201,135,19);
    glBegin(GL_QUADS);
    glVertex2f(20.8,-5.5);
    glVertex2f(39,-5.5);
    glVertex2f(39,1.7);
    glVertex2f(20.8,1.7);
    glEnd();
    float y=0;
    for(float i=0;i<3;i++)
    {
        glPushMatrix();
    glTranslatef(39,y,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();
    y+=2.2;
    }
    y=0;
    for(float i=0;i<3;i++)
    {
        glPushMatrix();
    glTranslatef(53.7,y,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();
    y+=2.2;
    }

    glColor3ub(103,64,59);
    glBegin(GL_QUADS);
    glVertex2f(20,1.7);
    glVertex2f(39.7,1.7);
    glVertex2f(39.7,2.8);
    glVertex2f(20,2.8);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(25.8,-5.5);
    glVertex2f(25.8,-1.9);
    glVertex2f(34.3,-1.9);
    glVertex2f(34.3,-5.5);
    glEnd();

    glColor3ub(84,117,120);
    glBegin(GL_QUADS);
    glVertex2f(27.8,-5.5);
    glVertex2f(27.8,-2.7);
    glVertex2f(32.3,-2.7);
    glVertex2f(32.3,-5.5);
    glEnd();

    glColor3ub(103,64,59);
    glBegin(GL_TRIANGLES);
    glVertex2f(25.6,-1.9);
    glVertex2f(34.5,-1.9);
    glVertex2f(30.05,0);
    glEnd();

    glColor3ub(201,135,19);
    glBegin(GL_QUADS);
    glVertex2f(24,2.8);
    glVertex2f(24,4.5);
    glVertex2f(36,4.5);
    glVertex2f(36,2.8);
    glEnd();
    float s=1.3;
    glPushMatrix();
    glScalef(s,1.4,1);
    glTranslated(-7,5,0);
    glColor3ub(103,64,59);
    glBegin(GL_TRIANGLES);
    glVertex2f(25.6,-1.9);
    glVertex2f(34.5,-1.9);
    glVertex2f(30.05,0);
    glEnd();
    glPopMatrix();

}
void building3()
{
    glPushMatrix();
    glTranslatef(-59,0,0);
    glColor3ub(201,135,19);
    glBegin(GL_QUADS);
    glVertex2f(20.8,-5.5);
    glVertex2f(39,-5.5);
    glVertex2f(39,1.7);
    glVertex2f(20.8,1.7);
    glEnd();
    float y=0;
    for(float i=0;i<3;i++)
    {
        glPushMatrix();
    glTranslatef(39,y,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();
    y+=2.2;
    }
    y=0;
    for(float i=0;i<3;i++)
    {
        glPushMatrix();
    glTranslatef(53.7,y,0);
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-17.5,-5);
    glVertex2f(-15.5,-5);
    glVertex2f(-15.5,-3.1);
    glVertex2f(-17.5,-3.1);
    glEnd();
    glPopMatrix();
    y+=2.2;
    }

    glColor3ub(103,64,59);
    glBegin(GL_QUADS);
    glVertex2f(20,1.7);
    glVertex2f(39.7,1.7);
    glVertex2f(39.7,2.8);
    glVertex2f(20,2.8);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(25.8,-5.5);
    glVertex2f(25.8,-1.9);
    glVertex2f(34.3,-1.9);
    glVertex2f(34.3,-5.5);
    glEnd();

    glColor3ub(84,117,120);
    glBegin(GL_QUADS);
    glVertex2f(27.8,-5.5);
    glVertex2f(27.8,-2.7);
    glVertex2f(32.3,-2.7);
    glVertex2f(32.3,-5.5);
    glEnd();

    glColor3ub(103,64,59);
    glBegin(GL_TRIANGLES);
    glVertex2f(25.6,-1.9);
    glVertex2f(34.5,-1.9);
    glVertex2f(30.05,0);
    glEnd();

    glColor3ub(201,135,19);
    glBegin(GL_QUADS);
    glVertex2f(24,2.8);
    glVertex2f(24,4.5);
    glVertex2f(36,4.5);
    glVertex2f(36,2.8);
    glEnd();
    float s=1.3;
    glPushMatrix();
    glScalef(s,1.4,1);
    glTranslated(-7,5,0);
    glColor3ub(103,64,59);
    glBegin(GL_TRIANGLES);
    glVertex2f(25.6,-1.9);
    glVertex2f(34.5,-1.9);
    glVertex2f(30.05,0);
    glEnd();
    glPopMatrix();
    glPopMatrix();
}
void tree()
{
    glPushMatrix();
    glTranslatef(5,4.5,0);

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
    glPopMatrix();
}
void sun()
{
    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    float x_center=-0.3;
    float y_center=-9.04;
    float radius0=3.1;
    float theta;
    for(int i=0;i<360;i++)
    {
        theta=(i*3.1416)/180;
        float x0=x_center+radius0*cos(theta);
        float y0=y_center+radius0*sin(theta);
        glVertex2f(x0,y0);
    }
    glEnd();

}
void cloud()
{
    glPushMatrix();
    glTranslatef(-20,30,0);
    glColor3ub(255,255,245);
    glBegin(GL_POLYGON);
    float x_center=-0.3;
    float y_center=-9.04;
    float radius0=3.1;
    float theta;
    for(int i=0;i<360;i++)
    {
        theta=(i*3.1416)/180;
        float x0=x_center+radius0*cos(theta);
        float y0=y_center+radius0*sin(theta);
        glVertex2f(x0,y0);
    }
    glEnd();
    glPopMatrix();
}
void scenary()
{

    background();

    glPushMatrix();
    glTranslatef(13,3.8,0);
    glScalef(1.3,1.7,0);
    building1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,2.7,0);
    glScalef(1.1,1.5,0);
    building2();
    glPopMatrix();
    //building2();
    glPushMatrix();
    glTranslatef(3.2,2.7,0);
    glScalef(1.1,1.5,0);
    building3();
    glPopMatrix();
    tree();
    glPushMatrix();
    glTranslatef(-32,0,0);
    tree();
    glPopMatrix();



    glColor3ub(26,198,255);
    glBegin(GL_POLYGON);
    glVertex2f(-40,-30);
    glVertex2f(40,-30);
    glVertex2f(40,-22);
    glVertex2f(-40,-22);
    glEnd();
    int x=0;
    for(int i=0;i<5;i++)
    {
         glPushMatrix();
         glTranslatef(x,0,0);
         road1();
         glPopMatrix();
         x+=16;
    }
    road2();
    glPushMatrix();
    glTranslatef(0,7.4,0);
    road2();
    glPopMatrix();
    glColor3ub(61,0,92);
    glBegin(GL_POLYGON);
    glVertex2f(-40,-14.3);
    glVertex2f(40,-14.3);
    glVertex2f(40,-13.1);
    glVertex2f(-40,-13.1);
    glEnd();
    line();
    glPushMatrix();
    glTranslatef(0,7.4,0);
    line();
    glPopMatrix();

    car2();
    x=10;
    train_line();
    glPushMatrix();
    for(int i=0;i<6;i++)
    {
        glTranslated(x,0,0);
        train_line();
    }
    glPopMatrix();
    glColor3ub(123,25,25);
    glBegin(GL_POLYGON);
    glVertex2f(-40,-9.3);
    glVertex2f(40,-9.3);
    glVertex2f(40,-8);
    glVertex2f(-40,-8);
    glEnd();

    x=0;
    for(int i=0;i<5;i++)
    {
         glPushMatrix();
         glTranslatef(x,15,0);
         road1();
         glPopMatrix();
         x+=16;
    }


    glPushMatrix();
    glTranslated(move_train,0,0);
    train();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,32,0);
    sun();
    glPopMatrix();
    cloud();
    glPushMatrix();
    glTranslatef(4,0,0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4,0,0);
    cloud();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,4,0);
    cloud();
    glPopMatrix();

    ////
    glPushMatrix();
    glTranslatef(45,0,0);
     cloud();
    glPushMatrix();
    glTranslatef(4,0,0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4,0,0);
    cloud();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2,-2,0);
    cloud();
    glPopMatrix();
    glPopMatrix();

}

void cityDisplay()
{
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
    //car part

    scenary();
    car();
    train_line();
    glPushMatrix();
    glScalef(0.06,0.06,1);
    boat();
    glPopMatrix();
    glutSwapBuffers();
    glFlush();
}

/////village code////

float V_angel=0;float V_move_car1=0.0,V_move_boat=0,V_move_car2=0,V_move_train=0;
void V_car_Body()
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
void V_car_Wheel0()
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
    glRotatef(V_angel,0,0,1);
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
void V_car_Wheel1()
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
    glRotatef(V_angel,0,0,1);
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
void V_car()
{
        glPushMatrix();
    glTranslatef(0,-17.6,0);
    glTranslatef(V_move_car1,-1,1);
    glScalef(1.5,1.5,0);
    car_Body();
    V_car_Wheel0();
    V_car_Wheel1();
    glPopMatrix();
}
void V_car2()
{
    glPushMatrix();
    glTranslatef(15,-9.6,0);
    glTranslatef(V_move_car2,-1,1);
    glScalef(1.5,1.5,0);
    car_Body();
    V_car_Wheel0();
    V_car_Wheel1();
    glPopMatrix();
}
void V_road()
{
    glColor3ub(102,52,0);
    glBegin(GL_QUADS);
    glVertex2f(-40,-15);
    glVertex2f(-40,-12);
    glVertex2f(40,-12);
    glVertex2f(40,-15);
    glEnd();
}
void V_boat()
{
    glPushMatrix();
    glTranslatef(-300,-490,0);
    glTranslatef(V_move_boat,0,1);
    glBegin(GL_QUADS);   //gun boat lower part
glColor3ub (56,56,52);
glVertex2i(350,10);
glVertex2i(410,60);
glVertex2i(40,35);
glVertex2i(50,10);
glEnd();


glBegin(GL_QUADS);   //lower upper part
glColor3ub(132,132,130);
glVertex2i(60,35);
glVertex2i(257,47);
glVertex2i(250,70);
glVertex2i(65,55);
glEnd();

glBegin(GL_QUADS);    //middle upper part
glColor3ub(92,92,88);
glVertex2i(250,47);
glVertex2i(275,50);
glVertex2i(270,62);
glVertex2i(250,60);
glEnd();

glBegin(GL_QUADS);   //upper part
glColor3ub(69,69,68);
glVertex2i(90,55);
glVertex2i(200,60);
glVertex2i(180,90);
glVertex2i(95,80);
glEnd();

glBegin(GL_QUADS);   //bridge covering part
glColor3ub(69,69,68);
glVertex2i(110,80);
glVertex2i(180,75);
glVertex2i(160,110);
glVertex2i(115,100);
glEnd();


glBegin(GL_QUADS);    //gun
glColor3ub(54,54,54);
glVertex2i(187,80);
glVertex2i(240,100);
glVertex2i(235,105);
glVertex2i(183,85);
glEnd();
glPopMatrix();
}
void V_background()
{
    glColor3ub(128,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-40,-5.5);
    glVertex2f(40,-5.5);
    glVertex2f(40,30);
    glVertex2f(-40,30);
    glEnd();
}
void V_tree()
{
    glPushMatrix();
    glTranslatef(5,4.5,0);

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
    glPopMatrix();
}
float V_angelT;
void V_turbine0()
{
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
    glRotatef(V_angelT,0,0,1);
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

}
void V_sun()
{
    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    float x_center=-0.3;
    float y_center=-9.04;
    float radius0=3.1;
    float theta;
    for(int i=0;i<360;i++)
    {
        theta=(i*3.1416)/180;
        float x0=x_center+radius0*cos(theta);
        float y0=y_center+radius0*sin(theta);
        glVertex2f(x0,y0);
    }
    glEnd();

}
void V_river()
{
    glColor3ub(26,198,255);
    glBegin(GL_QUADS);
    glVertex2f(-0.8,-16.8);
    glVertex2f(11.45,-15.6);
    glVertex2f(7,-22.2);
    glVertex2f(-5.3,-22.2);

     glVertex2f(-0.8,-16.8);
    glVertex2f(11.45,-15.6);
    glVertex2f(8.24,-3.4);
    glVertex2f(-1.6,-2.55);

    glVertex2f(8.24,-3.4);
    glVertex2f(-1.6,-2.55);
    glVertex2f(4.45,7.22);
    glVertex2f(10.3,7.3);
    glEnd();
}
void V_cloud()
{
    glPushMatrix();
    glTranslatef(-20,30,0);
    glColor3ub(255,255,245);
    glBegin(GL_POLYGON);
    float x_center=-0.3;
    float y_center=-9.04;
    float radius0=3.1;
    float theta;
    for(int i=0;i<360;i++)
    {
        theta=(i*3.1416)/180;
        float x0=x_center+radius0*cos(theta);
        float y0=y_center+radius0*sin(theta);
        glVertex2f(x0,y0);
    }
    glEnd();
    glPopMatrix();
}
void V_hil1()
{
    glColor3ub(59,118,136);
    glBegin(GL_TRIANGLES);
    glVertex2f(-13.5,10);
    glVertex2f(-8.24,14.5);
    glVertex2f(1.7,10);
    glEnd();

    glColor3ub(4,50,65);
    glBegin(GL_TRIANGLES);
    glVertex2f(-13.5,10);
    glVertex2f(-8.24,14.5);
    glVertex2f(-16.3,10);
    glEnd();
}
void V_hill2()
{
    glColor3ub(77,152,175);
    glBegin(GL_QUADS);
    glVertex2f(-8.0191790658675,10.3315400528536);
    glVertex2f(3.8577346626757,19.0321256068077);
    glVertex2f(9.763197082811,19.3709636145203);
    glVertex2f(29.2883951901707,10.069662163436);
    glEnd();
    glColor3ub(255,254,250);
    glBegin(GL_QUADS);
    glVertex2f(-1.3572710641786,16.3894314232706);
    glVertex2f(3.8577346626757,19.0321256068077);
    glVertex2f(9.763197082811,19.3709636145203);
    glVertex2f(2.9280694630796,17.2176905167743);

    glVertex2f(9.763197082811,19.3709636145203);
    glVertex2f(2.9280694630796,17.2176905167743);
    glVertex2f(2.3158779591855,15.2010596804175);
    glVertex2f(6.5652072215088,17.3617355765141);

    glVertex2f(9.763197082811,19.3709636145203);
    glVertex2f(6.5652072215088,17.3617355765141);
    glVertex2f(9.8422323305886,15.5611723297669);
    glVertex2f(10,18);

    glVertex2f(9.763197082811,19.3709636145203);
    glVertex2f(16.1442036942035,16.4254426882056);
    glVertex2f(10,18);
    glVertex2f(3.8577346626757,19.0321256068077);
    glEnd();
}
void V_house()
{
    glColor3ub(185,153,94);
    glLineWidth(3.0);
    glBegin(GL_POLYGON);
	glVertex2f(-30.4981472055797,2.6483990117473);
	glVertex2f(-29.9153099851901,3.2959959232912);
	glVertex2f(-23.5041005609051,2.4217400927069);
	glVertex2f(-23.5688602520595,1.5474842621227);
	glEnd();

	glColor3ub(185,153,94);
    glLineWidth(3.0);
    glBegin(GL_POLYGON);
	glVertex2f(-23.5041005609051,2.4217400927069);
	glVertex2f(-23.5688602520595,1.5474842621227);
	glVertex2f(-15.1855832384703,1.6623650703244);
	glVertex2f(-16.0341379816805,2.4523987967615);
	glEnd();

	glColor3ub(213,136,60);
    glLineWidth(3.0);
    glBegin(GL_POLYGON);
	glVertex2f(-29.9153099851901,3.2959959232912);
	glVertex2f(-23.5041005609051,2.4217400927069);
	glVertex2f(-26.8413529148174,9.6042265947544);
	glVertex2f(-29.8065494650772,5.8937792723386);
	glEnd();

	glColor3ub(213,136,60);
    glLineWidth(3.0);
    glBegin(GL_POLYGON);
	glVertex2f(-23.5041005609051,2.4217400927069);
	glVertex2f(-26.8413529148174,9.6042265947544);
	glVertex2f(-15.9955264620602,6.476524712011);
	glVertex2f(-16.0341379816805,2.4523987967615);
	glEnd();

	glColor3ub(170,163,81);
    glLineWidth(3.0);
    glBegin(GL_POLYGON);
	glVertex2f(-26.8413529148174,9.6042265947544);
	glVertex2f(-30.7540529383559,6.0028155518666);
	glVertex2f(-29.8065494650772,5.8937792723386);
	glVertex2f(-26.6101219848371,9.2233705863946);
	glEnd();

	glColor3ub(170,163,81);
    glLineWidth(3.0);
    glBegin(GL_POLYGON);
	glVertex2f(-26.8413529148174,9.6042265947544);
	glVertex2f(-23.4375393350845,5.9573610421916);
	glVertex2f(-14.9614693396897,5.992974781668);
	glVertex2f(-18.5228432873345,9.5899624687891);
	glEnd();

	glColor3ub(1, 0, 0);
    glLineWidth(3.0);
    glBegin(GL_POLYGON);
	glVertex2f(-27.6650900926371,5.8221589024436);
	glVertex2f(-25.6718724045417,5.8221589024436);
	glVertex2f(-25.6718724045417,4.2005580714508);
	glVertex2f(-27.7326567939285,4.2681247727422);
	glEnd();

	glColor3ub(1, 0, 0);
    glLineWidth(3.0);
    glBegin(GL_POLYGON);
	glVertex2f(-21.246253469957,5.5856754479238);
	glVertex2f(-18.2057519118454,5.5518920972781);
	glVertex2f(-18.1719685611997,2.4438238378753);
	glVertex2f(-21.2800368206027,2.477607188521);
	glEnd();

}
void V_scenary()
{

    glColor3ub(204,229,255);
    glBegin(GL_QUADS);
    glVertex2f(-40,7.25);
    glVertex2f(40,7.25);
    glVertex2f(40,34);
    glVertex2f(-40,34);
    glEnd();
    glPushMatrix();
    glTranslatef(-5,-3,0);
    V_hill2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-5,-2.7,0);
    V_hil1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(30,-6.8,0);
    glScalef(1.4,1.4,1);
    V_hil1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-6.8,0);
    glScalef(1.4,1.4,1);
    V_hil1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(47,-6.8,0);
    glScalef(1.4,1.4,1);
    V_hil1();
    glPopMatrix();

    glColor3ub(126,200,80);
    glBegin(GL_QUADS);
    glVertex2f(-40,-22);
    glVertex2f(-40,7.25);
    glVertex2f(40,7.25);
    glVertex2f(40,-22);
    glEnd();


    glPushMatrix();
    glTranslatef(5,-5,0);
    V_house();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-43,3,0);
    V_tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5,-8,0);
    V_house();
    glPopMatrix();







    glPushMatrix();
    glTranslatef(30,6.5,0);
    V_turbine0();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(50,-8,0);
    V_house();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(25,-8.4,0);
    glScalef(.7,.7,1);
    V_tree();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(15,-7,0);
    glScalef(1.3,1.3,1);
    V_turbine0();
    glPopMatrix();
    V_river();
    //tree();
    glPushMatrix();
    glTranslatef(-32,-4,0);
    //tree();
    glPopMatrix();
    V_road();
    glPushMatrix();
    glTranslatef(0,-0.8,0);
    glScalef(0.7,0.7,0);
    V_car();
    glPopMatrix();
    int x=0;
    for(int i=0;i<5;i++)
    {
         glPushMatrix();
         glTranslatef(x,0,0);
         //road1();
         glPopMatrix();
         x+=16;
    }
    //road2();
    glPushMatrix();
    glTranslatef(0,7.4,0);
    //road2();
    glPopMatrix();

    //line();
    glPushMatrix();
    glTranslatef(0,7.4,0);
    //line();
    glPopMatrix();

    //car2();
    x=10;
    //train_line();
    glPushMatrix();
    for(int i=0;i<6;i++)
    {
        glTranslated(x,0,0);
        //train_line();
    }
    glPopMatrix();

    x=0;
    for(int i=0;i<5;i++)
    {
         glPushMatrix();
         glTranslatef(x,15,0);
         //road1();
         glPopMatrix();
         x+=16;
    }


    glPushMatrix();
    glTranslated(V_move_train,0,0);
    //train();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-13,32,0);
    V_sun();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-40,-18,0);
    glScalef(.7,.7,1);
    V_tree();
    glPopMatrix();
    V_cloud();
    glPushMatrix();
    glTranslatef(4,0,0);
    V_cloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4,0,0);
    V_cloud();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,4,0);
    V_cloud();
    glPopMatrix();

    ////
    glPushMatrix();
    glTranslatef(45,0,0);
    V_cloud();
    glPushMatrix();
    glTranslatef(4,0,0);
    V_cloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4,0,0);
    V_cloud();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-3,5,0);
    V_cloud();
    glPopMatrix();
    glPopMatrix();
}

void V_display()
{
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
    //car part
    V_scenary();
    //car();
    //train_line();

    //water
    glColor3ub(26,198,255);
    glBegin(GL_POLYGON);
    glVertex2f(-40,-30);
    glVertex2f(40,-30);
    glVertex2f(40,-22);
    glVertex2f(-40,-22);
    glEnd();
    glPushMatrix();
    glScalef(0.06,0.06,1);
    V_boat();
    glPopMatrix();
    glutSwapBuffers();
    glFlush();
}
//////////////////village code////





void updateCity(int value) {

    _angel+=2.0f;
    if(_angel > 360.0)
    {
        _angel-=360;
    }
    move_car1-=0.07;
    if(move_car1<-45)
        move_car1+=85;
    move_car2-=0.17;
    if(move_car2<-55)move_car2+=80;
    move_train-=speed;
    if(move_train<-50)move_train+=120;
    if(move_train>50)move_train-=120;
    move_boat+=4;
    if(move_boat>1000)move_boat-=1500;
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(10, updateCity, 0); //Notify GLUT to call update again in 25 milliseconds
}

void V_update(int value) {

    V_angel+=2.0f;
    if(V_angel > 360.0)
    {
        V_angel-=360;
    }

    V_move_car1-=speed;
    if(V_move_car1<-45)
        V_move_car1+=95;
    if(V_move_car1>45)
        V_move_car1-=95;


    V_move_boat+=4;
    if(V_move_boat>1000)
    {
        V_move_boat-=1500;
    }
    V_angelT+=0.2;
    if(V_angelT>360)V_angelT-=360;
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(10, V_update, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update(int value)
{
    updateCity(value);
    V_update(value);
}


void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
	{
	    speed += .05;
    }
    if (button == GLUT_RIGHT_BUTTON)
	{
	    speed -= .05;
    }
    glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'c':
            glutDisplayFunc(cityDisplay);
            //glutSwapBuffers();

            break;
        case 'v':
            glutDisplayFunc(V_display);
            //glutSwapBuffers();
            break;
        glutPostRedisplay();
    }
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(150,50);
	glutInitWindowSize(900, 600);
	glutCreateWindow("Car");
	glutDisplayFunc(cityDisplay);
	glutMouseFunc(handleMouse);
	glutKeyboardFunc(handleKeypress);
	gluOrtho2D(-40,40,-30,30);
	glutTimerFunc(10, update, 0); //Add a timer
	glutMainLoop();
	return 0;
}

