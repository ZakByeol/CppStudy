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
	
	// ������ �����ڸ� ������� �ʰ� ������ �Ϸ���, C++�� ���� �ڷ����� ���
	/**carr[1] = 10;
	int test = *carr[1];*/

	carr[1] = 10;
	int test = carr[1];

	return 0;
}