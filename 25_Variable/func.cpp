#include "func.h"

int global_value1 = 10; // ���� ���� - ������ ����, ������ X
static int iStatic = 20; // ���� ���� - ������ ����, ������ O

void func_test()
{
	g_iStatic += 10;
	printf("func.cpp g_iStatic : %d\n", g_iStatic);
}

void func_extern()
{
	printf("func.cpp g_iExtern : %d\n", g_iExtern); // ���� ������ ������
}