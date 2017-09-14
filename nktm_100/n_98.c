//
// Created by HanJun on 2017/9/14.
//
#include <stdio.h>
/**
98.请编写函数fun，它的功能是：计算并输出n(包括n)以内能被5或9整除的所有自然数的倒数之和。
 **/
void main()
{
    int n = 50;
    double s = 0;
    for (int i = 1; i < n+1; ++i) {
        if (i % 5 == 0 || i % 9 == 0){
            s += 1 / (double)i;
        }
    }
    printf("n = [%d]的计算结果为：%f",n,s);
}
