//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>
#include <math.h>

/**
65.请编写函数fun，其功能是：将两位数的正整数a、b合并成一个整数放在c中。合并的方式
 是：将a数的十位和个位数依次放在c数的百位和个位上，b数的十位和个位数依次放在c数的十位和千位上。
 **/
void fun(int a,int b,int *c);

void main()
{
    int a = 43, b = 62;
    int c;
    fun(a,b,&c);
    printf("输出C的结果：%d",c);
}

void fun(int a,int b,int *c)
{
    int len = 4;
    *c = 0;
    double n;

    for (int i = 0; i < len; ++i) {
        if (i % 2 == 0){
            n = pow(10,i);
//            printf("%d,%f,%d\n",i,n,(int)n);
            *c = *c + a % 10 * (int)n;
            a = a / 10;
        }else{
            *c = *c + b % 10 * (int)pow(10,i);
            b = b / 10;
        }
    }
}
