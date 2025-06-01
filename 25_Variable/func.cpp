#include "func.h"

int global_value1 = 10; // 전역 변수 - 데이터 영역, 독립성 X
static int iStatic = 20; // 정적 변수 - 데이터 영역, 독립성 O

void func_test()
{
	g_iStatic += 10;
	printf("func.cpp g_iStatic : %d\n", g_iStatic);
}

void func_extern()
{
	printf("func.cpp g_iExtern : %d\n", g_iExtern); // 정적 변수의 독립성
}