#include <cstdio>
#include <cwchar>

short FunctionWcscmp(const wchar_t* _pStr1, const wchar_t* _pStr2)
{
	short vResult = 0;

	// 1. 해당 반복문 내에서 조건문으로 각 인자의 n번째 문자의 ASCII 코드를 비교
	// 2. _pSrt1 가 작으면 -1, 크면 1 저장하고 break, 같으면 그냥 진행.
	// 3. Null Value가 인식되고 널값의 ASCII 코드 값이 0 인것을 2의 조건문을 활용하여 길이에 따른 리턴값 설정
	// 4. 널값이 동시에 인식된다면 그냥 break

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