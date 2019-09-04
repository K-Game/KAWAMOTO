#include <Windows.h>
#include "DxLib.h"

#include "Obj2d.h"
#include "SpriteData.h"

#include "title.h"

void TitleManager::Init() {
	title = new TITLE;
	title->LoadSpriteData(BakeData);
	title->SpriteNumber = 0;
	title->state = STATE::START;
	title->position = VECTOR2D::VGet2D(500,333);
	title->size = VECTOR2D::VGet2D(0,0);

}


void TitleManager::Updata(){

}

void TitleManager::Draw() {
	title->draw();
}

