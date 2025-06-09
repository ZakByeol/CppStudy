#include <iostream>

// C++ : Class
class Cmy
{
	// C++ : ���� ���� ������
	// private protected public
public:
	// �ܺο��� ���� ����
	int PublicInt;

	// �� C++ ��� : ��� �Լ�
	void SetInt(int _input)
	{
		PrivateInt = _input; // this-> �� �����Ǿ� ����
	}

	// �� C++ ��� :���� ������, ����(=)�� �߻������� ȣ��Ǵ� �Լ� [!]
	const Cmy& operator =(const Cmy& _Other) // �ڷ���& >> referrence DataType
	{
		PublicInt = _Other.PublicInt;
		PrivateInt = _Other.PrivateInt;
		return *this;
	}
public:
	// �� C++ ��� : ������, ��ü�� ���������/���� �ɶ� ȣ��Ǵ� ��
	Cmy() : PrivateInt(0), PublicInt(0) // �̴ϼȶ�����
	{

	}
	// �� C++ ��� : �Ҹ���, ��ü�� �Ҹ��Ҷ� ȣ��Ǵ� ��
	~Cmy()
	{

	}
private:
	int PrivateInt;
	// �ܺο��� ���� �Ұ�
};

int main()
{
	Cmy test;
	test.PublicInt = 10;
	test.SetInt(100); // ��� �Լ� >> C++ ���

	Cmy c1,c2,c3,c4;
	c1.SetInt(1);
	c2.SetInt(2);
	c3.SetInt(3);

	c4 = c2; // c2�� operator =�� �μ��� ��

	int a = 10;
	int& iRef = a; // ���� �ڷ��� Referrence DataType
	iRef = 100;

	return 0;
}