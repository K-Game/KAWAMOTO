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

//private:
	Player* player;
public:
	void Init();
	void Update();
	void Draw();
};

#define pManager (PlayerManager::GetInstance())

//ƒvƒŒƒCƒ„[‚ÌˆÚ“®ŠÖ”

class PlayerMove :public MoveAlg
{
public:
	void move(OBJ2D* obj);
};


