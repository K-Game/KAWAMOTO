#include <Windows.h>

#include "DxLib.h"
#include "winmain.h" 
#include "Key.h"
#include "player.h"
#include "enemy.h"
#include "SpriteData.h"
#include "fps.h"
#include "title.h"
#include "shot.h"
#include "UI.h"
#include "gameback.h"

// WinMain 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);//ウィンドウモード設定
	SetMainWindowText("2019SIC"); //ウィンドウ名設定
	Fps fps;
	if (DxLib_Init() == -1)	{	// ＤＸライブラリ初期化処理
		return -1;			// エラーが起きたら直ちに終了
	}

	SceneManager::ChangeScene(SceneManager::SCENE::TITLE);

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0){   //メインループ


		fps.Update();	//更新
		fps.Draw();		//描画
		fps.Wait();		//待機

		SceneManager::Update();
		SceneManager::Draw();

		KeyUpdate();

		


		}

		DxLib_End();				// ＤＸライブラリ使用の終了処理
		return 0;				// ソフトの終了 
}

//タイトルシーンの定義
void TitleScene::Init()
{
	tManager->Init();
	uManager->Init();
}

void TitleScene::Update()
{
	tManager->Updata();
	if (Key[KEY_INPUT_RETURN] == 1)SceneManager::ChangeScene(SceneManager::SCENE::GAME);
}

void TitleScene::Draw()
{
	tManager->Draw();
}

//ゲームシーンの定義
void GameScene::Init()
{
	//固定
	gbManager->Init();
	uManager->Init();

	pManager->Init();
	eManager->Init();
	sManager->Init();
}

void GameScene::Update()
{
	gbManager->Updata();
	uManager->Updata();

	pManager->Update();
	sManager->Update();
}

void GameScene::Draw()
{
	gbManager->Draw();

	pManager->Draw();
	sManager->Draw();
}

//オーバーシーンの定義
void OverScene::Init()
{
	uManager->Init();
}

void OverScene::Update()
{

}

void OverScene::Draw()
{

}


//シーンマネージャの定義
void SceneManager::ChangeScene(SCENE scene)
{
	switch (scene)
	{
	case SCENE::TITLE:
		pScene = new TitleScene();
		break;
	case SCENE::GAME:
		pScene = new GameScene();
		break;
	case SCENE::OVER:
		pScene = new OverScene();
		break;
	}
	//シーンの初期化
	Init();

}

void SceneManager::Init()
{
	pScene->Init();
}
void SceneManager::Update()
{
	pScene->Update();
}
void SceneManager::Draw()
{
	pScene->Draw();
}