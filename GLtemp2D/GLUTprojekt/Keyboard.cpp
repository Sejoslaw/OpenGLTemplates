
#include "JDS.h"

using namespace JDS;

bool JDS::Keyboard::isKeyPressed(Key Key)
{
	return (Key == JDS::Keys::key);
}

bool Keyboard::isKeyPressed(int Key)
{
	return (Key == JDS::Keys::key);
}

bool Keyboard::isKeyPressed(char Key)
{
	return ((int)Key == JDS::Keys::key);
}

int JDS::Keys::key;