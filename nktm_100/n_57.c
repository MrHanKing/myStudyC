//
// Created by HanJun on 2017/9/9.
//
#include <stdio.h>

/**
57.学生的记录是由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功
 能是：把指定分数范围内的学生数据放在b所指的数组中，分数范围内的学生人数由函数值返回。
 **/
typedef struct
{
    char name[12];
    int score;
}Student;

int main()
{
    Student s[] = {
            {"han",  80},
            {"Jun",  70},
            {"stan", 95},
    };
    Student b[10];
    int n = sizeof(s)/ sizeof(s[0]);
    int min = 75,max = 95,k = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i].score <= max && s[i].score >= min){
            b[k] = s[i];
            printf("[%s]符合标准\n",b[k].name);
            k++;
        }
    }
    printf("分数范围内的学生人数:%d",k);
    return k;
}
