#pragma once
class VECTOR2D
{
public:
	float x;
	float y;



	//���Z�q�̃I�[�o�[���[�h
	VECTOR2D operator +(VECTOR2D v)
	{
		return VGet2D(this->x + v.x, this->y + v.y);
	}
	//�c��͌��

};

VECTOR2D VGet2D(float x,float y)
{
	VECTOR2D result;
	result.x = x;
	result.y = y;
	return result;
}
