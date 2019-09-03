#include <Windows.h>

#include "DxLib.h"
#include "shot.h"
#include "enemy.h"


void EnemyManager::Init(){
	Enemy = new ENEMYS;
	Enemy->LoadSprite("../Data/ENEMY1.png", OBJ2D::STATE::LWAIT, 0);
	Enemy->state = OBJ2D::STATE::LWAIT;

}

void EnemyMove(OBJ2D* obj){

}