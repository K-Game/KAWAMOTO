/*
SceneManager�̃��[�h�ɂ���ĕ\������UI��ύX����
TAITLE�̂Ƃ��̓Q�[���̊J�n�ƏI���̃Z���N�g
�Q�[���J�n��STATE��GAME�ɁA�I���ŃQ�[���I���B

GAME�̂Ƃ���

OVER�̂Ƃ��̓X�R�A��\���A60�b�J�E���g������{�^����TAITLE�ɖ߂�

��������
TAITLE,GAME,OVER�̎O��ނ̍X�V�����B
*/

#include <Windows.h>
#include "DxLib.h"

#include "UI.h"

void UIManager::Init() {
	//�^�C�g���n
	for (int a = 1; a < 20; a++) {
		Tui[a] = new UI;
	}
	//�Q�[���{��
	for (int a = 1; a < 20; a++) {
		Gui[a] = new UI;
	}
	//�Q�[���I�[�o�[
	for (int a = 1; a < 20; a++) {
		Oui[a] = new UI;
	}
}
void UIManager::Updata() {

}
void UIManager::Draw(OBJ2D* a) {

}

void UIManager::TITLE_UI() {
	
}
void UIManager::GAME_UI() {

}
void UIManager::OVER_UI() {

}

void UIManager::TITLE_Draw(){}
void UIManager::GAME_Draw(){}
void UIManager::OVER_Draw(){}