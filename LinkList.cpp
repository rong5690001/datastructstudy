//
// Created by user on 2020/1/30.
//

#include <cstdlib>
#include <iostream>
#include "LinkList.h"

using namespace std;

Status GetElem(LinkList L, int i, ElemType *e) {
    int j = 0;              /* j为计数器 */
    LinkList p;            /* 声明一指针p */
    p = L->next;        /* 让p指向链表L的第1个结点 */
    /* p不为空且计数器j还没有等于i时，循环继续 */
    while (p && j < i) {
        p = p->next;    /* 让p指向下一个结点 */
        ++j;
    }
    if (!p || j > i)
        return ERROR;      /* 第i个结点不存在 */
    *e = p->data;       /* 取第i个结点的数据 */
    return OK;
}

Status ListInsert(LinkList *L, int i, ElemType e) {
    int j;
    LinkList p, s;
    p = *L;
    j = 1;
/* 寻找第i-1个结点 */
    while (p && j < i) {
        p = p->next;
        ++j;
    }
/* 第i个结点不存在 */
    if (!p || j > i)
        return ERROR;
/* 生成新结点（C标准函数） */
    s = (LinkList) malloc(sizeof(Node));
    s->data = e;
/* 将p的后继结点赋值给s的后继 */
    s->next = p->next;
/* 将s赋值给p的后继 */
    p->next = s;
    return OK;
}

void CreateListHead(LinkList *L, int n) {
    LinkList p;
    int i;
    /* 初始化随机数种子 */
    srand(time(0));
    *L = (LinkList) malloc(sizeof(Node));
    /* 先建立一个带头结点的单链表 */
    (*L)->next = NULL;
    for (i = 0; i < n; i++) {
        /* 生成新结点 */
        p = (LinkList) malloc(sizeof(Node));
        /* 随机生成100以内的数字 */
        p->data = rand() % 100 + 1;
        p->next = (*L)->next;
        /* 插入到表头 */
        (*L)->next = p;
    }
}

void LinkList_Test() {
//    auto linkList = (LinkList) malloc(sizeof(Node));
//    int size = 0;
//    for (int i = 0; i < 100; ++i) {
//        if (ListInsert(&linkList, i, i)) {
//            size++;
//        }
//    }
//    cout << "sizeOf:" << size << endl;
    LinkList *l;
    CreateListHead(l, 100);
    LinkList p = *l;
    for (int i = 0; i < 100; ++i) {
        ElemType *e;
        GetElem(p, i, e);
//        cout << "LinkList第" + (i) + "个元素是：" + (*e) << endl;
    }
}