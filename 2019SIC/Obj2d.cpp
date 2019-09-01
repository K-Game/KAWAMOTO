#include "DxLib.h"
#include "Math.h"
#include "Obj2d.h"

void OBJ2D::clear()
{
	ZeroMemory(SpriteHnadle, sizeof(SpriteHnadle));
	position = VGet2D(0, 0);
	velocity = VGet2D(0, 0);
	SpriteNumber = 0;
	alive = false;
	MoveAlg = nullptr;
}

void OBJ2D::draw()
{
	DrawGraph(position.x, position.y, SpriteHnadle[SpriteNumber], TRUE);
}
