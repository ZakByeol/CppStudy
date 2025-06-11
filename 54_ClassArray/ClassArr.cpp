#include "ClassArr.h"
#include <cassert>

// ┌  ClassArr 클래스 안에 존재하는 생성자 정의
ClassArr::ClassArr()
	: m_pInt(nullptr)
	, m_iCount(0)
	, m_iMaxCount(2) // 최소한의 메모리 할당
	// └ 선언 순서대로 똑같이 초기화하기(디스어셈블리Part)
{
	m_pInt = new int[2];
}

// ┌ ClassArr 클래스 안에 존재하는 소멸자 정의
ClassArr::~ClassArr()
{
	delete[] m_pInt;
	// CTest* test = new CTest;
	// └ 생성자/소멸자 작업까지 한 뒤에 할당시킴
}

// ______________________________

// ┌ 값 할당 함수 push_back : 정의
void ClassArr::push_back(int _Data)
{
	// if full size
	if (m_iMaxCount <= m_iCount)
	{
		resize(m_iMaxCount * 2);
	}
	// Add Data
	m_pInt[m_iCount++] = _Data;
}

// ______________________________

// ┌ 메모리 추가 할당 함수 resize : 정의
void ClassArr::resize(int _iResizeCount)
{
	// ┌ 예외처리 : 본래의 메모리 크기보다 적은 수치로 재확장 하려는 경우
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}

	int* pNew = new int[_iResizeCount]; // ⓐ 재확장 시킬 개수 만큼 동적할당
	for (int i = 0; i < m_iCount; i++) // ⓑ 기존 공간에 있던 데이터를 pNew에 복사
	{
		pNew[i] = m_pInt[i];
	}
	delete[] m_pInt; // ⓒ 기존 메모리 공간은 해제
	m_pInt = pNew; // ⓓ 새로 할당된 공간의 주소 할당
	m_iMaxCount = _iResizeCount; // Cange vMaxLimit Value for _iResizeCount
}

// ______________________________


int& ClassArr::operator[](int _index)
{
	return m_pInt[_index];
}
