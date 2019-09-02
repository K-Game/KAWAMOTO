#pragma once

//�O���錾
class VECTOR2D;
VECTOR2D VGet2D(float x, float y);


class VECTOR2D
{
public:
	float x;
	float y;

	//���Z�q�̃I�[�o�[���[�h
	//�@�{
	VECTOR2D operator +(VECTOR2D& v){
		return VGet2D(this->x + v.x, this->y + v.y);
	}
	//�@�|
	VECTOR2D operator -(VECTOR2D& v) {
		return VGet2D(this->x - v.x, this->y - v.y);
	}
	//   ��
	VECTOR2D operator *(VECTOR2D& v) {
		return VGet2D(this->x * v.x, this->y * v.y);
	}
	//�@��
	VECTOR2D operator  /(VECTOR2D& v) {
		return VGet2D(this->x / v.x, this->x / v.y);
	}
	//   ��
	VECTOR2D operator %(VECTOR2D& v) { 
		return;
	}
	//�@����
	float Vec2Dot(VECTOR2D& v1, VECTOR2D& v2) {
		return v1.x*v2.x + v1.y*v2.y;
	}
	//   �O��
	float Vec2Cross( VECTOR2D& v1,VECTOR2D& v2) {
		return v1.x*v2.x - v1.y*v2.y;
	}
	//�c��͌��

};

//2D�x�N�g���擾�֐�
VECTOR2D VGet2D(float x, float y)
{
	VECTOR2D result;
	result.x = x;
	result.y = y;
	return result;
}

