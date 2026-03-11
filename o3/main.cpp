#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "test_polynomial.h"
#include "test_sparse_matrix.h"


struct Example {
	int number;
	char name[10];
};


int main()
{
	int* p = (int*)malloc(sizeof(int) * 4);

	if (p == NULL)
	{
		fprintf(stderr, "Can't allocated memory");
		exit(1);
	}

	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", p[i]);
	}
	p++;
	p++;

	printf("%d\n", *p);

	free(p);

	return 0;
}