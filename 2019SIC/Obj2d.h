#pragma once
#include "Math.h"
#define SPRITE_NUM 10

class OBJ2D
{



public:

	enum STATE
	{
		RWAIT,
		LWAIT,
		RRUN,
		LRUN,
		RJUMP,
		LJUMP,
		NUM,
	};


	int SpriteHandle[STATE::NUM][SPRITE_NUM];
	int SpriteNumber;
	int state;
	VECTOR2D  position;
	VECTOR2D  velocity;
	VECTOR2D  size;
	bool alive;




	void LoadSprite(char*FileName,STATE StateNum,int SpriteNum);

	void clear();

	void (*MoveAlg)(OBJ2D* obj);

	void draw();

};

struct SpriteData
{
	char* Name;
	OBJ2D::STATE stateNum;
	int SpriteNum;
};

SpriteData PlayerData[30]=
{
	{"daaaaaa",}
}