#pragma once
class ClassArr
{
private:
	int* m_pInt;
	int m_iCount;
	int m_iMaxCount;

public:
	// [!] 생성자와 소멸자는 컴파일러에서 접근 가능하도록 Public에 선언
	ClassArr();
	~ClassArr();

public:
	void push_back(int _Data);
	void resize(int _iResizeCount);

	//int* operator[] (int _index);
	int& operator[] (int _index);
};

