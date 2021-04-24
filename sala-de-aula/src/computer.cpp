#include "computer.h"

#define DEF_D 5

void Computer :: drawComputer() {

    // Teclado
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);

	//Front

	glVertex3f(-1.8f, -0.2f, 2.0f);
	glVertex3f(1.8f, -0.2f, 2.0f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 0.0f, 2.0f);

	//Right

	glVertex3f(1.8f, -0.2f, -1.0f);
	glVertex3f(1.8f, 0.0f, -1.0f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, -0.2f, 2.0f);

	//Back

	glVertex3f(-1.8f, -0.2f, -1.0f);
	glVertex3f(-1.8f, 0.0f, -1.0f);
	glVertex3f(1.8f, 0.0f, -1.0f);
	glVertex3f(1.8f, -0.2f, -1.0f);

	//Left

	glVertex3f(-1.8f, -0.2f, -1.0f);
	glVertex3f(-1.8f, -0.2f, 2.0f);
	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 0.0f, -1.0f);

	//top

	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 0.0f, -1.0f);
	glVertex3f(1.8f, 0.0f, -1.0f);

	//bottom

	glVertex3f(1.8f, -0.2f, 2.0f);
	glVertex3f(-1.8f, -0.2f, 2.0f);
	glVertex3f(-1.8f, -0.2f, -1.0f);
	glVertex3f(1.8f, -0.2f, -1.0f);

	// Tela 
    
    // frente e tras
	glColor3f(0.5, 0.5, 0.5);
	
	glVertex3f(-1.8f, 0.0f, 1.95f);
	glVertex3f(1.8f, 0.0f, 1.95f);
	glVertex3f(1.8f, 2.3f, 1.95f);
	glVertex3f(-1.8f, 2.3f, 1.95f);

	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 2.3f, 2.0f);
	glVertex3f(-1.8f, 2.3f, 2.0f);

	//Tela lados
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-1.8f, 0.0f, 1.95f);
	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(-1.8f, 2.3f, 2.0f);
	glVertex3f(-1.8f, 2.3f, 1.95f);

	glVertex3f(1.8f, 0.0f, 1.95f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 2.3f, 2.0f);
	glVertex3f(1.8f, 2.3f, 1.95f);

	// Tela cima e baixo
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-1.8f, 2.3f, 1.95f);
	glVertex3f(-1.8f, 2.3f, 2.0f);
	glVertex3f(1.8f, 2.3f, 2.0f);
	glVertex3f(1.8f, 2.3f, 1.95f);

	glVertex3f(-1.8f, 0.0f, 1.95f);
	glVertex3f(-1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 0.0f, 2.0f);
	glVertex3f(1.8f, 0.0f, 1.95f);

	glEnd();

}