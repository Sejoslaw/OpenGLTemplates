#include "JDS.h"

using namespace JDS;

bool JDS::Mouse::isButtonDown(Button button)
{
	return (button == JDS::Z::Button && JDS::Z::State == 0);
}

bool JDS::Mouse::isButtonUp(Button button)
{
	return (button == JDS::Z::Button && JDS::Z::State == 1);
}

bool JDS::Mouse::isWheel(Wheel wheel)
{
	JDS::Z::End = true;
	return (wheel == JDS::Z::Button);
}

bool JDS::Mouse::isEnterWindow()
{
	return (JDS::Z::Enter);
}

bool JDS::Mouse::isEnter(int x1, int y1, int x2, int y2)
{
	return (JDS::Z::Position.x >= x1 && JDS::Z::Position.x <= x2 &&
			JDS::Z::Position.y >= y1 && JDS::Z::Position.y <= y2);
}

bool JDS::Mouse::isEnter(Vector2i posX1Y1, Vector2i posX2Y2)
{
	return (JDS::Z::Position.x >= posX1Y1.x && JDS::Z::Position.x <= posX2Y2.x &&
			JDS::Z::Position.y >= posX1Y1.y && JDS::Z::Position.y <= posX2Y2.y);
}

bool JDS::Mouse::isEnter(Vector4i position)
{
	if (position.x2 > 0) // badany jest prostokat lub linia
		return (JDS::Z::Position.x >= position.x1 && JDS::Z::Position.x <= position.x2 &&
		JDS::Z::Position.y >= position.y1 && JDS::Z::Position.y <= position.y2);

	if (position.x2 < 0)// badany jest okr¹g
	{
		for (GLfloat fAngle = 0.0f; fAngle <= 6.28; fAngle += (GLfloat)((6.28f / (GLfloat)position.y2)))
		{
			GLfloat fX = ((-position.x2) * static_cast<GLfloat>(sin(fAngle)));
			GLfloat fY = ((-position.x2) * static_cast<GLfloat>(cos(fAngle)));

			if (JDS::Z::Position.x >= position.x1 - fX && JDS::Z::Position.x <= position.x1 + fX  &&
				JDS::Z::Position.y >= position.y1 - fY && JDS::Z::Position.y <= position.y1 + fY)
				return true;
		}
		return false;
	}

	return false;
	
}

int JDS::Z::Button = -1;
bool JDS::Z::State = false;
bool JDS::Z::Enter = 0;
Vector2i JDS::Z::Position;
bool JDS::Z::End = false;