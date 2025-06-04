#include <cstdio>
#include <cwchar>

short FunctionWcscmp(const wchar_t* _pStr1, const wchar_t* _pStr2)
{
	short vResult = 0;

	// 1. �ش� �ݺ��� ������ ���ǹ����� �� ������ n��° ������ ASCII �ڵ带 ��
	// 2. _pSrt1 �� ������ -1, ũ�� 1 �����ϰ� break, ������ �׳� ����.
	// 3. Null Value�� �νĵǰ� �ΰ��� ASCII �ڵ� ���� 0 �ΰ��� 2�� ���ǹ��� Ȱ���Ͽ� ���̿� ���� ���ϰ� ����
	// 4. �ΰ��� ���ÿ� �νĵȴٸ� �׳� break

	int i = 0;
	while (true)
	{
		if (_pStr1[i] < _pStr2[i]) // Compare ASCII code with Compare Less Len
		{
			vResult = -1;
			break;
		}
		else if (_pStr1[i] > _pStr2[i])
		{
			vResult = 1;
			break;
		}

		// escape case : if Perfectly Correct
		if (_pStr1[i] == '\0' && _pStr2[i] == '\0')
		{
			break;
		}
		i++;
	}
	return vResult;
}