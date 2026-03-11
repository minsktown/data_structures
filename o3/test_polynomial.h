#pragma once

#include "polynomial.h"


void test_poly_add()
{
	polynomial a = { 5, {3, 6, 0, 0, 0, 10} };
	polynomial b = { 4, {7, 0, 5, 0, 1} };

	polynomial c = poly_add(a, b);

	for (int i = 0; i <= c.degree; i++)
	{
		printf("%f ", c.coef[i]);
	}
}