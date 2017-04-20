#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <stdio.h>
#include <GL/freeglut.h>

#include "Color.h"
#include "Vector.h"
#include "Camera.h"
#include "Keyboadr.h"
#include "Mouse.h"

#include "RenderWindow.h"
namespace JDS
{
	namespace TextStyle
	{
		extern bool Normal;
		extern bool Down;
	}

	namespace Bind
	{
		extern bool Off;
		extern bool On;
	}

	extern Camera2f camera;
	extern int unsigned short FPS;
}

