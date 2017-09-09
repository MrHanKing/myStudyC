//
// Created by HanJun on 2017/9/9.
//
#include <stdio.h>

/**
54.学生的记录由学号和成绩组称个，N名学生的数据已在主函数中放入结构体数组s中，请编写函
 数fun，它的功能是：把低于平均分的
 学生数据放在b所指的数组中，低于平均分的学生人数通过形参n传回，平均分通过函数值返回。
 **/
typedef struct
{
    char name[12];
    int score;
}Student;

float fun(Student a[],Student b[],int *p, int aLen);

void main()
{
    Student a[] = {
            {"han",  80},
            {"Jun",  70},
            {"stan", 95},
    };
    Student b[3];
    int manNum;
    int *p = &manNum;
    int aLen = sizeof(a)/ sizeof(a[0]);

    float ave;
    ave = fun(a,b,p,aLen);

    printf("低于平均分[%f]的人数为%d \n",ave,*p);
}

float fun(Student a[],Student b[],int *p, int aLen)
{
    float ave = 0;
    int num = 0;

    //得到平均数
    for (int i = 0; i < aLen; ++i) {
        ave += a[i].score;
    }
    ave = ave / aLen;
    //低于平均分的数据
    for (int j = 0; j < aLen; ++j) {
        if (a[j].score < ave) {
            b[num] = a[j];
            num++;
        }
    }
    //形参传回人数
    *p = num;
    //函数返回平均分
    return ave;
}
