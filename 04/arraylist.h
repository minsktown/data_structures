#pragma once

#define MAX_LIST_SIZE	100

typedef int	element;

typedef struct ArrayListType {
	element list[MAX_LIST_SIZE];
	int length;
} ArrayListType;

void error(const char* message);
void init(ArrayListType* L);
int is_empty(ArrayListType* L);
int is_full(ArrayListType* L);
void display(ArrayListType* L);
void add(ArrayListType*, int position, element item);
element remove(ArrayListType* L, int position);
element get_entry(ArrayListType* L, int position);
int get_length(ArrayListType* L);
element replace(ArrayListType* L, int position, element item);