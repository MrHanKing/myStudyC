//
// Created by HanJun on 2017/9/14.
//
#include <stdio.h>
#include <math.h>
/**
100.请编写函数fun，其功能是：计算并输出 s=1+(1+2(0.5))+(1+2(0.5)+3(0.5))+...+(1+2(0.5)+3(0.5)+...+n(0.5))
 **/
void main()
{
    double s = 0,one = 0;
    int n = 2;

    for (int i = 1; i < n+1; ++i) {
        one += pow((double)i, 0.5);
        s += one;
    }

    printf("n = [%d]的输出结果是%f",n,s);
}
