

typedef struct _tagnode
{
	int vData;
	_tagnode* pNextNode;
}tNode;

typedef struct _tagList
{
	int vAmount;
	tNode* pHeadNode;
}tLinkedList;

