//
// Created by user on 2020/2/1.
//

#include "Stack.h"

Status Push(SqStack *s, SElemType e) {
    if (s->top == MAXSIZE - 1) {
        return ERROR;
    }
    s->top++;
    s->data[s->top] = e;
    return OK;
}

void Stack_Test() {
    SqStack s = SqStack();
    cout << s.top << endl;
    Push(&s, 1);
    cout << s.data << endl;
}