#include "cupboard.h"

#define TEXTURA_METAL "src/vendor/textures/metal.png"
#define COORD_TEXTURA_PLANO 1.0
#define COORD_TEXTURA_PONTO 0.0

void Cupboard :: drawCupboard() {

	GLfloat ctp[4][2]={
  		{COORD_TEXTURA_PONTO,COORD_TEXTURA_PONTO},
  		{COORD_TEXTURA_PLANO,COORD_TEXTURA_PONTO},
  		{COORD_TEXTURA_PLANO,COORD_TEXTURA_PLANO},
  		{COORD_TEXTURA_PONTO,COORD_TEXTURA_PLANO}
	};

	GLuint texture_id[0]; // vetor com os números das texturas
	glGenTextures (1, texture_id);

	// Definr o número da textura do cubo.
	texture_id[0] = 1001;

	// Define a textura corrente
	glBindTexture(GL_TEXTURE_2D, texture_id[0]);

	texture_id[0] = png_texture_load(TEXTURA_METAL, NULL, NULL);

	glColor3f(0.302f, 0.0f, 0.302f);
	glBegin(GL_QUADS);

    // Back
	glTexCoord2fv(ctp[0]);	glVertex3f(-1.5f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-1.5f, 4.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.5, 4.5f, -1.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.5f, 0.5f, -1.5f);

    // Left Side
    glTexCoord2fv(ctp[0]);	glVertex3f(-1.5f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-1.5f, 4.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-1.5, 4.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-1.5f, 0.5f, 0.5f);

    // Right Side
    glTexCoord2fv(ctp[0]);	glVertex3f(1.5f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.5f, 4.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.5, 4.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.5f, 0.5f, 0.5f);

    // Front
    glTexCoord2fv(ctp[0]);	glVertex3f(-1.5f, 0.5f, 0.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-1.5f, 4.5f, 0.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.5, 4.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.5f, 0.5f, 0.5f);

    glColor3f(0.2f, 0.0f, 0.2f);
    // Left Support
	glTexCoord2fv(ctp[0]);	glVertex3f(-1.5f, 0.0f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-1.5f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-1.2, 0.5f, -1.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-1.2f, 0.0f, -1.5f);

    glTexCoord2fv(ctp[0]);	glVertex3f(-1.5f, 0.0f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-1.5f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-1.5, 0.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-1.5f, 0.0f, 0.5f);

    glTexCoord2fv(ctp[0]);	glVertex3f(-1.2f, 0.0f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-1.2f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-1.2, 0.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-1.2f, 0.0f, 0.5f);

    glTexCoord2fv(ctp[0]);	glVertex3f(-1.5f, 0.0f, 0.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(-1.5f, 0.5f, 0.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(-1.2, 0.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(-1.2f, 0.0f, 0.5f);

    // Right Support
	glTexCoord2fv(ctp[0]);	glVertex3f(1.5f, 0.0f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.5f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.2f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.2f, 0.0f, -1.5f);

    glTexCoord2fv(ctp[0]);	glVertex3f(1.5f, 0.0f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.5f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.5f, 0.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.5f, 0.0f, 0.5f);

    glTexCoord2fv(ctp[0]);	glVertex3f(1.2f, 0.0f, -1.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.2f, 0.5f, -1.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.2f, 0.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.2f, 0.0f, 0.5f);

    glTexCoord2fv(ctp[0]);	glVertex3f(1.5f, 0.0f, 0.5f);
	glTexCoord2fv(ctp[1]);	glVertex3f(1.5f, 0.5f, 0.5f);
	glTexCoord2fv(ctp[2]);	glVertex3f(1.2f, 0.5f, 0.5f);
	glTexCoord2fv(ctp[3]);	glVertex3f(1.2f, 0.0f, 0.5f);

    glEnd();

    //lines
    glColor3f(0.149f, 0.149f, 0.149f);
    glLineWidth(5.0f);
    glBegin(GL_LINES);

    glVertex3f(-1.4f, 0.6f, 0.501f);
	glVertex3f(-1.4f, 4.4f, 0.501f);

	glVertex3f(-1.4f, 4.4f, 0.501f);
	glVertex3f(1.4f, 4.4f, 0.501f);

    glVertex3f(1.4f, 0.6f, 0.501f);
	glVertex3f(1.4f, 4.4f, 0.501f);

    glVertex3f(-1.4f, 0.6f, 0.501f);
	glVertex3f(1.4f, 0.6f, 0.501f);

    //middle line
    glVertex3f(0.0f, 0.6f, 0.501f);
	glVertex3f(0.0f, 4.4f, 0.501f);

    glEnd();

    // Handles
    glColor3f(0.5f, 0.5f, 0.5f);
    glPushMatrix();
    glTranslatef( 0.1f, 2.5f, 0.5f);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidTorus(0.03f, 0.1f, 100, 100);
    glPopMatrix();

    glPushMatrix();
    glTranslatef( -0.1f, 2.5f, 0.5f);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glutSolidTorus(0.03f, 0.1f, 100, 100);
    glPopMatrix();
}

