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
		// �� - �ʱ� ����Ʈ ����ü�� ù��° ��� �ּҰ� ���� ��,
		_pList->pHeadNode = pNode;
	}
	else
	{
		// �� - ���� ��� ��ġ Ž��
		tNode* pCurrentNode = _pList->pHeadNode;
		while (true)
		{
			if (pCurrentNode->pNextNode == nullptr) // ���� ��尡 ���� ��
			{
				break;
			}
			pCurrentNode = pCurrentNode->pNextNode; // ���� ��� �ּ� �Ҵ�
		}

		// �� - ���� ��忡 ���� ����� �ּ� �Ҵ�
		pCurrentNode->pNextNode = pNode; 
	}
	// �� - ����Ʈ�� ��� ���� ī����
	_pList->iCount++;
}


// �� ���ο� tNode*�� ���� �� �ʱ�ȭ
// �� �ش� ��忡 _vData �Ҵ� �� ���� ��� �ּҸ� _pList->pHeadNode �� �ʱ�ȭ
// �� _pList->pHeadNode �� ���Ӱ� ������ ����� �ּҷ� �ʱ�ȭ
// �� _pList->iCount ī����

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
	tNode* pDeleteNode = _pList->pHeadNode; // ������ �޸� �ּ�
	while (pDeleteNode)
	{
		tNode* pNext = pDeleteNode->pNextNode;
		free(pDeleteNode);
		pDeleteNode = pNext;
	}
}