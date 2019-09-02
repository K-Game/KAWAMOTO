#include <Windows.h>
#include "DxLib.h"

#include "player.h"
#include "enemy.h"
#include "shot.h"
#include "Obj2d.h"

bool Hit_check(OBJ2D* obj1, OBJ2D* obj2);

void Judge() {

}


bool Hit_check(OBJ2D* obj1, OBJ2D* obj2) {
	if (obj1->position.x + obj1->size.x < obj2->position.x - obj2->size.x) return false;
	if (obj2->position.x + obj2->size.x < obj1->position.x - obj1->size.x) return false;
	if (obj1->position.y + obj1->size.y < obj2->position.y - obj2->size.y) return false;
	if (obj2->position.y + obj2->size.y < obj1->position.y - obj1->size.y) return false;
	return true;			// Ç†ÇΩÇËÅI
}
