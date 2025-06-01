#include <cstdio>
#include <cstdlib>
#include <iostream>

void OutPut(int* adress) // 간접 접근을 활용해서 변경
{
	
}

void OutPutRead(const int* adress) // 읽기만 한다는 의도를 담음 / "절대" 상수라는 건 없음;;
{
	int i = *adress; 
	int* pInt = (int*)adress; // 강제 캐스팅으로 수정 가능
	*pInt = 1000;
}

int main()
{
	 /*const (lecture 30)*/
	// l-value 가변 변수
	// r-value 불변 변수 = 상수

	volatile const int cint = 10; // 문법적으로 불변인 변수가 됨
	int* pint = (int*) & cint;

	*pint = 30;
	printf("cint : %d\n", cint); // volatile X >> result : 10
	// const 키워드가 작성되어 있기에, 레지스터 메모리에서는 값이 변경되지 않음 -> volatile 키워드를 사용하여 레지스터 메모리 사용을 금함

	 /*const pointer (lecture 31)*/
	int a = 10;
	int b = 0;
	const int* pConstInt = &a; // const-> 포인터 변수가 아닌 참조하는 것(*pConstInt)을 상수화함
	a = 20; // a 자체는 계속 변수임
	pConstInt = &b;
	//*pConstInt = 10; // error

	int* const pIntConst = &a; // const -> 포인터 변수를 상수화
	*pIntConst = 10;
	//pIntConst = &b; //C3892 error

	const int* const pConstIntConst = nullptr; // 둘다 상수임
	//pConstIntConst = &a; // error

	/*(lecture 32)*/
	// 함수에서 큰 데이터를 복사하기엔 너무 비효율적임
	// >> 포인터를 이용해서 간접 접근


	return 0;
}
