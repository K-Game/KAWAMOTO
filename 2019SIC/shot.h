#pragma once

#include "Obj2d.h"


#define SHOT_NUM 50
class Shot :public OBJ2D {
public:
};

class ShotManager
{

public:
	static ShotManager* GetInstance()
	{
		static ShotManager shotManager;
		return &shotManager;
	}

private:
	Shot* shot[SHOT_NUM];
public:
	void Init();
	void Update();
	void Draw();
	void Add(MoveAlg* MoveAlg, VECTOR2D pos, VECTOR2D Size, VECTOR2D Verocity, SpriteData* data);
};

#define sManager (ShotManager::GetInstance())


//プレイヤーのノーマルショット
class PlayerNormalShot :public MoveAlg
{
public:
	void move(OBJ2D* obj);
};

extern PlayerNormalShot playerNormalShot;
