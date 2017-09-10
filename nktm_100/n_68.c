//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>

/**
68.请编写函数fun，其功能时：计算并输出下列多项式的值：
sn=1+1/1!+1/2!+1/3!+1/4!+...+1/n!
 **/
void main()
{
    int n = 10;//给定n值
    double sn = 1.0;
    double denominator;

    for (int i = 1; i < n+1; ++i) {
        denominator = 1.0;
        //计算分母的值
        for (int j = 1; j < i+1; ++j) {
            denominator = denominator * j;
        }
        //得到sn
        sn += 1 / denominator;
    }
    printf("输出结果：%f",sn);
}
