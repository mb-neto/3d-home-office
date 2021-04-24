#include "computer.h"

#define DEF_D 5

void Computer :: drawComputer() {

	// glTranslatef(0.0f, 0.0f, -14.0f);

	//glRotatef(10, 1.0f, 0.0f, 0.0f);
	//glRotatef(-10, 0.0f, 0.0f, 1.0f);
	//glRotatef(_angle, 0.0f, 1.0f, 0.0f);
	//glRotatef(10, 1.0f, 0.0f, 0.0f);
	//glRotatef(-10, 0.0f, 0.0f, 1.0f);
	//glRotatef(_angle, 0.0f, 1.0f, 0.0f);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);

	//Front
	//
	glVertex3f(-1.8f, -0.2f, 2.0f);
	glVertex3f(1.8f, -0.2f, 2.0f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 0.0f, 2.0f);

	//Right
	//
	glVertex3f(1.8f, -0.2f, -1.0f);
	glVertex3f(1.8f, 0.0f, -1.0f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, -0.2f, 2.0f);

	//Back
	//;
	glVertex3f(-1.8f, -0.2f, -1.0f);
	glVertex3f(-1.8f, 0.0f, -1.0f);
	glVertex3f(1.8f, 0.0f, -1.0f);
	glVertex3f(1.8f, -0.2f, -1.0f);

	//Left
	;
	glVertex3f(-1.8f, -0.2f, -1.0f);
	glVertex3f(-1.8f, -0.2f, 2.0f);
	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 0.0f, -1.0f);

	//top
	//

	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 0.0f, -1.0f);
	glVertex3f(1.8f, 0.0f, -1.0f);

	//bottom
	;

	glVertex3f(1.8f, -0.2f, 2.0f);
	glVertex3f(-1.8f, -0.2f, 2.0f);
	glVertex3f(-1.8f, -0.2f, -1.0f);
	glVertex3f(1.8f, -0.2f, -1.0f);

	//tela upper part 
	glColor3f(0.5, 0.5, 0.5);

    // frente e tras
	
	glVertex3f(-1.8f, 0.0f, 1.95f);
	glVertex3f(1.8f, 0.0f, 1.95f);
	glVertex3f(1.8f, 2.3f, 1.95f);
	glVertex3f(-1.8f, 2.3f, 1.95f);

	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 2.3f, 2.0f);
	glVertex3f(-1.8f, 2.3f, 2.0f);

	//chair upper lados
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-1.8f, 0.0f, 1.95f);
	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 2.3f, 2.0f);
	glVertex3f(-1.8f, 2.3f, 1.95f);

	glVertex3f(1.8f, 0.0f, 1.95f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 2.3f, 2.0f);
	glVertex3f(1.8f, 2.3f, 1.95f);

	//chair upper cima e baixo
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-1.8f, 2.3f, 1.95f);
	glVertex3f(-1.8f, 2.3f, 2.0f);
	glVertex3f(1.8f, 2.3f, 2.0f);
	glVertex3f(1.8f, 2.3f, 1.95f);

	glVertex3f(-1.8f, 0.0f, 1.95f);
	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 0.0f, 1.95f);

	//glVertex3f()

	glEnd();

}