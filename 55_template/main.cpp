#include <iostream>
#pragma warning(disable : 4996)

//int add(int a, int b)
//{
//	return a + b;
//}
//float add(float a, float b)
//{
//	return a + b;
//}

// �����ε��� ���ø����� ����
template <typename T>
T add(T a, T b)
{
	return a + b;
}


int main()
{
	// T�� int������ ġȯ, �Լ� ȣ��� ���ø� ������
	int result_value = add<int>(10, 20); 
	result_value = add(10, 30);

	

	return 0;
}