//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>

/**
26.请编写一个函数fun，它的功能是：根据以下公式求X的值(要求满足精度0.0005，即某项小于0.0005时停止迭代)：
X/2=1+1/3+1×2/3×5+1×2×3/3×5×7+1×2×3×4/3×5×7×9+...+1×2×3×...×n/3×5×7×(2n+1)
程序运行后，如果输入精度0.0005，则程序输出为3.14...。
 **/
double fun(double eps);

void main()
{
    double eps = 0.0005;
    printf("%f",fun(eps));
}

double fun(double eps)
{
    double s = 0.0;
    double t = 1.0;
    int n = 1;
    while (t > eps) {
        s += t;
        t = t*n/(2*n+1);
        n++;
    }
    return s*2;
}
