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

void InitList(tLinkedList* _pList); // �ʱ�ȭ
void PushBack(tLinkedList* _pList, int _vData); // ������ �߰�
void FreeEndElement(tNode* _pNode); // ���� ����Ʈ�� ��� ����
void FreeList(tLinkedList* _pList); // ���� ����Ʈ ����
