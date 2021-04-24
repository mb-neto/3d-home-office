#include "table.h"

#define TEXTURA_MADEIRA "src/vendor/textures/wood.png"
#define COORD_TEXTURA_PLANO 1.0
#define COORD_TEXTURA_PONTO 0.0

void Table :: drawTable() {

	// glTranslatef(0.0f, 0.0f, -14.0f);
	GLfloat ctp[4][2]={
		{COORD_TEXTURA_PONTO,COORD_TEXTURA_PONTO},
		{COORD_TEXTURA_PLANO,COORD_TEXTURA_PONTO},
		{COORD_TEXTURA_PLANO,COORD_TEXTURA_PLANO},
		{COORD_TEXTURA_PONTO,COORD_TEXTURA_PLANO}
	};

	GLuint texture_id[0]; // vetor com os números das texturas
	glGenTextures (1, texture_id);

	// Define a textura corrente
	glBindTexture(GL_TEXTURE_2D, texture_id[0]);

	texture_id[0] = png_texture_load(TEXTURA_MADEIRA, NULL, NULL);

	glBegin(GL_QUADS);
	//Front
	//
	glColor3f(.6,.2,0);
	glTexCoord2fv(ctp[0]);	glVertex3f(-4.0f, -0.2f, 2.0f);
	glTexCoord2fv(ctp[1]);	glVertex3f(2.0f, -0.2f, 2.0f);
	glTexCoord2fv(ctp[2]);	glVertex3f(2.0f, 0.2f, 2.0f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-4.0f, 0.2f, 2.0f);

	//Back
	//;
	glTexCoord2fv(ctp[0]);	glVertex3f(-4.0f, -0.2f, -2.0f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-4.0f, 0.2f, -2.0f);
	glTexCoord2fv(ctp[2]);	glVertex3f(2.0f, 0.2f, -2.0f);
	glTexCoord2fv(ctp[3]);	glVertex3f(2.0f, -0.2f, -2.0f);

	//Right
	//
	glTexCoord2fv(ctp[0]);	glVertex3f(2.0f, -0.2f, -2.0f);
	glTexCoord2fv(ctp[1]);	glVertex3f(2.0f, 0.2f, -2.0f);
	glTexCoord2fv(ctp[2]);	glVertex3f(2.0f, 0.2f, 2.0f);
	glTexCoord2fv(ctp[3]);	glVertex3f(2.0f, -0.2f, 2.0f);


	//Left
	;
	glTexCoord2fv(ctp[0]);	glVertex3f(-4.0f, -0.2f, -2.0f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-4.0f, -0.2f, 2.0f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-4.0f, 0.2f, 2.0f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-4.0f, 0.2f, -2.0f);

	//top
	//

	glTexCoord2fv(ctp[0]);	glVertex3f(2.0f, 0.2f, 2.0f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-4.0f, 0.2f, 2.0f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-4.0f, 0.2f, -2.0f);
	glTexCoord2fv(ctp[3]);	glVertex3f(2.0f, 0.2f, -2.0f);

	//bottom
	;

	glTexCoord2fv(ctp[0]);	glVertex3f(2.0f, -0.2f, 2.0f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-4.0f, -0.2f, 2.0f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-4.0f, -0.2f, -2.0f);
	glTexCoord2fv(ctp[3]);	glVertex3f(2.0f, -0.2f, -2.0f);

	//table front leg
	//front
	//
	glTexCoord2fv(ctp[0]);	glVertex3f(1.8f, -0.2f, 1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.4f, -0.2f, 1.6f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.4f, -3.0f, 1.6f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.8f, -3.0f, 1.6f);

	//back
	//;

	glTexCoord2fv(ctp[0]);	glVertex3f(1.8f, -0.2f, 1.2f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.4f, -0.2f, 1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.4f, -3.0f, 1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.8f, -3.0f, 1.2f);

	//right
	//

	glTexCoord2fv(ctp[0]);	glVertex3f(1.8f, -0.2f, 1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.8f, -0.2f, 1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.8f, -3.0f, 1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.8f, -3.0f, 1.6f);

	//left
	//;

	glTexCoord2fv(ctp[0]);	glVertex3f(1.4f, -0.2f, 1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.4f, -0.2f, 1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.4f, -3.0f, 1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.4f, -3.0f, 1.6f);

	//back leg back
	//front
	//;
	glTexCoord2fv(ctp[0]);	glVertex3f(1.8f, -0.2f, -1.2f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.4f, -0.2f, -1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.4f, -3.0f, -1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.8f, -3.0f, -1.2f);

	//back
	//;

	glTexCoord2fv(ctp[0]);	glVertex3f(1.8f, -0.2f, -1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.4f, -0.2f, -1.6f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.4f, -3.0f, -1.6f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.8f, -3.0f, -1.6f);

	//right
	//

	glTexCoord2fv(ctp[0]);	glVertex3f(1.8f, -0.2f, -1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.8f, -0.2f, -1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.8f, -3.0f, -1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.8f, -3.0f, -1.6f);

	//left
	//

	glTexCoord2fv(ctp[0]);	glVertex3f(1.4f, -0.2f, -1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.4f, -0.2f, -1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.4f, -3.0f, -1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.4f, -3.0f, -1.6f);

	//leg left front
	//

	
	glTexCoord2fv(ctp[0]);	glVertex3f(-3.8f, -0.2f, 1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-3.4f, -0.2f, 1.6f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-3.4f, -3.0f, 1.6f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-3.8f, -3.0f, 1.6f);

	//back
	//;

	glTexCoord2fv(ctp[0]);	glVertex3f(-3.8f, -0.2f, 1.2f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-3.4f, -0.2f, 1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-3.4f, -3.0f, 1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-3.8f, -3.0f, 1.2f);

	//right


	glTexCoord2fv(ctp[0]);	glVertex3f(-3.8f, -0.2f, 1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-3.8f, -0.2f, 1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-3.8f, -3.0f, 1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-3.8f, -3.0f, 1.6f);

	//left
	;

	glTexCoord2fv(ctp[0]);	glVertex3f(-3.4f, -0.2f, 1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-3.4f, -0.2f, 1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-3.4f, -3.0f, 1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-3.4f, -3.0f, 1.6f);

	//left leg back front

	//front
	;
	//glColor3f(1,1,1);
	glTexCoord2fv(ctp[0]);	glVertex3f(-3.8f, -0.2f, -1.2f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-3.4f, -0.2f, -1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-3.4f, -3.0f, -1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-3.8f, -3.0f, -1.2f);

	//back
	;

	glTexCoord2fv(ctp[0]);	glVertex3f(-3.8f, -0.2f, -1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-3.4f, -0.2f, -1.6f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-3.4f, -3.0f, -1.6f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-3.8f, -3.0f, -1.6f);

	//right


	glTexCoord2fv(ctp[0]);	glVertex3f(-3.8f, -0.2f, -1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-3.8f, -0.2f, -1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-3.8f, -3.0f, -1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-3.8f, -3.0f, -1.6f);

	//left


	glTexCoord2fv(ctp[0]);	glVertex3f(-3.4f, -0.2f, -1.6f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-3.4f, -0.2f, -1.2f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-3.4f, -3.0f, -1.2f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-3.4f, -3.0f, -1.6f);



	glEnd();
}
