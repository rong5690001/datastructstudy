//
// Created by user on 2020/2/11.
//

#ifndef STUDY_BITNODE_H
#define STUDY_BITNODE_H

typedef int TElemType;
/* 二叉树的二叉链表结点结构定义 */
/* 结点结构 */
typedef struct BiTNode {
    /* 结点数据 */
    TElemType data;
    /* 左右孩子指针 */
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

/* 二叉树的前序遍历递归算法 */
void PreOrderTraverse(BiTree T);

/* 按前序输入二叉树中结点的值（一个字符） */
/* #表示空树，构造二叉链表表示二叉树T。 */
void createBiTree(BiTree *T);

#endif //STUDY_BITNODE_H
