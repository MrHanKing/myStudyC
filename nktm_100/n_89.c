//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
#include <malloc.h>
/**
89.学生的记录是由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功
 能是：把高于等于平均分的学生数据放在b所指的数组中，高于等于平均分的学生人数通过形参n传回，平均分通过函数值返回。
 **/
typedef struct
{
    int nameNum;
    int score;
}Student;

double fun(Student s[],Student b[],int *n,int sNum);

void main()
{
    Student s[] = {
            {1001, 80},
            {1002, 70},
            {1003, 95},
            {1004, 70},
            {1005, 75},
    };
    Student *b;
    int *n,sNum = 5;
    double ave;
    n = (int *)malloc(sizeof(int));
    b = (Student *)malloc(sizeof(Student) * sNum);
    ave = fun(s,b,n,sNum);

    printf("平均分[%f],高于平均分人数[%d]",ave,*n);
    free(b);
    free(n);
}

double fun(Student s[],Student b[],int *n,int sNum)
{
    double ave = 0.0;
    int num = 0;
    //求平均分
    for (int i = 0; i < sNum; ++i) {
        ave += s[i].score;
    }
    ave = ave / sNum;
    //高于等于平均分的学生数据放在b所指的数组中，高于等于平均分的学生人数通过形参n传回
    for (int j = 0; j < sNum; ++j) {
        if (s[j].score >= ave){
            b[num] = s[j];
            num++;
        }
    }
    *n = num;
    return ave;
}
