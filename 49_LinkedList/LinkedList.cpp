#include "LinkedList.h"
#include <iostream>

void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;
}

void PushBack(tLinkedList* _pList, int _vData)
{
	tNode* pNode = (tNode*)malloc(sizeof(tNode));

	if (_pList->pHeadNode == nullptr)
	{
		// ⓐ - 초기 리스트 구조체에 첫번째 노드 주소가 없을 때,
		_pList->pHeadNode = pNode;
	}
	else
	{
		// ⓑ - 최종 노드 위치 탐색
		tNode* pCurrentNode = _pList->pHeadNode;
		while (true)
		{
			if (pCurrentNode->pNextNode == nullptr) // 다음 노드가 없을 때
			{
				break;
			}
			pCurrentNode = pCurrentNode->pNextNode; // 다음 노드 주소 할당
		}

		// ⓒ - 최종 노드에 다음 노드의 주소 할당
		pCurrentNode->pNextNode = pNode; 
	}
	// ⓓ - 리스트의 요소 개수 카운팅
	_pList->iCount++;
}


// ⓐ 새로운 tNode*를 선언 및 초기화
// ⓑ 해당 노드에 _vData 할당 및 다음 노드 주소를 _pList->pHeadNode 로 초기화
// ⓒ _pList->pHeadNode 는 새롭게 선언한 노드의 주소로 초기화
// ⓓ _pList->iCount 카운팅

void PushInfront(tLinkedList* _pList, int _vData)
{
	tNode* PushNode = (tNode*)malloc(sizeof(tNode));
	PushNode->iData = _vData;
	PushNode->pNextNode = _pList->pHeadNode;
	_pList->pHeadNode = PushNode;

	_pList->iCount++;
}

void FreeEndElement(tNode* _pNode)
{
	// escape code for Recursive
	if (_pNode == nullptr)
	{
		return;
	}
	FreeEndElement(_pNode->pNextNode); // Recursive
	free(_pNode); // Free the Memory at the end
}

void FreeList(tLinkedList* _pList)
{
	tNode* pDeleteNode = _pList->pHeadNode; // 해제할 메모리 주소
	while (pDeleteNode)
	{
		tNode* pNext = pDeleteNode->pNextNode;
		free(pDeleteNode);
		pDeleteNode = pNext;
	}
}