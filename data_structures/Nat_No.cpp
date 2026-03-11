#include <limits.h>
#include "Nat_No.h"

int zero()
{
	return 0;
}

bool is_zero(int x)
{
	if (x)
	{
		return false;
	}

	return true;
}

int add(int x, int y)
{
	int value = x + y;

	if (value > INT_MAX)
	{
		return INT_MAX;
	}

	return value;
}

int sub(int x, int y)
{
	if (x < y)
	{
		return 0;
	}

	return x - y;
}

bool equal(int x, int y)
{
	if (x != y)
	{
		return false;
	}

	return true;
}

int successor(int x)
{
	if (x + 1 > INT_MAX)
	{
		return INT_MAX;
	}

	return x + 1;
}

bool is_greater(int x, int y)
{
	if (x <= y)
	{
		return false;
	}

	return true;
}