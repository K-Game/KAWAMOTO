#pragma once
#include "Obj2d.h"

class Player:public OBJ2D {
public:
};

class PlayerManager
{

public:
	static PlayerManager* GetInstance()
	{
		static PlayerManager playerManager;
		return &playerManager;
	}

private:
	Player* player;
public:
	void Init();
	void Update();
	void Draw();
};

#define pManager (PlayerManager::GetInstance())

//プレイヤーの移動関数
void PlayerMove(OBJ2D* obj);