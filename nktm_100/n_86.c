//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
#include <math.h>
/**
86.请编写函数fun，计算并输出给定10个数的方差：
 **/
void main()
{
    int a[] = {40,42,554,2,35,4,6,6,44,32};
    int num = 10;
    double ave = 0.0;
    double d = 0.0;

    //求平均
    for (int i = 0; i < num; ++i) {
        ave += a[i];
    }
    ave = ave / num;
    //求方差
    for (int j = 0; j < num; ++j) {
        d += pow(a[j] - ave,2);
    }
    printf("方差为：%f",d);
}
