#pragma once

#include <stdlib.h>

#include "arraylist.h"


void test_arraylist()
{
	ArrayListType list;
	

	init(&list);
	add(&list, 0, 10);
	add(&list, 1, 20);
	add(&list, 2, 30);
	display(&list);

	printf("%d\n", get_length(&list));
	printf("%d\n", get_entry(&list, 2));
	printf("%d\n", replace(&list, 2, 100));

	display(&list);

	ArrayListType* plist;

	plist = (ArrayListType*)malloc(sizeof(ArrayListType));

	init(plist);
	add(plist, 0, 10);
	add(plist, 1, 20);
	add(plist, 2, 30);
	display(plist);

	free(plist);
}