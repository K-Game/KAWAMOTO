#pragma once

//�V�[�����N���X
class Scene
{
public:
	virtual void Init()=0;
	virtual void Update()=0;
	virtual void Draw()=0;
};


//�^�C�g���V�[���N���X
class TitleScene :public Scene
{
	public:
		void Init();
		void Update();
		void Draw();
};

//�Q�[���V�[���N���X
class GameScene :public Scene
{
	public:
		void Init();
		void Update();
		void Draw();
};

//�I�[�o�[�V�[���N���X
class OverScene :public Scene
{
	public:
		void Init();
		void Update();
		void Draw();
};

class SceneManager
{
public:
	enum SCENE
	{
		TITLE,
		GAME,
		OVER
	};
	static void ChangeScene(SCENE scene);
	static void Init();
	static void Update();
	static void Draw();

private:
	static Scene* pScene;
};


Scene *SceneManager::pScene = NULL;