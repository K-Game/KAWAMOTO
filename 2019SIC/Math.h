#pragma once
class VECTOR2D
{
public:
	float x;
	float y;



	//演算子のオーバーロード
	VECTOR2D operator +(VECTOR2D v)
	{
		return VGet2D(this->x + v.x, this->y + v.y);
	}
	//残りは後で

};

VECTOR2D VGet2D(float x,float y)
{
	VECTOR2D result;
	result.x = x;
	result.y = y;
	return result;
}

