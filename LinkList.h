//
// Created by user on 2020/1/30.
//

#include "ElemType.h"

/* 线性表的单链表存储结构 */
typedef struct Node {
    ElemType data;
    struct Node *next;
} Node;
/* 定义LinkList */
typedef struct Node *LinkList;

/* 初始条件：顺序线性表L已存在，1≤i≤
   ListLength(L) */
/* 操作结果：用e返回L中第i个数据元素的值 */
Status GetElem(LinkList L, int i, ElemType *e);

/* 初始条件：顺序线性表L已存在，1≤i≤
   ListLength(L)， */
/* 操作结果：在L中第i个结点位置之前插入新的数
   据元素e，L的长度加1 */
Status ListInsert(LinkList *L, int i, ElemType e);

/* 随机产生n个元素的值，建立带表头结点的单链
   线性表L（头插法） */
void CreateListHead(LinkList *L, int n);

void LinkList_Test();
