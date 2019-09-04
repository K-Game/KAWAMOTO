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

};

SpriteData BakeData[10]{
	{"./Data/StartImage.png",STATE::START,0},
	{"./Data/StageImage.png",STATE::GAMEBAKE,1},
};

SpriteData UIData[20]{
	{"./Data/StartUI1.png",STATE::GAMEUI,0},
	{ "./Data/StartUI2.png",STATE::GAMEUI,1 },
	{ "./Data/EndUI1.png",STATE::GAMEUI,2 },
	{ "./Data/EndUI2.png",STATE::GAMEUI,3 },

};