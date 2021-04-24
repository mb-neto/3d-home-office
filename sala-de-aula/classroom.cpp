#include <iostream>
#include <math.h>
#include <string.h>

#include <GL/glut.h>
#include <GL/freeglut_ext.h>

#include "./src/chair.cpp"
#include "./src/computer.cpp"
#include "./src/table.cpp"
#include "./src/cupboard.cpp"
#include "./src/window.cpp"
#include "./src/snowman.cpp"
#include "./src/fan.cpp"
#include "./src/shelf.cpp"



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

//Fan
Fan f;

void interactWithSnowman(){
	
	char str1[] = "Hello! You seem to be the only student in class today.";
	int l1 = strlen(str1); // see how many characters are in text string.
	glPushMatrix();

	glColor3f(0.0f, 0.0f, 0.0f);

	glRasterPos3f(-9.6f, 2.7f, -2.8); // location to start printing text
	for( int i=0; i < l1; i++) // loop until i is greater then l
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[i]); // Print a character on the screen
	}
	glPopMatrix();
}

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
    glColor3f(0.9294f, 0.9216f, 0.8353f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(1.0f, 7.0f, -10.0f);
	glVertex3f(1.0f, 0.0f, -10.0f);
	glEnd();

	//wall esquerda
    glColor3f(1.0f, 0.851f, 0.702f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, 5.0f);
	glVertex3f(-10.0f, 0.0f, 5.0f);
	glEnd();

	//wall with door esquerda
    glColor3f(1.0f, 0.851f, 0.702f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, 5.0f);
	glVertex3f(-10.0f, 7.0f, 5.0f);
	glVertex3f(-6.0f, 7.0f, 5.0f);
	glVertex3f(-6.0f, 0.0f, 5.0f);
	glEnd();

	//wall with door direita
	glColor3f(1.0f, 0.851f, 0.702f);
	glBegin(GL_QUADS);
	glVertex3f(-3.0f, 0.0f, 5.0f);
	glVertex3f(-3.0f, 7.0f, 5.0f);
	glVertex3f(1.0f, 7.0f, 5.0f);
	glVertex3f(1.0f, 0.0f, 5.0f);
	glEnd();

	//wall with door meio
	glColor3f(1.0f, 0.851f, 0.702f);
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
    glColor3f(1.0f, 0.851f, 0.702f);
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
	glTranslatef( -1.5f, 0.0f, -8.5f);
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

	// Fan
	// glPushMatrix();
	// glTranslatef(0.0f, 6.0f, 0.0);
	// glScalef(0.3f, 0.3f, 0.3f);
	// f.drawFan();
	// glPopMatrix();

	// Shelf sh;
	// glPushMatrix();
	// glTranslatef(8.99f, 3.5f, 4.0);
	// glScalef(0.25f, 0.25f, 0.25f);
	// glRotatef(-90, 0.0f, 1.0f, 0.0f);
	// sh.drawShelf();
	// glPopMatrix();
	
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

void animate () {

    f.rotateFan();

    /* refresh screen */
    glutPostRedisplay();
}

int main(int argc, char **argv) {

	// init GLUT and create window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutCreateWindow("Classroom");

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