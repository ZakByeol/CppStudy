#include <cstdio>

int main()
{
	int i = 100;
	float k = 3.4f;

	int* pint = &i;
	int* force_pint = (int*)&k; // ���� ĳ���� ����, �׷��� int* �� ǥ�� ��� ��ü�� force_pint�� ����ִ�.

	*pint = 10; // Access
	int force_int = *force_pint; // 3?

	// ū ���� ������ ����
	// ���� �� ��ȯ�� �ص�, ���� ���ٽ� ������ ������ ���� ��ȭ��Ű�� �ʴ´�.
	// 3.4f�� 32��Ʈ�� �ε��Ҽ��� ��(IEEE754)�� ǥ���Ǿ� �ִµ�, �̸� int �������� ������ ��ȣ+31�ڸ��� �������� �Ҵ�ǰ�

	return 0;
}