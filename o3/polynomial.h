#pragma once

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MAX_DEGREE	101

typedef struct {
	int degree;
	float coef[MAX_DEGREE];
} polynomial;



polynomial poly_add(polynomial A, polynomial B);