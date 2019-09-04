#include <Windows.h>

#include "DxLib.h"
#include "player.h"
#include "shot.h"
#include "Obj2d.h"
#include "SpriteData.h"

//MoveAlgの実体化
PlayerMove playerMove;


void PlayerManager::Init() {

	player = new Player;

	player->LoadSpriteData(PlayerData);
	player->state = STATE::LRUN;
	player->SpriteNumber = 0;
	player->position = VECTOR2D::VGet2D(300, 300);
	player->size = VECTOR2D::VGet2D(0, 0);

	player->MoveAlg = &playerMove;
	
}


void PlayerManager::Update() {

	player->MoveAlg->move(player);

}

void PlayerManager::Draw() {

	player->draw();
}

//プレイヤー移動
void PlayerMove::move(OBJ2D* obj)
{
	obj->position.x -= 0.5;
}
