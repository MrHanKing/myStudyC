//
// Created by HanJun on 2017/9/14.
//
#include <stdio.h>
/**
97.请编写函数fun，其功能是：计算并输出下列多项式值：
s=1+1/(1+2)+1/(1+2+3)+..1/(1+2+3...+50)
 **/
void main()
{
    double d = 1;//分母
    double s = 1;
    int len = 50;
    for (int i = 1; i < len; ++i) {
        d += i+1;
        s += 1 / d;
    }
    printf("结果是：%f",s);
}
