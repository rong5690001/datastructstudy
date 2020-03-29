//
// Created by user on 2020/2/2.
//

#include <iostream>
#include "Queue.h"

/* 初始化一个空队列Q */
Status InitQueue(SqQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
    return OK;
}

Status Push(SqQueue *q, QElemType e) {
    if (isFull(*q)) {
        return ERROR;
    }

    q->data[q->rear] = e;
    q->rear = (q->rear + 1) % MAXSIZE;
}

QElemType Pop(SqQueue *q, QElemType *e) {
    if (isEmpty(*q)) {
        return ERROR;
    }
    *e = q->data[q->front];
    q->front = (q->front + 1) % MAXSIZE;
}

Status isFull(SqQueue q) {
    return (q.rear + 1) % MAXSIZE == q.front;
}

Status isEmpty(SqQueue q) {
    return q.front == q.rear;
}

void Queue_Test() {
    SqQueue q = SqQueue();
    Push(&q, 1);
    QElemType e;
    Pop(&q, &e);
    std::cout << e << std::endl;
}
