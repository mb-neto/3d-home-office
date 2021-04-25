#include "ceiling.h"

#define TEXTURA_TETO "src/vendor/textures/ceiling.png"
#define COORD_TEXTURA_PLANO 1.0
#define COORD_TEXTURA_PONTO 0.0

void Ceiling :: drawCeiling() {

    GLfloat ctp[4][2]={
		{COORD_TEXTURA_PONTO,COORD_TEXTURA_PONTO},
		{COORD_TEXTURA_PLANO,COORD_TEXTURA_PONTO},
		{COORD_TEXTURA_PLANO,COORD_TEXTURA_PLANO},
		{COORD_TEXTURA_PONTO,COORD_TEXTURA_PLANO}
	};

	GLuint texture_id[0]; // vetor com os números das texturas
	glGenTextures (1, texture_id);

	texture_id[0] = png_texture_load(TEXTURA_TETO, NULL, NULL);

	// Define a textura corrente
	glBindTexture(GL_TEXTURE_2D, texture_id[0]);

    glColor3f(0.95f, 0.95f, 0.95f);
	
    glBegin(GL_QUADS);

	glTexCoord2fv(ctp[0]);	glVertex3f(-10.0f, 7.0f, -10.0f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.0f, 7.0f, -10.0f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.0f, 7.0f, 5.0f);
    glTexCoord2fv(ctp[1]);	glVertex3f(-10.0f, 7.0f, 5.0f);

	glEnd();
}