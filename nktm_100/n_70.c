//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>

/**
70.编写函数fun，它的功能时：计算并输出下列级数和：
S=1/1*2+1/2*3+...+1/n(n+1)
 **/
void main()
{
    int n = 10;
    double s = 0.0;
    double denominator;

    for (int i = 1; i < n+1; ++i) {
        denominator = i * (i+1);
        s += 1 / denominator;
    }
    printf("输出结果：%f",s);
}
