#include <Windows.h>
#include <math.h>
#include "DxLib.h"


#include "Obj2d.h"
#include "SpriteData.h"
#include "gameback.h"
#include "player.h"

GBACK* gback[10];
Player* gbplayer;

void GBackManager::Init(){
	/*for (int a = 0; a > 2; a++) {
		gback[a] = new GBACK;
		gback[a]->LoadSpriteData(BackData);
		gback[a]->state = STATE::BACK;
		gback[a]->SpriteNumber = 1;
	}*/
	gback[0] = new GBACK;
	gback[0]->LoadSpriteData(BackData);
	gback[0]->state = STATE::BACK;
	gback[0]->SpriteNumber = 1;
	gback[1] = new GBACK;
	gback[1]->LoadSpriteData(BackData);
	gback[1]->state = STATE::BACK;
	gback[1]->SpriteNumber = 1;
	gback[0]->position = VECTOR2D::VGet2D(0, 0);
	gback[1]->position = VECTOR2D::VGet2D(641, 381);
	gback[0]->size = VECTOR2D::VGet2D(0, 0);
	gback[1]->size = VECTOR2D::VGet2D(0, 0);

}

void GBackManager::Updata() {
//	gback[0]->moveAlg->move(gback[0]);
//	gback[1]->moveAlg->move(gback[1]);
}

void GBackManager::Draw() {
	gback[0]->resizedraw(0,0,640,480);
	gback[1]->resizedraw(641, 481, 640, 480);
}

#define Back_SPEED 0.4f
#define Back_MAX_SPEED 5.0f
#define Back_FRICTION 0.95f
#define Back_ZERO_SPEED 0.2f

void GBMove::move(OBJ2D* obj){
	/*�v���C���[�̈ʒu���600�Ȃ�{�ɃX�e�[�W1,2���v���C���[�Ɠ������x�ňړ�������
	///�v���C���[�̈ʒu��50�ŃX�e�[�W���X���C�h�ړ����Ă�����X�e�[�W��-�Ɉړ��A
	���ւ̉�ʈړ��͂Ȃ�(�{�ƂƓ����Ńo�b�N�͂ł��Ȃ�����)
	�X�e�[�W�̈ʒu��0�ɂȂ�����X�e�[�W�̈ړ����Ƃ���

	�摜��-640�̈ʒu�ɕt������641�̈ʒu�ɔ�΂�


	�v���[���[�̈ʒu���̎擾
	*/
	if (gbplayer->position.x > 500) {
		obj->velocity.x += Back_SPEED;
	}
	if (gbplayer->position.x < 50 && obj->position.x != 0 ) {
		obj->velocity.x -= Back_SPEED;
	}
	obj->velocity.x = fmin(obj->velocity.x, Back_MAX_SPEED);
	obj->velocity.x = fmax(obj->velocity.x, -Back_MAX_SPEED);

	obj->velocity.x *= Back_FRICTION;


	if (fabs(obj->velocity.x) < Back_ZERO_SPEED)obj->velocity.x = 0;

	obj->position.x += obj->velocity.x;
}