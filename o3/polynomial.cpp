#include "polynomial.h"

polynomial poly_add(polynomial A, polynomial B)
{
	polynomial C;
	int a_degree, b_degree;
	int A_pos = 0, B_pos = 0, C_pos = 0;


	C.degree = MAX(A.degree, B.degree);

	a_degree = A.degree;
	b_degree = B.degree;

	while (A_pos <= A.degree && B_pos <= B.degree)
	{
		if (a_degree > b_degree) {
			C.coef[C_pos++] = A.coef[A_pos++];
			a_degree--;
		}
		else if (a_degree == b_degree) {
			C.coef[C_pos++] = A.coef[A_pos++] + B.coef[B_pos++];
			a_degree--; b_degree--;
		}
		else {
			C.coef[C_pos++] = B.coef[B_pos++];
			b_degree--;
		}
	}

	return C;
}