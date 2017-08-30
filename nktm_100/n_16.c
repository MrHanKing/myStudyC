//
// Created by HanJun on 2017/8/30.
//
#include<stdio.h>


//*16.请编写一个函数float fun(double h),函数的功能使对变量h中的
// 值保留2位小树，并对第三位进行四舍五入(规定h中的值为正数)。
float fun(double h);

void main(){
    double h = 199.124;
    printf("结果是%.2f",fun(h));
}
float fun(double h) {
    float result = 0.0;
    int g,l,t = 0;
    g = h * 100;
    l = h * 1000;
    t = l % 10;
    if (t >= 5) {
        g++;
    }
    result = g / 100.0;
    return result;
}
