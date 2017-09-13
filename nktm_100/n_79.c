//
// Created by HanJun on 2017/9/12.
//
#include <stdio.h>
#include <malloc.h>
/**
79.已知学生的记录由学号和学习成绩构成，N名学生的数据已存入a结构体数组中。请编写函
 数fun，该函数的功能是：找出成绩最低的学生记录，通过形参返回主函数(规定只有一个最低分)。
 **/
typedef struct
{
    int nameNum;
    int score;
}Student;

void main()
{
    Student s[] = {
            {1001, 80},
            {1002, 70},
            {1003, 95},
            {1004, 70},
            {1005, 75},
    };
    Student *reward;
    int n = 5;
    int min;

    reward = (Student *)malloc(sizeof(Student));
    // 找出成绩最低的学生信息
    *reward = s[0];
    for (int i = 1; i < n; ++i) {
        if ( reward->score > s[i].score){
            *reward = s[i];
        }
    }
    //输出
    printf("学生[%d]的成绩最低，为[%d]分",reward->nameNum,reward->score);
    free(reward);
}
