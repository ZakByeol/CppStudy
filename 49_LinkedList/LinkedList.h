#pragma once

typedef struct _tagNode
{
	int iData;
	struct _tagNode* pNextNode; // Next node's adress
}tNode;

typedef struct _tagList
{
	tNode* pHeadNode;
	int iCount;
}tLinkedList;

void InitList(tLinkedList* _pList); // 초기화
void PushBack(tLinkedList* _pList, int _vData); // 데이터 추가
void FreeEndElement(tNode* _pNode); // 연결 리스트의 요소 해제
void FreeList(tLinkedList* _pList); // 연결 리스트 해제
