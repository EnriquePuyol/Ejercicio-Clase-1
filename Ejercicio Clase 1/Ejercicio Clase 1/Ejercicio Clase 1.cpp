#include "pch.h"
#include <iostream>
#include "Vector_3.h"

int main()
{
	Vector_3 a(3, 1, 2);
	Vector_3 b(2, 2, 3);

	printf("%f\n", a.Distance_to(b));
}