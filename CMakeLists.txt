cmake_minimum_required(VERSION 3.15)
project(study)

set(CMAKE_CXX_STANDARD 14)

add_executable(study main.cpp LinkList.cpp LinkList.h ElemType.h Stack.cpp Stack.h Queue.cpp Queue.h BiTNode.cpp BiTNode.h BiThrNode.cpp BiThrNode.h MGraph.cpp MGraph.h)