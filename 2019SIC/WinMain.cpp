#include <Windows.h>

#include "DxLib.h"
#include "winmain.h" 
#include "Key.h"
#include "player.h"
#include "enemy.h"
#include "SpriteData.h"
#include "fps.h"
#include "title.h"

// WinMain 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);//�E�B���h�E���[�h�ݒ�
	SetMainWindowText("2019SIC"); //�E�B���h�E���ݒ�
	Fps fps;
	if (DxLib_Init() == -1)	{	// �c�w���C�u��������������
		return -1;			// �G���[���N�����璼���ɏI��
	}

	SceneManager::ChangeScene(SceneManager::SCENE::TITLE);

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0){   //���C�����[�v


		fps.Update();	//�X�V
		fps.Draw();		//�`��
		fps.Wait();		//�ҋ@

		SceneManager::Update();
		SceneManager::Draw();

		KeyUpdate();

		if(Key[KEY_INPUT_RETURN]==1)SceneManager::ChangeScene(SceneManager::SCENE::GAME);


		}

		DxLib_End();				// �c�w���C�u�����g�p�̏I������
		return 0;				// �\�t�g�̏I�� 
}

//�^�C�g���V�[���̒�`
void TitleScene::Init()
{
	tManager->Init();
}

void TitleScene::Update()
{
	tManager->Updata();
}

void TitleScene::Draw()
{
	tManager->Draw();
}

//�Q�[���V�[���̒�`
void GameScene::Init()
{
	pManager->Init();
	eManager->Init();
}

void GameScene::Update()
{
	pManager->Update();
}

void GameScene::Draw()
{
	pManager->Draw();
}

//�I�[�o�[�V�[���̒�`
void OverScene::Init()
{

}

void OverScene::Update()
{

}

void OverScene::Draw()
{

}


//�V�[���}�l�[�W���̒�`
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
	//�V�[���̏�����
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