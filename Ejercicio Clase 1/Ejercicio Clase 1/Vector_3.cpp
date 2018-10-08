#include "pch.h"
#include "Vector_3.h"
#include <math.h>


Vector_3::Vector_3()
{
	this->x = 0.0f;
	this->y = 0.0f;
	this->z = 0.0f;
}

Vector_3::Vector_3(const float x, const float y, const float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector_3::Vector_3(const Vector_3 & vector_3)
{
	this->x = vector_3.x;
	this->y = vector_3.y;
	this->z = vector_3.z;
}


Vector_3::~Vector_3()
{
	delete this;
}

Vector_3 Vector_3::Normalize()
{
	float norm = sqrt( (x*x) + (y*y) + (z*z) );

	float x = this->x / norm;
	float y = this->y / norm;
	float z = this->z / norm;

	return Vector_3(x, y, z);
}

Vector_3 Vector_3::Sum(const Vector_3 & vector_3)
{
	return Vector_3(x  +vector_3.x, y + vector_3.y, z + vector_3.z);
}

float Vector_3::Distance_to(const Vector_3 & vector_3)
{
	float distance = sqrt( (x - vector_3.x) * (x - vector_3.x) +
						   (y - vector_3.y) * (y - vector_3.y) + 
						   (z - vector_3.z) * (z - vector_3.z) );

	return distance;
}
