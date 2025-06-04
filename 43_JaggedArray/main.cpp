#include <cstdio>
#include <cstdlib>

#include "arr.h"
#pragma warning(disable: 4996)

int main()
{
	int vSize = 10;
	//char name[10]; 상수값을 넣어야 함

	// 객체 instance

	tArr arr;
	arr.pInt= (int*)malloc(10*sizeof(int));
	arr.vCount = 0;
	arr.vMaxLimit = 10;

	InitArr(&arr);
	for (int i = 0; i < 10; ++i)
	{
		PushBack(&arr, i);
	}

	for (int i = 0; i<arr.vCount; i++)
	{
		printf("%d\n", arr.pInt[i]);
	}

	return 0;
}