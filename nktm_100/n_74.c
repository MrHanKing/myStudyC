//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>

/**
74.学生的记录由学号和成绩组成N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它
 的功能时：把分数最低的学生数据放在h所指的数组中，注意：分数最低的学生可能不止一个，函数返
 回分数最低的学生的人数。
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
    Student h[100] = {0};
    int n = sizeof(s) / sizeof(Student);//学生人数
    int num = 0;//分数最低的学生的人数num
    int min;

    // 求出最低分
    min = s[0].score;
    for (int i = 0; i < n; ++i) {
        if (s[i].score < min){
            min = s[i].score;
        }
    }
    //把最低分的人放入h中
    for (int j = 0; j < n; ++j) {
        if (s[j].score == min){
            h[num] = s[j];
            num++;
        }
    }
    printf("最低分人数有：%d",num);
}
