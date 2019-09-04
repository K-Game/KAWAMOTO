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
	player->Add(
		&playerMove,//移動アルゴリズム
		VECTOR2D::VGet2D(300, 300),//座標
		VECTOR2D::VGet2D(0, 0),//サイズ
		PlayerData//画像データ
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

//プレイヤー移動
void PlayerMove::move(OBJ2D* obj)
{
	obj->position.x -= 0.5;
}
