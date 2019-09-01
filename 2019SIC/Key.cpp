#include "DxLib.h"
#include "Key.h"

int Key[256];
int Mouse[8];

void KeyUpdate()
{
	UpdateKey();
	UpdateMouse();
}

int UpdateKey()
{
	char tmpKey[256];
	GetHitKeyStateAll(tmpKey);
	for (int i = 0; i < 256; i++)
	{
		if (tmpKey[i] != 0)
		{
			Key[i]++;
		}
		else
		{
			Key[i] = 0;
		}
	}

	return 0;
}

int UpdateMouse()
{
	if ((GetMouseInput()&MOUSE_INPUT_LEFT))
	{
		Mouse[MOUSE_INPUT_LEFT]++;
	}
	else
	{
		Mouse[MOUSE_INPUT_LEFT] = 0;
	}



	if ((GetMouseInput()&MOUSE_INPUT_RIGHT))
	{
		Mouse[MOUSE_INPUT_RIGHT]++;
	}
	else
	{
		Mouse[MOUSE_INPUT_RIGHT] = 0;
	}

	if ((GetMouseInput()&MOUSE_INPUT_MIDDLE))
	{
		Mouse[MOUSE_INPUT_MIDDLE]++;
	}
	else
	{
		Mouse[MOUSE_INPUT_MIDDLE] = 0;
	}



	return 0;

}