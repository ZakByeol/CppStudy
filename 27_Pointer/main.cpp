#include <cstdio>

int main()
{
	int i = 100;
	float k = 3.4f;

	int* pint = &i;
	int* force_pint = (int*)&k; // 강제 캐스팅 가능, 그러나 int* 의 표현 방식 자체는 force_pint에 녹아있다.

	*pint = 10; // Access
	int force_int = *force_pint; // 3?

	// 큰 수가 나오는 이유
	// 강제 형 변환을 해도, 간접 접근시 나오는 변수의 값을 변화시키진 않는다.
	// 3.4f가 32비트에 부동소수점 수(IEEE754)로 표현되어 있는데, 이를 int 형식으로 받으면 부호+31자리의 이진수로 할당되고

	return 0;
}