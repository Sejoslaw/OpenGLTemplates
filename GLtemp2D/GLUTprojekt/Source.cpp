
#include "JDS.h"

char* literka;

void p()
{
	glColor3f(1.f, 1.f, 1.f);
	glBegin(GL_POLYGON);
	glVertex2f(10, 10);
	glVertex2f(20, 10);
	glVertex2f(20, 20);
	glVertex2f(10, 20);
	glEnd();
}

void JDS::RenderWindow::OnInit(void) 
{	
	literka = new char;
	JDS::camera.setPosition(JDS::Vector2f());
}

void JDS::RenderWindow::Transform(void) //przekszta³cenia
{
}

void JDS::RenderWindow::Events() //zdarzenia
{
	if (JDS::Keyboard::isKeyPressed('A') || JDS::Keyboard::isKeyPressed('a'))
	{
		p();
	}
}

void JDS::RenderWindow::Display(void)//wyœwietlanie
{
	glColor3f(1.f,1.f,1.f);
	glBegin(GL_POLYGON);
	glEnd();
}


int main()
{
	//									wielkoscOkna, TytulOkna, kolort³a
	JDS::RenderWindow window(JDS::Vector2i(500, 150), "GLtemp", JDS::Color(205, 255, 40));
	return 0;
}



