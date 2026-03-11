#include <stdio.h>
#include <stdlib.h>

#include "arraylist.h"


void error(const char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init(ArrayListType* L)
{
	printf("Init ArrayListType...\n");
	L->length = 0;
}

int is_empty(ArrayListType* L)
{
	return L->length == 0;
}

int is_full(ArrayListType* L)
{
	return L->length == MAX_LIST_SIZE;
}

void display(ArrayListType* L)
{
	for (int i = 0; i < L->length; i++)
	{
		printf("%d\n", L->list[i]);
	}

	printf("List length:%d\n", L->length);
}

element remove(ArrayListType* L, int position)
{
	element item;

	if (is_empty(L))
	{
		error("List is empty\n");
	}

	if (position < 0 || position > L->length - 1)
	{
		error("remove position error\n");
	}

	item = L->list[position];

	for (int i = position; i < L->length - 1; i++)
	{
		L->list[i] = L->list[i + 1];
	}

	L->length--;

	return item;
}

void add(ArrayListType* L, int pos, element item)
{
	if (is_full(L))
	{
		error("List is full\n");
	}

	if (pos < 0 || L->length < pos)
	{
		error("position is bigger than length\n");
	}

	int i = L->length;

	while (pos != i)
	{
		L->list[i] = L->list[i - 1];
		i--;
	}

	L->list[i] = item;
	L->length++;
}

element get_entry(ArrayListType* L, int position)
{
	if (position < 0 || position >= L->length)
	{
		error("position error\n");
	}

	return L->list[position];
}

element replace(ArrayListType* L, int position, element item)
{
	if (position < 0 || position >= L->length)
	{
		error("position error\n");
	}

	L->list[position] = item;

	return L->list[position];
}

int get_length(ArrayListType* L)
{
	return L->length;
}