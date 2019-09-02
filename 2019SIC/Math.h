#pragma once




class VECTOR2D
{
public:
	float x;
	float y;

	//

	//2Dベクトル取得関数
	static VECTOR2D VGet2D(float x, float y)
	{
		VECTOR2D result;
		result.x = x;
		result.y = y;
		return result;
	}



	//演算子のオーバーロード
	//　＋
	VECTOR2D operator +(VECTOR2D& v){
		return VGet2D(this->x + v.x, this->y + v.y);
	}
	//　－
	VECTOR2D operator -(VECTOR2D& v) {
		return VGet2D(this->x - v.x, this->y - v.y);
	}
	//   ＊
	VECTOR2D operator *(VECTOR2D& v) {
		return VGet2D(this->x * v.x, this->y * v.y);
	}
	//　÷
	VECTOR2D operator  /(VECTOR2D& v) {
		return VGet2D(this->x / v.x, this->x / v.y);
	}
	//　内積
	float Vec2Dot(VECTOR2D& v1, VECTOR2D& v2) {
		return v1.x*v2.x + v1.y*v2.y;
	}
	//   外積
	float Vec2Cross( VECTOR2D& v1,VECTOR2D& v2) {
		return v1.x*v2.x - v1.y*v2.y;
	}
	//残りは後で

};


