#include "JDS.h"

using namespace JDS;

Vector2i::Vector2i()
{
	x = 0;
	y = 0;
}

Vector2i::Vector2i(GLint X, GLint Y)
{
	x = X;
	y = Y;
}

Vector2i::Vector2i(Vector2i& V)
{
	x = V.x;
	y = V.y;
}

Vector2i::~Vector2i()
{
}

Vector2f::Vector2f()
{
	x = 0;
	y = 0;
}

Vector2f::Vector2f(GLfloat X, GLfloat Y)
{
	x = X;
	y = Y;
}

Vector2f::Vector2f(Vector2f& V)
{
	x = V.x;
	y = V.y;
}

Vector2f::~Vector2f()
{
}


Vector4i::Vector4i()
{
	x1 = 0;
	y1 = 0;

	x2 = 0;
	y2 = 0;
}

Vector4i::Vector4i(GLint X1, GLint Y1, GLint X2, GLint Y2)
{
	x1 = X1;
	y1 = Y1;

	x2 = X2;
	y2 = Y2;
}

Vector4i::Vector4i(Vector4i& V)
{
	x1 = V.x1;
	y1 = V.y1;

	x2 = V.x2;
	y2 = V.y2;
}

Vector4i::Vector4i(Vector2i& V1, Vector2i& V2)
{
	x1 = V1.x;
	y1 = V1.y;

	x2 = V2.x;
	y2 = V2.y;
}

Vector4i::~Vector4i()
{
}


Vector6i::Vector6i()
{
	x1 = 0;
	y1 = 0;

	x2 = 0;
	y2 = 0;

	x3 = 0;
	y3 = 0;
}

Vector6i::Vector6i(GLint X1, GLint Y1, GLint X2, GLint Y2, GLint X3, GLint Y3)
{
	x1 = X1;
	y1 = Y1;

	x2 = X2;
	y2 = Y2;

	x3 = X3;
	y3 = Y3;
}

Vector6i::Vector6i(Vector6i& V)
{
	x1 = V.x1;
	y1 = V.y1;

	x2 = V.x2;
	y2 = V.y2;

	x3 = V.x3;
	y3 = V.y3;
}

Vector6i::Vector6i(Vector2i& V1, Vector2i& V2, Vector2i& V3)
{
	x1 = V1.x;
	y1 = V1.y;

	x2 = V2.x;
	y2 = V2.y;

	x3 = V3.x;
	y3 = V3.y;
}

Vector6i::~Vector6i()
{
}