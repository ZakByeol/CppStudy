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
	// IDE에서 보면, 값들이 정수로 그대로 표현되어 있는데, 실제로 이진법으로 저장된 곳은 어디일까?
	// 메모리 공간인데, IDE에서는 보기 쉽게 처리되어 있는걸까?

	// String (1)
	wchar_t szwChar[10] = L"abcdef"; // L : 문자당 2byte씩 할당, 문자열의 원본 데이터를 배열로 옮겨온 것
	const wchar_t* pChar = L"abcdef"; // 문자열의 반환 값은 주소인가? O
	//pChar[1] = 'z'; -> const 키워드로 인해 역참조 불가
	// 문자열은 근데, 상수 판정 아닌가? O
	// 접구사 L >> 옆의 문자열이 wchar_t라고 알려줌
	// 강제 캐스팅과는 달리, 실제 데이터가 2byte씩 저장된 char 배열로 바꿔줌

	wchar_t valueW = ' 459';

	printf("%llu\n", sizeof(" 456"));
	printf("%d\n", valueW); // 하위2바이트 저장, 정보 소실로 인한 오류

	// String (2)
	{
		char szChar[10] = "abc한글";
		// 멀티바이트 : 문자에 따라서 가변길이로 대응 ex) "abc한글" > 한글은 2바이트 표현
		// Windows에만 잔재된 시스템임
		// Unicode : 2바이트, 와이드바이트 시스템 wchar_t L
	}
	wchar_t szName[10] = L"Raimond";
	int iLen = wcslen(szName);

	//String(3)
	iLen = GetLength(L"String");

	return 0;
}
