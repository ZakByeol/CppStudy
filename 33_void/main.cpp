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
		pVoid = &a; // 포인터 값(adress) 원형의 타입을 해석을 안함
		pVoid = &b; // -> 이러면 역참조가 불가능함
		pVoid = &c; // -> 때문에 포인터 주소 연산도 불가능
		pVoid = &ll; // 아니 그럼 이걸 왜 써?
	}
	return 0;
}