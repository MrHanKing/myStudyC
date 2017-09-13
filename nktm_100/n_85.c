//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
#include <malloc.h>
/**
85.N名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节
 点。请编写函数fun，它的功能是：求出平均分，由函数值返回；
 **/
typedef struct node
{
    char name[12];
    int score;
    struct node *pNext;
}Node,*pNode;

pNode createList(int num);
double fun(pNode pHead);

void main()
{
    Node *str;
    int num = 3;//最多100位学生
    //创建学生
    str = createList(num);
    //获得平均值
    printf("结果是：%f",fun(str));
}

double fun(pNode pHead)
{
    double ave = 0.0;
    int num = 0;
    pNode pStd = pHead;
    while(pStd->pNext != NULL){
        ave += pStd->pNext->score;
        num++;
        pStd = pStd->pNext;
    }
    ave = ave / num;
    return ave;
}

pNode createList(int num)
{
    pNode pHead = (pNode)malloc(sizeof(Node));//链表的头节点
    pNode pTail = pHead;//链表最后个节点
    pTail->pNext = NULL;
    for (int i = 0; i < num; ++i) {
        pNode pNew = (pNode)malloc(sizeof(Node));
        printf("第 %d 个学生的名字和成绩：",i+1);
        scanf("%s%d",pNew->name,&pNew->score);
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail = pNew;
    }
    printf("pHead 输入完成\n");
    return pHead;
}
