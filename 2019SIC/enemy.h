#pragma once
#include "Obj2d.h"

#define Enemycount 20


class ENEMYS:public OBJ2D {
public:
};

class EnemyManager {
public:
	static EnemyManager* GetInstance() {
		static EnemyManager enemymanager;
		return &enemymanager;
	}

private:
	ENEMYS* Enemy[20];
public:
	void Init();
	void Updata();
	void Drow();
};

//define’è‹`
#define eManager (EnemyManager::GetInstance())

void EnemyMove1(OBJ2D* obj);
