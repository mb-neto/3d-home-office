#include "chair.h"

#define DEF_D 5

void Chair :: drawChair() {
	glColor3f(0.90f, 0.90f, 0.90f);
	glBegin(GL_QUADS);

	//Front
	//
	glVertex3f(-2.0f, -0.2f, 2.0f);
	glVertex3f(2.0f, -0.2f, 2.0f);
	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, 2.0f);

	//Right
	//
	glVertex3f(2.0f, -0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(2.0f, -0.2f, 2.0f);

	//Back
	//;
	glVertex3f(-2.0f, -0.2f, -2.0f);
	glVertex3f(-2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, -0.2f, -2.0f);

	//Left
	;
	glVertex3f(-2.0f, -0.2f, -2.0f);
	glVertex3f(-2.0f, -0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, -2.0f);

	//top
	//

	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);

	//bottom
	;

	glVertex3f(2.0f, -0.2f, 2.0f);
	glVertex3f(-2.0f, -0.2f, 2.0f);
	glVertex3f(-2.0f, -0.2f, -2.0f);
	glVertex3f(2.0f, -0.2f, -2.0f);

	//table front leg
	//front
	//

	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -3.0f, 1.6f);
	glVertex3f(1.8f, -3.0f, 1.6f);

	//back
	//;

	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);

	//right
	//

	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.6f);

	//left

	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.6f);

	//back leg back
	//front

	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);

	//back

	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -3.0f, -1.6f);
	glVertex3f(1.8f, -3.0f, -1.6f);

	//right

	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.6f);

	//left

	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.6f);

	//leg left front

	glVertex3f(-1.8f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -3.0f, 1.6f);
	glVertex3f(-1.8f, -3.0f, 1.6f);

	//back

	glVertex3f(-1.8f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.2f);

	//right

	glVertex3f(-1.8f, -0.2f, 1.6f);
	glVertex3f(-1.8f, -0.2f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.6f);

	//left

	glVertex3f(-1.4f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.6f);

	//left leg back front

	//front

	glVertex3f(-1.8f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.2f);

	//back

	glVertex3f(-1.8f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -3.0f, -1.6f);
	glVertex3f(-1.8f, -3.0f, -1.6f);

	//right

	glVertex3f(-1.8f, -0.2f, -1.6f);
	glVertex3f(-1.8f, -0.2f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.6f);

	//left

	glVertex3f(-1.4f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.6f);

	//;
	//chair upper part 
	glColor3f(1.0, 1.0, 1.0);
	
	glVertex3f(-1.8f, 0.2f, -1.8f);
	glVertex3f(1.8f, 0.2f, -1.8f);
	glVertex3f(1.8f, 3.5f, -1.8f);
	glVertex3f(-1.8f, 3.5f, -1.8f);

	glVertex3f(-1.8f, 0.2f, -1.4f);
	glVertex3f(1.8f, 0.2f, -1.4f);
	glVertex3f(1.8f, 3.5f, -1.4f);
	glVertex3f(-1.8f, 3.5f, -1.4f);

	//chair upper side
	glVertex3f(-1.8f, 0.2f, -1.80f);
	glVertex3f(-1.8f, 0.2f, -1.4f);
	glVertex3f(-1.8f, 3.5f, -1.4f);
	glVertex3f(-1.8f, 3.5f, -1.8f);

	glVertex3f(1.8f, 0.2f, -1.80f);
	glVertex3f(1.8f, 0.2f, -1.4f);
	glVertex3f(1.8f, 3.5f, -1.4f);
	glVertex3f(1.8f, 3.5f, -1.8f);

	//chair upper top
	// glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-1.8f, 3.5f, -1.80f);
	glVertex3f(-1.8f, 3.5f, -1.4f);
	glVertex3f(1.8f, 3.5f, -1.4f);
	glVertex3f(1.8f, 3.5f, -1.8f);

	glVertex3f(-1.8f, 0.2f, -1.80f);
	glVertex3f(-1.8f, 0.2f, -1.4f);
	glVertex3f(1.8f, 0.2f, -1.4f);
	glVertex3f(1.8f, 0.2f, -1.8f);

	glEnd();

}