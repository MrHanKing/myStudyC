//
// Created by HanJun on 2017/9/12.
//
#include <stdio.h>
/**
82.请编写一个函数fun，它的功能使：计算n门课程的平均分，计算结果作为函数值返回。
 **/
double fun(int score[],int n);

void main()
{
    int score[] = {70,60,70,80,78,97};
    int n = sizeof(score)/ sizeof(score[0]);

    printf("平均分是：%f",fun(score,n));
}
double fun(int score[],int n)
{
    double ave = 0.0;
    for (int i = 0; i < n; ++i) {
        ave += score[i];
    }
    ave = ave / n;
    return ave;
}
