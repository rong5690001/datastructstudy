#include <iostream>

using namespace std;

#include "LinkList.h"
#include "Queue.h"
#include "Stack.h"
#include "MGraph.h"

void test() {
    int a = 0;
    int b = 1;

    std::cout << (a & b) << std::endl;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    //test();
    //单链表测试
    //LinkList_Test();

    //栈测试
//    Stack_Test();

    //队列测试
//    Queue_Test();

//    test();

    MGraph_test();
    return 0;
}


