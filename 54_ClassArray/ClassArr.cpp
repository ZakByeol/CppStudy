#include "ClassArr.h"
#include <cassert>

// ��  ClassArr Ŭ���� �ȿ� �����ϴ� ������ ����
ClassArr::ClassArr()
	: m_pInt(nullptr)
	, m_iCount(0)
	, m_iMaxCount(2) // �ּ����� �޸� �Ҵ�
	// �� ���� ������� �Ȱ��� �ʱ�ȭ�ϱ�(�𽺾����Part)
{
	m_pInt = new int[2];
}

// �� ClassArr Ŭ���� �ȿ� �����ϴ� �Ҹ��� ����
ClassArr::~ClassArr()
{
	delete[] m_pInt;
	// CTest* test = new CTest;
	// �� ������/�Ҹ��� �۾����� �� �ڿ� �Ҵ��Ŵ
}

// ______________________________

// �� �� �Ҵ� �Լ� push_back : ����
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

// �� �޸� �߰� �Ҵ� �Լ� resize : ����
void ClassArr::resize(int _iResizeCount)
{
	// �� ����ó�� : ������ �޸� ũ�⺸�� ���� ��ġ�� ��Ȯ�� �Ϸ��� ���
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}

	int* pNew = new int[_iResizeCount]; // �� ��Ȯ�� ��ų ���� ��ŭ �����Ҵ�
	for (int i = 0; i < m_iCount; i++) // �� ���� ������ �ִ� �����͸� pNew�� ����
	{
		pNew[i] = m_pInt[i];
	}
	delete[] m_pInt; // �� ���� �޸� ������ ����
	m_pInt = pNew; // �� ���� �Ҵ�� ������ �ּ� �Ҵ�
	m_iMaxCount = _iResizeCount; // Cange vMaxLimit Value for _iResizeCount
}

// ______________________________


int& ClassArr::operator[](int _index)
{
	return m_pInt[_index];
}
