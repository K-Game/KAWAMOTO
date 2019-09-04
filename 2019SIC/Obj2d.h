#pragma once
#include "Math.h"
#include "SpriteData.h"
#define SPRITE_NUM 10

enum STATE
{
	RWAIT,
	LWAIT,
	RRUN,
	LRUN,
	RJUMP,
	LJUMP,
	NUM,
	START,
	GAMEBAKE,
};

class OBJ2D
{



public:


	int SpriteHandle[STATE::NUM][SPRITE_NUM];
	int SpriteNumber;
	int state;
	VECTOR2D  position;
	VECTOR2D  velocity;
	VECTOR2D  size;
	bool alive;




	void LoadSpriteData(SpriteData* data);

	void clear();

	void (*MoveAlg)(OBJ2D* obj);

	void draw();

};

