#include <cstdio>
#include <cstdlib>
#include <iostream>

void OutPut(int* adress) // ���� ������ Ȱ���ؼ� ����
{
	
}

void OutPutRead(const int* adress) // �б⸸ �Ѵٴ� �ǵ��� ���� / "����" ������ �� ����;;
{
	int i = *adress; 
	int* pInt = (int*)adress; // ���� ĳ�������� ���� ����
	*pInt = 1000;
}

int main()
{
	 /*const (lecture 30)*/
	// l-value ���� ����
	// r-value �Һ� ���� = ���

	volatile const int cint = 10; // ���������� �Һ��� ������ ��
	int* pint = (int*) & cint;

	*pint = 30;
	printf("cint : %d\n", cint); // volatile X >> result : 10
	// const Ű���尡 �ۼ��Ǿ� �ֱ⿡, �������� �޸𸮿����� ���� ������� ���� -> volatile Ű���带 ����Ͽ� �������� �޸� ����� ����

	 /*const pointer (lecture 31)*/
	int a = 10;
	int b = 0;
	const int* pConstInt = &a; // const-> ������ ������ �ƴ� �����ϴ� ��(*pConstInt)�� ���ȭ��
	a = 20; // a ��ü�� ��� ������
	pConstInt = &b;
	//*pConstInt = 10; // error

	int* const pIntConst = &a; // const -> ������ ������ ���ȭ
	*pIntConst = 10;
	//pIntConst = &b; //C3892 error

	const int* const pConstIntConst = nullptr; // �Ѵ� �����
	//pConstIntConst = &a; // error

	/*(lecture 32)*/
	// �Լ����� ū �����͸� �����ϱ⿣ �ʹ� ��ȿ������
	// >> �����͸� �̿��ؼ� ���� ����


	return 0;
}
