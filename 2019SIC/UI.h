#pragma once
#include "Obj2d.h"


class UI :public OBJ2D {
public:
};

class UIManager {
public:
	static UIManager* GetInstance()
	{
		static UIManager uimanager;
		return &uimanager;
	}
private:
	UI* ul;
	UI* Tui[10];
	UI* Gui[10];
	UI* Oui[10];
public:
	void Init();
	void Updata();
	void Draw(OBJ2D*);

	void TITLE_UI();
	void GAME_UI();
	void OVER_UI();

	void TU_Update();
	void GU_Update();
	void OU_Update();


	void TITLE_Draw();
	void GAME_Draw();
	void OVER_Draw();
};

#define uManager (UIManager::GetInstance())
