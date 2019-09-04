#include <Windows.h>
#include "DxLib.h"

#include "Obj2d.h"
#include "SpriteData.h"
#include "gameback.h"

void GBackManager::Init(){
	f/*or (int a = 0; a > 2; a++) {
		gback[a] = new GBACK;
		gback[a]->LoadSpriteData(BackData);
		gback[a]->state = STATE::BACK;
		gback[a]->SpriteNumber = 1;
	}*/
	gback[0] = new GBACK;
	gback[0]->LoadSpriteData(BackData);
	gback[0]->state = STATE::BACK;
	gback[0]->SpriteNumber = 1;
	gback[1] = new GBACK;
	gback[1]->LoadSpriteData(BackData);
	gback[1]->state = STATE::BACK;
	gback[1]->SpriteNumber = 1;
	gback[0]->position = VECTOR2D::VGet2D(0, 0);
	gback[1]->position = VECTOR2D::VGet2D(641, 381);
	gback[0]->size = VECTOR2D::VGet2D(0, 0);
	gback[1]->size = VECTOR2D::VGet2D(0, 0);

}

void GBackManager::Updata() {

}

void GBackManager::Draw() {
	gback[0]->draw();
	gback[1]->draw();
}