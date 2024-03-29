#include <Windows.h>
#include "SpriteData.h"
#include "Obj2d.h"

SpriteData PlayerData[30]
{
	{ "./Data/MOVE1.png",STATE::LRUN,0 },
	{ "./Data/MOVE2.png",STATE::LRUN,1 },
	{ "./Data/MOVE3.png",STATE::LRUN,2 },
	{ "./Data/MOVE4.png",STATE::LRUN,3 },
	{ "./Data/MOVE5.png",STATE::LRUN,4 },
	{ NULL }
};

SpriteData EnemyData[30]{
	{"./Data/ENEMY1.png",STATE::LWAIT,0},
	{NULL}
};

SpriteData BackData[10]{
	{"./Data/StartImage.jpg",STATE::BACK,0},
	{"./Data/StageImage.jpg",STATE::BACK,1},
	{NULL}
};

SpriteData UIData[20]{
	{"./Data/StartUI1.png",STATE::GAMEUI,0},
	{ "./Data/StartUI2.png",STATE::GAMEUI,1 },
	{ "./Data/EndUI1.png",STATE::GAMEUI,2 },
	{ "./Data/EndUI2.png",STATE::GAMEUI,3 },
	{NULL}
};

SpriteData ShotData[30]{
	{ "./Data/Barrett.png",SHOT_STATE::NORMAL,0 },
	{ NULL }
};