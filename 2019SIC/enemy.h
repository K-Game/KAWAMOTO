#pragma once
#include "Obj2d.h"


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
	ENEMYS* Enemy;
public:
	void Init();
	void Updata();
	void Drow();
};

//define’è‹`
#define eManager(EnemyManager::GetInstance())

void EnemyMove1(OBJ2D* obj);
