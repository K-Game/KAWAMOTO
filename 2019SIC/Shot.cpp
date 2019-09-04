#include <Windows.h>
#include <math.h>
#include "DxLib.h"
#include "player.h"
#include "shot.h"
#include "Obj2d.h"
#include "SpriteData.h"
#include "Key.h"

//MoveAlgの実体化
PlayerNormalShot playerNormalShot;


void ShotManager::Init() {

	for (int i = 0; i < SHOT_NUM;i++)
	{
		shot[i]= new Shot;
		shot[i]->state = SHOT_STATE::NORMAL;
		shot[i]->SpriteNumber = 0;
		shot[i]->alive = false;
	}
}


void ShotManager::Update() {


	for (int i = 0; i < SHOT_NUM;i++)
	{
		if(shot[i]->alive)shot[i]->moveAlg->move(shot[i]);
	}
	

}

void ShotManager::Draw() {

	for (int i = 0; i < SHOT_NUM;i++)
	{
		if (shot[i]->alive)shot[i]->draw();
	}
}

void ShotManager::Add(MoveAlg* MoveAlg, VECTOR2D pos, VECTOR2D Size, VECTOR2D Verocity, SpriteData* data)
{
	for (int i = 0; i < SHOT_NUM;i++)
	{
		if (shot[i]->alive == false)
		{
			shot[i]->Add(MoveAlg, pos, Size, Verocity, data);
			shot[i]->alive = true;
			break;
		}
	}
}

//プレイヤーのノーマルショット
void PlayerNormalShot::move(OBJ2D* obj)
{
	obj->position.x += obj->velocity.x;
	if (obj->position.x < 0 || obj->position.x>1000)
	{
		obj->clear();
	}
	
}
