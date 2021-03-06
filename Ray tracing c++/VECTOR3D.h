#ifndef __VECTOR3D_H__
#define __VECTOR3D_H__

#include <cmath>
#define radian(degree) ((degree)*(3.141592)/180.0f)

class VECTOR3D
{
public:

	VECTOR3D()
		:x(0.0f), y(0.0f), z(0.0f) {}

	VECTOR3D(float x, float y, float z)
		:x(x), y(y), z(z) {}

	float Magnitude();
	float InnerProduct(const VECTOR3D& v);
	VECTOR3D CrossProduct(const VECTOR3D& v);
	VECTOR3D Normalize();

	VECTOR3D operator+(const VECTOR3D& v);
	void operator+=(const VECTOR3D& v);

	VECTOR3D operator-(const VECTOR3D& v);
	VECTOR3D operator-();
	VECTOR3D operator*(const float& val);

	VECTOR3D operator/(const float& val);
	VECTOR3D operator/=(const float& val);

	float x;
	float y;
	float z;
};

#endif //__VECTOR3D_H__