//
// Created by user on 2020/2/11.
//

#include <MacTypes.h>
#include <printf.h>
#include <math.h>
#include <cstdlib>
#include "BiTNode.h"

void PreOrderTraverse(BiTree T) {
    if (T == nullptr)
        return;
    /* 显示结点数据，可以更改为其他对结点操作 */
    printf("%c", T->data);
    /* 再先序遍历左子树 */
    PreOrderTraverse(T->lchild);
    /* 最后先序遍历右子树 */
    PreOrderTraverse(T->rchild);
}

void createBiTree(BiTree *T) {
    //ch是哪来的？
    TElemType ch;
    printf("%d", &ch);
    if (ch == '#')
        *T = nullptr;
    else
    {
        *T = (BiTree)malloc(sizeof(BiTNode));
        if (!*T)
            exit(OVERFLOW);
        /* 生成根结点 */
        (*T)->data = ch;
        /* 构造左子树 */
        createBiTree(&(*T)->lchild);
        /* 构造右子树 */
        createBiTree(&(*T)->rchild);
    }
}
