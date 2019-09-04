#include <Windows.h>

#include "DxLib.h"
#include "player.h"
#include "shot.h"
#include "Obj2d.h"
#include "SpriteData.h"

//MoveAlg�̎��̉�
PlayerMove playerMove;


void PlayerManager::Init() {

	player = new Player;

	player->LoadSpriteData(PlayerData);
	player->state = STATE::LRUN;
	player->SpriteNumber = 0;
	player->position = VECTOR2D::VGet2D(300, 300);
	player->size = VECTOR2D::VGet2D(0, 0);

	player->moveAlg = &playerMove;
	
}


void PlayerManager::Update() {

	player->moveAlg->move(player);

}

void PlayerManager::Draw() {

	player->draw();
}

//�v���C���[�ړ�
void PlayerMove::move(OBJ2D* obj)
{
	obj->position.x -= 0.5;
}
