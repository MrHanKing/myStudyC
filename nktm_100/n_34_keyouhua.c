//
// Created by HanJun on 2017/9/4.
//
#include<stdio.h>

/**
34.学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编
 写函数fun，它的功能使：把分数最高的学生数据放在h所指的数组中，注意：分数最高的学生
 可能不止一个，函数返回分数最高的学生的人数。
 **/
//定义结构体
typedef struct one
{
    char name[12];
    int score;
}One,*pOne;

int fun(One *s,One *h,int slen);

void main()
{
    One s[3]={0};
    int t = 3;
    One h[10] ={0};
    for (int i = 0; i < t; ++i) {
        printf("学生的名字和成绩(成绩是整数)：");
        scanf("%s %d",s[i].name,&s[i].score);
    }
    t = sizeof(s)/ sizeof(s[0]);
    printf("分数最高的学生的人数%d",fun(s,h,t));

}

int fun(One *s,One *h,int slen)
{
//    int len = ARRAY_LEN;
//    C语言中，定义数组后可以用sizeof命令获得数组的长度（即可容纳元素个数）。
// 但是通过传递数组名参数到子函数中，以获得数组长度是不可行的，因为在子函数当中，数组
// 名会退化为一个指针。
    int max = 0;
    int k =0;

    printf("s 的 len = %d\n",slen);
    for (int i = 0; i < slen; ++i) {
        if (s[i].score > max) {
            max = s[i].score;
        }
    }
    for (int j = 0; j < slen; ++j) {
        if (s[j].score == max) {
            h[k] = s[j];
            k++;
        }
    }
    return k;
}
