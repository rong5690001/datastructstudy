//
// Created by user on 2020/1/28.
//

#include <iostream>
#include "顺序线性表.h"

using namespace std;

/* Status是函数的类型，其值是函数结果状态代
   码，如OK等 */
/* 初始条件：顺序线性表L已存在，1≤i≤
   ListLength(L) */
/* 操作结果：用e返回L中第i个数据元素的值 */
Status getElem(SqList l, int i, ElemType *e) {
    if (i < 0 || i >= l.length) {
        return ERROR;
    }

    *e = l.data[i];
    return OK;
}

Status addElem(SqList *l, ElemType e) {
    cout << "*l的地址:" << &*l << endl;
    if ((*l).length < MAXSIZE) {
        (*l).data[(*l).length] = e;
        (*l).length++;
        return OK;
    }
    return ERROR;
}

int test() {
    SqList SqList1 = SqList();
    cout << "&SqList1的地址:" << &SqList1 << endl;
    addElem(&SqList1, 1);
    cout << "SqList1的长度为:" << SqList1.length << endl;
}