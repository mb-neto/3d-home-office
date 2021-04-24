#include "computer.h"

#define TEXTURA_TECLADO "src/vendor/textures/keyboard.png"
#define COORD_TEXTURA_PLANO 1.0
#define COORD_TEXTURA_PONTO 0.0

#define DEF_D 5

void Computer :: drawComputer() {

	GLfloat ctp[4][2]={
  		{COORD_TEXTURA_PONTO,COORD_TEXTURA_PONTO},
  		{COORD_TEXTURA_PLANO,COORD_TEXTURA_PONTO},
  		{COORD_TEXTURA_PLANO,COORD_TEXTURA_PLANO},
  		{COORD_TEXTURA_PONTO,COORD_TEXTURA_PLANO}
	};

	GLuint texture_id[0]; // vetor com os números das texturas
	glGenTextures(1, texture_id);

	texture_id[0] = png_texture_load(TEXTURA_TECLADO, NULL, NULL);
	
	// Define a textura corrente
	glBindTexture(GL_TEXTURE_2D, texture_id[0]);

    // Teclado
	glColor3f(1.0, 1.0, 1.0);
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

	glTexCoord2fv(ctp[3]);	glVertex3f(1.8f, 0.0f, 2.0f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-1.8f, 0.0f, 2.0f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-1.8f, 0.0f, -1.0f);
	glTexCoord2fv(ctp[0]);	glVertex3f(1.8f, 0.0f, -1.0f);

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