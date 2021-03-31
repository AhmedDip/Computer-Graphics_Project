#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

GLfloat rainX = 0.0f, rainY = 0.0f;
GLfloat	tx	=  0.0;
GLfloat	ty	=  0.0;

static float	car_run	=  0.0;
static float	car_run2 =  0.0;
static float	train_move =  0.0;
static float	cloud_right =  0.0;
static float	cloud_left =  0.0;
static float	plane_move =  0.0;
float t=0;


void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0);
  glLoadIdentity();
  glOrtho(-50,50,-50,25,-25,5);

}

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}


//Car1

    void car()
    {glPushMatrix();
    glColor3f(0.00, 0.00, 0.54);

    glTranslatef(tx,ty,0);
    glBegin(GL_QUADS);
        glVertex2d(-42.0,-48.0);
        glVertex2d(-19.0, -48.0);
        glVertex2d(-19.0, -43.0);
        glVertex2d(-42.0,-43.0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(-37.0,-39.0);
        glVertex2d(-39.0,-43.0);
        glVertex2d(-22.0, -43.0);
        glVertex2d(-24.0, -39.0);
    glEnd();
     glColor3f(0.87, 1.00, 1.00);
     glBegin(GL_QUADS);
        glVertex2d(-36.0,-40.0);
        glVertex2d(-38.0,-44.0);
        glVertex2d(-23.0, -44.0);
        glVertex2d(-25.0, -40.0);
    glEnd();
    glColor3f(0.00, 0.00, 0.54);
     glBegin(GL_QUADS);
        glVertex2d(-31.0,-44.0);
        glVertex2d(-29.0,-44.0);
        glVertex2d(-29.0, -40.0);
        glVertex2d(-31.0, -40.0);
    glEnd();
     glColor3f(0.0f,0.0f,0.0f);
    circle(2.5,2.5,-36,-47);
    circle(2.5,2.5,-26,-47);

    glColor3ub(247, 244, 245);
    circle(1,1,-36,-47);
    circle(1,1,-26,-47);
    //circle(4,4);
    glPopMatrix();
    }

//Car2

void car2()
    {glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);

    glTranslatef(tx,ty,0);
    glBegin(GL_QUADS);
        glVertex2d(-22.0,-40.0);
        glVertex2d(1.0, -40.0);
        glVertex2d(1.0, -35.0);
        glVertex2d(-22.0,-35.0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(-17.0,-31.0);
        glVertex2d(-19.0,-35.0);
        glVertex2d(-2.0, -35.0);
        glVertex2d(-4.0, -31.0);
    glEnd();
     glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_QUADS);
        glVertex2d(-16.0,-32.0);
        glVertex2d(-18.0,-36.0);
        glVertex2d(-3.0, -36.0);
        glVertex2d(-5.0, -32.0);
    glEnd();
    glColor3f(1.0f,1.0f,0.0f);
     glBegin(GL_QUADS);
        glVertex2d(-11.5,-36.0);
        glVertex2d(-9.5,-36.0);
        glVertex2d(-9.5, -32.0);
        glVertex2d(-11.5, -32.0);
    glEnd();
     glColor3f(0.0f,0.0f,0.0f);
    circle(2.5,2.5,-14.7,-39);
    circle(2.5,2.5,-4.7,-39);

    glColor3ub(247, 244, 245);
    circle(1,1,-14.7,-39);
    circle(1,1,-4.7,-39);
    //circle(4,4);
    glPopMatrix();
    }





void train(){
    //train


    glColor3f(0.0f,0.0f,0.0f);
    circle(1.5,2.2,13,-29);
    circle(1.5,2.2,3,-29);

glColor3f(0.0f,0.0f,0.0f);
    circle(1.5,2.2,-17,-29);
    circle(1.5,2.2,-5,-29);

   glColor3f( 0.5 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-1 ,-22);
   glVertex2f(-1,-29);
   glVertex2f(20 ,-29);
   glVertex2f(15 ,-22);
   glEnd();

glColor3f( 0.5 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-20 ,-22);
   glVertex2f(-20 ,-29);
   glVertex2f(-1.51 ,-29);
   glVertex2f(-1.51,-22);
   glEnd();

glColor3f(0.961, 1.000, 0.980);
   glBegin(GL_POLYGON);
   glVertex2f(1.5 ,-26.5);
   glVertex2f(4.5 ,-26.5);
   glVertex2f(4.5 ,-23.5);
   glVertex2f(1.5 ,-23.5);
   glEnd();


   glColor3f(0.961, 1.000, 0.980);
   glBegin(GL_POLYGON);
   glVertex2f(9.5 ,-26.5);
   glVertex2f(12.5 ,-26.5);
   glVertex2f(12.5 ,-23.5);
   glVertex2f(9.5 ,-23.5);
   glEnd();




   glColor3f(0.961, 1.000, 0.980);
   glBegin(GL_POLYGON);
   glVertex2f(-5.5 ,-26.5);
   glVertex2f(-8.5 ,-26.5);
   glVertex2f(-8.5 ,-23.5);
   glVertex2f(-5.5 ,-23.5);
   glEnd();


   glColor3f(0.961, 1.000, 0.980);
   glBegin(GL_POLYGON);
   glVertex2f(-13.5 ,-26.5);
   glVertex2f(-16.5 ,-26.5);
   glVertex2f(-16.5 ,-23.5);
   glVertex2f(-13.5 ,-23.5);
   glEnd();

}

void train_Move(){
    train_move=train_move+0.04;
    if (train_move>70)
        train_move=-70;
    glutPostRedisplay();


}



void cloud1(){
    //Cloud1

    glPushMatrix();
	glTranslatef(-60.0f, 5.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,14,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,16.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,19.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,15.5,13.2);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,18.3,13.2);
   glPopMatrix();

}

void cloud2(){
    //Cloud2

    glPushMatrix();
	glTranslatef(-40.0f, 0.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,14,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,16.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,19.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,15.5,13.2);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,18.3,13.2);
glPopMatrix();

}

void cloud3(){
    //Cloud3

    glPushMatrix();
	glTranslatef(-30.0f, 8.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

  glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,19,10);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,20.5,10);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,22,10);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,19.5,11.2);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,21.0,11.2);

glPopMatrix();

}


void cloud4(){
    //Cloud4

    glPushMatrix();
	glTranslatef(-10.0f, 7.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,14,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,16.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,19.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,15.5,13.2);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,18.3,13.2);
glPopMatrix();

}

void cloud5(){
       //Cloud5

    glPushMatrix();
	glTranslatef(-10.0f, 7.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,14,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,16.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,19.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,15.5,13.2);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,18.3,13.2);
glPopMatrix();

}

void cloud6(){
    //Cloud6

    glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

  glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,19,10);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,20.5,10);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,22,10);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,19.5,11.2);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(1,1,21.0,11.2);

glPopMatrix();

}

void cloud7(){
    //Cloud7

    glPushMatrix();
	glTranslatef(28.0f, 0.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,14,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,16.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,19.5,11);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,15.5,13.2);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(2,2,18.3,13.2);
glPopMatrix();

}

void plane()
{
    glColor3f(0,0,0.2);
    glBegin(GL_POLYGON);
    glVertex2f(21,20);
    glVertex2f(18,19);
    glVertex2f(21,19);
    glVertex2f(24,19);
    glVertex2f(24,20);
    glVertex2f(25,21);
    glEnd();

    glColor3f(1,1,1);
    circle(.2,.2,20,19.6);
    glColor3f(0,0,1);
    circle(.2,.2,23.8,20);
    glColor3f(1,0,0);
    circle(.2,.2,23.8,19.5);

}



void cloud1_move()
{
    cloud_right=cloud_right+0.0005;
    if (cloud_right>100)
        cloud_right=-50;
    glutPostRedisplay();
}

void cloud6_move()
{
    cloud_right=cloud_right+0.0005;
    if (cloud_right>100)
        cloud_right=-70;
    glutPostRedisplay();
}

void cloud7_move()
{
    cloud_left=cloud_left-0.0005;
    if (cloud_left<-60)
        cloud_left=70;
    glutPostRedisplay();
}



void cloud3_move()
{
    cloud_left=cloud_left-0.0005;
    if (cloud_left<-60)
        cloud_left=70;
    glutPostRedisplay();
}









void car_Run()
{
    car_run=car_run+0.03;
    if (car_run>100)
        car_run=-50;
    glutPostRedisplay();
}

void car_Run2()
{
    car_run2=car_run2-0.03;
    if (car_run2<-100)
        car_run2=70;
    glutPostRedisplay();
}

void plane_Move()
{
    plane_move=plane_move-0.05;
    if (plane_move<-100)
        plane_move=70;
    glutPostRedisplay();
}

void sky(){
//sky
    glColor3f(0.4,0.7,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,35);
	glVertex2f(-50,35);
	glEnd();

}

void ground(){
//Ground

    glPushMatrix();
	glTranslatef(0.0f, 30.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	glColor3f(0.0,0.6,0.0);
    glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-40);
	glVertex2f(-50,-40);
	glEnd();

	glPopMatrix();

}

void river(){
//river
	glPushMatrix();
	glTranslatef(0.0f, 10.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.5,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 8.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.5,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 6.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.4,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 4.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.3,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 2.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.2,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

}

void Front_Wall(){

//Front Wall



	glColor3f(0.0,1.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-27);
	glVertex2f(50,-27);
	glVertex2f(50,-35);
	glVertex2f(-50,-35);
	glEnd();

//train line
    glLineWidth(5.0);

	glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(50 ,-29);
   glVertex2f(-50,-29);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(50 ,-31);
   glVertex2f(-50,-31);
   glEnd();

glLineWidth(5.5);
   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(0 ,-29);
   glVertex2f(0,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(4 ,-29);
   glVertex2f(4,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-4 ,-29);
   glVertex2f(-4,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(8 ,-29);
   glVertex2f(8,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-8 ,-29);
   glVertex2f(-8,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(12 ,-29);
   glVertex2f(12,-31);
   glEnd();

glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-12 ,-29);
   glVertex2f(-12,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(16 ,-29);
   glVertex2f(16,-31);
   glEnd();

 glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-16 ,-29);
   glVertex2f(-16,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(20 ,-29);
   glVertex2f(20,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-20 ,-29);
   glVertex2f(-20,-31);
   glEnd();


   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(24 ,-29);
   glVertex2f(24,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-24 ,-29);
   glVertex2f(-24,-31);
   glEnd();


   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(28 ,-29);
   glVertex2f(28,-31);
   glEnd();

 glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-28 ,-29);
   glVertex2f(-28,-31);
   glEnd();


   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-32 ,-29);
   glVertex2f(-32,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(32 ,-29);
   glVertex2f(32,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(36,-29);
   glVertex2f(36,-31);
   glEnd();

     glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-36,-29);
   glVertex2f(-36,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(40,-29);
   glVertex2f(40,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-40,-29);
   glVertex2f(-40,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(44,-29);
   glVertex2f(44,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-44,-29);
   glVertex2f(-44,-31);
   glEnd();

   glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(48,-29);
   glVertex2f(48,-31);
   glEnd();

 glBegin(GL_LINES);
   glColor3f( 0.0 ,0.0, 0.0);
   glVertex2f(-48,-29);
   glVertex2f(-48,-31);
   glEnd();






}

void back_wall(){
//Back Wall



	glColor3f(0.0,1.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-12);
	glVertex2f(50,-12);
	glVertex2f(50,-9);
	glVertex2f(-50,-9);
	glEnd();


	float x = 0;
	for(x=0;x<=50.0;x++){
        glColor3f(0.0,1.6,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(x,-9);
        glVertex2f(x+1,-9);
        glVertex2f(x+0.50,-7.5);
        glEnd();
        //x = x+0.5;
	}

    float p =-50;
    for(p=0;p>=-50.0;p--){
        glColor3f(0.0,1.6,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(p,-9);
        glVertex2f(p-1,-9);
        glVertex2f(p-0.50,-7.5);
        glEnd();
    }

}

void Tree1(){
//Tree1
    glColor3f(0.54, 0.27, 0.07);
   glBegin(GL_POLYGON);
   glVertex2f(-8.9 ,-2.5);
   glVertex2f(-6.5 ,-2.5);
   glVertex2f(-6.5 ,-12);
   glVertex2f(-8.9 ,-12);
   glEnd();


   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.8,1.8,-10.5,-1.5);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-8.5,-1.5);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-7,-1.5);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.8,1.8,-5,-1.5);


   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-9.5,0.6);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-8.1,0.6);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-6.3,0.6);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(2,2,-8,1.7);
}

void Tree2(){
//Tree2


   glColor3f(0.545, 0.27, 0.07);
   glBegin(GL_POLYGON);
   glVertex2f(10 ,-3);
   glVertex2f(11.2 ,-3);
   glVertex2f(11.2 ,-15);
   glVertex2f(10 ,-15);
   glEnd();

  glColor3f(0.0f, 0.5f, 0.0f);
   circle(3.5,5.8,10.5,-1.5);
}

void Tree3(){

glPushMatrix();
	glTranslatef(-35.0f, 0.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

  //Tree1
    glColor3f( 0.545, 0.27, 0.07);
   glBegin(GL_POLYGON);
   glVertex2f(-8.9 ,-2.5);
   glVertex2f(-6.8 ,-2.5);
   glVertex2f(-6.8 ,-12);
   glVertex2f(-8.9 ,-12);
   glEnd();


   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-10.5,-1.5);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-8.5,-1.5);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-7,-1.5);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-5,-1.5);


   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-9.5,0.6);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-8.1,0.6);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(1.5,1.5,-6.3,0.6);

   glColor3f(0.0f, 0.5f, 0.0f);
   circle(2,2,-8,1.7);



   //Tree2



}

void House1(){

//House1

   glColor3f( 0.7 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-3.2 ,-15);
   glVertex2f(6.8 ,-15);
   glVertex2f(6.8 ,5);
   glVertex2f(-3.2 ,5);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-2.7 ,-6);
   glVertex2f(0.8 ,-6);
   glVertex2f(0.8 ,4.3);
   glVertex2f(-2.7 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-1 ,-6);
   glVertex2f(-0.90 ,-6);
   glVertex2f(-0.90 ,4.3);
   glVertex2f(-1 ,4.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-2.7 ,-0.7);
   glVertex2f(0.8 ,-0.7);
   glVertex2f(0.8 ,0);
   glVertex2f(-2.7 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-2.7 ,-3.35);
   glVertex2f(0.8 ,-3.35);
   glVertex2f(0.8 ,-3.45);
   glVertex2f(-2.7 ,-3.45);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-2.7 ,1.70);
   glVertex2f(0.8 ,1.70);
   glVertex2f(0.8 ,1.85);
   glVertex2f(-2.7 ,1.85);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,-6);
   glVertex2f(6.3 ,-6);
   glVertex2f(6.3 ,4.3);
   glVertex2f(3 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(4.65 ,-6);
   glVertex2f(4.72 ,-6);
   glVertex2f(4.72 ,4.3);
   glVertex2f(4.65 ,4.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,-0.7);
   glVertex2f(6.3 ,-0.7);
   glVertex2f(6.3 ,0);
   glVertex2f(3 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,1.70);
   glVertex2f(6.3 ,1.70);
   glVertex2f(6.3 ,1.85);
   glVertex2f(3 ,1.85);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,-3.35);
   glVertex2f(6.3 ,-3.35);
   glVertex2f(6.3 ,-3.45);
   glVertex2f(3 ,-3.45);
   glEnd();

   //Door


   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(0.3 ,-15);
   glVertex2f(3.7 ,-15);
   glVertex2f(3.7 ,-7);
   glVertex2f(0.3 ,-7);
   glEnd();
}



//Clock
void Clock()
{

    glColor3ub(255,255,204);
    glBegin(GL_QUADS);
    glVertex2f(-2.3,5);
    glVertex2f(5.8,5);
    glVertex2f(5.8,12.1);
    glVertex2f(-2.3,12.1);
    glEnd();

    glColor3ub(179,179,204);
    circle(3,3.3,1.8,8.4);

    glColor3ub(0,0,0);
    circle(0.3,0.3,1.8,8.35);

    //second



    glLineWidth(1.3);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.5,8.2);
    glVertex2f(4.6,8.4);
    glEnd();

    //minute

  glLineWidth(1.5);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.5,8.39);
    glVertex2f(-0.4,9.4);
    glEnd();

    //hour

  glLineWidth(1.8);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.5,8.2);
    glVertex2f(0.008,7.8);
    glEnd();





}





void House2(){

//House2

   glColor3f(0.600, 0.196, 0.800);
   glBegin(GL_POLYGON);
   glVertex2f(-22.2 ,-15);
   glVertex2f(-12.2 ,-15);
   glVertex2f(-12.2 ,5);
   glVertex2f(-22.2 ,5);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-21.7 ,-6);
   glVertex2f(-18.2 ,-6);
   glVertex2f(-18.2 ,4.3);
   glVertex2f(-21.7 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-20 ,-6);
   glVertex2f(-19.90 ,-6);
   glVertex2f(-19.90 ,4.3);
   glVertex2f(-20 ,4.3);
   glEnd();

   glColor3f( 0.2 ,0.0, 0.2);
   glBegin(GL_POLYGON);
   glVertex2f(-21.7 ,-0.7);
   glVertex2f(-18.2 ,-0.7);
   glVertex2f(-18.2 ,0);
   glVertex2f(-21.7 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-21.7 ,-3.35);
   glVertex2f(-18.2 ,-3.35);
   glVertex2f(-18.2 ,-3.45);
   glVertex2f(-21.7 ,-3.45);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-21.7 ,1.75);
   glVertex2f(-18.2 ,1.75);
   glVertex2f(-18.2 ,1.95);
   glVertex2f(-21.7 ,1.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-16 ,-6);
   glVertex2f(-12.7 ,-6);
   glVertex2f(-12.7 ,4.3);
   glVertex2f(-16 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-14.35 ,-6);
   glVertex2f(-14.28 ,-6);
   glVertex2f(-14.28 ,4.3);
   glVertex2f(-14.35 ,4.3);
   glEnd();

   glColor3f( 0.2 ,0.0, 0.2);
   glBegin(GL_POLYGON);
   glVertex2f(-16 ,-0.7);
   glVertex2f(-12.7 ,-0.7);
   glVertex2f(-12.7 ,0);
   glVertex2f(-16 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-16 ,1.75);
   glVertex2f(-12.7 ,1.75);
   glVertex2f(-12.7 ,1.95);
   glVertex2f(-16 ,1.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-16 ,-3.35);
   glVertex2f(-12.7 ,-3.35);
   glVertex2f(-12.7 ,-3.45);
   glVertex2f(-16 ,-3.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-18.7 ,-15);
   glVertex2f(-15.3 ,-15);
   glVertex2f(-15.3 ,-7);
   glVertex2f(-18.7 ,-7);
   glEnd();
}

void House3(){

//House3

   glColor3f(0.600, 0.196, 0.800);
   glBegin(GL_POLYGON);
   glVertex2f(14.3 ,-15);
   glVertex2f(24.3 ,-15);
   glVertex2f(24.3 ,5);
   glVertex2f(14.3 ,5);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-6);
   glVertex2f(18.3 ,-6);
   glVertex2f(18.3 ,4.3);
   glVertex2f(14.8 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(16.5 ,-6);
   glVertex2f(16.6 ,-6);
   glVertex2f(16.6 ,4.3);
   glVertex2f(16.5 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-0.7);
   glVertex2f(18.3 ,-0.7);
   glVertex2f(18.3 ,0);
   glVertex2f(14.8 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-3.35);
   glVertex2f(18.3 ,-3.35);
   glVertex2f(18.3 ,-3.45);
   glVertex2f(14.8 ,-3.45);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,1.75);
   glVertex2f(18.3 ,1.75);
   glVertex2f(18.3 ,1.95);
   glVertex2f(14.8 ,1.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-6);
   glVertex2f(23.8 ,-6);
   glVertex2f(23.8 ,4.3);
   glVertex2f(20.5 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(22.15 ,-6);
   glVertex2f(22.22 ,-6);
   glVertex2f(22.22 ,4.3);
   glVertex2f(22.15 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-0.7);
   glVertex2f(23.8 ,-0.7);
   glVertex2f(23.8 ,0);
   glVertex2f(20.5 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,1.75);
   glVertex2f(23.8 ,1.75);
   glVertex2f(23.8 ,1.95);
   glVertex2f(20.5 ,1.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-3.35);
   glVertex2f(23.8 ,-3.35);
   glVertex2f(23.8 ,-3.45);
   glVertex2f(20.5 ,-3.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(17.8 ,-15);
   glVertex2f(21.2 ,-15);
   glVertex2f(21.2 ,-7);
   glVertex2f(17.8 ,-7);
   glEnd();
}

void House4(){

//House4


    glPushMatrix();
	glTranslatef(15.0f, 0.0f, 0.0f);
	//glRotatef(0, 0.0f, 0.0f, -1.0f);

	glColor3f(0.275, 0.510, 0.706);
   glBegin(GL_POLYGON);
   glVertex2f(14.3 ,-15);
   glVertex2f(24.3 ,-15);
   glVertex2f(24.3 ,5);
   glVertex2f(14.3 ,5);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-6);
   glVertex2f(18.3 ,-6);
   glVertex2f(18.3 ,4.3);
   glVertex2f(14.8 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(16.5 ,-6);
   glVertex2f(16.6 ,-6);
   glVertex2f(16.6 ,4.3);
   glVertex2f(16.5 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-0.7);
   glVertex2f(18.3 ,-0.7);
   glVertex2f(18.3 ,0);
   glVertex2f(14.8 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-3.35);
   glVertex2f(18.3 ,-3.35);
   glVertex2f(18.3 ,-3.45);
   glVertex2f(14.8 ,-3.45);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,1.75);
   glVertex2f(18.3 ,1.75);
   glVertex2f(18.3 ,1.95);
   glVertex2f(14.8 ,1.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-6);
   glVertex2f(23.8 ,-6);
   glVertex2f(23.8 ,4.3);
   glVertex2f(20.5 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(22.15 ,-6);
   glVertex2f(22.22 ,-6);
   glVertex2f(22.22 ,4.3);
   glVertex2f(22.15 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-0.7);
   glVertex2f(23.8 ,-0.7);
   glVertex2f(23.8 ,0);
   glVertex2f(20.5 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,1.75);
   glVertex2f(23.8 ,1.75);
   glVertex2f(23.8 ,1.95);
   glVertex2f(20.5 ,1.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-3.35);
   glVertex2f(23.8 ,-3.35);
   glVertex2f(23.8 ,-3.45);
   glVertex2f(20.5 ,-3.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(17.8 ,-15);
   glVertex2f(21.2 ,-15);
   glVertex2f(21.2 ,-7);
   glVertex2f(17.8 ,-7);
   glEnd();

	glPopMatrix();
}


void House5(){

//House5


    glPushMatrix();
	glTranslatef(30.0f, 0.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	glColor3f( 0.2 ,0.2, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.3 ,-15);
   glVertex2f(24.3 ,-15);
   glVertex2f(24.3 ,5);
   glVertex2f(14.3 ,5);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-6);
   glVertex2f(18.3 ,-6);
   glVertex2f(18.3 ,4.3);
   glVertex2f(14.8 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(16.5 ,-6);
   glVertex2f(16.6 ,-6);
   glVertex2f(16.6 ,4.3);
   glVertex2f(16.5 ,4.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-0.7);
   glVertex2f(18.3 ,-0.7);
   glVertex2f(18.3 ,0);
   glVertex2f(14.8 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,-3.35);
   glVertex2f(18.3 ,-3.35);
   glVertex2f(18.3 ,-3.45);
   glVertex2f(14.8 ,-3.45);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(14.8 ,1.75);
   glVertex2f(18.3 ,1.75);
   glVertex2f(18.3 ,1.95);
   glVertex2f(14.8 ,1.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-6);
   glVertex2f(23.8 ,-6);
   glVertex2f(23.8 ,4.3);
   glVertex2f(20.5 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(22.15 ,-6);
   glVertex2f(22.22 ,-6);
   glVertex2f(22.22 ,4.3);
   glVertex2f(22.15 ,4.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-0.7);
   glVertex2f(23.8 ,-0.7);
   glVertex2f(23.8 ,0);
   glVertex2f(20.5 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,1.75);
   glVertex2f(23.8 ,1.75);
   glVertex2f(23.8 ,1.85);
   glVertex2f(20.5 ,1.85);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(20.5 ,-3.35);
   glVertex2f(23.8 ,-3.35);
   glVertex2f(23.8 ,-3.45);
   glVertex2f(20.5 ,-3.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(17.8 ,-15);
   glVertex2f(21.2 ,-15);
   glVertex2f(21.2 ,-7);
   glVertex2f(17.8 ,-7);
   glEnd();

	glPopMatrix();
}

void House6(){

//House6

   glColor3f( 0.2 ,0.2, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-3.2 ,-15);
   glVertex2f(6.8 ,-15);
   glVertex2f(6.8 ,5);
   glVertex2f(-3.2 ,5);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-2.7 ,-6);
   glVertex2f(0.8 ,-6);
   glVertex2f(0.8 ,4.3);
   glVertex2f(-2.7 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-1 ,-6);
   glVertex2f(-0.9 ,-6);
   glVertex2f(-0.9 ,4.3);
   glVertex2f(-1 ,4.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-2.7 ,-0.7);
   glVertex2f(0.8 ,-0.7);
   glVertex2f(0.8 ,0);
   glVertex2f(-2.7 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-2.7 ,-3.35);
   glVertex2f(0.8 ,-3.35);
   glVertex2f(0.8 ,-3.45);
   glVertex2f(-2.7 ,-3.45);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-2.7 ,1.75);
   glVertex2f(0.8 ,1.75);
   glVertex2f(0.8 ,1.95);
   glVertex2f(-2.7 ,1.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,-6);
   glVertex2f(6.3 ,-6);
   glVertex2f(6.3 ,4.3);
   glVertex2f(3 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(4.65 ,-6);
   glVertex2f(4.72 ,-6);
   glVertex2f(4.72 ,4.3);
   glVertex2f(4.65 ,4.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,-0.7);
   glVertex2f(6.3 ,-0.7);
   glVertex2f(6.3 ,0);
   glVertex2f(3 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,1.75);
   glVertex2f(6.3 ,1.75);
   glVertex2f(6.3 ,1.95);
   glVertex2f(3 ,1.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,-3.35);
   glVertex2f(6.3 ,-3.35);
   glVertex2f(6.3 ,-3.45);
   glVertex2f(3 ,-3.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(0.3 ,-15);
   glVertex2f(3.7 ,-15);
   glVertex2f(3.7 ,-7);
   glVertex2f(0.3 ,-7);
   glEnd();

}

void House7(){

//House7

   glColor3f( 0.2 ,0.0, 0.2);
   glBegin(GL_POLYGON);
   glVertex2f(-22.2 ,-15);
   glVertex2f(-12.2 ,-15);
   glVertex2f(-12.2 ,5);
   glVertex2f(-22.2 ,5);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-21.7 ,-6);
   glVertex2f(-18.2 ,-6);
   glVertex2f(-18.2 ,4.3);
   glVertex2f(-21.7 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-20 ,-6);
   glVertex2f(-19.95 ,-6);
   glVertex2f(-19.95 ,4.3);
   glVertex2f(-20 ,4.3);
   glEnd();

   glColor3f( 0.2 ,0.0, 0.2);
   glBegin(GL_POLYGON);
   glVertex2f(-21.7 ,-0.7);
   glVertex2f(-18.2 ,-0.7);
   glVertex2f(-18.2 ,0);
   glVertex2f(-21.7 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-21.7 ,-3.35);
   glVertex2f(-18.2 ,-3.35);
   glVertex2f(-18.2 ,-3.45);
   glVertex2f(-21.7 ,-3.45);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-21.7 ,1.75);
   glVertex2f(-18.2 ,1.75);
   glVertex2f(-18.2 ,1.85);
   glVertex2f(-21.7 ,1.85);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-16 ,-6);
   glVertex2f(-12.7 ,-6);
   glVertex2f(-12.7 ,4.3);
   glVertex2f(-16 ,4.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-14.35 ,-6);
   glVertex2f(-14.28 ,-6);
   glVertex2f(-14.28 ,4.3);
   glVertex2f(-14.35 ,4.3);
   glEnd();

   glColor3f( 0.2 ,0.0, 0.2);
   glBegin(GL_POLYGON);
   glVertex2f(-16 ,-0.7);
   glVertex2f(-12.7 ,-0.7);
   glVertex2f(-12.7 ,0);
   glVertex2f(-16 ,0);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-16 ,1.75);
   glVertex2f(-12.7 ,1.75);
   glVertex2f(-12.7 ,1.95);
   glVertex2f(-16 ,1.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-16 ,-3.35);
   glVertex2f(-12.7 ,-3.35);
   glVertex2f(-12.7 ,-3.45);
   glVertex2f(-16 ,-3.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-18.7 ,-15);
   glVertex2f(-15.3 ,-15);
   glVertex2f(-15.3 ,-7);
   glVertex2f(-18.7 ,-7);
   glEnd();

    glPopMatrix();
}

void Road1(){

//Road1

   glColor3ub(22, 21, 21);
   glBegin(GL_POLYGON);
   glVertex2f(-50 ,-20);
   glVertex2f(50 ,-20);
   glVertex2f(50 ,-15);
   glVertex2f(-50 ,-15);
   glEnd();

    glColor3ub(252, 249, 249);
    glBegin(GL_LINES);
    glVertex2d(-50.0,-17.5);
    glVertex2d(50.0,-17.5);
    glEnd();
}

void Road2(){

//Road2

   glColor3ub(22, 21, 21);
     glBegin(GL_QUADS);
      glVertex2d(-50,-50);
      glVertex2d(50,-50);
      glVertex2d(50,-35);
      glVertex2d(-50,-35);
    glEnd();

    glColor3ub(252, 249, 249);
    glBegin(GL_LINES);
    glVertex2d(-50.0,-42.5);
    glVertex2d(50.0,-42.5);
    glEnd();
}

void Sun(){
//Sun
    glPushMatrix();
	glTranslatef(35.0f, 5.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

   glColor3f(1.0f, 1.0f, 0.0f);
   circle(3,3,4.5,11.5);
glPopMatrix();

}



void drawLine (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat a, GLfloat b, GLfloat c , int w) {
    glLineWidth(w);
    glBegin(GL_LINES);
    glColor3f(a, b, c);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();
}


void update (int value) {
    rainX -= 0.2f;
    rainY -= 0.2f;
    if (rainX < -0.2f) {
      rainX = 0.0f;
      rainY = 0.0f;
    }
    glutTimerFunc(100, update, 0);
}

void doRain () {



    //glClear(GL_COLOR_BUFFER_BIT);

glPushMatrix();
    void Day();
  glTranslatef(rainX, rainY, 0);
	for (double i = -100.0f; i < 100.0f; i += 6.0f) {
      for (double j = -100.0f; j < 100.0f; j += 4.0f) {
        drawLine(i, j, i - 10.0f, j - 10.0f, 1, 1, 1, 1);
      }
	}
	glutTimerFunc(100, update, 0);

	//glLoadIdentity();

	glPopMatrix();

	glutSwapBuffers();

}





void Day()
{  glClear(GL_COLOR_BUFFER_BIT);
    //sky
	sky();

	//Ground
	ground();

	//river
    river();

	//Back Wall
    back_wall();


    //Tree1
    Tree1();


    //Tree2
    Tree2();


    //House1
    House1();

    //House2
    House2();

     //clock
    Clock();

    //House3
    House3();

    //Road1
    Road1();

    //Sun
    Sun();

    //House4
    House4();


    //House5
    House5();

    //Tree3
	Tree3();


    //House6
    House6();

    //House7
    House7();

    //Front Wall
    Front_Wall();


    //Road2
    Road2();


    plane_Move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(plane_move+i,0,0);
       plane();
       glPopMatrix();
   }



    cloud1_move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(cloud_right+i,0,0);
       cloud1();
       glPopMatrix();
   }

   cloud1_move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(cloud_right+i,0,0);
       cloud2();
       glPopMatrix();
   }

   cloud3_move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(cloud_left+i,0,0);
       cloud3();
       glPopMatrix();
   }

   cloud3_move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(cloud_left+i,0,0);
       cloud4();
       glPopMatrix();
   }

   cloud1_move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(cloud_right+i,0,0);
       cloud5();
       glPopMatrix();
   }

   cloud6_move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(cloud_right+i,0,0);
       cloud6();
       glPopMatrix();
   }

   cloud7_move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(cloud_left+i,0,0);
       cloud7();
       glPopMatrix();
   }


    car_Run2();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(car_run2+i,0,0);
       car2();
       glPopMatrix();
   }


    car_Run();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(car_run+i,0,0);
       car();
       glPopMatrix();
   }

   train_Move();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(train_move+i,0,0);
       train();
       glPopMatrix();
   }


glutSwapBuffers();


}

void Night(){
glClear(GL_COLOR_BUFFER_BIT);
    //sky
    glColor3f(0.0,0.0,.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,35);
	glVertex2f(-50,35);
	glEnd();


	//Ground
	ground();

    //river
    river();

    //Back Wall
    back_wall();

    //Tree1
    Tree1();

    //Tree2
    Tree2();

    //House1
    House1();

    //House2
    House2();

    //clock
    Clock();

    //House3
    House3();

    //Road1
    Road1();

   //Moon

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(3,3,25.5,16.5);

   glColor3f(0.0f, 0.0f, 0.0f);
   circle(3,3,24.5,17.5);

   //Stars
   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,10.5,16.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-5.5,10.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-8.5,12.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-20,18.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-15,7.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-25,11.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-32,14.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-40,10.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-46,16.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,32,19.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,37,14.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,46,17.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,0,18);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-8,20.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,8,13.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,15,11.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,19,18.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,14,20.5);



    //House4
    House4();


    //House5
	House5();

    //Tree3
	Tree3();

    //House6
    House6();

    //House7
    House7();

    //Front Wall
    Front_Wall();

    //Road2
    Road2();



    plane_Move();
    for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(plane_move+i,0,0);
       plane();
       glPopMatrix();
   }


    car_Run2();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(car_run2+i,0,0);
       car2();
       glPopMatrix();
   }


    car_Run();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(car_run+i,0,0);
       car();
       glPopMatrix();
   }

   train_Move();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(train_move+i,0,0);
       train();
       glPopMatrix();
   }


glutSwapBuffers();


}




void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_UP:
				//ty +=5;
				PlaySound("1.wav", NULL, SND_ASYNC|SND_FILENAME);
				t=1;

glutPostRedisplay();
				break;




        case GLUT_KEY_DOWN:
				//ty +=5;
				PlaySound(NULL, NULL, 0);
				t=0;
                glutPostRedisplay();
				break;


        default:
			break;
	}
}
void sound()
{

    PlaySound("2.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("1.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("3.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("4.wav", NULL, SND_ASYNC|SND_FILENAME);



}




void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'd':
	        glutDisplayFunc(Day);
	        glutKeyboardFunc(handleKeypress);
	        PlaySound("1.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;
        case 'D':
            glutDisplayFunc(Day);
	        glutKeyboardFunc(handleKeypress);
            PlaySound("1.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;
         case 'n':
            glutDisplayFunc(Night);
	        glutKeyboardFunc(handleKeypress);
	        PlaySound("2.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;
        case  'N':
	        glutDisplayFunc(Night);
	        glutKeyboardFunc(handleKeypress);
	        PlaySound("2.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;
            case  't':
	        glutDisplayFunc(Day);
	        glutKeyboardFunc(handleKeypress);

	        PlaySound("3.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;
        case  'r':
          glutDisplayFunc(doRain);
	        glutKeyboardFunc(handleKeypress);
	        glutPostRedisplay();
	        PlaySound("4.wav", NULL, SND_ASYNC|SND_FILENAME);

            break;



    }
}





int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(30,0);
    glutInitWindowSize(1000,650);
    glutCreateWindow("Cool City");
    init();
    glutSpecialFunc(spe_key);
    glutDisplayFunc(Day);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}
