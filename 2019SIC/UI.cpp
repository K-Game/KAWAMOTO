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
	for (int a = 1; a < 20; a++) {
		Tui[a] = new UI;
	}
	//ゲーム本編
	for (int a = 1; a < 20; a++) {
		Gui[a] = new UI;
	}
	//ゲームオーバー
	for (int a = 1; a < 20; a++) {
		Oui[a] = new UI;
	}
}
void UIManager::Updata() {

}
void UIManager::Draw(OBJ2D* a) {

}

void UIManager::TITLE_UI() {
	
}
void UIManager::GAME_UI() {

}
void UIManager::OVER_UI() {

}

void UIManager::TITLE_Draw(){}
void UIManager::GAME_Draw(){}
void UIManager::OVER_Draw(){}