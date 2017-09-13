//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
/**
90.请编写函数fun，其功能是：计算并输出下列多项式值:Sn=(1-1/2)+(1/3-1/4)+...+(1/(2n-1)1/2n).
 **/
double fun(int n);

void main()
{
    int n = 2;
    printf("结果是：%f",fun(n));
}

double fun(int n)
{
    double sn = 0.0;
    for (int i = 1; i < n+1; ++i) {
        sn += 1/ (double)(2 * i - 1) - 1 / (double)(2 * i);
    }
    return sn;
}
