#include <Windows.h>
#include <math.h>
#include "DxLib.h"
#include "player.h"
#include "shot.h"
#include "Obj2d.h"
#include "SpriteData.h"
#include "Key.h"

//MoveAlgの実体化
PlayerMove playerMove;


void PlayerManager::Init() {

	player = new Player;
	player->Add(
		&playerMove,//移動アルゴリズム
		VECTOR2D::VGet2D(300, 300),//座標
		VECTOR2D::VGet2D(0, 0),//サイズ
		PlayerData//画像データ
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

//プレイヤー移動

#define PLAYER_SPEED 0.4f
#define PLAYER_MAX_SPEED 5.0f
#define PLAYER_FRICTION 0.95f
#define PLAYER_ZERO_SPEED 0.2f
void PlayerMove::move(OBJ2D* obj)
{


	if (Key[KEY_INPUT_RIGHT] > 1)obj->velocity.x += PLAYER_SPEED;
	if (Key[KEY_INPUT_LEFT] > 1)obj->velocity.x -= PLAYER_SPEED;


	obj->velocity.x = fmin(obj->velocity.x, PLAYER_MAX_SPEED);
	obj->velocity.x = fmax(obj->velocity.x, -PLAYER_MAX_SPEED);

	obj->velocity.x *= PLAYER_FRICTION;


	if (fabs(obj->velocity.x) < PLAYER_ZERO_SPEED)obj->velocity.x=0;

	obj->position.x += obj->velocity.x;
}
