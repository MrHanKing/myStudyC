//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
/**
93.请编写函数fun，它的功能是计算下列级数和，和值由函数值返回。
s=1+x+x(2)/2!+x(3)/3!+...x(n)/n!
 **/
double fun(int m,double x);

void main()
{
    int m = 2;
    double x = 2;
    printf("结果是：%f",fun(m,x));
}

double fun(int m, double x)
{
    double sn = 1.0;
    double s = 1.0;
    for (int i = 1; i < m+1; ++i) {
        sn = sn * x / (double)i;
        s += sn;
    }
    return s;
}
