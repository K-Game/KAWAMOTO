#pragma once
#include "Math.h"
#define SPRITE_NUM 10

class OBJ2D
{
public:
	int SpriteHnadle[SPRITE_NUM];
	int SpriteNumber;
	VECTOR2D  position;
	VECTOR2D  velocity;
	bool alive;

	void clear();
	void (*MoveAlg)(OBJ2D obj);
	void draw();

};