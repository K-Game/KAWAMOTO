#include <Windows.h>
#include "DxLib.h"

#include "Obj2d.h"
#include "SpriteData.h"
#include "gameback.h"
#include "player.h"

void GBackManager::Init(){
	/*for (int a = 0; a > 2; a++) {
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
	/*プレイヤーの位置情報が600なら＋にステージもプレイヤーと同じ速度で移動させる
	プレイヤーの位置が50でステージがスライド移動していたらステージをーに移動、
	ステージの位置が0になったらステージの移動終了

	プレーヤーの位置情報の取得
	*/

}

void GBackManager::Draw() {
	gback[0]->draw();
	gback[1]->draw();
}