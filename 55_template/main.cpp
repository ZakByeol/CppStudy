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

// 오버로딩을 탬플릿으로 구현
template <typename T>
T add(T a, T b)
{
	return a + b;
}


int main()
{
	// T를 int형으로 치환, 함수 호출시 템플릿 구현됨
	int result_value = add<int>(10, 20); 
	result_value = add(10, 30);

	

	return 0;
}