//
// Created by user on 2020/2/1.
//

#ifndef STUDY_STACK_H
#define STUDY_STACK_H

#include <iostream>
#include "ElemType.h"

using namespace std;

#define MAXSIZE 20

/* SElemType类型根据实际情况而定，这里假设为int */
typedef int SElemType;
typedef struct {
    SElemType data[MAXSIZE];
    /* 用于栈顶指针 */
    int top;
} SqStack;

/* 插入元素e为新的栈顶元素 */
Status Push(SqStack *s, SElemType e);

void Stack_Test();

#endif //STUDY_STACK_H
