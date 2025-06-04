#include <assert.h>
#include  <cstdio>
#include <stdlib.h>
#include <wchar.h>
#pragma warning(disable: 4996)

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

void Overload(int a)
{
	printf("�Ű����� : %d\n", a);
}
void Overload(float b)
{
	printf("�Ű����� : %f\n", b);
}

// wcscat_s ���� ó�� ����
// BufferSize ���� ���� ������ �ִ� ������ �����ϱ� ����
void StrCat(wchar_t* _pDest, unsigned int _vBufferSize, const wchar_t* _pSrc)
{
	int iDestLen = GetLength(_pDest);
	int isSrcLen = GetLength(_pSrc);

	if (_vBufferSize < iDestLen + isSrcLen + 1) // exception handling
	{
		assert(nullptr);
	}

	// �����ϴ� ���� ����̱� ~

	for (int i = 0; i <= isSrcLen; i++) // Change each character by starting end of _pDest
	{
		_pDest[iDestLen + i] = _pSrc[i];
	}
}


int main()
{
	// Function Overloading
	// �μ���  ������ ������ ����Ͽ� �����Ϸ��� �ٸ� �Լ��� �ν���
	Overload(10);
	Overload(1.2f);

	wchar_t szString[100] = L"abc";
	wcscat_s(szString, 100, L"def");

	wchar_t TestBuffer[10] = L"abc";
	//wcscat_s(TestBuffer, 10, L"defghijklmno"); // error
	StrCat(TestBuffer, 10, L"def");
	return 0;
}