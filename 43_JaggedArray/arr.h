#pragma once


typedef struct _tabArr
{
	int* pInt;
	int vCount;
	int vMaxLimit;


}tArr;

// Allocate more
void Reallocate(tArr* _pArr);

// initial function
void InitArr(tArr* _pArr);

// Add Function
void PushBack(tArr* _pArr, int _iData);

// free function
void FreeArray(tArr* _pArr);