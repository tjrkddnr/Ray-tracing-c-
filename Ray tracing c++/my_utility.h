#ifndef MY_UTILITY_H
#define MY_UTILITY_H

#include <stdlib.h>
#include <time.h>
#include "VECTOR3D.h"

void randomVector(VECTOR3D *v)
{
	VECTOR3D output;

	srand(time(NULL));
	output.x = (rand() % 100) / 100.0;

	srand(time(NULL));
	output.x = (rand() % 100) / 100.0;

	srand(time(NULL));
	output.x = (rand() % 100) / 100.0;

	*v = output;

	return;
}

void calculateUp(VECTOR3D input, VECTOR3D *output)
{

}

#endif