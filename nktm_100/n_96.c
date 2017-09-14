//
// Created by HanJun on 2017/9/14.
//
#include <stdio.h>
#include <math.h>
/**
96.请编写函数fun，其功能使：计算并输出给定数组(长度为9)中每相邻两个元素之平均值的平方根之和
 **/
void main()
{
    int a[9] = {4,6,3,6,8,3,5,7,9};
    int len = 9;
    double t,sum = 0;
    for (int i = 0; i < len-1; ++i) {
        t = (a[i] + a[i+1]) / 2;
        sum += sqrt(t);
    }
    printf("结果是：%f",sum);
}
