//
// Created by HanJun on 2017/8/29.
//
#include<stdio.h>

//*9.编写一个函数fun，它的功能是：根据以
// 下公式求P的值，结果由函数值带回。m与n为两个正整数，且要求m>n。 p=m!/n!(m-n)!
float fun(int m,int n);

void main()
{
    int m = 5;
    int n = 2;
    float k = 0;

    k = fun(m,n);
    printf("结果是：%f",k);
}

float fun(int m,int n) {
    float result = 1;
    if (m > n) {
        for (int i = n+1; i < m+1; ++i) {
            result *= i;
        }
        for (int j = 1; j < m-n+1; ++j) {
            result /= j;
        }
    } else {
        printf("请输入第一个值 大于 第二个值");
    }
    return result;
}