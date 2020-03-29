//
// Created by laura on 2020/3/29.
//

#ifndef STUDY_MGRAPH_H
#define STUDY_MGRAPH_H

/* 顶点类型应由用户定义 */
typedef char VertexType;
/* 边上的权值类型应由用户定义 */
typedef int EdgeType;
/* 最大顶点数，应由用户定义 */
#define MAXVEX 100
/* 用65535来代表∞ */
#define INFINITY 65535
typedef struct {
    /* 顶点表 */
    VertexType vexs[MAXVEX];
    /* 邻接矩阵，可看作边表 */
    EdgeType arc[MAXVEX][MAXVEX];
    /* 图中当前的顶点数和边数 */
    int numVertexes, numEdges;
} MGraph;

void CreateMGraph(MGraph *mGraph);

void MGraph_test();

#endif //STUDY_MGRAPH_H
