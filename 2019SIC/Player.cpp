#include <Windows.h>
#include <math.h>
#include "DxLib.h"
#include "player.h"
#include "shot.h"
#include "Obj2d.h"
#include "SpriteData.h"
#include "Key.h"

//MoveAlg�̎��̉�
PlayerMove playerMove;


void PlayerManager::Init() {

	player = new Player;
	player->Add(
		&playerMove,//�ړ��A���S���Y��
		VECTOR2D::VGet2D(300, 380),//���W
		VECTOR2D::VGet2D(0, 0),//�T�C�Y
		PlayerData//�摜�f�[�^
	);
	player->velocity = VECTOR2D::VGet2D(0, 0);
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

#define PLAYER_SPEED 0.4f
#define PLAYER_MAX_SPEED 5.0f
#define PLAYER_FRICTION 0.95f
#define PLAYER_ZERO_SPEED 0.2f
void PlayerMove::move(OBJ2D* obj)
{


	if (Key[KEY_INPUT_RIGHT] > 1)
	{
		obj->velocity.x += PLAYER_SPEED;
		obj->state = STATE::RRUN;
	}
	if (Key[KEY_INPUT_LEFT] > 1)
	{
		obj->velocity.x -= PLAYER_SPEED;
		obj->state = STATE::LRUN;
	}


	obj->velocity.x = fmin(obj->velocity.x, PLAYER_MAX_SPEED);
	obj->velocity.x = fmax(obj->velocity.x, -PLAYER_MAX_SPEED);

	obj->velocity.x *= PLAYER_FRICTION;

	//	�V���b�g�֌W
	if (fabs(obj->velocity.x) < PLAYER_ZERO_SPEED)obj->velocity.x=0;

	if (Key[KEY_INPUT_Z] == 1&& obj->state == STATE::RRUN)sManager->Add(&playerNormalShot, obj->position, VECTOR2D::VGet2D(0, 0), VECTOR2D::VGet2D(10, 0), ShotData);
	if (Key[KEY_INPUT_Z] == 1&& obj->state == STATE::LRUN)sManager->Add(&playerNormalShot, obj->position, VECTOR2D::VGet2D(0, 0), VECTOR2D::VGet2D(-10, 0), ShotData);

	
	obj->state = STATE::LRUN;




	obj->position.x += obj->velocity.x;
}
