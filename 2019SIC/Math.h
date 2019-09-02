#pragma once




class VECTOR2D
{
public:
	float x;
	float y;

	//

	//2D�x�N�g���擾�֐�
	static VECTOR2D VGet2D(float x, float y)
	{
		VECTOR2D result;
		result.x = x;
		result.y = y;
		return result;
	}



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


