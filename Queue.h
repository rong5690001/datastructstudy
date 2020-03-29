//
// Created by user on 2020/2/2.
//

#ifndef STUDY_QUEUE_H
#define STUDY_QUEUE_H

#include "ElemType.h"

#define MAXSIZE 20
/* QElemType类型根据实际情况而定，这里假设为int */
typedef int QElemType;
/* 循环队列的顺序存储结构 */
typedef struct {
    QElemType data[MAXSIZE];
    /* 头指针 */
    int front;
    /* 尾指针，若队列不空，
       指向队列尾元素的下一个位置 */
    int rear;
} SqQueue;

/* 初始化一个空队列Q */
Status InitQueue(SqQueue *Q);

/* 入队 */
Status Push(SqQueue *q, QElemType e);

/* 出队 */
Status Pop(SqQueue *q, QElemType *e);

/* 队列是否已满 */
Status isFull(SqQueue q);

/* 队列是否为空 */
Status isEmpty(SqQueue q);

void Queue_Test();

#endif //STUDY_QUEUE_H
