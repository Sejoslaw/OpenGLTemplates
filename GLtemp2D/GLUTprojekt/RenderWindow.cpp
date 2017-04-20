#include "JDS.h"

using namespace JDS;

Camera2f JDS::camera;

int unsigned short JDS::FPS;

float zegar;
int unsigned short ramki = 0;

void RenderWindow::Reshape(int w, int h)
{
	// widok ustawiony na 2d  
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, h, 0);
	
	//glScalef(scale, scale, 0);
	//gluLookAt(x, y, 0, x, y, -1, rotate, 1, 0);

	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_TEXTURE_2D);
}

void RenderWindow::Render(void)
{
	//to chyba lepiej dzia³a
	ramki++;
	if (clock() % 1000 == 0)
	{
		JDS::FPS = ramki;
		ramki = 0;
	}

	/*if (!ramki++)
		zegar = clock();

	if (ramki == 250)
	{
		ramki = 0;
		JDS::FPS = (int unsigned short)(250 * CLOCKS_PER_SEC / (float)(clock() - zegar));
	}*/

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Reshape(glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));

	Transform();

	Display();

	Events();
	

	//JDS::Keys::key = NULL;
	if (JDS::Z::End)
	{
		JDS::Z::Button = -1;
		JDS::Z::State = false;
		JDS::Z::End = false;
	}
	
	glFlush();
	glutSwapBuffers();
}

void RenderWindow::Tick(void)
{
	glutPostRedisplay();
}

void RenderWindow::Keyboard(unsigned char key, int x, int y)
{ 
	JDS::Keys::key = (int)key;
}

void RenderWindow::SpecKeyboard(int key, int x, int y)
{
	JDS::Keys::key = -key;
}

void RenderWindow::Mouse(int button, int state, int x, int y)
{
	JDS::Z::Button = button;
	if (state == 0)
		JDS::Z::State = false;
	else 
		JDS::Z::State = true;

	JDS::Z::Position.x = x;
	JDS::Z::Position.y = y;
}

void RenderWindow::MoveMousePut(int x, int y)
{
	JDS::Z::Position.x = x;
	JDS::Z::Position.y = y;
}

void RenderWindow::MoveMouse(int x, int y)
{
	JDS::Z::Position.x = x;
	JDS::Z::Position.y = y;
}

void RenderWindow::MouseEntry(int state)
{
	if (state == GLUT_LEFT) 
		JDS::Z::Enter = false;
	else
		JDS::Z::Enter = true;
}

RenderWindow::RenderWindow(Vector2i size, std::string nameWindow, Color color)
{
	int argc = 1;
	char* argv = "JDSApp";
	glutInit(&argc, &argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(size.x, size.y);
	glutCreateWindow(nameWindow.c_str());
	glClearColor((GLclampf)(color.r * 0.0039f), (GLclampf)(color.g * 0.0039f), (GLclampf)(color.b * 0.0039f), (GLclampf)(0.0));


	OnInit();

	glutDisplayFunc(Render);
	glutReshapeFunc(Reshape);
	glutKeyboardFunc(Keyboard);
	glutSpecialFunc(SpecKeyboard);
	glutMouseFunc(Mouse);
	glutMotionFunc(MoveMousePut);
	glutPassiveMotionFunc(MoveMouse);
	glutEntryFunc(MouseEntry);
	glutIdleFunc(Tick);
	
	glutMainLoop();
}

RenderWindow::~RenderWindow()
{

}