#include <cstdio>
#include <cwchar>

short FunctionWcscmp(const wchar_t* _pStr1, const wchar_t* _pStr2);

int main()
{

	wchar_t name[10] = L"Tommy";
	int test = wcscmp(name, L"Tomm");
	short result = FunctionWcscmp(name, L"Tommy");

	return 0;
}
