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
	player->Add(
		&playerMove,//�ړ��A���S���Y��
		VECTOR2D::VGet2D(300, 300),//���W
		VECTOR2D::VGet2D(0, 0),//�T�C�Y
		PlayerData//�摜�f�[�^
	);

	player->state = STATE::LRUN;
	player->SpriteNumber = 0;
	
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
