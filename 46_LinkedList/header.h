#pragma once

typedef struct _tagArray
{
	int* pInt;
	int vAmount;
	int vMaxLimit;
}tJagged;

void reallocate(tJagged* _tArr);
void init_jagged(tJagged* _tArr, int _vSize);
void add_jagged(tJagged* _tArr, int _vAddData);
void free_jagged(tJagged* _tArr);

