#include <Windows.h>

#include "DxLib.h"
#include "player.h"
#include "shot.h"
#include "Obj2d.h"

Player* player;

void Player::Init() {
	player->obj = new OBJ2D("");

}


void Player::Undeta() {

	switch (player->mode){
	case P_ALIVE:

		break;
	case P_DEAD:

		break;
	}

}

void Player::PMove() {


	
}

void Player::DeadCheck(){

}

void Player::PShot() {

}