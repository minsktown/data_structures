#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Nat_No.h"

#define MAX_STUDENTS 200
#define MAX_NAME 100

typedef struct {
	int x;
	int y;
} PointType;



int get_line_parameter(PointType p1, PointType p2, float* slope, float* yintercept)
{
	if (p1.x == p2.x)
	{
		return -1;
	}
	else
	{
		*slope = (float)(p2.y - p1.y) / (p2.x - p1.x);
		*yintercept = p1.y - (*slope) * p1.x;

		return 0;
	}
}

int bit_copy(int num)
{
	int result = 0;
	int temp = 1;
	int n = 1;

	while (num != result)
	{
		if (num & temp) {
			result += 1 * n;
		}

		temp = temp << 1;
		n = n * 10;
	}

	return result;
}

int convert_binary(int num)
{
	if (num < 2)
	{
		return num;
	}

	int convert = 0;
	int i = 1;

	while (num > 1)
	{
		if (num % 2)
		{
			convert += 1 * i;
		}

		num = num / 2;
		i *= 10;
	}

	return convert += (num * i);
}

//#include <iostream>
//#include <chrono>
//
//char LUT['f' + 1];   // 'f'=102
//
//void initLut()
//{
//	LUT['0'] = 0x0;
//	LUT['1'] = 0x1;
//	LUT['2'] = 0x2;
//	LUT['3'] = 0x3;
//	LUT['4'] = 0x4;
//	LUT['5'] = 0x5;
//	LUT['6'] = 0x6;
//	LUT['7'] = 0x7;
//	LUT['8'] = 0x8;
//	LUT['9'] = 0x9;
//
//	LUT['a'] = 0xa;
//	LUT['b'] = 0xb;
//	LUT['c'] = 0xc;
//	LUT['d'] = 0xd;
//	LUT['e'] = 0xe;
//	LUT['f'] = 0xf;
//
//	LUT['A'] = 0xa;
//	LUT['B'] = 0xb;
//	LUT['C'] = 0xc;
//	LUT['D'] = 0xd;
//	LUT['E'] = 0xe;
//	LUT['F'] = 0xf;
//}
//
//int main()
//{
//	initLut();
//
//	const char* hexString = "19AF";   // 0x19AF = 6575
//
//	auto start = std::chrono::high_resolution_clock::now();
//
//	for (int i = 0; i < 300000000; i++)
//	{
//		int value =
//			(LUT[hexString[0]] << 12) |
//			(LUT[hexString[1]] << 8) |
//			(LUT[hexString[2]] << 4) |
//			LUT[hexString[3]];
//	}
//
//	auto end = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double, std::milli> elapsed = end - start;
//	std::cout << "time: " << elapsed.count() << " ms" << std::endl;
//
//	return 0;
//}


#include <iostream>
#include <chrono>

int main()
{
	const char* hexString = "19AF";   // 0x19AF = 6575

	auto start = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < 300000000; i++)
	{
		int value = strtoul(hexString, NULL, 16);
	}

	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsed = end - start;
	std::cout << "time: " << elapsed.count() << " ms" << std::endl;

	return 0;
}