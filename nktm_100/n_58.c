//
// Created by HanJun on 2017/9/9.
//
#include <stdio.h>
#include <math.h>

/**
58.编写函数藏服那，它的功能是：求n以内(不包括n)同时能被3与7整除
 的所有自然数之和的平方根s，并作为函数值返回。
 **/

double main()
{
    int n = 22;
    double s = 0.0;

    //得到符合条件的自然数之和
    for (int i = 0; i < n; ++i) {
        if (i % 3 == 0 && i % 7 == 0){
            s += i;
        }
    }
    //平方根
    s = sqrt(s);
    printf("返回的结果是：%f",s);
    return s;
}
