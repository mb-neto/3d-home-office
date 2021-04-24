#include <iostream>
#include <math.h>
#include <string.h>

#include <GL/glut.h>
#include <GL/freeglut_ext.h>

#include "src/vendor/texture.h"

#include "src/chair.cpp"
#include "src/computer.cpp"
#include "src/table.cpp"
#include "src/cupboard.cpp"
#include "src/window.cpp"
#include "src/bwall.cpp"


#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 1000

using namespace std;

// angle of rotation for the camera direction
float angle = 0.0, yAngle = 0.0;
// actual vector representing the camera's direction
float lx = 0.0f, ly = 0.0f, lz = -1.0f;
// XZ position of the camera
float x = -5.0f, z = 18.0f;
float roll = 0.0f;

//for mouse movements
float halfWidth = (float)(WINDOW_WIDTH/2.0);
float halfHeight = (float)(WINDOW_HEIGHT/2.0);
float mouseX = 0.0f, mouseY = 0.0f;

void renderScene(void) {

	// Clear Color and Depth Buffers

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Reset transformations
	glLoadIdentity();
	// Set the camera
	gluLookAt(x, 2.5f, z,
		x + lx, 2.5f + ly, z + lz,
		roll + 0.0f, 2.5f, 0.0f);

	// Draw floor
	glColor3f(0.7f, 0.7f, 0.7f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 0.0f, 5.0f);
	glVertex3f(1.0f, 0.0f, 5.0f);
	glVertex3f(1.0f, 0.0f, -10.0f);
	glEnd();

    //wall tras
	BWall bwall;
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	bwall.drawBWall();
	glPopMatrix();

	//wall esquerda
	glColor3f(0.95f, 0.95f, 0.95f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, 5.0f);
	glVertex3f(-10.0f, 0.0f, 5.0f);
	glEnd();

	//wall with door esquerda
	glColor3f(0.95f, 0.95f, 0.95f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, 5.0f);
	glVertex3f(-10.0f, 7.0f, 5.0f);
	glVertex3f(-6.0f, 7.0f, 5.0f);
	glVertex3f(-6.0f, 0.0f, 5.0f);
	glEnd();

	//wall with door direita

	glColor3f(0.95f, 0.95f, 0.95f);
	glBegin(GL_QUADS);
	glVertex3f(-3.0f, 0.0f, 5.0f);
	glVertex3f(-3.0f, 7.0f, 5.0f);
	glVertex3f(1.0f, 7.0f, 5.0f);
	glVertex3f(1.0f, 0.0f, 5.0f);
	glEnd();

	//wall with door meio
	glColor3f(0.95f, 0.95f, 0.95f);
	glBegin(GL_QUADS);
	glVertex3f(-6.0f, 7.0f, 5.0f);
	glVertex3f(-6.0f, 5.0f, 5.0f);
	glVertex3f(-3.0f, 5.0f, 5.0f);
	glVertex3f(-3.0f, 7.0f, 5.0f);
	glEnd();

	// Door lines
	glColor3f(0.4f, 0.2f, 0.0f);
	glLineWidth(30.0f);
	glBegin(GL_LINES);
    glVertex3f(-6.0f, 5.0f, 5.01f);
	glVertex3f(-3.0f, 5.0f, 5.01f);
	glEnd();

	glBegin(GL_LINES);
    glVertex3f(-6.0f, 5.0f, 5.01f);
	glVertex3f(-6.0f, 0.0f, 5.01f);
	glEnd();

	glBegin(GL_LINES);
    glVertex3f(-3.0f, 0.0f, 5.01f);
	glVertex3f(-3.0f, 5.0f, 5.01f);
	glEnd();

	//wall direita
	glColor3f(0.95f, 0.95f, 0.95f);
	glBegin(GL_QUADS);
	glVertex3f(1.0f, 0.0f, -10.0f);
	glVertex3f(1.0f, 7.0f, -10.0f);
	glVertex3f(1.0f, 7.0f, 5.0f);
	glVertex3f(1.0f, 0.0f, 5.0f);
	glEnd();

	//ceiling
	glColor3f(0.95f, 0.95f, 0.95f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(1.0f, 7.0f, -10.0f);
	glVertex3f(1.0f, 7.0f, 5.0f);
	glVertex3f(-10.0f, 7.0f, 5.0f);
	glEnd();

	// Draw prof's chair
	Chair profChair;
	glPushMatrix();
	glTranslatef( -6.0f, 1.0f, -7.8f);
	glScalef(0.32f, 0.32f, 0.32f);
	glRotatef(180.0, 0.0, 1.0, 0.0);
	profChair.drawChair();
	glPopMatrix();

	// Draw Computer
	Computer pc;
	glPushMatrix();
	glTranslatef( -6.0f, 1.7f, -8.2f);
	glScalef(0.32f, 0.32f, 0.32f);
	glRotatef(180.0, 0.0, 1.0, 0.0);
	pc.drawComputer();
	glPopMatrix();

	// Draw prof's table
	Table profTable;
	glPushMatrix();
	glTranslatef( -6.5f, 1.5f, -8.7f);
	glScalef(0.5f, 0.5f, 0.5f);
	glRotatef(180.0, 0.0, 1.0, 0.0);
	profTable.drawTable();
	glPopMatrix();

	// Draw cupboard
	Cupboard cupboard;
	glPushMatrix();
	glTranslatef( -1.5f, 0.0f, -8.4f);
	glRotatef(360.0, 0.0, 1.0, 0.0);
	cupboard.drawCupboard();
	glPopMatrix();

	//Floor pattern
	glColor3f(0.149f, 0.149f, 0.149f);
	glLineWidth(3.0f);
	for(int i = 0; i < 12; i += 1)
	{
		glBegin(GL_LINES);
		glVertex3f(-10.0f + i, 0.001f, -10.01f);
		glVertex3f(-10.0f + i, 0.001f, 5.01f);
		glEnd();
	}
	for(int i = 0; i < 15; i += 1)
	{
		glBegin(GL_LINES);
		glVertex3f(-10.0f, 0.001f, -10.01f + i);
		glVertex3f(1.0f, 0.001f, -10.01f + i);
		glEnd();
	}

	//windows
	Window w;
	w.drawWindow2();
	w.drawWindowSill();
	glPushMatrix();
	glTranslatef( 0.0f, 0.0f, 8.0f);
	glPopMatrix();
	
	if(abs((int) mouseX) > 0.3){
		angle -= (0.004f * mouseX);
		lx = sin(angle);
		lz = -cos(angle);
	}
	if(abs((int)mouseY) > 0.3){
		if(abs((int)yAngle) < (M_PI/2)){
			yAngle += (0.002f * mouseY);
		}
		ly = sin(yAngle);
	}

	glutSwapBuffers();
}

// Handles the events triggered when one of the arrow keys are pressed.
// @param key : key pressed
// @param xx : x coordinate of mouse position
// @param yy : y coordinate of mouse position
void processSpecialKeys(int key, int xx, int yy) {

	float fraction = 0.1f;

	switch (key) {
	case GLUT_KEY_LEFT:
		x += sin(angle - M_PI/2.0) * fraction;
		z += -cos(angle - M_PI/2.0) * fraction;
		break;
	case GLUT_KEY_RIGHT:
		x += sin(M_PI/2.0 + angle) * fraction;
		z += -cos(M_PI/2.0 + angle) * fraction;
		break;
	case GLUT_KEY_UP:
		x += lx * fraction;
		z += lz * fraction;
		break;
	case GLUT_KEY_DOWN:
		x -= lx * fraction;
		z -= lz * fraction;
		break;
	}
}


// Handles the events triggered when any key on the keyboard is pressed.
//Specifically, handles w,a,s,d and Esc.
// moves the camera frward, backward and sideways.
// @param key : key pressed
// @param xx : x coordinate of mouse position
// @param yy : y coordinate of mouse position
void processNormalKeys(unsigned char key, int xx, int yy) {
    float fraction = 0.1f;
    if(key == 'w'){
        x += lx * fraction;
		z += lz * fraction;
    } else if(key == 'a'){
        x += sin(angle - M_PI/2.0) * fraction;
		z += -cos(angle - M_PI/2.0) * fraction;
    } else if(key == 's'){
        x -= lx * fraction;
		z -= lz * fraction;
    } else if(key == 'd'){
        x += sin(M_PI/2.0 + angle) * fraction;
		z += -cos(M_PI/2.0 + angle) * fraction;
    } else if (key == 'x') {
		roll += 0.5f;
	} else if (key == 'z') {
		roll -= 0.5f;
	} else if (key == 'o') {
		glDisable(GL_LIGHT0);
	} else if (key == 'l') {
		glEnable(GL_LIGHT0);
	}
	
	if (key == 27)
		exit(0);
}

 // Handles the events triggered when the mouse is moved in the window area. 
// Handles yaw and pitch of the camera.
// @param xx : x coordinate of mouse position
// @param yy : y coordinate of mouse position
void processMouseMovement(int xx, int yy){

	mouseX = (float)(halfWidth - xx)/halfWidth;
	mouseY = (float)(halfHeight - yy)/halfHeight;
	angle -= (0.005f * mouseX);
	lx = sin(angle);
	lz = -cos(angle);

	if(abs((int)yAngle) < (M_PI/2)){
		yAngle += (0.005f * mouseY);
	}
	ly = sin(yAngle);

}

 // Adjusts the viewport sie when the window size is changed and sets the projection.
 // @param w : new width of window
 // @param h : new height of window
void changeSize(int w, int h) {

	// Prevent a divide by zero, when window is too short
	// (you cant make a window of zero width).
	if (h == 0)
		h = 1;
	float ratio = w * 1.0 / h;

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

	// Reset Matrix
	glLoadIdentity();

	// Set the viewport to be the entire window
	glViewport(0, 0, w, h);
	halfWidth = (float)(w/2.0);
	halfHeight = (float)(h/2.0);

	// Set the correct perspective.
	gluPerspective(45.0f, ratio, 0.1f, 100.0f);

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}

void animate(void) {
	glutPostRedisplay();
}

void light(void) {
	GLfloat light_position[] = { 30.0, 30.0, 0.0, 1.0 };
	GLfloat light_difusa[] = { 0.8, 0.8, 0.8, 1.0 };
	GLfloat light_ambient[] = { 0.5, 0.5, 0.5, 1.0 };

	glEnable(GL_LIGHTING);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT,light_ambient);
	glEnable(GL_COLOR_MATERIAL);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_difusa);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position );
	
	glEnable(GL_LIGHT0);
}

void init(void) {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_BLEND);
	glEnable(GL_TEXTURE_2D);
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
	glShadeModel(GL_FLAT);
}

int main(int argc, char **argv) {

	// init GLUT and create window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutCreateWindow("Classroom");
	init();
	light();

	// register callbacks
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(animate);
	glutKeyboardFunc(processNormalKeys);
	glutSpecialFunc(processSpecialKeys);
    glutPassiveMotionFunc(processMouseMovement);

	// OpenGL init
	glEnable(GL_DEPTH_TEST);

	// enter GLUT event processing cycle
	glutMainLoop();

	return 1;
}