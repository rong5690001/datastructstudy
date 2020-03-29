//
// Created by user on 2020/1/28.
//
/* 存储空间初始分配量 */
#include "ElemType.h"

#define MAXSIZE 20
/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct {
    /* 数组存储数据元素，最大值为MAXSIZE */
    ElemType data[MAXSIZE];
    /* 线性表当前长度 */
    int length;
} SqList;

#ifndef STUDY_顺序线性表_H
#define STUDY_顺序线性表_H
/* Status是函数的类型，其值是函数结果状态代
   码，如OK等 */
/* 初始条件：顺序线性表L已存在，1≤i≤
   ListLength(L) */
/* 操作结果：用e返回L中第i个数据元素的值 */
Status getElem(SqList l, int i, ElemType *e);

Status addElem(SqList *l, ElemType e);

int test();
#endif //STUDY_顺序线性表_H
