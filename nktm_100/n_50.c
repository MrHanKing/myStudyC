//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>
/**
50.已知学生的记录是由学号和学习成绩构成，N名学生的数据已存入a机构体数组中。请编写函数fun，该函数的
 功能是：找出成绩最高的学生记录，通过形参返回主函数(规定只有一个最高分)。
 **/
typedef struct
{
    char name[12];
    int score;
}Student;

int max(Student a[],int N);

int main()
{
    Student a[] = {
            {"han",  80},
            {"Jun",  70},
            {"stan", 95},
    };
    int n = 3;
    printf("输出的结果是：%d",max(a,n));
}

int max(Student a[],int N)
{
    int max = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i].score > max){
            max = a[i].score;
        }
    }
    return max;
}

