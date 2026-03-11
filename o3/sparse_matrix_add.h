#pragma once

#define ROWS	3
#define COLS	3


void sparse_matrix_add1(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]);
//void sparse_matrix_add1(int A[][COLS], int B[][COLS], int C[][COLS]);
//void sparse_matrix_add1(int* A, int* B, int* C);




#define MAX_TERMS	10
typedef struct {
	int row;
	int col;
	int value;
}element;

typedef struct SparseMatrix {
	element data[MAX_TERMS];
	int rows;
	int cols;
	int terms;
} SparseMatrix;

SparseMatrix sparse_matrix_add2(SparseMatrix a, SparseMatrix b);