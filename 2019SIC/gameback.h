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
	GBACK* gback[10];
public:
	int Back;

	void Init();
	void Updata();
	void Draw();
};

#define gbManager (GBackManager::GetInstance())