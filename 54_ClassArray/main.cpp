#include <iostream>
#pragma warning (disable : 4996)
#include "ClassArr.h"

int main()
{
	srand(time(NULL));
	ClassArr carr;
	for (int i = 0; i < 10; i++)
	{
		carr.push_back(i);
	}
	
	// 포인터 연산자를 사용하지 않고 연산을 하려면, C++의 참조 자료형을 사용
	/**carr[1] = 10;
	int test = *carr[1];*/

	carr[1] = 10;
	int test = carr[1];

	return 0;
}