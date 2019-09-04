#pragma once
#include "Math.h"
#include "SpriteData.h"
#define SPRITE_NUM 10

class OBJ2D;

enum STATE
{
	RWAIT,
	LWAIT,
	RRUN,
	LRUN,
	RJUMP,
	LJUMP,
	BACK,
	GAMEUI,

	NUM,
};

enum SHOT_STATE
{
	NORMAL,
};


class MoveAlg
{
public:
	virtual void move(OBJ2D* obj) = 0;
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
	MoveAlg* moveAlg;

	void LoadSpriteData(SpriteData* data);

	void Add(MoveAlg* MoveAlg, VECTOR2D pos, VECTOR2D Size, SpriteData* data);
	void Add(MoveAlg* MoveAlg, VECTOR2D pos, VECTOR2D Size,VECTOR2D Verocity, SpriteData* data);

	void clear();

	void draw();

};

