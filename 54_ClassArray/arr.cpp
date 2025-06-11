#include <iostream>

#include "arr.h"

// Allocate more
void Reallocate(tArr* _pArr)
{
	// �߸��� �� ����(������ ����) Heap Corruption
	// �̴� �߸��� ������ Ȥ�� ������ �ʱ�ȭ�� ���� ���� �� ���� �߻���
	int* pNew = (int*)malloc((_pArr->vMaxLimit * 2) * sizeof(int)); // expand

	for (int i = 0; i < _pArr->vCount; i++) // Copy Data
	{
		pNew[i] = _pArr->pInt[i];
	}

	free(_pArr->pInt); // free existing space

	_pArr->pInt = pNew; // Change pInt's pointer adress

	_pArr->vMaxLimit *= 2; // Cange vMaxLimit Value for twice
}

// Init Array
void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(10 * sizeof(int));
	_pArr->vCount = 0;
	_pArr->vMaxLimit = 10;
}

// Add Function
void PushBack(tArr* _pArr, int _iData)
{
	// if full size
	if (_pArr->vMaxLimit <= _pArr->vCount)
	{
		Reallocate(_pArr);
	}

	// Add Data
	_pArr->pInt[_pArr->vCount++] = _iData;
}

// free function
void FreeArray(tArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->vCount = 0;
	_pArr->vMaxLimit = 0;
}