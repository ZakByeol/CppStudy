#pragma once
class ClassArr
{
private:
	int* m_pInt;
	int m_iCount;
	int m_iMaxCount;

public:
	// [!] �����ڿ� �Ҹ��ڴ� �����Ϸ����� ���� �����ϵ��� Public�� ����
	ClassArr();
	~ClassArr();

public:
	void push_back(int _Data);
	void resize(int _iResizeCount);

	//int* operator[] (int _index);
	int& operator[] (int _index);
};

