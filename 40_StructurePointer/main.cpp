#include  <iostream>

typedef struct TestStruct
{
	int a;
	float b;
}test;

int main()
{
	test a;
	test* pTest = &a;

	(*pTest).a = 10;
	pTest->a = 100; // ����ȭ
	pTest->b = 3.1415f;

	int* pInt = (int*)malloc(100); // �� �޸� ������ ������ ������ ��, �ش� ������ �ּҸ� ��ȯ
	float* pFloat = (float*)malloc(4); // ���� ũ�Ⱑ �ʿ��� ��Ȳ�� �����

	free(pInt); // �޸� ���� ����
	free(pFloat); // to prevent memory leaky
	return 0;
}