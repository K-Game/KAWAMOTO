#include "DxLib.h"

#include "Obj2d.h"

void OBJ2D::clear()
{
	ZeroMemory(SpriteHandle, sizeof(SpriteHandle));
	position = VECTOR2D::VGet2D(0, 0);
	velocity = VECTOR2D::VGet2D(0, 0);
	size = VECTOR2D::VGet2D(0, 0);
	SpriteNumber = 0;
	alive = false;
	MoveAlg = nullptr;
}

void OBJ2D::LoadSprite(char*FileName, OBJ2D::STATE StateNum, int SpriteNum)
{
	SpriteHandle[StateNum][SpriteNum]=LoadGraph(FileName);
}


void OBJ2D::draw()
{

	DrawGraph(position.x-size.x/2,
		position.y-size.y/2,
		SpriteHandle[state][SpriteNumber],
		TRUE);
}
