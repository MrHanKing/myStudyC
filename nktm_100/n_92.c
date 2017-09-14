//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
#include <math.h>
/**
92.请编写函数fun，它的功能是计算：s=(ln(1)+ln(2)+ln(3)+...+ln(m))(0.5),s作为函数值返回。
 **/
double fun(int m);

void main()
{
    int m = 2;
    printf("结果是：%f",fun(m));
}

double fun(int m)
{
    double sn = 0.0;
    for (int i = 1; i < m+1; ++i) {
        sn += log((double)i);
    }
    sn *= 0.5;
    return sn;
}
