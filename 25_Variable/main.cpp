#include "func.h"

int g_i = 0; // 전역 변수 - 데이터 영역
static int iStatic = 20; // 정적 변수 - 데이터 영역, 파일마다 독립성을 가짐,함수 내에 작성해도 데이터 영역에 존재함
int g_iExtern; // 이렇게 선언을 해줘야 함(아무 cpp에서 선언을 해도 됨)

int Test()
{
	// 종료/호출 되어도 데이터 영역이기에 소멸되지 않음 - 함수 내 에서만
	// 문법에서 제한을 둠 >> 다른 함수에서 변수 값이 의도치 않게 변경되는 실수를 줄일 수 있음
	// 초기화와 선언은 초기에만 실행됨
	static int CountTest = 0;
	CountTest++;

	return CountTest;
}

int main()
{
	for (int i = 0; i < 5; i++) Test();
	printf("%d\n", Test()); // result : 6


	printf("\nfunc에서 정적 변수 할당 완료\n");
	func_test();
	func_extern();
	printf("main.cpp g_iExtern : %d\n", g_iExtern);

	g_iExtern = 10;
	printf("\n외부 변수 할당 완료 \n");
	func_test();
	printf("main.cpp g_iStatic : %d\n", g_iStatic); // 정적 변수의 독립성
	printf("main.cpp g_iExtern : %d\n", g_iExtern); // 정적 변수의 독립성
	func_extern();

	return 0;
}