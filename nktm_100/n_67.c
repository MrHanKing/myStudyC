//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>

/**
67.学生的记录时由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，
 它的功能时：函数返回指定学号的学生数据，指定的学号在主函数中输入。若没找到指定学号，在结构体
 变量中给学号置空串，给成绩置-1,作为函数值返回(用于字符串比较的函数是strcmp)。
 **/
typedef struct
{
    int nameNum;//学号,我直接用int处理了，若用char处理则用strcmp比较
    int score;
}Student;

void main()
{
    Student s[] = {
            {1001, 80},
            {1002, 70},
            {1003, 95},
    };
    int studentNum = 1005;//要查找的学号；
    Student output;//用于存储结果输出
    int len = 3;

    for (int i = 0; i < len; ++i) {
        if (s[i].nameNum == studentNum){
            output = s[i];
            break;
        }
        if (i == len - 1) {
            output.nameNum = 0;
            output.score = -1;
        }
    }
    printf("查找结果：学号[%d],成绩[%d]",output.nameNum,output.score);
}
