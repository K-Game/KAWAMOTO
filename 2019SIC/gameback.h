#pragma once
#include "Obj2d.h"

class GBACK :public OBJ2D {
public:
};

class GBackManager
{
public:
	static GBackManager* GetInstance()
	{
		static GBackManager gbackmanager;
		return &gbackmanager;
	}

private:


public:
	int Back;

	void Init();
	void Updata();
	void Draw();
};

#define gbManager (GBackManager::GetInstance())

class GBMove :public MoveAlg
{
public:
	void move(OBJ2D* obj);
};