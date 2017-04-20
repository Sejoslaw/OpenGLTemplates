
#include <GL\freeglut.h>
#include <iostream>
#include <stdio.h>

float angle = 100.0f;

void rysuj()
{	
}

void init( int w, int h)
{
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, 1.0, 1.0, 20.0);
	gluLookAt(4.9, 11.0, 3.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1);
	glMatrixMode(GL_MODELVIEW);
}

void drawScene(void) 
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	//metoda zawieraj¹ca instrukcje tworzenia obiektu w przestrzeni	
	glutSwapBuffers();
}

void Tick()
{
	glutPostRedisplay();
}

int main(int argc, char **argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Scena");

	glutReshapeFunc(init);
	glutDisplayFunc(drawScene);
	glutIdleFunc(Tick);

	glutMainLoop();
	return 0;
}
