#pragma once
#include "Obj2d.h"
enum {
	PWAIT_L,
	PWAIT_R,
	PMOVE_L,
	PMOVE_R,
};
enum {
	P_ALIVE,
	P_DEAD,
};


class Player:public OBJ2D {
private:
	Player();
	~Player();

public:
	//‹““®
	void PShot();
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
