#include <stdio.h>
#include <stdlib.h>

#include "arraylist.h"

#if 0
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

void remove(ArrayListType* L, int pos)
{
	if (is_empty(L))
	{
		error("List is empty\n");
	}

	if (pos < 0 || pos > L->length - 1)
	{
		error("remove position error\n");
	}

	//while문 보단 for문이 가독성이 좋다.
	while (pos < L->length - 1)
	{
		L->list[pos] = L->list[pos + 1];
		pos++;
	}

	//버퍼 오버런 발생 가능성 있는 코드
	//타입 의존적 코드라서 좋지 않은 코드
	L->list[pos] = 0;

	L->length--;
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

	//while문 보단 for문이 가독성이 좋다
	while (pos != i)
	{
		//버퍼 오버런 발생 가능성 있는 코드
		L->list[i] = L->list[i - 1];
		i--;
	}

	L->list[i] = item;
	L->length++;
}
#endif // 0