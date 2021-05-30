#include<cstdio>
#include <GL/gl.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846
GLfloat i = 0.0f;
GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed = 0.1f;
GLfloat speed2 = 0.1f;
void display();
void night();
void update(int value) {

    if(position >1.0)
        position =-1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update2(int value) {

    if(position2 <-1.0)
        position2 =1.0f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(500, update2, 0);
}
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void night() {
   glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    //gluOrtho2D(2,2,-2,-2);
    glBegin(GL_QUADS);

    glColor3ub(255, 255, 204);//Windmill stand
    glVertex2f(-0.55f, -0.5f);
    glVertex2f( -0.45f, -0.5f);
    glVertex2f( -0.47f, 0.06f);
    glVertex2f( -0.53f, 0.06f);
    glEnd();
    glPushMatrix();
     //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(-.5,.06,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis

    glBegin(GL_TRIANGLES);

    glColor3ub(255, 204, 153);//windmill blade
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.4f);
    glVertex2f( -0.05f, 0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(255, 204, 153);//windmill blade
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);
    glEnd();

    glPopMatrix();


    i-=0.1f;

    int i;
		GLfloat x=-0.5f; GLfloat y=0.06f; GLfloat radius =.03f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 204);
		glVertex2f(x, y); //windmill holding
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();
    glLoadIdentity();

    	x=-1.0f; y=-0.5f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glTranslatef(.2,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(.4,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 3
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(.6,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 4
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(.8,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 5
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 6
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.2,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 7
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.4,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 8
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.6,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.12f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 9
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.8,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 10
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(2,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 11
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-2.0f, -2.0f);//Runway
    glVertex2f( 2.0f, -2.0f);
    glVertex2f( 2.0f, -0.5f);
    glVertex2f( -2.0f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//white lines
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();//White lines end

    glLoadIdentity();
    glTranslatef(position,0.0f, 0.0f);
    x=.6f; y=.0f; radius =.1f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 204);
		glVertex2f(x, y); // Plane head
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 102, 204);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.0f, 0.1f);//This is the plane body
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 153, 204);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.3f, 0.1f);
	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.0f, 0.3f);// Upper part of plane
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 153, 204);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.6f, -0.1f);// Planes Side
	glEnd();

    x=.1f; y=-.15f;radius =.05f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 204);
		glVertex2f(x, y); // Plane tire
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	glLoadIdentity();

	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
    glTranslatef(0.5,0.5,0);
    glScalef(0.5,0.5,0);
	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	x=0.9f; y=0.8f;radius =.2f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 0);
		glVertex2f(x, y); // Sun
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	glTranslatef(1.3,-0.06,0);
	glTranslatef(position2,0.0f, 0.0f);
    //glScalef(0,0,0);
	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
   /* glTranslatef(position,position, 0.0f);
	glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 153);//bird
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 153);
    glVertex2f(-0.85f, -0.7f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.63f);
    glVertex2f(-0.9f, -0.6f);
    //glVertex2f(-0.7f, -0.7f);
    glEnd();

    x=-0.7f; y=-0.7f;radius =.04f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 102, 153);
		glVertex2f(x, y); // Cloud 3.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();*/
	//glLoadIdentity();


    //glutTimerFunc(1500,night_demo,0);
    glFlush();

glFlush();
}
void night_demo(int val) {

 glutDisplayFunc(night);


}
void display()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    //gluOrtho2D(2,2,-2,-2);
    glBegin(GL_QUADS);

    glColor3ub(255, 255, 204);//Windmill stand
    glVertex2f(-0.55f, -0.5f);
    glVertex2f( -0.45f, -0.5f);
    glVertex2f( -0.47f, 0.06f);
    glVertex2f( -0.53f, 0.06f);
    glEnd();
    glPushMatrix();
     //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(-.5,.06,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis

    glBegin(GL_TRIANGLES);

    glColor3ub(255, 204, 153);//windmill blade
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.4f);
    glVertex2f( -0.05f, 0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(255, 204, 153);//windmill blade
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);
    glEnd();

    glPopMatrix();


    i-=0.1f;

    int i;
		GLfloat x=-0.5f; GLfloat y=0.06f; GLfloat radius =.03f;
	int triangleAmount = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 204);
		glVertex2f(x, y); //windmill holding
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();
    glLoadIdentity();

    	x=-1.0f; y=-0.5f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glTranslatef(.2,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(.4,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 3
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(.6,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 4
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(.8,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 5
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 6
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.2,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 7
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.4,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.15f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 8
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.6,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.12f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 9
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.8,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 10
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(2,-0.1,0);
	x=-1.0f; y=-0.4f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // Forest 11
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-2.0f, -2.0f);//Runway
    glVertex2f( 2.0f, -2.0f);
    glVertex2f( 2.0f, -0.5f);
    glVertex2f( -2.0f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//white lines
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.75f, -0.9f);
    glVertex2f(-0.75f, -0.85f);
    glVertex2f(-1.0f, -0.85f);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();

    glTranslatef(0.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.65f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();//White lines end

    glLoadIdentity();
    glTranslatef(position,0.0f, 0.0f);
    x=.6f; y=.0f; radius =.1f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 204);
		glVertex2f(x, y); // Plane head
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 102, 204);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.0f, 0.1f);//This is the plane body
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 153, 204);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.3f, 0.1f);
	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.0f, 0.3f);// Upper part of plane
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 153, 204);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.6f, -0.1f);// Planes Side
	glEnd();

    x=.1f; y=-.15f;radius =.05f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 204);
		glVertex2f(x, y); // Plane tire
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	glLoadIdentity();

	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
    glTranslatef(0.5,0.5,0);
    glScalef(0.5,0.5,0);
	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3.1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	x=0.9f; y=0.8f;radius =.2f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 0);
		glVertex2f(x, y); // Sun
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	glTranslatef(1.3,-0.06,0);
	glTranslatef(position2,0.0f, 0.0f);
    //glScalef(0,0,0);
	x=-0.8f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 1.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.6f; y=0.6f;radius =.17f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 2.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.4f; y=0.6f;radius =.1f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
		glVertex2f(x, y); // Cloud 3.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
   /* glTranslatef(position,position, 0.0f);
	glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 153);//bird
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 153);
    glVertex2f(-0.85f, -0.7f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.63f);
    glVertex2f(-0.9f, -0.6f);
    //glVertex2f(-0.7f, -0.7f);
    glEnd();

    x=-0.7f; y=-0.7f;radius =.04f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 102, 153);
		glVertex2f(x, y); // Cloud 3.2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();*/
	//glLoadIdentity();


    glutTimerFunc(1500,night_demo,0);
    glFlush();
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	speed2 += 0.1f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed2 -= 0.1f;   }
glutPostRedisplay();}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'w':
    speed += 0.1f;
    break;
case 's':
    speed -= 0.1f;
    break;
glutPostRedisplay();
	}}



/*void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:

 speed = 0.5f;
break;

case GLUT_KEY_DOWN:
  speed = 0.1f;
  break;

case GLUT_KEY_LEFT:
break;

case GLUT_KEY_RIGHT:
break;
}
glutPostRedisplay();
}*/

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Translation Animation");
    glutDisplayFunc(display);//
    //glutDisplayFunc(night);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update2, 0);
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
//    glutSpecialFunc(SpecialInput);
    glutMainLoop();
    return 0;}
