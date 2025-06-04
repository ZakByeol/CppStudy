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
	printf("매개변수 : %d\n", a);
}
void Overload(float b)
{
	printf("매개변수 : %f\n", b);
}

// wcscat_s 예외 처리 구현
// BufferSize 복사 받을 공간의 최대 공간을 설정하기 위함
void StrCat(wchar_t* _pDest, unsigned int _vBufferSize, const wchar_t* _pSrc)
{
	int iDestLen = GetLength(_pDest);
	int isSrcLen = GetLength(_pSrc);

	if (_vBufferSize < iDestLen + isSrcLen + 1) // exception handling
	{
		assert(nullptr);
	}

	// 생각하는 습관 길들이기 ~

	for (int i = 0; i <= isSrcLen; i++) // Change each character by starting end of _pDest
	{
		_pDest[iDestLen + i] = _pSrc[i];
	}
}


int main()
{
	// Function Overloading
	// 인수의  갯수나 형식을 고려하여 컴파일러가 다른 함수로 인식함
	Overload(10);
	Overload(1.2f);

	wchar_t szString[100] = L"abc";
	wcscat_s(szString, 100, L"def");

	wchar_t TestBuffer[10] = L"abc";
	//wcscat_s(TestBuffer, 10, L"defghijklmno"); // error
	StrCat(TestBuffer, 10, L"def");
	return 0;
}