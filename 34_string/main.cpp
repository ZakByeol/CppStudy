#include <cstdio>
#include <stdlib.h>
#include <wchar.h>

// String3's function
unsigned int GetLength(const wchar_t* _pStr)
{
	int i = 0;
	while (true)
	{
		if (_pStr[i] == '\0')
			break;
		i++;
	}
	return i;
}



int main()
{
	// About ASCII code
	char a = 1; // 1 : '\x1'
	bool b = 1; // 1 : true
	wchar_t wc = 49; // 2byte character, Unicode
	short s = 49;
	// IDE���� ����, ������ ������ �״�� ǥ���Ǿ� �ִµ�, ������ ���������� ����� ���� ����ϱ�?
	// �޸� �����ε�, IDE������ ���� ���� ó���Ǿ� �ִ°ɱ�?

	// String (1)
	wchar_t szwChar[10] = L"abcdef"; // L : ���ڴ� 2byte�� �Ҵ�, ���ڿ��� ���� �����͸� �迭�� �Űܿ� ��
	const wchar_t* pChar = L"abcdef"; // ���ڿ��� ��ȯ ���� �ּ��ΰ�? O
	//pChar[1] = 'z'; -> const Ű����� ���� ������ �Ұ�
	// ���ڿ��� �ٵ�, ��� ���� �ƴѰ�? O
	// ������ L >> ���� ���ڿ��� wchar_t��� �˷���
	// ���� ĳ���ð��� �޸�, ���� �����Ͱ� 2byte�� ����� char �迭�� �ٲ���

	wchar_t valueW = ' 459';

	printf("%llu\n", sizeof(" 456"));
	printf("%d\n", valueW); // ����2����Ʈ ����, ���� �ҽǷ� ���� ����

	// String (2)
	{
		char szChar[10] = "abc�ѱ�";
		// ��Ƽ����Ʈ : ���ڿ� ���� �������̷� ���� ex) "abc�ѱ�" > �ѱ��� 2����Ʈ ǥ��
		// Windows���� ����� �ý�����
		// Unicode : 2����Ʈ, ���̵����Ʈ �ý��� wchar_t L
	}
	wchar_t szName[10] = L"Raimond";
	int iLen = wcslen(szName);

	//String(3)
	iLen = GetLength(L"String");

	return 0;
}
