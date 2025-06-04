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
	pTest->a = 100; // 간편화
	pTest->b = 3.1415f;

	int* pInt = (int*)malloc(100); // 힙 메모리 영역에 공간을 선언한 뒤, 해당 공간의 주소를 반환
	float* pFloat = (float*)malloc(4); // 가변 크기가 필요한 상황에 사용함

	free(pInt); // 메모리 해제 구문
	free(pFloat); // to prevent memory leaky
	return 0;
}