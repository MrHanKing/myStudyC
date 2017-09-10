//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>

/**
63.请编写一个函数fun，它的功能是：计算并输出给定整数n的所有因子(不包括1与自身)之和。规定n的值不大于1000。
 **/
void main()
{
    int n = 10;//给定因子
    int allDivisor = 0;
    for (int i = 1; i < n; ++i) {
        if (i == 1) {
            continue;
        }
        if (n % i == 0){
            allDivisor += i;
            printf("得到真因子：%d\n",i);
        }
    }
    printf("得到结果：%d",allDivisor);
}
