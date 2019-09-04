#include <Windows.h>
#include "DxLib.h"

#include "Obj2d.h"
#include "SpriteData.h"

#include "title.h"

void TitleManager::Init() {
	title = new TITLE;
	title->LoadSpriteData(BakeData);
	title->state = STATE::START;

	title->MoveAlg = Select;
}

void TitleManager::Updata(){

}

void TitleManager::Draw() {
	title->draw();
}

void Select(OBJ2D* obj) {

}