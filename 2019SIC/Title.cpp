#include <Windows.h>
#include "DxLib.h"

#include "Obj2d.h"
#include "SpriteData.h"

#include "Key.h"
#include "title.h"

void TitleManager::Init() {
	title = new TITLE;
	title->LoadSpriteData(BackData);
	title->state = STATE::BACK;
	title->SpriteNumber = 0;
	
	title->position = VECTOR2D::VGet2D(0,0);
	title->size = VECTOR2D::VGet2D(0,0);
	//Back = LoadGraph("./Data/StartImage.jpg");

}


void TitleManager::Updata(){
	
}

void TitleManager::Draw() {
	title->resizedraw(0, 0, 640, 480);

	//DrawExtendGraph(0, 0, 500+140, 333+147, Back, TRUE);

}

