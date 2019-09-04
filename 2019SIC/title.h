#pragma once
#include "Obj2d.h"

class TITLE:public OBJ2D {
public:
};

class TitleManager
{
public:
	static TitleManager* GetInstance()
	{
		static TitleManager titlemanager;
		return &titlemanager;
	}

private:
	TITLE* title;
public:
	int Back;

	void Init();
	void Updata();
	void Draw();
};

#define tManager (TitleManager::GetInstance())
