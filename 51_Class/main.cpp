#include <iostream>

// C++ : Class
class Cmy
{
	// C++ : 접근 제한 지정자
	// private protected public
public:
	// 외부에서 접근 가능
	int PublicInt;

	// ⓐ C++ 기능 : 멤버 함수
	void SetInt(int _input)
	{
		PrivateInt = _input; // this-> 가 생략되어 있음
	}

	// ⓑ C++ 기능 :대입 연산자, 대입(=)가 발생했을때 호출되는 함수 [!]
	const Cmy& operator =(const Cmy& _Other) // 자료형& >> referrence DataType
	{
		PublicInt = _Other.PublicInt;
		PrivateInt = _Other.PrivateInt;
		return *this;
	}
public:
	// ⓒ C++ 기능 : 생성자, 객체가 만들어질때/선언 될때 호출되는 것
	Cmy() : PrivateInt(0), PublicInt(0) // 이니셜라이저
	{

	}
	// ⓓ C++ 기능 : 소멸자, 객체가 소멸할때 호출되는 것
	~Cmy()
	{

	}
private:
	int PrivateInt;
	// 외부에서 접근 불가
};

int main()
{
	Cmy test;
	test.PublicInt = 10;
	test.SetInt(100); // 멤버 함수 >> C++ 기능

	Cmy c1,c2,c3,c4;
	c1.SetInt(1);
	c2.SetInt(2);
	c3.SetInt(3);

	c4 = c2; // c2가 operator =의 인수에 들어감

	int a = 10;
	int& iRef = a; // 참조 자료형 Referrence DataType
	iRef = 100;

	return 0;
}