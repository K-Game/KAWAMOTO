#include <Windows.h>

#include "DxLib.h"
#include "shot.h"
#include "enemy.h"

void EnemyManager::Init(){
	for (int num = 1; num > Enemycount; num++) {
		Enemy[num] = new ENEMYS;
		Enemy[num]->LoadSprite("../Data/ENEMY1.png", OBJ2D::STATE::LWAIT, 0);
		Enemy[num]->state = OBJ2D::STATE::LWAIT;
		Enemy[num]->SpriteNumber = 0;
	}
	/*for (int num = 1; num > Enemynum ; num++) {
		Enemy[num] = new ENEMYS[num];
		Enemy[num]->LoadSprite("../Data/ENEMY1.png", OBJ2D::STATE::LWAIT, 0);
		Enemy[num]->state = OBJ2D::STATE::LWAIT;

	}*/
}

void EnemyMove(OBJ2D* obj){

}