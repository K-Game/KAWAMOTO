#pragma once

//シーン基底クラス
class Scene
{
public:
	virtual void Init()=0;
	virtual void Update()=0;
	virtual void Draw()=0;
};


//タイトルシーンクラス
class TitleScene :public Scene
{
	public:
		void Init();
		void Update();
		void Draw();
};

//ゲームシーンクラス
class GameScene :public Scene
{
	public:
		void Init();
		void Update();
		void Draw();
};

//オーバーシーンクラス
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