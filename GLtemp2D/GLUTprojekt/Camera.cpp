#include "JDS.h"

using namespace JDS;

Camera2f::Camera2f()
{
	xFirst = x = 0;
	yFirst = y = 0;
	scale = 1;
	rotate = 0;
}

void Camera2f::setPosition(Vector2f position)
{
	xFirst = x = position.x;
	yFirst = y = position.y;
}


void Camera2f::Camera()
{
	glScalef(scale, scale, 0);
	gluLookAt(x, y, 0, x, y, -1, rotate, 1, 0);
}

Camera2f::~Camera2f()
{
}