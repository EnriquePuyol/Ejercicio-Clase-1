class Vector_3
{
public:
	float x, y, z;

public:
	Vector_3();
	Vector_3(const float x, const float y, const float z);
	Vector_3(const Vector_3 & vector_3);
	~Vector_3();

	Vector_3 Normalize();
	Vector_3 Sum(const Vector_3 & vector_3);
	float Distance_to(const Vector_3 & vector_3);
};

