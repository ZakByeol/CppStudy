#include "header.h"
#include <iostream>

// 1. 가변 배열 구현
// 2. 가변 배열에 버블 정렬 구현

int main()
{
	// 1. jagged array
	tJagged arr;
	srand(time(nullptr));
	init_jagged(&arr, 10);
	int vInput, tmp;
	for (int i = 0; i < 10; ++i)
	{
		vInput = rand() % 100 + 1;
		add_jagged(&arr, vInput);
	}

	// 2. Bubble sort
	for (int i = 0; i<arr.vAmount-1; i++)
	{
		for (int j = 0; j<arr.vAmount-i; j++)
		{
			if (arr.pInt[j] > arr.pInt[j+1])
			{
				tmp = arr.pInt[j];
				arr.pInt[j] = arr.pInt[j + 1];
				arr.pInt[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < arr.vAmount; i++)
	{
		printf("%d\n", arr.pInt[i]);
	}

	return 0;
}