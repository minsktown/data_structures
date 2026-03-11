#pragma once
#include "sparse_matrix_add.h"

void test_sparse_matrix_add1()
{
	int A[ROWS][COLS] = {
		{1, 1, 1},
		{2, 2, 2},
		{3, 3, 3}
	};

	int B[ROWS][COLS] = {
		{10, 10, 10},
		{20, 20, 20},
		{30, 30, 30}
	};

	int C[ROWS][COLS] = { 0 };

	sparse_matrix_add1(A, B, C);

	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			printf("%d ", C[r][c]);
		}
		printf("\n");
	}
}

void test_sparse_matrix_add2()
{
	SparseMatrix m1 = {
		{{1, 1, 5}, {2, 2, 9}}, 3, 3, 2
	};

	SparseMatrix m2 = {
		{{0, 0, 5}, {2, 2, 9}}, 3, 3, 2
	};

	SparseMatrix m3 = sparse_matrix_add2(m1, m2);

	for (int i = 0; i < m3.terms; i++)
	{
		printf("[%d][%d]:%d\n", m3.data[i].row, m3.data[i].col, m3.data[i].value);
	}
}