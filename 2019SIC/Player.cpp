#include <Windows.h>

#include "DxLib.h"
#include "player.h"
#include "shot.h"
#include "Obj2d.h"
#include "SpriteData.h"




void PlayerManager::Init() {

	player = new Player;








	player->LoadSpriteData(PlayerData);
	player->state = STATE::LRUN;
	player->SpriteNumber = 0;
	player->position = VECTOR2D::VGet2D(300, 300);
	player->size = VECTOR2D::VGet2D(0, 0);

	player->MoveAlg = PlayerMove;
	
}


void PlayerManager::Update() {

	player->MoveAlg(player);

}

void PlayerManager::Draw() {

	player->draw();
}

//ƒvƒŒƒCƒ„[‚ÌˆÚ“®ŠÖ”
void PlayerMove(OBJ2D* obj)
{
	obj->position.x-=0.5;
}


