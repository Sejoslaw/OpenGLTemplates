#include "JDS.h"

using namespace JDS;

Color::Color()
{
	r = 0;
	g = 0;
	b = 0;
	a = 0;

	kolor.push_back(0);
	kolor.push_back(0);
	kolor.push_back(0);
	kolor.push_back(0);
}
//red [0 - 255] , green [0 - 255] , blue [0 - 255] , alpha [0 - 255] (0 - HIDE | 255 - SHOW) 
Color::Color(GLint red, GLint green, GLint blue, GLint alpha)
{
	r = red;
	g = green;
	b = blue;
	a = alpha;

	kolor.push_back(r);
	kolor.push_back(g);
	kolor.push_back(b);
	kolor.push_back(a);
}

std::vector<GLint> Color::getColor()
{
	return kolor;
}

void Color::setColor(GLint red, GLint green, GLint blue, GLint alpha = 255)
{
	r = red;
	g = green;
	b = blue;
	a = alpha;

	kolor[0] = r;
	kolor[1] = g;
	kolor[2] = b;
	kolor[3] = a;
}

void Color::setColor(std::vector<GLint> color)
{
	kolor = color;
}

void Color::Draw()
{
	glColor4f((GLfloat)(r * 0.0039f), (GLfloat)(g * 0.0039f), (GLfloat)(b * 0.0039f), (GLfloat)(a * 0.0039f));
}

Color::~Color()
{
	kolor.clear();
}

