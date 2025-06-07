#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>  

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int multi(int a, int b) { return a * b; }
int divv(int a, int b) { return a / b; }
int mod(int a, int b) { return a % b; }

void Test1(int* _pInt, float* _pFloat)
{
	printf("인자 2개 Test함수 호출\n");
}

int (*(calculator3(int (*fp[])(int, int), int arr_size))) (int, int)
{
	// 1. calculator3에 함수포인터배열을 사용하여 매개변수로 받는다.
	int low = 0;
	int high = arr_size - 1;
	int random_Num = rand() % high + low; // 난수 발생범위를 low에서 high 범위내에 출력되는 코드
	return fp[random_Num]; // 2. 임의의 수(0~4 사이)를 넣어 fp[]를 반환한다.
}

int main()
{
	// 함수 포인터 Function Pointer
	// 함수 포인터는 함수를 또 다른 함수의 인자(argument)로 넘겨주기 위해 주로 사용된다.
	// 라이브러리에서 함수의 기능이 어떻게 바뀔지 예상할 수 없을 때, 여러 개의 함수를 배열로 관리하고자 할 때 사용할 수도 있으며,

	// _____________Explain Code_____________

	void (*pFunc)(int*,float*) = nullptr; // 선언 당시의 형태에 매칭이 되는 함수만 할당할 수 있다.
	pFunc = Test1; // Test 는 Test()의 주소

	int (*CastingTest)(int*, float*) = nullptr;
	//CastingTest = (int)Test1;

	// _____________FunctionPointer used as argument_____________

	srand(time(NULL));
	int (*fpa[])(int, int) = { sum, sub, multi, divv, mod }; // 함수 포인터 배열 0-sum, 1-sub ``` 4-mod
	int vTest = fpa[1](10, 4);
	int AmountFunction = sizeof(fpa) / sizeof(fpa[0]);  // 포인터는 8바이트를 가지기 때문에

	printf("%llu\n", calculator3(fpa, AmountFunction) ); // ① test - Calculator()의 반환값 실험 > 주소를 반환함
	
	printf("random RUN!! : %d\n", calculator3(fpa, AmountFunction) (10, 3)); // calculator3 포인터를 calculator3() 로 작성하여 함수로 작동
	// 받아온 함수에 매개변수로 (10,3) 을 넣어 %d를 출력한다. -> 10,3을 연산하는 sum~mod 중 랜덤 함수
	return 0;
}