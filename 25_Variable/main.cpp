#include "func.h"

int g_i = 0; // ���� ���� - ������ ����
static int iStatic = 20; // ���� ���� - ������ ����, ���ϸ��� �������� ����,�Լ� ���� �ۼ��ص� ������ ������ ������
int g_iExtern; // �̷��� ������ ����� ��(�ƹ� cpp���� ������ �ص� ��)

int Test()
{
	// ����/ȣ�� �Ǿ ������ �����̱⿡ �Ҹ���� ���� - �Լ� �� ������
	// �������� ������ �� >> �ٸ� �Լ����� ���� ���� �ǵ�ġ �ʰ� ����Ǵ� �Ǽ��� ���� �� ����
	// �ʱ�ȭ�� ������ �ʱ⿡�� �����
	static int CountTest = 0;
	CountTest++;

	return CountTest;
}

int main()
{
	for (int i = 0; i < 5; i++) Test();
	printf("%d\n", Test()); // result : 6


	printf("\nfunc���� ���� ���� �Ҵ� �Ϸ�\n");
	func_test();
	func_extern();
	printf("main.cpp g_iExtern : %d\n", g_iExtern);

	g_iExtern = 10;
	printf("\n�ܺ� ���� �Ҵ� �Ϸ� \n");
	func_test();
	printf("main.cpp g_iStatic : %d\n", g_iStatic); // ���� ������ ������
	printf("main.cpp g_iExtern : %d\n", g_iExtern); // ���� ������ ������
	func_extern();

	return 0;
}