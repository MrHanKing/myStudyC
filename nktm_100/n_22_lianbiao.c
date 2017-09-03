//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>
#include <mem.h>
#include <malloc.h>
//*22.N名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编
// 写函数fun，它的功能是：找出学生的最高分，由函数值返回。

//定义结构体 链表中的节点;默认成绩是整数
typedef struct node
{
    char name[12];
    int score;
    struct node *pNext;
}Node,*pNode;

//函数声明
pNode createList();  //创建链表
int fun(pNode h);

void main()
{
    pNode pHead;
    pHead = createList();
    printf("学生的最高成绩是：%d",fun(pHead));
}

pNode createList()
{
    int num;

    pNode pHead = (pNode)malloc(sizeof(Node));//链表的头节点
    pNode pTail = pHead;//链表最后个节点
    pTail->pNext = NULL;
    printf("输入学生的个数：");
    scanf("%d",&num);
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
//遍历链表，求出最高成绩
int fun(pNode h)
{
//    printf("开始");
    int maxScore=0;
    pNode p = h->pNext;//链表有头节点，将头节点的指针给予临时节点p
    while (p != NULL) {
//        printf("%d",p->score);
        if((p->score) > maxScore) {
            maxScore = p->score;
        }
        p = p->pNext;//当初没打这行，犯了无限运行的错误。
    }
//    printf("结束%d",maxScore);
    return maxScore;
}

