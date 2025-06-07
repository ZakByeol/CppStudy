#include <iostream>
#include "header.h"

// 1. 배열 동적 할당 초기화 함수
// 2. 배열 추가 함수(재할당)
// 3. 배열 삭제 함수
// 4. 배열 재할당 함수

void reallocate(tJagged* _tArr)
{
	int* pNew = (int*)calloc(_tArr->vMaxLimit * 2, sizeof(int));
	for (int i = 0; i<_tArr->vAmount; i++)
	{
		pNew[i] = _tArr->pInt[i];
	}
	free(_tArr->pInt);
	_tArr->pInt = pNew;
	_tArr->vMaxLimit *= 2;
}

void init_jagged(tJagged* _tArr, int _vSize)
{
	_tArr->pInt = (int*)calloc(_vSize, sizeof(int));
	_tArr->vAmount = 0;
	_tArr->vMaxLimit = _vSize;
}

void add_jagged(tJagged* _tArr, int _vAddData)
{
	if (_tArr->vAmount >= _tArr->vMaxLimit)
	{
		reallocate(_tArr);
	}
	_tArr->pInt[_tArr->vAmount++] = _vAddData;
}

void free_jagged(tJagged* _tArr)
{
	free(_tArr->pInt);
	_tArr->vAmount = 0;
	_tArr->vMaxLimit = 0;
}
