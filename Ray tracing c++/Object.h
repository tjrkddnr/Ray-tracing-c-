#pragma once
#include "Ray.h"

class Object
{
public:
	VECTOR3D k_ambient;
	VECTOR3D k_diffuse;
	VECTOR3D k_specular;
	float k_shineness;


	Object() {}
	virtual ~Object() {}

	virtual bool hit(Ray r, float *t) = 0 {}
	virtual VECTOR3D getColor(VECTOR3D point, VECTOR3D light, VECTOR3D ray) = 0 {}
	virtual VECTOR3D get_normal(VECTOR3D point) = 0 {}
};

