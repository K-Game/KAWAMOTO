/*
SceneManagerのモードによって表示するUIを変更する
TAITLEのときはゲームの開始と終了のセレクト
ゲーム開始でSTATEをGAMEに、終了でゲーム終了。

GAMEのときは

OVERのときはスコアを表示、60秒カウントか決定ボタンでTAITLEに戻る

もしくは
TAITLE,GAME,OVERの三種類の更新を作る。
*/

#include <Windows.h>
#include "DxLib.h"

#include "UI.h"

void UIManager::Init() {
	//タイトル系
	/*for (int a = 0; a > 20; a++) {
		Tui[a] = new UI;
		Tui[a]->LoadSpriteData(UIData);
		Tui[a]->state = STATE::GAMEUI;
	}*/
	{
		Tui[0] = new UI;
		Tui[0]->LoadSpriteData(UIData);
		Tui[0]->state = STATE::GAMEUI;
		Tui[0]->SpriteNumber = 0;
	}

	{
	Tui[1] = new UI;
	Tui[1]->LoadSpriteData(UIData);
	Tui[1]->state = STATE::GAMEUI;
	Tui[1]->SpriteNumber = 1;
	}

	{
	Tui[2] = new UI;
	Tui[2]->LoadSpriteData(UIData);
	Tui[2]->state = STATE::GAMEUI;
	Tui[2]->SpriteNumber = 2;
	}

	{
		Tui[3] = new UI;
		Tui[3]->LoadSpriteData(UIData);
		Tui[3]->state = STATE::GAMEUI;
		Tui[3]->SpriteNumber = 3;
	}
	//ゲーム本編
	for (int a = 1; a > 20; a++) {
		Gui[a] = new UI;
		Gui[a]->LoadSpriteData(UIData);
		Gui[a]->state = STATE::GAMEUI;
	}
	//ゲームオーバー
	for (int a = 1; a < 20; a++) {
		Oui[a] = new UI;
		Oui[a]->LoadSpriteData(UIData);
		Oui[a]->state = STATE::GAMEUI;
	}
}
void UIManager::TITLE_UI() {
	for (int a = 1; a < 20; a++) {
		Tui[a] = new UI;
		Tui[a]->LoadSpriteData(UIData);
		Tui[a]->state = STATE::GAMEUI;
	}
	Tui[0]->SpriteNumber = 0;
	Tui[1]->SpriteNumber = 1;
	Tui[2]->SpriteNumber = 2;
	Tui[3]->SpriteNumber = 3;
}
void UIManager::GAME_UI() {
	for (int a = 1; a < 20; a++) {
		Gui[a] = new UI;
		Gui[a]->LoadSpriteData(UIData);
		Gui[a]->state = STATE::GAMEUI;
	}
}
void UIManager::OVER_UI() {
	for (int a = 1; a < 20; a++) {
		Oui[a] = new UI;
		Oui[a]->LoadSpriteData(UIData);
		Oui[a]->state = STATE::GAMEUI;
	}
}

void UIManager::Updata() {

}



void UIManager::Draw(OBJ2D* a) {

}
void UIManager::TITLE_Draw(){}
void UIManager::GAME_Draw(){}
void UIManager::OVER_Draw(){}