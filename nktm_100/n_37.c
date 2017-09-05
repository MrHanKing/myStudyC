//
// Created by HanJun on 2017/9/5.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>
/**
37.某学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在
 主函数中给出。请编写函数fun，它的功能是：求出该学生的平均分放在记录的ave成员中。
 请自己定义正确的形参。
 **/
typedef struct
{
    char name[12];
    int score[8];
    int ave;
}Jilv;

void fun(Jilv *s);

void main()
{
    Jilv *s;
    s = malloc(sizeof(Jilv));
    strcpy(s->name,"hanJun");
    for (int i = 0; i < 8; ++i) {
        s->score[i] = 10 + i * 10;
        printf("科目[%d]成绩是：%d\n",i+1,s->score[i]);
    }
    fun(s);
    printf("平均分是:%d\n",s->ave);
}
void fun(Jilv *s)
{
    int ave = 0;
    for (int i = 0; i < 8; ++i) {
        ave += s->score[i];
    }
    s->ave = ave / 8;
}
