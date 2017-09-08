//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>

/**
46.学生得记录由学号和成绩组称个，N名大学生得数据已在主函数中放入结构体数组s中，请编写
 函数fun，它的功能时：按分数的高低排列学生的记录，高分在前。
 **/
typedef struct
{
    char name[12];
    int score;
}Student;

int main()
{
    Student s[] = {
            {"han",80},
            {"Jun",70},
            {"stan",95},
    };
    Student temporary;
    int len = 3;
    for (int i = 0; i < len; ++i) {
        for (int j = i+1; j < len; ++j) {
            if (s[i].score < s[j].score) {
                temporary = s[i];
                s[i] = s[j];
                s[j] = temporary;
            }
        }
    }
    //输出
    for (int k = 0; k < len; ++k) {
        printf("学生[%s]的成绩是：%d\n",s[k].name,s[k].score);
    }
}

