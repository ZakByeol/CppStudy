#include <cstdio>

int main()
{
	// void
	void* pVoid = nullptr;
	{
		int a = 10;
		float b = 0.f;
		double c = 0.;
		long long ll = 0;
		pVoid = &a; // ������ ��(adress) ������ Ÿ���� �ؼ��� ����
		pVoid = &b; // -> �̷��� �������� �Ұ�����
		pVoid = &c; // -> ������ ������ �ּ� ���굵 �Ұ���
		pVoid = &ll; // �ƴ� �׷� �̰� �� ��?
	}
	return 0;
}